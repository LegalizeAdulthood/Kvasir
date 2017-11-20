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
constexpr ReadWriteField<Addr, unsigned, 13> window0DisplayFlag{];
constexpr ReadWriteField<Addr, unsigned, 14> window1DisplayFlag{};
constexpr ReadWriteField<Addr, unsigned, 15> objWindowDisplayFlag{};

} // namespace DisplayControl

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

namespace VerticalCounter {

using Addr = Register::Address<0x4000006, 0x00000000, 0x00000000, std::uint16_t>;

/// Current Scanline
constexpr ReadOnlyField<Addr, unsigned, 7, 0> currentScanline{};

}

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

namespace Bg0HorizOffset {

using Addr = Register::Address<0x4000010, 0x00000000, 0x00000000, std::uint16_t>;

/// Offset
constexpr WriteOnlyField<Addr, unsigned, 8, 0> offset{};

}

namespace Bg0VertOffset {

using Addr = Register::Address<0x4000012, 0x00000000, 0x00000000, std::uint16_t>;

/// Offset
constexpr WriteOnlyField<Addr, unsigned, 8, 0> offset{};

}

namespace Bg1HorizOffset {

using Addr = Register::Address<0x4000014, 0x00000000, 0x00000000, std::uint16_t>;

/// Offset
constexpr WriteOnlyField<Addr, unsigned, 8, 0> offset{};

}

namespace Bg1VertOffset {

using Addr = Register::Address<0x4000016, 0x00000000, 0x00000000, std::uint16_t>;

/// Offset
constexpr WriteOnlyField<Addr, unsigned, 8, 0> offset{};

}

namespace Bg2HorizOffset {

using Addr = Register::Address<0x4000018, 0x00000000, 0x00000000, std::uint16_t>;

/// Offset
constexpr WriteOnlyField<Addr, unsigned, 8, 0> offset{};

}

namespace Bg2VertOffset {

using Addr = Register::Address<0x400001A, 0x00000000, 0x00000000, std::uint16_t>;

/// Offset
constexpr WriteOnlyField<Addr, unsigned, 8, 0> offset{};

}

namespace Bg3HorizOffset {

using Addr = Register::Address<0x400001C, 0x00000000, 0x00000000, std::uint16_t>;

/// Offset
constexpr WriteOnlyField<Addr, unsigned, 8, 0> offset{};

}

namespace Bg3VertOffset {

using Addr = Register::Address<0x400001E, 0x00000000, 0x00000000, std::uint16_t>;

/// Offset
constexpr WriteOnlyField<Addr, unsigned, 8, 0> offset{};

}

namespace Bg2InternalParameterA {

using Addr = Register::Address<0x4000020, 0x00000000, 0x00000000, std::uint16_t>;

/// Fraction
constexpr ReadWriteField<Addr, unsigned, 7, 0> fraction{};

/// Integer
constexpr ReadWriteField<Addr, unsigned, 14, 8> integer{};

/// Sign
constexpr ReadWriteField<Addr, unsigned, 15> sign{};

}

namespace Bg2InternalParameterB {

using Addr = Register::Address<0x4000022, 0x00000000, 0x00000000, std::uint16_t>;

/// Fraction
constexpr ReadWriteField<Addr, unsigned, 7, 0> fraction{};

/// Integer
constexpr ReadWriteField<Addr, unsigned, 14, 8> integer{};

/// Sign
constexpr ReadWriteField<Addr, unsigned, 15> sign{};

}

namespace Bg2InternalParameterC {

using Addr = Register::Address<0x4000024, 0x00000000, 0x00000000, std::uint16_t>;

/// Fraction
constexpr ReadWriteField<Addr, unsigned, 7, 0> fraction{};

/// Integer
constexpr ReadWriteField<Addr, unsigned, 14, 8> integer{};

/// Sign
constexpr ReadWriteField<Addr, unsigned, 15> sign{};

}

namespace Bg2InternalParameterD {

using Addr = Register::Address<0x4000026, 0x00000000, 0x00000000, std::uint16_t>;

/// Fraction
constexpr ReadWriteField<Addr, unsigned, 7, 0> fraction{};

/// Integer
constexpr ReadWriteField<Addr, unsigned, 14, 8> integer{};

/// Sign
constexpr ReadWriteField<Addr, unsigned, 15> sign{};

}

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

namespace Bg3InternalParameterA {

using Addr = Register::Address<0x4000030, 0x00000000, 0x00000000, std::uint16_t>;

/// Fraction
constexpr ReadWriteField<Addr, unsigned, 7, 0> fraction{};

/// Integer
constexpr ReadWriteField<Addr, unsigned, 14, 8> integer{};

/// Sign
constexpr ReadWriteField<Addr, unsigned, 15> sign{};

}

namespace Bg3InternalParameterB {

using Addr = Register::Address<0x4000032, 0x00000000, 0x00000000, std::uint16_t>;

/// Fraction
constexpr ReadWriteField<Addr, unsigned, 7, 0> fraction{};

/// Integer
constexpr ReadWriteField<Addr, unsigned, 14, 8> integer{};

/// Sign
constexpr ReadWriteField<Addr, unsigned, 15> sign{};

}

namespace Bg3InternalParameterC {

using Addr = Register::Address<0x4000034, 0x00000000, 0x00000000, std::uint16_t>;

/// Fraction
constexpr ReadWriteField<Addr, unsigned, 7, 0> fraction{};

/// Integer
constexpr ReadWriteField<Addr, unsigned, 14, 8> integer{};

/// Sign
constexpr ReadWriteField<Addr, unsigned, 15> sign{};

}

namespace Bg3InternalParameterD {

using Addr = Register::Address<0x4000036, 0x00000000, 0x00000000, std::uint16_t>;

/// Fraction
constexpr ReadWriteField<Addr, unsigned, 7, 0> fraction{};

/// Integer
constexpr ReadWriteField<Addr, unsigned, 14, 8> integer{};

/// Sign
constexpr ReadWriteField<Addr, unsigned, 15> sign{};

}

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

namespace Window0HorizontalExtent {

using Addr = Register::Address<0x4000040, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 7, 0> x2{};
constexpr WriteOnlyField<Addr, unsigned, 15, 8> x1{};

}

namespace Window1HorizontalExtent {

using Addr = Register::Address<0x4000042, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 7, 0> x2{};
constexpr WriteOnlyField<Addr, unsigned, 15, 8> x1{};

}

namespace Window0VerticalExtent {

using Addr = Register::Address<0x4000044, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 7, 0> y2{};
constexpr WriteOnlyField<Addr, unsigned, 15, 8> y1{};

}

namespace Window1VerticalExtent {

using Addr = Register::Address<0x4000046, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 7, 0> y2{};
constexpr WriteOnlyField<Addr, unsigned, 15, 8> y1{};

}

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

namespace MosaicSize {

using Addr = Register::Address<0x400004C, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 3, 0> bgMosaicWidth{};
constexpr WriteOnlyField<Addr, unsigned, 7, 4> bgMosaicHeight{};
constexpr WriteOnlyField<Addr, unsigned, 11, 8> objMosaicWidth{};
constexpr WriteOnlyField<Addr, unsigned, 15, 12> objMosaicHeight{};

}

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

namespace AlphaBlendingCoefficients {

using Addr = Register::Address<0x4000052, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 4, 0> evACoefficient{};
constexpr WriteOnlyField<Addr, unsigned, 12, 8> evBCoefficient{};

}

namespace Brightness {

using Addr = Register::Address<0x4000054, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 4, 0> evYCoefficient{};

}

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

namespace Sound1ControlFrequency {

using Addr = Register::Address<0x4000064, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 10, 0> frequency{};
constexpr ReadWriteField<Addr, unsigned, 14> lengthFlag{};
constexpr ReadWriteField<Addr, unsigned, 15> initial{}; 

}

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

namespace Sound2ControlFrequency {

using Addr = Register::Address<0x400006C, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 10, 0> frequency{};
constexpr ReadWriteField<Addr, unsigned, 14> lengthFlag{};
constexpr ReadWriteField<Addr, unsigned, 15> initial{}; 

}

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

namespace Sound3ControlFrequency {

using Addr = Register::Address<0x4000074, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 10, 0> sampleRate{};
constexpr ReadWriteField<Addr, unsigned, 14> lengthFlag{};
enum class Initial {
    restart = 1
};
constexpr WriteOnlyField<Addr, Initial, 15> initial{}; 

}

namespace Sound3WavePatternRam0Low {

using Addr = Register::Address<0x4000090, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, std::uint16_t, 15, 0> pattern{};

}

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

namespace SoundOnOff {

using Addr = Register::Address<0x4000084, 0x00000000, 0x00000000, std::uint32_t>;

constexpr ReadOnlyField<Addr, unsigned, 0> sound1On{};
constexpr ReadOnlyField<Addr, unsigned, 1> sound2On{};
constexpr ReadOnlyField<Addr, unsigned, 2> sound3On{};
constexpr ReadOnlyField<Addr, unsigned, 3> sound4On{};
constexpr ReadWriteField<Addr, unsigned, 7> psgFifoMasterEnable{};

}

namespace SoundPwmControl {

using Addr = Register::Address<0x4000088, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 9, 0> biasLevel{};
constexpr ReadWriteField<Addr, unsigned, 15, 14> amplitude{};

}

namespace SoundAFifoData {

using Addr = Register::Address<0x40000A0, 0x00000000, 0x00000000, std::uint32_t>;

constexpr WriteOnlyField<Addr, std::uint32_t, 31, 0> value{};

}

namespace SoundBFifoData {

using Addr = Register::Address<0x40000A4, 0x00000000, 0x00000000, std::uint32_t>;

constexpr WriteOnlyField<Addr, std::uint32_t, 31, 0> value{};

}

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

namespace Dma0DestinationAddress {

using Addr = Register::Address<0x40000B4, 0x00000000, 0x00000000, std::uint32_t>;

constexpr WriteOnlyField<Addr, std::uint32_t, 31, 0> value{};

}

namespace Dma0WordCount {

using Addr = Register::Address<0x40000B8, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 13, 0> value{};

}

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

namespace Dma1SourceAddress {

using Addr = Register::Address<0x40000BC, 0x00000000, 0x00000000, std::uint32_t>;

constexpr WriteOnlyField<Addr, std::uint32_t, 31, 0> value{};

}

namespace Dma1DestinationAddress {

using Addr = Register::Address<0x40000C0, 0x00000000, 0x00000000, std::uint32_t>;

constexpr WriteOnlyField<Addr, std::uint32_t, 31, 0> value{};

}

namespace Dma1WordCount {

using Addr = Register::Address<0x40000C4, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 13, 0> value{};

}

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

namespace Dma2SourceAddress {

using Addr = Register::Address<0x40000C8, 0x00000000, 0x00000000, std::uint32_t>;

constexpr WriteOnlyField<Addr, std::uint32_t, 31, 0> value{};

}

namespace Dma2DestinationAddress {

using Addr = Register::Address<0x40000CC, 0x00000000, 0x00000000, std::uint32_t>;

constexpr WriteOnlyField<Addr, std::uint32_t, 31, 0> value{};

}

namespace Dma2WordCount {

using Addr = Register::Address<0x40000D0, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 13, 0> value{};

}

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

namespace Dma3SourceAddress {

using Addr = Register::Address<0x40000D4, 0x00000000, 0x00000000, std::uint32_t>;

constexpr WriteOnlyField<Addr, std::uint32_t, 31, 0> value{};

}

namespace Dma3DestinationAddress {

using Addr = Register::Address<0x40000D8, 0x00000000, 0x00000000, std::uint32_t>;

constexpr WriteOnlyField<Addr, std::uint32_t, 31, 0> value{};

}

namespace Dma3WordCount {

using Addr = Register::Address<0x40000DC, 0x00000000, 0x00000000, std::uint16_t>;

constexpr WriteOnlyField<Addr, unsigned, 13, 0> value{};

}

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

namespace Timer0Control {

using Addr = Register::Address<0x4000102, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, PreScale, 1, 0> preScale{};
constexpr ReadWriteField<Addr, CountUpTiming, 2> countUpEnabled{};
constexpr ReadWriteField<Addr, unsigned, 6> timerIrqEnable{};
constexpr ReadWriteField<Addr, unsigned, 7> timerStartStop{};

}

namespace Timer1Counter {

using Addr = Register::Address<0x4000104, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 15, 0> value{};

}

namespace Timer1Control {

using Addr = Register::Address<0x4000106, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, PreScale, 1, 0> preScale{};
constexpr ReadWriteField<Addr, CountUpTiming, 2> countUpEnabled{};
constexpr ReadWriteField<Addr, unsigned, 6> timerIrqEnable{};
constexpr ReadWriteField<Addr, unsigned, 7> timerStartStop{};

}

namespace Timer2Counter {

using Addr = Register::Address<0x4000108, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 15, 0> value{};

}

namespace Timer2Control {

using Addr = Register::Address<0x400010A, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, PreScale, 1, 0> preScale{};
constexpr ReadWriteField<Addr, CountUpTiming, 2> countUpEnabled{};
constexpr ReadWriteField<Addr, unsigned, 6> timerIrqEnable{};
constexpr ReadWriteField<Addr, unsigned, 7> timerStartStop{};

}

namespace Timer3Counter {

using Addr = Register::Address<0x400010C, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 15, 0> value{};

}

namespace Timer3Control {

using Addr = Register::Address<0x400010E, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, PreScale, 1, 0> preScale{};
constexpr ReadWriteField<Addr, CountUpTiming, 2> countUpEnabled{};
constexpr ReadWriteField<Addr, unsigned, 6> timerIrqEnable{};
constexpr ReadWriteField<Addr, unsigned, 7> timerStartStop{};

}

namespace SerialIOData32 {

using Addr = Register::Address<0x4000120, 0x00000000, 0x00000000, std::uint32_t>;

constexpr ReadWriteField<Addr, unsigned, 31, 0> value{};

}

namespace SerialIOMultiportData0 {

using Addr = Register::Address<0x4000120, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 15, 0> value{};

}

namespace SerialIOMultiportData1 {

using Addr = Register::Address<0x4000122, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 15, 0> value{};

}

namespace SerialIOMultiportData2 {

using Addr = Register::Address<0x4000124, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 15, 0> value{};

}

namespace SerialIOMultiportData3 {

using Addr = Register::Address<0x4000126, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 15, 0> value{};

}

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

namespace SerialIOMultiPlayerSend {

using Addr = Register::Address<0x400012A, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 15, 0> value{};

}

namespace SerialIOData8 {

using Addr = Register::Address<0x400012A, 0x00000000, 0x00000000, std::uint16_t>;

constexpr ReadWriteField<Addr, unsigned, 7, 0> value{};

}

namespace ReceiveControl {

using Addr = Register::Address<0x4000134, 0x00000000, 0x00000000, std::uint16_t>;

}

} // namespace Kvasir
