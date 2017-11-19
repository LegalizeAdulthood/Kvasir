#pragma once
#include <cstdint>
#include <Register/Utility.hpp>

namespace Kvasir {

template <typename Addr, typename FieldType, int High, int Low = High>
using ReadWriteField = Register::FieldLocation<Addr, Register::maskFromRange(High, Low), Register::ReadWriteAccess, FieldType>;

template <typename Addr, typename FieldType, int High, int Low = High>
using ReadOnlyfield = Register::FieldLocation<Addr, Register::maskFromRange(High, Low), Register::ReadOnlyAccess, FieldType>;

template <typename Addr, typename FieldType, int High, int Low = High>
using WriteOnlyfield = Register::FieldLocation<Addr, Register::maskFromRange(High, Low), Register::WriteOnlyAccess, FieldType>;

namespace DisplayControl {

using Addr = Register::Address<0x4000000, 0x00000000, 0x00000000, uint16_t>;

/// Background Mode
enum class BackgroundModes : uint8_t {
    mode0 = 0,
    mode1,
    mode2,
    mode3,
    mode4,
    mode5
};
constexpr ReadWriteField<Addr, BackgroundModes, 2, 0> bgMode{};

/// CGB Mode
enum class CgbModes : uint8_t {
    gbaMode = 0,
    cgbMode = 1
};
constexpr ReadWriteField<Addr, CgbModes, 3> cgbMode{};

/// Display Frame Select
constexpr ReadWriteField<Addr, unsigned, 4> displayFrameSelect{};

/// H-Blank Interval Free
constexpr ReadWriteField<Addr, unsigned, 5> hBlankIntervalFree{};

/// OBJ Character VRAM Mapping
enum class ObjCharacterVramMappingMode : uint8_t {
    twoDim = 0,
    oneDim = 1
};
constexpr ReadWriteField<Addr, ObjCharacterVramMappingMode, 6> objCharacterVramMapping{};

/// Forced Blank
constexpr ReadWriteField<Addr, unsigned, 7> forcedBlank{};

/// Screen Display BG0
constexpr ReadWriteField<Addr, unsigned, 8> screenDisplayBg0{};
/// Screen Display BG1
constexpr ReadWriteField<Addr, unsigned, 9> screenDisplayBg1{};
/// Screen Display BG2
constexpr ReadWriteField<Addr, unsigned, 10> screenDisplayBg2{};
/// Screen Display BG3
constexpr ReadWriteField<Addr, unsigned, 11> screenDisplayBg3{};
/// Screen Display OBJ
constexpr ReadWriteField<Addr, unsigned, 12> screenDisplayObj{};

/// Window 0 Display Flag
constexpr ReadWriteField<Addr, unsigned, 13> window0DisplayFlag{];
constexpr ReadWriteField<Addr, unsigned, 14> window1DisplayFlag{};
constexpr ReadWriteField<Addr, unsigned, 15> objWindowDisplayFlag{};

} // namespace DisplayControl

namespace GreenSwap {

using Addr = Register::Address<0x4000002, 0x00000000, 0x00000000, uint16_t>;

enum class GreenSwapModes {
    normal = 0,
    swap = 1
};
constexpr ReadWriteField<Addr, unsigned, 0> greenSwap{};

} // namespace GreenSwap

namespace DisplayStatus {

using Addr = Register::Address<0x4000004, 0x00000000, 0x00000000, uint16_t>;

/// V-Blank Flag
constexpr ReadOnlyField<Addr, unsigned, 0> vertBlank{};

/// H-Blank Flag
constexpr ReadOnlyField<Addr, unsigned, 1> horizBlank{};

/// V-Counter Flag
constexpr ReadOnlyField<Addr, unsigned, 2> vertCounterFlag{};

/// V-Blank IRQ Enable
constexpr ReadWriteField<Addr, unsigned, 3> vertBlankIrqEnable{};

/// H-Blank IRQ Enable
constexpr ReadWriteField<Addr, unsigned, 4> horizBlankIrqEnable{};

/// V-Counter IRQ Enable
constexpr ReadWriteField<Addr, unsigned, 5> vertCounterIrqEnable{};

/// V-Count Setting
constexpr ReadWriteField<Addr, unsigned, 15, 8> vertCounterSetting{};

}

namespace VerticalCounter {

using Addr = Register::Address<0x4000006, 0x00000000, 0x00000000, uint16_t>;

/// Current Scanline
constexpr ReadOnlyField<Addr, unsigned, 7, 0> currentScanline{};

}

namespace Bg0Control {

using Addr = Register::Address<0x4000008, 0x00000000, 0x00000000, uint16_t>;

/// BG Priority
constexpr ReadWriteField<Addr, unsigned, 1, 0> bgPriority{};

/// Character Base Block
constexpr ReadWriteField<Addr, unsigned, 3, 2> characterBaseBlock{};

/// Mosaic
constexpr ReadWriteField<Addr, unsigned, 6> mosaicEnabled{};

/// Colors/Palettes
constexpr ReadWriteField<Addr, unsigned, 7, 7> colorsPalettes{};

/// Screen Base Block
constexpr ReadWriteField<Addr, unsigned, 12, 8> screenBaseBlock{};

/// Display Area Overflow
constexpr ReadWriteField<Addr, unsigned, 13> displayAreaOverflow{};

/// Screen Size
constexpr ReadWriteField<Addr, unsigned, 15, 14> screenSize{};

}

namespace Bg1Control {

using Addr = Register::Address<0x400000A, 0x00000000, 0x00000000, uint16_t>;

/// BG Priority
constexpr ReadWriteField<Addr, unsigned, 1, 0> bgPriority{};

/// Character Base Block
constexpr ReadWriteField<Addr, unsigned, 3, 2> characterBaseBlock{};

/// Mosaic
constexpr ReadWriteField<Addr, unsigned, 6> mosaicEnabled{};

/// Colors/Palettes
constexpr ReadWriteField<Addr, unsigned, 7> colorsPalettes{};

/// Screen Base Block
constexpr ReadWriteField<Addr, unsigned, 12, 8> screenBaseBlock{};

/// Display Area Overflow
constexpr ReadWriteField<Addr, unsigned, 13> displayAreaOverflow{};

/// Screen Size
constexpr Register::FieldLocation<Addr, Register::maskFromRange(15, 14), Register::ReadWriteAccess, unsigned> screenSize{};

}

namespace Bg2Control {

using Addr = Register::Address<0x400000C, 0x00000000, 0x00000000, uint16_t>;

/// BG Priority
constexpr ReadWriteField<Addr, unsigned, 1, 0> bgPriority{};

/// Character Base Block
constexpr ReadWriteField<Addr, unsigned, 3, 2> characterBaseBlock{};

/// Mosaic
constexpr ReadWriteField<Addr, unsigned, 6> mosaicEnabled{};

/// Colors/Palettes
constexpr ReadWriteField<Addr, unsigned, 7> colorsPalettes{};

/// Screen Base Block
constexpr ReadWriteField<Addr, unsigned, 12, 8> screenBaseBlock{};

/// Display Area Overflow
constexpr ReadWriteField<Addr, unsigned, 13> displayAreaOverflow{};

/// Screen Size
constexpr ReadWriteField<Addr, unsigned, 15, 14> screenSize{};

}

namespace Bg3Control {

using Addr = Register::Address<0x400000E, 0x00000000, 0x00000000, uint16_t>;

/// BG Priority
constexpr ReadWriteField<Addr, unsigned, 1, 0> bgPriority{};

/// Character Base Block
constexpr ReadWriteField<Addr, unsigned, 3, 2> characterBaseBlock{};

/// Mosaic
constexpr ReadWriteField<Addr, unsigned, 6> mosaicEnabled{};

/// Colors/Palettes
constexpr ReadWriteField<Addr, unsigned, 7> colorsPalettes{};

/// Screen Base Block
constexpr ReadWriteField<Addr, unsigned, 12, 8> screenBaseBlock{};

/// Display Area Overflow
constexpr ReadWriteField<Addr, unsigned, 13> displayAreaOverflow{};

/// Screen Size
constexpr ReadWriteField<Addr, unsigned, 15, 14> screenSize{};

}

namespace Bg0HorizOffset {

using Addr = Register::Address<0x4000010, 0x00000000, 0x00000000, uint16_t>;

/// Offset
constexpr WriteOnlyField<Addr, unsigned, 8, 0> offset{};

}

namespace Bg0VertOffset {

using Addr = Register::Address<0x4000012, 0x00000000, 0x00000000, uint16_t>;

/// Offset
constexpr WriteOnlyField<Addr, unsigned, 8, 0> offset{};

}

namespace Bg1HorizOffset {

using Addr = Register::Address<0x4000014, 0x00000000, 0x00000000, uint16_t>;

/// Offset
constexpr WriteOnlyField<Addr, unsigned, 8, 0> offset{};

}

namespace Bg1VertOffset {

using Addr = Register::Address<0x4000016, 0x00000000, 0x00000000, uint16_t>;

/// Offset
constexpr WriteOnlyField<Addr, unsigned, 8, 0> offset{};

}

namespace Bg2HorizOffset {

using Addr = Register::Address<0x4000018, 0x00000000, 0x00000000, uint16_t>;

/// Offset
constexpr WriteOnlyField<Addr, unsigned, 8, 0> offset{};

}

namespace Bg2VertOffset {

using Addr = Register::Address<0x400001A, 0x00000000, 0x00000000, uint16_t>;

/// Offset
constexpr WriteOnlyField<Addr, unsigned, 8, 0> offset{};

}

namespace Bg3HorizOffset {

using Addr = Register::Address<0x400001C, 0x00000000, 0x00000000, uint16_t>;

/// Offset
constexpr WriteOnlyField<Addr, unsigned, 8, 0> offset{};

}

namespace Bg3VertOffset {

using Addr = Register::Address<0x400001E, 0x00000000, 0x00000000, uint16_t>;

/// Offset
constexpr WriteOnlyField<Addr, unsigned, 8, 0> offset{};

}

namespace Bg2XReference {

using Addr = Register::Address<0x4000028, 0x00000000, 0x00000000, uint32_t>;

/// Fraction
constexpr ReadWriteField<Addr, unsigned, 7, 0> fraction{};

/// Integer
constexpr ReadWriteField<Addr, unsigned, 26, 8> integer{};

/// Sign
constexpr ReadWriteField<Addr, unsigned, 27> sign{};

// TODO: Construct a class to encapsulate math and conversion on these field-point values
/// Fixed-Point Value
constexpr ReadWriteField<Addr, unsigned, 27, 0> value{};

}

namespace Bg2YReference {

using Addr = Register::Address<0x400002C, 0x00000000, 0x00000000, uint32_t>;

/// Fraction
constexpr ReadWriteField<Addr, unsigned, 7, 0> fraction{};

/// Integer
constexpr ReadWriteField<Addr, unsigned, 26, 8> integer{};

/// Sign
constexpr ReadWriteField<Addr, unsigned, 27> sign{};

// TODO: Construct a class to encapsulate math and conversion on these field-point values
/// Fixed-Point Value
constexpr ReadWriteField<Addr, unsigned, 27, 0> value{};

}

namespace Bg2InternalParameterA {

using Addr = Register::Address<0x4000020, 0x00000000, 0x00000000, uint16_t>;

/// Fraction
constexpr ReadWriteField<Addr, unsigned, 7, 0> fraction{};

/// Integer
constexpr ReadWriteField<Addr, unsigned, 14, 8> integer{};

/// Sign
constexpr ReadWriteField<Addr, unsigned, 15> sign{};

}

namespace Bg2InternalParameterB {

using Addr = Register::Address<0x4000022, 0x00000000, 0x00000000, uint16_t>;

/// Fraction
constexpr ReadWriteField<Addr, unsigned, 7, 0> fraction{};

/// Integer
constexpr ReadWriteField<Addr, unsigned, 14, 8> integer{};

/// Sign
constexpr ReadWriteField<Addr, unsigned, 15> sign{};

}

namespace Bg2InternalParameterC {

using Addr = Register::Address<0x4000024, 0x00000000, 0x00000000, uint16_t>;

/// Fraction
constexpr ReadWriteField<Addr, unsigned, 7, 0> fraction{};

/// Integer
constexpr ReadWriteField<Addr, unsigned, 14, 8> integer{};

/// Sign
constexpr ReadWriteField<Addr, unsigned, 15> sign{};

}

namespace Bg2InternalParameterD {

using Addr = Register::Address<0x4000026, 0x00000000, 0x00000000, uint16_t>;

/// Fraction
constexpr ReadWriteField<Addr, unsigned, 7, 0> fraction{};

/// Integer
constexpr ReadWriteField<Addr, unsigned, 14, 8> integer{};

/// Sign
constexpr ReadWriteField<Addr, unsigned, 15> sign{};

}

} // namespace Kvasir
