#include <FastLED.h>

CRGB ColorPalette[] = {
        CRGB::AliceBlue,
        CRGB::Amethyst,
        CRGB::AntiqueWhite,
        CRGB::Aqua,
        CRGB::Aquamarine,
        CRGB::Azure,
        CRGB::Beige,
        CRGB::Bisque,
        CRGB::Black,
        CRGB::BlanchedAlmond,
        CRGB::Blue,
        CRGB::BlueViolet,
        CRGB::Brown,
        CRGB::BurlyWood,
        CRGB::CadetBlue,
        CRGB::Chartreuse,
        CRGB::Chocolate,
        CRGB::Coral,
        CRGB::CornflowerBlue,
        CRGB::Cornsilk,
        CRGB::Crimson,
        CRGB::Cyan,
        CRGB::DarkBlue,
        CRGB::DarkCyan,
        CRGB::DarkGoldenrod,
        CRGB::DarkGray,
        CRGB::DarkGreen,
        CRGB::DarkKhaki,
        CRGB::DarkMagenta,
        CRGB::DarkOliveGreen,
        CRGB::DarkOrange,
        CRGB::DarkOrchid,
        CRGB::DarkRed,
        CRGB::DarkSalmon,
        CRGB::DarkSeaGreen,
        CRGB::DarkSeaGreen,
        CRGB::DarkSlateBlue,
        CRGB::DarkSlateGray,
        CRGB::DarkSlateGrey,
        CRGB::DarkTurquoise,
        CRGB::DarkViolet,
        CRGB::DeepPink,
        CRGB::DeepSkyBlue,
        CRGB::DimGray,
        CRGB::DimGrey,
        CRGB::DodgerBlue,
        CRGB::FireBrick,
        CRGB::FloralWhite,
        CRGB::ForestGreen,
        CRGB::Fuchsia,
        CRGB::Gainsboro,
        CRGB::GhostWhite,
        CRGB::Gold,
        CRGB::Goldenrod,
        CRGB::Gray,
        CRGB::Grey,
        CRGB::Green,
        CRGB::GreenYellow,
        CRGB::Honeydew,
        CRGB::HotPink,
        CRGB::IndianRed,
        CRGB::Indigo,
        CRGB::Ivory,
        CRGB::Khaki,
        CRGB::Lavender,
        CRGB::LavenderBlush,
        CRGB::LawnGreen,
        CRGB::LemonChiffon,
        CRGB::LightBlue,
        CRGB::LightCoral,
        CRGB::LightCyan,
        CRGB::LightGoldenrodYellow,
        CRGB::LightGreen,
        CRGB::LightGrey,
        CRGB::LightPink,
        CRGB::LightSalmon,
        CRGB::LightSeaGreen,
        CRGB::LightSkyBlue,
        CRGB::LightSlateGray,
        CRGB::LightSlateGrey,
        CRGB::LightSteelBlue,
        CRGB::LightYellow,
        CRGB::Lime,
        CRGB::LimeGreen,
        CRGB::Linen,
        CRGB::Magenta,
        CRGB::Maroon,
        CRGB::MediumAquamarine,
        CRGB::MediumBlue,
        CRGB::MediumOrchid,
        CRGB::MediumPurple,
        CRGB::MediumSeaGreen,
        CRGB::MediumSlateBlue,
        CRGB::MediumSpringGreen,
        CRGB::MediumTurquoise,
        CRGB::MediumVioletRed,
        CRGB::MidnightBlue,
        CRGB::MintCream,
        CRGB::MistyRose,
        CRGB::Moccasin,
        CRGB::NavajoWhite,
        CRGB::Navy,
        CRGB::OldLace,
        CRGB::Olive,
        CRGB::Orange,
        CRGB::OrangeRed,
        CRGB::Orchid,
        CRGB::PaleGoldenrod,
        CRGB::PaleGreen,
        CRGB::PaleVioletRed,
        CRGB::PapayaWhip,
        CRGB::Pink,
        CRGB::Plaid,
        CRGB::Plum,
        CRGB::PowderBlue,
        CRGB::Purple,
        CRGB::Red,
        CRGB::RosyBrown,
        CRGB::SaddleBrown,
        CRGB::Salmon,
        CRGB::SandyBrown,
        CRGB::SeaGreen,
        CRGB::Seashell,
        CRGB::Sienna,
        CRGB::Silver,
        CRGB::SkyBlue,
        CRGB::SlateBlue,
        CRGB::SlateGray,
        CRGB::SlateGrey,
        CRGB::Snow,
        CRGB::SpringGreen,
        CRGB::Tomato,
        CRGB::Turquoise,
        CRGB::Violet,
        CRGB::Wheat,
        CRGB::SteelBlue,
        CRGB::Tan,
        CRGB::Teal,
        CRGB::Thistle,
        CRGB::White,
        CRGB::WhiteSmoke,
        CRGB::Yellow,
        CRGB::YellowGreen
};

CRGB SpecialColors[] = {
        CRGB::FairyLight,
        CRGB::FairyLightNCC
};
