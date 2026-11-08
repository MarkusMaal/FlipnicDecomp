#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001141e0
// Address: 0x1141e0 - 0x115bf4
void FUN_001141e0_0x1141e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001141e0_0x1141e0");
#endif

    switch (ctx->pc) {
        case 0x1141e0u: goto label_1141e0;
        case 0x1141e4u: goto label_1141e4;
        case 0x1141e8u: goto label_1141e8;
        case 0x1141ecu: goto label_1141ec;
        case 0x1141f0u: goto label_1141f0;
        case 0x1141f4u: goto label_1141f4;
        case 0x1141f8u: goto label_1141f8;
        case 0x1141fcu: goto label_1141fc;
        case 0x114200u: goto label_114200;
        case 0x114204u: goto label_114204;
        case 0x114208u: goto label_114208;
        case 0x11420cu: goto label_11420c;
        case 0x114210u: goto label_114210;
        case 0x114214u: goto label_114214;
        case 0x114218u: goto label_114218;
        case 0x11421cu: goto label_11421c;
        case 0x114220u: goto label_114220;
        case 0x114224u: goto label_114224;
        case 0x114228u: goto label_114228;
        case 0x11422cu: goto label_11422c;
        case 0x114230u: goto label_114230;
        case 0x114234u: goto label_114234;
        case 0x114238u: goto label_114238;
        case 0x11423cu: goto label_11423c;
        case 0x114240u: goto label_114240;
        case 0x114244u: goto label_114244;
        case 0x114248u: goto label_114248;
        case 0x11424cu: goto label_11424c;
        case 0x114250u: goto label_114250;
        case 0x114254u: goto label_114254;
        case 0x114258u: goto label_114258;
        case 0x11425cu: goto label_11425c;
        case 0x114260u: goto label_114260;
        case 0x114264u: goto label_114264;
        case 0x114268u: goto label_114268;
        case 0x11426cu: goto label_11426c;
        case 0x114270u: goto label_114270;
        case 0x114274u: goto label_114274;
        case 0x114278u: goto label_114278;
        case 0x11427cu: goto label_11427c;
        case 0x114280u: goto label_114280;
        case 0x114284u: goto label_114284;
        case 0x114288u: goto label_114288;
        case 0x11428cu: goto label_11428c;
        case 0x114290u: goto label_114290;
        case 0x114294u: goto label_114294;
        case 0x114298u: goto label_114298;
        case 0x11429cu: goto label_11429c;
        case 0x1142a0u: goto label_1142a0;
        case 0x1142a4u: goto label_1142a4;
        case 0x1142a8u: goto label_1142a8;
        case 0x1142acu: goto label_1142ac;
        case 0x1142b0u: goto label_1142b0;
        case 0x1142b4u: goto label_1142b4;
        case 0x1142b8u: goto label_1142b8;
        case 0x1142bcu: goto label_1142bc;
        case 0x1142c0u: goto label_1142c0;
        case 0x1142c4u: goto label_1142c4;
        case 0x1142c8u: goto label_1142c8;
        case 0x1142ccu: goto label_1142cc;
        case 0x1142d0u: goto label_1142d0;
        case 0x1142d4u: goto label_1142d4;
        case 0x1142d8u: goto label_1142d8;
        case 0x1142dcu: goto label_1142dc;
        case 0x1142e0u: goto label_1142e0;
        case 0x1142e4u: goto label_1142e4;
        case 0x1142e8u: goto label_1142e8;
        case 0x1142ecu: goto label_1142ec;
        case 0x1142f0u: goto label_1142f0;
        case 0x1142f4u: goto label_1142f4;
        case 0x1142f8u: goto label_1142f8;
        case 0x1142fcu: goto label_1142fc;
        case 0x114300u: goto label_114300;
        case 0x114304u: goto label_114304;
        case 0x114308u: goto label_114308;
        case 0x11430cu: goto label_11430c;
        case 0x114310u: goto label_114310;
        case 0x114314u: goto label_114314;
        case 0x114318u: goto label_114318;
        case 0x11431cu: goto label_11431c;
        case 0x114320u: goto label_114320;
        case 0x114324u: goto label_114324;
        case 0x114328u: goto label_114328;
        case 0x11432cu: goto label_11432c;
        case 0x114330u: goto label_114330;
        case 0x114334u: goto label_114334;
        case 0x114338u: goto label_114338;
        case 0x11433cu: goto label_11433c;
        case 0x114340u: goto label_114340;
        case 0x114344u: goto label_114344;
        case 0x114348u: goto label_114348;
        case 0x11434cu: goto label_11434c;
        case 0x114350u: goto label_114350;
        case 0x114354u: goto label_114354;
        case 0x114358u: goto label_114358;
        case 0x11435cu: goto label_11435c;
        case 0x114360u: goto label_114360;
        case 0x114364u: goto label_114364;
        case 0x114368u: goto label_114368;
        case 0x11436cu: goto label_11436c;
        case 0x114370u: goto label_114370;
        case 0x114374u: goto label_114374;
        case 0x114378u: goto label_114378;
        case 0x11437cu: goto label_11437c;
        case 0x114380u: goto label_114380;
        case 0x114384u: goto label_114384;
        case 0x114388u: goto label_114388;
        case 0x11438cu: goto label_11438c;
        case 0x114390u: goto label_114390;
        case 0x114394u: goto label_114394;
        case 0x114398u: goto label_114398;
        case 0x11439cu: goto label_11439c;
        case 0x1143a0u: goto label_1143a0;
        case 0x1143a4u: goto label_1143a4;
        case 0x1143a8u: goto label_1143a8;
        case 0x1143acu: goto label_1143ac;
        case 0x1143b0u: goto label_1143b0;
        case 0x1143b4u: goto label_1143b4;
        case 0x1143b8u: goto label_1143b8;
        case 0x1143bcu: goto label_1143bc;
        case 0x1143c0u: goto label_1143c0;
        case 0x1143c4u: goto label_1143c4;
        case 0x1143c8u: goto label_1143c8;
        case 0x1143ccu: goto label_1143cc;
        case 0x1143d0u: goto label_1143d0;
        case 0x1143d4u: goto label_1143d4;
        case 0x1143d8u: goto label_1143d8;
        case 0x1143dcu: goto label_1143dc;
        case 0x1143e0u: goto label_1143e0;
        case 0x1143e4u: goto label_1143e4;
        case 0x1143e8u: goto label_1143e8;
        case 0x1143ecu: goto label_1143ec;
        case 0x1143f0u: goto label_1143f0;
        case 0x1143f4u: goto label_1143f4;
        case 0x1143f8u: goto label_1143f8;
        case 0x1143fcu: goto label_1143fc;
        case 0x114400u: goto label_114400;
        case 0x114404u: goto label_114404;
        case 0x114408u: goto label_114408;
        case 0x11440cu: goto label_11440c;
        case 0x114410u: goto label_114410;
        case 0x114414u: goto label_114414;
        case 0x114418u: goto label_114418;
        case 0x11441cu: goto label_11441c;
        case 0x114420u: goto label_114420;
        case 0x114424u: goto label_114424;
        case 0x114428u: goto label_114428;
        case 0x11442cu: goto label_11442c;
        case 0x114430u: goto label_114430;
        case 0x114434u: goto label_114434;
        case 0x114438u: goto label_114438;
        case 0x11443cu: goto label_11443c;
        case 0x114440u: goto label_114440;
        case 0x114444u: goto label_114444;
        case 0x114448u: goto label_114448;
        case 0x11444cu: goto label_11444c;
        case 0x114450u: goto label_114450;
        case 0x114454u: goto label_114454;
        case 0x114458u: goto label_114458;
        case 0x11445cu: goto label_11445c;
        case 0x114460u: goto label_114460;
        case 0x114464u: goto label_114464;
        case 0x114468u: goto label_114468;
        case 0x11446cu: goto label_11446c;
        case 0x114470u: goto label_114470;
        case 0x114474u: goto label_114474;
        case 0x114478u: goto label_114478;
        case 0x11447cu: goto label_11447c;
        case 0x114480u: goto label_114480;
        case 0x114484u: goto label_114484;
        case 0x114488u: goto label_114488;
        case 0x11448cu: goto label_11448c;
        case 0x114490u: goto label_114490;
        case 0x114494u: goto label_114494;
        case 0x114498u: goto label_114498;
        case 0x11449cu: goto label_11449c;
        case 0x1144a0u: goto label_1144a0;
        case 0x1144a4u: goto label_1144a4;
        case 0x1144a8u: goto label_1144a8;
        case 0x1144acu: goto label_1144ac;
        case 0x1144b0u: goto label_1144b0;
        case 0x1144b4u: goto label_1144b4;
        case 0x1144b8u: goto label_1144b8;
        case 0x1144bcu: goto label_1144bc;
        case 0x1144c0u: goto label_1144c0;
        case 0x1144c4u: goto label_1144c4;
        case 0x1144c8u: goto label_1144c8;
        case 0x1144ccu: goto label_1144cc;
        case 0x1144d0u: goto label_1144d0;
        case 0x1144d4u: goto label_1144d4;
        case 0x1144d8u: goto label_1144d8;
        case 0x1144dcu: goto label_1144dc;
        case 0x1144e0u: goto label_1144e0;
        case 0x1144e4u: goto label_1144e4;
        case 0x1144e8u: goto label_1144e8;
        case 0x1144ecu: goto label_1144ec;
        case 0x1144f0u: goto label_1144f0;
        case 0x1144f4u: goto label_1144f4;
        case 0x1144f8u: goto label_1144f8;
        case 0x1144fcu: goto label_1144fc;
        case 0x114500u: goto label_114500;
        case 0x114504u: goto label_114504;
        case 0x114508u: goto label_114508;
        case 0x11450cu: goto label_11450c;
        case 0x114510u: goto label_114510;
        case 0x114514u: goto label_114514;
        case 0x114518u: goto label_114518;
        case 0x11451cu: goto label_11451c;
        case 0x114520u: goto label_114520;
        case 0x114524u: goto label_114524;
        case 0x114528u: goto label_114528;
        case 0x11452cu: goto label_11452c;
        case 0x114530u: goto label_114530;
        case 0x114534u: goto label_114534;
        case 0x114538u: goto label_114538;
        case 0x11453cu: goto label_11453c;
        case 0x114540u: goto label_114540;
        case 0x114544u: goto label_114544;
        case 0x114548u: goto label_114548;
        case 0x11454cu: goto label_11454c;
        case 0x114550u: goto label_114550;
        case 0x114554u: goto label_114554;
        case 0x114558u: goto label_114558;
        case 0x11455cu: goto label_11455c;
        case 0x114560u: goto label_114560;
        case 0x114564u: goto label_114564;
        case 0x114568u: goto label_114568;
        case 0x11456cu: goto label_11456c;
        case 0x114570u: goto label_114570;
        case 0x114574u: goto label_114574;
        case 0x114578u: goto label_114578;
        case 0x11457cu: goto label_11457c;
        case 0x114580u: goto label_114580;
        case 0x114584u: goto label_114584;
        case 0x114588u: goto label_114588;
        case 0x11458cu: goto label_11458c;
        case 0x114590u: goto label_114590;
        case 0x114594u: goto label_114594;
        case 0x114598u: goto label_114598;
        case 0x11459cu: goto label_11459c;
        case 0x1145a0u: goto label_1145a0;
        case 0x1145a4u: goto label_1145a4;
        case 0x1145a8u: goto label_1145a8;
        case 0x1145acu: goto label_1145ac;
        case 0x1145b0u: goto label_1145b0;
        case 0x1145b4u: goto label_1145b4;
        case 0x1145b8u: goto label_1145b8;
        case 0x1145bcu: goto label_1145bc;
        case 0x1145c0u: goto label_1145c0;
        case 0x1145c4u: goto label_1145c4;
        case 0x1145c8u: goto label_1145c8;
        case 0x1145ccu: goto label_1145cc;
        case 0x1145d0u: goto label_1145d0;
        case 0x1145d4u: goto label_1145d4;
        case 0x1145d8u: goto label_1145d8;
        case 0x1145dcu: goto label_1145dc;
        case 0x1145e0u: goto label_1145e0;
        case 0x1145e4u: goto label_1145e4;
        case 0x1145e8u: goto label_1145e8;
        case 0x1145ecu: goto label_1145ec;
        case 0x1145f0u: goto label_1145f0;
        case 0x1145f4u: goto label_1145f4;
        case 0x1145f8u: goto label_1145f8;
        case 0x1145fcu: goto label_1145fc;
        case 0x114600u: goto label_114600;
        case 0x114604u: goto label_114604;
        case 0x114608u: goto label_114608;
        case 0x11460cu: goto label_11460c;
        case 0x114610u: goto label_114610;
        case 0x114614u: goto label_114614;
        case 0x114618u: goto label_114618;
        case 0x11461cu: goto label_11461c;
        case 0x114620u: goto label_114620;
        case 0x114624u: goto label_114624;
        case 0x114628u: goto label_114628;
        case 0x11462cu: goto label_11462c;
        case 0x114630u: goto label_114630;
        case 0x114634u: goto label_114634;
        case 0x114638u: goto label_114638;
        case 0x11463cu: goto label_11463c;
        case 0x114640u: goto label_114640;
        case 0x114644u: goto label_114644;
        case 0x114648u: goto label_114648;
        case 0x11464cu: goto label_11464c;
        case 0x114650u: goto label_114650;
        case 0x114654u: goto label_114654;
        case 0x114658u: goto label_114658;
        case 0x11465cu: goto label_11465c;
        case 0x114660u: goto label_114660;
        case 0x114664u: goto label_114664;
        case 0x114668u: goto label_114668;
        case 0x11466cu: goto label_11466c;
        case 0x114670u: goto label_114670;
        case 0x114674u: goto label_114674;
        case 0x114678u: goto label_114678;
        case 0x11467cu: goto label_11467c;
        case 0x114680u: goto label_114680;
        case 0x114684u: goto label_114684;
        case 0x114688u: goto label_114688;
        case 0x11468cu: goto label_11468c;
        case 0x114690u: goto label_114690;
        case 0x114694u: goto label_114694;
        case 0x114698u: goto label_114698;
        case 0x11469cu: goto label_11469c;
        case 0x1146a0u: goto label_1146a0;
        case 0x1146a4u: goto label_1146a4;
        case 0x1146a8u: goto label_1146a8;
        case 0x1146acu: goto label_1146ac;
        case 0x1146b0u: goto label_1146b0;
        case 0x1146b4u: goto label_1146b4;
        case 0x1146b8u: goto label_1146b8;
        case 0x1146bcu: goto label_1146bc;
        case 0x1146c0u: goto label_1146c0;
        case 0x1146c4u: goto label_1146c4;
        case 0x1146c8u: goto label_1146c8;
        case 0x1146ccu: goto label_1146cc;
        case 0x1146d0u: goto label_1146d0;
        case 0x1146d4u: goto label_1146d4;
        case 0x1146d8u: goto label_1146d8;
        case 0x1146dcu: goto label_1146dc;
        case 0x1146e0u: goto label_1146e0;
        case 0x1146e4u: goto label_1146e4;
        case 0x1146e8u: goto label_1146e8;
        case 0x1146ecu: goto label_1146ec;
        case 0x1146f0u: goto label_1146f0;
        case 0x1146f4u: goto label_1146f4;
        case 0x1146f8u: goto label_1146f8;
        case 0x1146fcu: goto label_1146fc;
        case 0x114700u: goto label_114700;
        case 0x114704u: goto label_114704;
        case 0x114708u: goto label_114708;
        case 0x11470cu: goto label_11470c;
        case 0x114710u: goto label_114710;
        case 0x114714u: goto label_114714;
        case 0x114718u: goto label_114718;
        case 0x11471cu: goto label_11471c;
        case 0x114720u: goto label_114720;
        case 0x114724u: goto label_114724;
        case 0x114728u: goto label_114728;
        case 0x11472cu: goto label_11472c;
        case 0x114730u: goto label_114730;
        case 0x114734u: goto label_114734;
        case 0x114738u: goto label_114738;
        case 0x11473cu: goto label_11473c;
        case 0x114740u: goto label_114740;
        case 0x114744u: goto label_114744;
        case 0x114748u: goto label_114748;
        case 0x11474cu: goto label_11474c;
        case 0x114750u: goto label_114750;
        case 0x114754u: goto label_114754;
        case 0x114758u: goto label_114758;
        case 0x11475cu: goto label_11475c;
        case 0x114760u: goto label_114760;
        case 0x114764u: goto label_114764;
        case 0x114768u: goto label_114768;
        case 0x11476cu: goto label_11476c;
        case 0x114770u: goto label_114770;
        case 0x114774u: goto label_114774;
        case 0x114778u: goto label_114778;
        case 0x11477cu: goto label_11477c;
        case 0x114780u: goto label_114780;
        case 0x114784u: goto label_114784;
        case 0x114788u: goto label_114788;
        case 0x11478cu: goto label_11478c;
        case 0x114790u: goto label_114790;
        case 0x114794u: goto label_114794;
        case 0x114798u: goto label_114798;
        case 0x11479cu: goto label_11479c;
        case 0x1147a0u: goto label_1147a0;
        case 0x1147a4u: goto label_1147a4;
        case 0x1147a8u: goto label_1147a8;
        case 0x1147acu: goto label_1147ac;
        case 0x1147b0u: goto label_1147b0;
        case 0x1147b4u: goto label_1147b4;
        case 0x1147b8u: goto label_1147b8;
        case 0x1147bcu: goto label_1147bc;
        case 0x1147c0u: goto label_1147c0;
        case 0x1147c4u: goto label_1147c4;
        case 0x1147c8u: goto label_1147c8;
        case 0x1147ccu: goto label_1147cc;
        case 0x1147d0u: goto label_1147d0;
        case 0x1147d4u: goto label_1147d4;
        case 0x1147d8u: goto label_1147d8;
        case 0x1147dcu: goto label_1147dc;
        case 0x1147e0u: goto label_1147e0;
        case 0x1147e4u: goto label_1147e4;
        case 0x1147e8u: goto label_1147e8;
        case 0x1147ecu: goto label_1147ec;
        case 0x1147f0u: goto label_1147f0;
        case 0x1147f4u: goto label_1147f4;
        case 0x1147f8u: goto label_1147f8;
        case 0x1147fcu: goto label_1147fc;
        case 0x114800u: goto label_114800;
        case 0x114804u: goto label_114804;
        case 0x114808u: goto label_114808;
        case 0x11480cu: goto label_11480c;
        case 0x114810u: goto label_114810;
        case 0x114814u: goto label_114814;
        case 0x114818u: goto label_114818;
        case 0x11481cu: goto label_11481c;
        case 0x114820u: goto label_114820;
        case 0x114824u: goto label_114824;
        case 0x114828u: goto label_114828;
        case 0x11482cu: goto label_11482c;
        case 0x114830u: goto label_114830;
        case 0x114834u: goto label_114834;
        case 0x114838u: goto label_114838;
        case 0x11483cu: goto label_11483c;
        case 0x114840u: goto label_114840;
        case 0x114844u: goto label_114844;
        case 0x114848u: goto label_114848;
        case 0x11484cu: goto label_11484c;
        case 0x114850u: goto label_114850;
        case 0x114854u: goto label_114854;
        case 0x114858u: goto label_114858;
        case 0x11485cu: goto label_11485c;
        case 0x114860u: goto label_114860;
        case 0x114864u: goto label_114864;
        case 0x114868u: goto label_114868;
        case 0x11486cu: goto label_11486c;
        case 0x114870u: goto label_114870;
        case 0x114874u: goto label_114874;
        case 0x114878u: goto label_114878;
        case 0x11487cu: goto label_11487c;
        case 0x114880u: goto label_114880;
        case 0x114884u: goto label_114884;
        case 0x114888u: goto label_114888;
        case 0x11488cu: goto label_11488c;
        case 0x114890u: goto label_114890;
        case 0x114894u: goto label_114894;
        case 0x114898u: goto label_114898;
        case 0x11489cu: goto label_11489c;
        case 0x1148a0u: goto label_1148a0;
        case 0x1148a4u: goto label_1148a4;
        case 0x1148a8u: goto label_1148a8;
        case 0x1148acu: goto label_1148ac;
        case 0x1148b0u: goto label_1148b0;
        case 0x1148b4u: goto label_1148b4;
        case 0x1148b8u: goto label_1148b8;
        case 0x1148bcu: goto label_1148bc;
        case 0x1148c0u: goto label_1148c0;
        case 0x1148c4u: goto label_1148c4;
        case 0x1148c8u: goto label_1148c8;
        case 0x1148ccu: goto label_1148cc;
        case 0x1148d0u: goto label_1148d0;
        case 0x1148d4u: goto label_1148d4;
        case 0x1148d8u: goto label_1148d8;
        case 0x1148dcu: goto label_1148dc;
        case 0x1148e0u: goto label_1148e0;
        case 0x1148e4u: goto label_1148e4;
        case 0x1148e8u: goto label_1148e8;
        case 0x1148ecu: goto label_1148ec;
        case 0x1148f0u: goto label_1148f0;
        case 0x1148f4u: goto label_1148f4;
        case 0x1148f8u: goto label_1148f8;
        case 0x1148fcu: goto label_1148fc;
        case 0x114900u: goto label_114900;
        case 0x114904u: goto label_114904;
        case 0x114908u: goto label_114908;
        case 0x11490cu: goto label_11490c;
        case 0x114910u: goto label_114910;
        case 0x114914u: goto label_114914;
        case 0x114918u: goto label_114918;
        case 0x11491cu: goto label_11491c;
        case 0x114920u: goto label_114920;
        case 0x114924u: goto label_114924;
        case 0x114928u: goto label_114928;
        case 0x11492cu: goto label_11492c;
        case 0x114930u: goto label_114930;
        case 0x114934u: goto label_114934;
        case 0x114938u: goto label_114938;
        case 0x11493cu: goto label_11493c;
        case 0x114940u: goto label_114940;
        case 0x114944u: goto label_114944;
        case 0x114948u: goto label_114948;
        case 0x11494cu: goto label_11494c;
        case 0x114950u: goto label_114950;
        case 0x114954u: goto label_114954;
        case 0x114958u: goto label_114958;
        case 0x11495cu: goto label_11495c;
        case 0x114960u: goto label_114960;
        case 0x114964u: goto label_114964;
        case 0x114968u: goto label_114968;
        case 0x11496cu: goto label_11496c;
        case 0x114970u: goto label_114970;
        case 0x114974u: goto label_114974;
        case 0x114978u: goto label_114978;
        case 0x11497cu: goto label_11497c;
        case 0x114980u: goto label_114980;
        case 0x114984u: goto label_114984;
        case 0x114988u: goto label_114988;
        case 0x11498cu: goto label_11498c;
        case 0x114990u: goto label_114990;
        case 0x114994u: goto label_114994;
        case 0x114998u: goto label_114998;
        case 0x11499cu: goto label_11499c;
        case 0x1149a0u: goto label_1149a0;
        case 0x1149a4u: goto label_1149a4;
        case 0x1149a8u: goto label_1149a8;
        case 0x1149acu: goto label_1149ac;
        case 0x1149b0u: goto label_1149b0;
        case 0x1149b4u: goto label_1149b4;
        case 0x1149b8u: goto label_1149b8;
        case 0x1149bcu: goto label_1149bc;
        case 0x1149c0u: goto label_1149c0;
        case 0x1149c4u: goto label_1149c4;
        case 0x1149c8u: goto label_1149c8;
        case 0x1149ccu: goto label_1149cc;
        case 0x1149d0u: goto label_1149d0;
        case 0x1149d4u: goto label_1149d4;
        case 0x1149d8u: goto label_1149d8;
        case 0x1149dcu: goto label_1149dc;
        case 0x1149e0u: goto label_1149e0;
        case 0x1149e4u: goto label_1149e4;
        case 0x1149e8u: goto label_1149e8;
        case 0x1149ecu: goto label_1149ec;
        case 0x1149f0u: goto label_1149f0;
        case 0x1149f4u: goto label_1149f4;
        case 0x1149f8u: goto label_1149f8;
        case 0x1149fcu: goto label_1149fc;
        case 0x114a00u: goto label_114a00;
        case 0x114a04u: goto label_114a04;
        case 0x114a08u: goto label_114a08;
        case 0x114a0cu: goto label_114a0c;
        case 0x114a10u: goto label_114a10;
        case 0x114a14u: goto label_114a14;
        case 0x114a18u: goto label_114a18;
        case 0x114a1cu: goto label_114a1c;
        case 0x114a20u: goto label_114a20;
        case 0x114a24u: goto label_114a24;
        case 0x114a28u: goto label_114a28;
        case 0x114a2cu: goto label_114a2c;
        case 0x114a30u: goto label_114a30;
        case 0x114a34u: goto label_114a34;
        case 0x114a38u: goto label_114a38;
        case 0x114a3cu: goto label_114a3c;
        case 0x114a40u: goto label_114a40;
        case 0x114a44u: goto label_114a44;
        case 0x114a48u: goto label_114a48;
        case 0x114a4cu: goto label_114a4c;
        case 0x114a50u: goto label_114a50;
        case 0x114a54u: goto label_114a54;
        case 0x114a58u: goto label_114a58;
        case 0x114a5cu: goto label_114a5c;
        case 0x114a60u: goto label_114a60;
        case 0x114a64u: goto label_114a64;
        case 0x114a68u: goto label_114a68;
        case 0x114a6cu: goto label_114a6c;
        case 0x114a70u: goto label_114a70;
        case 0x114a74u: goto label_114a74;
        case 0x114a78u: goto label_114a78;
        case 0x114a7cu: goto label_114a7c;
        case 0x114a80u: goto label_114a80;
        case 0x114a84u: goto label_114a84;
        case 0x114a88u: goto label_114a88;
        case 0x114a8cu: goto label_114a8c;
        case 0x114a90u: goto label_114a90;
        case 0x114a94u: goto label_114a94;
        case 0x114a98u: goto label_114a98;
        case 0x114a9cu: goto label_114a9c;
        case 0x114aa0u: goto label_114aa0;
        case 0x114aa4u: goto label_114aa4;
        case 0x114aa8u: goto label_114aa8;
        case 0x114aacu: goto label_114aac;
        case 0x114ab0u: goto label_114ab0;
        case 0x114ab4u: goto label_114ab4;
        case 0x114ab8u: goto label_114ab8;
        case 0x114abcu: goto label_114abc;
        case 0x114ac0u: goto label_114ac0;
        case 0x114ac4u: goto label_114ac4;
        case 0x114ac8u: goto label_114ac8;
        case 0x114accu: goto label_114acc;
        case 0x114ad0u: goto label_114ad0;
        case 0x114ad4u: goto label_114ad4;
        case 0x114ad8u: goto label_114ad8;
        case 0x114adcu: goto label_114adc;
        case 0x114ae0u: goto label_114ae0;
        case 0x114ae4u: goto label_114ae4;
        case 0x114ae8u: goto label_114ae8;
        case 0x114aecu: goto label_114aec;
        case 0x114af0u: goto label_114af0;
        case 0x114af4u: goto label_114af4;
        case 0x114af8u: goto label_114af8;
        case 0x114afcu: goto label_114afc;
        case 0x114b00u: goto label_114b00;
        case 0x114b04u: goto label_114b04;
        case 0x114b08u: goto label_114b08;
        case 0x114b0cu: goto label_114b0c;
        case 0x114b10u: goto label_114b10;
        case 0x114b14u: goto label_114b14;
        case 0x114b18u: goto label_114b18;
        case 0x114b1cu: goto label_114b1c;
        case 0x114b20u: goto label_114b20;
        case 0x114b24u: goto label_114b24;
        case 0x114b28u: goto label_114b28;
        case 0x114b2cu: goto label_114b2c;
        case 0x114b30u: goto label_114b30;
        case 0x114b34u: goto label_114b34;
        case 0x114b38u: goto label_114b38;
        case 0x114b3cu: goto label_114b3c;
        case 0x114b40u: goto label_114b40;
        case 0x114b44u: goto label_114b44;
        case 0x114b48u: goto label_114b48;
        case 0x114b4cu: goto label_114b4c;
        case 0x114b50u: goto label_114b50;
        case 0x114b54u: goto label_114b54;
        case 0x114b58u: goto label_114b58;
        case 0x114b5cu: goto label_114b5c;
        case 0x114b60u: goto label_114b60;
        case 0x114b64u: goto label_114b64;
        case 0x114b68u: goto label_114b68;
        case 0x114b6cu: goto label_114b6c;
        case 0x114b70u: goto label_114b70;
        case 0x114b74u: goto label_114b74;
        case 0x114b78u: goto label_114b78;
        case 0x114b7cu: goto label_114b7c;
        case 0x114b80u: goto label_114b80;
        case 0x114b84u: goto label_114b84;
        case 0x114b88u: goto label_114b88;
        case 0x114b8cu: goto label_114b8c;
        case 0x114b90u: goto label_114b90;
        case 0x114b94u: goto label_114b94;
        case 0x114b98u: goto label_114b98;
        case 0x114b9cu: goto label_114b9c;
        case 0x114ba0u: goto label_114ba0;
        case 0x114ba4u: goto label_114ba4;
        case 0x114ba8u: goto label_114ba8;
        case 0x114bacu: goto label_114bac;
        case 0x114bb0u: goto label_114bb0;
        case 0x114bb4u: goto label_114bb4;
        case 0x114bb8u: goto label_114bb8;
        case 0x114bbcu: goto label_114bbc;
        case 0x114bc0u: goto label_114bc0;
        case 0x114bc4u: goto label_114bc4;
        case 0x114bc8u: goto label_114bc8;
        case 0x114bccu: goto label_114bcc;
        case 0x114bd0u: goto label_114bd0;
        case 0x114bd4u: goto label_114bd4;
        case 0x114bd8u: goto label_114bd8;
        case 0x114bdcu: goto label_114bdc;
        case 0x114be0u: goto label_114be0;
        case 0x114be4u: goto label_114be4;
        case 0x114be8u: goto label_114be8;
        case 0x114becu: goto label_114bec;
        case 0x114bf0u: goto label_114bf0;
        case 0x114bf4u: goto label_114bf4;
        case 0x114bf8u: goto label_114bf8;
        case 0x114bfcu: goto label_114bfc;
        case 0x114c00u: goto label_114c00;
        case 0x114c04u: goto label_114c04;
        case 0x114c08u: goto label_114c08;
        case 0x114c0cu: goto label_114c0c;
        case 0x114c10u: goto label_114c10;
        case 0x114c14u: goto label_114c14;
        case 0x114c18u: goto label_114c18;
        case 0x114c1cu: goto label_114c1c;
        case 0x114c20u: goto label_114c20;
        case 0x114c24u: goto label_114c24;
        case 0x114c28u: goto label_114c28;
        case 0x114c2cu: goto label_114c2c;
        case 0x114c30u: goto label_114c30;
        case 0x114c34u: goto label_114c34;
        case 0x114c38u: goto label_114c38;
        case 0x114c3cu: goto label_114c3c;
        case 0x114c40u: goto label_114c40;
        case 0x114c44u: goto label_114c44;
        case 0x114c48u: goto label_114c48;
        case 0x114c4cu: goto label_114c4c;
        case 0x114c50u: goto label_114c50;
        case 0x114c54u: goto label_114c54;
        case 0x114c58u: goto label_114c58;
        case 0x114c5cu: goto label_114c5c;
        case 0x114c60u: goto label_114c60;
        case 0x114c64u: goto label_114c64;
        case 0x114c68u: goto label_114c68;
        case 0x114c6cu: goto label_114c6c;
        case 0x114c70u: goto label_114c70;
        case 0x114c74u: goto label_114c74;
        case 0x114c78u: goto label_114c78;
        case 0x114c7cu: goto label_114c7c;
        case 0x114c80u: goto label_114c80;
        case 0x114c84u: goto label_114c84;
        case 0x114c88u: goto label_114c88;
        case 0x114c8cu: goto label_114c8c;
        case 0x114c90u: goto label_114c90;
        case 0x114c94u: goto label_114c94;
        case 0x114c98u: goto label_114c98;
        case 0x114c9cu: goto label_114c9c;
        case 0x114ca0u: goto label_114ca0;
        case 0x114ca4u: goto label_114ca4;
        case 0x114ca8u: goto label_114ca8;
        case 0x114cacu: goto label_114cac;
        case 0x114cb0u: goto label_114cb0;
        case 0x114cb4u: goto label_114cb4;
        case 0x114cb8u: goto label_114cb8;
        case 0x114cbcu: goto label_114cbc;
        case 0x114cc0u: goto label_114cc0;
        case 0x114cc4u: goto label_114cc4;
        case 0x114cc8u: goto label_114cc8;
        case 0x114cccu: goto label_114ccc;
        case 0x114cd0u: goto label_114cd0;
        case 0x114cd4u: goto label_114cd4;
        case 0x114cd8u: goto label_114cd8;
        case 0x114cdcu: goto label_114cdc;
        case 0x114ce0u: goto label_114ce0;
        case 0x114ce4u: goto label_114ce4;
        case 0x114ce8u: goto label_114ce8;
        case 0x114cecu: goto label_114cec;
        case 0x114cf0u: goto label_114cf0;
        case 0x114cf4u: goto label_114cf4;
        case 0x114cf8u: goto label_114cf8;
        case 0x114cfcu: goto label_114cfc;
        case 0x114d00u: goto label_114d00;
        case 0x114d04u: goto label_114d04;
        case 0x114d08u: goto label_114d08;
        case 0x114d0cu: goto label_114d0c;
        case 0x114d10u: goto label_114d10;
        case 0x114d14u: goto label_114d14;
        case 0x114d18u: goto label_114d18;
        case 0x114d1cu: goto label_114d1c;
        case 0x114d20u: goto label_114d20;
        case 0x114d24u: goto label_114d24;
        case 0x114d28u: goto label_114d28;
        case 0x114d2cu: goto label_114d2c;
        case 0x114d30u: goto label_114d30;
        case 0x114d34u: goto label_114d34;
        case 0x114d38u: goto label_114d38;
        case 0x114d3cu: goto label_114d3c;
        case 0x114d40u: goto label_114d40;
        case 0x114d44u: goto label_114d44;
        case 0x114d48u: goto label_114d48;
        case 0x114d4cu: goto label_114d4c;
        case 0x114d50u: goto label_114d50;
        case 0x114d54u: goto label_114d54;
        case 0x114d58u: goto label_114d58;
        case 0x114d5cu: goto label_114d5c;
        case 0x114d60u: goto label_114d60;
        case 0x114d64u: goto label_114d64;
        case 0x114d68u: goto label_114d68;
        case 0x114d6cu: goto label_114d6c;
        case 0x114d70u: goto label_114d70;
        case 0x114d74u: goto label_114d74;
        case 0x114d78u: goto label_114d78;
        case 0x114d7cu: goto label_114d7c;
        case 0x114d80u: goto label_114d80;
        case 0x114d84u: goto label_114d84;
        case 0x114d88u: goto label_114d88;
        case 0x114d8cu: goto label_114d8c;
        case 0x114d90u: goto label_114d90;
        case 0x114d94u: goto label_114d94;
        case 0x114d98u: goto label_114d98;
        case 0x114d9cu: goto label_114d9c;
        case 0x114da0u: goto label_114da0;
        case 0x114da4u: goto label_114da4;
        case 0x114da8u: goto label_114da8;
        case 0x114dacu: goto label_114dac;
        case 0x114db0u: goto label_114db0;
        case 0x114db4u: goto label_114db4;
        case 0x114db8u: goto label_114db8;
        case 0x114dbcu: goto label_114dbc;
        case 0x114dc0u: goto label_114dc0;
        case 0x114dc4u: goto label_114dc4;
        case 0x114dc8u: goto label_114dc8;
        case 0x114dccu: goto label_114dcc;
        case 0x114dd0u: goto label_114dd0;
        case 0x114dd4u: goto label_114dd4;
        case 0x114dd8u: goto label_114dd8;
        case 0x114ddcu: goto label_114ddc;
        case 0x114de0u: goto label_114de0;
        case 0x114de4u: goto label_114de4;
        case 0x114de8u: goto label_114de8;
        case 0x114decu: goto label_114dec;
        case 0x114df0u: goto label_114df0;
        case 0x114df4u: goto label_114df4;
        case 0x114df8u: goto label_114df8;
        case 0x114dfcu: goto label_114dfc;
        case 0x114e00u: goto label_114e00;
        case 0x114e04u: goto label_114e04;
        case 0x114e08u: goto label_114e08;
        case 0x114e0cu: goto label_114e0c;
        case 0x114e10u: goto label_114e10;
        case 0x114e14u: goto label_114e14;
        case 0x114e18u: goto label_114e18;
        case 0x114e1cu: goto label_114e1c;
        case 0x114e20u: goto label_114e20;
        case 0x114e24u: goto label_114e24;
        case 0x114e28u: goto label_114e28;
        case 0x114e2cu: goto label_114e2c;
        case 0x114e30u: goto label_114e30;
        case 0x114e34u: goto label_114e34;
        case 0x114e38u: goto label_114e38;
        case 0x114e3cu: goto label_114e3c;
        case 0x114e40u: goto label_114e40;
        case 0x114e44u: goto label_114e44;
        case 0x114e48u: goto label_114e48;
        case 0x114e4cu: goto label_114e4c;
        case 0x114e50u: goto label_114e50;
        case 0x114e54u: goto label_114e54;
        case 0x114e58u: goto label_114e58;
        case 0x114e5cu: goto label_114e5c;
        case 0x114e60u: goto label_114e60;
        case 0x114e64u: goto label_114e64;
        case 0x114e68u: goto label_114e68;
        case 0x114e6cu: goto label_114e6c;
        case 0x114e70u: goto label_114e70;
        case 0x114e74u: goto label_114e74;
        case 0x114e78u: goto label_114e78;
        case 0x114e7cu: goto label_114e7c;
        case 0x114e80u: goto label_114e80;
        case 0x114e84u: goto label_114e84;
        case 0x114e88u: goto label_114e88;
        case 0x114e8cu: goto label_114e8c;
        case 0x114e90u: goto label_114e90;
        case 0x114e94u: goto label_114e94;
        case 0x114e98u: goto label_114e98;
        case 0x114e9cu: goto label_114e9c;
        case 0x114ea0u: goto label_114ea0;
        case 0x114ea4u: goto label_114ea4;
        case 0x114ea8u: goto label_114ea8;
        case 0x114eacu: goto label_114eac;
        case 0x114eb0u: goto label_114eb0;
        case 0x114eb4u: goto label_114eb4;
        case 0x114eb8u: goto label_114eb8;
        case 0x114ebcu: goto label_114ebc;
        case 0x114ec0u: goto label_114ec0;
        case 0x114ec4u: goto label_114ec4;
        case 0x114ec8u: goto label_114ec8;
        case 0x114eccu: goto label_114ecc;
        case 0x114ed0u: goto label_114ed0;
        case 0x114ed4u: goto label_114ed4;
        case 0x114ed8u: goto label_114ed8;
        case 0x114edcu: goto label_114edc;
        case 0x114ee0u: goto label_114ee0;
        case 0x114ee4u: goto label_114ee4;
        case 0x114ee8u: goto label_114ee8;
        case 0x114eecu: goto label_114eec;
        case 0x114ef0u: goto label_114ef0;
        case 0x114ef4u: goto label_114ef4;
        case 0x114ef8u: goto label_114ef8;
        case 0x114efcu: goto label_114efc;
        case 0x114f00u: goto label_114f00;
        case 0x114f04u: goto label_114f04;
        case 0x114f08u: goto label_114f08;
        case 0x114f0cu: goto label_114f0c;
        case 0x114f10u: goto label_114f10;
        case 0x114f14u: goto label_114f14;
        case 0x114f18u: goto label_114f18;
        case 0x114f1cu: goto label_114f1c;
        case 0x114f20u: goto label_114f20;
        case 0x114f24u: goto label_114f24;
        case 0x114f28u: goto label_114f28;
        case 0x114f2cu: goto label_114f2c;
        case 0x114f30u: goto label_114f30;
        case 0x114f34u: goto label_114f34;
        case 0x114f38u: goto label_114f38;
        case 0x114f3cu: goto label_114f3c;
        case 0x114f40u: goto label_114f40;
        case 0x114f44u: goto label_114f44;
        case 0x114f48u: goto label_114f48;
        case 0x114f4cu: goto label_114f4c;
        case 0x114f50u: goto label_114f50;
        case 0x114f54u: goto label_114f54;
        case 0x114f58u: goto label_114f58;
        case 0x114f5cu: goto label_114f5c;
        case 0x114f60u: goto label_114f60;
        case 0x114f64u: goto label_114f64;
        case 0x114f68u: goto label_114f68;
        case 0x114f6cu: goto label_114f6c;
        case 0x114f70u: goto label_114f70;
        case 0x114f74u: goto label_114f74;
        case 0x114f78u: goto label_114f78;
        case 0x114f7cu: goto label_114f7c;
        case 0x114f80u: goto label_114f80;
        case 0x114f84u: goto label_114f84;
        case 0x114f88u: goto label_114f88;
        case 0x114f8cu: goto label_114f8c;
        case 0x114f90u: goto label_114f90;
        case 0x114f94u: goto label_114f94;
        case 0x114f98u: goto label_114f98;
        case 0x114f9cu: goto label_114f9c;
        case 0x114fa0u: goto label_114fa0;
        case 0x114fa4u: goto label_114fa4;
        case 0x114fa8u: goto label_114fa8;
        case 0x114facu: goto label_114fac;
        case 0x114fb0u: goto label_114fb0;
        case 0x114fb4u: goto label_114fb4;
        case 0x114fb8u: goto label_114fb8;
        case 0x114fbcu: goto label_114fbc;
        case 0x114fc0u: goto label_114fc0;
        case 0x114fc4u: goto label_114fc4;
        case 0x114fc8u: goto label_114fc8;
        case 0x114fccu: goto label_114fcc;
        case 0x114fd0u: goto label_114fd0;
        case 0x114fd4u: goto label_114fd4;
        case 0x114fd8u: goto label_114fd8;
        case 0x114fdcu: goto label_114fdc;
        case 0x114fe0u: goto label_114fe0;
        case 0x114fe4u: goto label_114fe4;
        case 0x114fe8u: goto label_114fe8;
        case 0x114fecu: goto label_114fec;
        case 0x114ff0u: goto label_114ff0;
        case 0x114ff4u: goto label_114ff4;
        case 0x114ff8u: goto label_114ff8;
        case 0x114ffcu: goto label_114ffc;
        case 0x115000u: goto label_115000;
        case 0x115004u: goto label_115004;
        case 0x115008u: goto label_115008;
        case 0x11500cu: goto label_11500c;
        case 0x115010u: goto label_115010;
        case 0x115014u: goto label_115014;
        case 0x115018u: goto label_115018;
        case 0x11501cu: goto label_11501c;
        case 0x115020u: goto label_115020;
        case 0x115024u: goto label_115024;
        case 0x115028u: goto label_115028;
        case 0x11502cu: goto label_11502c;
        case 0x115030u: goto label_115030;
        case 0x115034u: goto label_115034;
        case 0x115038u: goto label_115038;
        case 0x11503cu: goto label_11503c;
        case 0x115040u: goto label_115040;
        case 0x115044u: goto label_115044;
        case 0x115048u: goto label_115048;
        case 0x11504cu: goto label_11504c;
        case 0x115050u: goto label_115050;
        case 0x115054u: goto label_115054;
        case 0x115058u: goto label_115058;
        case 0x11505cu: goto label_11505c;
        case 0x115060u: goto label_115060;
        case 0x115064u: goto label_115064;
        case 0x115068u: goto label_115068;
        case 0x11506cu: goto label_11506c;
        case 0x115070u: goto label_115070;
        case 0x115074u: goto label_115074;
        case 0x115078u: goto label_115078;
        case 0x11507cu: goto label_11507c;
        case 0x115080u: goto label_115080;
        case 0x115084u: goto label_115084;
        case 0x115088u: goto label_115088;
        case 0x11508cu: goto label_11508c;
        case 0x115090u: goto label_115090;
        case 0x115094u: goto label_115094;
        case 0x115098u: goto label_115098;
        case 0x11509cu: goto label_11509c;
        case 0x1150a0u: goto label_1150a0;
        case 0x1150a4u: goto label_1150a4;
        case 0x1150a8u: goto label_1150a8;
        case 0x1150acu: goto label_1150ac;
        case 0x1150b0u: goto label_1150b0;
        case 0x1150b4u: goto label_1150b4;
        case 0x1150b8u: goto label_1150b8;
        case 0x1150bcu: goto label_1150bc;
        case 0x1150c0u: goto label_1150c0;
        case 0x1150c4u: goto label_1150c4;
        case 0x1150c8u: goto label_1150c8;
        case 0x1150ccu: goto label_1150cc;
        case 0x1150d0u: goto label_1150d0;
        case 0x1150d4u: goto label_1150d4;
        case 0x1150d8u: goto label_1150d8;
        case 0x1150dcu: goto label_1150dc;
        case 0x1150e0u: goto label_1150e0;
        case 0x1150e4u: goto label_1150e4;
        case 0x1150e8u: goto label_1150e8;
        case 0x1150ecu: goto label_1150ec;
        case 0x1150f0u: goto label_1150f0;
        case 0x1150f4u: goto label_1150f4;
        case 0x1150f8u: goto label_1150f8;
        case 0x1150fcu: goto label_1150fc;
        case 0x115100u: goto label_115100;
        case 0x115104u: goto label_115104;
        case 0x115108u: goto label_115108;
        case 0x11510cu: goto label_11510c;
        case 0x115110u: goto label_115110;
        case 0x115114u: goto label_115114;
        case 0x115118u: goto label_115118;
        case 0x11511cu: goto label_11511c;
        case 0x115120u: goto label_115120;
        case 0x115124u: goto label_115124;
        case 0x115128u: goto label_115128;
        case 0x11512cu: goto label_11512c;
        case 0x115130u: goto label_115130;
        case 0x115134u: goto label_115134;
        case 0x115138u: goto label_115138;
        case 0x11513cu: goto label_11513c;
        case 0x115140u: goto label_115140;
        case 0x115144u: goto label_115144;
        case 0x115148u: goto label_115148;
        case 0x11514cu: goto label_11514c;
        case 0x115150u: goto label_115150;
        case 0x115154u: goto label_115154;
        case 0x115158u: goto label_115158;
        case 0x11515cu: goto label_11515c;
        case 0x115160u: goto label_115160;
        case 0x115164u: goto label_115164;
        case 0x115168u: goto label_115168;
        case 0x11516cu: goto label_11516c;
        case 0x115170u: goto label_115170;
        case 0x115174u: goto label_115174;
        case 0x115178u: goto label_115178;
        case 0x11517cu: goto label_11517c;
        case 0x115180u: goto label_115180;
        case 0x115184u: goto label_115184;
        case 0x115188u: goto label_115188;
        case 0x11518cu: goto label_11518c;
        case 0x115190u: goto label_115190;
        case 0x115194u: goto label_115194;
        case 0x115198u: goto label_115198;
        case 0x11519cu: goto label_11519c;
        case 0x1151a0u: goto label_1151a0;
        case 0x1151a4u: goto label_1151a4;
        case 0x1151a8u: goto label_1151a8;
        case 0x1151acu: goto label_1151ac;
        case 0x1151b0u: goto label_1151b0;
        case 0x1151b4u: goto label_1151b4;
        case 0x1151b8u: goto label_1151b8;
        case 0x1151bcu: goto label_1151bc;
        case 0x1151c0u: goto label_1151c0;
        case 0x1151c4u: goto label_1151c4;
        case 0x1151c8u: goto label_1151c8;
        case 0x1151ccu: goto label_1151cc;
        case 0x1151d0u: goto label_1151d0;
        case 0x1151d4u: goto label_1151d4;
        case 0x1151d8u: goto label_1151d8;
        case 0x1151dcu: goto label_1151dc;
        case 0x1151e0u: goto label_1151e0;
        case 0x1151e4u: goto label_1151e4;
        case 0x1151e8u: goto label_1151e8;
        case 0x1151ecu: goto label_1151ec;
        case 0x1151f0u: goto label_1151f0;
        case 0x1151f4u: goto label_1151f4;
        case 0x1151f8u: goto label_1151f8;
        case 0x1151fcu: goto label_1151fc;
        case 0x115200u: goto label_115200;
        case 0x115204u: goto label_115204;
        case 0x115208u: goto label_115208;
        case 0x11520cu: goto label_11520c;
        case 0x115210u: goto label_115210;
        case 0x115214u: goto label_115214;
        case 0x115218u: goto label_115218;
        case 0x11521cu: goto label_11521c;
        case 0x115220u: goto label_115220;
        case 0x115224u: goto label_115224;
        case 0x115228u: goto label_115228;
        case 0x11522cu: goto label_11522c;
        case 0x115230u: goto label_115230;
        case 0x115234u: goto label_115234;
        case 0x115238u: goto label_115238;
        case 0x11523cu: goto label_11523c;
        case 0x115240u: goto label_115240;
        case 0x115244u: goto label_115244;
        case 0x115248u: goto label_115248;
        case 0x11524cu: goto label_11524c;
        case 0x115250u: goto label_115250;
        case 0x115254u: goto label_115254;
        case 0x115258u: goto label_115258;
        case 0x11525cu: goto label_11525c;
        case 0x115260u: goto label_115260;
        case 0x115264u: goto label_115264;
        case 0x115268u: goto label_115268;
        case 0x11526cu: goto label_11526c;
        case 0x115270u: goto label_115270;
        case 0x115274u: goto label_115274;
        case 0x115278u: goto label_115278;
        case 0x11527cu: goto label_11527c;
        case 0x115280u: goto label_115280;
        case 0x115284u: goto label_115284;
        case 0x115288u: goto label_115288;
        case 0x11528cu: goto label_11528c;
        case 0x115290u: goto label_115290;
        case 0x115294u: goto label_115294;
        case 0x115298u: goto label_115298;
        case 0x11529cu: goto label_11529c;
        case 0x1152a0u: goto label_1152a0;
        case 0x1152a4u: goto label_1152a4;
        case 0x1152a8u: goto label_1152a8;
        case 0x1152acu: goto label_1152ac;
        case 0x1152b0u: goto label_1152b0;
        case 0x1152b4u: goto label_1152b4;
        case 0x1152b8u: goto label_1152b8;
        case 0x1152bcu: goto label_1152bc;
        case 0x1152c0u: goto label_1152c0;
        case 0x1152c4u: goto label_1152c4;
        case 0x1152c8u: goto label_1152c8;
        case 0x1152ccu: goto label_1152cc;
        case 0x1152d0u: goto label_1152d0;
        case 0x1152d4u: goto label_1152d4;
        case 0x1152d8u: goto label_1152d8;
        case 0x1152dcu: goto label_1152dc;
        case 0x1152e0u: goto label_1152e0;
        case 0x1152e4u: goto label_1152e4;
        case 0x1152e8u: goto label_1152e8;
        case 0x1152ecu: goto label_1152ec;
        case 0x1152f0u: goto label_1152f0;
        case 0x1152f4u: goto label_1152f4;
        case 0x1152f8u: goto label_1152f8;
        case 0x1152fcu: goto label_1152fc;
        case 0x115300u: goto label_115300;
        case 0x115304u: goto label_115304;
        case 0x115308u: goto label_115308;
        case 0x11530cu: goto label_11530c;
        case 0x115310u: goto label_115310;
        case 0x115314u: goto label_115314;
        case 0x115318u: goto label_115318;
        case 0x11531cu: goto label_11531c;
        case 0x115320u: goto label_115320;
        case 0x115324u: goto label_115324;
        case 0x115328u: goto label_115328;
        case 0x11532cu: goto label_11532c;
        case 0x115330u: goto label_115330;
        case 0x115334u: goto label_115334;
        case 0x115338u: goto label_115338;
        case 0x11533cu: goto label_11533c;
        case 0x115340u: goto label_115340;
        case 0x115344u: goto label_115344;
        case 0x115348u: goto label_115348;
        case 0x11534cu: goto label_11534c;
        case 0x115350u: goto label_115350;
        case 0x115354u: goto label_115354;
        case 0x115358u: goto label_115358;
        case 0x11535cu: goto label_11535c;
        case 0x115360u: goto label_115360;
        case 0x115364u: goto label_115364;
        case 0x115368u: goto label_115368;
        case 0x11536cu: goto label_11536c;
        case 0x115370u: goto label_115370;
        case 0x115374u: goto label_115374;
        case 0x115378u: goto label_115378;
        case 0x11537cu: goto label_11537c;
        case 0x115380u: goto label_115380;
        case 0x115384u: goto label_115384;
        case 0x115388u: goto label_115388;
        case 0x11538cu: goto label_11538c;
        case 0x115390u: goto label_115390;
        case 0x115394u: goto label_115394;
        case 0x115398u: goto label_115398;
        case 0x11539cu: goto label_11539c;
        case 0x1153a0u: goto label_1153a0;
        case 0x1153a4u: goto label_1153a4;
        case 0x1153a8u: goto label_1153a8;
        case 0x1153acu: goto label_1153ac;
        case 0x1153b0u: goto label_1153b0;
        case 0x1153b4u: goto label_1153b4;
        case 0x1153b8u: goto label_1153b8;
        case 0x1153bcu: goto label_1153bc;
        case 0x1153c0u: goto label_1153c0;
        case 0x1153c4u: goto label_1153c4;
        case 0x1153c8u: goto label_1153c8;
        case 0x1153ccu: goto label_1153cc;
        case 0x1153d0u: goto label_1153d0;
        case 0x1153d4u: goto label_1153d4;
        case 0x1153d8u: goto label_1153d8;
        case 0x1153dcu: goto label_1153dc;
        case 0x1153e0u: goto label_1153e0;
        case 0x1153e4u: goto label_1153e4;
        case 0x1153e8u: goto label_1153e8;
        case 0x1153ecu: goto label_1153ec;
        case 0x1153f0u: goto label_1153f0;
        case 0x1153f4u: goto label_1153f4;
        case 0x1153f8u: goto label_1153f8;
        case 0x1153fcu: goto label_1153fc;
        case 0x115400u: goto label_115400;
        case 0x115404u: goto label_115404;
        case 0x115408u: goto label_115408;
        case 0x11540cu: goto label_11540c;
        case 0x115410u: goto label_115410;
        case 0x115414u: goto label_115414;
        case 0x115418u: goto label_115418;
        case 0x11541cu: goto label_11541c;
        case 0x115420u: goto label_115420;
        case 0x115424u: goto label_115424;
        case 0x115428u: goto label_115428;
        case 0x11542cu: goto label_11542c;
        case 0x115430u: goto label_115430;
        case 0x115434u: goto label_115434;
        case 0x115438u: goto label_115438;
        case 0x11543cu: goto label_11543c;
        case 0x115440u: goto label_115440;
        case 0x115444u: goto label_115444;
        case 0x115448u: goto label_115448;
        case 0x11544cu: goto label_11544c;
        case 0x115450u: goto label_115450;
        case 0x115454u: goto label_115454;
        case 0x115458u: goto label_115458;
        case 0x11545cu: goto label_11545c;
        case 0x115460u: goto label_115460;
        case 0x115464u: goto label_115464;
        case 0x115468u: goto label_115468;
        case 0x11546cu: goto label_11546c;
        case 0x115470u: goto label_115470;
        case 0x115474u: goto label_115474;
        case 0x115478u: goto label_115478;
        case 0x11547cu: goto label_11547c;
        case 0x115480u: goto label_115480;
        case 0x115484u: goto label_115484;
        case 0x115488u: goto label_115488;
        case 0x11548cu: goto label_11548c;
        case 0x115490u: goto label_115490;
        case 0x115494u: goto label_115494;
        case 0x115498u: goto label_115498;
        case 0x11549cu: goto label_11549c;
        case 0x1154a0u: goto label_1154a0;
        case 0x1154a4u: goto label_1154a4;
        case 0x1154a8u: goto label_1154a8;
        case 0x1154acu: goto label_1154ac;
        case 0x1154b0u: goto label_1154b0;
        case 0x1154b4u: goto label_1154b4;
        case 0x1154b8u: goto label_1154b8;
        case 0x1154bcu: goto label_1154bc;
        case 0x1154c0u: goto label_1154c0;
        case 0x1154c4u: goto label_1154c4;
        case 0x1154c8u: goto label_1154c8;
        case 0x1154ccu: goto label_1154cc;
        case 0x1154d0u: goto label_1154d0;
        case 0x1154d4u: goto label_1154d4;
        case 0x1154d8u: goto label_1154d8;
        case 0x1154dcu: goto label_1154dc;
        case 0x1154e0u: goto label_1154e0;
        case 0x1154e4u: goto label_1154e4;
        case 0x1154e8u: goto label_1154e8;
        case 0x1154ecu: goto label_1154ec;
        case 0x1154f0u: goto label_1154f0;
        case 0x1154f4u: goto label_1154f4;
        case 0x1154f8u: goto label_1154f8;
        case 0x1154fcu: goto label_1154fc;
        case 0x115500u: goto label_115500;
        case 0x115504u: goto label_115504;
        case 0x115508u: goto label_115508;
        case 0x11550cu: goto label_11550c;
        case 0x115510u: goto label_115510;
        case 0x115514u: goto label_115514;
        case 0x115518u: goto label_115518;
        case 0x11551cu: goto label_11551c;
        case 0x115520u: goto label_115520;
        case 0x115524u: goto label_115524;
        case 0x115528u: goto label_115528;
        case 0x11552cu: goto label_11552c;
        case 0x115530u: goto label_115530;
        case 0x115534u: goto label_115534;
        case 0x115538u: goto label_115538;
        case 0x11553cu: goto label_11553c;
        case 0x115540u: goto label_115540;
        case 0x115544u: goto label_115544;
        case 0x115548u: goto label_115548;
        case 0x11554cu: goto label_11554c;
        case 0x115550u: goto label_115550;
        case 0x115554u: goto label_115554;
        case 0x115558u: goto label_115558;
        case 0x11555cu: goto label_11555c;
        case 0x115560u: goto label_115560;
        case 0x115564u: goto label_115564;
        case 0x115568u: goto label_115568;
        case 0x11556cu: goto label_11556c;
        case 0x115570u: goto label_115570;
        case 0x115574u: goto label_115574;
        case 0x115578u: goto label_115578;
        case 0x11557cu: goto label_11557c;
        case 0x115580u: goto label_115580;
        case 0x115584u: goto label_115584;
        case 0x115588u: goto label_115588;
        case 0x11558cu: goto label_11558c;
        case 0x115590u: goto label_115590;
        case 0x115594u: goto label_115594;
        case 0x115598u: goto label_115598;
        case 0x11559cu: goto label_11559c;
        case 0x1155a0u: goto label_1155a0;
        case 0x1155a4u: goto label_1155a4;
        case 0x1155a8u: goto label_1155a8;
        case 0x1155acu: goto label_1155ac;
        case 0x1155b0u: goto label_1155b0;
        case 0x1155b4u: goto label_1155b4;
        case 0x1155b8u: goto label_1155b8;
        case 0x1155bcu: goto label_1155bc;
        case 0x1155c0u: goto label_1155c0;
        case 0x1155c4u: goto label_1155c4;
        case 0x1155c8u: goto label_1155c8;
        case 0x1155ccu: goto label_1155cc;
        case 0x1155d0u: goto label_1155d0;
        case 0x1155d4u: goto label_1155d4;
        case 0x1155d8u: goto label_1155d8;
        case 0x1155dcu: goto label_1155dc;
        case 0x1155e0u: goto label_1155e0;
        case 0x1155e4u: goto label_1155e4;
        case 0x1155e8u: goto label_1155e8;
        case 0x1155ecu: goto label_1155ec;
        case 0x1155f0u: goto label_1155f0;
        case 0x1155f4u: goto label_1155f4;
        case 0x1155f8u: goto label_1155f8;
        case 0x1155fcu: goto label_1155fc;
        case 0x115600u: goto label_115600;
        case 0x115604u: goto label_115604;
        case 0x115608u: goto label_115608;
        case 0x11560cu: goto label_11560c;
        case 0x115610u: goto label_115610;
        case 0x115614u: goto label_115614;
        case 0x115618u: goto label_115618;
        case 0x11561cu: goto label_11561c;
        case 0x115620u: goto label_115620;
        case 0x115624u: goto label_115624;
        case 0x115628u: goto label_115628;
        case 0x11562cu: goto label_11562c;
        case 0x115630u: goto label_115630;
        case 0x115634u: goto label_115634;
        case 0x115638u: goto label_115638;
        case 0x11563cu: goto label_11563c;
        case 0x115640u: goto label_115640;
        case 0x115644u: goto label_115644;
        case 0x115648u: goto label_115648;
        case 0x11564cu: goto label_11564c;
        case 0x115650u: goto label_115650;
        case 0x115654u: goto label_115654;
        case 0x115658u: goto label_115658;
        case 0x11565cu: goto label_11565c;
        case 0x115660u: goto label_115660;
        case 0x115664u: goto label_115664;
        case 0x115668u: goto label_115668;
        case 0x11566cu: goto label_11566c;
        case 0x115670u: goto label_115670;
        case 0x115674u: goto label_115674;
        case 0x115678u: goto label_115678;
        case 0x11567cu: goto label_11567c;
        case 0x115680u: goto label_115680;
        case 0x115684u: goto label_115684;
        case 0x115688u: goto label_115688;
        case 0x11568cu: goto label_11568c;
        case 0x115690u: goto label_115690;
        case 0x115694u: goto label_115694;
        case 0x115698u: goto label_115698;
        case 0x11569cu: goto label_11569c;
        case 0x1156a0u: goto label_1156a0;
        case 0x1156a4u: goto label_1156a4;
        case 0x1156a8u: goto label_1156a8;
        case 0x1156acu: goto label_1156ac;
        case 0x1156b0u: goto label_1156b0;
        case 0x1156b4u: goto label_1156b4;
        case 0x1156b8u: goto label_1156b8;
        case 0x1156bcu: goto label_1156bc;
        case 0x1156c0u: goto label_1156c0;
        case 0x1156c4u: goto label_1156c4;
        case 0x1156c8u: goto label_1156c8;
        case 0x1156ccu: goto label_1156cc;
        case 0x1156d0u: goto label_1156d0;
        case 0x1156d4u: goto label_1156d4;
        case 0x1156d8u: goto label_1156d8;
        case 0x1156dcu: goto label_1156dc;
        case 0x1156e0u: goto label_1156e0;
        case 0x1156e4u: goto label_1156e4;
        case 0x1156e8u: goto label_1156e8;
        case 0x1156ecu: goto label_1156ec;
        case 0x1156f0u: goto label_1156f0;
        case 0x1156f4u: goto label_1156f4;
        case 0x1156f8u: goto label_1156f8;
        case 0x1156fcu: goto label_1156fc;
        case 0x115700u: goto label_115700;
        case 0x115704u: goto label_115704;
        case 0x115708u: goto label_115708;
        case 0x11570cu: goto label_11570c;
        case 0x115710u: goto label_115710;
        case 0x115714u: goto label_115714;
        case 0x115718u: goto label_115718;
        case 0x11571cu: goto label_11571c;
        case 0x115720u: goto label_115720;
        case 0x115724u: goto label_115724;
        case 0x115728u: goto label_115728;
        case 0x11572cu: goto label_11572c;
        case 0x115730u: goto label_115730;
        case 0x115734u: goto label_115734;
        case 0x115738u: goto label_115738;
        case 0x11573cu: goto label_11573c;
        case 0x115740u: goto label_115740;
        case 0x115744u: goto label_115744;
        case 0x115748u: goto label_115748;
        case 0x11574cu: goto label_11574c;
        case 0x115750u: goto label_115750;
        case 0x115754u: goto label_115754;
        case 0x115758u: goto label_115758;
        case 0x11575cu: goto label_11575c;
        case 0x115760u: goto label_115760;
        case 0x115764u: goto label_115764;
        case 0x115768u: goto label_115768;
        case 0x11576cu: goto label_11576c;
        case 0x115770u: goto label_115770;
        case 0x115774u: goto label_115774;
        case 0x115778u: goto label_115778;
        case 0x11577cu: goto label_11577c;
        case 0x115780u: goto label_115780;
        case 0x115784u: goto label_115784;
        case 0x115788u: goto label_115788;
        case 0x11578cu: goto label_11578c;
        case 0x115790u: goto label_115790;
        case 0x115794u: goto label_115794;
        case 0x115798u: goto label_115798;
        case 0x11579cu: goto label_11579c;
        case 0x1157a0u: goto label_1157a0;
        case 0x1157a4u: goto label_1157a4;
        case 0x1157a8u: goto label_1157a8;
        case 0x1157acu: goto label_1157ac;
        case 0x1157b0u: goto label_1157b0;
        case 0x1157b4u: goto label_1157b4;
        case 0x1157b8u: goto label_1157b8;
        case 0x1157bcu: goto label_1157bc;
        case 0x1157c0u: goto label_1157c0;
        case 0x1157c4u: goto label_1157c4;
        case 0x1157c8u: goto label_1157c8;
        case 0x1157ccu: goto label_1157cc;
        case 0x1157d0u: goto label_1157d0;
        case 0x1157d4u: goto label_1157d4;
        case 0x1157d8u: goto label_1157d8;
        case 0x1157dcu: goto label_1157dc;
        case 0x1157e0u: goto label_1157e0;
        case 0x1157e4u: goto label_1157e4;
        case 0x1157e8u: goto label_1157e8;
        case 0x1157ecu: goto label_1157ec;
        case 0x1157f0u: goto label_1157f0;
        case 0x1157f4u: goto label_1157f4;
        case 0x1157f8u: goto label_1157f8;
        case 0x1157fcu: goto label_1157fc;
        case 0x115800u: goto label_115800;
        case 0x115804u: goto label_115804;
        case 0x115808u: goto label_115808;
        case 0x11580cu: goto label_11580c;
        case 0x115810u: goto label_115810;
        case 0x115814u: goto label_115814;
        case 0x115818u: goto label_115818;
        case 0x11581cu: goto label_11581c;
        case 0x115820u: goto label_115820;
        case 0x115824u: goto label_115824;
        case 0x115828u: goto label_115828;
        case 0x11582cu: goto label_11582c;
        case 0x115830u: goto label_115830;
        case 0x115834u: goto label_115834;
        case 0x115838u: goto label_115838;
        case 0x11583cu: goto label_11583c;
        case 0x115840u: goto label_115840;
        case 0x115844u: goto label_115844;
        case 0x115848u: goto label_115848;
        case 0x11584cu: goto label_11584c;
        case 0x115850u: goto label_115850;
        case 0x115854u: goto label_115854;
        case 0x115858u: goto label_115858;
        case 0x11585cu: goto label_11585c;
        case 0x115860u: goto label_115860;
        case 0x115864u: goto label_115864;
        case 0x115868u: goto label_115868;
        case 0x11586cu: goto label_11586c;
        case 0x115870u: goto label_115870;
        case 0x115874u: goto label_115874;
        case 0x115878u: goto label_115878;
        case 0x11587cu: goto label_11587c;
        case 0x115880u: goto label_115880;
        case 0x115884u: goto label_115884;
        case 0x115888u: goto label_115888;
        case 0x11588cu: goto label_11588c;
        case 0x115890u: goto label_115890;
        case 0x115894u: goto label_115894;
        case 0x115898u: goto label_115898;
        case 0x11589cu: goto label_11589c;
        case 0x1158a0u: goto label_1158a0;
        case 0x1158a4u: goto label_1158a4;
        case 0x1158a8u: goto label_1158a8;
        case 0x1158acu: goto label_1158ac;
        case 0x1158b0u: goto label_1158b0;
        case 0x1158b4u: goto label_1158b4;
        case 0x1158b8u: goto label_1158b8;
        case 0x1158bcu: goto label_1158bc;
        case 0x1158c0u: goto label_1158c0;
        case 0x1158c4u: goto label_1158c4;
        case 0x1158c8u: goto label_1158c8;
        case 0x1158ccu: goto label_1158cc;
        case 0x1158d0u: goto label_1158d0;
        case 0x1158d4u: goto label_1158d4;
        case 0x1158d8u: goto label_1158d8;
        case 0x1158dcu: goto label_1158dc;
        case 0x1158e0u: goto label_1158e0;
        case 0x1158e4u: goto label_1158e4;
        case 0x1158e8u: goto label_1158e8;
        case 0x1158ecu: goto label_1158ec;
        case 0x1158f0u: goto label_1158f0;
        case 0x1158f4u: goto label_1158f4;
        case 0x1158f8u: goto label_1158f8;
        case 0x1158fcu: goto label_1158fc;
        case 0x115900u: goto label_115900;
        case 0x115904u: goto label_115904;
        case 0x115908u: goto label_115908;
        case 0x11590cu: goto label_11590c;
        case 0x115910u: goto label_115910;
        case 0x115914u: goto label_115914;
        case 0x115918u: goto label_115918;
        case 0x11591cu: goto label_11591c;
        case 0x115920u: goto label_115920;
        case 0x115924u: goto label_115924;
        case 0x115928u: goto label_115928;
        case 0x11592cu: goto label_11592c;
        case 0x115930u: goto label_115930;
        case 0x115934u: goto label_115934;
        case 0x115938u: goto label_115938;
        case 0x11593cu: goto label_11593c;
        case 0x115940u: goto label_115940;
        case 0x115944u: goto label_115944;
        case 0x115948u: goto label_115948;
        case 0x11594cu: goto label_11594c;
        case 0x115950u: goto label_115950;
        case 0x115954u: goto label_115954;
        case 0x115958u: goto label_115958;
        case 0x11595cu: goto label_11595c;
        case 0x115960u: goto label_115960;
        case 0x115964u: goto label_115964;
        case 0x115968u: goto label_115968;
        case 0x11596cu: goto label_11596c;
        case 0x115970u: goto label_115970;
        case 0x115974u: goto label_115974;
        case 0x115978u: goto label_115978;
        case 0x11597cu: goto label_11597c;
        case 0x115980u: goto label_115980;
        case 0x115984u: goto label_115984;
        case 0x115988u: goto label_115988;
        case 0x11598cu: goto label_11598c;
        case 0x115990u: goto label_115990;
        case 0x115994u: goto label_115994;
        case 0x115998u: goto label_115998;
        case 0x11599cu: goto label_11599c;
        case 0x1159a0u: goto label_1159a0;
        case 0x1159a4u: goto label_1159a4;
        case 0x1159a8u: goto label_1159a8;
        case 0x1159acu: goto label_1159ac;
        case 0x1159b0u: goto label_1159b0;
        case 0x1159b4u: goto label_1159b4;
        case 0x1159b8u: goto label_1159b8;
        case 0x1159bcu: goto label_1159bc;
        case 0x1159c0u: goto label_1159c0;
        case 0x1159c4u: goto label_1159c4;
        case 0x1159c8u: goto label_1159c8;
        case 0x1159ccu: goto label_1159cc;
        case 0x1159d0u: goto label_1159d0;
        case 0x1159d4u: goto label_1159d4;
        case 0x1159d8u: goto label_1159d8;
        case 0x1159dcu: goto label_1159dc;
        case 0x1159e0u: goto label_1159e0;
        case 0x1159e4u: goto label_1159e4;
        case 0x1159e8u: goto label_1159e8;
        case 0x1159ecu: goto label_1159ec;
        case 0x1159f0u: goto label_1159f0;
        case 0x1159f4u: goto label_1159f4;
        case 0x1159f8u: goto label_1159f8;
        case 0x1159fcu: goto label_1159fc;
        case 0x115a00u: goto label_115a00;
        case 0x115a04u: goto label_115a04;
        case 0x115a08u: goto label_115a08;
        case 0x115a0cu: goto label_115a0c;
        case 0x115a10u: goto label_115a10;
        case 0x115a14u: goto label_115a14;
        case 0x115a18u: goto label_115a18;
        case 0x115a1cu: goto label_115a1c;
        case 0x115a20u: goto label_115a20;
        case 0x115a24u: goto label_115a24;
        case 0x115a28u: goto label_115a28;
        case 0x115a2cu: goto label_115a2c;
        case 0x115a30u: goto label_115a30;
        case 0x115a34u: goto label_115a34;
        case 0x115a38u: goto label_115a38;
        case 0x115a3cu: goto label_115a3c;
        case 0x115a40u: goto label_115a40;
        case 0x115a44u: goto label_115a44;
        case 0x115a48u: goto label_115a48;
        case 0x115a4cu: goto label_115a4c;
        case 0x115a50u: goto label_115a50;
        case 0x115a54u: goto label_115a54;
        case 0x115a58u: goto label_115a58;
        case 0x115a5cu: goto label_115a5c;
        case 0x115a60u: goto label_115a60;
        case 0x115a64u: goto label_115a64;
        case 0x115a68u: goto label_115a68;
        case 0x115a6cu: goto label_115a6c;
        case 0x115a70u: goto label_115a70;
        case 0x115a74u: goto label_115a74;
        case 0x115a78u: goto label_115a78;
        case 0x115a7cu: goto label_115a7c;
        case 0x115a80u: goto label_115a80;
        case 0x115a84u: goto label_115a84;
        case 0x115a88u: goto label_115a88;
        case 0x115a8cu: goto label_115a8c;
        case 0x115a90u: goto label_115a90;
        case 0x115a94u: goto label_115a94;
        case 0x115a98u: goto label_115a98;
        case 0x115a9cu: goto label_115a9c;
        case 0x115aa0u: goto label_115aa0;
        case 0x115aa4u: goto label_115aa4;
        case 0x115aa8u: goto label_115aa8;
        case 0x115aacu: goto label_115aac;
        case 0x115ab0u: goto label_115ab0;
        case 0x115ab4u: goto label_115ab4;
        case 0x115ab8u: goto label_115ab8;
        case 0x115abcu: goto label_115abc;
        case 0x115ac0u: goto label_115ac0;
        case 0x115ac4u: goto label_115ac4;
        case 0x115ac8u: goto label_115ac8;
        case 0x115accu: goto label_115acc;
        case 0x115ad0u: goto label_115ad0;
        case 0x115ad4u: goto label_115ad4;
        case 0x115ad8u: goto label_115ad8;
        case 0x115adcu: goto label_115adc;
        case 0x115ae0u: goto label_115ae0;
        case 0x115ae4u: goto label_115ae4;
        case 0x115ae8u: goto label_115ae8;
        case 0x115aecu: goto label_115aec;
        case 0x115af0u: goto label_115af0;
        case 0x115af4u: goto label_115af4;
        case 0x115af8u: goto label_115af8;
        case 0x115afcu: goto label_115afc;
        case 0x115b00u: goto label_115b00;
        case 0x115b04u: goto label_115b04;
        case 0x115b08u: goto label_115b08;
        case 0x115b0cu: goto label_115b0c;
        case 0x115b10u: goto label_115b10;
        case 0x115b14u: goto label_115b14;
        case 0x115b18u: goto label_115b18;
        case 0x115b1cu: goto label_115b1c;
        case 0x115b20u: goto label_115b20;
        case 0x115b24u: goto label_115b24;
        case 0x115b28u: goto label_115b28;
        case 0x115b2cu: goto label_115b2c;
        case 0x115b30u: goto label_115b30;
        case 0x115b34u: goto label_115b34;
        case 0x115b38u: goto label_115b38;
        case 0x115b3cu: goto label_115b3c;
        case 0x115b40u: goto label_115b40;
        case 0x115b44u: goto label_115b44;
        case 0x115b48u: goto label_115b48;
        case 0x115b4cu: goto label_115b4c;
        case 0x115b50u: goto label_115b50;
        case 0x115b54u: goto label_115b54;
        case 0x115b58u: goto label_115b58;
        case 0x115b5cu: goto label_115b5c;
        case 0x115b60u: goto label_115b60;
        case 0x115b64u: goto label_115b64;
        case 0x115b68u: goto label_115b68;
        case 0x115b6cu: goto label_115b6c;
        case 0x115b70u: goto label_115b70;
        case 0x115b74u: goto label_115b74;
        case 0x115b78u: goto label_115b78;
        case 0x115b7cu: goto label_115b7c;
        case 0x115b80u: goto label_115b80;
        case 0x115b84u: goto label_115b84;
        case 0x115b88u: goto label_115b88;
        case 0x115b8cu: goto label_115b8c;
        case 0x115b90u: goto label_115b90;
        case 0x115b94u: goto label_115b94;
        case 0x115b98u: goto label_115b98;
        case 0x115b9cu: goto label_115b9c;
        case 0x115ba0u: goto label_115ba0;
        case 0x115ba4u: goto label_115ba4;
        case 0x115ba8u: goto label_115ba8;
        case 0x115bacu: goto label_115bac;
        case 0x115bb0u: goto label_115bb0;
        case 0x115bb4u: goto label_115bb4;
        case 0x115bb8u: goto label_115bb8;
        case 0x115bbcu: goto label_115bbc;
        case 0x115bc0u: goto label_115bc0;
        case 0x115bc4u: goto label_115bc4;
        case 0x115bc8u: goto label_115bc8;
        case 0x115bccu: goto label_115bcc;
        case 0x115bd0u: goto label_115bd0;
        case 0x115bd4u: goto label_115bd4;
        case 0x115bd8u: goto label_115bd8;
        case 0x115bdcu: goto label_115bdc;
        case 0x115be0u: goto label_115be0;
        case 0x115be4u: goto label_115be4;
        case 0x115be8u: goto label_115be8;
        case 0x115becu: goto label_115bec;
        case 0x115bf0u: goto label_115bf0;
        default: break;
    }

    ctx->pc = 0x1141e0u;

label_1141e0:
    // 0x1141e0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1141e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_1141e4:
    // 0x1141e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1141e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1141e8:
    // 0x1141e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1141e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1141ec:
    // 0x1141ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1141ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1141f0:
    // 0x1141f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1141f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1141f4:
    // 0x1141f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1141f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1141f8:
    // 0x1141f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1141f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1141fc:
    // 0x1141fc: 0x8c820274  lw          $v0, 0x274($a0)
    ctx->pc = 0x1141fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
label_114200:
    // 0x114200: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
label_114204:
    if (ctx->pc == 0x114204u) {
        ctx->pc = 0x114204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114200u;
        // 0x114204: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114208u;
        goto label_114208;
    }
    ctx->pc = 0x114200u;
    {
        const bool branch_taken_0x114200 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x114204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114200u;
        // 0x114204: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114200) {
            ctx->pc = 0x114228u;
            goto label_114228;
        }
    }
    ctx->pc = 0x114208u;
label_114208:
    // 0x114208: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x114208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11420c:
    // 0x11420c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x11420cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_114210:
    // 0x114210: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x114210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_114214:
    // 0x114214: 0x8c630230  lw          $v1, 0x230($v1)
    ctx->pc = 0x114214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 560)));
label_114218:
    // 0x114218: 0x8c630320  lw          $v1, 0x320($v1)
    ctx->pc = 0x114218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
label_11421c:
    // 0x11421c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_114220:
    if (ctx->pc == 0x114220u) {
        ctx->pc = 0x114224u;
        goto label_114224;
    }
    ctx->pc = 0x11421Cu;
    {
        const bool branch_taken_0x11421c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11421c) {
            ctx->pc = 0x114228u;
            goto label_114228;
        }
    }
    ctx->pc = 0x114224u;
label_114224:
    // 0x114224: 0xae420274  sw          $v0, 0x274($s2)
    ctx->pc = 0x114224u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 628), GPR_U32(ctx, 2));
label_114228:
    // 0x114228: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x114228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_11422c:
    // 0x11422c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11422cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114230:
    // 0x114230: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x114230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114234:
    // 0x114234: 0x8c432c10  lw          $v1, 0x2C10($v0)
    ctx->pc = 0x114234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11280)));
label_114238:
    // 0x114238: 0x0  nop
    ctx->pc = 0x114238u;
    // NOP
label_11423c:
    // 0x11423c: 0x2443021  addu        $a2, $s2, $a0
    ctx->pc = 0x11423cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_114240:
    // 0x114240: 0x8cc2023c  lw          $v0, 0x23C($a2)
    ctx->pc = 0x114240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 572)));
label_114244:
    // 0x114244: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_114248:
    if (ctx->pc == 0x114248u) {
        ctx->pc = 0x11424Cu;
        goto label_11424c;
    }
    ctx->pc = 0x114244u;
    {
        const bool branch_taken_0x114244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x114244) {
            ctx->pc = 0x114258u;
            goto label_114258;
        }
    }
    ctx->pc = 0x11424Cu;
label_11424c:
    // 0x11424c: 0x8cc20240  lw          $v0, 0x240($a2)
    ctx->pc = 0x11424cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 576)));
label_114250:
    // 0x114250: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_114254:
    if (ctx->pc == 0x114254u) {
        ctx->pc = 0x114258u;
        goto label_114258;
    }
    ctx->pc = 0x114250u;
    {
        const bool branch_taken_0x114250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x114250) {
            ctx->pc = 0x114260u;
            goto label_114260;
        }
    }
    ctx->pc = 0x114258u;
label_114258:
    // 0x114258: 0x10000007  b           . + 4 + (0x7 << 2)
label_11425c:
    if (ctx->pc == 0x11425Cu) {
        ctx->pc = 0x11425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114258u;
        // 0x11425c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114260u;
        goto label_114260;
    }
    ctx->pc = 0x114258u;
    {
        const bool branch_taken_0x114258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114258u;
        // 0x11425c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114258) {
            ctx->pc = 0x114278u;
            goto label_114278;
        }
    }
    ctx->pc = 0x114260u;
label_114260:
    // 0x114260: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x114260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_114264:
    // 0x114264: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x114264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_114268:
    // 0x114268: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_11426c:
    if (ctx->pc == 0x11426Cu) {
        ctx->pc = 0x11426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114268u;
        // 0x11426c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114270u;
        goto label_114270;
    }
    ctx->pc = 0x114268u;
    {
        const bool branch_taken_0x114268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114268u;
        // 0x11426c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114268) {
            ctx->pc = 0x11423Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11423c;
        }
    }
    ctx->pc = 0x114270u;
label_114270:
    // 0x114270: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x114270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_114274:
    // 0x114274: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x114274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114278:
    // 0x114278: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11427c:
    // 0x11427c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11427cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114280:
    // 0x114280: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x114280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_114284:
    // 0x114284: 0x8c420230  lw          $v0, 0x230($v0)
    ctx->pc = 0x114284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 560)));
label_114288:
    // 0x114288: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_11428c:
    if (ctx->pc == 0x11428Cu) {
        ctx->pc = 0x114290u;
        goto label_114290;
    }
    ctx->pc = 0x114288u;
    {
        const bool branch_taken_0x114288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114288) {
            ctx->pc = 0x1142DCu;
            goto label_1142dc;
        }
    }
    ctx->pc = 0x114290u;
label_114290:
    // 0x114290: 0x8e470274  lw          $a3, 0x274($s2)
    ctx->pc = 0x114290u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 628)));
label_114294:
    // 0x114294: 0x10e40011  beq         $a3, $a0, . + 4 + (0x11 << 2)
label_114298:
    if (ctx->pc == 0x114298u) {
        ctx->pc = 0x114298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114294u;
        // 0x114298: 0x24480320  addiu       $t0, $v0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11429Cu;
        goto label_11429c;
    }
    ctx->pc = 0x114294u;
    {
        const bool branch_taken_0x114294 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x114298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114294u;
        // 0x114298: 0x24480320  addiu       $t0, $v0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114294) {
            ctx->pc = 0x1142DCu;
            goto label_1142dc;
        }
    }
    ctx->pc = 0x11429Cu;
label_11429c:
    // 0x11429c: 0x8c420320  lw          $v0, 0x320($v0)
    ctx->pc = 0x11429cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
label_1142a0:
    // 0x1142a0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1142a4:
    if (ctx->pc == 0x1142A4u) {
        ctx->pc = 0x1142A8u;
        goto label_1142a8;
    }
    ctx->pc = 0x1142A0u;
    {
        const bool branch_taken_0x1142a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1142a0) {
            ctx->pc = 0x1142DCu;
            goto label_1142dc;
        }
    }
    ctx->pc = 0x1142A8u;
label_1142a8:
    // 0x1142a8: 0x4e1000b  bgez        $a3, . + 4 + (0xB << 2)
label_1142ac:
    if (ctx->pc == 0x1142ACu) {
        ctx->pc = 0x1142B0u;
        goto label_1142b0;
    }
    ctx->pc = 0x1142A8u;
    {
        const bool branch_taken_0x1142a8 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x1142a8) {
            ctx->pc = 0x1142D8u;
            goto label_1142d8;
        }
    }
    ctx->pc = 0x1142B0u;
label_1142b0:
    // 0x1142b0: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x1142b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_1142b4:
    // 0x1142b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1142b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1142b8:
    // 0x1142b8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1142bc:
    if (ctx->pc == 0x1142BCu) {
        ctx->pc = 0x1142C0u;
        goto label_1142c0;
    }
    ctx->pc = 0x1142B8u;
    {
        const bool branch_taken_0x1142b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1142b8) {
            ctx->pc = 0x1142D8u;
            goto label_1142d8;
        }
    }
    ctx->pc = 0x1142C0u;
label_1142c0:
    // 0x1142c0: 0x14a40003  bne         $a1, $a0, . + 4 + (0x3 << 2)
label_1142c4:
    if (ctx->pc == 0x1142C4u) {
        ctx->pc = 0x1142C8u;
        goto label_1142c8;
    }
    ctx->pc = 0x1142C0u;
    {
        const bool branch_taken_0x1142c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1142c0) {
            ctx->pc = 0x1142D0u;
            goto label_1142d0;
        }
    }
    ctx->pc = 0x1142C8u;
label_1142c8:
    // 0x1142c8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1142cc:
    if (ctx->pc == 0x1142CCu) {
        ctx->pc = 0x1142CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142C8u;
        // 0x1142cc: 0xae440274  sw          $a0, 0x274($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 628), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1142D0u;
        goto label_1142d0;
    }
    ctx->pc = 0x1142C8u;
    {
        const bool branch_taken_0x1142c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1142CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142C8u;
        // 0x1142cc: 0xae440274  sw          $a0, 0x274($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 628), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142c8) {
            ctx->pc = 0x1142DCu;
            goto label_1142dc;
        }
    }
    ctx->pc = 0x1142D0u;
label_1142d0:
    // 0x1142d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1142d4:
    if (ctx->pc == 0x1142D4u) {
        ctx->pc = 0x1142D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142D0u;
        // 0x1142d4: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1142D8u;
        goto label_1142d8;
    }
    ctx->pc = 0x1142D0u;
    {
        const bool branch_taken_0x1142d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1142D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142D0u;
        // 0x1142d4: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142d0) {
            ctx->pc = 0x1142DCu;
            goto label_1142dc;
        }
    }
    ctx->pc = 0x1142D8u;
label_1142d8:
    // 0x1142d8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1142d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_1142dc:
    // 0x1142dc: 0x0  nop
    ctx->pc = 0x1142dcu;
    // NOP
label_1142e0:
    // 0x1142e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1142e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1142e4:
    // 0x1142e4: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x1142e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_1142e8:
    // 0x1142e8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_1142ec:
    if (ctx->pc == 0x1142ECu) {
        ctx->pc = 0x1142ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142E8u;
        // 0x1142ec: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1142F0u;
        goto label_1142f0;
    }
    ctx->pc = 0x1142E8u;
    {
        const bool branch_taken_0x1142e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1142ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142E8u;
        // 0x1142ec: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142e8) {
            ctx->pc = 0x114280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114280;
        }
    }
    ctx->pc = 0x1142F0u;
label_1142f0:
    // 0x1142f0: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x1142f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_1142f4:
    // 0x1142f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1142f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1142f8:
    // 0x1142f8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1142fc:
    if (ctx->pc == 0x1142FCu) {
        ctx->pc = 0x1142FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142F8u;
        // 0x1142fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114300u;
        goto label_114300;
    }
    ctx->pc = 0x1142F8u;
    {
        const bool branch_taken_0x1142f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1142FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142F8u;
        // 0x1142fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142f8) {
            ctx->pc = 0x114304u;
            goto label_114304;
        }
    }
    ctx->pc = 0x114300u;
label_114300:
    // 0x114300: 0xae420274  sw          $v0, 0x274($s2)
    ctx->pc = 0x114300u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 628), GPR_U32(ctx, 2));
label_114304:
    // 0x114304: 0x83828254  lb          $v0, -0x7DAC($gp)
    ctx->pc = 0x114304u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935124)));
label_114308:
    // 0x114308: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_11430c:
    if (ctx->pc == 0x11430Cu) {
        ctx->pc = 0x114310u;
        goto label_114310;
    }
    ctx->pc = 0x114308u;
    {
        const bool branch_taken_0x114308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114308) {
            ctx->pc = 0x114340u;
            goto label_114340;
        }
    }
    ctx->pc = 0x114310u;
label_114310:
    // 0x114310: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x114310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114314:
    // 0x114314: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x114314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_114318:
    // 0x114318: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x114318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11431c:
    // 0x11431c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x11431cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_114320:
    // 0x114320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x114320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114324:
    // 0x114324: 0xa3828254  sb          $v0, -0x7DAC($gp)
    ctx->pc = 0x114324u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935124), (uint8_t)GPR_U32(ctx, 2));
label_114328:
    // 0x114328: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_11432c:
    // 0x11432c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11432cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_114330:
    // 0x114330: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x114330u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_114334:
    // 0x114334: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x114334u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_114338:
    // 0x114338: 0x0  nop
    ctx->pc = 0x114338u;
    // NOP
label_11433c:
    // 0x11433c: 0xac22e4f8  sw          $v0, -0x1B08($at)
    ctx->pc = 0x11433cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960376), GPR_U32(ctx, 2));
label_114340:
    // 0x114340: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x114340u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_114344:
    // 0x114344: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114344u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114348:
    // 0x114348: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x114348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_11434c:
    // 0x11434c: 0x320f809  jalr        $t9
label_114350:
    if (ctx->pc == 0x114350u) {
        ctx->pc = 0x114350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11434Cu;
        // 0x114350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114354u;
        goto label_114354;
    }
    ctx->pc = 0x11434Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114354u);
        ctx->pc = 0x114350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11434Cu;
        // 0x114350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11434Cu, 0x114354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114354u;
label_114354:
    // 0x114354: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x114354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_114358:
    // 0x114358: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x114358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_11435c:
    // 0x11435c: 0x144000ba  bnez        $v0, . + 4 + (0xBA << 2)
label_114360:
    if (ctx->pc == 0x114360u) {
        ctx->pc = 0x114364u;
        goto label_114364;
    }
    ctx->pc = 0x11435Cu;
    {
        const bool branch_taken_0x11435c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11435c) {
            ctx->pc = 0x114648u;
            goto label_114648;
        }
    }
    ctx->pc = 0x114364u;
label_114364:
    // 0x114364: 0x93828250  lbu         $v0, -0x7DB0($gp)
    ctx->pc = 0x114364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935120)));
label_114368:
    // 0x114368: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_11436c:
    if (ctx->pc == 0x11436Cu) {
        ctx->pc = 0x11436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114368u;
        // 0x11436c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114370u;
        goto label_114370;
    }
    ctx->pc = 0x114368u;
    {
        const bool branch_taken_0x114368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114368u;
        // 0x11436c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114368) {
            ctx->pc = 0x1143D0u;
            goto label_1143d0;
        }
    }
    ctx->pc = 0x114370u;
label_114370:
    // 0x114370: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x114370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114374:
    // 0x114374: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x114374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_114378:
    // 0x114378: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x114378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_11437c:
    // 0x11437c: 0x8e42027c  lw          $v0, 0x27C($s2)
    ctx->pc = 0x11437cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 636)));
label_114380:
    // 0x114380: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x114380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_114384:
    // 0x114384: 0x0  nop
    ctx->pc = 0x114384u;
    // NOP
label_114388:
    // 0x114388: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_11438c:
    // 0x11438c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11438cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_114390:
    // 0x114390: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x114390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_114394:
    // 0x114394: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x114394u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_114398:
    // 0x114398: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x114398u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_11439c:
    // 0x11439c: 0x0  nop
    ctx->pc = 0x11439cu;
    // NOP
label_1143a0:
    // 0x1143a0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1143a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1143a4:
    // 0x1143a4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1143a8:
    if (ctx->pc == 0x1143A8u) {
        ctx->pc = 0x1143A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143A4u;
        // 0x1143a8: 0xae42027c  sw          $v0, 0x27C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 636), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1143ACu;
        goto label_1143ac;
    }
    ctx->pc = 0x1143A4u;
    {
        const bool branch_taken_0x1143a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1143A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143A4u;
        // 0x1143a8: 0xae42027c  sw          $v0, 0x27C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 636), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143a4) {
            ctx->pc = 0x1143CCu;
            goto label_1143cc;
        }
    }
    ctx->pc = 0x1143ACu;
label_1143ac:
    // 0x1143ac: 0xae40027c  sw          $zero, 0x27C($s2)
    ctx->pc = 0x1143acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 636), GPR_U32(ctx, 0));
label_1143b0:
    // 0x1143b0: 0x8f82824c  lw          $v0, -0x7DB4($gp)
    ctx->pc = 0x1143b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935116)));
label_1143b4:
    // 0x1143b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1143b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1143b8:
    // 0x1143b8: 0x284100c9  slti        $at, $v0, 0xC9
    ctx->pc = 0x1143b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
label_1143bc:
    // 0x1143bc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1143c0:
    if (ctx->pc == 0x1143C0u) {
        ctx->pc = 0x1143C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143BCu;
        // 0x1143c0: 0xaf82824c  sw          $v0, -0x7DB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1143C4u;
        goto label_1143c4;
    }
    ctx->pc = 0x1143BCu;
    {
        const bool branch_taken_0x1143bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1143C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143BCu;
        // 0x1143c0: 0xaf82824c  sw          $v0, -0x7DB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143bc) {
            ctx->pc = 0x1143CCu;
            goto label_1143cc;
        }
    }
    ctx->pc = 0x1143C4u;
label_1143c4:
    // 0x1143c4: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1143c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1143c8:
    // 0x1143c8: 0xaf82824c  sw          $v0, -0x7DB4($gp)
    ctx->pc = 0x1143c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935116), GPR_U32(ctx, 2));
label_1143cc:
    // 0x1143cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1143ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1143d0:
    // 0x1143d0: 0xc042118  jal         func_108460
label_1143d4:
    if (ctx->pc == 0x1143D4u) {
        ctx->pc = 0x1143D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143D0u;
        // 0x1143d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1143D8u;
        goto label_1143d8;
    }
    ctx->pc = 0x1143D0u;
    SET_GPR_U32(ctx, 31, 0x1143D8u);
    ctx->pc = 0x1143D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1143D0u;
    // 0x1143d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1143D0u, 0x1143D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1143D8u;
label_1143d8:
    // 0x1143d8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1143d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1143dc:
    // 0x1143dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1143dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1143e0:
    // 0x1143e0: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x1143e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1143e4:
    // 0x1143e4: 0x320f809  jalr        $t9
label_1143e8:
    if (ctx->pc == 0x1143E8u) {
        ctx->pc = 0x1143E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143E4u;
        // 0x1143e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1143ECu;
        goto label_1143ec;
    }
    ctx->pc = 0x1143E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1143ECu);
        ctx->pc = 0x1143E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143E4u;
        // 0x1143e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1143E4u, 0x1143ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1143ECu;
label_1143ec:
    // 0x1143ec: 0xc6400280  lwc1        $f0, 0x280($s2)
    ctx->pc = 0x1143ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1143f0:
    // 0x1143f0: 0x8f84824c  lw          $a0, -0x7DB4($gp)
    ctx->pc = 0x1143f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935116)));
label_1143f4:
    // 0x1143f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1143f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1143f8:
    // 0x1143f8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1143f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1143fc:
    // 0x1143fc: 0x0  nop
    ctx->pc = 0x1143fcu;
    // NOP
label_114400:
    // 0x114400: 0x10a40023  beq         $a1, $a0, . + 4 + (0x23 << 2)
label_114404:
    if (ctx->pc == 0x114404u) {
        ctx->pc = 0x114408u;
        goto label_114408;
    }
    ctx->pc = 0x114400u;
    {
        const bool branch_taken_0x114400 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x114400) {
            ctx->pc = 0x114490u;
            goto label_114490;
        }
    }
    ctx->pc = 0x114408u;
label_114408:
    // 0x114408: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x114408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11440c:
    // 0x11440c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x11440cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_114410:
    // 0x114410: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x114410u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_114414:
    // 0x114414: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x114414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_114418:
    // 0x114418: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x114418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11441c:
    // 0x11441c: 0x0  nop
    ctx->pc = 0x11441cu;
    // NOP
label_114420:
    // 0x114420: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x114420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_114424:
    // 0x114424: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x114424u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_114428:
    // 0x114428: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x114428u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_11442c:
    // 0x11442c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x11442cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_114430:
    // 0x114430: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x114430u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_114434:
    // 0x114434: 0x0  nop
    ctx->pc = 0x114434u;
    // NOP
label_114438:
    // 0x114438: 0x0  nop
    ctx->pc = 0x114438u;
    // NOP
label_11443c:
    // 0x11443c: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x11443cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_114440:
    // 0x114440: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_114444:
    if (ctx->pc == 0x114444u) {
        ctx->pc = 0x114448u;
        goto label_114448;
    }
    ctx->pc = 0x114440u;
    {
        const bool branch_taken_0x114440 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x114440) {
            ctx->pc = 0x11444Cu;
            goto label_11444c;
        }
    }
    ctx->pc = 0x114448u;
label_114448:
    // 0x114448: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x114448u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_11444c:
    // 0x11444c: 0xc6400280  lwc1        $f0, 0x280($s2)
    ctx->pc = 0x11444cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114450:
    // 0x114450: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x114450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_114454:
    // 0x114454: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x114454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_114458:
    // 0x114458: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x114458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11445c:
    // 0x11445c: 0x0  nop
    ctx->pc = 0x11445cu;
    // NOP
label_114460:
    // 0x114460: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_114464:
    if (ctx->pc == 0x114464u) {
        ctx->pc = 0x114464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114460u;
        // 0x114464: 0xe6400280  swc1        $f0, 0x280($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 640), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x114468u;
        goto label_114468;
    }
    ctx->pc = 0x114460u;
    {
        const bool branch_taken_0x114460 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x114464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114460u;
        // 0x114464: 0xe6400280  swc1        $f0, 0x280($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 640), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x114460) {
            ctx->pc = 0x11446Cu;
            goto label_11446c;
        }
    }
    ctx->pc = 0x114468u;
label_114468:
    // 0x114468: 0xe6420280  swc1        $f2, 0x280($s2)
    ctx->pc = 0x114468u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 640), bits); }
label_11446c:
    // 0x11446c: 0xc6400280  lwc1        $f0, 0x280($s2)
    ctx->pc = 0x11446cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114470:
    // 0x114470: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x114470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_114474:
    // 0x114474: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x114474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_114478:
    // 0x114478: 0x0  nop
    ctx->pc = 0x114478u;
    // NOP
label_11447c:
    // 0x11447c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x11447cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_114480:
    // 0x114480: 0x0  nop
    ctx->pc = 0x114480u;
    // NOP
label_114484:
    // 0x114484: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_114488:
    if (ctx->pc == 0x114488u) {
        ctx->pc = 0x11448Cu;
        goto label_11448c;
    }
    ctx->pc = 0x114484u;
    {
        const bool branch_taken_0x114484 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x114484) {
            ctx->pc = 0x114490u;
            goto label_114490;
        }
    }
    ctx->pc = 0x11448Cu;
label_11448c:
    // 0x11448c: 0xe6410280  swc1        $f1, 0x280($s2)
    ctx->pc = 0x11448cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 640), bits); }
label_114490:
    // 0x114490: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x114490u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_114494:
    // 0x114494: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x114494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_114498:
    // 0x114498: 0xc6410280  lwc1        $f1, 0x280($s2)
    ctx->pc = 0x114498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11449c:
    // 0x11449c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11449cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1144a0:
    // 0x1144a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1144a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1144a4:
    // 0x1144a4: 0x8f3900a0  lw          $t9, 0xA0($t9)
    ctx->pc = 0x1144a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 160)));
label_1144a8:
    // 0x1144a8: 0x320f809  jalr        $t9
label_1144ac:
    if (ctx->pc == 0x1144ACu) {
        ctx->pc = 0x1144ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144A8u;
        // 0x1144ac: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1144B0u;
        goto label_1144b0;
    }
    ctx->pc = 0x1144A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1144B0u);
        ctx->pc = 0x1144ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144A8u;
        // 0x1144ac: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1144A8u, 0x1144B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1144B0u;
label_1144b0:
    // 0x1144b0: 0x8e420254  lw          $v0, 0x254($s2)
    ctx->pc = 0x1144b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
label_1144b4:
    // 0x1144b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1144b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1144b8:
    // 0x1144b8: 0x213be  dsrl32      $v0, $v0, 14
    ctx->pc = 0x1144b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 14));
label_1144bc:
    // 0x1144bc: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
label_1144c0:
    if (ctx->pc == 0x1144C0u) {
        ctx->pc = 0x1144C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144BCu;
        // 0x1144c0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1144C4u;
        goto label_1144c4;
    }
    ctx->pc = 0x1144BCu;
    {
        const bool branch_taken_0x1144bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1144C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144BCu;
        // 0x1144c0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1144bc) {
            ctx->pc = 0x114648u;
            goto label_114648;
        }
    }
    ctx->pc = 0x1144C4u;
label_1144c4:
    // 0x1144c4: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1144c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_1144c8:
    // 0x1144c8: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1144c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_1144cc:
    // 0x1144cc: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x1144ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_1144d0:
    // 0x1144d0: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x1144d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_1144d4:
    // 0x1144d4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1144d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1144d8:
    // 0x1144d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1144d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1144dc:
    // 0x1144dc: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x1144dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1144e0:
    // 0x1144e0: 0x320f809  jalr        $t9
label_1144e4:
    if (ctx->pc == 0x1144E4u) {
        ctx->pc = 0x1144E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144E0u;
        // 0x1144e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1144E8u;
        goto label_1144e8;
    }
    ctx->pc = 0x1144E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1144E8u);
        ctx->pc = 0x1144E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144E0u;
        // 0x1144e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1144E0u, 0x1144E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1144E8u;
label_1144e8:
    // 0x1144e8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1144e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1144ec:
    // 0x1144ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1144ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1144f0:
    // 0x1144f0: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x1144f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_1144f4:
    // 0x1144f4: 0x320f809  jalr        $t9
label_1144f8:
    if (ctx->pc == 0x1144F8u) {
        ctx->pc = 0x1144F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144F4u;
        // 0x1144f8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1144FCu;
        goto label_1144fc;
    }
    ctx->pc = 0x1144F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1144FCu);
        ctx->pc = 0x1144F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144F4u;
        // 0x1144f8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1144F4u, 0x1144FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1144FCu;
label_1144fc:
    // 0x1144fc: 0x8e440254  lw          $a0, 0x254($s2)
    ctx->pc = 0x1144fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
label_114500:
    // 0x114500: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x114500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_114504:
    // 0x114504: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x114504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_114508:
    // 0x114508: 0x24023fff  addiu       $v0, $zero, 0x3FFF
    ctx->pc = 0x114508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_11450c:
    // 0x11450c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11450cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_114510:
    // 0x114510: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x114510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_114514:
    // 0x114514: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x114514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_114518:
    // 0x114518: 0x31bbe  dsrl32      $v1, $v1, 14
    ctx->pc = 0x114518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 14));
label_11451c:
    // 0x11451c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11451cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_114520:
    // 0x114520: 0x31bbc  dsll32      $v1, $v1, 14
    ctx->pc = 0x114520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
label_114524:
    // 0x114524: 0x31bbe  dsrl32      $v1, $v1, 14
    ctx->pc = 0x114524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 14));
label_114528:
    // 0x114528: 0x31b80  sll         $v1, $v1, 14
    ctx->pc = 0x114528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
label_11452c:
    // 0x11452c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11452cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_114530:
    // 0x114530: 0xae420254  sw          $v0, 0x254($s2)
    ctx->pc = 0x114530u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 596), GPR_U32(ctx, 2));
label_114534:
    // 0x114534: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x114534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_114538:
    // 0x114538: 0x213be  dsrl32      $v0, $v0, 14
    ctx->pc = 0x114538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 14));
label_11453c:
    // 0x11453c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_114540:
    if (ctx->pc == 0x114540u) {
        ctx->pc = 0x114540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11453Cu;
        // 0x114540: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114544u;
        goto label_114544;
    }
    ctx->pc = 0x11453Cu;
    {
        const bool branch_taken_0x11453c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11453Cu;
        // 0x114540: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11453c) {
            ctx->pc = 0x11459Cu;
            goto label_11459c;
        }
    }
    ctx->pc = 0x114544u;
label_114544:
    // 0x114544: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x114544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_114548:
    // 0x114548: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x114548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_11454c:
    // 0x11454c: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x11454cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_114550:
    // 0x114550: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x114550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_114554:
    // 0x114554: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x114554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_114558:
    // 0x114558: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x114558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11455c:
    // 0x11455c: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x11455cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_114560:
    // 0x114560: 0x320f809  jalr        $t9
label_114564:
    if (ctx->pc == 0x114564u) {
        ctx->pc = 0x114564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114560u;
        // 0x114564: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114568u;
        goto label_114568;
    }
    ctx->pc = 0x114560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114568u);
        ctx->pc = 0x114564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114560u;
        // 0x114564: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114560u, 0x114568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114568u;
label_114568:
    // 0x114568: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x114568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11456c:
    // 0x11456c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11456cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114570:
    // 0x114570: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x114570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_114574:
    // 0x114574: 0x320f809  jalr        $t9
label_114578:
    if (ctx->pc == 0x114578u) {
        ctx->pc = 0x114578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114574u;
        // 0x114578: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11457Cu;
        goto label_11457c;
    }
    ctx->pc = 0x114574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11457Cu);
        ctx->pc = 0x114578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114574u;
        // 0x114578: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114574u, 0x11457Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11457Cu;
label_11457c:
    // 0x11457c: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x11457cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_114580:
    // 0x114580: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x114580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_114584:
    // 0x114584: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x114584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_114588:
    // 0x114588: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x114588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_11458c:
    // 0x11458c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x11458cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_114590:
    // 0x114590: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x114590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_114594:
    // 0x114594: 0x1000002c  b           . + 4 + (0x2C << 2)
label_114598:
    if (ctx->pc == 0x114598u) {
        ctx->pc = 0x114598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114594u;
        // 0x114598: 0xa2420255  sb          $v0, 0x255($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11459Cu;
        goto label_11459c;
    }
    ctx->pc = 0x114594u;
    {
        const bool branch_taken_0x114594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114594u;
        // 0x114598: 0xa2420255  sb          $v0, 0x255($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114594) {
            ctx->pc = 0x114648u;
            goto label_114648;
        }
    }
    ctx->pc = 0x11459Cu;
label_11459c:
    // 0x11459c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x11459cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1145a0:
    // 0x1145a0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1145a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1145a4:
    // 0x1145a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1145a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1145a8:
    // 0x1145a8: 0x8e420254  lw          $v0, 0x254($s2)
    ctx->pc = 0x1145a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
label_1145ac:
    // 0x1145ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1145acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1145b0:
    // 0x1145b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1145b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1145b4:
    // 0x1145b4: 0x213be  dsrl32      $v0, $v0, 14
    ctx->pc = 0x1145b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 14));
label_1145b8:
    // 0x1145b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1145b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1145bc:
    // 0x1145bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1145bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1145c0:
    // 0x1145c0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1145c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1145c4:
    // 0x1145c4: 0x0  nop
    ctx->pc = 0x1145c4u;
    // NOP
label_1145c8:
    // 0x1145c8: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x1145c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1145cc:
    // 0x1145cc: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_1145d0:
    if (ctx->pc == 0x1145D0u) {
        ctx->pc = 0x1145D4u;
        goto label_1145d4;
    }
    ctx->pc = 0x1145CCu;
    {
        const bool branch_taken_0x1145cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1145cc) {
            ctx->pc = 0x114648u;
            goto label_114648;
        }
    }
    ctx->pc = 0x1145D4u;
label_1145d4:
    // 0x1145d4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1145d8:
    if (ctx->pc == 0x1145D8u) {
        ctx->pc = 0x1145D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145D4u;
        // 0x1145d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1145DCu;
        goto label_1145dc;
    }
    ctx->pc = 0x1145D4u;
    {
        const bool branch_taken_0x1145d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1145D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145D4u;
        // 0x1145d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145d4) {
            ctx->pc = 0x1145E8u;
            goto label_1145e8;
        }
    }
    ctx->pc = 0x1145DCu;
label_1145dc:
    // 0x1145dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1145dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1145e0:
    // 0x1145e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1145e4:
    if (ctx->pc == 0x1145E4u) {
        ctx->pc = 0x1145E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145E0u;
        // 0x1145e4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1145E8u;
        goto label_1145e8;
    }
    ctx->pc = 0x1145E0u;
    {
        const bool branch_taken_0x1145e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1145E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145E0u;
        // 0x1145e4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145e0) {
            ctx->pc = 0x114600u;
            goto label_114600;
        }
    }
    ctx->pc = 0x1145E8u;
label_1145e8:
    // 0x1145e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1145e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1145ec:
    // 0x1145ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1145ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1145f0:
    // 0x1145f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1145f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1145f4:
    // 0x1145f4: 0x0  nop
    ctx->pc = 0x1145f4u;
    // NOP
label_1145f8:
    // 0x1145f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1145f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1145fc:
    // 0x1145fc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1145fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_114600:
    // 0x114600: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x114600u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_114604:
    // 0x114604: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x114604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_114608:
    // 0x114608: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x114608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_11460c:
    // 0x11460c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11460cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_114610:
    // 0x114610: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x114610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_114614:
    // 0x114614: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x114614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_114618:
    // 0x114618: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x114618u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_11461c:
    // 0x11461c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x11461cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_114620:
    // 0x114620: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x114620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_114624:
    // 0x114624: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x114624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_114628:
    // 0x114628: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x114628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_11462c:
    // 0x11462c: 0x320f809  jalr        $t9
label_114630:
    if (ctx->pc == 0x114630u) {
        ctx->pc = 0x114630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11462Cu;
        // 0x114630: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114634u;
        goto label_114634;
    }
    ctx->pc = 0x11462Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114634u);
        ctx->pc = 0x114630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11462Cu;
        // 0x114630: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11462Cu, 0x114634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114634u;
label_114634:
    // 0x114634: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x114634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_114638:
    // 0x114638: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x114638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11463c:
    // 0x11463c: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x11463cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_114640:
    // 0x114640: 0x320f809  jalr        $t9
label_114644:
    if (ctx->pc == 0x114644u) {
        ctx->pc = 0x114644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114640u;
        // 0x114644: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114648u;
        goto label_114648;
    }
    ctx->pc = 0x114640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114648u);
        ctx->pc = 0x114644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114640u;
        // 0x114644: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114640u, 0x114648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114648u;
label_114648:
    // 0x114648: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x114648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_11464c:
    // 0x11464c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11464cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_114650:
    // 0x114650: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_114654:
    if (ctx->pc == 0x114654u) {
        ctx->pc = 0x114654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114650u;
        // 0x114654: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114658u;
        goto label_114658;
    }
    ctx->pc = 0x114650u;
    {
        const bool branch_taken_0x114650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114650u;
        // 0x114654: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114650) {
            ctx->pc = 0x11467Cu;
            goto label_11467c;
        }
    }
    ctx->pc = 0x114658u;
label_114658:
    // 0x114658: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x114658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_11465c:
    // 0x11465c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11465cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_114660:
    // 0x114660: 0xc05bc3c  jal         func_16F0F0
label_114664:
    if (ctx->pc == 0x114664u) {
        ctx->pc = 0x114664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114660u;
        // 0x114664: 0x24847520  addiu       $a0, $a0, 0x7520 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114668u;
        goto label_114668;
    }
    ctx->pc = 0x114660u;
    SET_GPR_U32(ctx, 31, 0x114668u);
    ctx->pc = 0x114664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114660u;
    // 0x114664: 0x24847520  addiu       $a0, $a0, 0x7520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F0F0u, 0x114660u, 0x114668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114668u;
label_114668:
    // 0x114668: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_11466c:
    if (ctx->pc == 0x11466Cu) {
        ctx->pc = 0x11466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114668u;
        // 0x11466c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114670u;
        goto label_114670;
    }
    ctx->pc = 0x114668u;
    {
        const bool branch_taken_0x114668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114668u;
        // 0x11466c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114668) {
            ctx->pc = 0x11467Cu;
            goto label_11467c;
        }
    }
    ctx->pc = 0x114670u;
label_114670:
    // 0x114670: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x114670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_114674:
    // 0x114674: 0xc045018  jal         func_114060
label_114678:
    if (ctx->pc == 0x114678u) {
        ctx->pc = 0x114678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114674u;
        // 0x114678: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11467Cu;
        goto label_11467c;
    }
    ctx->pc = 0x114674u;
    SET_GPR_U32(ctx, 31, 0x11467Cu);
    ctx->pc = 0x114678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114674u;
    // 0x114678: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x114060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114060u, 0x114674u, 0x11467Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11467Cu;
label_11467c:
    // 0x11467c: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x11467cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_114680:
    // 0x114680: 0x2177c  dsll32      $v0, $v0, 29
    ctx->pc = 0x114680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 29));
label_114684:
    // 0x114684: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x114684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
label_114688:
    // 0x114688: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_11468c:
    if (ctx->pc == 0x11468Cu) {
        ctx->pc = 0x11468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114688u;
        // 0x11468c: 0x3c023db8  lui         $v0, 0x3DB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15800 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114690u;
        goto label_114690;
    }
    ctx->pc = 0x114688u;
    {
        const bool branch_taken_0x114688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114688u;
        // 0x11468c: 0x3c023db8  lui         $v0, 0x3DB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15800 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114688) {
            ctx->pc = 0x114728u;
            goto label_114728;
        }
    }
    ctx->pc = 0x114690u;
label_114690:
    // 0x114690: 0x8e540004  lw          $s4, 0x4($s2)
    ctx->pc = 0x114690u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_114694:
    // 0x114694: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x114694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114698:
    // 0x114698: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x114698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_11469c:
    // 0x11469c: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x11469cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1146a0:
    // 0x1146a0: 0x320f809  jalr        $t9
label_1146a4:
    if (ctx->pc == 0x1146A4u) {
        ctx->pc = 0x1146A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146A0u;
        // 0x1146a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1146A8u;
        goto label_1146a8;
    }
    ctx->pc = 0x1146A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1146A8u);
        ctx->pc = 0x1146A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146A0u;
        // 0x1146a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1146A0u, 0x1146A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1146A8u;
label_1146a8:
    // 0x1146a8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1146a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1146ac:
    // 0x1146ac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1146acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1146b0:
    // 0x1146b0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1146b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1146b4:
    // 0x1146b4: 0x320f809  jalr        $t9
label_1146b8:
    if (ctx->pc == 0x1146B8u) {
        ctx->pc = 0x1146B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146B4u;
        // 0x1146b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1146BCu;
        goto label_1146bc;
    }
    ctx->pc = 0x1146B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1146BCu);
        ctx->pc = 0x1146B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146B4u;
        // 0x1146b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1146B4u, 0x1146BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1146BCu;
label_1146bc:
    // 0x1146bc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1146c0:
    if (ctx->pc == 0x1146C0u) {
        ctx->pc = 0x1146C4u;
        goto label_1146c4;
    }
    ctx->pc = 0x1146BCu;
    {
        const bool branch_taken_0x1146bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1146bc) {
            ctx->pc = 0x114724u;
            goto label_114724;
        }
    }
    ctx->pc = 0x1146C4u;
label_1146c4:
    // 0x1146c4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1146c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1146c8:
    // 0x1146c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1146c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1146cc:
    // 0x1146cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1146ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1146d0:
    // 0x1146d0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1146d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1146d4:
    // 0x1146d4: 0x320f809  jalr        $t9
label_1146d8:
    if (ctx->pc == 0x1146D8u) {
        ctx->pc = 0x1146D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146D4u;
        // 0x1146d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1146DCu;
        goto label_1146dc;
    }
    ctx->pc = 0x1146D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1146DCu);
        ctx->pc = 0x1146D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146D4u;
        // 0x1146d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1146D4u, 0x1146DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1146DCu;
label_1146dc:
    // 0x1146dc: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x1146dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1146e0:
    // 0x1146e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1146e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1146e4:
    // 0x1146e4: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x1146e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1146e8:
    // 0x1146e8: 0x320f809  jalr        $t9
label_1146ec:
    if (ctx->pc == 0x1146ECu) {
        ctx->pc = 0x1146ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146E8u;
        // 0x1146ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1146F0u;
        goto label_1146f0;
    }
    ctx->pc = 0x1146E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1146F0u);
        ctx->pc = 0x1146ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146E8u;
        // 0x1146ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1146E8u, 0x1146F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1146F0u;
label_1146f0:
    // 0x1146f0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1146f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1146f4:
    // 0x1146f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1146f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1146f8:
    // 0x1146f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1146f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1146fc:
    // 0x1146fc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1146fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_114700:
    // 0x114700: 0x320f809  jalr        $t9
label_114704:
    if (ctx->pc == 0x114704u) {
        ctx->pc = 0x114704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114700u;
        // 0x114704: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114708u;
        goto label_114708;
    }
    ctx->pc = 0x114700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114708u);
        ctx->pc = 0x114704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114700u;
        // 0x114704: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114700u, 0x114708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114708u;
label_114708:
    // 0x114708: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x114708u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_11470c:
    // 0x11470c: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x11470cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_114710:
    // 0x114710: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x114710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_114714:
    // 0x114714: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x114714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_114718:
    // 0x114718: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x114718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_11471c:
    // 0x11471c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11471cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_114720:
    // 0x114720: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x114720u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
label_114724:
    // 0x114724: 0x3c023db8  lui         $v0, 0x3DB8
    ctx->pc = 0x114724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15800 << 16));
label_114728:
    // 0x114728: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x114728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_11472c:
    // 0x11472c: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x11472cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
label_114730:
    // 0x114730: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x114730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_114734:
    // 0x114734: 0xc055c78  jal         func_1571E0
label_114738:
    if (ctx->pc == 0x114738u) {
        ctx->pc = 0x114738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114734u;
        // 0x114738: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11473Cu;
        goto label_11473c;
    }
    ctx->pc = 0x114734u;
    SET_GPR_U32(ctx, 31, 0x11473Cu);
    ctx->pc = 0x114738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114734u;
    // 0x114738: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1571E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1571E0u, 0x114734u, 0x11473Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11473Cu;
label_11473c:
    // 0x11473c: 0x8e430260  lw          $v1, 0x260($s2)
    ctx->pc = 0x11473cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_114740:
    // 0x114740: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x114740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114744:
    // 0x114744: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x114744u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_114748:
    // 0x114748: 0x2c610017  sltiu       $at, $v1, 0x17
    ctx->pc = 0x114748u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
label_11474c:
    // 0x11474c: 0x1020050c  beqz        $at, . + 4 + (0x50C << 2)
label_114750:
    if (ctx->pc == 0x114750u) {
        ctx->pc = 0x114750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11474Cu;
        // 0x114750: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x114754u;
        goto label_114754;
    }
    ctx->pc = 0x11474Cu;
    {
        const bool branch_taken_0x11474c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x114750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11474Cu;
        // 0x114750: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11474c) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x114754u;
label_114754:
    // 0x114754: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x114754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_114758:
    // 0x114758: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x114758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_11475c:
    // 0x11475c: 0x2484e500  addiu       $a0, $a0, -0x1B00
    ctx->pc = 0x11475cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960384));
label_114760:
    // 0x114760: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x114760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_114764:
    // 0x114764: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x114764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_114768:
    // 0x114768: 0x600008  jr          $v1
label_11476c:
    if (ctx->pc == 0x11476Cu) {
        ctx->pc = 0x114770u;
        goto label_114770;
    }
    ctx->pc = 0x114768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x114770u: goto label_114770;
            case 0x11480Cu: goto label_11480c;
            case 0x11489Cu: goto label_11489c;
            case 0x1148BCu: goto label_1148bc;
            case 0x114998u: goto label_114998;
            case 0x114A8Cu: goto label_114a8c;
            case 0x114ACCu: goto label_114acc;
            case 0x114CE0u: goto label_114ce0;
            case 0x114D98u: goto label_114d98;
            case 0x114E5Cu: goto label_114e5c;
            case 0x114F3Cu: goto label_114f3c;
            case 0x114F7Cu: goto label_114f7c;
            case 0x115194u: goto label_115194;
            case 0x11524Cu: goto label_11524c;
            case 0x1152F0u: goto label_1152f0;
            case 0x1153FCu: goto label_1153fc;
            case 0x11543Cu: goto label_11543c;
            case 0x11564Cu: goto label_11564c;
            case 0x115704u: goto label_115704;
            case 0x1157F0u: goto label_1157f0;
            case 0x1158A0u: goto label_1158a0;
            case 0x115A38u: goto label_115a38;
            case 0x115B80u: goto label_115b80;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114768u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x114770u;
label_114770:
    // 0x114770: 0xae40026c  sw          $zero, 0x26C($s2)
    ctx->pc = 0x114770u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 620), GPR_U32(ctx, 0));
label_114774:
    // 0x114774: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x114774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_114778:
    // 0x114778: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x114778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_11477c:
    // 0x11477c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_114780:
    if (ctx->pc == 0x114780u) {
        ctx->pc = 0x114780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11477Cu;
        // 0x114780: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114784u;
        goto label_114784;
    }
    ctx->pc = 0x11477Cu;
    {
        const bool branch_taken_0x11477c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11477Cu;
        // 0x114780: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11477c) {
            ctx->pc = 0x1147A8u;
            goto label_1147a8;
        }
    }
    ctx->pc = 0x114784u;
label_114784:
    // 0x114784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_114788:
    // 0x114788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11478c:
    // 0x11478c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11478cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114790:
    // 0x114790: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x114790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_114794:
    // 0x114794: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x114794u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_114798:
    // 0x114798: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x114798u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11479c:
    // 0x11479c: 0xc045700  jal         func_115C00
label_1147a0:
    if (ctx->pc == 0x1147A0u) {
        ctx->pc = 0x1147A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11479Cu;
        // 0x1147a0: 0x240a0009  addiu       $t2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1147A4u;
        goto label_1147a4;
    }
    ctx->pc = 0x11479Cu;
    SET_GPR_U32(ctx, 31, 0x1147A4u);
    ctx->pc = 0x1147A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11479Cu;
    // 0x1147a0: 0x240a0009  addiu       $t2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C00u, 0x11479Cu, 0x1147A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1147A4u;
label_1147a4:
    // 0x1147a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1147a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1147a8:
    // 0x1147a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1147a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1147ac:
    // 0x1147ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1147acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1147b0:
    // 0x1147b0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1147b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1147b4:
    // 0x1147b4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1147b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1147b8:
    // 0x1147b8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1147b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1147bc:
    // 0x1147bc: 0xc045700  jal         func_115C00
label_1147c0:
    if (ctx->pc == 0x1147C0u) {
        ctx->pc = 0x1147C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1147BCu;
        // 0x1147c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1147C4u;
        goto label_1147c4;
    }
    ctx->pc = 0x1147BCu;
    SET_GPR_U32(ctx, 31, 0x1147C4u);
    ctx->pc = 0x1147C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1147BCu;
    // 0x1147c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C00u, 0x1147BCu, 0x1147C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1147C4u;
label_1147c4:
    // 0x1147c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1147c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1147c8:
    // 0x1147c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1147c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1147cc:
    // 0x1147cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1147ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1147d0:
    // 0x1147d0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1147d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1147d4:
    // 0x1147d4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1147d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1147d8:
    // 0x1147d8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1147d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1147dc:
    // 0x1147dc: 0xc045700  jal         func_115C00
label_1147e0:
    if (ctx->pc == 0x1147E0u) {
        ctx->pc = 0x1147E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1147DCu;
        // 0x1147e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1147E4u;
        goto label_1147e4;
    }
    ctx->pc = 0x1147DCu;
    SET_GPR_U32(ctx, 31, 0x1147E4u);
    ctx->pc = 0x1147E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1147DCu;
    // 0x1147e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C00u, 0x1147DCu, 0x1147E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1147E4u;
label_1147e4:
    // 0x1147e4: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x1147e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_1147e8:
    // 0x1147e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1147e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1147ec:
    // 0x1147ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1147f0:
    if (ctx->pc == 0x1147F0u) {
        ctx->pc = 0x1147F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1147ECu;
        // 0x1147f0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1147F4u;
        goto label_1147f4;
    }
    ctx->pc = 0x1147ECu;
    {
        const bool branch_taken_0x1147ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1147F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1147ECu;
        // 0x1147f0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1147ec) {
            ctx->pc = 0x1147FCu;
            goto label_1147fc;
        }
    }
    ctx->pc = 0x1147F4u;
label_1147f4:
    // 0x1147f4: 0x100004e2  b           . + 4 + (0x4E2 << 2)
label_1147f8:
    if (ctx->pc == 0x1147F8u) {
        ctx->pc = 0x1147F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1147F4u;
        // 0x1147f8: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1147FCu;
        goto label_1147fc;
    }
    ctx->pc = 0x1147F4u;
    {
        const bool branch_taken_0x1147f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1147F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1147F4u;
        // 0x1147f8: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1147f4) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x1147FCu;
label_1147fc:
    // 0x1147fc: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x1147fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_114800:
    // 0x114800: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_114804:
    // 0x114804: 0x100004de  b           . + 4 + (0x4DE << 2)
label_114808:
    if (ctx->pc == 0x114808u) {
        ctx->pc = 0x114808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114804u;
        // 0x114808: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11480Cu;
        goto label_11480c;
    }
    ctx->pc = 0x114804u;
    {
        const bool branch_taken_0x114804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114804u;
        // 0x114808: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114804) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x11480Cu;
label_11480c:
    // 0x11480c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x11480cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_114810:
    // 0x114810: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x114810u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114814:
    // 0x114814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114818:
    // 0x114818: 0x8c442c10  lw          $a0, 0x2C10($v0)
    ctx->pc = 0x114818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11280)));
label_11481c:
    // 0x11481c: 0x0  nop
    ctx->pc = 0x11481cu;
    // NOP
label_114820:
    // 0x114820: 0x2453021  addu        $a2, $s2, $a1
    ctx->pc = 0x114820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_114824:
    // 0x114824: 0x8cc2023c  lw          $v0, 0x23C($a2)
    ctx->pc = 0x114824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 572)));
label_114828:
    // 0x114828: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
label_11482c:
    if (ctx->pc == 0x11482Cu) {
        ctx->pc = 0x114830u;
        goto label_114830;
    }
    ctx->pc = 0x114828u;
    {
        const bool branch_taken_0x114828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x114828) {
            ctx->pc = 0x11483Cu;
            goto label_11483c;
        }
    }
    ctx->pc = 0x114830u;
label_114830:
    // 0x114830: 0x8cc20240  lw          $v0, 0x240($a2)
    ctx->pc = 0x114830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 576)));
label_114834:
    // 0x114834: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
label_114838:
    if (ctx->pc == 0x114838u) {
        ctx->pc = 0x11483Cu;
        goto label_11483c;
    }
    ctx->pc = 0x114834u;
    {
        const bool branch_taken_0x114834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x114834) {
            ctx->pc = 0x114848u;
            goto label_114848;
        }
    }
    ctx->pc = 0x11483Cu;
label_11483c:
    // 0x11483c: 0x0  nop
    ctx->pc = 0x11483cu;
    // NOP
label_114840:
    // 0x114840: 0x10000006  b           . + 4 + (0x6 << 2)
label_114844:
    if (ctx->pc == 0x114844u) {
        ctx->pc = 0x114848u;
        goto label_114848;
    }
    ctx->pc = 0x114840u;
    {
        const bool branch_taken_0x114840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114840) {
            ctx->pc = 0x11485Cu;
            goto label_11485c;
        }
    }
    ctx->pc = 0x114848u;
label_114848:
    // 0x114848: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x114848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_11484c:
    // 0x11484c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x11484cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_114850:
    // 0x114850: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_114854:
    if (ctx->pc == 0x114854u) {
        ctx->pc = 0x114854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114850u;
        // 0x114854: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114858u;
        goto label_114858;
    }
    ctx->pc = 0x114850u;
    {
        const bool branch_taken_0x114850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114850u;
        // 0x114854: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114850) {
            ctx->pc = 0x114820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114820;
        }
    }
    ctx->pc = 0x114858u;
label_114858:
    // 0x114858: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x114858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11485c:
    // 0x11485c: 0x46004c8  bltz        $v1, . + 4 + (0x4C8 << 2)
label_114860:
    if (ctx->pc == 0x114860u) {
        ctx->pc = 0x114864u;
        goto label_114864;
    }
    ctx->pc = 0x11485Cu;
    {
        const bool branch_taken_0x11485c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x11485c) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x114864u;
label_114864:
    // 0x114864: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x114864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114868:
    // 0x114868: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x114868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_11486c:
    // 0x11486c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11486cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_114870:
    // 0x114870: 0x0  nop
    ctx->pc = 0x114870u;
    // NOP
label_114874:
    // 0x114874: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_114878:
    // 0x114878: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x114878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_11487c:
    // 0x11487c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11487cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_114880:
    // 0x114880: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x114880u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_114884:
    // 0x114884: 0x0  nop
    ctx->pc = 0x114884u;
    // NOP
label_114888:
    // 0x114888: 0xae420268  sw          $v0, 0x268($s2)
    ctx->pc = 0x114888u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 2));
label_11488c:
    // 0x11488c: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x11488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_114890:
    // 0x114890: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_114894:
    // 0x114894: 0x100004ba  b           . + 4 + (0x4BA << 2)
label_114898:
    if (ctx->pc == 0x114898u) {
        ctx->pc = 0x114898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114894u;
        // 0x114898: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11489Cu;
        goto label_11489c;
    }
    ctx->pc = 0x114894u;
    {
        const bool branch_taken_0x114894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114894u;
        // 0x114898: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114894) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x11489Cu;
label_11489c:
    // 0x11489c: 0x8e420268  lw          $v0, 0x268($s2)
    ctx->pc = 0x11489cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
label_1148a0:
    // 0x1148a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1148a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1148a4:
    // 0x1148a4: 0x1c4004b6  bgtz        $v0, . + 4 + (0x4B6 << 2)
label_1148a8:
    if (ctx->pc == 0x1148A8u) {
        ctx->pc = 0x1148A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148A4u;
        // 0x1148a8: 0xae420268  sw          $v0, 0x268($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1148ACu;
        goto label_1148ac;
    }
    ctx->pc = 0x1148A4u;
    {
        const bool branch_taken_0x1148a4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1148A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148A4u;
        // 0x1148a8: 0xae420268  sw          $v0, 0x268($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148a4) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x1148ACu;
label_1148ac:
    // 0x1148ac: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x1148acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_1148b0:
    // 0x1148b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1148b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1148b4:
    // 0x1148b4: 0x100004b2  b           . + 4 + (0x4B2 << 2)
label_1148b8:
    if (ctx->pc == 0x1148B8u) {
        ctx->pc = 0x1148B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148B4u;
        // 0x1148b8: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1148BCu;
        goto label_1148bc;
    }
    ctx->pc = 0x1148B4u;
    {
        const bool branch_taken_0x1148b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1148B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148B4u;
        // 0x1148b8: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148b4) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x1148BCu;
label_1148bc:
    // 0x1148bc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1148bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1148c0:
    // 0x1148c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1148c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1148c4:
    // 0x1148c4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1148c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1148c8:
    // 0x1148c8: 0x320f809  jalr        $t9
label_1148cc:
    if (ctx->pc == 0x1148CCu) {
        ctx->pc = 0x1148CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148C8u;
        // 0x1148cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1148D0u;
        goto label_1148d0;
    }
    ctx->pc = 0x1148C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1148D0u);
        ctx->pc = 0x1148CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148C8u;
        // 0x1148cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1148C8u, 0x1148D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1148D0u;
label_1148d0:
    // 0x1148d0: 0x93828258  lbu         $v0, -0x7DA8($gp)
    ctx->pc = 0x1148d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935128)));
label_1148d4:
    // 0x1148d4: 0x27a300e4  addiu       $v1, $sp, 0xE4
    ctx->pc = 0x1148d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_1148d8:
    // 0x1148d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1148d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1148dc:
    // 0x1148dc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1148dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1148e0:
    // 0x1148e0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1148e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1148e4:
    // 0x1148e4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1148e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1148e8:
    // 0x1148e8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1148e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1148ec:
    // 0x1148ec: 0x320f809  jalr        $t9
label_1148f0:
    if (ctx->pc == 0x1148F0u) {
        ctx->pc = 0x1148F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148ECu;
        // 0x1148f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1148F4u;
        goto label_1148f4;
    }
    ctx->pc = 0x1148ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1148F4u);
        ctx->pc = 0x1148F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148ECu;
        // 0x1148f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1148ECu, 0x1148F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1148F4u;
label_1148f4:
    // 0x1148f4: 0x8e420274  lw          $v0, 0x274($s2)
    ctx->pc = 0x1148f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 628)));
label_1148f8:
    // 0x1148f8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1148fc:
    if (ctx->pc == 0x1148FCu) {
        ctx->pc = 0x1148FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148F8u;
        // 0x1148fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114900u;
        goto label_114900;
    }
    ctx->pc = 0x1148F8u;
    {
        const bool branch_taken_0x1148f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1148FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148F8u;
        // 0x1148fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148f8) {
            ctx->pc = 0x114914u;
            goto label_114914;
        }
    }
    ctx->pc = 0x114900u;
label_114900:
    // 0x114900: 0x8e420230  lw          $v0, 0x230($s2)
    ctx->pc = 0x114900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 560)));
label_114904:
    // 0x114904: 0x8c420320  lw          $v0, 0x320($v0)
    ctx->pc = 0x114904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
label_114908:
    // 0x114908: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_11490c:
    if (ctx->pc == 0x11490Cu) {
        ctx->pc = 0x114910u;
        goto label_114910;
    }
    ctx->pc = 0x114908u;
    {
        const bool branch_taken_0x114908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114908) {
            ctx->pc = 0x114914u;
            goto label_114914;
        }
    }
    ctx->pc = 0x114910u;
label_114910:
    // 0x114910: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x114910u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_114914:
    // 0x114914: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_114918:
    if (ctx->pc == 0x114918u) {
        ctx->pc = 0x114918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114914u;
        // 0x114918: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11491Cu;
        goto label_11491c;
    }
    ctx->pc = 0x114914u;
    {
        const bool branch_taken_0x114914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114914u;
        // 0x114918: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114914) {
            ctx->pc = 0x114924u;
            goto label_114924;
        }
    }
    ctx->pc = 0x11491Cu;
label_11491c:
    // 0x11491c: 0x1000000a  b           . + 4 + (0xA << 2)
label_114920:
    if (ctx->pc == 0x114920u) {
        ctx->pc = 0x114920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11491Cu;
        // 0x114920: 0xae420278  sw          $v0, 0x278($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114924u;
        goto label_114924;
    }
    ctx->pc = 0x11491Cu;
    {
        const bool branch_taken_0x11491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11491Cu;
        // 0x114920: 0xae420278  sw          $v0, 0x278($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11491c) {
            ctx->pc = 0x114948u;
            goto label_114948;
        }
    }
    ctx->pc = 0x114924u;
label_114924:
    // 0x114924: 0xc0802aa  jal         func_200AA8
label_114928:
    if (ctx->pc == 0x114928u) {
        ctx->pc = 0x11492Cu;
        goto label_11492c;
    }
    ctx->pc = 0x114924u;
    SET_GPR_U32(ctx, 31, 0x11492Cu);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x114924u, 0x11492Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11492Cu;
label_11492c:
    // 0x11492c: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x11492cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
label_114930:
    // 0x114930: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x114930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_114934:
    // 0x114934: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x114934u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_114938:
    // 0x114938: 0x0  nop
    ctx->pc = 0x114938u;
    // NOP
label_11493c:
    // 0x11493c: 0x0  nop
    ctx->pc = 0x11493cu;
    // NOP
label_114940:
    // 0x114940: 0x1010  mfhi        $v0
    ctx->pc = 0x114940u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_114944:
    // 0x114944: 0xae420278  sw          $v0, 0x278($s2)
    ctx->pc = 0x114944u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 2));
label_114948:
    // 0x114948: 0x27a300e8  addiu       $v1, $sp, 0xE8
    ctx->pc = 0x114948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_11494c:
    // 0x11494c: 0x8e450278  lw          $a1, 0x278($s2)
    ctx->pc = 0x11494cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_114950:
    // 0x114950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114954:
    // 0x114954: 0x9382825c  lbu         $v0, -0x7DA4($gp)
    ctx->pc = 0x114954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935132)));
label_114958:
    // 0x114958: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114958u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_11495c:
    // 0x11495c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x11495cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114960:
    // 0x114960: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x114960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_114964:
    // 0x114964: 0x320f809  jalr        $t9
label_114968:
    if (ctx->pc == 0x114968u) {
        ctx->pc = 0x114968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114964u;
        // 0x114968: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11496Cu;
        goto label_11496c;
    }
    ctx->pc = 0x114964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11496Cu);
        ctx->pc = 0x114968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114964u;
        // 0x114968: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114964u, 0x11496Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11496Cu;
label_11496c:
    // 0x11496c: 0x93828260  lbu         $v0, -0x7DA0($gp)
    ctx->pc = 0x11496cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935136)));
label_114970:
    // 0x114970: 0x27a300ec  addiu       $v1, $sp, 0xEC
    ctx->pc = 0x114970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_114974:
    // 0x114974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114978:
    // 0x114978: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114978u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_11497c:
    // 0x11497c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x11497cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114980:
    // 0x114980: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x114980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_114984:
    // 0x114984: 0x320f809  jalr        $t9
label_114988:
    if (ctx->pc == 0x114988u) {
        ctx->pc = 0x114988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114984u;
        // 0x114988: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11498Cu;
        goto label_11498c;
    }
    ctx->pc = 0x114984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11498Cu);
        ctx->pc = 0x114988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114984u;
        // 0x114988: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114984u, 0x11498Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11498Cu;
label_11498c:
    // 0x11498c: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x11498cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_114990:
    // 0x114990: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_114994:
    // 0x114994: 0xae420260  sw          $v0, 0x260($s2)
    ctx->pc = 0x114994u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
label_114998:
    // 0x114998: 0x92450255  lbu         $a1, 0x255($s2)
    ctx->pc = 0x114998u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_11499c:
    // 0x11499c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x11499cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1149a0:
    // 0x1149a0: 0x64030002  daddiu      $v1, $zero, 0x2
    ctx->pc = 0x1149a0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_1149a4:
    // 0x1149a4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1149a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1149a8:
    // 0x1149a8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1149a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1149ac:
    // 0x1149ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1149acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1149b0:
    // 0x1149b0: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x1149b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
label_1149b4:
    // 0x1149b4: 0x93828264  lbu         $v0, -0x7D9C($gp)
    ctx->pc = 0x1149b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935140)));
label_1149b8:
    // 0x1149b8: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x1149b8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_1149bc:
    // 0x1149bc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1149bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1149c0:
    // 0x1149c0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1149c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1149c4:
    // 0x1149c4: 0x320f809  jalr        $t9
label_1149c8:
    if (ctx->pc == 0x1149C8u) {
        ctx->pc = 0x1149C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149C4u;
        // 0x1149c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1149CCu;
        goto label_1149cc;
    }
    ctx->pc = 0x1149C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1149CCu);
        ctx->pc = 0x1149C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149C4u;
        // 0x1149c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1149C4u, 0x1149CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1149CCu;
label_1149cc:
    // 0x1149cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1149d0:
    if (ctx->pc == 0x1149D0u) {
        ctx->pc = 0x1149D4u;
        goto label_1149d4;
    }
    ctx->pc = 0x1149CCu;
    {
        const bool branch_taken_0x1149cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1149cc) {
            ctx->pc = 0x1149F4u;
            goto label_1149f4;
        }
    }
    ctx->pc = 0x1149D4u;
label_1149d4:
    // 0x1149d4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1149d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1149d8:
    // 0x1149d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1149d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1149dc:
    // 0x1149dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1149dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1149e0:
    // 0x1149e0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1149e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1149e4:
    // 0x1149e4: 0x320f809  jalr        $t9
label_1149e8:
    if (ctx->pc == 0x1149E8u) {
        ctx->pc = 0x1149E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149E4u;
        // 0x1149e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1149ECu;
        goto label_1149ec;
    }
    ctx->pc = 0x1149E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1149ECu);
        ctx->pc = 0x1149E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149E4u;
        // 0x1149e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1149E4u, 0x1149ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1149ECu;
label_1149ec:
    // 0x1149ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_1149f0:
    if (ctx->pc == 0x1149F0u) {
        ctx->pc = 0x1149F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149ECu;
        // 0x1149f0: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1149F4u;
        goto label_1149f4;
    }
    ctx->pc = 0x1149ECu;
    {
        const bool branch_taken_0x1149ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1149F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149ECu;
        // 0x1149f0: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1149ec) {
            ctx->pc = 0x1149F8u;
            goto label_1149f8;
        }
    }
    ctx->pc = 0x1149F4u;
label_1149f4:
    // 0x1149f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1149f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1149f8:
    // 0x1149f8: 0x10400461  beqz        $v0, . + 4 + (0x461 << 2)
label_1149fc:
    if (ctx->pc == 0x1149FCu) {
        ctx->pc = 0x114A00u;
        goto label_114a00;
    }
    ctx->pc = 0x1149F8u;
    {
        const bool branch_taken_0x1149f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1149f8) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x114A00u;
label_114a00:
    // 0x114a00: 0x8e480278  lw          $t0, 0x278($s2)
    ctx->pc = 0x114a00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_114a04:
    // 0x114a04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_114a08:
    // 0x114a08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114a0c:
    // 0x114a0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x114a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114a10:
    // 0x114a10: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x114a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_114a14:
    // 0x114a14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x114a14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114a18:
    // 0x114a18: 0xc045700  jal         func_115C00
label_114a1c:
    if (ctx->pc == 0x114A1Cu) {
        ctx->pc = 0x114A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A18u;
        // 0x114a1c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114A20u;
        goto label_114a20;
    }
    ctx->pc = 0x114A18u;
    SET_GPR_U32(ctx, 31, 0x114A20u);
    ctx->pc = 0x114A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A18u;
    // 0x114a1c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C00u, 0x114A18u, 0x114A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114A20u;
label_114a20:
    // 0x114a20: 0x8e450278  lw          $a1, 0x278($s2)
    ctx->pc = 0x114a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_114a24:
    // 0x114a24: 0x27a300f4  addiu       $v1, $sp, 0xF4
    ctx->pc = 0x114a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_114a28:
    // 0x114a28: 0x93828268  lbu         $v0, -0x7D98($gp)
    ctx->pc = 0x114a28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935144)));
label_114a2c:
    // 0x114a2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114a30:
    // 0x114a30: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114a30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114a34:
    // 0x114a34: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114a34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114a38:
    // 0x114a38: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x114a38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_114a3c:
    // 0x114a3c: 0x320f809  jalr        $t9
label_114a40:
    if (ctx->pc == 0x114A40u) {
        ctx->pc = 0x114A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A3Cu;
        // 0x114a40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114A44u;
        goto label_114a44;
    }
    ctx->pc = 0x114A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114A44u);
        ctx->pc = 0x114A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A3Cu;
        // 0x114a40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114A3Cu, 0x114A44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114A44u;
label_114a44:
    // 0x114a44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x114a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114a48:
    // 0x114a48: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x114a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_114a4c:
    // 0x114a4c: 0xae450264  sw          $a1, 0x264($s2)
    ctx->pc = 0x114a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 612), GPR_U32(ctx, 5));
label_114a50:
    // 0x114a50: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x114a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_114a54:
    // 0x114a54: 0x8c24e4f8  lw          $a0, -0x1B08($at)
    ctx->pc = 0x114a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960376)));
label_114a58:
    // 0x114a58: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x114a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_114a5c:
    // 0x114a5c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x114a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_114a60:
    // 0x114a60: 0xae440268  sw          $a0, 0x268($s2)
    ctx->pc = 0x114a60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 4));
label_114a64:
    // 0x114a64: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x114a64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_114a68:
    // 0x114a68: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x114a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_114a6c:
    // 0x114a6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x114a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_114a70:
    // 0x114a70: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x114a70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
label_114a74:
    // 0x114a74: 0xae40026c  sw          $zero, 0x26C($s2)
    ctx->pc = 0x114a74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 620), GPR_U32(ctx, 0));
label_114a78:
    // 0x114a78: 0xa2450284  sb          $a1, 0x284($s2)
    ctx->pc = 0x114a78u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 644), (uint8_t)GPR_U32(ctx, 5));
label_114a7c:
    // 0x114a7c: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x114a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_114a80:
    // 0x114a80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_114a84:
    // 0x114a84: 0x1000043e  b           . + 4 + (0x43E << 2)
label_114a88:
    if (ctx->pc == 0x114A88u) {
        ctx->pc = 0x114A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A84u;
        // 0x114a88: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114A8Cu;
        goto label_114a8c;
    }
    ctx->pc = 0x114A84u;
    {
        const bool branch_taken_0x114a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A84u;
        // 0x114a88: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114a84) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x114A8Cu;
label_114a8c:
    // 0x114a8c: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x114a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_114a90:
    // 0x114a90: 0x90420042  lbu         $v0, 0x42($v0)
    ctx->pc = 0x114a90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 66)));
label_114a94:
    // 0x114a94: 0x1040043a  beqz        $v0, . + 4 + (0x43A << 2)
label_114a98:
    if (ctx->pc == 0x114A98u) {
        ctx->pc = 0x114A9Cu;
        goto label_114a9c;
    }
    ctx->pc = 0x114A94u;
    {
        const bool branch_taken_0x114a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114a94) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x114A9Cu;
label_114a9c:
    // 0x114a9c: 0x9382826c  lbu         $v0, -0x7D94($gp)
    ctx->pc = 0x114a9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935148)));
label_114aa0:
    // 0x114aa0: 0x27a300f8  addiu       $v1, $sp, 0xF8
    ctx->pc = 0x114aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_114aa4:
    // 0x114aa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114aa8:
    // 0x114aa8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114aac:
    // 0x114aac: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114aacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114ab0:
    // 0x114ab0: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x114ab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_114ab4:
    // 0x114ab4: 0x320f809  jalr        $t9
label_114ab8:
    if (ctx->pc == 0x114AB8u) {
        ctx->pc = 0x114AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AB4u;
        // 0x114ab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114ABCu;
        goto label_114abc;
    }
    ctx->pc = 0x114AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114ABCu);
        ctx->pc = 0x114AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AB4u;
        // 0x114ab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114AB4u, 0x114ABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114ABCu;
label_114abc:
    // 0x114abc: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x114abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_114ac0:
    // 0x114ac0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_114ac4:
    // 0x114ac4: 0x1000042e  b           . + 4 + (0x42E << 2)
label_114ac8:
    if (ctx->pc == 0x114AC8u) {
        ctx->pc = 0x114AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AC4u;
        // 0x114ac8: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114ACCu;
        goto label_114acc;
    }
    ctx->pc = 0x114AC4u;
    {
        const bool branch_taken_0x114ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AC4u;
        // 0x114ac8: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ac4) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x114ACCu;
label_114acc:
    // 0x114acc: 0x92440284  lbu         $a0, 0x284($s2)
    ctx->pc = 0x114accu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 644)));
label_114ad0:
    // 0x114ad0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x114ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_114ad4:
    // 0x114ad4: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
label_114ad8:
    if (ctx->pc == 0x114AD8u) {
        ctx->pc = 0x114ADCu;
        goto label_114adc;
    }
    ctx->pc = 0x114AD4u;
    {
        const bool branch_taken_0x114ad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x114ad4) {
            ctx->pc = 0x114B0Cu;
            goto label_114b0c;
        }
    }
    ctx->pc = 0x114ADCu;
label_114adc:
    // 0x114adc: 0xa2420284  sb          $v0, 0x284($s2)
    ctx->pc = 0x114adcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 644), (uint8_t)GPR_U32(ctx, 2));
label_114ae0:
    // 0x114ae0: 0x27a800fc  addiu       $t0, $sp, 0xFC
    ctx->pc = 0x114ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
label_114ae4:
    // 0x114ae4: 0x93878270  lbu         $a3, -0x7D90($gp)
    ctx->pc = 0x114ae4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935152)));
label_114ae8:
    // 0x114ae8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114aec:
    // 0x114aec: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x114aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_114af0:
    // 0x114af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114af4:
    // 0x114af4: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x114af4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_114af8:
    // 0x114af8: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x114af8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
label_114afc:
    // 0x114afc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114afcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114b00:
    // 0x114b00: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x114b00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_114b04:
    // 0x114b04: 0x320f809  jalr        $t9
label_114b08:
    if (ctx->pc == 0x114B08u) {
        ctx->pc = 0x114B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B04u;
        // 0x114b08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114B0Cu;
        goto label_114b0c;
    }
    ctx->pc = 0x114B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114B0Cu);
        ctx->pc = 0x114B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B04u;
        // 0x114b08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114B04u, 0x114B0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114B0Cu;
label_114b0c:
    // 0x114b0c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_114b10:
    if (ctx->pc == 0x114B10u) {
        ctx->pc = 0x114B14u;
        goto label_114b14;
    }
    ctx->pc = 0x114B0Cu;
    {
        const bool branch_taken_0x114b0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x114b0c) {
            ctx->pc = 0x114B2Cu;
            goto label_114b2c;
        }
    }
    ctx->pc = 0x114B14u;
label_114b14:
    // 0x114b14: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x114b14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_114b18:
    // 0x114b18: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x114b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_114b1c:
    // 0x114b1c: 0x64030008  daddiu      $v1, $zero, 0x8
    ctx->pc = 0x114b1cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
label_114b20:
    // 0x114b20: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x114b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_114b24:
    // 0x114b24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x114b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_114b28:
    // 0x114b28: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x114b28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
label_114b2c:
    // 0x114b2c: 0x8e420268  lw          $v0, 0x268($s2)
    ctx->pc = 0x114b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
label_114b30:
    // 0x114b30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x114b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_114b34:
    // 0x114b34: 0xae420268  sw          $v0, 0x268($s2)
    ctx->pc = 0x114b34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 2));
label_114b38:
    // 0x114b38: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x114b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_114b3c:
    // 0x114b3c: 0x2173c  dsll32      $v0, $v0, 28
    ctx->pc = 0x114b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 28));
label_114b40:
    // 0x114b40: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x114b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
label_114b44:
    // 0x114b44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_114b48:
    if (ctx->pc == 0x114B48u) {
        ctx->pc = 0x114B4Cu;
        goto label_114b4c;
    }
    ctx->pc = 0x114B44u;
    {
        const bool branch_taken_0x114b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114b44) {
            ctx->pc = 0x114B58u;
            goto label_114b58;
        }
    }
    ctx->pc = 0x114B4Cu;
label_114b4c:
    // 0x114b4c: 0x8e420268  lw          $v0, 0x268($s2)
    ctx->pc = 0x114b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
label_114b50:
    // 0x114b50: 0x441040b  bgez        $v0, . + 4 + (0x40B << 2)
label_114b54:
    if (ctx->pc == 0x114B54u) {
        ctx->pc = 0x114B58u;
        goto label_114b58;
    }
    ctx->pc = 0x114B50u;
    {
        const bool branch_taken_0x114b50 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x114b50) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x114B58u;
label_114b58:
    // 0x114b58: 0x93828274  lbu         $v0, -0x7D8C($gp)
    ctx->pc = 0x114b58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935156)));
label_114b5c:
    // 0x114b5c: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x114b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_114b60:
    // 0x114b60: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114b60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114b64:
    // 0x114b64: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114b64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114b68:
    // 0x114b68: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x114b68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_114b6c:
    // 0x114b6c: 0x320f809  jalr        $t9
label_114b70:
    if (ctx->pc == 0x114B70u) {
        ctx->pc = 0x114B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B6Cu;
        // 0x114b70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114B74u;
        goto label_114b74;
    }
    ctx->pc = 0x114B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114B74u);
        ctx->pc = 0x114B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B6Cu;
        // 0x114b70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114B6Cu, 0x114B74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114B74u;
label_114b74:
    // 0x114b74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x114b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114b78:
    // 0x114b78: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x114b78u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_114b7c:
    // 0x114b7c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x114b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_114b80:
    // 0x114b80: 0x104003ff  beqz        $v0, . + 4 + (0x3FF << 2)
label_114b84:
    if (ctx->pc == 0x114B84u) {
        ctx->pc = 0x114B88u;
        goto label_114b88;
    }
    ctx->pc = 0x114B80u;
    {
        const bool branch_taken_0x114b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114b80) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x114B88u;
label_114b88:
    // 0x114b88: 0x93828278  lbu         $v0, -0x7D88($gp)
    ctx->pc = 0x114b88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935160)));
label_114b8c:
    // 0x114b8c: 0x27a30104  addiu       $v1, $sp, 0x104
    ctx->pc = 0x114b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_114b90:
    // 0x114b90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114b94:
    // 0x114b94: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114b94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114b98:
    // 0x114b98: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114b98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114b9c:
    // 0x114b9c: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x114b9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_114ba0:
    // 0x114ba0: 0x320f809  jalr        $t9
label_114ba4:
    if (ctx->pc == 0x114BA4u) {
        ctx->pc = 0x114BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BA0u;
        // 0x114ba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114BA8u;
        goto label_114ba8;
    }
    ctx->pc = 0x114BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114BA8u);
        ctx->pc = 0x114BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BA0u;
        // 0x114ba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114BA0u, 0x114BA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114BA8u;
label_114ba8:
    // 0x114ba8: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x114ba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_114bac:
    // 0x114bac: 0x2177c  dsll32      $v0, $v0, 29
    ctx->pc = 0x114bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 29));
label_114bb0:
    // 0x114bb0: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x114bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
label_114bb4:
    // 0x114bb4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_114bb8:
    if (ctx->pc == 0x114BB8u) {
        ctx->pc = 0x114BBCu;
        goto label_114bbc;
    }
    ctx->pc = 0x114BB4u;
    {
        const bool branch_taken_0x114bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114bb4) {
            ctx->pc = 0x114C34u;
            goto label_114c34;
        }
    }
    ctx->pc = 0x114BBCu;
label_114bbc:
    // 0x114bbc: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x114bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_114bc0:
    // 0x114bc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x114bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114bc4:
    // 0x114bc4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x114bc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_114bc8:
    // 0x114bc8: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x114bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_114bcc:
    // 0x114bcc: 0x320f809  jalr        $t9
label_114bd0:
    if (ctx->pc == 0x114BD0u) {
        ctx->pc = 0x114BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BCCu;
        // 0x114bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114BD4u;
        goto label_114bd4;
    }
    ctx->pc = 0x114BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114BD4u);
        ctx->pc = 0x114BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BCCu;
        // 0x114bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114BCCu, 0x114BD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114BD4u;
label_114bd4:
    // 0x114bd4: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x114bd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_114bd8:
    // 0x114bd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x114bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114bdc:
    // 0x114bdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114be0:
    // 0x114be0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x114be0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_114be4:
    // 0x114be4: 0x320f809  jalr        $t9
label_114be8:
    if (ctx->pc == 0x114BE8u) {
        ctx->pc = 0x114BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BE4u;
        // 0x114be8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114BECu;
        goto label_114bec;
    }
    ctx->pc = 0x114BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114BECu);
        ctx->pc = 0x114BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BE4u;
        // 0x114be8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114BE4u, 0x114BECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114BECu;
label_114bec:
    // 0x114bec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x114becu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_114bf0:
    // 0x114bf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x114bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_114bf4:
    // 0x114bf4: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x114bf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_114bf8:
    // 0x114bf8: 0x320f809  jalr        $t9
label_114bfc:
    if (ctx->pc == 0x114BFCu) {
        ctx->pc = 0x114BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BF8u;
        // 0x114bfc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114C00u;
        goto label_114c00;
    }
    ctx->pc = 0x114BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114C00u);
        ctx->pc = 0x114BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BF8u;
        // 0x114bfc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114BF8u, 0x114C00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114C00u;
label_114c00:
    // 0x114c00: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x114c00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_114c04:
    // 0x114c04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x114c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114c08:
    // 0x114c08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114c0c:
    // 0x114c0c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x114c0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_114c10:
    // 0x114c10: 0x320f809  jalr        $t9
label_114c14:
    if (ctx->pc == 0x114C14u) {
        ctx->pc = 0x114C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C10u;
        // 0x114c14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114C18u;
        goto label_114c18;
    }
    ctx->pc = 0x114C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114C18u);
        ctx->pc = 0x114C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C10u;
        // 0x114c14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114C10u, 0x114C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114C18u;
label_114c18:
    // 0x114c18: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x114c18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_114c1c:
    // 0x114c1c: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x114c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_114c20:
    // 0x114c20: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x114c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_114c24:
    // 0x114c24: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x114c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_114c28:
    // 0x114c28: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x114c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_114c2c:
    // 0x114c2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x114c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_114c30:
    // 0x114c30: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x114c30u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
label_114c34:
    // 0x114c34: 0x9382827c  lbu         $v0, -0x7D84($gp)
    ctx->pc = 0x114c34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935164)));
label_114c38:
    // 0x114c38: 0x27a30108  addiu       $v1, $sp, 0x108
    ctx->pc = 0x114c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_114c3c:
    // 0x114c3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114c40:
    // 0x114c40: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x114c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_114c44:
    // 0x114c44: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114c44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114c48:
    // 0x114c48: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114c48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114c4c:
    // 0x114c4c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x114c4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_114c50:
    // 0x114c50: 0x320f809  jalr        $t9
label_114c54:
    if (ctx->pc == 0x114C54u) {
        ctx->pc = 0x114C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C50u;
        // 0x114c54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114C58u;
        goto label_114c58;
    }
    ctx->pc = 0x114C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114C58u);
        ctx->pc = 0x114C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C50u;
        // 0x114c54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114C50u, 0x114C58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114C58u;
label_114c58:
    // 0x114c58: 0x8e430220  lw          $v1, 0x220($s2)
    ctx->pc = 0x114c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_114c5c:
    // 0x114c5c: 0x90620041  lbu         $v0, 0x41($v1)
    ctx->pc = 0x114c5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 65)));
label_114c60:
    // 0x114c60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_114c64:
    if (ctx->pc == 0x114C64u) {
        ctx->pc = 0x114C68u;
        goto label_114c68;
    }
    ctx->pc = 0x114C60u;
    {
        const bool branch_taken_0x114c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114c60) {
            ctx->pc = 0x114C74u;
            goto label_114c74;
        }
    }
    ctx->pc = 0x114C68u;
label_114c68:
    // 0x114c68: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x114c68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_114c6c:
    // 0x114c6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x114c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_114c70:
    // 0x114c70: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x114c70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_114c74:
    // 0x114c74: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x114c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_114c78:
    // 0x114c78: 0x24430044  addiu       $v1, $v0, 0x44
    ctx->pc = 0x114c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_114c7c:
    // 0x114c7c: 0x90420085  lbu         $v0, 0x85($v0)
    ctx->pc = 0x114c7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 133)));
label_114c80:
    // 0x114c80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_114c84:
    if (ctx->pc == 0x114C84u) {
        ctx->pc = 0x114C88u;
        goto label_114c88;
    }
    ctx->pc = 0x114C80u;
    {
        const bool branch_taken_0x114c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114c80) {
            ctx->pc = 0x114C94u;
            goto label_114c94;
        }
    }
    ctx->pc = 0x114C88u;
label_114c88:
    // 0x114c88: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x114c88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_114c8c:
    // 0x114c8c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x114c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_114c90:
    // 0x114c90: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x114c90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_114c94:
    // 0x114c94: 0x92460255  lbu         $a2, 0x255($s2)
    ctx->pc = 0x114c94u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_114c98:
    // 0x114c98: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x114c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_114c9c:
    // 0x114c9c: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x114c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_114ca0:
    // 0x114ca0: 0x64050002  daddiu      $a1, $zero, 0x2
    ctx->pc = 0x114ca0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_114ca4:
    // 0x114ca4: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x114ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_114ca8:
    // 0x114ca8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x114ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_114cac:
    // 0x114cac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x114cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114cb0:
    // 0x114cb0: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x114cb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_114cb4:
    // 0x114cb4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x114cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_114cb8:
    // 0x114cb8: 0xa2440255  sb          $a0, 0x255($s2)
    ctx->pc = 0x114cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 4));
label_114cbc:
    // 0x114cbc: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x114cbcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_114cc0:
    // 0x114cc0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x114cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_114cc4:
    // 0x114cc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x114cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_114cc8:
    // 0x114cc8: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x114cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
label_114ccc:
    // 0x114ccc: 0xae47026c  sw          $a3, 0x26C($s2)
    ctx->pc = 0x114cccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 620), GPR_U32(ctx, 7));
label_114cd0:
    // 0x114cd0: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x114cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_114cd4:
    // 0x114cd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_114cd8:
    // 0x114cd8: 0x100003a9  b           . + 4 + (0x3A9 << 2)
label_114cdc:
    if (ctx->pc == 0x114CDCu) {
        ctx->pc = 0x114CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114CD8u;
        // 0x114cdc: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114CE0u;
        goto label_114ce0;
    }
    ctx->pc = 0x114CD8u;
    {
        const bool branch_taken_0x114cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114CD8u;
        // 0x114cdc: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114cd8) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x114CE0u;
label_114ce0:
    // 0x114ce0: 0x93828280  lbu         $v0, -0x7D80($gp)
    ctx->pc = 0x114ce0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935168)));
label_114ce4:
    // 0x114ce4: 0x27a3010c  addiu       $v1, $sp, 0x10C
    ctx->pc = 0x114ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_114ce8:
    // 0x114ce8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114cec:
    // 0x114cec: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114cecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114cf0:
    // 0x114cf0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x114cf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_114cf4:
    // 0x114cf4: 0x320f809  jalr        $t9
label_114cf8:
    if (ctx->pc == 0x114CF8u) {
        ctx->pc = 0x114CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114CF4u;
        // 0x114cf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114CFCu;
        goto label_114cfc;
    }
    ctx->pc = 0x114CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114CFCu);
        ctx->pc = 0x114CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114CF4u;
        // 0x114cf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114CF4u, 0x114CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114CFCu;
label_114cfc:
    // 0x114cfc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_114d00:
    if (ctx->pc == 0x114D00u) {
        ctx->pc = 0x114D04u;
        goto label_114d04;
    }
    ctx->pc = 0x114CFCu;
    {
        const bool branch_taken_0x114cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114cfc) {
            ctx->pc = 0x114D24u;
            goto label_114d24;
        }
    }
    ctx->pc = 0x114D04u;
label_114d04:
    // 0x114d04: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114d04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114d08:
    // 0x114d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114d0c:
    // 0x114d0c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x114d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_114d10:
    // 0x114d10: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x114d10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_114d14:
    // 0x114d14: 0x320f809  jalr        $t9
label_114d18:
    if (ctx->pc == 0x114D18u) {
        ctx->pc = 0x114D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D14u;
        // 0x114d18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114D1Cu;
        goto label_114d1c;
    }
    ctx->pc = 0x114D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114D1Cu);
        ctx->pc = 0x114D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D14u;
        // 0x114d18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114D14u, 0x114D1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114D1Cu;
label_114d1c:
    // 0x114d1c: 0x10000002  b           . + 4 + (0x2 << 2)
label_114d20:
    if (ctx->pc == 0x114D20u) {
        ctx->pc = 0x114D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D1Cu;
        // 0x114d20: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x114D24u;
        goto label_114d24;
    }
    ctx->pc = 0x114D1Cu;
    {
        const bool branch_taken_0x114d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D1Cu;
        // 0x114d20: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d1c) {
            ctx->pc = 0x114D28u;
            goto label_114d28;
        }
    }
    ctx->pc = 0x114D24u;
label_114d24:
    // 0x114d24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x114d24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114d28:
    // 0x114d28: 0x10400395  beqz        $v0, . + 4 + (0x395 << 2)
label_114d2c:
    if (ctx->pc == 0x114D2Cu) {
        ctx->pc = 0x114D30u;
        goto label_114d30;
    }
    ctx->pc = 0x114D28u;
    {
        const bool branch_taken_0x114d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114d28) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x114D30u;
label_114d30:
    // 0x114d30: 0x93828284  lbu         $v0, -0x7D7C($gp)
    ctx->pc = 0x114d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935172)));
label_114d34:
    // 0x114d34: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x114d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_114d38:
    // 0x114d38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114d3c:
    // 0x114d3c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x114d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_114d40:
    // 0x114d40: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114d40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114d44:
    // 0x114d44: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114d44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114d48:
    // 0x114d48: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x114d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_114d4c:
    // 0x114d4c: 0x320f809  jalr        $t9
label_114d50:
    if (ctx->pc == 0x114D50u) {
        ctx->pc = 0x114D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D4Cu;
        // 0x114d50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114D54u;
        goto label_114d54;
    }
    ctx->pc = 0x114D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114D54u);
        ctx->pc = 0x114D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D4Cu;
        // 0x114d50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114D4Cu, 0x114D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114D54u;
label_114d54:
    // 0x114d54: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114d54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114d58:
    // 0x114d58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114d5c:
    // 0x114d5c: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x114d5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_114d60:
    // 0x114d60: 0x320f809  jalr        $t9
label_114d64:
    if (ctx->pc == 0x114D64u) {
        ctx->pc = 0x114D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D60u;
        // 0x114d64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114D68u;
        goto label_114d68;
    }
    ctx->pc = 0x114D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114D68u);
        ctx->pc = 0x114D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D60u;
        // 0x114d64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114D60u, 0x114D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114D68u;
label_114d68:
    // 0x114d68: 0x93828288  lbu         $v0, -0x7D78($gp)
    ctx->pc = 0x114d68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935176)));
label_114d6c:
    // 0x114d6c: 0x27a30114  addiu       $v1, $sp, 0x114
    ctx->pc = 0x114d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_114d70:
    // 0x114d70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114d74:
    // 0x114d74: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114d74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114d78:
    // 0x114d78: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114d78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114d7c:
    // 0x114d7c: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x114d7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_114d80:
    // 0x114d80: 0x320f809  jalr        $t9
label_114d84:
    if (ctx->pc == 0x114D84u) {
        ctx->pc = 0x114D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D80u;
        // 0x114d84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114D88u;
        goto label_114d88;
    }
    ctx->pc = 0x114D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114D88u);
        ctx->pc = 0x114D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D80u;
        // 0x114d84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114D80u, 0x114D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114D88u;
label_114d88:
    // 0x114d88: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x114d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_114d8c:
    // 0x114d8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_114d90:
    // 0x114d90: 0x1000037b  b           . + 4 + (0x37B << 2)
label_114d94:
    if (ctx->pc == 0x114D94u) {
        ctx->pc = 0x114D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D90u;
        // 0x114d94: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114D98u;
        goto label_114d98;
    }
    ctx->pc = 0x114D90u;
    {
        const bool branch_taken_0x114d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D90u;
        // 0x114d94: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d90) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x114D98u;
label_114d98:
    // 0x114d98: 0x9382828c  lbu         $v0, -0x7D74($gp)
    ctx->pc = 0x114d98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_114d9c:
    // 0x114d9c: 0x27a30118  addiu       $v1, $sp, 0x118
    ctx->pc = 0x114d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_114da0:
    // 0x114da0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114da0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114da4:
    // 0x114da4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114da4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114da8:
    // 0x114da8: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x114da8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_114dac:
    // 0x114dac: 0x320f809  jalr        $t9
label_114db0:
    if (ctx->pc == 0x114DB0u) {
        ctx->pc = 0x114DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DACu;
        // 0x114db0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114DB4u;
        goto label_114db4;
    }
    ctx->pc = 0x114DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114DB4u);
        ctx->pc = 0x114DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DACu;
        // 0x114db0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114DACu, 0x114DB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114DB4u;
label_114db4:
    // 0x114db4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_114db8:
    if (ctx->pc == 0x114DB8u) {
        ctx->pc = 0x114DBCu;
        goto label_114dbc;
    }
    ctx->pc = 0x114DB4u;
    {
        const bool branch_taken_0x114db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114db4) {
            ctx->pc = 0x114DDCu;
            goto label_114ddc;
        }
    }
    ctx->pc = 0x114DBCu;
label_114dbc:
    // 0x114dbc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114dbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114dc0:
    // 0x114dc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114dc4:
    // 0x114dc4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x114dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_114dc8:
    // 0x114dc8: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x114dc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_114dcc:
    // 0x114dcc: 0x320f809  jalr        $t9
label_114dd0:
    if (ctx->pc == 0x114DD0u) {
        ctx->pc = 0x114DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DCCu;
        // 0x114dd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114DD4u;
        goto label_114dd4;
    }
    ctx->pc = 0x114DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114DD4u);
        ctx->pc = 0x114DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DCCu;
        // 0x114dd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114DCCu, 0x114DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114DD4u;
label_114dd4:
    // 0x114dd4: 0x10000002  b           . + 4 + (0x2 << 2)
label_114dd8:
    if (ctx->pc == 0x114DD8u) {
        ctx->pc = 0x114DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DD4u;
        // 0x114dd8: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x114DDCu;
        goto label_114ddc;
    }
    ctx->pc = 0x114DD4u;
    {
        const bool branch_taken_0x114dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DD4u;
        // 0x114dd8: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114dd4) {
            ctx->pc = 0x114DE0u;
            goto label_114de0;
        }
    }
    ctx->pc = 0x114DDCu;
label_114ddc:
    // 0x114ddc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x114ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114de0:
    // 0x114de0: 0x10400367  beqz        $v0, . + 4 + (0x367 << 2)
label_114de4:
    if (ctx->pc == 0x114DE4u) {
        ctx->pc = 0x114DE8u;
        goto label_114de8;
    }
    ctx->pc = 0x114DE0u;
    {
        const bool branch_taken_0x114de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114de0) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x114DE8u;
label_114de8:
    // 0x114de8: 0x93828290  lbu         $v0, -0x7D70($gp)
    ctx->pc = 0x114de8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935184)));
label_114dec:
    // 0x114dec: 0x27a3011c  addiu       $v1, $sp, 0x11C
    ctx->pc = 0x114decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_114df0:
    // 0x114df0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114df4:
    // 0x114df4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x114df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_114df8:
    // 0x114df8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114df8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114dfc:
    // 0x114dfc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114dfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114e00:
    // 0x114e00: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x114e00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_114e04:
    // 0x114e04: 0x320f809  jalr        $t9
label_114e08:
    if (ctx->pc == 0x114E08u) {
        ctx->pc = 0x114E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E04u;
        // 0x114e08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114E0Cu;
        goto label_114e0c;
    }
    ctx->pc = 0x114E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114E0Cu);
        ctx->pc = 0x114E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E04u;
        // 0x114e08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114E04u, 0x114E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114E0Cu;
label_114e0c:
    // 0x114e0c: 0x93828294  lbu         $v0, -0x7D6C($gp)
    ctx->pc = 0x114e0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935188)));
label_114e10:
    // 0x114e10: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x114e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_114e14:
    // 0x114e14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114e18:
    // 0x114e18: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114e18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114e1c:
    // 0x114e1c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114e1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114e20:
    // 0x114e20: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x114e20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_114e24:
    // 0x114e24: 0x320f809  jalr        $t9
label_114e28:
    if (ctx->pc == 0x114E28u) {
        ctx->pc = 0x114E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E24u;
        // 0x114e28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114E2Cu;
        goto label_114e2c;
    }
    ctx->pc = 0x114E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114E2Cu);
        ctx->pc = 0x114E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E24u;
        // 0x114e28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114E24u, 0x114E2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114E2Cu;
label_114e2c:
    // 0x114e2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_114e30:
    // 0x114e30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114e34:
    // 0x114e34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114e38:
    // 0x114e38: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x114e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_114e3c:
    // 0x114e3c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x114e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_114e40:
    // 0x114e40: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x114e40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114e44:
    // 0x114e44: 0xc045700  jal         func_115C00
label_114e48:
    if (ctx->pc == 0x114E48u) {
        ctx->pc = 0x114E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E44u;
        // 0x114e48: 0x240a0009  addiu       $t2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114E4Cu;
        goto label_114e4c;
    }
    ctx->pc = 0x114E44u;
    SET_GPR_U32(ctx, 31, 0x114E4Cu);
    ctx->pc = 0x114E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E44u;
    // 0x114e48: 0x240a0009  addiu       $t2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C00u, 0x114E44u, 0x114E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E4Cu;
label_114e4c:
    // 0x114e4c: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x114e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_114e50:
    // 0x114e50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_114e54:
    // 0x114e54: 0x1000034a  b           . + 4 + (0x34A << 2)
label_114e58:
    if (ctx->pc == 0x114E58u) {
        ctx->pc = 0x114E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E54u;
        // 0x114e58: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114E5Cu;
        goto label_114e5c;
    }
    ctx->pc = 0x114E54u;
    {
        const bool branch_taken_0x114e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E54u;
        // 0x114e58: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e54) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x114E5Cu;
label_114e5c:
    // 0x114e5c: 0x93828298  lbu         $v0, -0x7D68($gp)
    ctx->pc = 0x114e5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935192)));
label_114e60:
    // 0x114e60: 0x27a30124  addiu       $v1, $sp, 0x124
    ctx->pc = 0x114e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_114e64:
    // 0x114e64: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114e64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114e68:
    // 0x114e68: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114e68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114e6c:
    // 0x114e6c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x114e6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_114e70:
    // 0x114e70: 0x320f809  jalr        $t9
label_114e74:
    if (ctx->pc == 0x114E74u) {
        ctx->pc = 0x114E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E70u;
        // 0x114e74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114E78u;
        goto label_114e78;
    }
    ctx->pc = 0x114E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114E78u);
        ctx->pc = 0x114E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E70u;
        // 0x114e74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114E70u, 0x114E78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114E78u;
label_114e78:
    // 0x114e78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_114e7c:
    if (ctx->pc == 0x114E7Cu) {
        ctx->pc = 0x114E80u;
        goto label_114e80;
    }
    ctx->pc = 0x114E78u;
    {
        const bool branch_taken_0x114e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114e78) {
            ctx->pc = 0x114EA0u;
            goto label_114ea0;
        }
    }
    ctx->pc = 0x114E80u;
label_114e80:
    // 0x114e80: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114e80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114e84:
    // 0x114e84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114e88:
    // 0x114e88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114e8c:
    // 0x114e8c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x114e8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_114e90:
    // 0x114e90: 0x320f809  jalr        $t9
label_114e94:
    if (ctx->pc == 0x114E94u) {
        ctx->pc = 0x114E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E90u;
        // 0x114e94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114E98u;
        goto label_114e98;
    }
    ctx->pc = 0x114E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114E98u);
        ctx->pc = 0x114E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E90u;
        // 0x114e94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114E90u, 0x114E98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114E98u;
label_114e98:
    // 0x114e98: 0x10000002  b           . + 4 + (0x2 << 2)
label_114e9c:
    if (ctx->pc == 0x114E9Cu) {
        ctx->pc = 0x114E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E98u;
        // 0x114e9c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x114EA0u;
        goto label_114ea0;
    }
    ctx->pc = 0x114E98u;
    {
        const bool branch_taken_0x114e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E98u;
        // 0x114e9c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e98) {
            ctx->pc = 0x114EA4u;
            goto label_114ea4;
        }
    }
    ctx->pc = 0x114EA0u;
label_114ea0:
    // 0x114ea0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x114ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114ea4:
    // 0x114ea4: 0x10400336  beqz        $v0, . + 4 + (0x336 << 2)
label_114ea8:
    if (ctx->pc == 0x114EA8u) {
        ctx->pc = 0x114EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EA4u;
        // 0x114ea8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114EACu;
        goto label_114eac;
    }
    ctx->pc = 0x114EA4u;
    {
        const bool branch_taken_0x114ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EA4u;
        // 0x114ea8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ea4) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x114EACu;
label_114eac:
    // 0x114eac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_114eb0:
    // 0x114eb0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x114eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_114eb4:
    // 0x114eb4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x114eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_114eb8:
    // 0x114eb8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x114eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_114ebc:
    // 0x114ebc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x114ebcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114ec0:
    // 0x114ec0: 0xc045700  jal         func_115C00
label_114ec4:
    if (ctx->pc == 0x114EC4u) {
        ctx->pc = 0x114EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EC0u;
        // 0x114ec4: 0x240a0006  addiu       $t2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114EC8u;
        goto label_114ec8;
    }
    ctx->pc = 0x114EC0u;
    SET_GPR_U32(ctx, 31, 0x114EC8u);
    ctx->pc = 0x114EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114EC0u;
    // 0x114ec4: 0x240a0006  addiu       $t2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C00u, 0x114EC0u, 0x114EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114EC8u;
label_114ec8:
    // 0x114ec8: 0xae420278  sw          $v0, 0x278($s2)
    ctx->pc = 0x114ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 2));
label_114ecc:
    // 0x114ecc: 0x27a70128  addiu       $a3, $sp, 0x128
    ctx->pc = 0x114eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_114ed0:
    // 0x114ed0: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x114ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_114ed4:
    // 0x114ed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114ed8:
    // 0x114ed8: 0x9382829c  lbu         $v0, -0x7D64($gp)
    ctx->pc = 0x114ed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935196)));
label_114edc:
    // 0x114edc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x114edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114ee0:
    // 0x114ee0: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x114ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_114ee4:
    // 0x114ee4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114ee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114ee8:
    // 0x114ee8: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x114ee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_114eec:
    // 0x114eec: 0x320f809  jalr        $t9
label_114ef0:
    if (ctx->pc == 0x114EF0u) {
        ctx->pc = 0x114EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EECu;
        // 0x114ef0: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114EF4u;
        goto label_114ef4;
    }
    ctx->pc = 0x114EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114EF4u);
        ctx->pc = 0x114EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EECu;
        // 0x114ef0: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114EECu, 0x114EF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114EF4u;
label_114ef4:
    // 0x114ef4: 0x92460255  lbu         $a2, 0x255($s2)
    ctx->pc = 0x114ef4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_114ef8:
    // 0x114ef8: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x114ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_114efc:
    // 0x114efc: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x114efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_114f00:
    // 0x114f00: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x114f00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_114f04:
    // 0x114f04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x114f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_114f08:
    // 0x114f08: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x114f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_114f0c:
    // 0x114f0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x114f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114f10:
    // 0x114f10: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x114f10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_114f14:
    // 0x114f14: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x114f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_114f18:
    // 0x114f18: 0xa2440255  sb          $a0, 0x255($s2)
    ctx->pc = 0x114f18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 4));
label_114f1c:
    // 0x114f1c: 0xae430264  sw          $v1, 0x264($s2)
    ctx->pc = 0x114f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 612), GPR_U32(ctx, 3));
label_114f20:
    // 0x114f20: 0x8c23e4f8  lw          $v1, -0x1B08($at)
    ctx->pc = 0x114f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960376)));
label_114f24:
    // 0x114f24: 0xae430268  sw          $v1, 0x268($s2)
    ctx->pc = 0x114f24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 3));
label_114f28:
    // 0x114f28: 0xa2420284  sb          $v0, 0x284($s2)
    ctx->pc = 0x114f28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 644), (uint8_t)GPR_U32(ctx, 2));
label_114f2c:
    // 0x114f2c: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x114f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_114f30:
    // 0x114f30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_114f34:
    // 0x114f34: 0x10000312  b           . + 4 + (0x312 << 2)
label_114f38:
    if (ctx->pc == 0x114F38u) {
        ctx->pc = 0x114F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F34u;
        // 0x114f38: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114F3Cu;
        goto label_114f3c;
    }
    ctx->pc = 0x114F34u;
    {
        const bool branch_taken_0x114f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F34u;
        // 0x114f38: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f34) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x114F3Cu;
label_114f3c:
    // 0x114f3c: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x114f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_114f40:
    // 0x114f40: 0x90420086  lbu         $v0, 0x86($v0)
    ctx->pc = 0x114f40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_114f44:
    // 0x114f44: 0x1040030e  beqz        $v0, . + 4 + (0x30E << 2)
label_114f48:
    if (ctx->pc == 0x114F48u) {
        ctx->pc = 0x114F4Cu;
        goto label_114f4c;
    }
    ctx->pc = 0x114F44u;
    {
        const bool branch_taken_0x114f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114f44) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x114F4Cu;
label_114f4c:
    // 0x114f4c: 0x938282a0  lbu         $v0, -0x7D60($gp)
    ctx->pc = 0x114f4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935200)));
label_114f50:
    // 0x114f50: 0x27a3012c  addiu       $v1, $sp, 0x12C
    ctx->pc = 0x114f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
label_114f54:
    // 0x114f54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114f58:
    // 0x114f58: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114f58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114f5c:
    // 0x114f5c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114f5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114f60:
    // 0x114f60: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x114f60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_114f64:
    // 0x114f64: 0x320f809  jalr        $t9
label_114f68:
    if (ctx->pc == 0x114F68u) {
        ctx->pc = 0x114F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F64u;
        // 0x114f68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114F6Cu;
        goto label_114f6c;
    }
    ctx->pc = 0x114F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114F6Cu);
        ctx->pc = 0x114F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F64u;
        // 0x114f68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114F64u, 0x114F6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114F6Cu;
label_114f6c:
    // 0x114f6c: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x114f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_114f70:
    // 0x114f70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_114f74:
    // 0x114f74: 0x10000302  b           . + 4 + (0x302 << 2)
label_114f78:
    if (ctx->pc == 0x114F78u) {
        ctx->pc = 0x114F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F74u;
        // 0x114f78: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114F7Cu;
        goto label_114f7c;
    }
    ctx->pc = 0x114F74u;
    {
        const bool branch_taken_0x114f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F74u;
        // 0x114f78: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f74) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x114F7Cu;
label_114f7c:
    // 0x114f7c: 0x92440284  lbu         $a0, 0x284($s2)
    ctx->pc = 0x114f7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 644)));
label_114f80:
    // 0x114f80: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x114f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_114f84:
    // 0x114f84: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
label_114f88:
    if (ctx->pc == 0x114F88u) {
        ctx->pc = 0x114F8Cu;
        goto label_114f8c;
    }
    ctx->pc = 0x114F84u;
    {
        const bool branch_taken_0x114f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x114f84) {
            ctx->pc = 0x114FBCu;
            goto label_114fbc;
        }
    }
    ctx->pc = 0x114F8Cu;
label_114f8c:
    // 0x114f8c: 0xa2420284  sb          $v0, 0x284($s2)
    ctx->pc = 0x114f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 644), (uint8_t)GPR_U32(ctx, 2));
label_114f90:
    // 0x114f90: 0x27a80130  addiu       $t0, $sp, 0x130
    ctx->pc = 0x114f90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_114f94:
    // 0x114f94: 0x938782a4  lbu         $a3, -0x7D5C($gp)
    ctx->pc = 0x114f94u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935204)));
label_114f98:
    // 0x114f98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114f9c:
    // 0x114f9c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x114f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_114fa0:
    // 0x114fa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114fa4:
    // 0x114fa4: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x114fa4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_114fa8:
    // 0x114fa8: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x114fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
label_114fac:
    // 0x114fac: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114facu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114fb0:
    // 0x114fb0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x114fb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_114fb4:
    // 0x114fb4: 0x320f809  jalr        $t9
label_114fb8:
    if (ctx->pc == 0x114FB8u) {
        ctx->pc = 0x114FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FB4u;
        // 0x114fb8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114FBCu;
        goto label_114fbc;
    }
    ctx->pc = 0x114FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114FBCu);
        ctx->pc = 0x114FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FB4u;
        // 0x114fb8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114FB4u, 0x114FBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114FBCu;
label_114fbc:
    // 0x114fbc: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_114fc0:
    if (ctx->pc == 0x114FC0u) {
        ctx->pc = 0x114FC4u;
        goto label_114fc4;
    }
    ctx->pc = 0x114FBCu;
    {
        const bool branch_taken_0x114fbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x114fbc) {
            ctx->pc = 0x114FDCu;
            goto label_114fdc;
        }
    }
    ctx->pc = 0x114FC4u;
label_114fc4:
    // 0x114fc4: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x114fc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_114fc8:
    // 0x114fc8: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x114fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_114fcc:
    // 0x114fcc: 0x64030008  daddiu      $v1, $zero, 0x8
    ctx->pc = 0x114fccu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
label_114fd0:
    // 0x114fd0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x114fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_114fd4:
    // 0x114fd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x114fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_114fd8:
    // 0x114fd8: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x114fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
label_114fdc:
    // 0x114fdc: 0x8e420268  lw          $v0, 0x268($s2)
    ctx->pc = 0x114fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
label_114fe0:
    // 0x114fe0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x114fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_114fe4:
    // 0x114fe4: 0xae420268  sw          $v0, 0x268($s2)
    ctx->pc = 0x114fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 2));
label_114fe8:
    // 0x114fe8: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x114fe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_114fec:
    // 0x114fec: 0x2173c  dsll32      $v0, $v0, 28
    ctx->pc = 0x114fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 28));
label_114ff0:
    // 0x114ff0: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x114ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
label_114ff4:
    // 0x114ff4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_114ff8:
    if (ctx->pc == 0x114FF8u) {
        ctx->pc = 0x114FFCu;
        goto label_114ffc;
    }
    ctx->pc = 0x114FF4u;
    {
        const bool branch_taken_0x114ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114ff4) {
            ctx->pc = 0x115008u;
            goto label_115008;
        }
    }
    ctx->pc = 0x114FFCu;
label_114ffc:
    // 0x114ffc: 0x8e420268  lw          $v0, 0x268($s2)
    ctx->pc = 0x114ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
label_115000:
    // 0x115000: 0x44102df  bgez        $v0, . + 4 + (0x2DF << 2)
label_115004:
    if (ctx->pc == 0x115004u) {
        ctx->pc = 0x115008u;
        goto label_115008;
    }
    ctx->pc = 0x115000u;
    {
        const bool branch_taken_0x115000 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x115000) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x115008u;
label_115008:
    // 0x115008: 0x938282a8  lbu         $v0, -0x7D58($gp)
    ctx->pc = 0x115008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935208)));
label_11500c:
    // 0x11500c: 0x27a30134  addiu       $v1, $sp, 0x134
    ctx->pc = 0x11500cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_115010:
    // 0x115010: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115010u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_115014:
    // 0x115014: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115018:
    // 0x115018: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x115018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_11501c:
    // 0x11501c: 0x320f809  jalr        $t9
label_115020:
    if (ctx->pc == 0x115020u) {
        ctx->pc = 0x115020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11501Cu;
        // 0x115020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115024u;
        goto label_115024;
    }
    ctx->pc = 0x11501Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115024u);
        ctx->pc = 0x115020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11501Cu;
        // 0x115020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11501Cu, 0x115024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115024u;
label_115024:
    // 0x115024: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x115024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_115028:
    // 0x115028: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x115028u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_11502c:
    // 0x11502c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x11502cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_115030:
    // 0x115030: 0x104002d3  beqz        $v0, . + 4 + (0x2D3 << 2)
label_115034:
    if (ctx->pc == 0x115034u) {
        ctx->pc = 0x115038u;
        goto label_115038;
    }
    ctx->pc = 0x115030u;
    {
        const bool branch_taken_0x115030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115030) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x115038u;
label_115038:
    // 0x115038: 0x938282ac  lbu         $v0, -0x7D54($gp)
    ctx->pc = 0x115038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935212)));
label_11503c:
    // 0x11503c: 0x27a30138  addiu       $v1, $sp, 0x138
    ctx->pc = 0x11503cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_115040:
    // 0x115040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115044:
    // 0x115044: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_115048:
    // 0x115048: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11504c:
    // 0x11504c: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x11504cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_115050:
    // 0x115050: 0x320f809  jalr        $t9
label_115054:
    if (ctx->pc == 0x115054u) {
        ctx->pc = 0x115054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115050u;
        // 0x115054: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115058u;
        goto label_115058;
    }
    ctx->pc = 0x115050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115058u);
        ctx->pc = 0x115054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115050u;
        // 0x115054: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115050u, 0x115058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115058u;
label_115058:
    // 0x115058: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x115058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_11505c:
    // 0x11505c: 0x2177c  dsll32      $v0, $v0, 29
    ctx->pc = 0x11505cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 29));
label_115060:
    // 0x115060: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x115060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
label_115064:
    // 0x115064: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_115068:
    if (ctx->pc == 0x115068u) {
        ctx->pc = 0x11506Cu;
        goto label_11506c;
    }
    ctx->pc = 0x115064u;
    {
        const bool branch_taken_0x115064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115064) {
            ctx->pc = 0x1150E4u;
            goto label_1150e4;
        }
    }
    ctx->pc = 0x11506Cu;
label_11506c:
    // 0x11506c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x11506cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_115070:
    // 0x115070: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_115074:
    // 0x115074: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x115074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_115078:
    // 0x115078: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x115078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_11507c:
    // 0x11507c: 0x320f809  jalr        $t9
label_115080:
    if (ctx->pc == 0x115080u) {
        ctx->pc = 0x115080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11507Cu;
        // 0x115080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115084u;
        goto label_115084;
    }
    ctx->pc = 0x11507Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115084u);
        ctx->pc = 0x115080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11507Cu;
        // 0x115080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11507Cu, 0x115084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115084u;
label_115084:
    // 0x115084: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x115084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_115088:
    // 0x115088: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x115088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11508c:
    // 0x11508c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11508cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115090:
    // 0x115090: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x115090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_115094:
    // 0x115094: 0x320f809  jalr        $t9
label_115098:
    if (ctx->pc == 0x115098u) {
        ctx->pc = 0x115098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115094u;
        // 0x115098: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11509Cu;
        goto label_11509c;
    }
    ctx->pc = 0x115094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11509Cu);
        ctx->pc = 0x115098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115094u;
        // 0x115098: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115094u, 0x11509Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11509Cu;
label_11509c:
    // 0x11509c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x11509cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1150a0:
    // 0x1150a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1150a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1150a4:
    // 0x1150a4: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x1150a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1150a8:
    // 0x1150a8: 0x320f809  jalr        $t9
label_1150ac:
    if (ctx->pc == 0x1150ACu) {
        ctx->pc = 0x1150ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150A8u;
        // 0x1150ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1150B0u;
        goto label_1150b0;
    }
    ctx->pc = 0x1150A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1150B0u);
        ctx->pc = 0x1150ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150A8u;
        // 0x1150ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1150A8u, 0x1150B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1150B0u;
label_1150b0:
    // 0x1150b0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1150b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1150b4:
    // 0x1150b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1150b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1150b8:
    // 0x1150b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1150b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1150bc:
    // 0x1150bc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1150bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1150c0:
    // 0x1150c0: 0x320f809  jalr        $t9
label_1150c4:
    if (ctx->pc == 0x1150C4u) {
        ctx->pc = 0x1150C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150C0u;
        // 0x1150c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1150C8u;
        goto label_1150c8;
    }
    ctx->pc = 0x1150C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1150C8u);
        ctx->pc = 0x1150C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150C0u;
        // 0x1150c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1150C0u, 0x1150C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1150C8u;
label_1150c8:
    // 0x1150c8: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x1150c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_1150cc:
    // 0x1150cc: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x1150ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_1150d0:
    // 0x1150d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1150d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1150d4:
    // 0x1150d4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1150d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_1150d8:
    // 0x1150d8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1150d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1150dc:
    // 0x1150dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1150dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1150e0:
    // 0x1150e0: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x1150e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
label_1150e4:
    // 0x1150e4: 0x938282b0  lbu         $v0, -0x7D50($gp)
    ctx->pc = 0x1150e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935216)));
label_1150e8:
    // 0x1150e8: 0x27a3013c  addiu       $v1, $sp, 0x13C
    ctx->pc = 0x1150e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_1150ec:
    // 0x1150ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1150ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1150f0:
    // 0x1150f0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1150f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1150f4:
    // 0x1150f4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1150f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1150f8:
    // 0x1150f8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1150f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1150fc:
    // 0x1150fc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1150fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_115100:
    // 0x115100: 0x320f809  jalr        $t9
label_115104:
    if (ctx->pc == 0x115104u) {
        ctx->pc = 0x115104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115100u;
        // 0x115104: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115108u;
        goto label_115108;
    }
    ctx->pc = 0x115100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115108u);
        ctx->pc = 0x115104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115100u;
        // 0x115104: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115100u, 0x115108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115108u;
label_115108:
    // 0x115108: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x115108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_11510c:
    // 0x11510c: 0x24430044  addiu       $v1, $v0, 0x44
    ctx->pc = 0x11510cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_115110:
    // 0x115110: 0x90420085  lbu         $v0, 0x85($v0)
    ctx->pc = 0x115110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 133)));
label_115114:
    // 0x115114: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_115118:
    if (ctx->pc == 0x115118u) {
        ctx->pc = 0x11511Cu;
        goto label_11511c;
    }
    ctx->pc = 0x115114u;
    {
        const bool branch_taken_0x115114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115114) {
            ctx->pc = 0x115128u;
            goto label_115128;
        }
    }
    ctx->pc = 0x11511Cu;
label_11511c:
    // 0x11511c: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x11511cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_115120:
    // 0x115120: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x115120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_115124:
    // 0x115124: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x115124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_115128:
    // 0x115128: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x115128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_11512c:
    // 0x11512c: 0x24430088  addiu       $v1, $v0, 0x88
    ctx->pc = 0x11512cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
label_115130:
    // 0x115130: 0x904200c9  lbu         $v0, 0xC9($v0)
    ctx->pc = 0x115130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 201)));
label_115134:
    // 0x115134: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_115138:
    if (ctx->pc == 0x115138u) {
        ctx->pc = 0x11513Cu;
        goto label_11513c;
    }
    ctx->pc = 0x115134u;
    {
        const bool branch_taken_0x115134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115134) {
            ctx->pc = 0x115148u;
            goto label_115148;
        }
    }
    ctx->pc = 0x11513Cu;
label_11513c:
    // 0x11513c: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x11513cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_115140:
    // 0x115140: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x115140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_115144:
    // 0x115144: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x115144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_115148:
    // 0x115148: 0x92470255  lbu         $a3, 0x255($s2)
    ctx->pc = 0x115148u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_11514c:
    // 0x11514c: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x11514cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_115150:
    // 0x115150: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x115150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_115154:
    // 0x115154: 0x64060002  daddiu      $a2, $zero, 0x2
    ctx->pc = 0x115154u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_115158:
    // 0x115158: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x115158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_11515c:
    // 0x11515c: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x11515cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_115160:
    // 0x115160: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x115160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_115164:
    // 0x115164: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x115164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
label_115168:
    // 0x115168: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x115168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_11516c:
    // 0x11516c: 0xa2450255  sb          $a1, 0x255($s2)
    ctx->pc = 0x11516cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 5));
label_115170:
    // 0x115170: 0x92450255  lbu         $a1, 0x255($s2)
    ctx->pc = 0x115170u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_115174:
    // 0x115174: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x115174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_115178:
    // 0x115178: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x115178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_11517c:
    // 0x11517c: 0xa2430255  sb          $v1, 0x255($s2)
    ctx->pc = 0x11517cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 3));
label_115180:
    // 0x115180: 0xae42026c  sw          $v0, 0x26C($s2)
    ctx->pc = 0x115180u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 620), GPR_U32(ctx, 2));
label_115184:
    // 0x115184: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x115184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_115188:
    // 0x115188: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x115188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_11518c:
    // 0x11518c: 0x1000027c  b           . + 4 + (0x27C << 2)
label_115190:
    if (ctx->pc == 0x115190u) {
        ctx->pc = 0x115190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11518Cu;
        // 0x115190: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115194u;
        goto label_115194;
    }
    ctx->pc = 0x11518Cu;
    {
        const bool branch_taken_0x11518c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11518Cu;
        // 0x115190: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11518c) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x115194u;
label_115194:
    // 0x115194: 0x938282b4  lbu         $v0, -0x7D4C($gp)
    ctx->pc = 0x115194u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935220)));
label_115198:
    // 0x115198: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x115198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_11519c:
    // 0x11519c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x11519cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1151a0:
    // 0x1151a0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1151a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1151a4:
    // 0x1151a4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1151a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1151a8:
    // 0x1151a8: 0x320f809  jalr        $t9
label_1151ac:
    if (ctx->pc == 0x1151ACu) {
        ctx->pc = 0x1151ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151A8u;
        // 0x1151ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1151B0u;
        goto label_1151b0;
    }
    ctx->pc = 0x1151A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1151B0u);
        ctx->pc = 0x1151ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151A8u;
        // 0x1151ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1151A8u, 0x1151B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1151B0u;
label_1151b0:
    // 0x1151b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1151b4:
    if (ctx->pc == 0x1151B4u) {
        ctx->pc = 0x1151B8u;
        goto label_1151b8;
    }
    ctx->pc = 0x1151B0u;
    {
        const bool branch_taken_0x1151b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1151b0) {
            ctx->pc = 0x1151D8u;
            goto label_1151d8;
        }
    }
    ctx->pc = 0x1151B8u;
label_1151b8:
    // 0x1151b8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1151b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1151bc:
    // 0x1151bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1151bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1151c0:
    // 0x1151c0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1151c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1151c4:
    // 0x1151c4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1151c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1151c8:
    // 0x1151c8: 0x320f809  jalr        $t9
label_1151cc:
    if (ctx->pc == 0x1151CCu) {
        ctx->pc = 0x1151CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151C8u;
        // 0x1151cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1151D0u;
        goto label_1151d0;
    }
    ctx->pc = 0x1151C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1151D0u);
        ctx->pc = 0x1151CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151C8u;
        // 0x1151cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1151C8u, 0x1151D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1151D0u;
label_1151d0:
    // 0x1151d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1151d4:
    if (ctx->pc == 0x1151D4u) {
        ctx->pc = 0x1151D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151D0u;
        // 0x1151d4: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1151D8u;
        goto label_1151d8;
    }
    ctx->pc = 0x1151D0u;
    {
        const bool branch_taken_0x1151d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1151D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151D0u;
        // 0x1151d4: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151d0) {
            ctx->pc = 0x1151DCu;
            goto label_1151dc;
        }
    }
    ctx->pc = 0x1151D8u;
label_1151d8:
    // 0x1151d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1151d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1151dc:
    // 0x1151dc: 0x10400268  beqz        $v0, . + 4 + (0x268 << 2)
label_1151e0:
    if (ctx->pc == 0x1151E0u) {
        ctx->pc = 0x1151E4u;
        goto label_1151e4;
    }
    ctx->pc = 0x1151DCu;
    {
        const bool branch_taken_0x1151dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1151dc) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x1151E4u;
label_1151e4:
    // 0x1151e4: 0x938282b8  lbu         $v0, -0x7D48($gp)
    ctx->pc = 0x1151e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935224)));
label_1151e8:
    // 0x1151e8: 0x27a30144  addiu       $v1, $sp, 0x144
    ctx->pc = 0x1151e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_1151ec:
    // 0x1151ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1151ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1151f0:
    // 0x1151f0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1151f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1151f4:
    // 0x1151f4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1151f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1151f8:
    // 0x1151f8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1151f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1151fc:
    // 0x1151fc: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x1151fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_115200:
    // 0x115200: 0x320f809  jalr        $t9
label_115204:
    if (ctx->pc == 0x115204u) {
        ctx->pc = 0x115204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115200u;
        // 0x115204: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115208u;
        goto label_115208;
    }
    ctx->pc = 0x115200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115208u);
        ctx->pc = 0x115204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115200u;
        // 0x115204: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115200u, 0x115208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115208u;
label_115208:
    // 0x115208: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11520c:
    // 0x11520c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11520cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115210:
    // 0x115210: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x115210u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_115214:
    // 0x115214: 0x320f809  jalr        $t9
label_115218:
    if (ctx->pc == 0x115218u) {
        ctx->pc = 0x115218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115214u;
        // 0x115218: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11521Cu;
        goto label_11521c;
    }
    ctx->pc = 0x115214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11521Cu);
        ctx->pc = 0x115218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115214u;
        // 0x115218: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115214u, 0x11521Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11521Cu;
label_11521c:
    // 0x11521c: 0x938282bc  lbu         $v0, -0x7D44($gp)
    ctx->pc = 0x11521cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935228)));
label_115220:
    // 0x115220: 0x27a30148  addiu       $v1, $sp, 0x148
    ctx->pc = 0x115220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_115224:
    // 0x115224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115228:
    // 0x115228: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_11522c:
    // 0x11522c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x11522cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115230:
    // 0x115230: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x115230u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_115234:
    // 0x115234: 0x320f809  jalr        $t9
label_115238:
    if (ctx->pc == 0x115238u) {
        ctx->pc = 0x115238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115234u;
        // 0x115238: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11523Cu;
        goto label_11523c;
    }
    ctx->pc = 0x115234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11523Cu);
        ctx->pc = 0x115238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115234u;
        // 0x115238: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115234u, 0x11523Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11523Cu;
label_11523c:
    // 0x11523c: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x11523cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_115240:
    // 0x115240: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x115240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_115244:
    // 0x115244: 0x1000024e  b           . + 4 + (0x24E << 2)
label_115248:
    if (ctx->pc == 0x115248u) {
        ctx->pc = 0x115248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115244u;
        // 0x115248: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11524Cu;
        goto label_11524c;
    }
    ctx->pc = 0x115244u;
    {
        const bool branch_taken_0x115244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115244u;
        // 0x115248: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115244) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x11524Cu;
label_11524c:
    // 0x11524c: 0x938282c0  lbu         $v0, -0x7D40($gp)
    ctx->pc = 0x11524cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935232)));
label_115250:
    // 0x115250: 0x27a3014c  addiu       $v1, $sp, 0x14C
    ctx->pc = 0x115250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_115254:
    // 0x115254: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115254u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_115258:
    // 0x115258: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11525c:
    // 0x11525c: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x11525cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_115260:
    // 0x115260: 0x320f809  jalr        $t9
label_115264:
    if (ctx->pc == 0x115264u) {
        ctx->pc = 0x115264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115260u;
        // 0x115264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115268u;
        goto label_115268;
    }
    ctx->pc = 0x115260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115268u);
        ctx->pc = 0x115264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115260u;
        // 0x115264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115260u, 0x115268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115268u;
label_115268:
    // 0x115268: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_11526c:
    if (ctx->pc == 0x11526Cu) {
        ctx->pc = 0x115270u;
        goto label_115270;
    }
    ctx->pc = 0x115268u;
    {
        const bool branch_taken_0x115268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115268) {
            ctx->pc = 0x115290u;
            goto label_115290;
        }
    }
    ctx->pc = 0x115270u;
label_115270:
    // 0x115270: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115274:
    // 0x115274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115278:
    // 0x115278: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x115278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_11527c:
    // 0x11527c: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x11527cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_115280:
    // 0x115280: 0x320f809  jalr        $t9
label_115284:
    if (ctx->pc == 0x115284u) {
        ctx->pc = 0x115284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115280u;
        // 0x115284: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115288u;
        goto label_115288;
    }
    ctx->pc = 0x115280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115288u);
        ctx->pc = 0x115284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115280u;
        // 0x115284: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115280u, 0x115288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115288u;
label_115288:
    // 0x115288: 0x10000002  b           . + 4 + (0x2 << 2)
label_11528c:
    if (ctx->pc == 0x11528Cu) {
        ctx->pc = 0x11528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115288u;
        // 0x11528c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x115290u;
        goto label_115290;
    }
    ctx->pc = 0x115288u;
    {
        const bool branch_taken_0x115288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115288u;
        // 0x11528c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115288) {
            ctx->pc = 0x115294u;
            goto label_115294;
        }
    }
    ctx->pc = 0x115290u;
label_115290:
    // 0x115290: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x115290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115294:
    // 0x115294: 0x1040023a  beqz        $v0, . + 4 + (0x23A << 2)
label_115298:
    if (ctx->pc == 0x115298u) {
        ctx->pc = 0x11529Cu;
        goto label_11529c;
    }
    ctx->pc = 0x115294u;
    {
        const bool branch_taken_0x115294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115294) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x11529Cu;
label_11529c:
    // 0x11529c: 0x938282c4  lbu         $v0, -0x7D3C($gp)
    ctx->pc = 0x11529cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935236)));
label_1152a0:
    // 0x1152a0: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x1152a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1152a4:
    // 0x1152a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1152a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1152a8:
    // 0x1152a8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1152a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1152ac:
    // 0x1152ac: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1152acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1152b0:
    // 0x1152b0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1152b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1152b4:
    // 0x1152b4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1152b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1152b8:
    // 0x1152b8: 0x320f809  jalr        $t9
label_1152bc:
    if (ctx->pc == 0x1152BCu) {
        ctx->pc = 0x1152BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152B8u;
        // 0x1152bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1152C0u;
        goto label_1152c0;
    }
    ctx->pc = 0x1152B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1152C0u);
        ctx->pc = 0x1152BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152B8u;
        // 0x1152bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1152B8u, 0x1152C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1152C0u;
label_1152c0:
    // 0x1152c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1152c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1152c4:
    // 0x1152c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1152c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1152c8:
    // 0x1152c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1152c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1152cc:
    // 0x1152cc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1152ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1152d0:
    // 0x1152d0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1152d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1152d4:
    // 0x1152d4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1152d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1152d8:
    // 0x1152d8: 0xc045700  jal         func_115C00
label_1152dc:
    if (ctx->pc == 0x1152DCu) {
        ctx->pc = 0x1152DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152D8u;
        // 0x1152dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1152E0u;
        goto label_1152e0;
    }
    ctx->pc = 0x1152D8u;
    SET_GPR_U32(ctx, 31, 0x1152E0u);
    ctx->pc = 0x1152DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1152D8u;
    // 0x1152dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C00u, 0x1152D8u, 0x1152E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1152E0u;
label_1152e0:
    // 0x1152e0: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x1152e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_1152e4:
    // 0x1152e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1152e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1152e8:
    // 0x1152e8: 0x10000225  b           . + 4 + (0x225 << 2)
label_1152ec:
    if (ctx->pc == 0x1152ECu) {
        ctx->pc = 0x1152ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152E8u;
        // 0x1152ec: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1152F0u;
        goto label_1152f0;
    }
    ctx->pc = 0x1152E8u;
    {
        const bool branch_taken_0x1152e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1152ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152E8u;
        // 0x1152ec: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152e8) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x1152F0u;
label_1152f0:
    // 0x1152f0: 0x938282c8  lbu         $v0, -0x7D38($gp)
    ctx->pc = 0x1152f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935240)));
label_1152f4:
    // 0x1152f4: 0x27a30154  addiu       $v1, $sp, 0x154
    ctx->pc = 0x1152f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_1152f8:
    // 0x1152f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1152f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1152fc:
    // 0x1152fc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1152fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_115300:
    // 0x115300: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115304:
    // 0x115304: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x115304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_115308:
    // 0x115308: 0x320f809  jalr        $t9
label_11530c:
    if (ctx->pc == 0x11530Cu) {
        ctx->pc = 0x11530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115308u;
        // 0x11530c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115310u;
        goto label_115310;
    }
    ctx->pc = 0x115308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115310u);
        ctx->pc = 0x11530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115308u;
        // 0x11530c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115308u, 0x115310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115310u;
label_115310:
    // 0x115310: 0x938282cc  lbu         $v0, -0x7D34($gp)
    ctx->pc = 0x115310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935244)));
label_115314:
    // 0x115314: 0x27a30158  addiu       $v1, $sp, 0x158
    ctx->pc = 0x115314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_115318:
    // 0x115318: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115318u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_11531c:
    // 0x11531c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x11531cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115320:
    // 0x115320: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x115320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_115324:
    // 0x115324: 0x320f809  jalr        $t9
label_115328:
    if (ctx->pc == 0x115328u) {
        ctx->pc = 0x115328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115324u;
        // 0x115328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11532Cu;
        goto label_11532c;
    }
    ctx->pc = 0x115324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11532Cu);
        ctx->pc = 0x115328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115324u;
        // 0x115328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115324u, 0x11532Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11532Cu;
label_11532c:
    // 0x11532c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_115330:
    if (ctx->pc == 0x115330u) {
        ctx->pc = 0x115334u;
        goto label_115334;
    }
    ctx->pc = 0x11532Cu;
    {
        const bool branch_taken_0x11532c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11532c) {
            ctx->pc = 0x115354u;
            goto label_115354;
        }
    }
    ctx->pc = 0x115334u;
label_115334:
    // 0x115334: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115338:
    // 0x115338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11533c:
    // 0x11533c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11533cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115340:
    // 0x115340: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x115340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_115344:
    // 0x115344: 0x320f809  jalr        $t9
label_115348:
    if (ctx->pc == 0x115348u) {
        ctx->pc = 0x115348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115344u;
        // 0x115348: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11534Cu;
        goto label_11534c;
    }
    ctx->pc = 0x115344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11534Cu);
        ctx->pc = 0x115348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115344u;
        // 0x115348: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115344u, 0x11534Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11534Cu;
label_11534c:
    // 0x11534c: 0x10000002  b           . + 4 + (0x2 << 2)
label_115350:
    if (ctx->pc == 0x115350u) {
        ctx->pc = 0x115350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11534Cu;
        // 0x115350: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x115354u;
        goto label_115354;
    }
    ctx->pc = 0x11534Cu;
    {
        const bool branch_taken_0x11534c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11534Cu;
        // 0x115350: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11534c) {
            ctx->pc = 0x115358u;
            goto label_115358;
        }
    }
    ctx->pc = 0x115354u;
label_115354:
    // 0x115354: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x115354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115358:
    // 0x115358: 0x10400209  beqz        $v0, . + 4 + (0x209 << 2)
label_11535c:
    if (ctx->pc == 0x11535Cu) {
        ctx->pc = 0x115360u;
        goto label_115360;
    }
    ctx->pc = 0x115358u;
    {
        const bool branch_taken_0x115358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115358) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x115360u;
label_115360:
    // 0x115360: 0x8e430274  lw          $v1, 0x274($s2)
    ctx->pc = 0x115360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 628)));
label_115364:
    // 0x115364: 0x8e42026c  lw          $v0, 0x26C($s2)
    ctx->pc = 0x115364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
label_115368:
    // 0x115368: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_11536c:
    if (ctx->pc == 0x11536Cu) {
        ctx->pc = 0x11536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115368u;
        // 0x11536c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115370u;
        goto label_115370;
    }
    ctx->pc = 0x115368u;
    {
        const bool branch_taken_0x115368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115368u;
        // 0x11536c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115368) {
            ctx->pc = 0x1153B8u;
            goto label_1153b8;
        }
    }
    ctx->pc = 0x115370u;
label_115370:
    // 0x115370: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x115370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_115374:
    // 0x115374: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x115374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_115378:
    // 0x115378: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x115378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_11537c:
    // 0x11537c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x11537cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_115380:
    // 0x115380: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x115380u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115384:
    // 0x115384: 0xc045700  jal         func_115C00
label_115388:
    if (ctx->pc == 0x115388u) {
        ctx->pc = 0x115388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115384u;
        // 0x115388: 0x240a0006  addiu       $t2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11538Cu;
        goto label_11538c;
    }
    ctx->pc = 0x115384u;
    SET_GPR_U32(ctx, 31, 0x11538Cu);
    ctx->pc = 0x115388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115384u;
    // 0x115388: 0x240a0006  addiu       $t2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C00u, 0x115384u, 0x11538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11538Cu;
label_11538c:
    // 0x11538c: 0xae420278  sw          $v0, 0x278($s2)
    ctx->pc = 0x11538cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 2));
label_115390:
    // 0x115390: 0x27a7015c  addiu       $a3, $sp, 0x15C
    ctx->pc = 0x115390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_115394:
    // 0x115394: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x115394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_115398:
    // 0x115398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11539c:
    // 0x11539c: 0x938282d0  lbu         $v0, -0x7D30($gp)
    ctx->pc = 0x11539cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_1153a0:
    // 0x1153a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1153a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1153a4:
    // 0x1153a4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x1153a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_1153a8:
    // 0x1153a8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1153a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1153ac:
    // 0x1153ac: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x1153acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_1153b0:
    // 0x1153b0: 0x320f809  jalr        $t9
label_1153b4:
    if (ctx->pc == 0x1153B4u) {
        ctx->pc = 0x1153B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153B0u;
        // 0x1153b4: 0x24650008  addiu       $a1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1153B8u;
        goto label_1153b8;
    }
    ctx->pc = 0x1153B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1153B8u);
        ctx->pc = 0x1153B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153B0u;
        // 0x1153b4: 0x24650008  addiu       $a1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1153B0u, 0x1153B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1153B8u;
label_1153b8:
    // 0x1153b8: 0x92450255  lbu         $a1, 0x255($s2)
    ctx->pc = 0x1153b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_1153bc:
    // 0x1153bc: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x1153bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_1153c0:
    // 0x1153c0: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1153c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1153c4:
    // 0x1153c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1153c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1153c8:
    // 0x1153c8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1153c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1153cc:
    // 0x1153cc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1153ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_1153d0:
    // 0x1153d0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1153d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1153d4:
    // 0x1153d4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1153d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1153d8:
    // 0x1153d8: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x1153d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
label_1153dc:
    // 0x1153dc: 0xae430264  sw          $v1, 0x264($s2)
    ctx->pc = 0x1153dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 612), GPR_U32(ctx, 3));
label_1153e0:
    // 0x1153e0: 0x8c22e4f8  lw          $v0, -0x1B08($at)
    ctx->pc = 0x1153e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960376)));
label_1153e4:
    // 0x1153e4: 0xae420268  sw          $v0, 0x268($s2)
    ctx->pc = 0x1153e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 2));
label_1153e8:
    // 0x1153e8: 0xa2430284  sb          $v1, 0x284($s2)
    ctx->pc = 0x1153e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 644), (uint8_t)GPR_U32(ctx, 3));
label_1153ec:
    // 0x1153ec: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x1153ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_1153f0:
    // 0x1153f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1153f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1153f4:
    // 0x1153f4: 0x100001e2  b           . + 4 + (0x1E2 << 2)
label_1153f8:
    if (ctx->pc == 0x1153F8u) {
        ctx->pc = 0x1153F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153F4u;
        // 0x1153f8: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1153FCu;
        goto label_1153fc;
    }
    ctx->pc = 0x1153F4u;
    {
        const bool branch_taken_0x1153f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153F4u;
        // 0x1153f8: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153f4) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x1153FCu;
label_1153fc:
    // 0x1153fc: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x1153fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_115400:
    // 0x115400: 0x90420086  lbu         $v0, 0x86($v0)
    ctx->pc = 0x115400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_115404:
    // 0x115404: 0x104001de  beqz        $v0, . + 4 + (0x1DE << 2)
label_115408:
    if (ctx->pc == 0x115408u) {
        ctx->pc = 0x11540Cu;
        goto label_11540c;
    }
    ctx->pc = 0x115404u;
    {
        const bool branch_taken_0x115404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115404) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x11540Cu;
label_11540c:
    // 0x11540c: 0x938282d4  lbu         $v0, -0x7D2C($gp)
    ctx->pc = 0x11540cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935252)));
label_115410:
    // 0x115410: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x115410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_115414:
    // 0x115414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115418:
    // 0x115418: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115418u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_11541c:
    // 0x11541c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x11541cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115420:
    // 0x115420: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x115420u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_115424:
    // 0x115424: 0x320f809  jalr        $t9
label_115428:
    if (ctx->pc == 0x115428u) {
        ctx->pc = 0x115428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115424u;
        // 0x115428: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11542Cu;
        goto label_11542c;
    }
    ctx->pc = 0x115424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11542Cu);
        ctx->pc = 0x115428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115424u;
        // 0x115428: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115424u, 0x11542Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11542Cu;
label_11542c:
    // 0x11542c: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x11542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_115430:
    // 0x115430: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x115430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_115434:
    // 0x115434: 0x100001d2  b           . + 4 + (0x1D2 << 2)
label_115438:
    if (ctx->pc == 0x115438u) {
        ctx->pc = 0x115438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115434u;
        // 0x115438: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11543Cu;
        goto label_11543c;
    }
    ctx->pc = 0x115434u;
    {
        const bool branch_taken_0x115434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115434u;
        // 0x115438: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115434) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x11543Cu;
label_11543c:
    // 0x11543c: 0x92440284  lbu         $a0, 0x284($s2)
    ctx->pc = 0x11543cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 644)));
label_115440:
    // 0x115440: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x115440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_115444:
    // 0x115444: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
label_115448:
    if (ctx->pc == 0x115448u) {
        ctx->pc = 0x11544Cu;
        goto label_11544c;
    }
    ctx->pc = 0x115444u;
    {
        const bool branch_taken_0x115444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x115444) {
            ctx->pc = 0x11547Cu;
            goto label_11547c;
        }
    }
    ctx->pc = 0x11544Cu;
label_11544c:
    // 0x11544c: 0xa2420284  sb          $v0, 0x284($s2)
    ctx->pc = 0x11544cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 644), (uint8_t)GPR_U32(ctx, 2));
label_115450:
    // 0x115450: 0x27a80164  addiu       $t0, $sp, 0x164
    ctx->pc = 0x115450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
label_115454:
    // 0x115454: 0x938782d8  lbu         $a3, -0x7D28($gp)
    ctx->pc = 0x115454u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935256)));
label_115458:
    // 0x115458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x115458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11545c:
    // 0x11545c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x11545cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_115460:
    // 0x115460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115464:
    // 0x115464: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x115464u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_115468:
    // 0x115468: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x115468u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
label_11546c:
    // 0x11546c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x11546cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115470:
    // 0x115470: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x115470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_115474:
    // 0x115474: 0x320f809  jalr        $t9
label_115478:
    if (ctx->pc == 0x115478u) {
        ctx->pc = 0x115478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115474u;
        // 0x115478: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11547Cu;
        goto label_11547c;
    }
    ctx->pc = 0x115474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11547Cu);
        ctx->pc = 0x115478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115474u;
        // 0x115478: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115474u, 0x11547Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11547Cu;
label_11547c:
    // 0x11547c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_115480:
    if (ctx->pc == 0x115480u) {
        ctx->pc = 0x115484u;
        goto label_115484;
    }
    ctx->pc = 0x11547Cu;
    {
        const bool branch_taken_0x11547c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11547c) {
            ctx->pc = 0x11549Cu;
            goto label_11549c;
        }
    }
    ctx->pc = 0x115484u;
label_115484:
    // 0x115484: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x115484u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_115488:
    // 0x115488: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x115488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_11548c:
    // 0x11548c: 0x64030008  daddiu      $v1, $zero, 0x8
    ctx->pc = 0x11548cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
label_115490:
    // 0x115490: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x115490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_115494:
    // 0x115494: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x115494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_115498:
    // 0x115498: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x115498u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
label_11549c:
    // 0x11549c: 0x8e420268  lw          $v0, 0x268($s2)
    ctx->pc = 0x11549cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
label_1154a0:
    // 0x1154a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1154a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1154a4:
    // 0x1154a4: 0xae420268  sw          $v0, 0x268($s2)
    ctx->pc = 0x1154a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 2));
label_1154a8:
    // 0x1154a8: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x1154a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_1154ac:
    // 0x1154ac: 0x2173c  dsll32      $v0, $v0, 28
    ctx->pc = 0x1154acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 28));
label_1154b0:
    // 0x1154b0: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x1154b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
label_1154b4:
    // 0x1154b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1154b8:
    if (ctx->pc == 0x1154B8u) {
        ctx->pc = 0x1154BCu;
        goto label_1154bc;
    }
    ctx->pc = 0x1154B4u;
    {
        const bool branch_taken_0x1154b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1154b4) {
            ctx->pc = 0x1154C8u;
            goto label_1154c8;
        }
    }
    ctx->pc = 0x1154BCu;
label_1154bc:
    // 0x1154bc: 0x8e420268  lw          $v0, 0x268($s2)
    ctx->pc = 0x1154bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
label_1154c0:
    // 0x1154c0: 0x44101af  bgez        $v0, . + 4 + (0x1AF << 2)
label_1154c4:
    if (ctx->pc == 0x1154C4u) {
        ctx->pc = 0x1154C8u;
        goto label_1154c8;
    }
    ctx->pc = 0x1154C0u;
    {
        const bool branch_taken_0x1154c0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1154c0) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x1154C8u;
label_1154c8:
    // 0x1154c8: 0x938282dc  lbu         $v0, -0x7D24($gp)
    ctx->pc = 0x1154c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935260)));
label_1154cc:
    // 0x1154cc: 0x27a30168  addiu       $v1, $sp, 0x168
    ctx->pc = 0x1154ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_1154d0:
    // 0x1154d0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1154d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1154d4:
    // 0x1154d4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1154d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1154d8:
    // 0x1154d8: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x1154d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_1154dc:
    // 0x1154dc: 0x320f809  jalr        $t9
label_1154e0:
    if (ctx->pc == 0x1154E0u) {
        ctx->pc = 0x1154E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154DCu;
        // 0x1154e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1154E4u;
        goto label_1154e4;
    }
    ctx->pc = 0x1154DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1154E4u);
        ctx->pc = 0x1154E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154DCu;
        // 0x1154e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1154DCu, 0x1154E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1154E4u;
label_1154e4:
    // 0x1154e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1154e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1154e8:
    // 0x1154e8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1154e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_1154ec:
    // 0x1154ec: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1154ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1154f0:
    // 0x1154f0: 0x104001a3  beqz        $v0, . + 4 + (0x1A3 << 2)
label_1154f4:
    if (ctx->pc == 0x1154F4u) {
        ctx->pc = 0x1154F8u;
        goto label_1154f8;
    }
    ctx->pc = 0x1154F0u;
    {
        const bool branch_taken_0x1154f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1154f0) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x1154F8u;
label_1154f8:
    // 0x1154f8: 0x938282e0  lbu         $v0, -0x7D20($gp)
    ctx->pc = 0x1154f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935264)));
label_1154fc:
    // 0x1154fc: 0x27a3016c  addiu       $v1, $sp, 0x16C
    ctx->pc = 0x1154fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
label_115500:
    // 0x115500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115504:
    // 0x115504: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115504u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_115508:
    // 0x115508: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11550c:
    // 0x11550c: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x11550cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_115510:
    // 0x115510: 0x320f809  jalr        $t9
label_115514:
    if (ctx->pc == 0x115514u) {
        ctx->pc = 0x115514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115510u;
        // 0x115514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115518u;
        goto label_115518;
    }
    ctx->pc = 0x115510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115518u);
        ctx->pc = 0x115514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115510u;
        // 0x115514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115510u, 0x115518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115518u;
label_115518:
    // 0x115518: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x115518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_11551c:
    // 0x11551c: 0x2177c  dsll32      $v0, $v0, 29
    ctx->pc = 0x11551cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 29));
label_115520:
    // 0x115520: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x115520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
label_115524:
    // 0x115524: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_115528:
    if (ctx->pc == 0x115528u) {
        ctx->pc = 0x11552Cu;
        goto label_11552c;
    }
    ctx->pc = 0x115524u;
    {
        const bool branch_taken_0x115524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115524) {
            ctx->pc = 0x1155A4u;
            goto label_1155a4;
        }
    }
    ctx->pc = 0x11552Cu;
label_11552c:
    // 0x11552c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x11552cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_115530:
    // 0x115530: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_115534:
    // 0x115534: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x115534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_115538:
    // 0x115538: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x115538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_11553c:
    // 0x11553c: 0x320f809  jalr        $t9
label_115540:
    if (ctx->pc == 0x115540u) {
        ctx->pc = 0x115540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11553Cu;
        // 0x115540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115544u;
        goto label_115544;
    }
    ctx->pc = 0x11553Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115544u);
        ctx->pc = 0x115540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11553Cu;
        // 0x115540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11553Cu, 0x115544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115544u;
label_115544:
    // 0x115544: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x115544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_115548:
    // 0x115548: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x115548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11554c:
    // 0x11554c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11554cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115550:
    // 0x115550: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x115550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_115554:
    // 0x115554: 0x320f809  jalr        $t9
label_115558:
    if (ctx->pc == 0x115558u) {
        ctx->pc = 0x115558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115554u;
        // 0x115558: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11555Cu;
        goto label_11555c;
    }
    ctx->pc = 0x115554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11555Cu);
        ctx->pc = 0x115558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115554u;
        // 0x115558: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115554u, 0x11555Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11555Cu;
label_11555c:
    // 0x11555c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x11555cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_115560:
    // 0x115560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_115564:
    // 0x115564: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x115564u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_115568:
    // 0x115568: 0x320f809  jalr        $t9
label_11556c:
    if (ctx->pc == 0x11556Cu) {
        ctx->pc = 0x11556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115568u;
        // 0x11556c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115570u;
        goto label_115570;
    }
    ctx->pc = 0x115568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115570u);
        ctx->pc = 0x11556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115568u;
        // 0x11556c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115568u, 0x115570u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115570u;
label_115570:
    // 0x115570: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x115570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_115574:
    // 0x115574: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x115574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_115578:
    // 0x115578: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x115578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11557c:
    // 0x11557c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x11557cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_115580:
    // 0x115580: 0x320f809  jalr        $t9
label_115584:
    if (ctx->pc == 0x115584u) {
        ctx->pc = 0x115584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115580u;
        // 0x115584: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115588u;
        goto label_115588;
    }
    ctx->pc = 0x115580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115588u);
        ctx->pc = 0x115584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115580u;
        // 0x115584: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115580u, 0x115588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115588u;
label_115588:
    // 0x115588: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x115588u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_11558c:
    // 0x11558c: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x11558cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_115590:
    // 0x115590: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x115590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_115594:
    // 0x115594: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x115594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_115598:
    // 0x115598: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x115598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_11559c:
    // 0x11559c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11559cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1155a0:
    // 0x1155a0: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x1155a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
label_1155a4:
    // 0x1155a4: 0x938282e4  lbu         $v0, -0x7D1C($gp)
    ctx->pc = 0x1155a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_1155a8:
    // 0x1155a8: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x1155a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1155ac:
    // 0x1155ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1155acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1155b0:
    // 0x1155b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1155b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1155b4:
    // 0x1155b4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1155b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1155b8:
    // 0x1155b8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1155b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1155bc:
    // 0x1155bc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1155bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1155c0:
    // 0x1155c0: 0x320f809  jalr        $t9
label_1155c4:
    if (ctx->pc == 0x1155C4u) {
        ctx->pc = 0x1155C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155C0u;
        // 0x1155c4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1155C8u;
        goto label_1155c8;
    }
    ctx->pc = 0x1155C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1155C8u);
        ctx->pc = 0x1155C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155C0u;
        // 0x1155c4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1155C0u, 0x1155C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1155C8u;
label_1155c8:
    // 0x1155c8: 0x92460255  lbu         $a2, 0x255($s2)
    ctx->pc = 0x1155c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_1155cc:
    // 0x1155cc: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x1155ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1155d0:
    // 0x1155d0: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x1155d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_1155d4:
    // 0x1155d4: 0x64050002  daddiu      $a1, $zero, 0x2
    ctx->pc = 0x1155d4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_1155d8:
    // 0x1155d8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1155d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1155dc:
    // 0x1155dc: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x1155dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_1155e0:
    // 0x1155e0: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1155e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_1155e4:
    // 0x1155e4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1155e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1155e8:
    // 0x1155e8: 0xa2440255  sb          $a0, 0x255($s2)
    ctx->pc = 0x1155e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 4));
label_1155ec:
    // 0x1155ec: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x1155ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_1155f0:
    // 0x1155f0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1155f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1155f4:
    // 0x1155f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1155f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1155f8:
    // 0x1155f8: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x1155f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
label_1155fc:
    // 0x1155fc: 0x8e430220  lw          $v1, 0x220($s2)
    ctx->pc = 0x1155fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_115600:
    // 0x115600: 0x90620041  lbu         $v0, 0x41($v1)
    ctx->pc = 0x115600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 65)));
label_115604:
    // 0x115604: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_115608:
    if (ctx->pc == 0x115608u) {
        ctx->pc = 0x11560Cu;
        goto label_11560c;
    }
    ctx->pc = 0x115604u;
    {
        const bool branch_taken_0x115604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115604) {
            ctx->pc = 0x115618u;
            goto label_115618;
        }
    }
    ctx->pc = 0x11560Cu;
label_11560c:
    // 0x11560c: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x11560cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_115610:
    // 0x115610: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x115610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_115614:
    // 0x115614: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x115614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_115618:
    // 0x115618: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x115618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_11561c:
    // 0x11561c: 0x24430088  addiu       $v1, $v0, 0x88
    ctx->pc = 0x11561cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
label_115620:
    // 0x115620: 0x904200c9  lbu         $v0, 0xC9($v0)
    ctx->pc = 0x115620u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 201)));
label_115624:
    // 0x115624: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_115628:
    if (ctx->pc == 0x115628u) {
        ctx->pc = 0x11562Cu;
        goto label_11562c;
    }
    ctx->pc = 0x115624u;
    {
        const bool branch_taken_0x115624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115624) {
            ctx->pc = 0x115638u;
            goto label_115638;
        }
    }
    ctx->pc = 0x11562Cu;
label_11562c:
    // 0x11562c: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x11562cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_115630:
    // 0x115630: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x115630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_115634:
    // 0x115634: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x115634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_115638:
    // 0x115638: 0xae40026c  sw          $zero, 0x26C($s2)
    ctx->pc = 0x115638u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 620), GPR_U32(ctx, 0));
label_11563c:
    // 0x11563c: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x11563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_115640:
    // 0x115640: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x115640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_115644:
    // 0x115644: 0x1000014e  b           . + 4 + (0x14E << 2)
label_115648:
    if (ctx->pc == 0x115648u) {
        ctx->pc = 0x115648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115644u;
        // 0x115648: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11564Cu;
        goto label_11564c;
    }
    ctx->pc = 0x115644u;
    {
        const bool branch_taken_0x115644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115644u;
        // 0x115648: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115644) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x11564Cu;
label_11564c:
    // 0x11564c: 0x938282e8  lbu         $v0, -0x7D18($gp)
    ctx->pc = 0x11564cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935272)));
label_115650:
    // 0x115650: 0x27a30174  addiu       $v1, $sp, 0x174
    ctx->pc = 0x115650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
label_115654:
    // 0x115654: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115654u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_115658:
    // 0x115658: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11565c:
    // 0x11565c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x11565cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_115660:
    // 0x115660: 0x320f809  jalr        $t9
label_115664:
    if (ctx->pc == 0x115664u) {
        ctx->pc = 0x115664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115660u;
        // 0x115664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115668u;
        goto label_115668;
    }
    ctx->pc = 0x115660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115668u);
        ctx->pc = 0x115664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115660u;
        // 0x115664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115660u, 0x115668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115668u;
label_115668:
    // 0x115668: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_11566c:
    if (ctx->pc == 0x11566Cu) {
        ctx->pc = 0x115670u;
        goto label_115670;
    }
    ctx->pc = 0x115668u;
    {
        const bool branch_taken_0x115668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115668) {
            ctx->pc = 0x115690u;
            goto label_115690;
        }
    }
    ctx->pc = 0x115670u;
label_115670:
    // 0x115670: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115674:
    // 0x115674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115678:
    // 0x115678: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x115678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11567c:
    // 0x11567c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x11567cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_115680:
    // 0x115680: 0x320f809  jalr        $t9
label_115684:
    if (ctx->pc == 0x115684u) {
        ctx->pc = 0x115684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115680u;
        // 0x115684: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115688u;
        goto label_115688;
    }
    ctx->pc = 0x115680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115688u);
        ctx->pc = 0x115684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115680u;
        // 0x115684: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115680u, 0x115688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115688u;
label_115688:
    // 0x115688: 0x10000002  b           . + 4 + (0x2 << 2)
label_11568c:
    if (ctx->pc == 0x11568Cu) {
        ctx->pc = 0x11568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115688u;
        // 0x11568c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x115690u;
        goto label_115690;
    }
    ctx->pc = 0x115688u;
    {
        const bool branch_taken_0x115688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115688u;
        // 0x11568c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115688) {
            ctx->pc = 0x115694u;
            goto label_115694;
        }
    }
    ctx->pc = 0x115690u;
label_115690:
    // 0x115690: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x115690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115694:
    // 0x115694: 0x1040013a  beqz        $v0, . + 4 + (0x13A << 2)
label_115698:
    if (ctx->pc == 0x115698u) {
        ctx->pc = 0x11569Cu;
        goto label_11569c;
    }
    ctx->pc = 0x115694u;
    {
        const bool branch_taken_0x115694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115694) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x11569Cu;
label_11569c:
    // 0x11569c: 0x938282ec  lbu         $v0, -0x7D14($gp)
    ctx->pc = 0x11569cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935276)));
label_1156a0:
    // 0x1156a0: 0x27a30178  addiu       $v1, $sp, 0x178
    ctx->pc = 0x1156a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_1156a4:
    // 0x1156a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1156a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1156a8:
    // 0x1156a8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1156a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1156ac:
    // 0x1156ac: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1156acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1156b0:
    // 0x1156b0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1156b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1156b4:
    // 0x1156b4: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x1156b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_1156b8:
    // 0x1156b8: 0x320f809  jalr        $t9
label_1156bc:
    if (ctx->pc == 0x1156BCu) {
        ctx->pc = 0x1156BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156B8u;
        // 0x1156bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1156C0u;
        goto label_1156c0;
    }
    ctx->pc = 0x1156B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1156C0u);
        ctx->pc = 0x1156BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156B8u;
        // 0x1156bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1156B8u, 0x1156C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1156C0u;
label_1156c0:
    // 0x1156c0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1156c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1156c4:
    // 0x1156c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1156c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1156c8:
    // 0x1156c8: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x1156c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_1156cc:
    // 0x1156cc: 0x320f809  jalr        $t9
label_1156d0:
    if (ctx->pc == 0x1156D0u) {
        ctx->pc = 0x1156D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156CCu;
        // 0x1156d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1156D4u;
        goto label_1156d4;
    }
    ctx->pc = 0x1156CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1156D4u);
        ctx->pc = 0x1156D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156CCu;
        // 0x1156d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1156CCu, 0x1156D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1156D4u;
label_1156d4:
    // 0x1156d4: 0x938282f0  lbu         $v0, -0x7D10($gp)
    ctx->pc = 0x1156d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_1156d8:
    // 0x1156d8: 0x27a3017c  addiu       $v1, $sp, 0x17C
    ctx->pc = 0x1156d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_1156dc:
    // 0x1156dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1156dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1156e0:
    // 0x1156e0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1156e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1156e4:
    // 0x1156e4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1156e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1156e8:
    // 0x1156e8: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x1156e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_1156ec:
    // 0x1156ec: 0x320f809  jalr        $t9
label_1156f0:
    if (ctx->pc == 0x1156F0u) {
        ctx->pc = 0x1156F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156ECu;
        // 0x1156f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1156F4u;
        goto label_1156f4;
    }
    ctx->pc = 0x1156ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1156F4u);
        ctx->pc = 0x1156F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156ECu;
        // 0x1156f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1156ECu, 0x1156F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1156F4u;
label_1156f4:
    // 0x1156f4: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x1156f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_1156f8:
    // 0x1156f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1156f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1156fc:
    // 0x1156fc: 0x10000120  b           . + 4 + (0x120 << 2)
label_115700:
    if (ctx->pc == 0x115700u) {
        ctx->pc = 0x115700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156FCu;
        // 0x115700: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115704u;
        goto label_115704;
    }
    ctx->pc = 0x1156FCu;
    {
        const bool branch_taken_0x1156fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156FCu;
        // 0x115700: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1156fc) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x115704u;
label_115704:
    // 0x115704: 0x938282f4  lbu         $v0, -0x7D0C($gp)
    ctx->pc = 0x115704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935284)));
label_115708:
    // 0x115708: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x115708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_11570c:
    // 0x11570c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x11570cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_115710:
    // 0x115710: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115714:
    // 0x115714: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x115714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_115718:
    // 0x115718: 0x320f809  jalr        $t9
label_11571c:
    if (ctx->pc == 0x11571Cu) {
        ctx->pc = 0x11571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115718u;
        // 0x11571c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115720u;
        goto label_115720;
    }
    ctx->pc = 0x115718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115720u);
        ctx->pc = 0x11571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115718u;
        // 0x11571c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115718u, 0x115720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115720u;
label_115720:
    // 0x115720: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_115724:
    if (ctx->pc == 0x115724u) {
        ctx->pc = 0x115728u;
        goto label_115728;
    }
    ctx->pc = 0x115720u;
    {
        const bool branch_taken_0x115720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115720) {
            ctx->pc = 0x115748u;
            goto label_115748;
        }
    }
    ctx->pc = 0x115728u;
label_115728:
    // 0x115728: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11572c:
    // 0x11572c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11572cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115730:
    // 0x115730: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x115730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115734:
    // 0x115734: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x115734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_115738:
    // 0x115738: 0x320f809  jalr        $t9
label_11573c:
    if (ctx->pc == 0x11573Cu) {
        ctx->pc = 0x11573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115738u;
        // 0x11573c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115740u;
        goto label_115740;
    }
    ctx->pc = 0x115738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115740u);
        ctx->pc = 0x11573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115738u;
        // 0x11573c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115738u, 0x115740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115740u;
label_115740:
    // 0x115740: 0x10000002  b           . + 4 + (0x2 << 2)
label_115744:
    if (ctx->pc == 0x115744u) {
        ctx->pc = 0x115744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115740u;
        // 0x115744: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x115748u;
        goto label_115748;
    }
    ctx->pc = 0x115740u;
    {
        const bool branch_taken_0x115740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115740u;
        // 0x115744: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115740) {
            ctx->pc = 0x11574Cu;
            goto label_11574c;
        }
    }
    ctx->pc = 0x115748u;
label_115748:
    // 0x115748: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x115748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11574c:
    // 0x11574c: 0x1040010c  beqz        $v0, . + 4 + (0x10C << 2)
label_115750:
    if (ctx->pc == 0x115750u) {
        ctx->pc = 0x115754u;
        goto label_115754;
    }
    ctx->pc = 0x11574Cu;
    {
        const bool branch_taken_0x11574c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11574c) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x115754u;
label_115754:
    // 0x115754: 0x938282f8  lbu         $v0, -0x7D08($gp)
    ctx->pc = 0x115754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935288)));
label_115758:
    // 0x115758: 0x27a30184  addiu       $v1, $sp, 0x184
    ctx->pc = 0x115758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
label_11575c:
    // 0x11575c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11575cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115760:
    // 0x115760: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x115760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_115764:
    // 0x115764: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115764u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_115768:
    // 0x115768: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11576c:
    // 0x11576c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x11576cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_115770:
    // 0x115770: 0x320f809  jalr        $t9
label_115774:
    if (ctx->pc == 0x115774u) {
        ctx->pc = 0x115774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115770u;
        // 0x115774: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115778u;
        goto label_115778;
    }
    ctx->pc = 0x115770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115778u);
        ctx->pc = 0x115774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115770u;
        // 0x115774: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115770u, 0x115778u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115778u;
label_115778:
    // 0x115778: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11577c:
    // 0x11577c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11577cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115780:
    // 0x115780: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x115780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_115784:
    // 0x115784: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x115784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_115788:
    // 0x115788: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x115788u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11578c:
    // 0x11578c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11578cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115790:
    // 0x115790: 0xc045700  jal         func_115C00
label_115794:
    if (ctx->pc == 0x115794u) {
        ctx->pc = 0x115794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115790u;
        // 0x115794: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115798u;
        goto label_115798;
    }
    ctx->pc = 0x115790u;
    SET_GPR_U32(ctx, 31, 0x115798u);
    ctx->pc = 0x115794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115790u;
    // 0x115794: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C00u, 0x115790u, 0x115798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115798u;
label_115798:
    // 0x115798: 0xae420278  sw          $v0, 0x278($s2)
    ctx->pc = 0x115798u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 2));
label_11579c:
    // 0x11579c: 0x27a30188  addiu       $v1, $sp, 0x188
    ctx->pc = 0x11579cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_1157a0:
    // 0x1157a0: 0x8e450278  lw          $a1, 0x278($s2)
    ctx->pc = 0x1157a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_1157a4:
    // 0x1157a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1157a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1157a8:
    // 0x1157a8: 0x938282fc  lbu         $v0, -0x7D04($gp)
    ctx->pc = 0x1157a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935292)));
label_1157ac:
    // 0x1157ac: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1157acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1157b0:
    // 0x1157b0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1157b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1157b4:
    // 0x1157b4: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x1157b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_1157b8:
    // 0x1157b8: 0x320f809  jalr        $t9
label_1157bc:
    if (ctx->pc == 0x1157BCu) {
        ctx->pc = 0x1157BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157B8u;
        // 0x1157bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1157C0u;
        goto label_1157c0;
    }
    ctx->pc = 0x1157B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1157C0u);
        ctx->pc = 0x1157BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157B8u;
        // 0x1157bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1157B8u, 0x1157C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1157C0u;
label_1157c0:
    // 0x1157c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1157c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1157c4:
    // 0x1157c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1157c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1157c8:
    // 0x1157c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1157c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1157cc:
    // 0x1157cc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1157ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1157d0:
    // 0x1157d0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1157d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1157d4:
    // 0x1157d4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1157d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1157d8:
    // 0x1157d8: 0xc045700  jal         func_115C00
label_1157dc:
    if (ctx->pc == 0x1157DCu) {
        ctx->pc = 0x1157DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157D8u;
        // 0x1157dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1157E0u;
        goto label_1157e0;
    }
    ctx->pc = 0x1157D8u;
    SET_GPR_U32(ctx, 31, 0x1157E0u);
    ctx->pc = 0x1157DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1157D8u;
    // 0x1157dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C00u, 0x1157D8u, 0x1157E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1157E0u;
label_1157e0:
    // 0x1157e0: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x1157e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_1157e4:
    // 0x1157e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1157e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1157e8:
    // 0x1157e8: 0x100000e5  b           . + 4 + (0xE5 << 2)
label_1157ec:
    if (ctx->pc == 0x1157ECu) {
        ctx->pc = 0x1157ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157E8u;
        // 0x1157ec: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1157F0u;
        goto label_1157f0;
    }
    ctx->pc = 0x1157E8u;
    {
        const bool branch_taken_0x1157e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1157ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157E8u;
        // 0x1157ec: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157e8) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x1157F0u;
label_1157f0:
    // 0x1157f0: 0x93828300  lbu         $v0, -0x7D00($gp)
    ctx->pc = 0x1157f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935296)));
label_1157f4:
    // 0x1157f4: 0x27a3018c  addiu       $v1, $sp, 0x18C
    ctx->pc = 0x1157f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_1157f8:
    // 0x1157f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1157f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1157fc:
    // 0x1157fc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1157fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_115800:
    // 0x115800: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115804:
    // 0x115804: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x115804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_115808:
    // 0x115808: 0x320f809  jalr        $t9
label_11580c:
    if (ctx->pc == 0x11580Cu) {
        ctx->pc = 0x11580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115808u;
        // 0x11580c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115810u;
        goto label_115810;
    }
    ctx->pc = 0x115808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115810u);
        ctx->pc = 0x11580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115808u;
        // 0x11580c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115808u, 0x115810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115810u;
label_115810:
    // 0x115810: 0x93828304  lbu         $v0, -0x7CFC($gp)
    ctx->pc = 0x115810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935300)));
label_115814:
    // 0x115814: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x115814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_115818:
    // 0x115818: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115818u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_11581c:
    // 0x11581c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x11581cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115820:
    // 0x115820: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x115820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_115824:
    // 0x115824: 0x320f809  jalr        $t9
label_115828:
    if (ctx->pc == 0x115828u) {
        ctx->pc = 0x115828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115824u;
        // 0x115828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11582Cu;
        goto label_11582c;
    }
    ctx->pc = 0x115824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11582Cu);
        ctx->pc = 0x115828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115824u;
        // 0x115828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115824u, 0x11582Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11582Cu;
label_11582c:
    // 0x11582c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_115830:
    if (ctx->pc == 0x115830u) {
        ctx->pc = 0x115834u;
        goto label_115834;
    }
    ctx->pc = 0x11582Cu;
    {
        const bool branch_taken_0x11582c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11582c) {
            ctx->pc = 0x115854u;
            goto label_115854;
        }
    }
    ctx->pc = 0x115834u;
label_115834:
    // 0x115834: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115838:
    // 0x115838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11583c:
    // 0x11583c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11583cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115840:
    // 0x115840: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x115840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_115844:
    // 0x115844: 0x320f809  jalr        $t9
label_115848:
    if (ctx->pc == 0x115848u) {
        ctx->pc = 0x115848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115844u;
        // 0x115848: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11584Cu;
        goto label_11584c;
    }
    ctx->pc = 0x115844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11584Cu);
        ctx->pc = 0x115848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115844u;
        // 0x115848: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115844u, 0x11584Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11584Cu;
label_11584c:
    // 0x11584c: 0x10000002  b           . + 4 + (0x2 << 2)
label_115850:
    if (ctx->pc == 0x115850u) {
        ctx->pc = 0x115850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11584Cu;
        // 0x115850: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x115854u;
        goto label_115854;
    }
    ctx->pc = 0x11584Cu;
    {
        const bool branch_taken_0x11584c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11584Cu;
        // 0x115850: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11584c) {
            ctx->pc = 0x115858u;
            goto label_115858;
        }
    }
    ctx->pc = 0x115854u;
label_115854:
    // 0x115854: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x115854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115858:
    // 0x115858: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
label_11585c:
    if (ctx->pc == 0x11585Cu) {
        ctx->pc = 0x115860u;
        goto label_115860;
    }
    ctx->pc = 0x115858u;
    {
        const bool branch_taken_0x115858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115858) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x115860u;
label_115860:
    // 0x115860: 0x92460255  lbu         $a2, 0x255($s2)
    ctx->pc = 0x115860u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_115864:
    // 0x115864: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x115864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_115868:
    // 0x115868: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x115868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_11586c:
    // 0x11586c: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x11586cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_115870:
    // 0x115870: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x115870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_115874:
    // 0x115874: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x115874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_115878:
    // 0x115878: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x115878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_11587c:
    // 0x11587c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x11587cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_115880:
    // 0x115880: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x115880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_115884:
    // 0x115884: 0xa2430255  sb          $v1, 0x255($s2)
    ctx->pc = 0x115884u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 3));
label_115888:
    // 0x115888: 0xae440264  sw          $a0, 0x264($s2)
    ctx->pc = 0x115888u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 612), GPR_U32(ctx, 4));
label_11588c:
    // 0x11588c: 0x8c23e4f8  lw          $v1, -0x1B08($at)
    ctx->pc = 0x11588cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960376)));
label_115890:
    // 0x115890: 0xae430268  sw          $v1, 0x268($s2)
    ctx->pc = 0x115890u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 3));
label_115894:
    // 0x115894: 0xa2440284  sb          $a0, 0x284($s2)
    ctx->pc = 0x115894u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 644), (uint8_t)GPR_U32(ctx, 4));
label_115898:
    // 0x115898: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_11589c:
    if (ctx->pc == 0x11589Cu) {
        ctx->pc = 0x11589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115898u;
        // 0x11589c: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1158A0u;
        goto label_1158a0;
    }
    ctx->pc = 0x115898u;
    {
        const bool branch_taken_0x115898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115898u;
        // 0x11589c: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115898) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x1158A0u;
label_1158a0:
    // 0x1158a0: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x1158a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_1158a4:
    // 0x1158a4: 0x2177c  dsll32      $v0, $v0, 29
    ctx->pc = 0x1158a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 29));
label_1158a8:
    // 0x1158a8: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x1158a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
label_1158ac:
    // 0x1158ac: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1158b0:
    if (ctx->pc == 0x1158B0u) {
        ctx->pc = 0x1158B4u;
        goto label_1158b4;
    }
    ctx->pc = 0x1158ACu;
    {
        const bool branch_taken_0x1158ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1158ac) {
            ctx->pc = 0x11592Cu;
            goto label_11592c;
        }
    }
    ctx->pc = 0x1158B4u;
label_1158b4:
    // 0x1158b4: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x1158b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1158b8:
    // 0x1158b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1158b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1158bc:
    // 0x1158bc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1158bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1158c0:
    // 0x1158c0: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x1158c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1158c4:
    // 0x1158c4: 0x320f809  jalr        $t9
label_1158c8:
    if (ctx->pc == 0x1158C8u) {
        ctx->pc = 0x1158C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158C4u;
        // 0x1158c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1158CCu;
        goto label_1158cc;
    }
    ctx->pc = 0x1158C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1158CCu);
        ctx->pc = 0x1158C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158C4u;
        // 0x1158c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1158C4u, 0x1158CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1158CCu;
label_1158cc:
    // 0x1158cc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1158ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1158d0:
    // 0x1158d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1158d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1158d4:
    // 0x1158d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1158d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1158d8:
    // 0x1158d8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1158d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1158dc:
    // 0x1158dc: 0x320f809  jalr        $t9
label_1158e0:
    if (ctx->pc == 0x1158E0u) {
        ctx->pc = 0x1158E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158DCu;
        // 0x1158e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1158E4u;
        goto label_1158e4;
    }
    ctx->pc = 0x1158DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1158E4u);
        ctx->pc = 0x1158E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158DCu;
        // 0x1158e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1158DCu, 0x1158E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1158E4u;
label_1158e4:
    // 0x1158e4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1158e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1158e8:
    // 0x1158e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1158e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1158ec:
    // 0x1158ec: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x1158ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1158f0:
    // 0x1158f0: 0x320f809  jalr        $t9
label_1158f4:
    if (ctx->pc == 0x1158F4u) {
        ctx->pc = 0x1158F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158F0u;
        // 0x1158f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1158F8u;
        goto label_1158f8;
    }
    ctx->pc = 0x1158F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1158F8u);
        ctx->pc = 0x1158F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158F0u;
        // 0x1158f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1158F0u, 0x1158F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1158F8u;
label_1158f8:
    // 0x1158f8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1158f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1158fc:
    // 0x1158fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1158fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_115900:
    // 0x115900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x115900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115904:
    // 0x115904: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x115904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_115908:
    // 0x115908: 0x320f809  jalr        $t9
label_11590c:
    if (ctx->pc == 0x11590Cu) {
        ctx->pc = 0x11590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115908u;
        // 0x11590c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115910u;
        goto label_115910;
    }
    ctx->pc = 0x115908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115910u);
        ctx->pc = 0x11590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115908u;
        // 0x11590c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115908u, 0x115910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115910u;
label_115910:
    // 0x115910: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x115910u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_115914:
    // 0x115914: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x115914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_115918:
    // 0x115918: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x115918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11591c:
    // 0x11591c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x11591cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_115920:
    // 0x115920: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x115920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_115924:
    // 0x115924: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x115924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_115928:
    // 0x115928: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x115928u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
label_11592c:
    // 0x11592c: 0x93828308  lbu         $v0, -0x7CF8($gp)
    ctx->pc = 0x11592cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935304)));
label_115930:
    // 0x115930: 0x27a30194  addiu       $v1, $sp, 0x194
    ctx->pc = 0x115930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
label_115934:
    // 0x115934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115938:
    // 0x115938: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115938u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_11593c:
    // 0x11593c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x11593cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115940:
    // 0x115940: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x115940u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_115944:
    // 0x115944: 0x320f809  jalr        $t9
label_115948:
    if (ctx->pc == 0x115948u) {
        ctx->pc = 0x115948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115944u;
        // 0x115948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11594Cu;
        goto label_11594c;
    }
    ctx->pc = 0x115944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11594Cu);
        ctx->pc = 0x115948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115944u;
        // 0x115948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115944u, 0x11594Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11594Cu;
label_11594c:
    // 0x11594c: 0x9382830c  lbu         $v0, -0x7CF4($gp)
    ctx->pc = 0x11594cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935308)));
label_115950:
    // 0x115950: 0x27a30198  addiu       $v1, $sp, 0x198
    ctx->pc = 0x115950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_115954:
    // 0x115954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115958:
    // 0x115958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x115958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11595c:
    // 0x11595c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x11595cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_115960:
    // 0x115960: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115964:
    // 0x115964: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x115964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_115968:
    // 0x115968: 0x320f809  jalr        $t9
label_11596c:
    if (ctx->pc == 0x11596Cu) {
        ctx->pc = 0x11596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115968u;
        // 0x11596c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115970u;
        goto label_115970;
    }
    ctx->pc = 0x115968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115970u);
        ctx->pc = 0x11596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115968u;
        // 0x11596c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115968u, 0x115970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115970u;
label_115970:
    // 0x115970: 0x8e44026c  lw          $a0, 0x26C($s2)
    ctx->pc = 0x115970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
label_115974:
    // 0x115974: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x115974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_115978:
    // 0x115978: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x115978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_11597c:
    // 0x11597c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11597cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_115980:
    // 0x115980: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x115980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_115984:
    // 0x115984: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x115984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_115988:
    // 0x115988: 0x90620041  lbu         $v0, 0x41($v1)
    ctx->pc = 0x115988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 65)));
label_11598c:
    // 0x11598c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_115990:
    if (ctx->pc == 0x115990u) {
        ctx->pc = 0x115990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11598Cu;
        // 0x115990: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115994u;
        goto label_115994;
    }
    ctx->pc = 0x11598Cu;
    {
        const bool branch_taken_0x11598c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11598Cu;
        // 0x115990: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11598c) {
            ctx->pc = 0x1159A4u;
            goto label_1159a4;
        }
    }
    ctx->pc = 0x115994u;
label_115994:
    // 0x115994: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x115994u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_115998:
    // 0x115998: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x115998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_11599c:
    // 0x11599c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x11599cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_1159a0:
    // 0x1159a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1159a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1159a4:
    // 0x1159a4: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x1159a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_1159a8:
    // 0x1159a8: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x1159a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_1159ac:
    // 0x1159ac: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x1159acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_1159b0:
    // 0x1159b0: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x1159b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_1159b4:
    // 0x1159b4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1159b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1159b8:
    // 0x1159b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1159b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1159bc:
    // 0x1159bc: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x1159bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1159c0:
    // 0x1159c0: 0x320f809  jalr        $t9
label_1159c4:
    if (ctx->pc == 0x1159C4u) {
        ctx->pc = 0x1159C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159C0u;
        // 0x1159c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1159C8u;
        goto label_1159c8;
    }
    ctx->pc = 0x1159C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1159C8u);
        ctx->pc = 0x1159C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159C0u;
        // 0x1159c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1159C0u, 0x1159C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1159C8u;
label_1159c8:
    // 0x1159c8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1159c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1159cc:
    // 0x1159cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1159ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1159d0:
    // 0x1159d0: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x1159d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_1159d4:
    // 0x1159d4: 0x320f809  jalr        $t9
label_1159d8:
    if (ctx->pc == 0x1159D8u) {
        ctx->pc = 0x1159D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159D4u;
        // 0x1159d8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1159DCu;
        goto label_1159dc;
    }
    ctx->pc = 0x1159D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1159DCu);
        ctx->pc = 0x1159D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159D4u;
        // 0x1159d8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1159D4u, 0x1159DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1159DCu;
label_1159dc:
    // 0x1159dc: 0x8e470260  lw          $a3, 0x260($s2)
    ctx->pc = 0x1159dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_1159e0:
    // 0x1159e0: 0x13bc  dsll32      $v0, $zero, 14
    ctx->pc = 0x1159e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (32 + 14));
label_1159e4:
    // 0x1159e4: 0x213be  dsrl32      $v0, $v0, 14
    ctx->pc = 0x1159e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 14));
label_1159e8:
    // 0x1159e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1159e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1159ec:
    // 0x1159ec: 0x23380  sll         $a2, $v0, 14
    ctx->pc = 0x1159ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
label_1159f0:
    // 0x1159f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1159f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1159f4:
    // 0x1159f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1159f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1159f8:
    // 0x1159f8: 0x24023fff  addiu       $v0, $zero, 0x3FFF
    ctx->pc = 0x1159f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_1159fc:
    // 0x1159fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1159fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_115a00:
    // 0x115a00: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x115a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_115a04:
    // 0x115a04: 0xae470260  sw          $a3, 0x260($s2)
    ctx->pc = 0x115a04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 7));
label_115a08:
    // 0x115a08: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x115a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_115a0c:
    // 0x115a0c: 0x8e470254  lw          $a3, 0x254($s2)
    ctx->pc = 0x115a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
label_115a10:
    // 0x115a10: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x115a10u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_115a14:
    // 0x115a14: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x115a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
label_115a18:
    // 0x115a18: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x115a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_115a1c:
    // 0x115a1c: 0xae440254  sw          $a0, 0x254($s2)
    ctx->pc = 0x115a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 596), GPR_U32(ctx, 4));
label_115a20:
    // 0x115a20: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x115a20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_115a24:
    // 0x115a24: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x115a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_115a28:
    // 0x115a28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x115a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_115a2c:
    // 0x115a2c: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x115a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
label_115a30:
    // 0x115a30: 0x10000053  b           . + 4 + (0x53 << 2)
label_115a34:
    if (ctx->pc == 0x115A34u) {
        ctx->pc = 0x115A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A30u;
        // 0x115a34: 0xae450270  sw          $a1, 0x270($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115A38u;
        goto label_115a38;
    }
    ctx->pc = 0x115A30u;
    {
        const bool branch_taken_0x115a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A30u;
        // 0x115a34: 0xae450270  sw          $a1, 0x270($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a30) {
            ctx->pc = 0x115B80u;
            goto label_115b80;
        }
    }
    ctx->pc = 0x115A38u;
label_115a38:
    // 0x115a38: 0x93828310  lbu         $v0, -0x7CF0($gp)
    ctx->pc = 0x115a38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935312)));
label_115a3c:
    // 0x115a3c: 0x27a3019c  addiu       $v1, $sp, 0x19C
    ctx->pc = 0x115a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
label_115a40:
    // 0x115a40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115a44:
    // 0x115a44: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115a44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_115a48:
    // 0x115a48: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115a48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115a4c:
    // 0x115a4c: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x115a4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_115a50:
    // 0x115a50: 0x320f809  jalr        $t9
label_115a54:
    if (ctx->pc == 0x115A54u) {
        ctx->pc = 0x115A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A50u;
        // 0x115a54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115A58u;
        goto label_115a58;
    }
    ctx->pc = 0x115A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115A58u);
        ctx->pc = 0x115A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A50u;
        // 0x115a54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115A50u, 0x115A58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115A58u;
label_115a58:
    // 0x115a58: 0x8e420254  lw          $v0, 0x254($s2)
    ctx->pc = 0x115a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
label_115a5c:
    // 0x115a5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x115a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_115a60:
    // 0x115a60: 0x213be  dsrl32      $v0, $v0, 14
    ctx->pc = 0x115a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 14));
label_115a64:
    // 0x115a64: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_115a68:
    if (ctx->pc == 0x115A68u) {
        ctx->pc = 0x115A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A64u;
        // 0x115a68: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115A6Cu;
        goto label_115a6c;
    }
    ctx->pc = 0x115A64u;
    {
        const bool branch_taken_0x115a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A64u;
        // 0x115a68: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a64) {
            ctx->pc = 0x115A9Cu;
            goto label_115a9c;
        }
    }
    ctx->pc = 0x115A6Cu;
label_115a6c:
    // 0x115a6c: 0xc07d392  jal         func_1F4E48
label_115a70:
    if (ctx->pc == 0x115A70u) {
        ctx->pc = 0x115A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A6Cu;
        // 0x115a70: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115A74u;
        goto label_115a74;
    }
    ctx->pc = 0x115A6Cu;
    SET_GPR_U32(ctx, 31, 0x115A74u);
    ctx->pc = 0x115A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115A6Cu;
    // 0x115a70: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x115A6Cu, 0x115A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A74u;
label_115a74:
    // 0x115a74: 0x8e43022c  lw          $v1, 0x22C($s2)
    ctx->pc = 0x115a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 556)));
label_115a78:
    // 0x115a78: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x115a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_115a7c:
    // 0x115a7c: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x115a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_115a80:
    // 0x115a80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115a84:
    // 0x115a84: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x115a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_115a88:
    // 0x115a88: 0xc0465f0  jal         func_1197C0
label_115a8c:
    if (ctx->pc == 0x115A8Cu) {
        ctx->pc = 0x115A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A88u;
        // 0x115a8c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115A90u;
        goto label_115a90;
    }
    ctx->pc = 0x115A88u;
    SET_GPR_U32(ctx, 31, 0x115A90u);
    ctx->pc = 0x115A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115A88u;
    // 0x115a8c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x115A88u, 0x115A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A90u;
label_115a90:
    // 0x115a90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_115a94:
    // 0x115a94: 0xc042118  jal         func_108460
label_115a98:
    if (ctx->pc == 0x115A98u) {
        ctx->pc = 0x115A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A94u;
        // 0x115a98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115A9Cu;
        goto label_115a9c;
    }
    ctx->pc = 0x115A94u;
    SET_GPR_U32(ctx, 31, 0x115A9Cu);
    ctx->pc = 0x115A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115A94u;
    // 0x115a98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x115A94u, 0x115A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A9Cu;
label_115a9c:
    // 0x115a9c: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x115a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_115aa0:
    // 0x115aa0: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x115aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_115aa4:
    // 0x115aa4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x115aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_115aa8:
    // 0x115aa8: 0x0  nop
    ctx->pc = 0x115aa8u;
    // NOP
label_115aac:
    // 0x115aac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x115aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_115ab0:
    // 0x115ab0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x115ab0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_115ab4:
    // 0x115ab4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x115ab4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_115ab8:
    // 0x115ab8: 0x0  nop
    ctx->pc = 0x115ab8u;
    // NOP
label_115abc:
    // 0x115abc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_115ac0:
    if (ctx->pc == 0x115AC0u) {
        ctx->pc = 0x115AC4u;
        goto label_115ac4;
    }
    ctx->pc = 0x115ABCu;
    {
        const bool branch_taken_0x115abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x115abc) {
            ctx->pc = 0x115AC8u;
            goto label_115ac8;
        }
    }
    ctx->pc = 0x115AC4u;
label_115ac4:
    // 0x115ac4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x115ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_115ac8:
    // 0x115ac8: 0x8e420254  lw          $v0, 0x254($s2)
    ctx->pc = 0x115ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
label_115acc:
    // 0x115acc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x115accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_115ad0:
    // 0x115ad0: 0x213be  dsrl32      $v0, $v0, 14
    ctx->pc = 0x115ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 14));
label_115ad4:
    // 0x115ad4: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
label_115ad8:
    if (ctx->pc == 0x115AD8u) {
        ctx->pc = 0x115AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115AD4u;
        // 0x115ad8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115ADCu;
        goto label_115adc;
    }
    ctx->pc = 0x115AD4u;
    {
        const bool branch_taken_0x115ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x115AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115AD4u;
        // 0x115ad8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ad4) {
            ctx->pc = 0x115B48u;
            goto label_115b48;
        }
    }
    ctx->pc = 0x115ADCu;
label_115adc:
    // 0x115adc: 0xc042570  jal         func_1095C0
label_115ae0:
    if (ctx->pc == 0x115AE0u) {
        ctx->pc = 0x115AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115ADCu;
        // 0x115ae0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115AE4u;
        goto label_115ae4;
    }
    ctx->pc = 0x115ADCu;
    SET_GPR_U32(ctx, 31, 0x115AE4u);
    ctx->pc = 0x115AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115ADCu;
    // 0x115ae0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x115ADCu, 0x115AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115AE4u;
label_115ae4:
    // 0x115ae4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x115ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_115ae8:
    // 0x115ae8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x115ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_115aec:
    // 0x115aec: 0xa24301d3  sb          $v1, 0x1D3($s2)
    ctx->pc = 0x115aecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 467), (uint8_t)GPR_U32(ctx, 3));
label_115af0:
    // 0x115af0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x115af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_115af4:
    // 0x115af4: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x115af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_115af8:
    // 0x115af8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x115af8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_115afc:
    // 0x115afc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x115afcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_115b00:
    // 0x115b00: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x115b00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_115b04:
    // 0x115b04: 0x0  nop
    ctx->pc = 0x115b04u;
    // NOP
label_115b08:
    // 0x115b08: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_115b0c:
    if (ctx->pc == 0x115B0Cu) {
        ctx->pc = 0x115B10u;
        goto label_115b10;
    }
    ctx->pc = 0x115B08u;
    {
        const bool branch_taken_0x115b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115b08) {
            ctx->pc = 0x115B14u;
            goto label_115b14;
        }
    }
    ctx->pc = 0x115B10u;
label_115b10:
    // 0x115b10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x115b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_115b14:
    // 0x115b14: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x115b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
label_115b18:
    // 0x115b18: 0x8e450254  lw          $a1, 0x254($s2)
    ctx->pc = 0x115b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
label_115b1c:
    // 0x115b1c: 0x213be  dsrl32      $v0, $v0, 14
    ctx->pc = 0x115b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 14));
label_115b20:
    // 0x115b20: 0x22380  sll         $a0, $v0, 14
    ctx->pc = 0x115b20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
label_115b24:
    // 0x115b24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x115b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_115b28:
    // 0x115b28: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x115b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_115b2c:
    // 0x115b2c: 0x24023fff  addiu       $v0, $zero, 0x3FFF
    ctx->pc = 0x115b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_115b30:
    // 0x115b30: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x115b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_115b34:
    // 0x115b34: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x115b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_115b38:
    // 0x115b38: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x115b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_115b3c:
    // 0x115b3c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x115b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_115b40:
    // 0x115b40: 0xae430254  sw          $v1, 0x254($s2)
    ctx->pc = 0x115b40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 596), GPR_U32(ctx, 3));
label_115b44:
    // 0x115b44: 0xae420260  sw          $v0, 0x260($s2)
    ctx->pc = 0x115b44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
label_115b48:
    // 0x115b48: 0x8e440254  lw          $a0, 0x254($s2)
    ctx->pc = 0x115b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
label_115b4c:
    // 0x115b4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x115b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_115b50:
    // 0x115b50: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x115b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_115b54:
    // 0x115b54: 0x24023fff  addiu       $v0, $zero, 0x3FFF
    ctx->pc = 0x115b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_115b58:
    // 0x115b58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x115b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_115b5c:
    // 0x115b5c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x115b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_115b60:
    // 0x115b60: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x115b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_115b64:
    // 0x115b64: 0x31bbe  dsrl32      $v1, $v1, 14
    ctx->pc = 0x115b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 14));
label_115b68:
    // 0x115b68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x115b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_115b6c:
    // 0x115b6c: 0x31bbc  dsll32      $v1, $v1, 14
    ctx->pc = 0x115b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
label_115b70:
    // 0x115b70: 0x31bbe  dsrl32      $v1, $v1, 14
    ctx->pc = 0x115b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 14));
label_115b74:
    // 0x115b74: 0x31b80  sll         $v1, $v1, 14
    ctx->pc = 0x115b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
label_115b78:
    // 0x115b78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x115b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_115b7c:
    // 0x115b7c: 0xae420254  sw          $v0, 0x254($s2)
    ctx->pc = 0x115b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 596), GPR_U32(ctx, 2));
label_115b80:
    // 0x115b80: 0x92420285  lbu         $v0, 0x285($s2)
    ctx->pc = 0x115b80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 645)));
label_115b84:
    // 0x115b84: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_115b88:
    if (ctx->pc == 0x115B88u) {
        ctx->pc = 0x115B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B84u;
        // 0x115b88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115B8Cu;
        goto label_115b8c;
    }
    ctx->pc = 0x115B84u;
    {
        const bool branch_taken_0x115b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B84u;
        // 0x115b88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b84) {
            ctx->pc = 0x115BB4u;
            goto label_115bb4;
        }
    }
    ctx->pc = 0x115B8Cu;
label_115b8c:
    // 0x115b8c: 0x8e450288  lw          $a1, 0x288($s2)
    ctx->pc = 0x115b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 648)));
label_115b90:
    // 0x115b90: 0x9246028c  lbu         $a2, 0x28C($s2)
    ctx->pc = 0x115b90u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 652)));
label_115b94:
    // 0x115b94: 0x8e470290  lw          $a3, 0x290($s2)
    ctx->pc = 0x115b94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 656)));
label_115b98:
    // 0x115b98: 0x8e480294  lw          $t0, 0x294($s2)
    ctx->pc = 0x115b98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 660)));
label_115b9c:
    // 0x115b9c: 0x92490298  lbu         $t1, 0x298($s2)
    ctx->pc = 0x115b9cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 664)));
label_115ba0:
    // 0x115ba0: 0x8e4a029c  lw          $t2, 0x29C($s2)
    ctx->pc = 0x115ba0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 668)));
label_115ba4:
    // 0x115ba4: 0xc045700  jal         func_115C00
label_115ba8:
    if (ctx->pc == 0x115BA8u) {
        ctx->pc = 0x115BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BA4u;
        // 0x115ba8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115BACu;
        goto label_115bac;
    }
    ctx->pc = 0x115BA4u;
    SET_GPR_U32(ctx, 31, 0x115BACu);
    ctx->pc = 0x115BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115BA4u;
    // 0x115ba8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C00u, 0x115BA4u, 0x115BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115BACu;
label_115bac:
    // 0x115bac: 0xa2400285  sb          $zero, 0x285($s2)
    ctx->pc = 0x115bacu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 645), (uint8_t)GPR_U32(ctx, 0));
label_115bb0:
    // 0x115bb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x115bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115bb4:
    // 0x115bb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x115bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115bb8:
    // 0x115bb8: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x115bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_115bbc:
    // 0x115bbc: 0xc044b00  jal         func_112C00
label_115bc0:
    if (ctx->pc == 0x115BC0u) {
        ctx->pc = 0x115BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BBCu;
        // 0x115bc0: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115BC4u;
        goto label_115bc4;
    }
    ctx->pc = 0x115BBCu;
    SET_GPR_U32(ctx, 31, 0x115BC4u);
    ctx->pc = 0x115BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115BBCu;
    // 0x115bc0: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112C00u, 0x115BBCu, 0x115BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115BC4u;
label_115bc4:
    // 0x115bc4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x115bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_115bc8:
    // 0x115bc8: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x115bc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_115bcc:
    // 0x115bcc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_115bd0:
    if (ctx->pc == 0x115BD0u) {
        ctx->pc = 0x115BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BCCu;
        // 0x115bd0: 0x26310044  addiu       $s1, $s1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115BD4u;
        goto label_115bd4;
    }
    ctx->pc = 0x115BCCu;
    {
        const bool branch_taken_0x115bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x115BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BCCu;
        // 0x115bd0: 0x26310044  addiu       $s1, $s1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115bcc) {
            ctx->pc = 0x115BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115bb8;
        }
    }
    ctx->pc = 0x115BD4u;
label_115bd4:
    // 0x115bd4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x115bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_115bd8:
    // 0x115bd8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x115bd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_115bdc:
    // 0x115bdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x115bdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_115be0:
    // 0x115be0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x115be0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_115be4:
    // 0x115be4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x115be4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_115be8:
    // 0x115be8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x115be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_115bec:
    // 0x115bec: 0x3e00008  jr          $ra
label_115bf0:
    if (ctx->pc == 0x115BF0u) {
        ctx->pc = 0x115BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BECu;
        // 0x115bf0: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115BF4u;
        goto label_fallthrough_0x115bec;
    }
    ctx->pc = 0x115BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BECu;
        // 0x115bf0: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x115bec:
    ctx->pc = 0x115BF4u;
}
