/**************************************************************************
 * This file contains the Kvasir Register Abstraction DSL (Domain Specific Language)
 * which provide an extra layer between Hardware SFRs
 * (Special Function Registers) and code accessing them.
 * Copyright 2015 Odin Holmes
 * Aditional contribution from Stephan Bökelmann

 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
****************************************************************************/
#pragma once
#include "MPL/Types.hpp"
#include "MPL/Utility.hpp"
#include "MPL/Algorithm.hpp"
#include "Types.hpp"
#include "Utility.hpp"


namespace Kvasir {

	namespace Register{

		namespace Detail{

			template<typename TRegisterAction>
			struct RegisterExec;

			template<typename TLocation, unsigned ClearMask, unsigned SetMask>
			struct GenericReadMaskOrWrite{
				unsigned operator()(unsigned in = 0){
					auto i = GetAddress<TLocation>::read();
					i &= ~ClearMask;
					i |= SetMask | in;
					GetAddress<TLocation>::write(i);
					return i;
				}
			};

			template<typename TLocation, unsigned ClearMask, unsigned XorMask>
			struct GenericReadMaskXorWrite{
				unsigned operator()(unsigned in = 0){
					auto i = GetAddress<TLocation>::read();
					i &= ~ClearMask;
					i ^= (XorMask | in);
					GetAddress<TLocation>::write(i);
					return i;
				}
			};

			//write literal with read modify write
			template<typename TAddress, unsigned Mask, bool Readable, bool SetToClear, typename FieldType, unsigned Data>
			struct RegisterExec<
				Register::Action<
					BitLocation<TAddress,Mask,Access<Readable,true,false,false,SetToClear>,FieldType>,
					WriteLiteralAction<Data>>>
				: GenericReadMaskOrWrite<
				  	  BitLocation<TAddress,Mask,Access<Readable,true,false,false,SetToClear>,FieldType>,
					  Mask,
					  Data>
			{
				static_assert((Data & (~Mask))==0,"bad mask");
			};

			template<typename TAddress, unsigned Mask, bool Readable, bool SetToClear, typename FieldType>
			struct RegisterExec<
				Register::Action<
					BitLocation<TAddress,Mask,Access<Readable,true,false,false,SetToClear>,FieldType>,
					WriteAction>>
				: GenericReadMaskOrWrite<
			  	  BitLocation<TAddress,Mask,Access<Readable,true,false,false,SetToClear>,FieldType>,
				  Mask,
				  0>	{};


			template<typename TAddress, unsigned Mask, bool Writable, bool SetToClear, typename FieldType>
			struct RegisterExec<Register::Action<
				BitLocation<TAddress,Mask,Access<true,Writable,false,false,SetToClear>,FieldType>,ReadAction>>
			{
				unsigned operator()(unsigned in = 0){
					return GetAddress<TAddress>::read();
				}
			};
			template<typename TAddress, unsigned Mask, typename FieldType, unsigned Data>
			struct RegisterExec<
				Register::Action<
					BitLocation<TAddress,Mask,Access<true,true,false,false,false>,FieldType>,
					XorLiteralAction<Data>>>
				: GenericReadMaskOrWrite<
				  BitLocation<TAddress,Mask,Access<true,true,false,false,false>,FieldType>,
				  Mask,
				  Data>
			{
				static_assert((Data & (~Mask))==0,"bad mask");
				unsigned operator()(unsigned in = 0){
					auto i = GetAddress<TAddress>::read();
					i ^= Data;
					GetAddress<TAddress>::write(i);
					return 0;
				}
			};
		}
	}
}
