#ifndef __ISO_LANG_H__
#define __ISO_LANG_H__

typedef struct
{
    const char * psz_eng_name;        /* Description in English */
    const char * psz_native_name;     /* Description in native language */
    const char * psz_iso639_1;        /* ISO-639-1 (2 characters) code */
    const char * psz_iso639_2T;       /* ISO-639-2/T (3 characters) English code */
    const char * psz_iso639_2B;       /* ISO-639-2/B (3 characters) native code */
} iso639_lang_t;

static const iso639_lang_t p_languages[] =
{
    {  "Afar",             "",            "aa", "aar", "aar" },
    {  "Abkhazian",        "",            "ab", "abk", "abk" },
    {  "Afrikaans",        "",            "af", "afr", "afr" },
    {  "Albanian",         "",            "sq", "sqi", "alb" },
    {  "Amharic",          "",            "am", "amh", "amh" },
    {  "Arabic",           "",            "ar", "ara", "ara" },
    {  "Armenian",         "",            "hy", "hye", "arm" },
    {  "Assamese",         "",            "as", "asm", "asm" },
    {  "Avestan",          "",            "ae", "ave", "ave" },
    {  "Aymara",           "",            "ay", "aym", "aym" },
    {  "Azerbaijani",      "",            "az", "aze", "aze" },
    {  "Bashkir",          "",            "ba", "bak", "bak" },
    {  "Basque",           "",            "eu", "eus", "baq" },
    {  "Belarusian",       "",            "be", "bel", "bel" },
    {  "Bengali",          "",            "bn", "ben", "ben" },
    {  "Bihari",           "",            "bh", "bih", "bih" },
    {  "Bislama",          "",            "bi", "bis", "bis" },
    {  "Bosnian",          "",            "bs", "bos", "bos" },
    {  "Breton",           "",            "br", "bre", "bre" },
    {  "Bulgarian",        "",            "bg", "bul", "bul" },
    {  "Burmese",          "",            "my", "mya", "bur" },
    {  "Catalan",          "Catala",      "ca", "cat", "cat" },
    {  "Chamorro",         "",            "ch", "cha", "cha" },
    {  "Chechen",          "",            "ce", "che", "che" },
    {  "Chinese",          "",            "zh", "zho", "chi" },
    {  "Church Slavic",    "",            "cu", "chu", "chu" },
    {  "Chuvash",          "",            "cv", "chv", "chv" },
    {  "Cornish",          "",            "kw", "cor", "cor" },
    {  "Corsican",         "",            "co", "cos", "cos" },
    {  "Czech",            "",            "cs", "ces", "cze" },
    {  "Danish",           "Dansk",       "da", "dan", "dan" },
    {  "Dutch",            "Nederlands",  "nl", "nld", "dut" },
    {  "Dzongkha",         "",            "dz", "dzo", "dzo" },
    {  "English",          "English",     "en", "eng", "eng" },
    {  "Esperanto",        "",            "eo", "epo", "epo" },
    {  "Estonian",         "",            "et", "est", "est" },
    {  "Faroese",          "",            "fo", "fao", "fao" },
    {  "Fijian",           "",            "fj", "fij", "fij" },
    {  "Finnish",          "Suomi",       "fi", "fin", "fin" },
    {  "French",           "Francais",    "fr", "fra", "fre" },
    {  "Frisian",          "",            "fy", "fry", "fry" },
    {  "Georgian",         "",            "ka", "kat", "geo" },
    {  "German",           "Deutsch",     "de", "deu", "ger" },
    {  "Gaelic (Scots)",   "",            "gd", "gla", "gla" },
    {  "Irish",            "",            "ga", "gle", "gle" },
    {  "Gallegan",         "",            "gl", "glg", "glg" },
    {  "Manx",             "",            "gv", "glv", "glv" },
    {  "Greek, Modern ()", "",            "el", "gre", "ell" },
    {  "Guarani",          "",            "gn", "grn", "grn" },
    {  "Gujarati",         "",            "gu", "guj", "guj" },
    {  "Hebrew",           "",            "he", "heb", "heb" },
    {  "Herero",           "",            "hz", "her", "her" },
    {  "Hindi",            "",            "hi", "hin", "hin" },
    {  "Hiri Motu",        "",            "ho", "hmo", "hmo" },
    {  "Hungarian",        "Magyar",      "hu", "hun", "hun" },
    {  "Icelandic",        "Islenska",    "is", "isl", "ice" },
    {  "Inuktitut",        "",            "iu", "iku", "iku" },
    {  "Interlingue",      "",            "ie", "ile", "ile" },
    {  "Interlingua",      "",            "ia", "ina", "ina" },
    {  "Indonesian",       "",            "id", "ind", "ind" },
    {  "Inupiaq",          "",            "ik", "ipk", "ipk" },
    {  "Italian",          "Italiano",    "it", "ita", "ita" },
    {  "Javanese",         "",            "jv", "jaw", "jav" },
    {  "Japanese",         "",            "ja", "jpn", "jpn" },
    {  "Kalaallisut (Greenlandic)", "",   "kl", "kal", "kal" },
    {  "Kannada",          "",            "kn", "kan", "kan" },
    {  "Kashmiri",         "",            "ks", "kas", "kas" },
    {  "Kazakh",           "",            "kk", "kaz", "kaz" },
    {  "Khmer",            "",            "km", "khm", "khm" },
    {  "Kikuyu",           "",            "ki", "kik", "kik" },
    {  "Kinyarwanda",      "",            "rw", "kin", "kin" },
    {  "Kirghiz",          "",            "ky", "kir", "kir" },
    {  "Komi",             "",            "kv", "kom", "kom" },
    {  "Korean",           "",            "ko", "kor", "kor" },
    {  "Kuanyama",         "",            "kj", "kua", "kua" },
    {  "Kurdish",          "",            "ku", "kur", "kur" },
    {  "Lao",              "",            "lo", "lao", "lao" },
    {  "Latin",            "",            "la", "lat", "lat" },
    {  "Latvian",          "",            "lv", "lav", "lav" },
    {  "Lingala",          "",            "ln", "lin", "lin" },
    {  "Lithuanian",       "",            "lt", "lit", "lit" },
    {  "Letzeburgesch",    "",            "lb", "ltz", "ltz" },
    {  "Macedonian",       "",            "mk", "mkd", "mac" },
    {  "Marshall",         "",            "mh", "mah", "mah" },
    {  "Malayalam",        "",            "ml", "mal", "mal" },
    {  "Maori",            "",            "mi", "mri", "mao" },
    {  "Marathi",          "",            "mr", "mar", "mar" },
    {  "Malay",            "",            "ms", "msa", "may" },
    {  "Malagasy",         "",            "mg", "mlg", "mlg" },
    {  "Maltese",          "",            "mt", "mlt", "mlt" },
    {  "Moldavian",        "",            "mo", "mol", "mol" },
    {  "Mongolian",        "",            "mn", "mon", "mon" },
    {  "Nauru",            "",            "na", "nau", "nau" },
    {  "Navajo",           "",            "nv", "nav", "nav" },
    {  "Ndebele, South",   "",            "nr", "nbl", "nbl" },
    {  "Ndebele, North",   "",            "nd", "nde", "nde" },
    {  "Ndonga",           "",            "ng", "ndo", "ndo" },
    {  "Nepali",           "",            "ne", "nep", "nep" },
    {  "Norwegian",        "Norsk",       "no", "nor", "nor" },
    {  "Norwegian Nynorsk", "",           "nn", "nno", "nno" },
    {  "Norwegian Bokmaal", "",           "nb", "nob", "nob" },
    {  "Chichewa; Nyanja", "",            "ny", "nya", "nya" },
    {  "Occitan (post 1500); Provencal", "", "oc", "oci", "oci" },
    {  "Oriya",            "",            "or", "ori", "ori" },
    {  "Oromo",            "",            "om", "orm", "orm" },
    {  "On Screen Display","On Screen Display", "od", "osd", "osd" },
    {  "Ossetian; Ossetic", "",           "os", "oss", "oss" },
    {  "Panjabi",          "",            "pa", "pan", "pan" },
    {  "Persian",          "",            "fa", "fas", "per" },
    {  "Pali",             "",            "pi", "pli", "pli" },
    {  "Polish",           "",            "pl", "pol", "pol" },
    {  "Portuguese",       "Portugues",   "pt", "por", "por" },
    {  "Pushto",           "",            "ps", "pus", "pus" },
    {  "Quechua",          "",            "qu", "que", "que" },
    {  "Original audio",   "",            "",   "qaa", "qaa" },
    {  "Raeto-Romance",    "",            "rm", "roh", "roh" },
    {  "Romanian",         "",            "ro", "ron", "rum" },
    {  "Rundi",            "",            "rn", "run", "run" },
    {  "Russian",          "",            "ru", "rus", "rus" },
    {  "Sango",            "",            "sg", "sag", "sag" },
    {  "Sanskrit",         "",            "sa", "san", "san" },
    {  "Serbian",          "",            "sr", "srp", "scc" },
    {  "Croatian",         "Hrvatski",    "hr", "hrv", "scr" },
    {  "Sinhalese",        "",            "si", "sin", "sin" },
    {  "Slovak",           "",            "sk", "slk", "slo" },
    {  "Slovenian",        "",            "sl", "slv", "slv" },
    {  "Northern Sami",    "",            "se", "sme", "sme" },
    {  "Samoan",           "",            "sm", "smo", "smo" },
    {  "Shona",            "",            "sn", "sna", "sna" },
    {  "Sindhi",           "",            "sd", "snd", "snd" },
    {  "Somali",           "",            "so", "som", "som" },
    {  "Sotho, Southern",  "",            "st", "sot", "sot" },
    {  "Spanish",          "Espanol",     "es", "spa", "spa" },
    {  "Sardinian",        "",            "sc", "srd", "srd" },
    {  "Swati",            "",            "ss", "ssw", "ssw" },
    {  "Sundanese",        "",            "su", "sun", "sun" },
    {  "Swahili",          "",            "sw", "swa", "swa" },
    {  "Swedish",          "Svenska",     "sv", "swe", "swe" },
    {  "Tahitian",         "",            "ty", "tah", "tah" },
    {  "Tamil",            "",            "ta", "tam", "tam" },
    {  "Tatar",            "",            "tt", "tat", "tat" },
    {  "Telugu",           "",            "te", "tel", "tel" },
    {  "Tajik",            "",            "tg", "tgk", "tgk" },
    {  "Tagalog",          "",            "tl", "tgl", "tgl" },
    {  "Thai",             "",            "th", "tha", "tha" },
    {  "Tibetan",          "",            "bo", "bod", "tib" },
    {  "Tigrinya",         "",            "ti", "tir", "tir" },
    {  "Tonga (Tonga Islands)", "",       "to", "ton", "ton" },
    {  "Tswana",           "",            "tn", "tsn", "tsn" },
    {  "Tsonga",           "",            "ts", "tso", "tso" },
    {  "Turkish",          "",            "tr", "tur", "tur" },
    {  "Turkmen",          "",            "tk", "tuk", "tuk" },
    {  "Twi",              "",            "tw", "twi", "twi" },
    {  "Uighur",           "",            "ug", "uig", "uig" },
    {  "Ukrainian",        "",            "uk", "ukr", "ukr" },
    {  "Urdu",             "",            "ur", "urd", "urd" },
    {  "Uzbek",            "",            "uz", "uzb", "uzb" },
    {  "Vietnamese",       "",            "vi", "vie", "vie" },
    {  "Volapuk",          "",            "vo", "vol", "vol" },
    {  "Welsh",            "",            "cy", "cym", "wel" },
    {  "Wolof",            "",            "wo", "wol", "wol" },
    {  "Xhosa",            "",            "xh", "xho", "xho" },
    {  "Yiddish",          "",            "yi", "yid", "yid" },
    {  "Yoruba",           "",            "yo", "yor", "yor" },
    {  "Zhuang",           "",            "za", "zha", "zha" },
    {  "Zulu",             "",            "zu", "zul", "zul" },
    { NULL, NULL, NULL, NULL, NULL }
};

#endif