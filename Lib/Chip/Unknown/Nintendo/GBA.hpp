#pragma once
#include <cstdint>
#include <Register/Utility.hpp>

namespace Kvasir {

namespace DisplayControl {

using Addr = Register::Address<0x4000000, 0x00000000, 0x00000000, uint16_t>;
template <typename FieldType, int High, int Low = High>
using ReadWriteField = Register::FieldLocation<Addr, Register::maskFromRange(High, Low), Register::ReadWriteAccess, FieldType>;

/// Background Mode
enum class BackgroundModes : uint8_t {
    mode0 = 0,
    mode1,
    mode2,
    mode3,
    mode4,
    mode5
};
constexpr ReadWriteField<BackgroundModes, 2, 0> bgMode{};

/// CGB Mode
enum class CgbModes : uint8_t {
    gbaMode = 0,
    cgbMode = 1
};
constexpr ReadWriteField<CgbModes, 3> cgbMode{};

/// Display Frame Select
constexpr ReadWriteField<unsigned, 4> displayFrameSelect{};

/// H-Blank Interval Free
constexpr ReadWriteField<unsigned, 5> hBlankIntervalFree{};

/// OBJ Character VRAM Mapping
enum class ObjCharacterVramMappingMode : uint8_t {
    twoDim = 0,
    oneDim = 1
};
constexpr ReadWriteField<ObjCharacterVramMappingMode, 6> objCharacterVramMapping{};

/// Forced Blank
constexpr ReadWriteField<unsigned, 7> forcedBlank{};

/// Screen Display BG0
constexpr ReadWriteField<unsigned, 8> screenDisplayBg0{};
/// Screen Display BG1
constexpr ReadWriteField<unsigned, 9> screenDisplayBg1{};
/// Screen Display BG2
constexpr ReadWriteField<unsigned, 10> screenDisplayBg2{};
/// Screen Display BG3
constexpr ReadWriteField<unsigned, 11> screenDisplayBg3{};
/// Screen Display OBJ
constexpr ReadWriteField<unsigned, 12> screenDisplayObj{};

/// Window 0 Display Flag
constexpr ReadWriteField<unsigned, 13> window0DisplayFlag{];
constexpr ReadWriteField<unsigned, 14> window1DisplayFlag{};
constexpr ReadWriteField<unsigned, 15> objWindowDisplayFlag{};

} // namespace DisplayControl

namespace GreenSwap {

using Addr = Register::Address<0x4000002, 0x00000000, 0x00000000, uint16_t>;

enum class GreenSwapModes {
    normal = 0,
    swap = 1
};
constexpr Register::FieldLocation<Addr, Register::maskFromRange(0, 0), Register::ReadWriteAccess, unsigned> greenSwap{};

} // namespace GreenSwap

namespace DisplayStatus {

using Addr = Register::Address<0x4000004, 0x00000000, 0x00000000, uint16_t>;

/// V-Blank Flag
constexpr Register::FieldLocation<Addr, Register::maskFromRange(0, 0), Register::ReadOnlyAccess, unsigned> vertBlank{};

/// H-Blank Flag
constexpr Register::FieldLocation<Addr, Register::maskFromRange(1, 1), Register::ReadOnlyAccess, unsigned> horizBlank{};

/// V-Counter Flag
constexpr Register::FieldLocation<Addr, Register::maskFromRange(2, 2), Register::ReadOnlyAccess, unsigned> vertCounterFlag{};

/// V-Blank IRQ Enable
constexpr Register::FieldLocation<Addr, Register::maskFromRange(3, 3), Register::ReadWriteAccess, unsigned> vertBlankIrqEnable{};

/// H-Blank IRQ Enable
constexpr Register::FieldLocation<Addr, Register::maskFromRange(4, 4), Register::ReadWriteAccess, unsigned> horizBlankIrqEnable{};

/// V-Counter IRQ Enable
constexpr Register::FieldLocation<Addr, Register::maskFromRange(5, 5), Register::ReadWriteAccess, unsigned> vertCounterIrqEnable{};

/// V-Count Setting
constexpr Register::FieldLocation<Addr, Register::maskFromRange(15, 8), Register::ReadWriteAccess, unsigned> vertCounterSetting{};

}

namespace VerticalCounter {

using Addr = Register::Address<0x4000006, 0x00000000, 0x00000000, uint16_t>;

/// Current Scanline
constexpr Register::FieldLocation<Addr, Register::maskFromRange(7, 0), Register::ReadOnlyAccess, unsigned> currentScanline{};

}

namespace Bg0Control {

using Addr = Register::Address<0x4000008, 0x00000000, 0x00000000, uint16_t>;

/// BG Priority
constexpr Register::FieldLocation<Addr, Register::maskFromRange(1, 0), Register::ReadWriteAccess, unsigned> bgPriority{};

/// Character Base Block
constexpr Register::FieldLocation<Addr, Register::maskFromRange(3, 2), Register::ReadWriteAccess, unsigned> characterBaseBlock{};

/// Mosaic
constexpr Register::FieldLocation<Addr, Register::maskFromRange(6, 6), Register::ReadWriteAccess, unsigned> mosaicEnabled{};

/// Colors/Palettes
constexpr Register::FieldLocation<Addr, Register::maskFromRange(7, 7), Register::ReadWriteAccess, unsigned> colorsPalettes{};

/// Screen Base Block
constexpr Register::FieldLocation<Addr, Register::maskFromRange(12, 8), Register::ReadWriteAccess, unsigned> screenBaseBlock{};

/// Display Area Overflow
constexpr Register::FieldLocation<Addr, Register::maskFromRange(13, 13), Register::ReadWriteAccess, unsigned> displayAreaOverflow{};

/// Screen Size
constexpr Register::FieldLocation<Addr, Register::maskFromRange(15, 14), Register::ReadWriteAccess, unsigned> screenSize{};

}

namespace Bg1Control {

using Addr = Register::Address<0x400000A, 0x00000000, 0x00000000, uint16_t>;

/// BG Priority
constexpr Register::FieldLocation<Addr, Register::maskFromRange(1, 0), Register::ReadWriteAccess, unsigned> bgPriority{};

/// Character Base Block
constexpr Register::FieldLocation<Addr, Register::maskFromRange(3, 2), Register::ReadWriteAccess, unsigned> characterBaseBlock{};

/// Mosaic
constexpr Register::FieldLocation<Addr, Register::maskFromRange(6, 6), Register::ReadWriteAccess, unsigned> mosaicEnabled{};

/// Colors/Palettes
constexpr Register::FieldLocation<Addr, Register::maskFromRange(7, 7), Register::ReadWriteAccess, unsigned> colorsPalettes{};

/// Screen Base Block
constexpr Register::FieldLocation<Addr, Register::maskFromRange(12, 8), Register::ReadWriteAccess, unsigned> screenBaseBlock{};

/// Display Area Overflow
constexpr Register::FieldLocation<Addr, Register::maskFromRange(13, 13), Register::ReadWriteAccess, unsigned> displayAreaOverflow{};

/// Screen Size
constexpr Register::FieldLocation<Addr, Register::maskFromRange(15, 14), Register::ReadWriteAccess, unsigned> screenSize{};

}

namespace Bg2Control {

using Addr = Register::Address<0x400000C, 0x00000000, 0x00000000, uint16_t>;

/// BG Priority
constexpr Register::FieldLocation<Addr, Register::maskFromRange(1, 0), Register::ReadWriteAccess, unsigned> bgPriority{};

/// Character Base Block
constexpr Register::FieldLocation<Addr, Register::maskFromRange(3, 2), Register::ReadWriteAccess, unsigned> characterBaseBlock{};

/// Mosaic
constexpr Register::FieldLocation<Addr, Register::maskFromRange(6, 6), Register::ReadWriteAccess, unsigned> mosaicEnabled{};

/// Colors/Palettes
constexpr Register::FieldLocation<Addr, Register::maskFromRange(7, 7), Register::ReadWriteAccess, unsigned> colorsPalettes{};

/// Screen Base Block
constexpr Register::FieldLocation<Addr, Register::maskFromRange(12, 8), Register::ReadWriteAccess, unsigned> screenBaseBlock{};

/// Display Area Overflow
constexpr Register::FieldLocation<Addr, Register::maskFromRange(13, 13), Register::ReadWriteAccess, unsigned> displayAreaOverflow{};

/// Screen Size
constexpr Register::FieldLocation<Addr, Register::maskFromRange(15, 14), Register::ReadWriteAccess, unsigned> screenSize{};

}

namespace Bg3Control {

using Addr = Register::Address<0x400000E, 0x00000000, 0x00000000, uint16_t>;

/// BG Priority
constexpr Register::FieldLocation<Addr, Register::maskFromRange(1, 0), Register::ReadWriteAccess, unsigned> bgPriority{};

/// Character Base Block
constexpr Register::FieldLocation<Addr, Register::maskFromRange(3, 2), Register::ReadWriteAccess, unsigned> characterBaseBlock{};

/// Mosaic
constexpr Register::FieldLocation<Addr, Register::maskFromRange(6, 6), Register::ReadWriteAccess, unsigned> mosaicEnabled{};

/// Colors/Palettes
constexpr Register::FieldLocation<Addr, Register::maskFromRange(7, 7), Register::ReadWriteAccess, unsigned> colorsPalettes{};

/// Screen Base Block
constexpr Register::FieldLocation<Addr, Register::maskFromRange(12, 8), Register::ReadWriteAccess, unsigned> screenBaseBlock{};

/// Display Area Overflow
constexpr Register::FieldLocation<Addr, Register::maskFromRange(13, 13), Register::ReadWriteAccess, unsigned> displayAreaOverflow{};

/// Screen Size
constexpr Register::FieldLocation<Addr, Register::maskFromRange(15, 14), Register::ReadWriteAccess, unsigned> screenSize{};

}

namespace Bg0HorizOffset {

using Addr = Register::Address<0x4000010, 0x00000000, 0x00000000, uint16_t>;

/// Offset
constexpr Register::FieldLocation<Addr, Register::maskFromRange(8, 0), Register::WriteOnlyAccess, unsigned> offset{};

}

namespace Bg0VertOffset {

using Addr = Register::Address<0x4000012, 0x00000000, 0x00000000, uint16_t>;

/// Offset
constexpr Register::FieldLocation<Addr, Register::maskFromRange(8, 0), Register::WriteOnlyAccess, unsigned> offset{};

}

namespace Bg1HorizOffset {

using Addr = Register::Address<0x4000014, 0x00000000, 0x00000000, uint16_t>;

/// Offset
constexpr Register::FieldLocation<Addr, Register::maskFromRange(8, 0), Register::WriteOnlyAccess, unsigned> offset{};

}

namespace Bg1VertOffset {

using Addr = Register::Address<0x4000016, 0x00000000, 0x00000000, uint16_t>;

/// Offset
constexpr Register::FieldLocation<Addr, Register::maskFromRange(8, 0), Register::WriteOnlyAccess, unsigned> offset{};

}

namespace Bg2HorizOffset {

using Addr = Register::Address<0x4000018, 0x00000000, 0x00000000, uint16_t>;

/// Offset
constexpr Register::FieldLocation<Addr, Register::maskFromRange(8, 0), Register::WriteOnlyAccess, unsigned> offset{};

}

namespace Bg2VertOffset {

using Addr = Register::Address<0x400001A, 0x00000000, 0x00000000, uint16_t>;

/// Offset
constexpr Register::FieldLocation<Addr, Register::maskFromRange(8, 0), Register::WriteOnlyAccess, unsigned> offset{};

}

namespace Bg3HorizOffset {

using Addr = Register::Address<0x400001C, 0x00000000, 0x00000000, uint16_t>;

/// Offset
constexpr Register::FieldLocation<Addr, Register::maskFromRange(8, 0), Register::WriteOnlyAccess, unsigned> offset{};

}

namespace Bg3VertOffset {

using Addr = Register::Address<0x400001E, 0x00000000, 0x00000000, uint16_t>;

/// Offset
constexpr Register::FieldLocation<Addr, Register::maskFromRange(8, 0), Register::WriteOnlyAccess, unsigned> offset{};

}

namespace Bg2XReference {

using Addr = Register::Address<0x4000028, 0x00000000, 0x00000000, uint32_t>;

/// Fraction
constexpr Register::FieldLocation<Addr, Register::maskFromRange(7, 0), Register:ReadWriteAccess, unsigned> fraction{};

/// Integer
constexpr Register::FieldLocation<Addr, Register::maskFromRange(26, 8), Register::ReadWriteAccess, unsigned> integer{};

/// Sign
constexpr Register::FieldLocation<Addr, Register::maskFromRange(27, 27), Register::ReadWriteAccess, unsigned> sign{};

// TODO: Construct a class to encapsulate math and conversion on these field-point values
/// Fixed-Point Value
constexpr Register::FieldLocation<Addr, Register::maskFromRange(27, 0), Register::ReadWriteAccess, unsigned> value{};

}

namespace Bg2YReference {

using Addr = Register::Address<0x400002C, 0x00000000, 0x00000000, uint32_t>;

/// Fraction
constexpr Register::FieldLocation<Addr, Register::maskFromRange(7, 0), Register:ReadWriteAccess, unsigned> fraction{};

/// Integer
constexpr Register::FieldLocation<Addr, Register::maskFromRange(26, 8), Register::ReadWriteAccess, unsigned> integer{};

/// Sign
constexpr Register::FieldLocation<Addr, Register::maskFromRange(27, 27), Register::ReadWriteAccess, unsigned> sign{};

// TODO: Construct a class to encapsulate math and conversion on these field-point values
/// Fixed-Point Value
constexpr Register::FieldLocation<Addr, Register::maskFromRange(27, 0), Register::ReadWriteAccess, unsigned> value{};

}

namespace Bg2InternalParameterA {

using Addr = Register::Address<0x4000020, 0x00000000, 0x00000000, uint16_t>;

/// Fraction
constexpr Register::FieldLocation<Addr, Register::maskFromRange(7, 0), Register::ReadWriteAccess, unsigned> fraction{};

/// Integer
constexpr Register::FieldLocation<Addr, Register::maskFromRange(14, 8), Register::ReadWriteAccess, unsigned> integer{};

/// Sign
constexpr Register::FieldLocation<Addr, Register::maskFromRange(15, 15), Register::ReadWriteAccess, unsigned> sign{};

}

namespace Bg2InternalParameterB {

using Addr = Register::Address<0x4000022, 0x00000000, 0x00000000, uint16_t>;

/// Fraction
constexpr Register::FieldLocation<Addr, Register::maskFromRange(7, 0), Register::ReadWriteAccess, unsigned> fraction{};

/// Integer
constexpr Register::FieldLocation<Addr, Register::maskFromRange(14, 8), Register::ReadWriteAccess, unsigned> integer{};

/// Sign
constexpr Register::FieldLocation<Addr, Register::maskFromRange(15, 15), Register::ReadWriteAccess, unsigned> sign{};

}

namespace Bg2InternalParameterC {

using Addr = Register::Address<0x4000024, 0x00000000, 0x00000000, uint16_t>;

/// Fraction
constexpr Register::FieldLocation<Addr, Register::maskFromRange(7, 0), Register::ReadWriteAccess, unsigned> fraction{};

/// Integer
constexpr Register::FieldLocation<Addr, Register::maskFromRange(14, 8), Register::ReadWriteAccess, unsigned> integer{};

/// Sign
constexpr Register::FieldLocation<Addr, Register::maskFromRange(15, 15), Register::ReadWriteAccess, unsigned> sign{};

}

namespace Bg2InternalParameterD {

using Addr = Register::Address<0x4000026, 0x00000000, 0x00000000, uint16_t>;

/// Fraction
constexpr Register::FieldLocation<Addr, Register::maskFromRange(7, 0), Register::ReadWriteAccess, unsigned> fraction{};

/// Integer
constexpr Register::FieldLocation<Addr, Register::maskFromRange(14, 8), Register::ReadWriteAccess, unsigned> integer{};

/// Sign
constexpr Register::FieldLocation<Addr, Register::maskFromRange(15, 15), Register::ReadWriteAccess, unsigned> sign{};

}

} // namespace Kvasir
