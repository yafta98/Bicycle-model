#include "Tire_model_pacejka_capi.h"
#include "Tire_model_pacejka.h"
#include "Tire_model_pacejka_private.h"
#include "look2_binlxpw.h"
static RegMdlInfo rtMdlInfo_Tire_model_pacejka [ 41 ] = { { "egsoduotjyq" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "Tire_model_pacejka" } , {
"nqfk00n310" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Tire_model_pacejka" } , { "j322wzvijl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "Tire_model_pacejka" } , { "du1myo2iay" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Tire_model_pacejka"
} , { "kvpxkxfxoe" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Tire_model_pacejka" } , { "gffrizkbpw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "Tire_model_pacejka" } , { "h5urtullk0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Tire_model_pacejka"
} , { "bzhikgxhi0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Tire_model_pacejka" } , { "kdvsb5ummy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "Tire_model_pacejka" } , { "iqh5qgsn2q" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Tire_model_pacejka"
} , { "efkch5ujew" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Tire_model_pacejka" } , { "c34nykg51z" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "Tire_model_pacejka" } , { "chhsfspjg4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Tire_model_pacejka"
} , { "plhwir35yu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Tire_model_pacejka" } , { "bjsdrxgrsu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "Tire_model_pacejka" } , { "dkubr21sck" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Tire_model_pacejka"
} , { "brgft2micc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Tire_model_pacejka" } , { "nydnh5v1v0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "Tire_model_pacejka" } , { "g2lhfec0dv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Tire_model_pacejka"
} , { "llrahcky2i" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Tire_model_pacejka" } , { "di2ze5nswd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "Tire_model_pacejka" } , { "Tire_model_pacejka" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "o4lvyyuan2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Tire_model_pacejka"
} , { "b3d5yn0kspb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Tire_model_pacejka" } , { "b3d5yn0ksp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "Tire_model_pacejka" } , { "ikswaaase3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Tire_model_pacejka"
} , { "ogsbmmq34c" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Tire_model_pacejka" } , {
"mr_Tire_model_pacejka_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Tire_model_pacejka" } , {
"mr_Tire_model_pacejka_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Tire_model_pacejka" } , {
"mr_Tire_model_pacejka_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Tire_model_pacejka" } , {
"mr_Tire_model_pacejka_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Tire_model_pacejka" } , {
"mr_Tire_model_pacejka_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Tire_model_pacejka" } , {
"mr_Tire_model_pacejka_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Tire_model_pacejka" } , {
"mr_Tire_model_pacejka_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "Tire_model_pacejka" } , {
"mr_Tire_model_pacejka_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "Tire_model_pacejka" } , {
"mr_Tire_model_pacejka_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "Tire_model_pacejka" } , {
"mr_Tire_model_pacejka_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "Tire_model_pacejka" } , {
"mr_Tire_model_pacejka_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "Tire_model_pacejka" } , { "mr_Tire_model_pacejka_GetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Tire_model_pacejka" } , {
"Tire_model_pacejka.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , {
"Tire_model_pacejka.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"Tire_model_pacejka" } } ; ejldaq20t0v ejldaq20t0 = { { - 0.26179938779914941
, - 0.26005405854715513 , - 0.2583087292951608 , - 0.25656340004316641 , -
0.25481807079117214 , - 0.2530727415391778 , - 0.25132741228718347 , -
0.24958208303518914 , - 0.24783675378319478 , - 0.24609142453120045 , -
0.24434609527920614 , - 0.24260076602721181 , - 0.24085543677521748 , -
0.23911010752322315 , - 0.23736477827122882 , - 0.23561944901923448 , -
0.23387411976724015 , - 0.23212879051524585 , - 0.23038346126325149 , -
0.22863813201125716 , - 0.22689280275926285 , - 0.22514747350726852 , -
0.22340214425527419 , - 0.22165681500327983 , - 0.21991148575128552 , -
0.21816615649929119 , - 0.21642082724729686 , - 0.21467549799530256 , -
0.2129301687433082 , - 0.21118483949131386 , - 0.20943951023931956 , -
0.20769418098732523 , - 0.2059488517353309 , - 0.20420352248333654 , -
0.20245819323134223 , - 0.2007128639793479 , - 0.19896753472735357 , -
0.19722220547535926 , - 0.1954768762233649 , - 0.19373154697137057 , -
0.19198621771937624 , - 0.19024088846738191 , - 0.1884955592153876 , -
0.18675022996339324 , - 0.18500490071139894 , - 0.18325957145940461 , -
0.18151424220741025 , - 0.17976891295541594 , - 0.17802358370342161 , -
0.17627825445142728 , - 0.17453292519943295 , - 0.17278759594743859 , -
0.17104226669544431 , - 0.16929693744344995 , - 0.16755160819145562 , -
0.16580627893946132 , - 0.16406094968746696 , - 0.16231562043547265 , -
0.16057029118347832 , - 0.158824961931484 , - 0.15707963267948966 , -
0.1553343034274953 , - 0.15358897417550102 , - 0.15184364492350666 , -
0.15009831567151233 , - 0.14835298641951802 , - 0.14660765716752366 , -
0.14486232791552936 , - 0.143116998663535 , - 0.1413716694115407 , -
0.13962634015954636 , - 0.13788101090755203 , - 0.1361356816555577 , -
0.13439035240356337 , - 0.13264502315156904 , - 0.1308996938995747 , -
0.12915436464758037 , - 0.12740903539558607 , - 0.12566370614359171 , -
0.12391837689159739 , - 0.12217304763960307 , - 0.12042771838760874 , -
0.11868238913561439 , - 0.11693705988362006 , - 0.11519173063162574 , -
0.11344640137963143 , - 0.11170107212763709 , - 0.10995574287564275 , -
0.10821041362364842 , - 0.1064650843716541 , - 0.10471975511965978 , -
0.10297442586766545 , - 0.1012290966156711 , - 0.09948376736367677 , -
0.097738438111682452 , - 0.09599310885968812 , - 0.094247779607693774 , -
0.092502450355699442 , - 0.090757121103705124 , - 0.0890117918517108 , -
0.087266462599716474 , - 0.085521133347722128 , - 0.0837758040957278 , -
0.082030474843733478 , - 0.08028514559173916 , - 0.078539816339744828 , -
0.076794487087750482 , - 0.07504915783575615 , - 0.073303828583761832 , -
0.0715584993317675 , - 0.069813170079773182 , - 0.068067840827778822 , -
0.0663225115757845 , - 0.064577182323790186 , - 0.062831853071795854 , -
0.061086523819801536 , - 0.059341194567807183 , - 0.057595865315812858 , -
0.055850536063818533 , - 0.054105206811824208 , - 0.05235987755982989 , -
0.05061454830783553 , - 0.048869219055841212 , - 0.047123889803846887 , -
0.045378560551852562 , - 0.043633231299858237 , - 0.041887902047863884 , -
0.040142572795869559 , - 0.038397243543875241 , - 0.036651914291880916 , -
0.034906585039886591 , - 0.033161255787892238 , - 0.031415926535897913 , -
0.029670597283903592 , - 0.027925268031909267 , - 0.026179938779914945 , -
0.024434609527920589 , - 0.022689280275926267 , - 0.020943951023931942 , -
0.019198621771937621 , - 0.017453292519943295 , - 0.015707963267948943 , -
0.013962634015954618 , - 0.012217304763960294 , - 0.010471975511965971 , -
0.0087266462599716477 , - 0.0069813170079772932 , - 0.00523598775598297 , -
0.0034906585039886466 , - 0.0017453292519943233 , 0.0 , 0.0017453292519943233
, 0.0034906585039886466 , 0.00523598775598297 , 0.0069813170079772932 ,
0.0087266462599716477 , 0.010471975511965971 , 0.012217304763960294 ,
0.013962634015954618 , 0.015707963267948943 , 0.017453292519943295 ,
0.019198621771937621 , 0.020943951023931942 , 0.022689280275926267 ,
0.024434609527920589 , 0.026179938779914945 , 0.027925268031909267 ,
0.029670597283903592 , 0.031415926535897913 , 0.033161255787892238 ,
0.034906585039886591 , 0.036651914291880916 , 0.038397243543875241 ,
0.040142572795869559 , 0.041887902047863884 , 0.043633231299858237 ,
0.045378560551852562 , 0.047123889803846887 , 0.048869219055841212 ,
0.05061454830783553 , 0.05235987755982989 , 0.054105206811824208 ,
0.055850536063818533 , 0.057595865315812858 , 0.059341194567807183 ,
0.061086523819801536 , 0.062831853071795854 , 0.064577182323790186 ,
0.0663225115757845 , 0.068067840827778822 , 0.069813170079773182 ,
0.0715584993317675 , 0.073303828583761832 , 0.07504915783575615 ,
0.076794487087750482 , 0.078539816339744828 , 0.08028514559173916 ,
0.082030474843733478 , 0.0837758040957278 , 0.085521133347722128 ,
0.087266462599716474 , 0.0890117918517108 , 0.090757121103705124 ,
0.092502450355699442 , 0.094247779607693774 , 0.09599310885968812 ,
0.097738438111682452 , 0.09948376736367677 , 0.1012290966156711 ,
0.10297442586766545 , 0.10471975511965978 , 0.1064650843716541 ,
0.10821041362364842 , 0.10995574287564275 , 0.11170107212763709 ,
0.11344640137963143 , 0.11519173063162574 , 0.11693705988362006 ,
0.11868238913561439 , 0.12042771838760874 , 0.12217304763960307 ,
0.12391837689159739 , 0.12566370614359171 , 0.12740903539558607 ,
0.12915436464758037 , 0.1308996938995747 , 0.13264502315156904 ,
0.13439035240356337 , 0.1361356816555577 , 0.13788101090755203 ,
0.13962634015954636 , 0.1413716694115407 , 0.143116998663535 ,
0.14486232791552936 , 0.14660765716752366 , 0.14835298641951802 ,
0.15009831567151233 , 0.15184364492350666 , 0.15358897417550102 ,
0.1553343034274953 , 0.15707963267948966 , 0.158824961931484 ,
0.16057029118347832 , 0.16231562043547265 , 0.16406094968746696 ,
0.16580627893946132 , 0.16755160819145562 , 0.16929693744344995 ,
0.17104226669544431 , 0.17278759594743859 , 0.17453292519943295 ,
0.17627825445142728 , 0.17802358370342161 , 0.17976891295541594 ,
0.18151424220741025 , 0.18325957145940461 , 0.18500490071139894 ,
0.18675022996339324 , 0.1884955592153876 , 0.19024088846738191 ,
0.19198621771937624 , 0.19373154697137057 , 0.1954768762233649 ,
0.19722220547535926 , 0.19896753472735357 , 0.2007128639793479 ,
0.20245819323134223 , 0.20420352248333654 , 0.2059488517353309 ,
0.20769418098732523 , 0.20943951023931956 , 0.21118483949131386 ,
0.2129301687433082 , 0.21467549799530256 , 0.21642082724729686 ,
0.21816615649929119 , 0.21991148575128552 , 0.22165681500327983 ,
0.22340214425527419 , 0.22514747350726852 , 0.22689280275926285 ,
0.22863813201125716 , 0.23038346126325149 , 0.23212879051524585 ,
0.23387411976724015 , 0.23561944901923448 , 0.23736477827122882 ,
0.23911010752322315 , 0.24085543677521748 , 0.24260076602721181 ,
0.24434609527920614 , 0.24609142453120045 , 0.24783675378319478 ,
0.24958208303518914 , 0.25132741228718347 , 0.2530727415391778 ,
0.25481807079117214 , 0.25656340004316641 , 0.2583087292951608 ,
0.26005405854715513 , 0.26179938779914941 } , { - 1200.0 , - 1180.0 , -
1160.0 , - 1140.0 , - 1120.0 , - 1100.0 , - 1080.0 , - 1060.0 , - 1040.0 , -
1020.0 , - 1000.0 , - 980.0 , - 960.0 , - 940.0 , - 920.0 , - 900.0 , - 880.0
, - 860.0 , - 840.0 , - 820.0 , - 800.0 , - 780.0 , - 760.0 , - 740.0 , -
720.0 , - 700.0 , - 680.0 , - 660.0 , - 640.0 , - 620.0 , - 600.0 , - 580.0 ,
- 560.0 , - 540.0 , - 520.0 , - 500.0 , - 480.0 , - 460.0 , - 440.0 , - 420.0
, - 400.0 , - 380.0 , - 360.0 , - 340.0 , - 320.0 , - 300.0 , - 280.0 , -
260.0 , - 240.0 , - 220.0 , - 200.0 , - 180.0 , - 160.0 , - 140.0 , - 120.0 ,
- 100.0 , - 80.0 , - 60.0 , - 40.0 , - 20.0 , - 0.0 } , { -
0.26179938779914941 , - 0.26005405854715513 , - 0.2583087292951608 , -
0.25656340004316641 , - 0.25481807079117214 , - 0.2530727415391778 , -
0.25132741228718347 , - 0.24958208303518914 , - 0.24783675378319478 , -
0.24609142453120045 , - 0.24434609527920614 , - 0.24260076602721181 , -
0.24085543677521748 , - 0.23911010752322315 , - 0.23736477827122882 , -
0.23561944901923448 , - 0.23387411976724015 , - 0.23212879051524585 , -
0.23038346126325149 , - 0.22863813201125716 , - 0.22689280275926285 , -
0.22514747350726852 , - 0.22340214425527419 , - 0.22165681500327983 , -
0.21991148575128552 , - 0.21816615649929119 , - 0.21642082724729686 , -
0.21467549799530256 , - 0.2129301687433082 , - 0.21118483949131386 , -
0.20943951023931956 , - 0.20769418098732523 , - 0.2059488517353309 , -
0.20420352248333654 , - 0.20245819323134223 , - 0.2007128639793479 , -
0.19896753472735357 , - 0.19722220547535926 , - 0.1954768762233649 , -
0.19373154697137057 , - 0.19198621771937624 , - 0.19024088846738191 , -
0.1884955592153876 , - 0.18675022996339324 , - 0.18500490071139894 , -
0.18325957145940461 , - 0.18151424220741025 , - 0.17976891295541594 , -
0.17802358370342161 , - 0.17627825445142728 , - 0.17453292519943295 , -
0.17278759594743859 , - 0.17104226669544431 , - 0.16929693744344995 , -
0.16755160819145562 , - 0.16580627893946132 , - 0.16406094968746696 , -
0.16231562043547265 , - 0.16057029118347832 , - 0.158824961931484 , -
0.15707963267948966 , - 0.1553343034274953 , - 0.15358897417550102 , -
0.15184364492350666 , - 0.15009831567151233 , - 0.14835298641951802 , -
0.14660765716752366 , - 0.14486232791552936 , - 0.143116998663535 , -
0.1413716694115407 , - 0.13962634015954636 , - 0.13788101090755203 , -
0.1361356816555577 , - 0.13439035240356337 , - 0.13264502315156904 , -
0.1308996938995747 , - 0.12915436464758037 , - 0.12740903539558607 , -
0.12566370614359171 , - 0.12391837689159739 , - 0.12217304763960307 , -
0.12042771838760874 , - 0.11868238913561439 , - 0.11693705988362006 , -
0.11519173063162574 , - 0.11344640137963143 , - 0.11170107212763709 , -
0.10995574287564275 , - 0.10821041362364842 , - 0.1064650843716541 , -
0.10471975511965978 , - 0.10297442586766545 , - 0.1012290966156711 , -
0.09948376736367677 , - 0.097738438111682452 , - 0.09599310885968812 , -
0.094247779607693774 , - 0.092502450355699442 , - 0.090757121103705124 , -
0.0890117918517108 , - 0.087266462599716474 , - 0.085521133347722128 , -
0.0837758040957278 , - 0.082030474843733478 , - 0.08028514559173916 , -
0.078539816339744828 , - 0.076794487087750482 , - 0.07504915783575615 , -
0.073303828583761832 , - 0.0715584993317675 , - 0.069813170079773182 , -
0.068067840827778822 , - 0.0663225115757845 , - 0.064577182323790186 , -
0.062831853071795854 , - 0.061086523819801536 , - 0.059341194567807183 , -
0.057595865315812858 , - 0.055850536063818533 , - 0.054105206811824208 , -
0.05235987755982989 , - 0.05061454830783553 , - 0.048869219055841212 , -
0.047123889803846887 , - 0.045378560551852562 , - 0.043633231299858237 , -
0.041887902047863884 , - 0.040142572795869559 , - 0.038397243543875241 , -
0.036651914291880916 , - 0.034906585039886591 , - 0.033161255787892238 , -
0.031415926535897913 , - 0.029670597283903592 , - 0.027925268031909267 , -
0.026179938779914945 , - 0.024434609527920589 , - 0.022689280275926267 , -
0.020943951023931942 , - 0.019198621771937621 , - 0.017453292519943295 , -
0.015707963267948943 , - 0.013962634015954618 , - 0.012217304763960294 , -
0.010471975511965971 , - 0.0087266462599716477 , - 0.0069813170079772932 , -
0.00523598775598297 , - 0.0034906585039886466 , - 0.0017453292519943233 , 0.0
, 0.0017453292519943233 , 0.0034906585039886466 , 0.00523598775598297 ,
0.0069813170079772932 , 0.0087266462599716477 , 0.010471975511965971 ,
0.012217304763960294 , 0.013962634015954618 , 0.015707963267948943 ,
0.017453292519943295 , 0.019198621771937621 , 0.020943951023931942 ,
0.022689280275926267 , 0.024434609527920589 , 0.026179938779914945 ,
0.027925268031909267 , 0.029670597283903592 , 0.031415926535897913 ,
0.033161255787892238 , 0.034906585039886591 , 0.036651914291880916 ,
0.038397243543875241 , 0.040142572795869559 , 0.041887902047863884 ,
0.043633231299858237 , 0.045378560551852562 , 0.047123889803846887 ,
0.048869219055841212 , 0.05061454830783553 , 0.05235987755982989 ,
0.054105206811824208 , 0.055850536063818533 , 0.057595865315812858 ,
0.059341194567807183 , 0.061086523819801536 , 0.062831853071795854 ,
0.064577182323790186 , 0.0663225115757845 , 0.068067840827778822 ,
0.069813170079773182 , 0.0715584993317675 , 0.073303828583761832 ,
0.07504915783575615 , 0.076794487087750482 , 0.078539816339744828 ,
0.08028514559173916 , 0.082030474843733478 , 0.0837758040957278 ,
0.085521133347722128 , 0.087266462599716474 , 0.0890117918517108 ,
0.090757121103705124 , 0.092502450355699442 , 0.094247779607693774 ,
0.09599310885968812 , 0.097738438111682452 , 0.09948376736367677 ,
0.1012290966156711 , 0.10297442586766545 , 0.10471975511965978 ,
0.1064650843716541 , 0.10821041362364842 , 0.10995574287564275 ,
0.11170107212763709 , 0.11344640137963143 , 0.11519173063162574 ,
0.11693705988362006 , 0.11868238913561439 , 0.12042771838760874 ,
0.12217304763960307 , 0.12391837689159739 , 0.12566370614359171 ,
0.12740903539558607 , 0.12915436464758037 , 0.1308996938995747 ,
0.13264502315156904 , 0.13439035240356337 , 0.1361356816555577 ,
0.13788101090755203 , 0.13962634015954636 , 0.1413716694115407 ,
0.143116998663535 , 0.14486232791552936 , 0.14660765716752366 ,
0.14835298641951802 , 0.15009831567151233 , 0.15184364492350666 ,
0.15358897417550102 , 0.1553343034274953 , 0.15707963267948966 ,
0.158824961931484 , 0.16057029118347832 , 0.16231562043547265 ,
0.16406094968746696 , 0.16580627893946132 , 0.16755160819145562 ,
0.16929693744344995 , 0.17104226669544431 , 0.17278759594743859 ,
0.17453292519943295 , 0.17627825445142728 , 0.17802358370342161 ,
0.17976891295541594 , 0.18151424220741025 , 0.18325957145940461 ,
0.18500490071139894 , 0.18675022996339324 , 0.1884955592153876 ,
0.19024088846738191 , 0.19198621771937624 , 0.19373154697137057 ,
0.1954768762233649 , 0.19722220547535926 , 0.19896753472735357 ,
0.2007128639793479 , 0.20245819323134223 , 0.20420352248333654 ,
0.2059488517353309 , 0.20769418098732523 , 0.20943951023931956 ,
0.21118483949131386 , 0.2129301687433082 , 0.21467549799530256 ,
0.21642082724729686 , 0.21816615649929119 , 0.21991148575128552 ,
0.22165681500327983 , 0.22340214425527419 , 0.22514747350726852 ,
0.22689280275926285 , 0.22863813201125716 , 0.23038346126325149 ,
0.23212879051524585 , 0.23387411976724015 , 0.23561944901923448 ,
0.23736477827122882 , 0.23911010752322315 , 0.24085543677521748 ,
0.24260076602721181 , 0.24434609527920614 , 0.24609142453120045 ,
0.24783675378319478 , 0.24958208303518914 , 0.25132741228718347 ,
0.2530727415391778 , 0.25481807079117214 , 0.25656340004316641 ,
0.2583087292951608 , 0.26005405854715513 , 0.26179938779914941 } , { - 1200.0
, - 1180.0 , - 1160.0 , - 1140.0 , - 1120.0 , - 1100.0 , - 1080.0 , - 1060.0
, - 1040.0 , - 1020.0 , - 1000.0 , - 980.0 , - 960.0 , - 940.0 , - 920.0 , -
900.0 , - 880.0 , - 860.0 , - 840.0 , - 820.0 , - 800.0 , - 780.0 , - 760.0 ,
- 740.0 , - 720.0 , - 700.0 , - 680.0 , - 660.0 , - 640.0 , - 620.0 , - 600.0
, - 580.0 , - 560.0 , - 540.0 , - 520.0 , - 500.0 , - 480.0 , - 460.0 , -
440.0 , - 420.0 , - 400.0 , - 380.0 , - 360.0 , - 340.0 , - 320.0 , - 300.0 ,
- 280.0 , - 260.0 , - 240.0 , - 220.0 , - 200.0 , - 180.0 , - 160.0 , - 140.0
, - 120.0 , - 100.0 , - 80.0 , - 60.0 , - 40.0 , - 20.0 , - 0.0 } , 0.0 , {
300U , 60U } , { 300U , 60U } } ; void nydnh5v1v0 ( real_T * amonh5yeft ) { *
amonh5yeft = ejldaq20t0 . P_4 ; } void llrahcky2i ( real_T * amonh5yeft ) { *
amonh5yeft = ejldaq20t0 . P_4 ; } void Tire_model_pacejka ( const real_T *
nopozamn2v , const real_T * hdjvjc1xhi , real_T * lv0raqoggy , real_T *
bztktwqjat , const real_T rtp_aligning_torque [ 18361 ] , const real_T
rtp_lateral_coeff [ 18361 ] ) { real_T bms5sivtjs ; bms5sivtjs =
look2_binlxpw ( * nopozamn2v , * hdjvjc1xhi , ejldaq20t0 . P_0 , ejldaq20t0 .
P_1 , rtp_lateral_coeff , ejldaq20t0 . P_5 , 301U ) ; * bztktwqjat =
look2_binlxpw ( * nopozamn2v , * hdjvjc1xhi , ejldaq20t0 . P_2 , ejldaq20t0 .
P_3 , rtp_aligning_torque , ejldaq20t0 . P_6 , 301U ) ; * lv0raqoggy =
bms5sivtjs * * hdjvjc1xhi ; } void Tire_model_pacejkaTID1 ( real_T *
amonh5yeft ) { * amonh5yeft = ejldaq20t0 . P_4 ; } void dkubr21sck (
ogsbmmq34c * const bgw0buioch ) { if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( bgw0buioch -> _mdlRefSfcnS , "Tire_model_pacejka" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void g2lhfec0dv (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , ogsbmmq34c
* const bgw0buioch , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T )
) ; ( void ) memset ( ( void * ) bgw0buioch , 0 , sizeof ( ogsbmmq34c ) ) ;
bgw0buioch -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; bgw0buioch ->
Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; bgw0buioch -> _mdlRefSfcnS =
( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( bgw0buioch -> _mdlRefSfcnS , "Tire_model_pacejka" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; }
Tire_model_pacejka_InitializeDataMapInfo ( bgw0buioch , sysRanPtr ,
contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL
) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
bgw0buioch -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( bgw0buioch ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
bgw0buioch -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_Tire_model_pacejka_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo
= false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ;
if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo (
mdlRefSfcnS , modelName , rtMdlInfo_Tire_model_pacejka , 41 ) ; * retVal = 1
; } static void mr_Tire_model_pacejka_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_Tire_model_pacejka_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void mr_Tire_model_pacejka_restoreDataFromMxArray (
void * destData , const mxArray * srcArray , mwIndex i , int j , size_t
numBytes ) ; static void mr_Tire_model_pacejka_restoreDataFromMxArray ( void
* destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes )
{ memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void
mr_Tire_model_pacejka_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex
i , int j , uint_T bitVal ) ; static void
mr_Tire_model_pacejka_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex
i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Tire_model_pacejka_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Tire_model_pacejka_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_Tire_model_pacejka_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_Tire_model_pacejka_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Tire_model_pacejka_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void
mr_Tire_model_pacejka_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Tire_model_pacejka_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_Tire_model_pacejka_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_Tire_model_pacejka_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_Tire_model_pacejka_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_Tire_model_pacejka_GetDWork ( const
egsoduotjyq * mdlrefDW ) { ( void ) mdlrefDW ; return NULL ; } void
mr_Tire_model_pacejka_SetDWork ( egsoduotjyq * mdlrefDW , const mxArray *
ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ; } void
mr_Tire_model_pacejka_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 2409756296U , 3753602701U , 2213157207U ,
4189894064U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"Tire_model_pacejka" , & chksum [ 0 ] ) ; } mxArray *
mr_Tire_model_pacejka_GetSimStateDisallowedBlocks ( ) { return NULL ; }
