#pragma once

#include "quantum.h"

#define LAYOUT( \
    LA1, LA2,   LA3,   LA4, LA5, LA6, LA7, LA8, LA9,       RA9, RA8, RA7, RA6, RA5, RA4,   RA3, RA2, RA1, \
    LB1, LB2,   LB3,   LB4, LB5, LB6, LB7, LB8, LB9,       RB9, RB8, RB7, RB6, RB5, RB4,   RB3, RB2, RB1, \
    LC1, LC2,   LC3, LC4, LC5, LC6, LC7, LC8, LC9,           RC8, RC7, RC6, RC5, RC4, RC3,    RC2,   RC1, \
    LD1, LD2,   LD3,  LD4, LD5, LD6, LD7, LD8,            RD9, RD8, RD7, RD6, RD5, RD4, RD3,   RD2,  RD1, \
    LE1, LE2,   LE3,    LE4, LE5, LE6, LE7, LE8,            RE9, RE8, RE7, RE6, RE5, RE4,    RE3,    RE1, \
    LF1, LF2,    LF3,    LF5, LF6, LF7, LF8, LF9,             RF8, RF7, RF6, RF5, RF4,   RF3,   RF2, RF1, \
    LG1, LG2,   LG3,  LG4,  LG5, LG6,      LG7,               RG8,    RG6,   RG5,   RG4,   RG3, RG2, RG1 \
    ) \
    { \
        { LA1, LA2, LA3, LA4, LA5, LA6, LA7, LA8, LA9 }, \
        { LB1, LB2, LB3, LB4, LB5, LB6, LB7, LB8, LB9 }, \
        { LC1, LC2, LC3, LC4, LC5, LC6, LC7, LC8, LC9 }, \
        { LD1, LD2, LD3, LD4, LD5, LD6, LD7, LD8, KC_NO }, \
        { LE1, LE2, LE3, LE4, LE5, LE6, LE7, LE8, KC_NO }, \
        { LF1, LF2, LF3, KC_NO, LF5, LF6, LF7, LF8, LF9, }, \
        { LG1, LG2, LG3, LG4, LG5, LG6, LG7, KC_NO, KC_NO }, \
        { RA1, RA2, RA3, RA4, RA5, RA6, RA7, RA8, RA9 }, \
        { RB1, RB2, RB3, RB4, RB5, RB6, RB7, RB8, RB9 }, \
        { RC1, RC2, RC3, RC4, RC5, RC6, RC7, RC8, KC_NO }, \
        { RD1, RD2, RD3, RD4, RD5, RD6, RD7, RD8, RD9 }, \
        { RE1, KC_NO, RE3, RE4, RE5, RE6, RE7, RE8, RE9 }, \
        { RF1, RF2, RF3, RF4, RF5, RF6, RF7, RF8, KC_NO }, \
        { RG1, RG2, RG3, RG4, RG5, RG6, KC_NO, RG8, KC_NO } \
    }
