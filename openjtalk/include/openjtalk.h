// Umbrella header for the local openjtalk SPM target.
// The component headers live in their upstream directories and are found
// via the target's header search paths; this header exists so the SPM
// target has a valid public headers directory.
#pragma once

#include "../jpcommon/jpcommon.h"
#include "../mecab/src/mecab.h"
#include "../mecab2njd/mecab2njd.h"
#include "../njd/njd.h"
#include "../njd2jpcommon/njd2jpcommon.h"
#include "../njd_set_accent_phrase/njd_set_accent_phrase.h"
#include "../njd_set_accent_type/njd_set_accent_type.h"
#include "../njd_set_digit/njd_set_digit.h"
#include "../njd_set_long_vowel/njd_set_long_vowel.h"
#include "../njd_set_pronunciation/njd_set_pronunciation.h"
#include "../njd_set_unvoiced_vowel/njd_set_unvoiced_vowel.h"
#include "../text2mecab/text2mecab.h"
