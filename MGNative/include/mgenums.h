// MonoGame - Copyright (C) The MonoGame Team
// This file is subject to the terms and conditions defined in
// file 'LICENSE.txt', which is part of this source code package.

//
// This code is auto generated, don't modify it by hand.
//

#pragma once

#include "mgcommon.h"

enum class MGGraphicsBackend : mgint
{
    DirectX   = 0,
    OpenGL    = 1,
    Vulkan    = 2,
    Metal     = 3,
};
enum class MGMonoGamePlatform : mgint
{
    Android            = 0,
    iOS                = 1,
    tvOS               = 2,
    DesktopGL          = 3,
    Windows            = 4,
    WindowsUniversal   = 5,
    WebGL              = 6,
    PSVita             = 7,
    XboxOne            = 8,
    PlayStation4       = 9,
    NintendoSwitch     = 10,
    Stadia             = 11,
};
enum class MGZlibStreamFlavor : mgint
{
    ZLIB      = 1950,
    DEFLATE   = 1951,
    GZIP      = 1952,
};
enum class MGFlushType : mgint
{
    None      = 0,
    Partial   = 1,
    Sync      = 2,
    Full      = 3,
    Finish    = 4,
};
enum class MGCompressionLevel : mgint
{
    None              = 0,
    BestSpeed         = 1,
    Level2            = 2,
    Level3            = 3,
    Level4            = 4,
    Level5            = 5,
    Default           = 6,
    Level7            = 7,
    Level8            = 8,
    BestCompression   = 9,
};
enum class MGCompressionStrategy : mgint
{
    Default       = 0,
    Filtered      = 1,
    HuffmanOnly   = 2,
};
enum class MGCompressionMode : mgint
{
    Compress     = 0,
    Decompress   = 1,
};
enum class MGBlockState : mgint
{
    NeedMore        = 0,
    BlockDone       = 1,
    FinishStarted   = 2,
    FinishDone      = 3,
};
enum class MGDeflateFlavor : mgint
{
    Store   = 0,
    Fast    = 1,
    Slow    = 2,
};
enum class MGOS : mgint
{
    Windows   = 0,
    Linux     = 1,
    MacOSX    = 2,
    Unknown   = 3,
};
enum class MGContainmentType : mgint
{
    Disjoint     = 0,
    Contains     = 1,
    Intersects   = 2,
};
enum class MGCurveContinuity : mgint
{
    Smooth   = 0,
    Step     = 1,
};
enum class MGCurveLoopType : mgint
{
    Constant      = 0,
    Cycle         = 1,
    CycleOffset   = 2,
    Oscillate     = 3,
    Linear        = 4,
};
enum class MGCurveTangent : mgint
{
    Flat     = 0,
    Linear   = 1,
    Smooth   = 2,
};
enum class MGDisplayOrientation : mgint
{
    Default          = 0,
    LandscapeLeft    = 1,
    LandscapeRight   = 2,
    Portrait         = 4,
    PortraitDown     = 8,
    Unknown          = 16,
};
enum class MGGameRunBehavior : mgint
{
    Asynchronous   = 0,
    Synchronous    = 1,
};
enum class MGPlaneIntersectionType : mgint
{
    Front          = 0,
    Back           = 1,
    Intersecting   = 2,
};
enum class MGPlayerIndex : mgint
{
    One     = 0,
    Two     = 1,
    Three   = 2,
    Four    = 3,
};
enum class MGMediaSourceType : mgint
{
    LocalDevice           = 0,
    WindowsMediaConnect   = 4,
};
enum class MGMediaState : mgint
{
    Stopped   = 0,
    Playing   = 1,
    Paused    = 2,
};
enum class MGVideoSoundtrackType : mgint
{
    Music            = 0,
    Dialog           = 1,
    MusicAndDialog   = 2,
};
enum class MGButtons : mgint
{
    DPadUp                 = 1,
    DPadDown               = 2,
    DPadLeft               = 4,
    DPadRight              = 8,
    Start                  = 16,
    Back                   = 32,
    LeftStick              = 64,
    RightStick             = 128,
    LeftShoulder           = 256,
    RightShoulder          = 512,
    BigButton              = 2048,
    A                      = 4096,
    B                      = 8192,
    X                      = 16384,
    Y                      = 32768,
    LeftThumbstickLeft     = 2097152,
    RightTrigger           = 4194304,
    LeftTrigger            = 8388608,
    RightThumbstickUp      = 16777216,
    RightThumbstickDown    = 33554432,
    RightThumbstickRight   = 67108864,
    RightThumbstickLeft    = 134217728,
    LeftThumbstickUp       = 268435456,
    LeftThumbstickDown     = 536870912,
    LeftThumbstickRight    = 1073741824,
};
enum class MGButtonState : mgint
{
    Released   = 0,
    Pressed    = 1,
};
enum class MGGamePadDeadZone : mgint
{
    None              = 0,
    IndependentAxes   = 1,
    Circular          = 2,
};
enum class MGGamePadType : mgint
{
    Unknown           = 0,
    GamePad           = 1,
    Wheel             = 2,
    ArcadeStick       = 3,
    FlightStick       = 4,
    DancePad          = 5,
    Guitar            = 6,
    AlternateGuitar   = 7,
    DrumKit           = 8,
    BigButtonPad      = 768,
};
enum class MGKeys : mgint
{
    None                 = 0,
    Back                 = 8,
    Tab                  = 9,
    Enter                = 13,
    Pause                = 19,
    CapsLock             = 20,
    Kana                 = 21,
    Kanji                = 25,
    Escape               = 27,
    ImeConvert           = 28,
    ImeNoConvert         = 29,
    Space                = 32,
    PageUp               = 33,
    PageDown             = 34,
    End                  = 35,
    Home                 = 36,
    Left                 = 37,
    Up                   = 38,
    Right                = 39,
    Down                 = 40,
    Select               = 41,
    Print                = 42,
    Execute              = 43,
    PrintScreen          = 44,
    Insert               = 45,
    Delete               = 46,
    Help                 = 47,
    D0                   = 48,
    D1                   = 49,
    D2                   = 50,
    D3                   = 51,
    D4                   = 52,
    D5                   = 53,
    D6                   = 54,
    D7                   = 55,
    D8                   = 56,
    D9                   = 57,
    A                    = 65,
    B                    = 66,
    C                    = 67,
    D                    = 68,
    E                    = 69,
    F                    = 70,
    G                    = 71,
    H                    = 72,
    I                    = 73,
    J                    = 74,
    K                    = 75,
    L                    = 76,
    M                    = 77,
    N                    = 78,
    O                    = 79,
    P                    = 80,
    Q                    = 81,
    R                    = 82,
    S                    = 83,
    T                    = 84,
    U                    = 85,
    V                    = 86,
    W                    = 87,
    X                    = 88,
    Y                    = 89,
    Z                    = 90,
    LeftWindows          = 91,
    RightWindows         = 92,
    Apps                 = 93,
    Sleep                = 95,
    NumPad0              = 96,
    NumPad1              = 97,
    NumPad2              = 98,
    NumPad3              = 99,
    NumPad4              = 100,
    NumPad5              = 101,
    NumPad6              = 102,
    NumPad7              = 103,
    NumPad8              = 104,
    NumPad9              = 105,
    Multiply             = 106,
    Add                  = 107,
    Separator            = 108,
    Subtract             = 109,
    Decimal              = 110,
    Divide               = 111,
    F1                   = 112,
    F2                   = 113,
    F3                   = 114,
    F4                   = 115,
    F5                   = 116,
    F6                   = 117,
    F7                   = 118,
    F8                   = 119,
    F9                   = 120,
    F10                  = 121,
    F11                  = 122,
    F12                  = 123,
    F13                  = 124,
    F14                  = 125,
    F15                  = 126,
    F16                  = 127,
    F17                  = 128,
    F18                  = 129,
    F19                  = 130,
    F20                  = 131,
    F21                  = 132,
    F22                  = 133,
    F23                  = 134,
    F24                  = 135,
    NumLock              = 144,
    Scroll               = 145,
    LeftShift            = 160,
    RightShift           = 161,
    LeftControl          = 162,
    RightControl         = 163,
    LeftAlt              = 164,
    RightAlt             = 165,
    BrowserBack          = 166,
    BrowserForward       = 167,
    BrowserRefresh       = 168,
    BrowserStop          = 169,
    BrowserSearch        = 170,
    BrowserFavorites     = 171,
    BrowserHome          = 172,
    VolumeMute           = 173,
    VolumeDown           = 174,
    VolumeUp             = 175,
    MediaNextTrack       = 176,
    MediaPreviousTrack   = 177,
    MediaStop            = 178,
    MediaPlayPause       = 179,
    LaunchMail           = 180,
    SelectMedia          = 181,
    LaunchApplication1   = 182,
    LaunchApplication2   = 183,
    OemSemicolon         = 186,
    OemPlus              = 187,
    OemComma             = 188,
    OemMinus             = 189,
    OemPeriod            = 190,
    OemQuestion          = 191,
    OemTilde             = 192,
    ChatPadGreen         = 202,
    ChatPadOrange        = 203,
    OemOpenBrackets      = 219,
    OemPipe              = 220,
    OemCloseBrackets     = 221,
    OemQuotes            = 222,
    Oem8                 = 223,
    OemBackslash         = 226,
    ProcessKey           = 229,
    OemCopy              = 242,
    OemAuto              = 243,
    OemEnlW              = 244,
    Attn                 = 246,
    Crsel                = 247,
    Exsel                = 248,
    EraseEof             = 249,
    Play                 = 250,
    Zoom                 = 251,
    Pa1                  = 253,
    OemClear             = 254,
};
enum class MGKeyState : mgint
{
    Up     = 0,
    Down   = 1,
};
enum class MGGestureType : mgint
{
    None             = 0,
    Tap              = 1,
    DragComplete     = 2,
    Flick            = 4,
    FreeDrag         = 8,
    Hold             = 16,
    HorizontalDrag   = 32,
    Pinch            = 64,
    PinchComplete    = 128,
    DoubleTap        = 256,
    VerticalDrag     = 512,
};
enum class MGTouchLocationState : mgint
{
    Invalid    = 0,
    Moved      = 1,
    Pressed    = 2,
    Released   = 3,
};
enum class MGClearOptions : mgint
{
    Target        = 1,
    DepthBuffer   = 2,
    Stencil       = 4,
};
enum class MGColorWriteChannels : mgint
{
    None    = 0,
    Red     = 1,
    Green   = 2,
    Blue    = 4,
    Alpha   = 8,
    All     = 15,
};
enum class MGCubeMapFace : mgint
{
    PositiveX   = 0,
    NegativeX   = 1,
    PositiveY   = 2,
    NegativeY   = 3,
    PositiveZ   = 4,
    NegativeZ   = 5,
};
enum class MGEffectDirtyFlags : mgint
{
    WorldViewProj   = 1,
    World           = 2,
    EyePosition     = 4,
    MaterialColor   = 8,
    Fog             = 16,
    FogEnable       = 32,
    AlphaTest       = 64,
    ShaderIndex     = 128,
    All             = -1,
};
enum class MGEffectParameterClass : mgint
{
    Scalar   = 0,
    Vector   = 1,
    Matrix   = 2,
    Object   = 3,
    Struct   = 4,
};
enum class MGEffectParameterType : mgint
{
    Void          = 0,
    Bool          = 1,
    Int32         = 2,
    Single        = 3,
    String        = 4,
    Texture       = 5,
    Texture1D     = 6,
    Texture2D     = 7,
    Texture3D     = 8,
    TextureCube   = 9,
};
enum class MGGraphicsDeviceStatus : mgint
{
    Normal     = 0,
    Lost       = 1,
    NotReset   = 2,
};
enum class MGGraphicsProfile : mgint
{
    Reach   = 0,
    HiDef   = 1,
};
enum class MGPresentInterval : mgint
{
    Default     = 0,
    One         = 1,
    Two         = 2,
    Immediate   = 3,
};
enum class MGRenderTargetUsage : mgint
{
    DiscardContents    = 0,
    PreserveContents   = 1,
    PlatformContents   = 2,
};
enum class MGSetDataOptions : mgint
{
    None          = 0,
    Discard       = 1,
    NoOverwrite   = 2,
};
enum class MGSamplerType : mgint
{
    Sampler2D       = 0,
    SamplerCube     = 1,
    SamplerVolume   = 2,
    Sampler1D       = 3,
};
enum class MGShaderStage : mgint
{
    Vertex   = 0,
    Pixel    = 1,
};
enum class MGSpriteEffects : mgint
{
    None               = 0,
    FlipHorizontally   = 1,
    FlipVertically     = 2,
};
enum class MGSpriteSortMode : mgint
{
    Deferred      = 0,
    Immediate     = 1,
    Texture       = 2,
    BackToFront   = 3,
    FrontToBack   = 4,
};
enum class MGBlend : mgint
{
    One                       = 0,
    Zero                      = 1,
    SourceColor               = 2,
    InverseSourceColor        = 3,
    SourceAlpha               = 4,
    InverseSourceAlpha        = 5,
    DestinationColor          = 6,
    InverseDestinationColor   = 7,
    DestinationAlpha          = 8,
    InverseDestinationAlpha   = 9,
    BlendFactor               = 10,
    InverseBlendFactor        = 11,
    SourceAlphaSaturation     = 12,
};
enum class MGBlendFunction : mgint
{
    Add               = 0,
    Subtract          = 1,
    ReverseSubtract   = 2,
    Min               = 3,
    Max               = 4,
};
enum class MGCompareFunction : mgint
{
    Always         = 0,
    Never          = 1,
    Less           = 2,
    LessEqual      = 3,
    Equal          = 4,
    GreaterEqual   = 5,
    Greater        = 6,
    NotEqual       = 7,
};
enum class MGCullMode : mgint
{
    None                       = 0,
    CullClockwiseFace          = 1,
    CullCounterClockwiseFace   = 2,
};
enum class MGDepthFormat : mgint
{
    None              = 0,
    Depth16           = 1,
    Depth24           = 2,
    Depth24Stencil8   = 3,
};
enum class MGFillMode : mgint
{
    Solid       = 0,
    WireFrame   = 1,
};
enum class MGStencilOperation : mgint
{
    Keep                  = 0,
    Zero                  = 1,
    Replace               = 2,
    Increment             = 3,
    Decrement             = 4,
    IncrementSaturation   = 5,
    DecrementSaturation   = 6,
    Invert                = 7,
};
enum class MGTextureAddressMode : mgint
{
    Wrap     = 0,
    Clamp    = 1,
    Mirror   = 2,
    Border   = 3,
};
enum class MGTextureFilter : mgint
{
    Linear                       = 0,
    Point                        = 1,
    Anisotropic                  = 2,
    LinearMipPoint               = 3,
    PointMipLinear               = 4,
    MinLinearMagPointMipLinear   = 5,
    MinLinearMagPointMipPoint    = 6,
    MinPointMagLinearMipLinear   = 7,
    MinPointMagLinearMipPoint    = 8,
};
enum class MGTextureFilterMode : mgint
{
    Default      = 0,
    Comparison   = 1,
};
enum class MGSurfaceFormat : mgint
{
    Color                      = 0,
    Bgr565                     = 1,
    Bgra5551                   = 2,
    Bgra4444                   = 3,
    Dxt1                       = 4,
    Dxt3                       = 5,
    Dxt5                       = 6,
    NormalizedByte2            = 7,
    NormalizedByte4            = 8,
    Rgba1010102                = 9,
    Rg32                       = 10,
    Rgba64                     = 11,
    Alpha8                     = 12,
    Single                     = 13,
    Vector2                    = 14,
    Vector4                    = 15,
    HalfSingle                 = 16,
    HalfVector2                = 17,
    HalfVector4                = 18,
    HdrBlendable               = 19,
    Bgr32                      = 20,
    Bgra32                     = 21,
    ColorSRgb                  = 30,
    Bgr32SRgb                  = 31,
    Bgra32SRgb                 = 32,
    Dxt1SRgb                   = 33,
    Dxt3SRgb                   = 34,
    Dxt5SRgb                   = 35,
    RgbPvrtc2Bpp               = 50,
    RgbPvrtc4Bpp               = 51,
    RgbaPvrtc2Bpp              = 52,
    RgbaPvrtc4Bpp              = 53,
    RgbEtc1                    = 60,
    Dxt1a                      = 70,
    RgbaAtcExplicitAlpha       = 80,
    RgbaAtcInterpolatedAlpha   = 81,
    Rgb8Etc2                   = 90,
    Srgb8Etc2                  = 91,
    Rgb8A1Etc2                 = 92,
    Srgb8A1Etc2                = 93,
    Rgba8Etc2                  = 94,
    SRgb8A8Etc2                = 95,
};
enum class MGBufferUsage : mgint
{
    None        = 0,
    WriteOnly   = 1,
};
enum class MGIndexElementSize : mgint
{
    SixteenBits     = 0,
    ThirtyTwoBits   = 1,
};
enum class MGPrimitiveType : mgint
{
    TriangleList    = 0,
    TriangleStrip   = 1,
    LineList        = 2,
    LineStrip       = 3,
};
enum class MGVertexElementFormat : mgint
{
    Single             = 0,
    Vector2            = 1,
    Vector3            = 2,
    Vector4            = 3,
    Color              = 4,
    Byte4              = 5,
    Short2             = 6,
    Short4             = 7,
    NormalizedShort2   = 8,
    NormalizedShort4   = 9,
    HalfVector2        = 10,
    HalfVector4        = 11,
};
enum class MGVertexElementUsage : mgint
{
    Position            = 0,
    Color               = 1,
    TextureCoordinate   = 2,
    Normal              = 3,
    Binormal            = 4,
    Tangent             = 5,
    BlendIndices        = 6,
    BlendWeight         = 7,
    Depth               = 8,
    Fog                 = 9,
    PointSize           = 10,
    Sample              = 11,
    TessellateFactor    = 12,
};
enum class MGAudioChannels : mgint
{
    Mono     = 1,
    Stereo   = 2,
};
enum class MGMicrophoneState : mgint
{
    Started   = 0,
    Stopped   = 1,
};
enum class MGSoundState : mgint
{
    Playing   = 0,
    Paused    = 1,
    Stopped   = 2,
};
enum class MGAudioStopOptions : mgint
{
    AsAuthored   = 0,
    Immediate    = 1,
};
enum class MGCrossfadeType : mgint
{
    Linear        = 0,
    Logarithmic   = 1,
    EqualPower    = 2,
};
enum class MGFilterMode : mgint
{
    LowPass    = 0,
    BandPass   = 1,
    HighPass   = 2,
};
enum class MGMaxInstanceBehavior : mgint
{
    FailToPlay              = 0,
    Queue                   = 1,
    ReplaceOldest           = 2,
    ReplaceQuietest         = 3,
    ReplaceLowestPriority   = 4,
};
enum class MGMiniFormatTag : mgint
{
    Pcm                = 0,
    PlatformSpecific   = 1,
    Adpcm              = 2,
    Wma                = 3,
};
enum class MGVariationType : mgint
{
    Ordered                    = 0,
    OrderedFromRandom          = 1,
    Random                     = 2,
    RandomNoImmediateRepeats   = 3,
    Shuffle                    = 4,
};
enum class MGRpcParameter : mgint
{
    Volume            = 0,
    Pitch             = 1,
    ReverbSend        = 2,
    FilterFrequency   = 3,
    FilterQFactor     = 4,
    NumParameters     = 5,
};
enum class MGRpcPointType : mgint
{
    Linear   = 0,
    Fast     = 1,
    Slow     = 2,
    SinCos   = 3,
};
enum class MGDecodePhase : mgint
{
    ReadToken             = 0,
    ReadExLiteralLength   = 1,
    CopyLiteral           = 2,
    ReadOffset            = 3,
    ReadExMatchLength     = 4,
    CopyMatch             = 5,
};
enum class MGStreamMode : mgint
{
    Writer      = 0,
    Reader      = 1,
    Undefined   = 2,
};
enum class MGInflateBlockMode : mgint
{
    TYPE     = 0,
    LENS     = 1,
    STORED   = 2,
    TABLE    = 3,
    BTREE    = 4,
    DTREE    = 5,
    CODES    = 6,
    DRY      = 7,
    DONE     = 8,
    BAD      = 9,
};
enum class MGInflateManagerMode : mgint
{
    METHOD   = 0,
    FLAG     = 1,
    DICT4    = 2,
    DICT3    = 3,
    DICT2    = 4,
    DICT1    = 5,
    DICT0    = 6,
    BLOCKS   = 7,
    CHECK4   = 8,
    CHECK3   = 9,
    CHECK2   = 10,
    CHECK1   = 11,
    DONE     = 12,
    BAD      = 13,
};
enum class MGResourceType : mgint
{
    Texture       = 0,
    Buffer        = 1,
    Shader        = 2,
    Program       = 3,
    Query         = 4,
    Framebuffer   = 5,
};
enum class MGSurfaceType : mgint
{
    Texture                 = 0,
    RenderTarget            = 1,
    SwapChainRenderTarget   = 2,
};
enum class MGImageWriterFormat : mgint
{
    Jpg   = 0,
    Png   = 1,
};
enum class MGDriverType : mgint
{
    Hardware       = 0,
    Reference      = 1,
    FastSoftware   = 2,
};
enum class MGBLOCKTYPE : mgint
{
    INVALID        = 0,
    VERBATIM       = 1,
    ALIGNED        = 2,
    UNCOMPRESSED   = 3,
};
enum class MGSoundSystemState : mgint
{
    NotInitialized        = 0,
    Initialized           = 1,
    FailedToInitialized   = 2,
};
