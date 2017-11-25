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

using Addr = Register::Address<0x4000000, 0x00000000, 0x00000000, std::uint16_t>;

/// Background Mode
enum class BackgroundModes : std::uint8_t {
    mode0 = 0,
    mode1,
    mode2,
    mode3,
    mode4,
    mode5
};
constexpr ReadWriteField<Addr, BackgroundModes, 2, 0> bgMode{};

/// CGB Mode
enum class CgbModes : std::uint8_t {
    gbaMode = 0,
    cgbMode = 1
};
constexpr ReadWriteField<Addr, CgbModes, 3> cgbMode{};

/// Display Frame Select
constexpr ReadWriteField<Addr, unsigned, 4> displayFrameSelect{};

/// H-Blank Interval Free
constexpr ReadWriteField<Addr, unsigned, 5> hBlankIntervalFree{};

/// OBJ Character VRAM Mapping
enum class ObjCharacterVramMappingMode : std::uint8_t {
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
constexpr ReadWriteField<Addr, unsigned, 13> window0DisplayFlag{};
constexpr ReadWriteField<Addr, unsigned, 14> window1DisplayFlag{};
constexpr ReadWriteField<Addr, unsigned, 15> objWindowDisplayFlag{};

} // namespace DisplayControl
namespace DISPCNT = DisplayControl;

namespace GreenSwap {

using Addr = Register::Address<0x4000002, 0x00000000, 0x00000000, std::uint16_t>;

enum class GreenSwapModes {
    normal = 0,
    swap = 1
};
constexpr ReadWriteField<Addr, unsigned, 0> greenSwap{};

} // namespace GreenSwap

namespace DisplayStatus {

using Addr = Register::Address<0x4000004, 0x00000000, 0x00000000, std::uint16_t>;

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
namespace DISPSTAT = DisplayStatus;

namespace VerticalCounter {

using Addr = Register::Address<0x4000006, 0x00000000, 0x00000000, std::uint16_t>;

/// Current Scanline
constexpr ReadOnlyField<Addr, unsigned, 7, 0> currentScanline{};

}
namespace VCOUNT = VerticalCounter;

namespace Bg0Control {

using Addr = Register::Address<0x4000008, 0x00000000, 0x00000000, std::uint16_t>;

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
namespace BG0CNT = Bg0Control;

namespace Bg1Control {

using Addr = Register::Address<0x400000A, 0x00000000, 0x00000000, std::uint16_t>;

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
namespace BG1CNT = Bg0Control;

namespace Bg2Control {

using Addr = Register::Address<0x400000C, 0x00000000, 0x00000000, std::uint16_t>;

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
namespace BG2CNT = Bg0Control;

namespace Bg3Control {

using Addr = Register::Address<0x400000E, 0x00000000, 0x00000000, std::uint16_t>;

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
namespace BG3CNT = Bg0Control;

namespace Bg0HorizOffset {

using Addr = Register::Address<0x4000010, 0x00000000, 0x00000000, std::uint16_t>;

/// Offset
constexpr WriteOnlyField<Addr, unsigned, 8, 0> offset{};

}
namespace BG0HOFS = Bg0HorizOffset;

namespace Bg0VertOffset {

using Addr = Register::Address<0x4000012, 0x00000000, 0x00000000, std::uint16_t>;

/// Offset
constexpr WriteOnlyField<Addr, unsigned, 8, 0> offset{};

}
namespace BG0VOFS = Bg0VertOffset;

namespace Bg1HorizOffset {

using Addr = Register::Address<0x4000014, 0x00000000, 0x00000000, std::uint16_t>;

/// Offset
constexpr WriteOnlyField<Addr, unsigned, 8, 0> offset{};

}
namespace BG1HOFS = Bg1HorizOffset;

namespace Bg1VertOffset {

using Addr = Register::Address<0x4000016, 0x00000000, 0x00000000, std::uint16_t>;

/// Offset
constexpr WriteOnlyField<Addr, unsigned, 8, 0> offset{};

}
namespace BG1VOFS = Bg1VertOffset;

namespace Bg2HorizOffset {

using Addr = Register::Address<0x4000018, 0x00000000, 0x00000000, std::uint16_t>;

/// Offset
constexpr WriteOnlyField<Addr, unsigned, 8, 0> offset{};

}
namespace BG2HOFS = Bg1HorizOffset;

namespace Bg2VertOffset {

using Addr = Register::Address<0x400001A, 0x00000000, 0x00000000, std::uint16_t>;

/// Offset
constexpr WriteOnlyField<Addr, unsigned, 8, 0> offset{};

}
namespace BG2VOFS = Bg1VertOffset;

namespace Bg3HorizOffset {

using Addr = Register::Address<0x400001C, 0x00000000, 0x00000000, std::uint16_t>;

/// Offset
constexpr WriteOnlyField<Addr, unsigned, 8, 0> offset{};

}
namespace BG3HOFS = Bg1HorizOffset;

namespace Bg3VertOffset {

using Addr = Register::Address<0x400001E, 0x00000000, 0x00000000, std::uint16_t>;

/// Offset
constexpr WriteOnlyField<Addr, unsigned, 8, 0> offset{};

}
namespace BG3VOFS = Bg1VertOffset;

namespace Bg2InternalParameterA {

using Addr = Register::Address<0x4000020, 0x00000000, 0x00000000, std::uint16_t>;

/// Fraction
constexpr ReadWriteField<Addr, unsigned, 7, 0> fraction{};

/// Integer
constexpr ReadWriteField<Addr, unsigned, 14, 8> integer{};

/// Sign
constexpr ReadWriteField<Addr, unsigned, 15> sign{};

}
namespace BG2PA = Bg2InternalParameterA;

namespace Bg2InternalParameterB {

using Addr = Register::Address<0x4000022, 0x00000000, 0x00000000, std::uint16_t>;

/// Fraction
constexpr ReadWriteField<Addr, unsigned, 7, 0> fraction{};

/// Integer
constexpr ReadWriteField<Addr, unsigned, 14, 8> integer{};

/// Sign
constexpr ReadWriteField<Addr, unsigned, 15> sign{};

}
namespace BG2PB = Bg2InternalParameterB;

namespace Bg2InternalParameterC {

using Addr = Register::Address<0x4000024, 0x00000000, 0x00000000, std::uint16_t>;

/// Fraction
constexpr ReadWriteField<Addr, unsigned, 7, 0> fraction{};

/// Integer
constexpr ReadWriteField<Addr, unsigned, 14, 8> integer{};

/// Sign
constexpr ReadWriteField<Addr, unsigned, 15> sign{};

}
namespace BG2PC = Bg2InternalParameterC;

namespace Bg2InternalParameterD {

using Addr = Register::Address<0x4000026, 0x00000000, 0x00000000, std::uint16_t>;

/// Fraction
constexpr ReadWriteField<Addr, unsigned, 7, 0> fraction{};

/// Integer
constexpr ReadWriteField<Addr, unsigned, 14, 8> integer{};

/// Sign
constexpr ReadWriteField<Addr, unsigned, 15> sign{};

}
namespace BG2PD = Bg2InternalParameterD;

namespace Bg2XReference {

using Addr = Register::Address<0x4000028, 0x00000000, 0x00000000, std::uint32_t>;

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
namespace BG2X = Bg2XReference;

namespace Bg2YReference {

using Addr = Register::Address<0x400002C, 0x00000000, 0x00000000, std::uint32_t>;

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
namespace BG2Y = Bg2YReference;

namespace Bg3InternalParameterA {

using Addr = Register::Address<0x4000030, 0x00000000, 0x00000000, std::uint16_t>;

/// Fraction
constexpr ReadWriteField<Addr, unsigned, 7, 0> fraction{};

/// Integer
constexpr ReadWriteField<Addr, unsigned, 14, 8> integer{};

/// Sign
constexpr ReadWriteField<Addr, unsigned, 15> sign{};

}
namespace BG3PA = Bg2InternalParameterA;

namespace Bg3InternalParameterB {

using Addr = Register::Address<0x4000032, 0x00000000, 0x00000000, std::uint16_t>;

/// Fraction
constexpr ReadWriteField<Addr, unsigned, 7, 0> fraction{};

/// Integer
constexpr ReadWriteField<Addr, unsigned, 14, 8> integer{};

/// Sign
constexpr ReadWriteField<Addr, unsigned, 15> sign{};

}
namespace BG3PB = Bg2InternalParameterB;

namespace Bg3InternalParameterC {

using Addr = Register::Address<0x4000034, 0x00000000, 0x00000000, std::uint16_t>;

/// Fraction
constexpr ReadWriteField<Addr, unsigned, 7, 0> fraction{};

/// Integer
constexpr ReadWriteField<Addr, unsigned, 14, 8> integer{};

/// Sign
constexpr ReadWriteField<Addr, unsigned, 15> sign{};

}
namespace BG3PC = Bg2InternalParameterC;

namespace Bg3InternalParameterD {

using Addr = Register::Address<0x4000036, 0x00000000, 0x00000000, std::uint16_t>;

/// Fraction
constexpr ReadWriteField<Addr, unsigned, 7, 0> fraction{};

/// Integer
constexpr ReadWriteField<Addr, unsigned, 14, 8> integer{};

/// Sign
constexpr ReadWriteField<Addr, unsigned, 15> sign{};

}
namespace BG3PD = Bg2InternalParameterD;

namespace Bg3XReference {

using Addr = Register::Address<0x4000038, 0x00000000, 0x00000000, std::uint32_t>;

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
namespace BG3X = Bg3XReference;

namespace Bg3YReference {

using Addr = Register::Address<0x400003C, 0x00000000, 0x00000000, std::uint32_t>;

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
namespace BG3Y = Bg3YReference;

namespace Window0HorizontalExtent {

using Addr = Register::Address<0x4000040, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 7, 0> x2{};
constexpr WriteOnlyField<Addr, unsigned, 15, 8> x1{};

}
namespace WIN0H = Window0HorizontalExtent;

namespace Window1HorizontalExtent {

using Addr = Register::Address<0x4000042, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 7, 0> x2{};
constexpr WriteOnlyField<Addr, unsigned, 15, 8> x1{};

}
namespace WIN1H = Window1HorizontalExtent;

namespace Window0VerticalExtent {

using Addr = Register::Address<0x4000044, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 7, 0> y2{};
constexpr WriteOnlyField<Addr, unsigned, 15, 8> y1{};

}
namespace WIN0H = Window0VerticalExtent;

namespace Window1VerticalExtent {

using Addr = Register::Address<0x4000046, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 7, 0> y2{};
constexpr WriteOnlyField<Addr, unsigned, 15, 8> y1{};

}
namespace WIN1H = Window1VerticalExtent;

namespace WindowInsideControl {

using Addr = Register::Address<0x4000048, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 0> window0EnableBg0{};
constexpr ReadWriteField<Addr, unsigned, 1> window0EnableBg1{};
constexpr ReadWriteField<Addr, unsigned, 2> window0EnableBg2{};
constexpr ReadWriteField<Addr, unsigned, 3> window0EnableBg3{};
constexpr ReadWriteField<Addr, unsigned, 4> window0EnableObj{};
constexpr ReadWriteField<Addr, unsigned, 5> window0EnableColorSpecialEffect{};

constexpr ReadWriteField<Addr, unsigned, 8> window1EnableBg0{};
constexpr ReadWriteField<Addr, unsigned, 9> window1EnableBg1{};
constexpr ReadWriteField<Addr, unsigned, 10> window1EnableBg2{};
constexpr ReadWriteField<Addr, unsigned, 11> window1EnableBg3{};
constexpr ReadWriteField<Addr, unsigned, 12> window1EnableObj{};
constexpr ReadWriteField<Addr, unsigned, 13> window1EnableColorSpecialEffect{};

}
namespace WININ = WindowInsideControl;

namespace WindowOutsideControl {

using Addr = Register::Address<0x400004A, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 0> enableBg0{};
constexpr ReadWriteField<Addr, unsigned, 1> enableBg1{};
constexpr ReadWriteField<Addr, unsigned, 2> enableBg2{};
constexpr ReadWriteField<Addr, unsigned, 3> enableBg3{};
constexpr ReadWriteField<Addr, unsigned, 4> enableObj{};
constexpr ReadWriteField<Addr, unsigned, 5> enableColorSpecialEffect{};

constexpr ReadWriteField<Addr, unsigned, 8> objWindowEnableBg0{};
constexpr ReadWriteField<Addr, unsigned, 9> objWindowEnableBg1{};
constexpr ReadWriteField<Addr, unsigned, 10> objWindowEnableBg2{};
constexpr ReadWriteField<Addr, unsigned, 11> objWindowEnableBg3{};
constexpr ReadWriteField<Addr, unsigned, 12> objWindowEnableObj{};
constexpr ReadWriteField<Addr, unsigned, 13> objWindowEnableColorSpecialEffect{};

}
namespace WINOUT = WindowOutsideControl;

namespace MosaicSize {

using Addr = Register::Address<0x400004C, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 3, 0> bgMosaicWidth{};
constexpr WriteOnlyField<Addr, unsigned, 7, 4> bgMosaicHeight{};
constexpr WriteOnlyField<Addr, unsigned, 11, 8> objMosaicWidth{};
constexpr WriteOnlyField<Addr, unsigned, 15, 12> objMosaicHeight{};

}
namespace MOSAIC = MosaicSize;

namespace ColorSpecialEffectsSelection {

using Addr = Register::Address<0x4000050, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 0> bg0FirstTargetPixel{};
constexpr ReadWriteField<Addr, unsigned, 1> bg1FirstTargetPixel{};
constexpr ReadWriteField<Addr, unsigned, 2> bg2FirstTargetPixel{};
constexpr ReadWriteField<Addr, unsigned, 3> bg3FirstTargetPixel{};
constexpr ReadWriteField<Addr, unsigned, 4> objFirstTargetPixel{};
constexpr ReadWriteField<Addr, unsigned, 5> backdropFirstTargetPixel{};
enum class ColorSpecialEffects : std::uint8_t {
    none = 0,
    alphaBlending = 1,
    brightnessIncrease = 2,
    brightnessDecrease = 3
};
constexpr ReadWriteField<Addr, ColorSpecialEffects, 7, 6> colorSpecialEffect{};
constexpr ReadWriteField<Addr, unsigned, 8> bg0SecondTargetPixel{};
constexpr ReadWriteField<Addr, unsigned, 9> bg1SecondTargetPixel{};
constexpr ReadWriteField<Addr, unsigned, 10> bg2SecondTargetPixel{};
constexpr ReadWriteField<Addr, unsigned, 11> bg3SecondTargetPixel{};
constexpr ReadWriteField<Addr, unsigned, 12> objSecondTargetPixel{};
constexpr ReadWriteField<Addr, unsigned, 13> backdropSecondTargetPixel{};

}
namespace BLDCNT = ColorSpecialEffectsSelection;

namespace AlphaBlendingCoefficients {

using Addr = Register::Address<0x4000052, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 4, 0> evACoefficient{};
constexpr WriteOnlyField<Addr, unsigned, 12, 8> evBCoefficient{};

}
namespace BLDALPHA = AlphaBlendingCoefficients;

namespace Brightness {

using Addr = Register::Address<0x4000054, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 4, 0> evYCoefficient{};

}
namespace BLDY = Brightness;

namespace Sound1ControlSweep {

using Addr = Register::Address<0x4000060, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 2, 0> numSweepShift{};
enum class SweepFrequencyDirections : std::uint8_t {
    increase = 0,
    decrease = 1
};
constexpr ReadWriteField<Addr, SweepFrequencyDirections, 3> sweepFrequencyDirection{};
constexpr ReadWriteField<Addr, unsigned, 6, 4> sweepTime{};

}
namespace SOUND1CNT_L = Sound1ControlSweep;

namespace Sound1ControlEnvelope {

using Addr = Register::Address<0x4000062, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 5, 0> length{};
constexpr ReadWriteField<Addr, unsigned, 7, 6> wavePatternDuty{};
constexpr ReadWriteField<Addr, unsigned, 10, 8> envelopeStepTime{};
enum class EnvelopeDirections {
    decrease = 0,
    increase = 1
};
constexpr ReadWriteField<Addr, EnvelopeDirections, 11> envelopeDirection{};
constexpr ReadWriteField<Addr, unsigend, 15, 12> envelopeInitialVolume{};

}
namespace SOUND1CNT_H = Sound1ControlEnvelope;

namespace Sound1ControlFrequency {

using Addr = Register::Address<0x4000064, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 10, 0> frequency{};
constexpr ReadWriteField<Addr, unsigned, 14> lengthFlag{};
constexpr ReadWriteField<Addr, unsigned, 15> initial{}; 

}
namespace SOUND1CNT_X = Sound1ControlFrequency;

namespace Sound2ControlSweep {

using Addr = Register::Address<0x4000068, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 2, 0> numSweepShift{};
enum class SweepFrequencyDirections : std::uint8_t {
    increase = 0,
    decrease = 1
};
constexpr ReadWriteField<Addr, SweepFrequencyDirections, 3> sweepFrequencyDirection{};
constexpr ReadWriteField<Addr, unsigned, 6, 4> sweepTime{};

}
namespace SOUND2CNT_L = Sound2ControlSweep;

namespace Sound2ControlEnvelope {

using Addr = Register::Address<0x400006A, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 5, 0> length{};
constexpr ReadWriteField<Addr, unsigned, 7, 6> wavePatternDuty{};
constexpr ReadWriteField<Addr, unsigned, 10, 8> envelopeStepTime{};
enum class EnvelopeDirections {
    decrease = 0,
    increase = 1
};
constexpr ReadWriteField<Addr, EnvelopeDirections, 11> envelopeDirection{};
constexpr ReadWriteField<Addr, unsigend, 15, 12> envelopeInitialVolume{};

}
namespace SOUND2CNT_H = Sound2ControlEnvelope;

namespace Sound2ControlFrequency {

using Addr = Register::Address<0x400006C, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 10, 0> frequency{};
constexpr ReadWriteField<Addr, unsigned, 14> lengthFlag{};
constexpr ReadWriteField<Addr, unsigned, 15> initial{}; 

}
namespace SOUND2CNT_X = Sound2ControlFrequency;

namespace Sound3ControlWave {

using Addr = Register::Address<0x4000070, 0x00000000, 0x00000000, std::uint16_t>;

enum class WaveRamDImensions {
    oneBank = 0,
    twoBank = 1
};
constexpr ReadWriteField<Addr, WaveRamDImensions, 5> waveRamDimension{};
constexpr ReadWriteField<Addr, unsigned, 6> waveRamBankNumber{};
enum class Channel3Control {
    stop = 0,
    playback = 1
};
constexpr ReadWriteField<Addr, Channel3Control, 7> channel3Off{};

}
namespace SOUND3CNT_L = Sound3ControlWave;

namespace Sound3ControlVolume {

using Addr = Register::Address<0x4000072, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 7, 0> length{};
enum class Volume {
    mute = 0,
    percent100 = 1,
    percent50 = 2,
    percent25 = 3
};
constexpr ReadWriteField<Addr, Volume, 14, 13> volume{}; 
enum class ForceVolume {
    noForcing = 0,
    force75Percent = 1
};
constexpr ReadWriteField<Addr, ForceVolume, 15> forceVolume{};

}
namespace SOUND3CNT_H = Sound3ControlVolume;

namespace Sound3ControlFrequency {

using Addr = Register::Address<0x4000074, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 10, 0> sampleRate{};
constexpr ReadWriteField<Addr, unsigned, 14> lengthFlag{};
enum class Initial {
    restart = 1
};
constexpr WriteOnlyField<Addr, Initial, 15> initial{}; 

}
namespace SOUND3CNT_X = Sound3ControlFrequency;

namespace Sound4ControlEnvelope {

using Addr = Register::Address<0x4000078, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 5, 0> length{};
constexpr ReadWriteField<Addr, unsigned, 10, 8> envelopStepTime{};
enum class EnvelopeDirections {
    decrease = 0,
    increase = 1
};
constexpr ReadWriteField<Addr, EnvelopeDirections, 11> envelopeDirection{};
constexpr ReadWritefield<Addr, unsigned, 15, 12> initialVolume{};

}
namespace SOUND4CNT_L = Sound4ControlEnvelope;

namespace Sound4ControlFrequency {

using Addr = Register::Address<0x400007C, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 2, 0> dividingRatio{};
enum class CounterStepBits {
    fifteen = 0,
    seven = 1
};
constexpr ReadWriteField<Addr, CounterStepBits, 3> counterStep{};
constexpr ReadWriteField<Addr, unsigned, 7, 4> shiftClockFrequency{};
constexpr ReadWriteField<Addr, unsigned, 14> lengthFlag{};
enum class Initial {
    restart = 1
};
constexpr ReadWriteField<Addr, Initial, 15> initial{};

}
namespace SOUND4CNT_H = Sound4ControlFrequency;

namespace SoundVolume {

using Addr = Register::Address<0x4000080, 0x00000000, 0x00000000, std::uint32_t>;

constexpr ReadWriteField<Addr, unsigned, 2, 0> volumeRight{};
constexpr ReadWriteField<Addr, unsigned, 6, 4> volumeLeft{};
constexpr ReadWriteField<Addr, unsigned, 8> sound1EnableRight{};
constexpr ReadWriteField<Addr, unsigned, 9> sound2EnableRight{};
constexpr ReadWriteField<Addr, unsigned, 10> sound3EnableRight{};
constexpr ReadWriteField<Addr, unsigned, 11> sound4EnableRight{};
constexpr ReadWriteField<Addr, unsigned, 12> sound1EnableLeft{};
constexpr ReadWriteField<Addr, unsigned, 13> sound2EnableLeft{};
constexpr ReadWriteField<Addr, unsigned, 14> sound3EnableLeft{};
constexpr ReadWriteField<Addr, unsigned, 15> sound4EnableLeft{};

}
namespace SOUNDCNT_L = SoundVolume;

namespace SoundControl {

using Addr = Register::Address<0x4000082, 0x00000000, 0x00000000, std::uint32_t>;

enum class Volume {
    percent25 = 0,
    percent50 = 1,
    percent100 = 2
};
constexpr ReadWriteField<Addr, Volume, 2, 0> volume{};
enum class DmaVolume {
    percent50 = 0,
    percent100 = 1
};
constexpr ReadWriteField<Addr, DmaVolume, 3> dmaSoundAVolume{};
constexpr ReadWriteField<Addr, DmaVolume, 4> dmaSoundBVolume{};
constexpr ReadWriteField<Addr, unsigned, 8> dmaSoundAEnableRight{};
constexpr ReadWriteField<Addr, unsigned, 9> dmaSoundAEnableLeft{};
enum class DmaTimer {
    timer0 = 0,
    timer1 = 1
};
constexpr ReadWriteField<Addr, DmaTimer, 10> dmaSoundATimerSelect{};
constexpr ReadWriteField<Addr, unsigned, 11> dmaSoundAResetFifo{};
constexpr ReadWriteField<Addr, unsigned, 12> dmaSoundBEnableRight{};
constexpr ReadWriteField<Addr, unsigned, 13> dmaSoundBEnableLeft{};
constexpr ReadWriteField<Addr, DmaTimer, 14> dmaSoundBTimerSelect{};
constexpr ReadWriteField<Addr, unsigned, 15> dmaSoundBResetFifo{};

}
namespace SOUNDCNT_H = SoundControl;

namespace SoundOnOff {

using Addr = Register::Address<0x4000084, 0x00000000, 0x00000000, std::uint32_t>;

constexpr ReadOnlyField<Addr, unsigned, 0> sound1On{};
constexpr ReadOnlyField<Addr, unsigned, 1> sound2On{};
constexpr ReadOnlyField<Addr, unsigned, 2> sound3On{};
constexpr ReadOnlyField<Addr, unsigned, 3> sound4On{};
constexpr ReadWriteField<Addr, unsigned, 7> psgFifoMasterEnable{};

}
namespace SOUNDCNT_X = SoundOnOff;

namespace SoundPwmControl {

using Addr = Register::Address<0x4000088, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 9, 0> biasLevel{};
constexpr ReadWriteField<Addr, unsigned, 15, 14> amplitude{};

}
namespace SOUNDBIAS = SoundPwmControl;

namespace Sound3WavePatternRam0Low {

using Addr = Register::Address<0x4000090, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, std::uint16_t, 15, 0> pattern{};

}
namespace WAVE_RAM = Sound3WavePatternRam0Low;

namespace Sound3WavePatternRam0High {

using Addr = Register::Address<0x4000092, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, std::uint16_t, 15, 0> pattern{};

}

namespace Sound3WavePatternRam1Low {

using Addr = Register::Address<0x4000094, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, std::uint16_t, 15, 0> pattern{};

}

namespace Sound3WavePatternRam1High {

using Addr = Register::Address<0x4000096, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, std::uint16_t, 15, 0> pattern{};

}

namespace Sound3WavePatternRam2Low {

using Addr = Register::Address<0x4000098, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, std::uint16_t, 15, 0> pattern{};

}

namespace Sound3WavePatternRam2High {

using Addr = Register::Address<0x400009A, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, std::uint16_t, 15, 0> pattern{};

}

namespace Sound3WavePatternRam3Low {

using Addr = Register::Address<0x400009C, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, std::uint16_t, 15, 0> pattern{};

}

namespace Sound3WavePatternRam3High {

using Addr = Register::Address<0x400009E, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, std::uint16_t, 15, 0> pattern{};

}

namespace SoundAFifoData {

using Addr = Register::Address<0x40000A0, 0x00000000, 0x00000000, std::uint32_t>;

constexpr WriteOnlyField<Addr, std::uint32_t, 31, 0> value{};

}
namespace FIFO_A = SoundAFifoData;

namespace SoundBFifoData {

using Addr = Register::Address<0x40000A4, 0x00000000, 0x00000000, std::uint32_t>;

constexpr WriteOnlyField<Addr, std::uint32_t, 31, 0> value{};

}
namespace FIFO_B = SoundBFifoData;

enum class DmaAddressControl {
    increment = 0,
    decrement = 1,
    fixed = 2,
    incrementReload = 3
};
enum class DmaTransferType {
    sixteenBit = 0,
    thirtyTwoBit = 1
};
enum class DmaGamePack {
    normal = 0,
    drqFromGamePack = 1
};
enum class DmaStartTiming {
    immediately = 0,
    verticalBlank = 1,
    horizontalBlank = 2,
    special = 3
};

namespace Dma0SourceAddress {

using Addr = Register::Address<0x40000B0, 0x00000000, 0x00000000, std::uint32_t>;

constexpr WriteOnlyField<Addr, std::uint32_t, 31, 0> value{};

}
namespace DMA0SAD = Dma0SourceAddress;

namespace Dma0DestinationAddress {

using Addr = Register::Address<0x40000B4, 0x00000000, 0x00000000, std::uint32_t>;

constexpr WriteOnlyField<Addr, std::uint32_t, 31, 0> value{};

}
namespace DMA0DAD = Dma0DestinationAddress;

namespace Dma0WordCount {

using Addr = Register::Address<0x40000B8, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 13, 0> value{};

}
namespace DMA0CNT_L = Dma0WordCount;

namespace Dma0Control {

using Addr = Register::Address<0x40000BA, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, DmaAddressControl, 6, 5> destinationAddressControl{};
constexpr WriteOnlyField<Addr, DmaAddressControl, 8, 7> sourceAddressControl{};
constexpr WriteOnlyField<Addr, unsigned, 9> repeat{};
constexpr WriteOnlyField<Addr, DmaTransferType, 10> transferType{};
constexpr WriteOnlyField<Addr, DmaGamePack, 11> gamePackDrq{};
constexpr WriteOnlyField<Addr, DmaStartTiming, 13, 12> startTiming{};
constexpr WriteOnlyField<Addr, unsigned, 14> irqOnEndEnabled{};
constexpr WriteOnlyField<Addr, unsigned, 15> enabled{};

}
namespace DMA0CNT_H = Dma0Control;

namespace Dma1SourceAddress {

using Addr = Register::Address<0x40000BC, 0x00000000, 0x00000000, std::uint32_t>;

constexpr WriteOnlyField<Addr, std::uint32_t, 31, 0> value{};

}
namespace DMA1SAD = Dma1SourceAddress;

namespace Dma1DestinationAddress {

using Addr = Register::Address<0x40000C0, 0x00000000, 0x00000000, std::uint32_t>;

constexpr WriteOnlyField<Addr, std::uint32_t, 31, 0> value{};

}
namespace DMA1DAD = Dma1DestinationAddress;

namespace Dma1WordCount {

using Addr = Register::Address<0x40000C4, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 13, 0> value{};

}
namespace DMA1CNT_L = Dma1WordCount;

namespace Dma1Control {

using Addr = Register::Address<0x40000C6, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, DmaAddressControl, 6, 5> destinationAddressControl{};
constexpr WriteOnlyField<Addr, DmaAddressControl, 8, 7> sourceAddressControl{};
constexpr WriteOnlyField<Addr, unsigned, 9> repeat{};
constexpr WriteOnlyField<Addr, DmaTransferType, 10> transferType{};
constexpr WriteOnlyField<Addr, DmaGamePack, 11> gamePackDrq{};
constexpr WriteOnlyField<Addr, DmaStartTiming, 13, 12> startTiming{};
constexpr WriteOnlyField<Addr, unsigned, 14> irqOnEndEnabled{};
constexpr WriteOnlyField<Addr, unsigned, 15> enabled{};

}
namespace DMA1CNT_H = Dma1Control;

namespace Dma2SourceAddress {

using Addr = Register::Address<0x40000C8, 0x00000000, 0x00000000, std::uint32_t>;

constexpr WriteOnlyField<Addr, std::uint32_t, 31, 0> value{};

}
namespace DMA2SAD = Dma0SourceAddress;

namespace Dma2DestinationAddress {

using Addr = Register::Address<0x40000CC, 0x00000000, 0x00000000, std::uint32_t>;

constexpr WriteOnlyField<Addr, std::uint32_t, 31, 0> value{};

}
namespace DMA2DAD = Dma0DestinationAddress;

namespace Dma2WordCount {

using Addr = Register::Address<0x40000D0, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 13, 0> value{};

}
namespace DMA2CNT_L = Dma0WordCount;

namespace Dma2Control {

using Addr = Register::Address<0x40000D2, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, DmaAddressControl, 6, 5> destinationAddressControl{};
constexpr WriteOnlyField<Addr, DmaAddressControl, 8, 7> sourceAddressControl{};
constexpr WriteOnlyField<Addr, unsigned, 9> repeat{};
constexpr WriteOnlyField<Addr, DmaTransferType, 10> transferType{};
constexpr WriteOnlyField<Addr, DmaGamePack, 11> gamePackDrq{};
constexpr WriteOnlyField<Addr, DmaStartTiming, 13, 12> startTiming{};
constexpr WriteOnlyField<Addr, unsigned, 14> irqOnEndEnabled{};
constexpr WriteOnlyField<Addr, unsigned, 15> enabled{};

}
namespace DMA2CNT_H = Dma1Control;

namespace Dma3SourceAddress {

using Addr = Register::Address<0x40000D4, 0x00000000, 0x00000000, std::uint32_t>;

constexpr WriteOnlyField<Addr, std::uint32_t, 31, 0> value{};

}
namespace DMA3SAD = Dma0SourceAddress;

namespace Dma3DestinationAddress {

using Addr = Register::Address<0x40000D8, 0x00000000, 0x00000000, std::uint32_t>;

constexpr WriteOnlyField<Addr, std::uint32_t, 31, 0> value{};

}
namespace DMA3DAD = Dma0DestinationAddress;

namespace Dma3WordCount {

using Addr = Register::Address<0x40000DC, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 13, 0> value{};

}
namespace DMA3CNT_L = Dma0WordCount;

namespace Dma3Control {

using Addr = Register::Address<0x40000DE, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, DmaAddressControl, 6, 5> destinationAddressControl{};
constexpr WriteOnlyField<Addr, DmaAddressControl, 8, 7> sourceAddressControl{};
constexpr WriteOnlyField<Addr, unsigned, 9> repeat{};
constexpr WriteOnlyField<Addr, DmaTransferType, 10> transferType{};
constexpr WriteOnlyField<Addr, DmaGamePack, 11> gamePackDrq{};
constexpr WriteOnlyField<Addr, DmaStartTiming, 13, 12> startTiming{};
constexpr WriteOnlyField<Addr, unsigned, 14> irqOnEndEnabled{};
constexpr WriteOnlyField<Addr, unsigned, 15> enabled{};

}
namespace DMA3CNT_H = Dma1Control;

enum class PreScale {
    freq = 0,
    freqDiv64 = 1,
    freqDiv256 = 2,
    freqDiv1024 = 3
};
enum class CountUpTiming {
    normal = 0,
    countUp = 1
};

namespace Timer0Counter {

using Addr = Register::Address<0x4000100, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 15, 0> value{};

}
namespace TM0CNT_L = Timer0Counter;

namespace Timer0Control {

using Addr = Register::Address<0x4000102, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, PreScale, 1, 0> preScale{};
constexpr ReadWriteField<Addr, CountUpTiming, 2> countUpEnabled{};
constexpr ReadWriteField<Addr, unsigned, 6> timerIrqEnable{};
constexpr ReadWriteField<Addr, unsigned, 7> timerStartStop{};

}
namespace TM0CNT_H = Timer0Control;

namespace Timer1Counter {

using Addr = Register::Address<0x4000104, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 15, 0> value{};

}
namespace TM1CNT_L = Timer1Counter;

namespace Timer1Control {

using Addr = Register::Address<0x4000106, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, PreScale, 1, 0> preScale{};
constexpr ReadWriteField<Addr, CountUpTiming, 2> countUpEnabled{};
constexpr ReadWriteField<Addr, unsigned, 6> timerIrqEnable{};
constexpr ReadWriteField<Addr, unsigned, 7> timerStartStop{};

}
namespace TM1CNT_H = Timer1Control;

namespace Timer2Counter {

using Addr = Register::Address<0x4000108, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 15, 0> value{};

}
namespace TM2CNT_L = Timer2Counter;

namespace Timer2Control {

using Addr = Register::Address<0x400010A, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, PreScale, 1, 0> preScale{};
constexpr ReadWriteField<Addr, CountUpTiming, 2> countUpEnabled{};
constexpr ReadWriteField<Addr, unsigned, 6> timerIrqEnable{};
constexpr ReadWriteField<Addr, unsigned, 7> timerStartStop{};

}
namespace TM2CNT_H = Timer2Control;

namespace Timer3Counter {

using Addr = Register::Address<0x400010C, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 15, 0> value{};

}
namespace TM3CNT_L = Timer3Counter;

namespace Timer3Control {

using Addr = Register::Address<0x400010E, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, PreScale, 1, 0> preScale{};
constexpr ReadWriteField<Addr, CountUpTiming, 2> countUpEnabled{};
constexpr ReadWriteField<Addr, unsigned, 6> timerIrqEnable{};
constexpr ReadWriteField<Addr, unsigned, 7> timerStartStop{};

}
namespace TM3CNT_H = Timer3Control;

namespace SerialIOData32 {

using Addr = Register::Address<0x4000120, 0x00000000, 0x00000000, std::uint32_t>;

constexpr ReadWriteField<Addr, unsigned, 31, 0> value{};

}
namespace SIODATA32 = SerialIOData32;

namespace SerialIOMultiportData0 {

using Addr = Register::Address<0x4000120, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 15, 0> value{};

}
namespace SIOMULTI0 = SerialIOMultiportData0;

namespace SerialIOMultiportData1 {

using Addr = Register::Address<0x4000122, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 15, 0> value{};

}
namespace SIOMULTI1 = SerialIOMultiportData1;

namespace SerialIOMultiportData2 {

using Addr = Register::Address<0x4000124, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 15, 0> value{};

}
namespace SIOMULTI2 = SerialIOMultiportData2;

namespace SerialIOMultiportData3 {

using Addr = Register::Address<0x4000126, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 15, 0> value{};

}
namespace SIOMULTI3 = SerialIOMultiportData3;

namespace SerialIOControl {

using Addr = Register::Address<0x4000128, 0x00000000, 0x00000000, std::uint16_t>;

enum class ShiftClock {
    external = 0,
    internal = 1
};
constexpr ReadWriteField<Addr, ShiftClock, 0> shiftClock{};
enum class InternalShiftClock {
    twoFiftySixKiloHz = 0,
    twoMegaHz = 1
};
constexpr ReadWriteField<Addr, InternalShiftClock, 1> internalShiftClock{};
constexpr ReadWriteField<Addr, unsigned, 2> siState{};
constexpr ReadWriteField<Addr, unsigned, 3> soDuringInactivity{};
constexpr ReadWriteField<Addr, unsigned, 7> startBit{};
enum class TransferLength {
    eightBit = 0,
    thirtyTwoBit,
};
constexpr ReadWriteField<Addr, TransferLength, 12> transferLength{};
constexpr ReadWriteField<Addr, unsigned, 14> irqEnabled{};

}
namespace SIOCNT = SerialIOControl;

namespace SerialIOMultiPlayerSend {

using Addr = Register::Address<0x400012A, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 15, 0> value{};

}
namespace SIOMLT_SEND = SerialIOMultiPlayerSend;

namespace SerialIOData8 {

using Addr = Register::Address<0x400012A, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 7, 0> value{};

}
namespace SIODATA8 = SerialIOData8;

namespace KeypadInput {

using Addr = Register::Address<0x4000130, 0x00000000, 0x00000000, std::uint16_t>;

enum class ButtonState {
    pressed = 0,
    released = 1
};
constexpr ReadOnlyField<Addr, ButtonState, 0> buttonA{};
constexpr ReadOnlyField<Addr, ButtonState, 1> buttonB{};
constexpr ReadOnlyField<Addr, ButtonState, 2> buttonSelect{};
constexpr ReadOnlyField<Addr, ButtonState, 3> buttonStart{};
constexpr ReadOnlyField<Addr, ButtonState, 4> buttonRight{};
constexpr ReadOnlyField<Addr, ButtonState, 5> buttonLeft{};
constexpr ReadOnlyField<Addr, ButtonState, 6> buttonUp{};
constexpr ReadOnlyField<Addr, ButtonState, 7> buttonDown{};
constexpr ReadOnlyField<Addr, ButtonState, 8> buttonRight{};
constexpr ReadOnlyField<Addr, ButtonState, 9> buttonLeft{};

}
namespace KEYINPUT = KeypadInput;

namespace KeyInterruptControl {

using Addr = Register::Address<0x4000130, 0x00000000, 0x00000000, std::uint16_t>;

enum class Interrupt {
    ignore = 0,
    select = 1
};
constexpr ReadWriteField<Addr, Interrupt, 0> buttonA{};
constexpr ReadWriteField<Addr, Interrupt, 1> buttonB{};
constexpr ReadWriteField<Addr, Interrupt, 2> buttonSelect{};
constexpr ReadWriteField<Addr, Interrupt, 3> buttonStart{};
constexpr ReadWriteField<Addr, Interrupt, 4> buttonRight{};
constexpr ReadWriteField<Addr, Interrupt, 5> buttonLeft{};
constexpr ReadWriteField<Addr, Interrupt, 6> buttonUp{};
constexpr ReadWriteField<Addr, Interrupt, 7> buttonDown{};
constexpr ReadWriteField<Addr, Interrupt, 8> buttonRight{};
constexpr ReadWriteField<Addr, Interrupt, 9> buttonLeft{};
constexpr ReadWriteField<Addr, unsigned, 14> irqEnabled{};
enum class IrqCondition {
    logicalOr = 0,
    logicalAnd = 1
};
constexpr ReadWriteField<Addr, IrqCondition, 15> irqCondition{};

}
namespace KEYCNT = KeyInterruptControl;

namespace ReceiveControl {

using Addr = Register::Address<0x4000134, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 0> scData{};
constexpr ReadWriteField<Addr, unsigned, 1> sdData{};
constexpr ReadWriteField<Addr, unsigned, 2> siData{};
constexpr ReadWriteField<Addr, unsigned, 3> soData{};
constexpr ReadWriteField<Addr, unsigned, 4> scDirection{};
constexpr ReadWriteField<Addr, unsigned, 5> sdDirection{};
constexpr ReadWriteField<Addr, unsigned, 6> siDirection{};
constexpr ReadWriteField<Addr, unsigned, 7> soDirection{};
constexpr ReadWriteFIeld<Addr, unsigned, 8> siInterruptEnabled{};
enum class SerialIOMode {
    normal = 0,
    multiPlayer = 0,
    uart = 0,
    generalPurpose = 2,
    joyBus = 3
};
constexpr ReadWriteField<Addr, SerialIOMode, 15, 14> mode{};

}
namespace RCNT = ReceiveControl;

namespace Infrared {

using Addr = Register::Address<0x4000136, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 0> transmissionData{};
constexpr ReadWriteField<Addr, unsigned, 1> readEnable{};
constexpr ReadWriteField<Addr, unsigned, 2> receptionData{};
constexpr ReadWriteField<Addr, unsigned, 3> ampOperation{};
constexpr ReadWriteField<Addr, unsigned, 4> irqEnable{};

}
namespace IR = Infrared;

namespace SioJoyBusControl {

using Addr = Register::Address<0x4000140, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadOnlyField<Addr, unsigned, 0> deviceResetflag{};
constexpr ReadOnlyField<Addr, unsigned, 1> receiveCompleteFlag{};
constexpr ReadOnlyField<Addr, unsigned, 2> sendCompleteFlag{};
constexpr ReadWriteField<Addr, unsigned, 6> irqOnDeviceReset{};

}
namespace JOYCNT = SioJoyBusControl;

namespace SioJoyBusReceiveData {

using Addr = Register::Address<0x4000150, 0x00000000, 0x00000000, std::uint32_t>;

constexpr ReadWriteField<Addr, unsigned, 31, 0> value{};

}
namespace JOY_RECV = SioJoyBusReceiveData;

namespace SioJoyBusTransmitData {

using Addr = Register::Address<0x4000154, 0x00000000, 0x00000000, std::uint32_t>;

constexpr ReadWriteField<Addr, unsigned, 31, 0> value{};

}
namespace JOY_TRANS = SioJoyBusTransmitData;

namespace SioJoyBusReceiveStatus {

using Addr = Register::Address<0x4000158, 0x00000000, 0x00000000, std::uint32_t>;

constexpr ReadOnlyField<Addr, unsigned, 1> receiveStatusFlag{};
constexpr ReadOnlyField<Addr, unsigned, 3> sendStatusFlag{};
constexpr ReadWriteField<Addr, unsigned, 5, 4> generalPurposeFlag{};

}
namespace JOYSTAT = SioJoyBusReceiveStatus;

namespace InterruptEnable {

using Addr = Register::Address<0x4000200, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 0> lcdVerticalBlank{};
constexpr ReadWriteField<Addr, unsigned, 1> lcdHorizontalBlank{};
constexpr ReadWriteField<Addr, unsigned, 2> vertCounterMatch{};
constexpr ReadWriteField<Addr, unsigned, 3> timer0Overflow{};
constexpr ReadWriteField<Addr, unsigned, 4> timer1Overflow{};
constexpr ReadWriteField<Addr, unsigned, 5> timer2Overflow{};
constexpr ReadWriteField<Addr, unsigned, 6> timer3Overflow{};
constexpr ReadWriteField<Addr, unsigned, 7> serialCommunication{};
constexpr ReadWriteField<Addr, unsigned, 8> dma0{};
constexpr ReadWriteField<Addr, unsigned, 9> dma1{};
constexpr ReadWriteField<Addr, unsigned, 10> dma2{};
constexpr ReadWriteField<Addr, unsigned, 11> dma3{};
constexpr ReadWriteField<Addr, unsigned, 12> keypad{};
constexpr ReadWriteField<Addr, unsigned, 13> gamePakExternal{};

}
namespace IE = InterruptEnable;

namespace InterruptRequest {

using Addr = Register::Address<0x4000202, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 0> lcdVerticalBlank{};
constexpr ReadWriteField<Addr, unsigned, 1> lcdHorizontalBlank{};
constexpr ReadWriteField<Addr, unsigned, 2> vertCounterMatch{};
constexpr ReadWriteField<Addr, unsigned, 3> timer0Overflow{};
constexpr ReadWriteField<Addr, unsigned, 4> timer1Overflow{};
constexpr ReadWriteField<Addr, unsigned, 5> timer2Overflow{};
constexpr ReadWriteField<Addr, unsigned, 6> timer3Overflow{};
constexpr ReadWriteField<Addr, unsigned, 7> serialCommunication{};
constexpr ReadWriteField<Addr, unsigned, 8> dma0{};
constexpr ReadWriteField<Addr, unsigned, 9> dma1{};
constexpr ReadWriteField<Addr, unsigned, 10> dma2{};
constexpr ReadWriteField<Addr, unsigned, 11> dma3{};
constexpr ReadWriteField<Addr, unsigned, 12> keypad{};
constexpr ReadWriteField<Addr, unsigned, 13> gamePakExternal{};

}
namespace IF = InterruptRequest;

namespace WaitStateControl {

using Addr = Register::Address<0x4000204, 0x00000000, 0x00000000, std::uint16_t>;

enum class WaitStates4328 {
    fourCycles = 0,
    threeCycles = 1,
    twoCycles = 2,
    eightCycles = 3
};
constexpr ReadWriteField<Addr, WaitStates4328, 1, 0> sramWaitStateControl{};
constexpr ReadWriteField<Addr, WaitStates4328, 3, 2> waitState0FirstAccess{};
enum class WaitStates21 {
    twoCycles = 0,
    oneCycle = 1
};
constexpr ReadWriteField<Addr, WaitStates21, 4> waitState0SecondAccess{};
constexpr ReadWriteField<Addr, WaitStates4328, 6, 5> waitState1FirstAccess{};
enum class WaitStates41 {
    fourCycles = 0,
    oneCycle = 1
};
constexpr ReadWriteField<Addr, WaitStates41, 7> waitState1SecondAccess{};
constexpr ReadWriteField<Addr, WaitStates4328, 9, 8> waitState2FirstAccess{};
enum class WaitStates81 {
    eightCycles = 0,
    oneCycle = 1
};
constexpr ReadWriteFiled<Addr, WaitStates81, 10> waitState2SecondAccess{};
enum class PhiOutputs {
    disabled = 0,
    fourMHz = 1,    // 4.19 MHz
    eightMHz = 2,   // 8.38 MHz
    sixteenMhz = 3  // 16.78 MHz
};
constexpr ReadWriteField<Addr, PhiOutputs, 12, 11> phiTerminalOutput{};
constexpr ReadWriteField<Addr, unsigned, 14> gamePakPrefetchBufferEnable{};
enum class GamePakTypes {
    gameBoyAdvance = 0,
    colorGameBoy = 1
};
constexpr ReadWriteField<Addr, GamePakTypes, 15> gamePakType{};

}
namespace WAITCNT = WaitStateControl;

namespace InterruptMasterEnable {

using Addr = Register::Address<0x4000208, 0x00000000, 0x00000000, std::uint16_t>;

enum class MasterInterruptEnables {
    disableAll = 0,
    useRegister = 1
};
constexpr ReadWriteField<Addr, MasterInterruptEnables, 0> masterEnable{};

}
namespace IME = InterruptMasterEnable;

namespace PostBootFlag {

using Addr = Register::Address<0x4000300, 0x00000000, 0x00000000, std::uint8_t>;

constexpr ReadWriteField<Addr, unsigned, 0> firstBootFlag{};

}
namespace POSTFLG = PostBootFlag;

namespace PowerDownControl {

using Addr = Register::Address<0x4000301, 0x00000000, 0x00000000, std::uint8_t>;

constexpr ReadWriteField<Addr, unsigned, 7> powerDownMode{};

}
namespace HALTCNT = PowerDownControl;

} // namespace Kvasir
