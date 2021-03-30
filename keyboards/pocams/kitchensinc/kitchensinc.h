#pragma once

#include "quantum.h"
 
// LG9 = reed switch

#define LAYOUT( \
    LA1, LA2, LA3, LA4, LA5, LA6, LA7, LA8, LA9,          RA9, RA8, RA7, RA6, RA5, RA4, RA3, RA2, RA1, \
    LB1, LB2, LB3, LB4, LB5, LB6, LB7, LB8, LB9,          RB9, RB8, RB7, RB6, RB5, RB4, RB3, RB2, RB1, \
    LC1, LC2, LC3, LC4, LC5, LC6, LC7, LC8, LC9,          RC9, RC8, RC7, RC6, RC5, RC4, RC3, RC2, RC1, \
    LD1, LD2, LD3, LD4, LD5, LD6, LD7, LD8, LD9,        RD9, RD8, RD7, RD6, RD5, RD4, RD3, RD2, RD1, \
    LE1, LE2, LE3, LE4, LE5, LE6, LE7, LE8, LE9,        RE9, RE8, RE7, RE6, RE5, RE4, RE3, RE2, RE1, \
    LF1, LF2, LF3, LF4, LF5, LF6, LF7, LF8, LF9,        RF9, RF8, RF7, RF6, RF5, RF4, RF3, RF2, RF1, \
    LG1, LG2, LG3, LG4, LG5, LG6, LG7, LG8, LG9,        RG9, RG8, RG7, RG6, RG5, RG4, RG3, RG2, RG1 \
   ) \
   { \
        { LA1, LA2, LA3, LA4, LA5, LA6, LA7, LA8, LA9 }, \
        { LB1, LB2, LB3, LB4, LB5, LB6, LB7, LB8, LB9 }, \
        { LC1, LC2, LC3, LC4, LC5, LC6, LC7, LC8, LC9 }, \
        { LD1, LD2, LD3, LD4, LD5, LD6, LD7, LD8, LD9 }, \
        { LE1, LE2, LE3, LE4, LE5, LE6, LE7, LE8, LE9 }, \
        { LF1, LF2, LF3, LF4, LF5, LF6, LF7, LF8, LF9 }, \
        { LG1, LG2, LG3, LG4, LG5, LG6, LG7, LG8, LG9 }, \
        { RA9, RA8, RA7, RA6, RA5, RA4, RA3, RA2, RA1 }, \
        { RB9, RB8, RB7, RB6, RB5, RB4, RB3, RB2, RB1 }, \
        { RC9, RC8, RC7, RC6, RC5, RC4, RC3, RC2, RC1 }, \
        { RD9, RD8, RD7, RD6, RD5, RD4, RD3, RD2, RD1 }, \
        { RE9, RE8, RE7, RE6, RE5, RE4, RE3, RE2, RE1 }, \
        { RF9, RF8, RF7, RF6, RF5, RF4, RF3, RF2, RF1 }, \
        { RG9, RG8, RG7, RG6, RG5, RG4, RG3, RG2, RG1 } \
    }
