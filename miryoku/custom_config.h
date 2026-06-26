// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// final fantasy layers ============================================================================================================================================================================
#define MIRYOKU_LAYER_CUSTOM \
&kp Q,             &kp W,             &kp F,                      &kp P,                        &kp B,                         &kp J,             &kp L,                       &kp U,             &kp Y,             &kp SQT,   \
&kp A,             &kp R,             &kp S,                      &kp T,                        &kp G,                         &kp M,             &kp N,                       &kp E,             &kp I,             &kp O,     \
&kp Z,             &kp X,             &kp C,                      &kp D,                        &kp V,                         &kp K,             &kp H,                       &kp COMMA,         &kp DOT,           &kp SLASH, \
U_NP,              U_NP,              U_LT(U_FFXIV_ACT3, ESC),    U_LT(U_FFXIV_ACT1, SPACE),    U_LT(U_FFXIV_ACT2, SPACE),     U_MT(LCTRL, RET),  U_LT(U_PARTY_LIST, BSPC),    &kp DEL,           U_NP,              U_NP
#define MIRYOKU_LAYERMAPPING_CUSTOM MIRYOKU_MAPPING

#define MIRYOKU_LAYER_FFXIV_ACT1 \
&trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp NUM_4, \
&trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &kp NUM_5,         &kp NUM_6,         &kp NUM_7,         &kp NUM_8, \
&trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &kp NUM_9,         &kp NUM_0,         &kp MINUS,         &kp EQUAL, \
&trans,            &trans,            &trans,            &trans,            U_NP,              &trans,            &trans,            &trans,            &trans,            &trans
#define MIRYOKU_LAYERMAPPING_FFXIV_ACT1 MIRYOKU_MAPPING

#define MIRYOKU_LAYER_FFXIV_ACT2 \
&trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,  \
&trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp COLON, \
&trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &kp EXCL,          &kp AT,            &kp HASH,          &kp TILDE, \
&trans,            &trans,            &trans,            U_NP,              &trans,            &trans,            &trans,            &trans,            &trans,            &trans
#define MIRYOKU_LAYERMAPPING_FFXIV_ACT2 MIRYOKU_MAPPING

#define MIRYOKU_LAYER_FFXIV_ACT3 \
&trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &kp F13,           &kp F14,           &kp F15,           &kp F16,  \
&trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &kp F17,           &kp F18,           &kp F19,           &kp F20,  \
&trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &kp F21,           &kp F22,           &kp F23,           &kp F24,  \
&trans,            &trans,            &trans,            U_NP,              U_NP,              &trans,            &trans,            &trans,            &trans,            &trans
#define MIRYOKU_LAYERMAPPING_FFXIV_ACT3 MIRYOKU_MAPPING

#define MIRYOKU_LAYER_PARTY_LIST \
&trans,            &kp F7,            &kp F8,            &kp F9,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,  \
&trans,            &kp F4,            &kp F5,            &kp F6,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,  \
&trans,            &kp F1,            &kp F2,            &kp F3,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,  \
&u_to_U_BASE,      &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans
#define MIRYOKU_LAYERMAPPING_PARTY_LIST MIRYOKU_MAPPING
// final fantasy layers ============================================================================================================================================================================

#define MIRYOKU_LAYER_EXTRA \
&kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp F,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp LCTRL,         &kp Z,             &kp X,             &kp C,             &kp V,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp LALT,          &kp SPC,           &mo U_TAP,         &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_TAP \
&kp ESC,           &kp NUM_1,         &kp W,             &kp NUM_2,         &kp NUM_5,          &kp LBKT,          &kp F7,            &kp F8,            &kp F9,            &kp RBKT,         \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp NUM_6,          &kp EQL,           &kp F4,            &kp F5,            &kp F6,            &kp SEMI,         \
&kp LCTRL,         &kp NUM_3,         &kp X,             &kp NUM_4,         &kp NUM_7,          &kp BSLH,          &kp F1,            &kp F2,            &kp F3,            &kp GRAVE,        \
U_NP,              U_NP,              &to U_BASE,        &kp SPC,           &none,              &kp MINUS,         &kp NUM_0,         &kp DOT,           U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
&u_to_U_CUSTOM,    &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &u_caps_word,      U_NA,              U_NA,              U_NA,              U_NA,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         U_NA,              \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              U_NA,              &kp PG_DN,         &kp PG_UP,         &kp HOME,          &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp INS,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

// todo: approach to switching into the ffxiv "custom" layer via mouse layer top-left key
#define MIRYOKU_ALTERNATIVES_MOUSE \
&u_to_U_CUSTOM,    &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_MS_D,            U_MS_R,            U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,              U_NA,              U_NA,              U_NA,              U_NA,            \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_MS_U,            U_MS_L,            U_WH_D,            U_WH_U,            U_WH_R,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,     "Base") \
MIRYOKU_X(EXTRA,    "Extra") \
MIRYOKU_X(TAP,      "Tap") \
MIRYOKU_X(BUTTON,   "Button") \
MIRYOKU_X(NAV,      "Nav") \
MIRYOKU_X(MOUSE,    "Mouse") \
MIRYOKU_X(MEDIA,    "Media") \
MIRYOKU_X(NUM,      "Num") \
MIRYOKU_X(SYM,      "Sym") \
MIRYOKU_X(FUN,      "Fun") \
MIRYOKU_X(CUSTOM,   "FFXIV") \
MIRYOKU_X(FFXIV_ACT1, "FFXIV Act1") \
MIRYOKU_X(FFXIV_ACT2, "FFXIV Act2") \
MIRYOKU_X(FFXIV_ACT3, "FFXIV Act3") \
MIRYOKU_X(PARTY_LIST, "Party List")

#define U_BASE       0
#define U_EXTRA      1
#define U_TAP        2
#define U_BUTTON     3
#define U_NAV        4
#define U_MOUSE      5
#define U_MEDIA      6
#define U_NUM        7
#define U_SYM        8
#define U_FUN        9
#define U_CUSTOM     10
#define U_FFXIV_ACT1 11
#define U_FFXIV_ACT2 12
#define U_FFXIV_ACT3 13
#define U_PARTY_LIST 14
