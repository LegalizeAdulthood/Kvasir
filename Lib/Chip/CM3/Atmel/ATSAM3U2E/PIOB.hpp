#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Parallel Input/Output Controller B
    namespace PiobPer{    ///<PIO Enable Register
        using Addr = Register::Address<0x400e0e00,0x00000000,0,unsigned>;
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///PIO Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobPdr{    ///<PIO Disable Register
        using Addr = Register::Address<0x400e0e04,0x00000000,0,unsigned>;
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///PIO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobPsr{    ///<PIO Status Register
        using Addr = Register::Address<0x400e0e08,0x00000000,0,unsigned>;
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///PIO Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobOer{    ///<Output Enable Register
        using Addr = Register::Address<0x400e0e10,0x00000000,0,unsigned>;
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobOdr{    ///<Output Disable Register
        using Addr = Register::Address<0x400e0e14,0x00000000,0,unsigned>;
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobOsr{    ///<Output Status Register
        using Addr = Register::Address<0x400e0e18,0x00000000,0,unsigned>;
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobIfer{    ///<Glitch Input Filter Enable Register
        using Addr = Register::Address<0x400e0e20,0x00000000,0,unsigned>;
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Input Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobIfdr{    ///<Glitch Input Filter Disable Register
        using Addr = Register::Address<0x400e0e24,0x00000000,0,unsigned>;
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Input Filter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobIfsr{    ///<Glitch Input Filter Status Register
        using Addr = Register::Address<0x400e0e28,0x00000000,0,unsigned>;
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Input Filer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobSodr{    ///<Set Output Data Register
        using Addr = Register::Address<0x400e0e30,0x00000000,0,unsigned>;
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Set Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobCodr{    ///<Clear Output Data Register
        using Addr = Register::Address<0x400e0e34,0x00000000,0,unsigned>;
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Clear Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobOdsr{    ///<Output Data Status Register
        using Addr = Register::Address<0x400e0e38,0x00000000,0,unsigned>;
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobPdsr{    ///<Pin Data Status Register
        using Addr = Register::Address<0x400e0e3c,0x00000000,0,unsigned>;
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Output Data Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x400e0e40,0x00000000,0,unsigned>;
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x400e0e44,0x00000000,0,unsigned>;
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x400e0e48,0x00000000,0,unsigned>;
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0x400e0e4c,0x00000000,0,unsigned>;
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Input Change Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobMder{    ///<Multi-driver Enable Register
        using Addr = Register::Address<0x400e0e50,0x00000000,0,unsigned>;
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Multi Drive Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobMddr{    ///<Multi-driver Disable Register
        using Addr = Register::Address<0x400e0e54,0x00000000,0,unsigned>;
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Multi Drive Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobMdsr{    ///<Multi-driver Status Register
        using Addr = Register::Address<0x400e0e58,0x00000000,0,unsigned>;
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Multi Drive Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobPudr{    ///<Pull-up Disable Register
        using Addr = Register::Address<0x400e0e60,0x00000000,0,unsigned>;
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Pull Up Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobPuer{    ///<Pull-up Enable Register
        using Addr = Register::Address<0x400e0e64,0x00000000,0,unsigned>;
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Pull Up Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobPusr{    ///<Pad Pull-up Status Register
        using Addr = Register::Address<0x400e0e68,0x00000000,0,unsigned>;
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Pull Up Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobAbsr{    ///<Peripheral AB Select Register
        using Addr = Register::Address<0x400e0e70,0x00000000,0,unsigned>;
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Peripheral A Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobScifsr{    ///<System Clock Glitch Input Filter Select Register
        using Addr = Register::Address<0x400e0e80,0x00000000,0,unsigned>;
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///System Clock Glitch Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobDifsr{    ///<Debouncing Input Filter Select Register
        using Addr = Register::Address<0x400e0e84,0x00000000,0,unsigned>;
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Debouncing Filtering Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobIfdgsr{    ///<Glitch or Debouncing Input Filter Clock Selection Status Register
        using Addr = Register::Address<0x400e0e88,0x00000000,0,unsigned>;
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Glitch or Debouncing Filter Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobScdr{    ///<Slow Clock Divider Debouncing Register
        using Addr = Register::Address<0x400e0e8c,0xffffc000,0,unsigned>;
        ///Slow Clock Divider Selection for Debouncing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
    }
    namespace PiobOwer{    ///<Output Write Enable
        using Addr = Register::Address<0x400e0ea0,0x00000000,0,unsigned>;
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Output Write Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobOwdr{    ///<Output Write Disable
        using Addr = Register::Address<0x400e0ea4,0x00000000,0,unsigned>;
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Output Write Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobOwsr{    ///<Output Write Status Register
        using Addr = Register::Address<0x400e0ea8,0x00000000,0,unsigned>;
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Output Write Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobAimer{    ///<Additional Interrupt Modes Enable Register
        using Addr = Register::Address<0x400e0eb0,0x00000000,0,unsigned>;
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Additional Interrupt Modes Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobAimdr{    ///<Additional Interrupt Modes Disables Register
        using Addr = Register::Address<0x400e0eb4,0x00000000,0,unsigned>;
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Additional Interrupt Modes Disable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobAimmr{    ///<Additional Interrupt Modes Mask Register
        using Addr = Register::Address<0x400e0eb8,0x00000000,0,unsigned>;
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Peripheral CD Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobEsr{    ///<Edge Select Register
        using Addr = Register::Address<0x400e0ec0,0x00000000,0,unsigned>;
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Edge Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobLsr{    ///<Level Select Register
        using Addr = Register::Address<0x400e0ec4,0x00000000,0,unsigned>;
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobElsr{    ///<Edge/Level Status Register
        using Addr = Register::Address<0x400e0ec8,0x00000000,0,unsigned>;
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Edge/Level Interrupt source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobFellsr{    ///<Falling Edge/Low Level Select Register
        using Addr = Register::Address<0x400e0ed0,0x00000000,0,unsigned>;
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Falling Edge/Low Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobRehlsr{    ///<Rising Edge/ High Level Select Register
        using Addr = Register::Address<0x400e0ed4,0x00000000,0,unsigned>;
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Rising Edge /High Level Interrupt Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobFrlhsr{    ///<Fall/Rise - Low/High Status Register
        using Addr = Register::Address<0x400e0ed8,0x00000000,0,unsigned>;
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Edge /Level Interrupt Source Selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobLocksr{    ///<Lock Status
        using Addr = Register::Address<0x400e0ee0,0x00000000,0,unsigned>;
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        namespace P8ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p10{}; 
        namespace P10ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p11{}; 
        namespace P11ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p12{}; 
        namespace P12ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p13{}; 
        namespace P13ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p14{}; 
        namespace P14ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p15{}; 
        namespace P15ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p16{}; 
        namespace P16ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p17{}; 
        namespace P17ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p18{}; 
        namespace P18ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p19{}; 
        namespace P19ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p20{}; 
        namespace P20ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p21{}; 
        namespace P21ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p22{}; 
        namespace P22ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p23{}; 
        namespace P23ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p24{}; 
        namespace P24ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p25{}; 
        namespace P25ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p26{}; 
        namespace P26ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p27{}; 
        namespace P27ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p28{}; 
        namespace P28ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p29{}; 
        namespace P29ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p30{}; 
        namespace P30ValC{
        }
        ///Lock Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p31{}; 
        namespace P31ValC{
        }
    }
    namespace PiobWpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0x400e0ee4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        namespace WpenValC{
        }
        ///Write Protect KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
        namespace WpkeyValC{
        }
    }
    namespace PiobWpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0x400e0ee8,0xff0000fe,0,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        namespace WpvsValC{
        }
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
        namespace WpvsrcValC{
        }
    }
}