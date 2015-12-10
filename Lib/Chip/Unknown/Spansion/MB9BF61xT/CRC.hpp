#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//CRC Registers
    namespace Nonecrccr{    ///<CRC Control Register
        using Addr = Register::Address<0x40039000,0xffffff80,0,unsigned char>;
        ///Initialization bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fxor{}; 
        namespace FxorValC{
        }
        ///Final XOR control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> crclsf{}; 
        namespace CrclsfValC{
        }
        ///CRC result bit-order setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crclte{}; 
        namespace CrclteValC{
        }
        ///CRC result byte-order setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lsbfst{}; 
        namespace LsbfstValC{
        }
        ///Bit-order setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ltlend{}; 
        namespace LtlendValC{
        }
        ///Byte-order setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crc32{}; 
        namespace Crc32ValC{
        }
        ///CRC mode selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> init{}; 
        namespace InitValC{
        }
    }
    namespace Nonecrcinit{    ///<Initial Value Register
        using Addr = Register::Address<0x40039004,0x00000000,0,unsigned>;
        ///Initial value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> d{}; 
        namespace DValC{
        }
    }
    namespace Nonecrcin{    ///<Input Data Register
        using Addr = Register::Address<0x40039008,0x00000000,0,unsigned>;
        ///Input data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> d{}; 
        namespace DValC{
        }
    }
    namespace Nonecrcr{    ///<CRC Register
        using Addr = Register::Address<0x4003900c,0x00000000,0,unsigned>;
        ///CRC Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> d{}; 
        namespace DValC{
        }
    }
}