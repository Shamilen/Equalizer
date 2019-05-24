/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.4 and Signal Processing Toolbox 8.0.
 * Generated on: 13-May-2019 20:32:41
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
  -0.000203357382651,-0.003204389817756,-8.886977907237e-17, 0.003270459710906,
   0.000211830606928,-0.003325589547083,-0.0004317863044644, 0.003369131115197,
  0.0006594924188607,-0.003400437841624,-0.0008945485870691, 0.003418864480566,
   0.001136529691535,-0.003423766511792,-0.001384986876472, 0.003414499200766,
    0.00163944864282, -0.00339041626851,-0.001899422018804, 0.003350868109251,
   0.002164393802775,-0.003295199482416,-0.002433831874747, 0.003222746591359,
   0.002707186572826, -0.00313283344357,-0.002983892130475, 0.003024767365139,
   0.003263368170385,-0.002897833514574,-0.003545021250494, 0.002751288206236,
   0.003828246457513,-0.002584350809283,-0.004112429043171, 0.002396193931415,
   0.004396946098224, -0.00218593152376,-0.004681168259115, 0.001952604448797,
   0.004964461442099,-0.001695162929747, -0.00524618859949, 0.001412445137478,
   0.005525711492639,-0.001103150955185,-0.005802392476172,0.0007658096720692,
    0.00607559628794,-0.0003987399659823,-0.006344691839157,1.269465172341e-16,
   0.006609053999122,0.0004326752822361,-0.006868065368976,-0.0009019536137702,
   0.007121118038938, 0.001411007035702,-0.007367615323519,-0.001963643239908,
    0.00760697346926, 0.002564477252694, -0.00783862332963,-0.003219158685854,
    0.00806201200181, 0.003934676742769,-0.008276604420186,-0.004719775925513,
   0.008481884901541, 0.005585532394258,-0.008677358637029,  -0.0065461684907,
   0.008862553126236, 0.007620228871658,-0.009037019548759,-0.008832320706205,
   0.009200334068963,  0.01021576122903,-0.009352099069762, -0.01181673750165,
   0.009491944311515,  0.01370109258478,-0.009619528012332, -0.01596590099114,
   0.009734537846372,  0.01876030335242,-0.009836691856922, -0.02232557169732,
   0.009925739281385,  0.02707888059327, -0.01000146128551, -0.03380877097449,
    0.01006367160453,  0.04420569194111,  -0.0101122170892, -0.06266583874265,
    0.01014697815492,   0.1053103356576, -0.01016786913255,  -0.3172345919578,
     0.5087419259919,  -0.3172345919578, -0.01016786913255,   0.1053103356576,
    0.01014697815492, -0.06266583874265,  -0.0101122170892,  0.04420569194111,
    0.01006367160453, -0.03380877097449, -0.01000146128551,  0.02707888059327,
   0.009925739281385, -0.02232557169732,-0.009836691856922,  0.01876030335242,
   0.009734537846372, -0.01596590099114,-0.009619528012332,  0.01370109258478,
   0.009491944311515, -0.01181673750165,-0.009352099069762,  0.01021576122903,
   0.009200334068963,-0.008832320706205,-0.009037019548759, 0.007620228871658,
   0.008862553126236,  -0.0065461684907,-0.008677358637029, 0.005585532394258,
   0.008481884901541,-0.004719775925513,-0.008276604420186, 0.003934676742769,
    0.00806201200181,-0.003219158685854, -0.00783862332963, 0.002564477252694,
    0.00760697346926,-0.001963643239908,-0.007367615323519, 0.001411007035702,
   0.007121118038938,-0.0009019536137702,-0.006868065368976,0.0004326752822361,
   0.006609053999122,1.269465172341e-16,-0.006344691839157,-0.0003987399659823,
    0.00607559628794,0.0007658096720692,-0.005802392476172,-0.001103150955185,
   0.005525711492639, 0.001412445137478, -0.00524618859949,-0.001695162929747,
   0.004964461442099, 0.001952604448797,-0.004681168259115, -0.00218593152376,
   0.004396946098224, 0.002396193931415,-0.004112429043171,-0.002584350809283,
   0.003828246457513, 0.002751288206236,-0.003545021250494,-0.002897833514574,
   0.003263368170385, 0.003024767365139,-0.002983892130475, -0.00313283344357,
   0.002707186572826, 0.003222746591359,-0.002433831874747,-0.003295199482416,
   0.002164393802775, 0.003350868109251,-0.001899422018804, -0.00339041626851,
    0.00163944864282, 0.003414499200766,-0.001384986876472,-0.003423766511792,
   0.001136529691535, 0.003418864480566,-0.0008945485870691,-0.003400437841624,
  0.0006594924188607, 0.003369131115197,-0.0004317863044644,-0.003325589547083,
   0.000211830606928, 0.003270459710906,-8.886977907237e-17,-0.003204389817756,
  -0.000203357382651
};
