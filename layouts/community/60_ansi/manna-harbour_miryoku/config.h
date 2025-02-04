// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

#pragma once

#define XXX KC_NO

#if defined MIRYOKU_MAPPING_NOREVERSEANGLE
#define LAYOUT_miryoku(\
K00,  K01,  K02,  K03,  K04,                    K05,  K06,  K07,  K08,  K09,\
K10,  K11,  K12,  K13,  K14,                    K15,  K16,  K17,  K18,  K19,\
K20,  K21,  K22,  K23,  K24,                    K25,  K26,  K27,  K28,  K29,\
N30,  N31,  K32,  K33,  K34,                    K35,  K36,  K37,  N38,  N39\
)\
LAYOUT_60_ansi(\
K00,  K01,  K02,  K03,  K04,  XXX,  XXX,  XXX,  K05,  K06,  K07,  K08,  K09,  XXX,\
   K10,  K11,  K12,  K13,  K14,  XXX,  XXX,  XXX,  K15,  K16,  K17,  K18,  K19,  XXX,\
     K20,  K21,  K22,  K23,  K24,  XXX,  XXX,  XXX,  K25,  K26,  K27,  K28,  K29,\
  XXX,        K32,  K33,  K34,  XXX,  XXX,  XXX,  XXX,  K35,  K36,  K37,  XXX,\
  XXX,  XXX,  XXX,              XXX,              XXX,  XXX,        XXX,  XXX\
)
#else
#define LAYOUT_miryoku(\
            K00,  K01,  K02,  K03,  K04,        K05,  K06,  K07,  K08,  K09,\
            K10,  K11,  K12,  K13,  K14,        K15,  K16,  K17,  K18,  K19,\
            K20,  K21,  K22,  K23,  K24,        K25,  K26,  K27,  K28,  K29,\
            N30,  N31,  K32,  K33,  K34,        K35,  K36,  K37,  N38,  N39\
)\
LAYOUT_60_ansi(\
XXX,  XXX,  K00,  K01,  K02,  K03,  K04,  XXX,  K05,  K06,  K07,  K08,  K09,  XXX,\
   XXX,  K10,  K11,  K12,  K13,  K14,  XXX,  XXX,  K15,  K16,  K17,  K18,  K19,  XXX,\
     K20,  K21,  K22,  K23,  K24,  XXX,  XXX,  XXX,  K25,  K26,  K27,  K28,  K29,\
  XXX,        XXX,  K32,  K33,  K34,  XXX,  XXX,  XXX,  K35,  K36,  K37,  XXX,\
  XXX,  XXX,  XXX,              XXX,              XXX,  XXX,        XXX,  XXX\
)
#endif
