/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.4 and Signal Processing Toolbox 8.0.
 * Generated on: 30-Apr-2019 12:28:57
 */

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 201
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * C:\Program Files\MATLAB\R2018a\extern\include\tmwtypes.h 
 */
const int BL = 201;
const real64_T B[201] = {
   0.001598201173564, 0.003024474901867, 0.002692150300563, 0.001291140244291,
  8.099414950007e-05,0.0001076926334309,  0.00154437448337,  0.00354581817856,
    0.00471572754686, 0.003931319104571, 0.001054395619644, -0.00289064103444,
  -0.006196699261932,-0.007362260049198,-0.005897517113373,-0.002592023367963,
   0.000916575922951, 0.003039077460789, 0.003094408774051, 0.001644111588481,
  0.0001073252930858,-0.0001265999088346, 0.001423945753739, 0.003981653841035,
   0.005909500947864, 0.005652876988517, 0.002693919222574,-0.002038658924516,
  -0.006566269330763,-0.008870833376531,-0.007967978613422,-0.004439475354443,
  -0.0001127754860018, 0.002946669206661,  0.00356954337456, 0.002099093566326,
  0.0001301529457008,-0.0004902856174601, 0.001169568601135, 0.004475256896631,
   0.007496299718598, 0.008079286400103, 0.005132235021956,-0.0006194195178448,
  -0.006870978466782, -0.01088357902297, -0.01092531177948,-0.007205102079206,
  -0.001757404631158, 0.002683449885654, 0.004202507690153, 0.002757334644886,
  0.0001487311225245,-0.001100303476417,0.0006674628519158, 0.005109864290034,
   0.009901436194924,  0.01195523697712, 0.009204967961663,  0.00194076784467,
   -0.00710489246883, -0.01404800583121, -0.01586371837006, -0.01201494363906,
   -0.00476199828262, 0.002073691191584, 0.005244842231984, 0.003921148241368,
   0.000162452686193,-0.002314080962166,  -0.0004343664955, 0.006163675343862,
    0.01453972665868,  0.01980886887987,  0.01781604749428, 0.007682183064413,
  -0.007263434672088, -0.02084104479606, -0.02708945477967, -0.02344744151174,
   -0.01226136272965,0.0003548113176135,   0.0078530224803, 0.007039338940511,
  0.0001708692027844,-0.006013900240659,-0.004090388969247, 0.009306614781616,
    0.03041161479798,  0.04892653148705,  0.05249394634209,  0.03316173738458,
  -0.007343493023182, -0.05646868495386, -0.09494979940185,  -0.1047843195982,
   -0.07760368219431, -0.01949594879529,  0.05026467204239,   0.1064089126213,
     0.1278473274091,   0.1064089126213,  0.05026467204239, -0.01949594879529,
   -0.07760368219431,  -0.1047843195982, -0.09494979940185, -0.05646868495386,
  -0.007343493023182,  0.03316173738458,  0.05249394634209,  0.04892653148705,
    0.03041161479798, 0.009306614781616,-0.004090388969247,-0.006013900240659,
  0.0001708692027844, 0.007039338940511,   0.0078530224803,0.0003548113176135,
   -0.01226136272965, -0.02344744151174, -0.02708945477967, -0.02084104479606,
  -0.007263434672088, 0.007682183064413,  0.01781604749428,  0.01980886887987,
    0.01453972665868, 0.006163675343862,  -0.0004343664955,-0.002314080962166,
   0.000162452686193, 0.003921148241368, 0.005244842231984, 0.002073691191584,
   -0.00476199828262, -0.01201494363906, -0.01586371837006, -0.01404800583121,
   -0.00710489246883,  0.00194076784467, 0.009204967961663,  0.01195523697712,
   0.009901436194924, 0.005109864290034,0.0006674628519158,-0.001100303476417,
  0.0001487311225245, 0.002757334644886, 0.004202507690153, 0.002683449885654,
  -0.001757404631158,-0.007205102079206, -0.01092531177948, -0.01088357902297,
  -0.006870978466782,-0.0006194195178448, 0.005132235021956, 0.008079286400103,
   0.007496299718598, 0.004475256896631, 0.001169568601135,-0.0004902856174601,
  0.0001301529457008, 0.002099093566326,  0.00356954337456, 0.002946669206661,
  -0.0001127754860018,-0.004439475354443,-0.007967978613422,-0.008870833376531,
  -0.006566269330763,-0.002038658924516, 0.002693919222574, 0.005652876988517,
   0.005909500947864, 0.003981653841035, 0.001423945753739,-0.0001265999088346,
  0.0001073252930858, 0.001644111588481, 0.003094408774051, 0.003039077460789,
   0.000916575922951,-0.002592023367963,-0.005897517113373,-0.007362260049198,
  -0.006196699261932, -0.00289064103444, 0.001054395619644, 0.003931319104571,
    0.00471572754686,  0.00354581817856,  0.00154437448337,0.0001076926334309,
  8.099414950007e-05, 0.001291140244291, 0.002692150300563, 0.003024474901867,
   0.001598201173564
};
