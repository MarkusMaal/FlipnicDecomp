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

// Function: FUN_00161fb0
// Address: 0x161fb0 - 0x162e30
void FUN_00161fb0_0x161fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00161fb0_0x161fb0");
#endif

    switch (ctx->pc) {
        case 0x161fb0u: goto label_161fb0;
        case 0x161fb4u: goto label_161fb4;
        case 0x161fb8u: goto label_161fb8;
        case 0x161fbcu: goto label_161fbc;
        case 0x161fc0u: goto label_161fc0;
        case 0x161fc4u: goto label_161fc4;
        case 0x161fc8u: goto label_161fc8;
        case 0x161fccu: goto label_161fcc;
        case 0x161fd0u: goto label_161fd0;
        case 0x161fd4u: goto label_161fd4;
        case 0x161fd8u: goto label_161fd8;
        case 0x161fdcu: goto label_161fdc;
        case 0x161fe0u: goto label_161fe0;
        case 0x161fe4u: goto label_161fe4;
        case 0x161fe8u: goto label_161fe8;
        case 0x161fecu: goto label_161fec;
        case 0x161ff0u: goto label_161ff0;
        case 0x161ff4u: goto label_161ff4;
        case 0x161ff8u: goto label_161ff8;
        case 0x161ffcu: goto label_161ffc;
        case 0x162000u: goto label_162000;
        case 0x162004u: goto label_162004;
        case 0x162008u: goto label_162008;
        case 0x16200cu: goto label_16200c;
        case 0x162010u: goto label_162010;
        case 0x162014u: goto label_162014;
        case 0x162018u: goto label_162018;
        case 0x16201cu: goto label_16201c;
        case 0x162020u: goto label_162020;
        case 0x162024u: goto label_162024;
        case 0x162028u: goto label_162028;
        case 0x16202cu: goto label_16202c;
        case 0x162030u: goto label_162030;
        case 0x162034u: goto label_162034;
        case 0x162038u: goto label_162038;
        case 0x16203cu: goto label_16203c;
        case 0x162040u: goto label_162040;
        case 0x162044u: goto label_162044;
        case 0x162048u: goto label_162048;
        case 0x16204cu: goto label_16204c;
        case 0x162050u: goto label_162050;
        case 0x162054u: goto label_162054;
        case 0x162058u: goto label_162058;
        case 0x16205cu: goto label_16205c;
        case 0x162060u: goto label_162060;
        case 0x162064u: goto label_162064;
        case 0x162068u: goto label_162068;
        case 0x16206cu: goto label_16206c;
        case 0x162070u: goto label_162070;
        case 0x162074u: goto label_162074;
        case 0x162078u: goto label_162078;
        case 0x16207cu: goto label_16207c;
        case 0x162080u: goto label_162080;
        case 0x162084u: goto label_162084;
        case 0x162088u: goto label_162088;
        case 0x16208cu: goto label_16208c;
        case 0x162090u: goto label_162090;
        case 0x162094u: goto label_162094;
        case 0x162098u: goto label_162098;
        case 0x16209cu: goto label_16209c;
        case 0x1620a0u: goto label_1620a0;
        case 0x1620a4u: goto label_1620a4;
        case 0x1620a8u: goto label_1620a8;
        case 0x1620acu: goto label_1620ac;
        case 0x1620b0u: goto label_1620b0;
        case 0x1620b4u: goto label_1620b4;
        case 0x1620b8u: goto label_1620b8;
        case 0x1620bcu: goto label_1620bc;
        case 0x1620c0u: goto label_1620c0;
        case 0x1620c4u: goto label_1620c4;
        case 0x1620c8u: goto label_1620c8;
        case 0x1620ccu: goto label_1620cc;
        case 0x1620d0u: goto label_1620d0;
        case 0x1620d4u: goto label_1620d4;
        case 0x1620d8u: goto label_1620d8;
        case 0x1620dcu: goto label_1620dc;
        case 0x1620e0u: goto label_1620e0;
        case 0x1620e4u: goto label_1620e4;
        case 0x1620e8u: goto label_1620e8;
        case 0x1620ecu: goto label_1620ec;
        case 0x1620f0u: goto label_1620f0;
        case 0x1620f4u: goto label_1620f4;
        case 0x1620f8u: goto label_1620f8;
        case 0x1620fcu: goto label_1620fc;
        case 0x162100u: goto label_162100;
        case 0x162104u: goto label_162104;
        case 0x162108u: goto label_162108;
        case 0x16210cu: goto label_16210c;
        case 0x162110u: goto label_162110;
        case 0x162114u: goto label_162114;
        case 0x162118u: goto label_162118;
        case 0x16211cu: goto label_16211c;
        case 0x162120u: goto label_162120;
        case 0x162124u: goto label_162124;
        case 0x162128u: goto label_162128;
        case 0x16212cu: goto label_16212c;
        case 0x162130u: goto label_162130;
        case 0x162134u: goto label_162134;
        case 0x162138u: goto label_162138;
        case 0x16213cu: goto label_16213c;
        case 0x162140u: goto label_162140;
        case 0x162144u: goto label_162144;
        case 0x162148u: goto label_162148;
        case 0x16214cu: goto label_16214c;
        case 0x162150u: goto label_162150;
        case 0x162154u: goto label_162154;
        case 0x162158u: goto label_162158;
        case 0x16215cu: goto label_16215c;
        case 0x162160u: goto label_162160;
        case 0x162164u: goto label_162164;
        case 0x162168u: goto label_162168;
        case 0x16216cu: goto label_16216c;
        case 0x162170u: goto label_162170;
        case 0x162174u: goto label_162174;
        case 0x162178u: goto label_162178;
        case 0x16217cu: goto label_16217c;
        case 0x162180u: goto label_162180;
        case 0x162184u: goto label_162184;
        case 0x162188u: goto label_162188;
        case 0x16218cu: goto label_16218c;
        case 0x162190u: goto label_162190;
        case 0x162194u: goto label_162194;
        case 0x162198u: goto label_162198;
        case 0x16219cu: goto label_16219c;
        case 0x1621a0u: goto label_1621a0;
        case 0x1621a4u: goto label_1621a4;
        case 0x1621a8u: goto label_1621a8;
        case 0x1621acu: goto label_1621ac;
        case 0x1621b0u: goto label_1621b0;
        case 0x1621b4u: goto label_1621b4;
        case 0x1621b8u: goto label_1621b8;
        case 0x1621bcu: goto label_1621bc;
        case 0x1621c0u: goto label_1621c0;
        case 0x1621c4u: goto label_1621c4;
        case 0x1621c8u: goto label_1621c8;
        case 0x1621ccu: goto label_1621cc;
        case 0x1621d0u: goto label_1621d0;
        case 0x1621d4u: goto label_1621d4;
        case 0x1621d8u: goto label_1621d8;
        case 0x1621dcu: goto label_1621dc;
        case 0x1621e0u: goto label_1621e0;
        case 0x1621e4u: goto label_1621e4;
        case 0x1621e8u: goto label_1621e8;
        case 0x1621ecu: goto label_1621ec;
        case 0x1621f0u: goto label_1621f0;
        case 0x1621f4u: goto label_1621f4;
        case 0x1621f8u: goto label_1621f8;
        case 0x1621fcu: goto label_1621fc;
        case 0x162200u: goto label_162200;
        case 0x162204u: goto label_162204;
        case 0x162208u: goto label_162208;
        case 0x16220cu: goto label_16220c;
        case 0x162210u: goto label_162210;
        case 0x162214u: goto label_162214;
        case 0x162218u: goto label_162218;
        case 0x16221cu: goto label_16221c;
        case 0x162220u: goto label_162220;
        case 0x162224u: goto label_162224;
        case 0x162228u: goto label_162228;
        case 0x16222cu: goto label_16222c;
        case 0x162230u: goto label_162230;
        case 0x162234u: goto label_162234;
        case 0x162238u: goto label_162238;
        case 0x16223cu: goto label_16223c;
        case 0x162240u: goto label_162240;
        case 0x162244u: goto label_162244;
        case 0x162248u: goto label_162248;
        case 0x16224cu: goto label_16224c;
        case 0x162250u: goto label_162250;
        case 0x162254u: goto label_162254;
        case 0x162258u: goto label_162258;
        case 0x16225cu: goto label_16225c;
        case 0x162260u: goto label_162260;
        case 0x162264u: goto label_162264;
        case 0x162268u: goto label_162268;
        case 0x16226cu: goto label_16226c;
        case 0x162270u: goto label_162270;
        case 0x162274u: goto label_162274;
        case 0x162278u: goto label_162278;
        case 0x16227cu: goto label_16227c;
        case 0x162280u: goto label_162280;
        case 0x162284u: goto label_162284;
        case 0x162288u: goto label_162288;
        case 0x16228cu: goto label_16228c;
        case 0x162290u: goto label_162290;
        case 0x162294u: goto label_162294;
        case 0x162298u: goto label_162298;
        case 0x16229cu: goto label_16229c;
        case 0x1622a0u: goto label_1622a0;
        case 0x1622a4u: goto label_1622a4;
        case 0x1622a8u: goto label_1622a8;
        case 0x1622acu: goto label_1622ac;
        case 0x1622b0u: goto label_1622b0;
        case 0x1622b4u: goto label_1622b4;
        case 0x1622b8u: goto label_1622b8;
        case 0x1622bcu: goto label_1622bc;
        case 0x1622c0u: goto label_1622c0;
        case 0x1622c4u: goto label_1622c4;
        case 0x1622c8u: goto label_1622c8;
        case 0x1622ccu: goto label_1622cc;
        case 0x1622d0u: goto label_1622d0;
        case 0x1622d4u: goto label_1622d4;
        case 0x1622d8u: goto label_1622d8;
        case 0x1622dcu: goto label_1622dc;
        case 0x1622e0u: goto label_1622e0;
        case 0x1622e4u: goto label_1622e4;
        case 0x1622e8u: goto label_1622e8;
        case 0x1622ecu: goto label_1622ec;
        case 0x1622f0u: goto label_1622f0;
        case 0x1622f4u: goto label_1622f4;
        case 0x1622f8u: goto label_1622f8;
        case 0x1622fcu: goto label_1622fc;
        case 0x162300u: goto label_162300;
        case 0x162304u: goto label_162304;
        case 0x162308u: goto label_162308;
        case 0x16230cu: goto label_16230c;
        case 0x162310u: goto label_162310;
        case 0x162314u: goto label_162314;
        case 0x162318u: goto label_162318;
        case 0x16231cu: goto label_16231c;
        case 0x162320u: goto label_162320;
        case 0x162324u: goto label_162324;
        case 0x162328u: goto label_162328;
        case 0x16232cu: goto label_16232c;
        case 0x162330u: goto label_162330;
        case 0x162334u: goto label_162334;
        case 0x162338u: goto label_162338;
        case 0x16233cu: goto label_16233c;
        case 0x162340u: goto label_162340;
        case 0x162344u: goto label_162344;
        case 0x162348u: goto label_162348;
        case 0x16234cu: goto label_16234c;
        case 0x162350u: goto label_162350;
        case 0x162354u: goto label_162354;
        case 0x162358u: goto label_162358;
        case 0x16235cu: goto label_16235c;
        case 0x162360u: goto label_162360;
        case 0x162364u: goto label_162364;
        case 0x162368u: goto label_162368;
        case 0x16236cu: goto label_16236c;
        case 0x162370u: goto label_162370;
        case 0x162374u: goto label_162374;
        case 0x162378u: goto label_162378;
        case 0x16237cu: goto label_16237c;
        case 0x162380u: goto label_162380;
        case 0x162384u: goto label_162384;
        case 0x162388u: goto label_162388;
        case 0x16238cu: goto label_16238c;
        case 0x162390u: goto label_162390;
        case 0x162394u: goto label_162394;
        case 0x162398u: goto label_162398;
        case 0x16239cu: goto label_16239c;
        case 0x1623a0u: goto label_1623a0;
        case 0x1623a4u: goto label_1623a4;
        case 0x1623a8u: goto label_1623a8;
        case 0x1623acu: goto label_1623ac;
        case 0x1623b0u: goto label_1623b0;
        case 0x1623b4u: goto label_1623b4;
        case 0x1623b8u: goto label_1623b8;
        case 0x1623bcu: goto label_1623bc;
        case 0x1623c0u: goto label_1623c0;
        case 0x1623c4u: goto label_1623c4;
        case 0x1623c8u: goto label_1623c8;
        case 0x1623ccu: goto label_1623cc;
        case 0x1623d0u: goto label_1623d0;
        case 0x1623d4u: goto label_1623d4;
        case 0x1623d8u: goto label_1623d8;
        case 0x1623dcu: goto label_1623dc;
        case 0x1623e0u: goto label_1623e0;
        case 0x1623e4u: goto label_1623e4;
        case 0x1623e8u: goto label_1623e8;
        case 0x1623ecu: goto label_1623ec;
        case 0x1623f0u: goto label_1623f0;
        case 0x1623f4u: goto label_1623f4;
        case 0x1623f8u: goto label_1623f8;
        case 0x1623fcu: goto label_1623fc;
        case 0x162400u: goto label_162400;
        case 0x162404u: goto label_162404;
        case 0x162408u: goto label_162408;
        case 0x16240cu: goto label_16240c;
        case 0x162410u: goto label_162410;
        case 0x162414u: goto label_162414;
        case 0x162418u: goto label_162418;
        case 0x16241cu: goto label_16241c;
        case 0x162420u: goto label_162420;
        case 0x162424u: goto label_162424;
        case 0x162428u: goto label_162428;
        case 0x16242cu: goto label_16242c;
        case 0x162430u: goto label_162430;
        case 0x162434u: goto label_162434;
        case 0x162438u: goto label_162438;
        case 0x16243cu: goto label_16243c;
        case 0x162440u: goto label_162440;
        case 0x162444u: goto label_162444;
        case 0x162448u: goto label_162448;
        case 0x16244cu: goto label_16244c;
        case 0x162450u: goto label_162450;
        case 0x162454u: goto label_162454;
        case 0x162458u: goto label_162458;
        case 0x16245cu: goto label_16245c;
        case 0x162460u: goto label_162460;
        case 0x162464u: goto label_162464;
        case 0x162468u: goto label_162468;
        case 0x16246cu: goto label_16246c;
        case 0x162470u: goto label_162470;
        case 0x162474u: goto label_162474;
        case 0x162478u: goto label_162478;
        case 0x16247cu: goto label_16247c;
        case 0x162480u: goto label_162480;
        case 0x162484u: goto label_162484;
        case 0x162488u: goto label_162488;
        case 0x16248cu: goto label_16248c;
        case 0x162490u: goto label_162490;
        case 0x162494u: goto label_162494;
        case 0x162498u: goto label_162498;
        case 0x16249cu: goto label_16249c;
        case 0x1624a0u: goto label_1624a0;
        case 0x1624a4u: goto label_1624a4;
        case 0x1624a8u: goto label_1624a8;
        case 0x1624acu: goto label_1624ac;
        case 0x1624b0u: goto label_1624b0;
        case 0x1624b4u: goto label_1624b4;
        case 0x1624b8u: goto label_1624b8;
        case 0x1624bcu: goto label_1624bc;
        case 0x1624c0u: goto label_1624c0;
        case 0x1624c4u: goto label_1624c4;
        case 0x1624c8u: goto label_1624c8;
        case 0x1624ccu: goto label_1624cc;
        case 0x1624d0u: goto label_1624d0;
        case 0x1624d4u: goto label_1624d4;
        case 0x1624d8u: goto label_1624d8;
        case 0x1624dcu: goto label_1624dc;
        case 0x1624e0u: goto label_1624e0;
        case 0x1624e4u: goto label_1624e4;
        case 0x1624e8u: goto label_1624e8;
        case 0x1624ecu: goto label_1624ec;
        case 0x1624f0u: goto label_1624f0;
        case 0x1624f4u: goto label_1624f4;
        case 0x1624f8u: goto label_1624f8;
        case 0x1624fcu: goto label_1624fc;
        case 0x162500u: goto label_162500;
        case 0x162504u: goto label_162504;
        case 0x162508u: goto label_162508;
        case 0x16250cu: goto label_16250c;
        case 0x162510u: goto label_162510;
        case 0x162514u: goto label_162514;
        case 0x162518u: goto label_162518;
        case 0x16251cu: goto label_16251c;
        case 0x162520u: goto label_162520;
        case 0x162524u: goto label_162524;
        case 0x162528u: goto label_162528;
        case 0x16252cu: goto label_16252c;
        case 0x162530u: goto label_162530;
        case 0x162534u: goto label_162534;
        case 0x162538u: goto label_162538;
        case 0x16253cu: goto label_16253c;
        case 0x162540u: goto label_162540;
        case 0x162544u: goto label_162544;
        case 0x162548u: goto label_162548;
        case 0x16254cu: goto label_16254c;
        case 0x162550u: goto label_162550;
        case 0x162554u: goto label_162554;
        case 0x162558u: goto label_162558;
        case 0x16255cu: goto label_16255c;
        case 0x162560u: goto label_162560;
        case 0x162564u: goto label_162564;
        case 0x162568u: goto label_162568;
        case 0x16256cu: goto label_16256c;
        case 0x162570u: goto label_162570;
        case 0x162574u: goto label_162574;
        case 0x162578u: goto label_162578;
        case 0x16257cu: goto label_16257c;
        case 0x162580u: goto label_162580;
        case 0x162584u: goto label_162584;
        case 0x162588u: goto label_162588;
        case 0x16258cu: goto label_16258c;
        case 0x162590u: goto label_162590;
        case 0x162594u: goto label_162594;
        case 0x162598u: goto label_162598;
        case 0x16259cu: goto label_16259c;
        case 0x1625a0u: goto label_1625a0;
        case 0x1625a4u: goto label_1625a4;
        case 0x1625a8u: goto label_1625a8;
        case 0x1625acu: goto label_1625ac;
        case 0x1625b0u: goto label_1625b0;
        case 0x1625b4u: goto label_1625b4;
        case 0x1625b8u: goto label_1625b8;
        case 0x1625bcu: goto label_1625bc;
        case 0x1625c0u: goto label_1625c0;
        case 0x1625c4u: goto label_1625c4;
        case 0x1625c8u: goto label_1625c8;
        case 0x1625ccu: goto label_1625cc;
        case 0x1625d0u: goto label_1625d0;
        case 0x1625d4u: goto label_1625d4;
        case 0x1625d8u: goto label_1625d8;
        case 0x1625dcu: goto label_1625dc;
        case 0x1625e0u: goto label_1625e0;
        case 0x1625e4u: goto label_1625e4;
        case 0x1625e8u: goto label_1625e8;
        case 0x1625ecu: goto label_1625ec;
        case 0x1625f0u: goto label_1625f0;
        case 0x1625f4u: goto label_1625f4;
        case 0x1625f8u: goto label_1625f8;
        case 0x1625fcu: goto label_1625fc;
        case 0x162600u: goto label_162600;
        case 0x162604u: goto label_162604;
        case 0x162608u: goto label_162608;
        case 0x16260cu: goto label_16260c;
        case 0x162610u: goto label_162610;
        case 0x162614u: goto label_162614;
        case 0x162618u: goto label_162618;
        case 0x16261cu: goto label_16261c;
        case 0x162620u: goto label_162620;
        case 0x162624u: goto label_162624;
        case 0x162628u: goto label_162628;
        case 0x16262cu: goto label_16262c;
        case 0x162630u: goto label_162630;
        case 0x162634u: goto label_162634;
        case 0x162638u: goto label_162638;
        case 0x16263cu: goto label_16263c;
        case 0x162640u: goto label_162640;
        case 0x162644u: goto label_162644;
        case 0x162648u: goto label_162648;
        case 0x16264cu: goto label_16264c;
        case 0x162650u: goto label_162650;
        case 0x162654u: goto label_162654;
        case 0x162658u: goto label_162658;
        case 0x16265cu: goto label_16265c;
        case 0x162660u: goto label_162660;
        case 0x162664u: goto label_162664;
        case 0x162668u: goto label_162668;
        case 0x16266cu: goto label_16266c;
        case 0x162670u: goto label_162670;
        case 0x162674u: goto label_162674;
        case 0x162678u: goto label_162678;
        case 0x16267cu: goto label_16267c;
        case 0x162680u: goto label_162680;
        case 0x162684u: goto label_162684;
        case 0x162688u: goto label_162688;
        case 0x16268cu: goto label_16268c;
        case 0x162690u: goto label_162690;
        case 0x162694u: goto label_162694;
        case 0x162698u: goto label_162698;
        case 0x16269cu: goto label_16269c;
        case 0x1626a0u: goto label_1626a0;
        case 0x1626a4u: goto label_1626a4;
        case 0x1626a8u: goto label_1626a8;
        case 0x1626acu: goto label_1626ac;
        case 0x1626b0u: goto label_1626b0;
        case 0x1626b4u: goto label_1626b4;
        case 0x1626b8u: goto label_1626b8;
        case 0x1626bcu: goto label_1626bc;
        case 0x1626c0u: goto label_1626c0;
        case 0x1626c4u: goto label_1626c4;
        case 0x1626c8u: goto label_1626c8;
        case 0x1626ccu: goto label_1626cc;
        case 0x1626d0u: goto label_1626d0;
        case 0x1626d4u: goto label_1626d4;
        case 0x1626d8u: goto label_1626d8;
        case 0x1626dcu: goto label_1626dc;
        case 0x1626e0u: goto label_1626e0;
        case 0x1626e4u: goto label_1626e4;
        case 0x1626e8u: goto label_1626e8;
        case 0x1626ecu: goto label_1626ec;
        case 0x1626f0u: goto label_1626f0;
        case 0x1626f4u: goto label_1626f4;
        case 0x1626f8u: goto label_1626f8;
        case 0x1626fcu: goto label_1626fc;
        case 0x162700u: goto label_162700;
        case 0x162704u: goto label_162704;
        case 0x162708u: goto label_162708;
        case 0x16270cu: goto label_16270c;
        case 0x162710u: goto label_162710;
        case 0x162714u: goto label_162714;
        case 0x162718u: goto label_162718;
        case 0x16271cu: goto label_16271c;
        case 0x162720u: goto label_162720;
        case 0x162724u: goto label_162724;
        case 0x162728u: goto label_162728;
        case 0x16272cu: goto label_16272c;
        case 0x162730u: goto label_162730;
        case 0x162734u: goto label_162734;
        case 0x162738u: goto label_162738;
        case 0x16273cu: goto label_16273c;
        case 0x162740u: goto label_162740;
        case 0x162744u: goto label_162744;
        case 0x162748u: goto label_162748;
        case 0x16274cu: goto label_16274c;
        case 0x162750u: goto label_162750;
        case 0x162754u: goto label_162754;
        case 0x162758u: goto label_162758;
        case 0x16275cu: goto label_16275c;
        case 0x162760u: goto label_162760;
        case 0x162764u: goto label_162764;
        case 0x162768u: goto label_162768;
        case 0x16276cu: goto label_16276c;
        case 0x162770u: goto label_162770;
        case 0x162774u: goto label_162774;
        case 0x162778u: goto label_162778;
        case 0x16277cu: goto label_16277c;
        case 0x162780u: goto label_162780;
        case 0x162784u: goto label_162784;
        case 0x162788u: goto label_162788;
        case 0x16278cu: goto label_16278c;
        case 0x162790u: goto label_162790;
        case 0x162794u: goto label_162794;
        case 0x162798u: goto label_162798;
        case 0x16279cu: goto label_16279c;
        case 0x1627a0u: goto label_1627a0;
        case 0x1627a4u: goto label_1627a4;
        case 0x1627a8u: goto label_1627a8;
        case 0x1627acu: goto label_1627ac;
        case 0x1627b0u: goto label_1627b0;
        case 0x1627b4u: goto label_1627b4;
        case 0x1627b8u: goto label_1627b8;
        case 0x1627bcu: goto label_1627bc;
        case 0x1627c0u: goto label_1627c0;
        case 0x1627c4u: goto label_1627c4;
        case 0x1627c8u: goto label_1627c8;
        case 0x1627ccu: goto label_1627cc;
        case 0x1627d0u: goto label_1627d0;
        case 0x1627d4u: goto label_1627d4;
        case 0x1627d8u: goto label_1627d8;
        case 0x1627dcu: goto label_1627dc;
        case 0x1627e0u: goto label_1627e0;
        case 0x1627e4u: goto label_1627e4;
        case 0x1627e8u: goto label_1627e8;
        case 0x1627ecu: goto label_1627ec;
        case 0x1627f0u: goto label_1627f0;
        case 0x1627f4u: goto label_1627f4;
        case 0x1627f8u: goto label_1627f8;
        case 0x1627fcu: goto label_1627fc;
        case 0x162800u: goto label_162800;
        case 0x162804u: goto label_162804;
        case 0x162808u: goto label_162808;
        case 0x16280cu: goto label_16280c;
        case 0x162810u: goto label_162810;
        case 0x162814u: goto label_162814;
        case 0x162818u: goto label_162818;
        case 0x16281cu: goto label_16281c;
        case 0x162820u: goto label_162820;
        case 0x162824u: goto label_162824;
        case 0x162828u: goto label_162828;
        case 0x16282cu: goto label_16282c;
        case 0x162830u: goto label_162830;
        case 0x162834u: goto label_162834;
        case 0x162838u: goto label_162838;
        case 0x16283cu: goto label_16283c;
        case 0x162840u: goto label_162840;
        case 0x162844u: goto label_162844;
        case 0x162848u: goto label_162848;
        case 0x16284cu: goto label_16284c;
        case 0x162850u: goto label_162850;
        case 0x162854u: goto label_162854;
        case 0x162858u: goto label_162858;
        case 0x16285cu: goto label_16285c;
        case 0x162860u: goto label_162860;
        case 0x162864u: goto label_162864;
        case 0x162868u: goto label_162868;
        case 0x16286cu: goto label_16286c;
        case 0x162870u: goto label_162870;
        case 0x162874u: goto label_162874;
        case 0x162878u: goto label_162878;
        case 0x16287cu: goto label_16287c;
        case 0x162880u: goto label_162880;
        case 0x162884u: goto label_162884;
        case 0x162888u: goto label_162888;
        case 0x16288cu: goto label_16288c;
        case 0x162890u: goto label_162890;
        case 0x162894u: goto label_162894;
        case 0x162898u: goto label_162898;
        case 0x16289cu: goto label_16289c;
        case 0x1628a0u: goto label_1628a0;
        case 0x1628a4u: goto label_1628a4;
        case 0x1628a8u: goto label_1628a8;
        case 0x1628acu: goto label_1628ac;
        case 0x1628b0u: goto label_1628b0;
        case 0x1628b4u: goto label_1628b4;
        case 0x1628b8u: goto label_1628b8;
        case 0x1628bcu: goto label_1628bc;
        case 0x1628c0u: goto label_1628c0;
        case 0x1628c4u: goto label_1628c4;
        case 0x1628c8u: goto label_1628c8;
        case 0x1628ccu: goto label_1628cc;
        case 0x1628d0u: goto label_1628d0;
        case 0x1628d4u: goto label_1628d4;
        case 0x1628d8u: goto label_1628d8;
        case 0x1628dcu: goto label_1628dc;
        case 0x1628e0u: goto label_1628e0;
        case 0x1628e4u: goto label_1628e4;
        case 0x1628e8u: goto label_1628e8;
        case 0x1628ecu: goto label_1628ec;
        case 0x1628f0u: goto label_1628f0;
        case 0x1628f4u: goto label_1628f4;
        case 0x1628f8u: goto label_1628f8;
        case 0x1628fcu: goto label_1628fc;
        case 0x162900u: goto label_162900;
        case 0x162904u: goto label_162904;
        case 0x162908u: goto label_162908;
        case 0x16290cu: goto label_16290c;
        case 0x162910u: goto label_162910;
        case 0x162914u: goto label_162914;
        case 0x162918u: goto label_162918;
        case 0x16291cu: goto label_16291c;
        case 0x162920u: goto label_162920;
        case 0x162924u: goto label_162924;
        case 0x162928u: goto label_162928;
        case 0x16292cu: goto label_16292c;
        case 0x162930u: goto label_162930;
        case 0x162934u: goto label_162934;
        case 0x162938u: goto label_162938;
        case 0x16293cu: goto label_16293c;
        case 0x162940u: goto label_162940;
        case 0x162944u: goto label_162944;
        case 0x162948u: goto label_162948;
        case 0x16294cu: goto label_16294c;
        case 0x162950u: goto label_162950;
        case 0x162954u: goto label_162954;
        case 0x162958u: goto label_162958;
        case 0x16295cu: goto label_16295c;
        case 0x162960u: goto label_162960;
        case 0x162964u: goto label_162964;
        case 0x162968u: goto label_162968;
        case 0x16296cu: goto label_16296c;
        case 0x162970u: goto label_162970;
        case 0x162974u: goto label_162974;
        case 0x162978u: goto label_162978;
        case 0x16297cu: goto label_16297c;
        case 0x162980u: goto label_162980;
        case 0x162984u: goto label_162984;
        case 0x162988u: goto label_162988;
        case 0x16298cu: goto label_16298c;
        case 0x162990u: goto label_162990;
        case 0x162994u: goto label_162994;
        case 0x162998u: goto label_162998;
        case 0x16299cu: goto label_16299c;
        case 0x1629a0u: goto label_1629a0;
        case 0x1629a4u: goto label_1629a4;
        case 0x1629a8u: goto label_1629a8;
        case 0x1629acu: goto label_1629ac;
        case 0x1629b0u: goto label_1629b0;
        case 0x1629b4u: goto label_1629b4;
        case 0x1629b8u: goto label_1629b8;
        case 0x1629bcu: goto label_1629bc;
        case 0x1629c0u: goto label_1629c0;
        case 0x1629c4u: goto label_1629c4;
        case 0x1629c8u: goto label_1629c8;
        case 0x1629ccu: goto label_1629cc;
        case 0x1629d0u: goto label_1629d0;
        case 0x1629d4u: goto label_1629d4;
        case 0x1629d8u: goto label_1629d8;
        case 0x1629dcu: goto label_1629dc;
        case 0x1629e0u: goto label_1629e0;
        case 0x1629e4u: goto label_1629e4;
        case 0x1629e8u: goto label_1629e8;
        case 0x1629ecu: goto label_1629ec;
        case 0x1629f0u: goto label_1629f0;
        case 0x1629f4u: goto label_1629f4;
        case 0x1629f8u: goto label_1629f8;
        case 0x1629fcu: goto label_1629fc;
        case 0x162a00u: goto label_162a00;
        case 0x162a04u: goto label_162a04;
        case 0x162a08u: goto label_162a08;
        case 0x162a0cu: goto label_162a0c;
        case 0x162a10u: goto label_162a10;
        case 0x162a14u: goto label_162a14;
        case 0x162a18u: goto label_162a18;
        case 0x162a1cu: goto label_162a1c;
        case 0x162a20u: goto label_162a20;
        case 0x162a24u: goto label_162a24;
        case 0x162a28u: goto label_162a28;
        case 0x162a2cu: goto label_162a2c;
        case 0x162a30u: goto label_162a30;
        case 0x162a34u: goto label_162a34;
        case 0x162a38u: goto label_162a38;
        case 0x162a3cu: goto label_162a3c;
        case 0x162a40u: goto label_162a40;
        case 0x162a44u: goto label_162a44;
        case 0x162a48u: goto label_162a48;
        case 0x162a4cu: goto label_162a4c;
        case 0x162a50u: goto label_162a50;
        case 0x162a54u: goto label_162a54;
        case 0x162a58u: goto label_162a58;
        case 0x162a5cu: goto label_162a5c;
        case 0x162a60u: goto label_162a60;
        case 0x162a64u: goto label_162a64;
        case 0x162a68u: goto label_162a68;
        case 0x162a6cu: goto label_162a6c;
        case 0x162a70u: goto label_162a70;
        case 0x162a74u: goto label_162a74;
        case 0x162a78u: goto label_162a78;
        case 0x162a7cu: goto label_162a7c;
        case 0x162a80u: goto label_162a80;
        case 0x162a84u: goto label_162a84;
        case 0x162a88u: goto label_162a88;
        case 0x162a8cu: goto label_162a8c;
        case 0x162a90u: goto label_162a90;
        case 0x162a94u: goto label_162a94;
        case 0x162a98u: goto label_162a98;
        case 0x162a9cu: goto label_162a9c;
        case 0x162aa0u: goto label_162aa0;
        case 0x162aa4u: goto label_162aa4;
        case 0x162aa8u: goto label_162aa8;
        case 0x162aacu: goto label_162aac;
        case 0x162ab0u: goto label_162ab0;
        case 0x162ab4u: goto label_162ab4;
        case 0x162ab8u: goto label_162ab8;
        case 0x162abcu: goto label_162abc;
        case 0x162ac0u: goto label_162ac0;
        case 0x162ac4u: goto label_162ac4;
        case 0x162ac8u: goto label_162ac8;
        case 0x162accu: goto label_162acc;
        case 0x162ad0u: goto label_162ad0;
        case 0x162ad4u: goto label_162ad4;
        case 0x162ad8u: goto label_162ad8;
        case 0x162adcu: goto label_162adc;
        case 0x162ae0u: goto label_162ae0;
        case 0x162ae4u: goto label_162ae4;
        case 0x162ae8u: goto label_162ae8;
        case 0x162aecu: goto label_162aec;
        case 0x162af0u: goto label_162af0;
        case 0x162af4u: goto label_162af4;
        case 0x162af8u: goto label_162af8;
        case 0x162afcu: goto label_162afc;
        case 0x162b00u: goto label_162b00;
        case 0x162b04u: goto label_162b04;
        case 0x162b08u: goto label_162b08;
        case 0x162b0cu: goto label_162b0c;
        case 0x162b10u: goto label_162b10;
        case 0x162b14u: goto label_162b14;
        case 0x162b18u: goto label_162b18;
        case 0x162b1cu: goto label_162b1c;
        case 0x162b20u: goto label_162b20;
        case 0x162b24u: goto label_162b24;
        case 0x162b28u: goto label_162b28;
        case 0x162b2cu: goto label_162b2c;
        case 0x162b30u: goto label_162b30;
        case 0x162b34u: goto label_162b34;
        case 0x162b38u: goto label_162b38;
        case 0x162b3cu: goto label_162b3c;
        case 0x162b40u: goto label_162b40;
        case 0x162b44u: goto label_162b44;
        case 0x162b48u: goto label_162b48;
        case 0x162b4cu: goto label_162b4c;
        case 0x162b50u: goto label_162b50;
        case 0x162b54u: goto label_162b54;
        case 0x162b58u: goto label_162b58;
        case 0x162b5cu: goto label_162b5c;
        case 0x162b60u: goto label_162b60;
        case 0x162b64u: goto label_162b64;
        case 0x162b68u: goto label_162b68;
        case 0x162b6cu: goto label_162b6c;
        case 0x162b70u: goto label_162b70;
        case 0x162b74u: goto label_162b74;
        case 0x162b78u: goto label_162b78;
        case 0x162b7cu: goto label_162b7c;
        case 0x162b80u: goto label_162b80;
        case 0x162b84u: goto label_162b84;
        case 0x162b88u: goto label_162b88;
        case 0x162b8cu: goto label_162b8c;
        case 0x162b90u: goto label_162b90;
        case 0x162b94u: goto label_162b94;
        case 0x162b98u: goto label_162b98;
        case 0x162b9cu: goto label_162b9c;
        case 0x162ba0u: goto label_162ba0;
        case 0x162ba4u: goto label_162ba4;
        case 0x162ba8u: goto label_162ba8;
        case 0x162bacu: goto label_162bac;
        case 0x162bb0u: goto label_162bb0;
        case 0x162bb4u: goto label_162bb4;
        case 0x162bb8u: goto label_162bb8;
        case 0x162bbcu: goto label_162bbc;
        case 0x162bc0u: goto label_162bc0;
        case 0x162bc4u: goto label_162bc4;
        case 0x162bc8u: goto label_162bc8;
        case 0x162bccu: goto label_162bcc;
        case 0x162bd0u: goto label_162bd0;
        case 0x162bd4u: goto label_162bd4;
        case 0x162bd8u: goto label_162bd8;
        case 0x162bdcu: goto label_162bdc;
        case 0x162be0u: goto label_162be0;
        case 0x162be4u: goto label_162be4;
        case 0x162be8u: goto label_162be8;
        case 0x162becu: goto label_162bec;
        case 0x162bf0u: goto label_162bf0;
        case 0x162bf4u: goto label_162bf4;
        case 0x162bf8u: goto label_162bf8;
        case 0x162bfcu: goto label_162bfc;
        case 0x162c00u: goto label_162c00;
        case 0x162c04u: goto label_162c04;
        case 0x162c08u: goto label_162c08;
        case 0x162c0cu: goto label_162c0c;
        case 0x162c10u: goto label_162c10;
        case 0x162c14u: goto label_162c14;
        case 0x162c18u: goto label_162c18;
        case 0x162c1cu: goto label_162c1c;
        case 0x162c20u: goto label_162c20;
        case 0x162c24u: goto label_162c24;
        case 0x162c28u: goto label_162c28;
        case 0x162c2cu: goto label_162c2c;
        case 0x162c30u: goto label_162c30;
        case 0x162c34u: goto label_162c34;
        case 0x162c38u: goto label_162c38;
        case 0x162c3cu: goto label_162c3c;
        case 0x162c40u: goto label_162c40;
        case 0x162c44u: goto label_162c44;
        case 0x162c48u: goto label_162c48;
        case 0x162c4cu: goto label_162c4c;
        case 0x162c50u: goto label_162c50;
        case 0x162c54u: goto label_162c54;
        case 0x162c58u: goto label_162c58;
        case 0x162c5cu: goto label_162c5c;
        case 0x162c60u: goto label_162c60;
        case 0x162c64u: goto label_162c64;
        case 0x162c68u: goto label_162c68;
        case 0x162c6cu: goto label_162c6c;
        case 0x162c70u: goto label_162c70;
        case 0x162c74u: goto label_162c74;
        case 0x162c78u: goto label_162c78;
        case 0x162c7cu: goto label_162c7c;
        case 0x162c80u: goto label_162c80;
        case 0x162c84u: goto label_162c84;
        case 0x162c88u: goto label_162c88;
        case 0x162c8cu: goto label_162c8c;
        case 0x162c90u: goto label_162c90;
        case 0x162c94u: goto label_162c94;
        case 0x162c98u: goto label_162c98;
        case 0x162c9cu: goto label_162c9c;
        case 0x162ca0u: goto label_162ca0;
        case 0x162ca4u: goto label_162ca4;
        case 0x162ca8u: goto label_162ca8;
        case 0x162cacu: goto label_162cac;
        case 0x162cb0u: goto label_162cb0;
        case 0x162cb4u: goto label_162cb4;
        case 0x162cb8u: goto label_162cb8;
        case 0x162cbcu: goto label_162cbc;
        case 0x162cc0u: goto label_162cc0;
        case 0x162cc4u: goto label_162cc4;
        case 0x162cc8u: goto label_162cc8;
        case 0x162cccu: goto label_162ccc;
        case 0x162cd0u: goto label_162cd0;
        case 0x162cd4u: goto label_162cd4;
        case 0x162cd8u: goto label_162cd8;
        case 0x162cdcu: goto label_162cdc;
        case 0x162ce0u: goto label_162ce0;
        case 0x162ce4u: goto label_162ce4;
        case 0x162ce8u: goto label_162ce8;
        case 0x162cecu: goto label_162cec;
        case 0x162cf0u: goto label_162cf0;
        case 0x162cf4u: goto label_162cf4;
        case 0x162cf8u: goto label_162cf8;
        case 0x162cfcu: goto label_162cfc;
        case 0x162d00u: goto label_162d00;
        case 0x162d04u: goto label_162d04;
        case 0x162d08u: goto label_162d08;
        case 0x162d0cu: goto label_162d0c;
        case 0x162d10u: goto label_162d10;
        case 0x162d14u: goto label_162d14;
        case 0x162d18u: goto label_162d18;
        case 0x162d1cu: goto label_162d1c;
        case 0x162d20u: goto label_162d20;
        case 0x162d24u: goto label_162d24;
        case 0x162d28u: goto label_162d28;
        case 0x162d2cu: goto label_162d2c;
        case 0x162d30u: goto label_162d30;
        case 0x162d34u: goto label_162d34;
        case 0x162d38u: goto label_162d38;
        case 0x162d3cu: goto label_162d3c;
        case 0x162d40u: goto label_162d40;
        case 0x162d44u: goto label_162d44;
        case 0x162d48u: goto label_162d48;
        case 0x162d4cu: goto label_162d4c;
        case 0x162d50u: goto label_162d50;
        case 0x162d54u: goto label_162d54;
        case 0x162d58u: goto label_162d58;
        case 0x162d5cu: goto label_162d5c;
        case 0x162d60u: goto label_162d60;
        case 0x162d64u: goto label_162d64;
        case 0x162d68u: goto label_162d68;
        case 0x162d6cu: goto label_162d6c;
        case 0x162d70u: goto label_162d70;
        case 0x162d74u: goto label_162d74;
        case 0x162d78u: goto label_162d78;
        case 0x162d7cu: goto label_162d7c;
        case 0x162d80u: goto label_162d80;
        case 0x162d84u: goto label_162d84;
        case 0x162d88u: goto label_162d88;
        case 0x162d8cu: goto label_162d8c;
        case 0x162d90u: goto label_162d90;
        case 0x162d94u: goto label_162d94;
        case 0x162d98u: goto label_162d98;
        case 0x162d9cu: goto label_162d9c;
        case 0x162da0u: goto label_162da0;
        case 0x162da4u: goto label_162da4;
        case 0x162da8u: goto label_162da8;
        case 0x162dacu: goto label_162dac;
        case 0x162db0u: goto label_162db0;
        case 0x162db4u: goto label_162db4;
        case 0x162db8u: goto label_162db8;
        case 0x162dbcu: goto label_162dbc;
        case 0x162dc0u: goto label_162dc0;
        case 0x162dc4u: goto label_162dc4;
        case 0x162dc8u: goto label_162dc8;
        case 0x162dccu: goto label_162dcc;
        case 0x162dd0u: goto label_162dd0;
        case 0x162dd4u: goto label_162dd4;
        case 0x162dd8u: goto label_162dd8;
        case 0x162ddcu: goto label_162ddc;
        case 0x162de0u: goto label_162de0;
        case 0x162de4u: goto label_162de4;
        case 0x162de8u: goto label_162de8;
        case 0x162decu: goto label_162dec;
        case 0x162df0u: goto label_162df0;
        case 0x162df4u: goto label_162df4;
        case 0x162df8u: goto label_162df8;
        case 0x162dfcu: goto label_162dfc;
        case 0x162e00u: goto label_162e00;
        case 0x162e04u: goto label_162e04;
        case 0x162e08u: goto label_162e08;
        case 0x162e0cu: goto label_162e0c;
        case 0x162e10u: goto label_162e10;
        case 0x162e14u: goto label_162e14;
        case 0x162e18u: goto label_162e18;
        case 0x162e1cu: goto label_162e1c;
        case 0x162e20u: goto label_162e20;
        case 0x162e24u: goto label_162e24;
        case 0x162e28u: goto label_162e28;
        case 0x162e2cu: goto label_162e2c;
        default: break;
    }

    ctx->pc = 0x161fb0u;

label_161fb0:
    // 0x161fb0: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x161fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_161fb4:
    // 0x161fb4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x161fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_161fb8:
    // 0x161fb8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x161fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_161fbc:
    // 0x161fbc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x161fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_161fc0:
    // 0x161fc0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x161fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_161fc4:
    // 0x161fc4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x161fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_161fc8:
    // 0x161fc8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x161fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_161fcc:
    // 0x161fcc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x161fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_161fd0:
    // 0x161fd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x161fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_161fd4:
    // 0x161fd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x161fd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_161fd8:
    // 0x161fd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x161fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_161fdc:
    // 0x161fdc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x161fdcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_161fe0:
    // 0x161fe0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x161fe0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_161fe4:
    // 0x161fe4: 0x84a201f6  lh          $v0, 0x1F6($a1)
    ctx->pc = 0x161fe4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 502)));
label_161fe8:
    // 0x161fe8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x161fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_161fec:
    // 0x161fec: 0xa4a201f6  sh          $v0, 0x1F6($a1)
    ctx->pc = 0x161fecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 502), (uint16_t)GPR_U32(ctx, 2));
label_161ff0:
    // 0x161ff0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x161ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_161ff4:
    // 0x161ff4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x161ff4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_161ff8:
    // 0x161ff8: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x161ff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_161ffc:
    // 0x161ffc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_162000:
    if (ctx->pc == 0x162000u) {
        ctx->pc = 0x162000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161FFCu;
        // 0x162000: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162004u;
        goto label_162004;
    }
    ctx->pc = 0x161FFCu;
    {
        const bool branch_taken_0x161ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161FFCu;
        // 0x162000: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ffc) {
            ctx->pc = 0x16200Cu;
            goto label_16200c;
        }
    }
    ctx->pc = 0x162004u;
label_162004:
    // 0x162004: 0x1000037d  b           . + 4 + (0x37D << 2)
label_162008:
    if (ctx->pc == 0x162008u) {
        ctx->pc = 0x162008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162004u;
        // 0x162008: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16200Cu;
        goto label_16200c;
    }
    ctx->pc = 0x162004u;
    {
        const bool branch_taken_0x162004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162004u;
        // 0x162008: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162004) {
            ctx->pc = 0x162DFCu;
            goto label_162dfc;
        }
    }
    ctx->pc = 0x16200Cu;
label_16200c:
    // 0x16200c: 0xc6220334  lwc1        $f2, 0x334($s1)
    ctx->pc = 0x16200cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_162010:
    // 0x162010: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x162010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_162014:
    // 0x162014: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_162018:
    // 0x162018: 0x26540010  addiu       $s4, $s2, 0x10
    ctx->pc = 0x162018u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_16201c:
    // 0x16201c: 0x3c107000  lui         $s0, 0x7000
    ctx->pc = 0x16201cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28672 << 16));
label_162020:
    // 0x162020: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x162020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_162024:
    // 0x162024: 0xc62002e8  lwc1        $f0, 0x2E8($s1)
    ctx->pc = 0x162024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162028:
    // 0x162028: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x162028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16202c:
    // 0x16202c: 0x261500b0  addiu       $s5, $s0, 0xB0
    ctx->pc = 0x16202cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_162030:
    // 0x162030: 0x24130009  addiu       $s3, $zero, 0x9
    ctx->pc = 0x162030u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_162034:
    // 0x162034: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x162034u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_162038:
    // 0x162038: 0xc055c70  jal         func_1571C0
label_16203c:
    if (ctx->pc == 0x16203Cu) {
        ctx->pc = 0x16203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162038u;
        // 0x16203c: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x162040u;
        goto label_162040;
    }
    ctx->pc = 0x162038u;
    SET_GPR_U32(ctx, 31, 0x162040u);
    ctx->pc = 0x16203Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162038u;
    // 0x16203c: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1571C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1571C0u, 0x162038u, 0x162040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162040u;
label_162040:
    // 0x162040: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x162040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_162044:
    // 0x162044: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x162044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_162048:
    // 0x162048: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x162048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16204c:
    // 0x16204c: 0xc4410134  lwc1        $f1, 0x134($v0)
    ctx->pc = 0x16204cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162050:
    // 0x162050: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x162050u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162054:
    // 0x162054: 0x0  nop
    ctx->pc = 0x162054u;
    // NOP
label_162058:
    // 0x162058: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_16205c:
    if (ctx->pc == 0x16205Cu) {
        ctx->pc = 0x162060u;
        goto label_162060;
    }
    ctx->pc = 0x162058u;
    {
        const bool branch_taken_0x162058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162058) {
            ctx->pc = 0x162068u;
            goto label_162068;
        }
    }
    ctx->pc = 0x162060u;
label_162060:
    // 0x162060: 0x10000002  b           . + 4 + (0x2 << 2)
label_162064:
    if (ctx->pc == 0x162064u) {
        ctx->pc = 0x162064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162060u;
        // 0x162064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162068u;
        goto label_162068;
    }
    ctx->pc = 0x162060u;
    {
        const bool branch_taken_0x162060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162060u;
        // 0x162064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162060) {
            ctx->pc = 0x16206Cu;
            goto label_16206c;
        }
    }
    ctx->pc = 0x162068u;
label_162068:
    // 0x162068: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16206c:
    // 0x16206c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_162070:
    if (ctx->pc == 0x162070u) {
        ctx->pc = 0x162074u;
        goto label_162074;
    }
    ctx->pc = 0x16206Cu;
    {
        const bool branch_taken_0x16206c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16206c) {
            ctx->pc = 0x16207Cu;
            goto label_16207c;
        }
    }
    ctx->pc = 0x162074u;
label_162074:
    // 0x162074: 0x10000015  b           . + 4 + (0x15 << 2)
label_162078:
    if (ctx->pc == 0x162078u) {
        ctx->pc = 0x162078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162074u;
        // 0x162078: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16207Cu;
        goto label_16207c;
    }
    ctx->pc = 0x162074u;
    {
        const bool branch_taken_0x162074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162074u;
        // 0x162078: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162074) {
            ctx->pc = 0x1620CCu;
            goto label_1620cc;
        }
    }
    ctx->pc = 0x16207Cu;
label_16207c:
    // 0x16207c: 0x2662fffe  addiu       $v0, $s3, -0x2
    ctx->pc = 0x16207cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
label_162080:
    // 0x162080: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x162080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_162084:
    // 0x162084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162088:
    // 0x162088: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x162088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16208c:
    // 0x16208c: 0x0  nop
    ctx->pc = 0x16208cu;
    // NOP
label_162090:
    // 0x162090: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_162094:
    // 0x162094: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x162094u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_162098:
    // 0x162098: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x162098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16209c:
    // 0x16209c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16209cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1620a0:
    // 0x1620a0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1620a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1620a4:
    // 0x1620a4: 0x0  nop
    ctx->pc = 0x1620a4u;
    // NOP
label_1620a8:
    // 0x1620a8: 0x24530002  addiu       $s3, $v0, 0x2
    ctx->pc = 0x1620a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_1620ac:
    // 0x1620ac: 0x2a61000a  slti        $at, $s3, 0xA
    ctx->pc = 0x1620acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
label_1620b0:
    // 0x1620b0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1620b4:
    if (ctx->pc == 0x1620B4u) {
        ctx->pc = 0x1620B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1620B0u;
        // 0x1620b4: 0x2a610002  slti        $at, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1620B8u;
        goto label_1620b8;
    }
    ctx->pc = 0x1620B0u;
    {
        const bool branch_taken_0x1620b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1620B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1620B0u;
        // 0x1620b4: 0x2a610002  slti        $at, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1620b0) {
            ctx->pc = 0x1620C0u;
            goto label_1620c0;
        }
    }
    ctx->pc = 0x1620B8u;
label_1620b8:
    // 0x1620b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1620bc:
    if (ctx->pc == 0x1620BCu) {
        ctx->pc = 0x1620BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1620B8u;
        // 0x1620bc: 0x24130009  addiu       $s3, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1620C0u;
        goto label_1620c0;
    }
    ctx->pc = 0x1620B8u;
    {
        const bool branch_taken_0x1620b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1620BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1620B8u;
        // 0x1620bc: 0x24130009  addiu       $s3, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1620b8) {
            ctx->pc = 0x1620CCu;
            goto label_1620cc;
        }
    }
    ctx->pc = 0x1620C0u;
label_1620c0:
    // 0x1620c0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1620c4:
    if (ctx->pc == 0x1620C4u) {
        ctx->pc = 0x1620C8u;
        goto label_1620c8;
    }
    ctx->pc = 0x1620C0u;
    {
        const bool branch_taken_0x1620c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1620c0) {
            ctx->pc = 0x1620CCu;
            goto label_1620cc;
        }
    }
    ctx->pc = 0x1620C8u;
label_1620c8:
    // 0x1620c8: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1620c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1620cc:
    // 0x1620cc: 0x7a260000  lq          $a2, 0x0($s1)
    ctx->pc = 0x1620ccu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1620d0:
    // 0x1620d0: 0x7e060000  sq          $a2, 0x0($s0)
    ctx->pc = 0x1620d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 6));
label_1620d4:
    // 0x1620d4: 0x26220300  addiu       $v0, $s1, 0x300
    ctx->pc = 0x1620d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_1620d8:
    // 0x1620d8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1620d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1620dc:
    // 0x1620dc: 0xda270000  lqc2        $vf7, 0x0($s1)
    ctx->pc = 0x1620dcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1620e0:
    // 0x1620e0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1620e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1620e4:
    // 0x1620e4: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x1620e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_1620e8:
    // 0x1620e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1620e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1620ec:
    // 0x1620ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1620ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1620f0:
    // 0x1620f0: 0x1000000e  b           . + 4 + (0xE << 2)
label_1620f4:
    if (ctx->pc == 0x1620F4u) {
        ctx->pc = 0x1620F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1620F0u;
        // 0x1620f4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1620F8u;
        goto label_1620f8;
    }
    ctx->pc = 0x1620F0u;
    {
        const bool branch_taken_0x1620f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1620F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1620F0u;
        // 0x1620f4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1620f0) {
            ctx->pc = 0x16212Cu;
            goto label_16212c;
        }
    }
    ctx->pc = 0x1620F8u;
label_1620f8:
    // 0x1620f8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1620f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1620fc:
    // 0x1620fc: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1620fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_162100:
    // 0x162100: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x162100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_162104:
    // 0x162104: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x162104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_162108:
    // 0x162108: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x162108u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_16210c:
    // 0x16210c: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x16210cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_162110:
    // 0x162110: 0x0  nop
    ctx->pc = 0x162110u;
    // NOP
label_162114:
    // 0x162114: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x162114u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_162118:
    // 0x162118: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x162118u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_16211c:
    // 0x16211c: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x16211cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_162120:
    // 0x162120: 0x4a25296c  vsub.w      $vf5, $vf5, $vf5
    ctx->pc = 0x162120u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_162124:
    // 0x162124: 0xf8450000  sqc2        $vf5, 0x0($v0)
    ctx->pc = 0x162124u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[5]));
label_162128:
    // 0x162128: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x162128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_16212c:
    // 0x16212c: 0x0  nop
    ctx->pc = 0x16212cu;
    // NOP
label_162130:
    // 0x162130: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x162130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_162134:
    // 0x162134: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_162138:
    if (ctx->pc == 0x162138u) {
        ctx->pc = 0x162138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162134u;
        // 0x162138: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16213Cu;
        goto label_16213c;
    }
    ctx->pc = 0x162134u;
    {
        const bool branch_taken_0x162134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162134u;
        // 0x162138: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162134) {
            ctx->pc = 0x1620F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1620f8;
        }
    }
    ctx->pc = 0x16213Cu;
label_16213c:
    // 0x16213c: 0x26230300  addiu       $v1, $s1, 0x300
    ctx->pc = 0x16213cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_162140:
    // 0x162140: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x162140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_162144:
    // 0x162144: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x162144u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_162148:
    // 0x162148: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x162148u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_16214c:
    // 0x16214c: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16214cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_162150:
    // 0x162150: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x162150u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_162154:
    // 0x162154: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x162154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_162158:
    // 0x162158: 0x1262003a  beq         $s3, $v0, . + 4 + (0x3A << 2)
label_16215c:
    if (ctx->pc == 0x16215Cu) {
        ctx->pc = 0x16215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162158u;
        // 0x16215c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162160u;
        goto label_162160;
    }
    ctx->pc = 0x162158u;
    {
        const bool branch_taken_0x162158 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x16215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162158u;
        // 0x16215c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162158) {
            ctx->pc = 0x162244u;
            goto label_162244;
        }
    }
    ctx->pc = 0x162160u;
label_162160:
    // 0x162160: 0x10000020  b           . + 4 + (0x20 << 2)
label_162164:
    if (ctx->pc == 0x162164u) {
        ctx->pc = 0x162168u;
        goto label_162168;
    }
    ctx->pc = 0x162160u;
    {
        const bool branch_taken_0x162160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162160) {
            ctx->pc = 0x1621E4u;
            goto label_1621e4;
        }
    }
    ctx->pc = 0x162168u;
label_162168:
    // 0x162168: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x162168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_16216c:
    // 0x16216c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16216cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_162170:
    // 0x162170: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x162170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_162174:
    // 0x162174: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_162178:
    // 0x162178: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x162178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_16217c:
    // 0x16217c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16217cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162180:
    // 0x162180: 0x0  nop
    ctx->pc = 0x162180u;
    // NOP
label_162184:
    // 0x162184: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x162184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_162188:
    // 0x162188: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x162188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_16218c:
    // 0x16218c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x16218cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_162190:
    // 0x162190: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x162190u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_162194:
    // 0x162194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162198:
    // 0x162198: 0x0  nop
    ctx->pc = 0x162198u;
    // NOP
label_16219c:
    // 0x16219c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16219cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1621a0:
    // 0x1621a0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1621a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1621a4:
    // 0x1621a4: 0x0  nop
    ctx->pc = 0x1621a4u;
    // NOP
label_1621a8:
    // 0x1621a8: 0x0  nop
    ctx->pc = 0x1621a8u;
    // NOP
label_1621ac:
    // 0x1621ac: 0xc055cb4  jal         func_1572D0
label_1621b0:
    if (ctx->pc == 0x1621B0u) {
        ctx->pc = 0x1621B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621ACu;
        // 0x1621b0: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1621B4u;
        goto label_1621b4;
    }
    ctx->pc = 0x1621ACu;
    SET_GPR_U32(ctx, 31, 0x1621B4u);
    ctx->pc = 0x1621B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1621ACu;
    // 0x1621b0: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1572D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1572D0u, 0x1621ACu, 0x1621B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1621B4u;
label_1621b4:
    // 0x1621b4: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1621b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1621b8:
    // 0x1621b8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1621b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1621bc:
    // 0x1621bc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1621bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1621c0:
    // 0x1621c0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1621c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1621c4:
    // 0x1621c4: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1621c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_1621c8:
    // 0x1621c8: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1621c8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_1621cc:
    // 0x1621cc: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x1621ccu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1621d0:
    // 0x1621d0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1621d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1621d4:
    // 0x1621d4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1621d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1621d8:
    // 0x1621d8: 0x4be8324a  vmaddz.xyzw $vf9, $vf6, $vf8z
    ctx->pc = 0x1621d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_1621dc:
    // 0x1621dc: 0xf8490000  sqc2        $vf9, 0x0($v0)
    ctx->pc = 0x1621dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[9]));
label_1621e0:
    // 0x1621e0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1621e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1621e4:
    // 0x1621e4: 0x0  nop
    ctx->pc = 0x1621e4u;
    // NOP
label_1621e8:
    // 0x1621e8: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x1621e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_1621ec:
    // 0x1621ec: 0x284102a  slt         $v0, $s4, $a0
    ctx->pc = 0x1621ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1621f0:
    // 0x1621f0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_1621f4:
    if (ctx->pc == 0x1621F4u) {
        ctx->pc = 0x1621F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621F0u;
        // 0x1621f4: 0x2741023  subu        $v0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1621F8u;
        goto label_1621f8;
    }
    ctx->pc = 0x1621F0u;
    {
        const bool branch_taken_0x1621f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1621F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621F0u;
        // 0x1621f4: 0x2741023  subu        $v0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1621f0) {
            ctx->pc = 0x162168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162168;
        }
    }
    ctx->pc = 0x1621F8u;
label_1621f8:
    // 0x1621f8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1621fc:
    if (ctx->pc == 0x1621FCu) {
        ctx->pc = 0x1621FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621F8u;
        // 0x1621fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162200u;
        goto label_162200;
    }
    ctx->pc = 0x1621F8u;
    {
        const bool branch_taken_0x1621f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1621FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621F8u;
        // 0x1621fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1621f8) {
            ctx->pc = 0x16222Cu;
            goto label_16222c;
        }
    }
    ctx->pc = 0x162200u;
label_162200:
    // 0x162200: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x162200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_162204:
    // 0x162204: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x162204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_162208:
    // 0x162208: 0x2a33821  addu        $a3, $s5, $v1
    ctx->pc = 0x162208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_16220c:
    // 0x16220c: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x16220cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_162210:
    // 0x162210: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x162210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_162214:
    // 0x162214: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x162214u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_162218:
    // 0x162218: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x162218u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_16221c:
    // 0x16221c: 0x4a200180  vaddx.w     $vf6, $vf0, $vf0x
    ctx->pc = 0x16221cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_162220:
    // 0x162220: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x162220u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_162224:
    // 0x162224: 0xf8e60000  sqc2        $vf6, 0x0($a3)
    ctx->pc = 0x162224u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_162228:
    // 0x162228: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x162228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_16222c:
    // 0x16222c: 0x0  nop
    ctx->pc = 0x16222cu;
    // NOP
label_162230:
    // 0x162230: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x162230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_162234:
    // 0x162234: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_162238:
    if (ctx->pc == 0x162238u) {
        ctx->pc = 0x162238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162234u;
        // 0x162238: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16223Cu;
        goto label_16223c;
    }
    ctx->pc = 0x162234u;
    {
        const bool branch_taken_0x162234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162234u;
        // 0x162238: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162234) {
            ctx->pc = 0x162200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162200;
        }
    }
    ctx->pc = 0x16223Cu;
label_16223c:
    // 0x16223c: 0x10000004  b           . + 4 + (0x4 << 2)
label_162240:
    if (ctx->pc == 0x162240u) {
        ctx->pc = 0x162240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16223Cu;
        // 0x162240: 0x864301f4  lh          $v1, 0x1F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 500)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162244u;
        goto label_162244;
    }
    ctx->pc = 0x16223Cu;
    {
        const bool branch_taken_0x16223c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16223Cu;
        // 0x162240: 0x864301f4  lh          $v1, 0x1F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16223c) {
            ctx->pc = 0x162250u;
            goto label_162250;
        }
    }
    ctx->pc = 0x162244u;
label_162244:
    // 0x162244: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x162244u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_162248:
    // 0x162248: 0x7ea60000  sq          $a2, 0x0($s5)
    ctx->pc = 0x162248u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 6));
label_16224c:
    // 0x16224c: 0x864301f4  lh          $v1, 0x1F4($s2)
    ctx->pc = 0x16224cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 500)));
label_162250:
    // 0x162250: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x162250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
label_162254:
    // 0x162254: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x162254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
label_162258:
    // 0x162258: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x162258u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16225c:
    // 0x16225c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16225cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162260:
    // 0x162260: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x162260u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_162264:
    // 0x162264: 0x0  nop
    ctx->pc = 0x162264u;
    // NOP
label_162268:
    // 0x162268: 0x0  nop
    ctx->pc = 0x162268u;
    // NOP
label_16226c:
    // 0x16226c: 0x1010  mfhi        $v0
    ctx->pc = 0x16226cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_162270:
    // 0x162270: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x162270u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_162274:
    // 0x162274: 0x10000029  b           . + 4 + (0x29 << 2)
label_162278:
    if (ctx->pc == 0x162278u) {
        ctx->pc = 0x162278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162274u;
        // 0x162278: 0x43b821  addu        $s7, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16227Cu;
        goto label_16227c;
    }
    ctx->pc = 0x162274u;
    {
        const bool branch_taken_0x162274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162274u;
        // 0x162278: 0x43b821  addu        $s7, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162274) {
            ctx->pc = 0x16231Cu;
            goto label_16231c;
        }
    }
    ctx->pc = 0x16227Cu;
label_16227c:
    // 0x16227c: 0x8e4401f0  lw          $a0, 0x1F0($s2)
    ctx->pc = 0x16227cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
label_162280:
    // 0x162280: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x162280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_162284:
    // 0x162284: 0x2a24021  addu        $t0, $s5, $v0
    ctx->pc = 0x162284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_162288:
    // 0x162288: 0x2024821  addu        $t1, $s0, $v0
    ctx->pc = 0x162288u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_16228c:
    // 0x16228c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x16228cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_162290:
    // 0x162290: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x162290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_162294:
    // 0x162294: 0xc054a14  jal         func_152850
label_162298:
    if (ctx->pc == 0x162298u) {
        ctx->pc = 0x162298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162294u;
        // 0x162298: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16229Cu;
        goto label_16229c;
    }
    ctx->pc = 0x162294u;
    SET_GPR_U32(ctx, 31, 0x16229Cu);
    ctx->pc = 0x162298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162294u;
    // 0x162298: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152850u, 0x162294u, 0x16229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16229Cu;
label_16229c:
    // 0x16229c: 0xae220338  sw          $v0, 0x338($s1)
    ctx->pc = 0x16229cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 2));
label_1622a0:
    // 0x1622a0: 0x8e220338  lw          $v0, 0x338($s1)
    ctx->pc = 0x1622a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_1622a4:
    // 0x1622a4: 0x440001c  bltz        $v0, . + 4 + (0x1C << 2)
label_1622a8:
    if (ctx->pc == 0x1622A8u) {
        ctx->pc = 0x1622ACu;
        goto label_1622ac;
    }
    ctx->pc = 0x1622A4u;
    {
        const bool branch_taken_0x1622a4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1622a4) {
            ctx->pc = 0x162318u;
            goto label_162318;
        }
    }
    ctx->pc = 0x1622ACu;
label_1622ac:
    // 0x1622ac: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x1622acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1622b0:
    // 0x1622b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1622b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1622b4:
    // 0x1622b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1622b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1622b8:
    // 0x1622b8: 0x0  nop
    ctx->pc = 0x1622b8u;
    // NOP
label_1622bc:
    // 0x1622bc: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x1622bcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_1622c0:
    // 0x1622c0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1622c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1622c4:
    // 0x1622c4: 0x0  nop
    ctx->pc = 0x1622c4u;
    // NOP
label_1622c8:
    // 0x1622c8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_1622cc:
    if (ctx->pc == 0x1622CCu) {
        ctx->pc = 0x1622D0u;
        goto label_1622d0;
    }
    ctx->pc = 0x1622C8u;
    {
        const bool branch_taken_0x1622c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1622c8) {
            ctx->pc = 0x162318u;
            goto label_162318;
        }
    }
    ctx->pc = 0x1622D0u;
label_1622d0:
    // 0x1622d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1622d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1622d4:
    // 0x1622d4: 0x0  nop
    ctx->pc = 0x1622d4u;
    // NOP
label_1622d8:
    // 0x1622d8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1622d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1622dc:
    // 0x1622dc: 0x0  nop
    ctx->pc = 0x1622dcu;
    // NOP
label_1622e0:
    // 0x1622e0: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_1622e4:
    if (ctx->pc == 0x1622E4u) {
        ctx->pc = 0x1622E8u;
        goto label_1622e8;
    }
    ctx->pc = 0x1622E0u;
    {
        const bool branch_taken_0x1622e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1622e0) {
            ctx->pc = 0x162318u;
            goto label_162318;
        }
    }
    ctx->pc = 0x1622E8u;
label_1622e8:
    // 0x1622e8: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x1622e8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1622ec:
    // 0x1622ec: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1622ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1622f0:
    // 0x1622f0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1622f0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1622f4:
    // 0x1622f4: 0x0  nop
    ctx->pc = 0x1622f4u;
    // NOP
label_1622f8:
    // 0x1622f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1622f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1622fc:
    // 0x1622fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1622fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_162300:
    // 0x162300: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x162300u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_162304:
    // 0x162304: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x162304u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_162308:
    // 0x162308: 0x0  nop
    ctx->pc = 0x162308u;
    // NOP
label_16230c:
    // 0x16230c: 0x0  nop
    ctx->pc = 0x16230cu;
    // NOP
label_162310:
    // 0x162310: 0x10000007  b           . + 4 + (0x7 << 2)
label_162314:
    if (ctx->pc == 0x162314u) {
        ctx->pc = 0x162314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162310u;
        // 0x162314: 0xe62002e8  swc1        $f0, 0x2E8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x162318u;
        goto label_162318;
    }
    ctx->pc = 0x162310u;
    {
        const bool branch_taken_0x162310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162310u;
        // 0x162314: 0xe62002e8  swc1        $f0, 0x2E8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x162310) {
            ctx->pc = 0x162330u;
            goto label_162330;
        }
    }
    ctx->pc = 0x162318u;
label_162318:
    // 0x162318: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x162318u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_16231c:
    // 0x16231c: 0x0  nop
    ctx->pc = 0x16231cu;
    // NOP
label_162320:
    // 0x162320: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x162320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_162324:
    // 0x162324: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x162324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_162328:
    // 0x162328: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_16232c:
    if (ctx->pc == 0x16232Cu) {
        ctx->pc = 0x162330u;
        goto label_162330;
    }
    ctx->pc = 0x162328u;
    {
        const bool branch_taken_0x162328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162328) {
            ctx->pc = 0x16227Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16227c;
        }
    }
    ctx->pc = 0x162330u;
label_162330:
    // 0x162330: 0x16c00017  bnez        $s6, . + 4 + (0x17 << 2)
label_162334:
    if (ctx->pc == 0x162334u) {
        ctx->pc = 0x162334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162330u;
        // 0x162334: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162338u;
        goto label_162338;
    }
    ctx->pc = 0x162330u;
    {
        const bool branch_taken_0x162330 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x162334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162330u;
        // 0x162334: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162330) {
            ctx->pc = 0x162390u;
            goto label_162390;
        }
    }
    ctx->pc = 0x162338u;
label_162338:
    // 0x162338: 0x16620015  bne         $s3, $v0, . + 4 + (0x15 << 2)
label_16233c:
    if (ctx->pc == 0x16233Cu) {
        ctx->pc = 0x162340u;
        goto label_162340;
    }
    ctx->pc = 0x162338u;
    {
        const bool branch_taken_0x162338 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x162338) {
            ctx->pc = 0x162390u;
            goto label_162390;
        }
    }
    ctx->pc = 0x162340u;
label_162340:
    // 0x162340: 0x8e4401f0  lw          $a0, 0x1F0($s2)
    ctx->pc = 0x162340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
label_162344:
    // 0x162344: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x162344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_162348:
    // 0x162348: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x162348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_16234c:
    // 0x16234c: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x16234cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_162350:
    // 0x162350: 0x26280300  addiu       $t0, $s1, 0x300
    ctx->pc = 0x162350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_162354:
    // 0x162354: 0xc05541c  jal         func_155070
label_162358:
    if (ctx->pc == 0x162358u) {
        ctx->pc = 0x162358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162354u;
        // 0x162358: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16235Cu;
        goto label_16235c;
    }
    ctx->pc = 0x162354u;
    SET_GPR_U32(ctx, 31, 0x16235Cu);
    ctx->pc = 0x162358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162354u;
    // 0x162358: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155070u, 0x162354u, 0x16235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16235Cu;
label_16235c:
    // 0x16235c: 0xae220338  sw          $v0, 0x338($s1)
    ctx->pc = 0x16235cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 2));
label_162360:
    // 0x162360: 0x8e220338  lw          $v0, 0x338($s1)
    ctx->pc = 0x162360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_162364:
    // 0x162364: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_162368:
    if (ctx->pc == 0x162368u) {
        ctx->pc = 0x16236Cu;
        goto label_16236c;
    }
    ctx->pc = 0x162364u;
    {
        const bool branch_taken_0x162364 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x162364) {
            ctx->pc = 0x162388u;
            goto label_162388;
        }
    }
    ctx->pc = 0x16236Cu;
label_16236c:
    // 0x16236c: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x16236cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_162370:
    // 0x162370: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x162370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_162374:
    // 0x162374: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x162374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_162378:
    // 0x162378: 0x320f809  jalr        $t9
label_16237c:
    if (ctx->pc == 0x16237Cu) {
        ctx->pc = 0x16237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162378u;
        // 0x16237c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162380u;
        goto label_162380;
    }
    ctx->pc = 0x162378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x162380u);
        ctx->pc = 0x16237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162378u;
        // 0x16237c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162378u, 0x162380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162380u;
label_162380:
    // 0x162380: 0x1000029e  b           . + 4 + (0x29E << 2)
label_162384:
    if (ctx->pc == 0x162384u) {
        ctx->pc = 0x162384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162380u;
        // 0x162384: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162388u;
        goto label_162388;
    }
    ctx->pc = 0x162380u;
    {
        const bool branch_taken_0x162380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162380u;
        // 0x162384: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162380) {
            ctx->pc = 0x162DFCu;
            goto label_162dfc;
        }
    }
    ctx->pc = 0x162388u;
label_162388:
    // 0x162388: 0x1000029c  b           . + 4 + (0x29C << 2)
label_16238c:
    if (ctx->pc == 0x16238Cu) {
        ctx->pc = 0x16238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162388u;
        // 0x16238c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162390u;
        goto label_162390;
    }
    ctx->pc = 0x162388u;
    {
        const bool branch_taken_0x162388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162388u;
        // 0x16238c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162388) {
            ctx->pc = 0x162DFCu;
            goto label_162dfc;
        }
    }
    ctx->pc = 0x162390u;
label_162390:
    // 0x162390: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
label_162394:
    if (ctx->pc == 0x162394u) {
        ctx->pc = 0x162394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162390u;
        // 0x162394: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162398u;
        goto label_162398;
    }
    ctx->pc = 0x162390u;
    {
        const bool branch_taken_0x162390 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x162394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162390u;
        // 0x162394: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162390) {
            ctx->pc = 0x1623A0u;
            goto label_1623a0;
        }
    }
    ctx->pc = 0x162398u;
label_162398:
    // 0x162398: 0x10000299  b           . + 4 + (0x299 << 2)
label_16239c:
    if (ctx->pc == 0x16239Cu) {
        ctx->pc = 0x16239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162398u;
        // 0x16239c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1623A0u;
        goto label_1623a0;
    }
    ctx->pc = 0x162398u;
    {
        const bool branch_taken_0x162398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162398u;
        // 0x16239c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162398) {
            ctx->pc = 0x162E00u;
            goto label_162e00;
        }
    }
    ctx->pc = 0x1623A0u;
label_1623a0:
    // 0x1623a0: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x1623a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_1623a4:
    // 0x1623a4: 0x4800295  bltz        $a0, . + 4 + (0x295 << 2)
label_1623a8:
    if (ctx->pc == 0x1623A8u) {
        ctx->pc = 0x1623A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1623A4u;
        // 0x1623a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1623ACu;
        goto label_1623ac;
    }
    ctx->pc = 0x1623A4u;
    {
        const bool branch_taken_0x1623a4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1623A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1623A4u;
        // 0x1623a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1623a4) {
            ctx->pc = 0x162DFCu;
            goto label_162dfc;
        }
    }
    ctx->pc = 0x1623ACu;
label_1623ac:
    // 0x1623ac: 0xc62002e8  lwc1        $f0, 0x2E8($s1)
    ctx->pc = 0x1623acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1623b0:
    // 0x1623b0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1623b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1623b4:
    // 0x1623b4: 0x0  nop
    ctx->pc = 0x1623b4u;
    // NOP
label_1623b8:
    // 0x1623b8: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1623b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1623bc:
    // 0x1623bc: 0x0  nop
    ctx->pc = 0x1623bcu;
    // NOP
label_1623c0:
    // 0x1623c0: 0x4501028d  bc1t        . + 4 + (0x28D << 2)
label_1623c4:
    if (ctx->pc == 0x1623C4u) {
        ctx->pc = 0x1623C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1623C0u;
        // 0x1623c4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1623C8u;
        goto label_1623c8;
    }
    ctx->pc = 0x1623C0u;
    {
        const bool branch_taken_0x1623c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1623C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1623C0u;
        // 0x1623c4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1623c0) {
            ctx->pc = 0x162DF8u;
            goto label_162df8;
        }
    }
    ctx->pc = 0x1623C8u;
label_1623c8:
    // 0x1623c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1623c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1623cc:
    // 0x1623cc: 0x0  nop
    ctx->pc = 0x1623ccu;
    // NOP
label_1623d0:
    // 0x1623d0: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1623d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1623d4:
    // 0x1623d4: 0x0  nop
    ctx->pc = 0x1623d4u;
    // NOP
label_1623d8:
    // 0x1623d8: 0x45000287  bc1f        . + 4 + (0x287 << 2)
label_1623dc:
    if (ctx->pc == 0x1623DCu) {
        ctx->pc = 0x1623E0u;
        goto label_1623e0;
    }
    ctx->pc = 0x1623D8u;
    {
        const bool branch_taken_0x1623d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1623d8) {
            ctx->pc = 0x162DF8u;
            goto label_162df8;
        }
    }
    ctx->pc = 0x1623E0u;
label_1623e0:
    // 0x1623e0: 0x8e4301f0  lw          $v1, 0x1F0($s2)
    ctx->pc = 0x1623e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
label_1623e4:
    // 0x1623e4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1623e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1623e8:
    // 0x1623e8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1623e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1623ec:
    // 0x1623ec: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1623ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1623f0:
    // 0x1623f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1623f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1623f4:
    // 0x1623f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1623f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1623f8:
    // 0x1623f8: 0x1262001d  beq         $s3, $v0, . + 4 + (0x1D << 2)
label_1623fc:
    if (ctx->pc == 0x1623FCu) {
        ctx->pc = 0x1623FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1623F8u;
        // 0x1623fc: 0xae23033c  sw          $v1, 0x33C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 828), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162400u;
        goto label_162400;
    }
    ctx->pc = 0x1623F8u;
    {
        const bool branch_taken_0x1623f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1623FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1623F8u;
        // 0x1623fc: 0xae23033c  sw          $v1, 0x33C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 828), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1623f8) {
            ctx->pc = 0x162470u;
            goto label_162470;
        }
    }
    ctx->pc = 0x162400u;
label_162400:
    // 0x162400: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x162400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_162404:
    // 0x162404: 0xc055cb4  jal         func_1572D0
label_162408:
    if (ctx->pc == 0x162408u) {
        ctx->pc = 0x162408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162404u;
        // 0x162408: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16240Cu;
        goto label_16240c;
    }
    ctx->pc = 0x162404u;
    SET_GPR_U32(ctx, 31, 0x16240Cu);
    ctx->pc = 0x162408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162404u;
    // 0x162408: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1572D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1572D0u, 0x162404u, 0x16240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16240Cu;
label_16240c:
    // 0x16240c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16240cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162410:
    // 0x162410: 0x1000000f  b           . + 4 + (0xF << 2)
label_162414:
    if (ctx->pc == 0x162414u) {
        ctx->pc = 0x162414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162410u;
        // 0x162414: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162418u;
        goto label_162418;
    }
    ctx->pc = 0x162410u;
    {
        const bool branch_taken_0x162410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162410u;
        // 0x162414: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162410) {
            ctx->pc = 0x162450u;
            goto label_162450;
        }
    }
    ctx->pc = 0x162418u;
label_162418:
    // 0x162418: 0x8e23033c  lw          $v1, 0x33C($s1)
    ctx->pc = 0x162418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 828)));
label_16241c:
    // 0x16241c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x16241cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_162420:
    // 0x162420: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x162420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_162424:
    // 0x162424: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x162424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_162428:
    // 0x162428: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x162428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16242c:
    // 0x16242c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x16242cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_162430:
    // 0x162430: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x162430u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_162434:
    // 0x162434: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x162434u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_162438:
    // 0x162438: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x162438u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_16243c:
    // 0x16243c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x16243cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_162440:
    // 0x162440: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x162440u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_162444:
    // 0x162444: 0x4be8324a  vmaddz.xyzw $vf9, $vf6, $vf8z
    ctx->pc = 0x162444u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_162448:
    // 0x162448: 0xf8490000  sqc2        $vf9, 0x0($v0)
    ctx->pc = 0x162448u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[9]));
label_16244c:
    // 0x16244c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x16244cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_162450:
    // 0x162450: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x162450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_162454:
    // 0x162454: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_162458:
    if (ctx->pc == 0x162458u) {
        ctx->pc = 0x16245Cu;
        goto label_16245c;
    }
    ctx->pc = 0x162454u;
    {
        const bool branch_taken_0x162454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162454) {
            ctx->pc = 0x162418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162418;
        }
    }
    ctx->pc = 0x16245Cu;
label_16245c:
    // 0x16245c: 0x8e24033c  lw          $a0, 0x33C($s1)
    ctx->pc = 0x16245cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 828)));
label_162460:
    // 0x162460: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x162460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_162464:
    // 0x162464: 0xc054f18  jal         func_153C60
label_162468:
    if (ctx->pc == 0x162468u) {
        ctx->pc = 0x162468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162464u;
        // 0x162468: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16246Cu;
        goto label_16246c;
    }
    ctx->pc = 0x162464u;
    SET_GPR_U32(ctx, 31, 0x16246Cu);
    ctx->pc = 0x162468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162464u;
    // 0x162468: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153C60u, 0x162464u, 0x16246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16246Cu;
label_16246c:
    // 0x16246c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x16246cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_162470:
    // 0x162470: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x162470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_162474:
    // 0x162474: 0x12620067  beq         $s3, $v0, . + 4 + (0x67 << 2)
label_162478:
    if (ctx->pc == 0x162478u) {
        ctx->pc = 0x16247Cu;
        goto label_16247c;
    }
    ctx->pc = 0x162474u;
    {
        const bool branch_taken_0x162474 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x162474) {
            ctx->pc = 0x162614u;
            goto label_162614;
        }
    }
    ctx->pc = 0x16247Cu;
label_16247c:
    // 0x16247c: 0xc62002e8  lwc1        $f0, 0x2E8($s1)
    ctx->pc = 0x16247cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162480:
    // 0x162480: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x162480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_162484:
    // 0x162484: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x162484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_162488:
    // 0x162488: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x162488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_16248c:
    // 0x16248c: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x16248cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_162490:
    // 0x162490: 0x46141041  sub.s       $f1, $f2, $f20
    ctx->pc = 0x162490u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
label_162494:
    // 0x162494: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x162494u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_162498:
    // 0x162498: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x162498u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_16249c:
    // 0x16249c: 0xc055cb4  jal         func_1572D0
label_1624a0:
    if (ctx->pc == 0x1624A0u) {
        ctx->pc = 0x1624A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16249Cu;
        // 0x1624a0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1624A4u;
        goto label_1624a4;
    }
    ctx->pc = 0x16249Cu;
    SET_GPR_U32(ctx, 31, 0x1624A4u);
    ctx->pc = 0x1624A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16249Cu;
    // 0x1624a0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1572D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1572D0u, 0x16249Cu, 0x1624A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1624A4u;
label_1624a4:
    // 0x1624a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1624a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1624a8:
    // 0x1624a8: 0x1000000f  b           . + 4 + (0xF << 2)
label_1624ac:
    if (ctx->pc == 0x1624ACu) {
        ctx->pc = 0x1624ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1624A8u;
        // 0x1624ac: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1624B0u;
        goto label_1624b0;
    }
    ctx->pc = 0x1624A8u;
    {
        const bool branch_taken_0x1624a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1624ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1624A8u;
        // 0x1624ac: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1624a8) {
            ctx->pc = 0x1624E8u;
            goto label_1624e8;
        }
    }
    ctx->pc = 0x1624B0u;
label_1624b0:
    // 0x1624b0: 0x8e23033c  lw          $v1, 0x33C($s1)
    ctx->pc = 0x1624b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 828)));
label_1624b4:
    // 0x1624b4: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1624b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1624b8:
    // 0x1624b8: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x1624b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_1624bc:
    // 0x1624bc: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x1624bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
label_1624c0:
    // 0x1624c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1624c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1624c4:
    // 0x1624c4: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1624c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1624c8:
    // 0x1624c8: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x1624c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_1624cc:
    // 0x1624cc: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x1624ccu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_1624d0:
    // 0x1624d0: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x1624d0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1624d4:
    // 0x1624d4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1624d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1624d8:
    // 0x1624d8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1624d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1624dc:
    // 0x1624dc: 0x4be8324a  vmaddz.xyzw $vf9, $vf6, $vf8z
    ctx->pc = 0x1624dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_1624e0:
    // 0x1624e0: 0xf8490000  sqc2        $vf9, 0x0($v0)
    ctx->pc = 0x1624e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[9]));
label_1624e4:
    // 0x1624e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1624e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1624e8:
    // 0x1624e8: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x1624e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_1624ec:
    // 0x1624ec: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_1624f0:
    if (ctx->pc == 0x1624F0u) {
        ctx->pc = 0x1624F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1624ECu;
        // 0x1624f0: 0x27a20170  addiu       $v0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1624F4u;
        goto label_1624f4;
    }
    ctx->pc = 0x1624ECu;
    {
        const bool branch_taken_0x1624ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1624F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1624ECu;
        // 0x1624f0: 0x27a20170  addiu       $v0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1624ec) {
            ctx->pc = 0x1624B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1624b0;
        }
    }
    ctx->pc = 0x1624F4u;
label_1624f4:
    // 0x1624f4: 0xae22033c  sw          $v0, 0x33C($s1)
    ctx->pc = 0x1624f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 828), GPR_U32(ctx, 2));
label_1624f8:
    // 0x1624f8: 0x8e220338  lw          $v0, 0x338($s1)
    ctx->pc = 0x1624f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_1624fc:
    // 0x1624fc: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1624fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_162500:
    // 0x162500: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_162504:
    if (ctx->pc == 0x162504u) {
        ctx->pc = 0x162504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162500u;
        // 0x162504: 0x22843  sra         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162508u;
        goto label_162508;
    }
    ctx->pc = 0x162500u;
    {
        const bool branch_taken_0x162500 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x162504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162500u;
        // 0x162504: 0x22843  sra         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162500) {
            ctx->pc = 0x162510u;
            goto label_162510;
        }
    }
    ctx->pc = 0x162508u;
label_162508:
    // 0x162508: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x162508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16250c:
    // 0x16250c: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x16250cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
label_162510:
    // 0x162510: 0x8e220338  lw          $v0, 0x338($s1)
    ctx->pc = 0x162510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_162514:
    // 0x162514: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x162514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_162518:
    // 0x162518: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_16251c:
    if (ctx->pc == 0x16251Cu) {
        ctx->pc = 0x16251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162518u;
        // 0x16251c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162520u;
        goto label_162520;
    }
    ctx->pc = 0x162518u;
    {
        const bool branch_taken_0x162518 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x16251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162518u;
        // 0x16251c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162518) {
            ctx->pc = 0x162528u;
            goto label_162528;
        }
    }
    ctx->pc = 0x162520u;
label_162520:
    // 0x162520: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x162520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_162524:
    // 0x162524: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x162524u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_162528:
    // 0x162528: 0x4a10010  bgez        $a1, . + 4 + (0x10 << 2)
label_16252c:
    if (ctx->pc == 0x16252Cu) {
        ctx->pc = 0x162530u;
        goto label_162530;
    }
    ctx->pc = 0x162528u;
    {
        const bool branch_taken_0x162528 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x162528) {
            ctx->pc = 0x16256Cu;
            goto label_16256c;
        }
    }
    ctx->pc = 0x162530u;
label_162530:
    // 0x162530: 0x864401f4  lh          $a0, 0x1F4($s2)
    ctx->pc = 0x162530u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 500)));
label_162534:
    // 0x162534: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x162534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
label_162538:
    // 0x162538: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x162538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
label_16253c:
    // 0x16253c: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x16253cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_162540:
    // 0x162540: 0x0  nop
    ctx->pc = 0x162540u;
    // NOP
label_162544:
    // 0x162544: 0x0  nop
    ctx->pc = 0x162544u;
    // NOP
label_162548:
    // 0x162548: 0x1810  mfhi        $v1
    ctx->pc = 0x162548u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_16254c:
    // 0x16254c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x16254cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_162550:
    // 0x162550: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x162550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_162554:
    // 0x162554: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_162558:
    if (ctx->pc == 0x162558u) {
        ctx->pc = 0x162558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162554u;
        // 0x162558: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16255Cu;
        goto label_16255c;
    }
    ctx->pc = 0x162554u;
    {
        const bool branch_taken_0x162554 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x162558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162554u;
        // 0x162558: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162554) {
            ctx->pc = 0x162564u;
            goto label_162564;
        }
    }
    ctx->pc = 0x16255Cu;
label_16255c:
    // 0x16255c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x16255cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_162560:
    // 0x162560: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x162560u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_162564:
    // 0x162564: 0x10000012  b           . + 4 + (0x12 << 2)
label_162568:
    if (ctx->pc == 0x162568u) {
        ctx->pc = 0x162568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162564u;
        // 0x162568: 0x2465ffff  addiu       $a1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16256Cu;
        goto label_16256c;
    }
    ctx->pc = 0x162564u;
    {
        const bool branch_taken_0x162564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162564u;
        // 0x162568: 0x2465ffff  addiu       $a1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162564) {
            ctx->pc = 0x1625B0u;
            goto label_1625b0;
        }
    }
    ctx->pc = 0x16256Cu;
label_16256c:
    // 0x16256c: 0x864401f4  lh          $a0, 0x1F4($s2)
    ctx->pc = 0x16256cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 500)));
label_162570:
    // 0x162570: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x162570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
label_162574:
    // 0x162574: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x162574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
label_162578:
    // 0x162578: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x162578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_16257c:
    // 0x16257c: 0x0  nop
    ctx->pc = 0x16257cu;
    // NOP
label_162580:
    // 0x162580: 0x0  nop
    ctx->pc = 0x162580u;
    // NOP
label_162584:
    // 0x162584: 0x1810  mfhi        $v1
    ctx->pc = 0x162584u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_162588:
    // 0x162588: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x162588u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_16258c:
    // 0x16258c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x16258cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_162590:
    // 0x162590: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_162594:
    if (ctx->pc == 0x162594u) {
        ctx->pc = 0x162594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162590u;
        // 0x162594: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162598u;
        goto label_162598;
    }
    ctx->pc = 0x162590u;
    {
        const bool branch_taken_0x162590 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x162594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162590u;
        // 0x162594: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162590) {
            ctx->pc = 0x1625A0u;
            goto label_1625a0;
        }
    }
    ctx->pc = 0x162598u;
label_162598:
    // 0x162598: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x162598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_16259c:
    // 0x16259c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x16259cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1625a0:
    // 0x1625a0: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1625a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1625a4:
    // 0x1625a4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1625a8:
    if (ctx->pc == 0x1625A8u) {
        ctx->pc = 0x1625ACu;
        goto label_1625ac;
    }
    ctx->pc = 0x1625A4u;
    {
        const bool branch_taken_0x1625a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1625a4) {
            ctx->pc = 0x1625B0u;
            goto label_1625b0;
        }
    }
    ctx->pc = 0x1625ACu;
label_1625ac:
    // 0x1625ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1625acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1625b0:
    // 0x1625b0: 0x8e430228  lw          $v1, 0x228($s2)
    ctx->pc = 0x1625b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 552)));
label_1625b4:
    // 0x1625b4: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1625b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1625b8:
    // 0x1625b8: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x1625b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_1625bc:
    // 0x1625bc: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x1625bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_1625c0:
    // 0x1625c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1625c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1625c4:
    // 0x1625c4: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1625c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1625c8:
    // 0x1625c8: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x1625c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_1625cc:
    // 0x1625cc: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x1625ccu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_1625d0:
    // 0x1625d0: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x1625d0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1625d4:
    // 0x1625d4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1625d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1625d8:
    // 0x1625d8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1625d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1625dc:
    // 0x1625dc: 0x4be8324a  vmaddz.xyzw $vf9, $vf6, $vf8z
    ctx->pc = 0x1625dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_1625e0:
    // 0x1625e0: 0xf8c90000  sqc2        $vf9, 0x0($a2)
    ctx->pc = 0x1625e0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[9]));
label_1625e4:
    // 0x1625e4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1625e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1625e8:
    // 0x1625e8: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1625e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_1625ec:
    // 0x1625ec: 0x8e420228  lw          $v0, 0x228($s2)
    ctx->pc = 0x1625ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 552)));
label_1625f0:
    // 0x1625f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1625f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1625f4:
    // 0x1625f4: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1625f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1625f8:
    // 0x1625f8: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x1625f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_1625fc:
    // 0x1625fc: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x1625fcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_162600:
    // 0x162600: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x162600u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_162604:
    // 0x162604: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x162604u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_162608:
    // 0x162608: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x162608u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_16260c:
    // 0x16260c: 0x4be8324a  vmaddz.xyzw $vf9, $vf6, $vf8z
    ctx->pc = 0x16260cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_162610:
    // 0x162610: 0xf8890000  sqc2        $vf9, 0x0($a0)
    ctx->pc = 0x162610u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[9]));
label_162614:
    // 0x162614: 0x8e2802e8  lw          $t0, 0x2E8($s1)
    ctx->pc = 0x162614u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 744)));
label_162618:
    // 0x162618: 0x26270300  addiu       $a3, $s1, 0x300
    ctx->pc = 0x162618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_16261c:
    // 0x16261c: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x16261cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_162620:
    // 0x162620: 0xda270000  lqc2        $vf7, 0x0($s1)
    ctx->pc = 0x162620u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_162624:
    // 0x162624: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x162624u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_162628:
    // 0x162628: 0x0  nop
    ctx->pc = 0x162628u;
    // NOP
label_16262c:
    // 0x16262c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x16262cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_162630:
    // 0x162630: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x162630u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_162634:
    // 0x162634: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x162634u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_162638:
    // 0x162638: 0xf8450000  sqc2        $vf5, 0x0($v0)
    ctx->pc = 0x162638u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[5]));
label_16263c:
    // 0x16263c: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x16263cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_162640:
    // 0x162640: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x162640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_162644:
    // 0x162644: 0x8e28033c  lw          $t0, 0x33C($s1)
    ctx->pc = 0x162644u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 828)));
label_162648:
    // 0x162648: 0xc05879c  jal         func_161E70
label_16264c:
    if (ctx->pc == 0x16264Cu) {
        ctx->pc = 0x16264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162648u;
        // 0x16264c: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162650u;
        goto label_162650;
    }
    ctx->pc = 0x162648u;
    SET_GPR_U32(ctx, 31, 0x162650u);
    ctx->pc = 0x16264Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162648u;
    // 0x16264c: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161E70u, 0x162648u, 0x162650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162650u;
label_162650:
    // 0x162650: 0x26230300  addiu       $v1, $s1, 0x300
    ctx->pc = 0x162650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_162654:
    // 0x162654: 0x27a20220  addiu       $v0, $sp, 0x220
    ctx->pc = 0x162654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_162658:
    // 0x162658: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x162658u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_16265c:
    // 0x16265c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x16265cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_162660:
    // 0x162660: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x162660u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_162664:
    // 0x162664: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x162664u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_162668:
    // 0x162668: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x162668u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_16266c:
    // 0x16266c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16266cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_162670:
    // 0x162670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162674:
    // 0x162674: 0xc62102f0  lwc1        $f1, 0x2F0($s1)
    ctx->pc = 0x162674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162678:
    // 0x162678: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x162678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16267c:
    // 0x16267c: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x16267cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_162680:
    // 0x162680: 0x0  nop
    ctx->pc = 0x162680u;
    // NOP
label_162684:
    // 0x162684: 0x0  nop
    ctx->pc = 0x162684u;
    // NOP
label_162688:
    // 0x162688: 0x12620155  beq         $s3, $v0, . + 4 + (0x155 << 2)
label_16268c:
    if (ctx->pc == 0x16268Cu) {
        ctx->pc = 0x162690u;
        goto label_162690;
    }
    ctx->pc = 0x162688u;
    {
        const bool branch_taken_0x162688 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x162688) {
            ctx->pc = 0x162BE0u;
            goto label_162be0;
        }
    }
    ctx->pc = 0x162690u;
label_162690:
    // 0x162690: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x162690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_162694:
    // 0x162694: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x162694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162698:
    // 0x162698: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x162698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16269c:
    // 0x16269c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x16269cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1626a0:
    // 0x1626a0: 0x0  nop
    ctx->pc = 0x1626a0u;
    // NOP
label_1626a4:
    // 0x1626a4: 0x8e420224  lw          $v0, 0x224($s2)
    ctx->pc = 0x1626a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
label_1626a8:
    // 0x1626a8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1626ac:
    if (ctx->pc == 0x1626ACu) {
        ctx->pc = 0x1626ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1626A8u;
        // 0x1626ac: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1626B0u;
        goto label_1626b0;
    }
    ctx->pc = 0x1626A8u;
    {
        const bool branch_taken_0x1626a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1626ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1626A8u;
        // 0x1626ac: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1626a8) {
            ctx->pc = 0x162744u;
            goto label_162744;
        }
    }
    ctx->pc = 0x1626B0u;
label_1626b0:
    // 0x1626b0: 0x27a20220  addiu       $v0, $sp, 0x220
    ctx->pc = 0x1626b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_1626b4:
    // 0x1626b4: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x1626b4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1626b8:
    // 0x1626b8: 0x7e260290  sq          $a2, 0x290($s1)
    ctx->pc = 0x1626b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 656), GPR_VEC(ctx, 6));
label_1626bc:
    // 0x1626bc: 0x46020304  c1          0x20304
    ctx->pc = 0x1626bcu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_1626c0:
    // 0x1626c0: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1626c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_1626c4:
    // 0x1626c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1626c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1626c8:
    // 0x1626c8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1626c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1626cc:
    // 0x1626cc: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x1626ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_1626d0:
    // 0x1626d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1626d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1626d4:
    // 0x1626d4: 0xc7a40210  lwc1        $f4, 0x210($sp)
    ctx->pc = 0x1626d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1626d8:
    // 0x1626d8: 0xc7a20214  lwc1        $f2, 0x214($sp)
    ctx->pc = 0x1626d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1626dc:
    // 0x1626dc: 0xc7a00218  lwc1        $f0, 0x218($sp)
    ctx->pc = 0x1626dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1626e0:
    // 0x1626e0: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x1626e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1626e4:
    // 0x1626e4: 0xc7a60200  lwc1        $f6, 0x200($sp)
    ctx->pc = 0x1626e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1626e8:
    // 0x1626e8: 0xc7a30204  lwc1        $f3, 0x204($sp)
    ctx->pc = 0x1626e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1626ec:
    // 0x1626ec: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x1626ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_1626f0:
    // 0x1626f0: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x1626f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_1626f4:
    // 0x1626f4: 0x46043100  add.s       $f4, $f6, $f4
    ctx->pc = 0x1626f4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
label_1626f8:
    // 0x1626f8: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1626f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1626fc:
    // 0x1626fc: 0xc7a10208  lwc1        $f1, 0x208($sp)
    ctx->pc = 0x1626fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162700:
    // 0x162700: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x162700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_162704:
    // 0x162704: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x162704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_162708:
    // 0x162708: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x162708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16270c:
    // 0x16270c: 0xe7a40200  swc1        $f4, 0x200($sp)
    ctx->pc = 0x16270cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_162710:
    // 0x162710: 0xe7a20204  swc1        $f2, 0x204($sp)
    ctx->pc = 0x162710u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
label_162714:
    // 0x162714: 0xc055b3c  jal         func_156CF0
label_162718:
    if (ctx->pc == 0x162718u) {
        ctx->pc = 0x162718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162714u;
        // 0x162718: 0xe7a00208  swc1        $f0, 0x208($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16271Cu;
        goto label_16271c;
    }
    ctx->pc = 0x162714u;
    SET_GPR_U32(ctx, 31, 0x16271Cu);
    ctx->pc = 0x162718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162714u;
    // 0x162718: 0xe7a00208  swc1        $f0, 0x208($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x162714u, 0x16271Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16271Cu;
label_16271c:
    // 0x16271c: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x16271cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_162720:
    // 0x162720: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_162724:
    // 0x162724: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x162724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_162728:
    // 0x162728: 0x320f809  jalr        $t9
label_16272c:
    if (ctx->pc == 0x16272Cu) {
        ctx->pc = 0x16272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162728u;
        // 0x16272c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162730u;
        goto label_162730;
    }
    ctx->pc = 0x162728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x162730u);
        ctx->pc = 0x16272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162728u;
        // 0x16272c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162728u, 0x162730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162730u;
label_162730:
    // 0x162730: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_162734:
    // 0x162734: 0xc0564b8  jal         func_1592E0
label_162738:
    if (ctx->pc == 0x162738u) {
        ctx->pc = 0x162738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162734u;
        // 0x162738: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16273Cu;
        goto label_16273c;
    }
    ctx->pc = 0x162734u;
    SET_GPR_U32(ctx, 31, 0x16273Cu);
    ctx->pc = 0x162738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162734u;
    // 0x162738: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x162734u, 0x16273Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16273Cu;
label_16273c:
    // 0x16273c: 0x100001af  b           . + 4 + (0x1AF << 2)
label_162740:
    if (ctx->pc == 0x162740u) {
        ctx->pc = 0x162740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16273Cu;
        // 0x162740: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162744u;
        goto label_162744;
    }
    ctx->pc = 0x16273Cu;
    {
        const bool branch_taken_0x16273c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16273Cu;
        // 0x162740: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16273c) {
            ctx->pc = 0x162DFCu;
            goto label_162dfc;
        }
    }
    ctx->pc = 0x162744u;
label_162744:
    // 0x162744: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x162744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_162748:
    // 0x162748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16274c:
    // 0x16274c: 0x0  nop
    ctx->pc = 0x16274cu;
    // NOP
label_162750:
    // 0x162750: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x162750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162754:
    // 0x162754: 0x0  nop
    ctx->pc = 0x162754u;
    // NOP
label_162758:
    // 0x162758: 0x4500006a  bc1f        . + 4 + (0x6A << 2)
label_16275c:
    if (ctx->pc == 0x16275Cu) {
        ctx->pc = 0x16275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162758u;
        // 0x16275c: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162760u;
        goto label_162760;
    }
    ctx->pc = 0x162758u;
    {
        const bool branch_taken_0x162758 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162758u;
        // 0x16275c: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162758) {
            ctx->pc = 0x162904u;
            goto label_162904;
        }
    }
    ctx->pc = 0x162760u;
label_162760:
    // 0x162760: 0x27a20210  addiu       $v0, $sp, 0x210
    ctx->pc = 0x162760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_162764:
    // 0x162764: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x162764u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_162768:
    // 0x162768: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x162768u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_16276c:
    // 0x16276c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16276cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_162770:
    // 0x162770: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x162770u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_162774:
    // 0x162774: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x162774u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_162778:
    // 0x162778: 0x4a0003bf  vwaitq
    ctx->pc = 0x162778u;
    // VWAITQ (Q already resolved in this runtime)
label_16277c:
    // 0x16277c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16277cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_162780:
    // 0x162780: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x162780u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
label_162784:
    // 0x162784: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x162784u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_162788:
    // 0x162788: 0x4a0003bf  vwaitq
    ctx->pc = 0x162788u;
    // VWAITQ (Q already resolved in this runtime)
label_16278c:
    // 0x16278c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16278cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_162790:
    // 0x162790: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x162790u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_162794:
    // 0x162794: 0x8242021c  lb          $v0, 0x21C($s2)
    ctx->pc = 0x162794u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 540)));
label_162798:
    // 0x162798: 0x18400045  blez        $v0, . + 4 + (0x45 << 2)
label_16279c:
    if (ctx->pc == 0x16279Cu) {
        ctx->pc = 0x1627A0u;
        goto label_1627a0;
    }
    ctx->pc = 0x162798u;
    {
        const bool branch_taken_0x162798 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x162798) {
            ctx->pc = 0x1628B0u;
            goto label_1628b0;
        }
    }
    ctx->pc = 0x1627A0u;
label_1627a0:
    // 0x1627a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1627a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1627a4:
    // 0x1627a4: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x1627a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1627a8:
    // 0x1627a8: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x1627a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_1627ac:
    // 0x1627ac: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1627acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1627b0:
    // 0x1627b0: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x1627b0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1627b4:
    // 0x1627b4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1627b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1627b8:
    // 0x1627b8: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1627b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1627bc:
    // 0x1627bc: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1627bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1627c0:
    // 0x1627c0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1627c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1627c4:
    // 0x1627c4: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1627c4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1627c8:
    // 0x1627c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1627c8u;
    // VWAITQ (Q already resolved in this runtime)
label_1627cc:
    // 0x1627cc: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1627ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1627d0:
    // 0x1627d0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1627d0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_1627d4:
    // 0x1627d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1627d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1627d8:
    // 0x1627d8: 0x86420220  lh          $v0, 0x220($s2)
    ctx->pc = 0x1627d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 544)));
label_1627dc:
    // 0x1627dc: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_1627e0:
    if (ctx->pc == 0x1627E0u) {
        ctx->pc = 0x1627E4u;
        goto label_1627e4;
    }
    ctx->pc = 0x1627DCu;
    {
        const bool branch_taken_0x1627dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1627dc) {
            ctx->pc = 0x16284Cu;
            goto label_16284c;
        }
    }
    ctx->pc = 0x1627E4u;
label_1627e4:
    // 0x1627e4: 0x0  nop
    ctx->pc = 0x1627e4u;
    // NOP
label_1627e8:
    // 0x1627e8: 0x0  nop
    ctx->pc = 0x1627e8u;
    // NOP
label_1627ec:
    // 0x1627ec: 0x0  nop
    ctx->pc = 0x1627ecu;
    // NOP
label_1627f0:
    // 0x1627f0: 0x46150004  c1          0x150004
    ctx->pc = 0x1627f0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_1627f4:
    // 0x1627f4: 0x0  nop
    ctx->pc = 0x1627f4u;
    // NOP
label_1627f8:
    // 0x1627f8: 0x0  nop
    ctx->pc = 0x1627f8u;
    // NOP
label_1627fc:
    // 0x1627fc: 0x0  nop
    ctx->pc = 0x1627fcu;
    // NOP
label_162800:
    // 0x162800: 0x460000c4  c1          0xC4
    ctx->pc = 0x162800u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
label_162804:
    // 0x162804: 0x3c024019  lui         $v0, 0x4019
    ctx->pc = 0x162804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16409 << 16));
label_162808:
    // 0x162808: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x162808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_16280c:
    // 0x16280c: 0x3c024018  lui         $v0, 0x4018
    ctx->pc = 0x16280cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16408 << 16));
label_162810:
    // 0x162810: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x162810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
label_162814:
    // 0x162814: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x162814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_162818:
    // 0x162818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16281c:
    // 0x16281c: 0x0  nop
    ctx->pc = 0x16281cu;
    // NOP
label_162820:
    // 0x162820: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x162820u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162824:
    // 0x162824: 0x0  nop
    ctx->pc = 0x162824u;
    // NOP
label_162828:
    // 0x162828: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_16282c:
    if (ctx->pc == 0x16282Cu) {
        ctx->pc = 0x16282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162828u;
        // 0x16282c: 0x46030b42  mul.s       $f13, $f1, $f3 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x162830u;
        goto label_162830;
    }
    ctx->pc = 0x162828u;
    {
        const bool branch_taken_0x162828 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162828u;
        // 0x16282c: 0x46030b42  mul.s       $f13, $f1, $f3 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162828) {
            ctx->pc = 0x1628E8u;
            goto label_1628e8;
        }
    }
    ctx->pc = 0x162830u;
label_162830:
    // 0x162830: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x162830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_162834:
    // 0x162834: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x162834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_162838:
    // 0x162838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16283c:
    // 0x16283c: 0x0  nop
    ctx->pc = 0x16283cu;
    // NOP
label_162840:
    // 0x162840: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x162840u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_162844:
    // 0x162844: 0x10000028  b           . + 4 + (0x28 << 2)
label_162848:
    if (ctx->pc == 0x162848u) {
        ctx->pc = 0x162848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162844u;
        // 0x162848: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16284Cu;
        goto label_16284c;
    }
    ctx->pc = 0x162844u;
    {
        const bool branch_taken_0x162844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162844u;
        // 0x162848: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162844) {
            ctx->pc = 0x1628E8u;
            goto label_1628e8;
        }
    }
    ctx->pc = 0x16284Cu;
label_16284c:
    // 0x16284c: 0x0  nop
    ctx->pc = 0x16284cu;
    // NOP
label_162850:
    // 0x162850: 0x0  nop
    ctx->pc = 0x162850u;
    // NOP
label_162854:
    // 0x162854: 0x0  nop
    ctx->pc = 0x162854u;
    // NOP
label_162858:
    // 0x162858: 0x46150004  c1          0x150004
    ctx->pc = 0x162858u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_16285c:
    // 0x16285c: 0x0  nop
    ctx->pc = 0x16285cu;
    // NOP
label_162860:
    // 0x162860: 0x0  nop
    ctx->pc = 0x162860u;
    // NOP
label_162864:
    // 0x162864: 0x0  nop
    ctx->pc = 0x162864u;
    // NOP
label_162868:
    // 0x162868: 0x460000c4  c1          0xC4
    ctx->pc = 0x162868u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
label_16286c:
    // 0x16286c: 0x3c023f8c  lui         $v0, 0x3F8C
    ctx->pc = 0x16286cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
label_162870:
    // 0x162870: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x162870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_162874:
    // 0x162874: 0x3c024018  lui         $v0, 0x4018
    ctx->pc = 0x162874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16408 << 16));
label_162878:
    // 0x162878: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x162878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
label_16287c:
    // 0x16287c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16287cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_162880:
    // 0x162880: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162884:
    // 0x162884: 0x0  nop
    ctx->pc = 0x162884u;
    // NOP
label_162888:
    // 0x162888: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x162888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16288c:
    // 0x16288c: 0x0  nop
    ctx->pc = 0x16288cu;
    // NOP
label_162890:
    // 0x162890: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_162894:
    if (ctx->pc == 0x162894u) {
        ctx->pc = 0x162894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162890u;
        // 0x162894: 0x46030b42  mul.s       $f13, $f1, $f3 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x162898u;
        goto label_162898;
    }
    ctx->pc = 0x162890u;
    {
        const bool branch_taken_0x162890 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162890u;
        // 0x162894: 0x46030b42  mul.s       $f13, $f1, $f3 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162890) {
            ctx->pc = 0x1628E8u;
            goto label_1628e8;
        }
    }
    ctx->pc = 0x162898u;
label_162898:
    // 0x162898: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x162898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_16289c:
    // 0x16289c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x16289cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1628a0:
    // 0x1628a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1628a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1628a4:
    // 0x1628a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1628a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1628a8:
    // 0x1628a8: 0x1000000f  b           . + 4 + (0xF << 2)
label_1628ac:
    if (ctx->pc == 0x1628ACu) {
        ctx->pc = 0x1628ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628A8u;
        // 0x1628ac: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1628B0u;
        goto label_1628b0;
    }
    ctx->pc = 0x1628A8u;
    {
        const bool branch_taken_0x1628a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1628ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628A8u;
        // 0x1628ac: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628a8) {
            ctx->pc = 0x1628E8u;
            goto label_1628e8;
        }
    }
    ctx->pc = 0x1628B0u;
label_1628b0:
    // 0x1628b0: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x1628b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1628b4:
    // 0x1628b4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1628b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1628b8:
    // 0x1628b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1628b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1628bc:
    // 0x1628bc: 0x86420220  lh          $v0, 0x220($s2)
    ctx->pc = 0x1628bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 544)));
label_1628c0:
    // 0x1628c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1628c4:
    if (ctx->pc == 0x1628C4u) {
        ctx->pc = 0x1628C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628C0u;
        // 0x1628c4: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1628C8u;
        goto label_1628c8;
    }
    ctx->pc = 0x1628C0u;
    {
        const bool branch_taken_0x1628c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1628C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628C0u;
        // 0x1628c4: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628c0) {
            ctx->pc = 0x1628DCu;
            goto label_1628dc;
        }
    }
    ctx->pc = 0x1628C8u;
label_1628c8:
    // 0x1628c8: 0x3c0237fb  lui         $v0, 0x37FB
    ctx->pc = 0x1628c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14331 << 16));
label_1628cc:
    // 0x1628cc: 0x3442a882  ori         $v0, $v0, 0xA882
    ctx->pc = 0x1628ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43138);
label_1628d0:
    // 0x1628d0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1628d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1628d4:
    // 0x1628d4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1628d8:
    if (ctx->pc == 0x1628D8u) {
        ctx->pc = 0x1628D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628D4u;
        // 0x1628d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1628DCu;
        goto label_1628dc;
    }
    ctx->pc = 0x1628D4u;
    {
        const bool branch_taken_0x1628d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1628D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628D4u;
        // 0x1628d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628d4) {
            ctx->pc = 0x1628ECu;
            goto label_1628ec;
        }
    }
    ctx->pc = 0x1628DCu;
label_1628dc:
    // 0x1628dc: 0x3c023727  lui         $v0, 0x3727
    ctx->pc = 0x1628dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14119 << 16));
label_1628e0:
    // 0x1628e0: 0x3442c5ac  ori         $v0, $v0, 0xC5AC
    ctx->pc = 0x1628e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50604);
label_1628e4:
    // 0x1628e4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1628e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1628e8:
    // 0x1628e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1628e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1628ec:
    // 0x1628ec: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x1628ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_1628f0:
    // 0x1628f0: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x1628f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_1628f4:
    // 0x1628f4: 0xc055b84  jal         func_156E10
label_1628f8:
    if (ctx->pc == 0x1628F8u) {
        ctx->pc = 0x1628F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628F4u;
        // 0x1628f8: 0x27a70230  addiu       $a3, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1628FCu;
        goto label_1628fc;
    }
    ctx->pc = 0x1628F4u;
    SET_GPR_U32(ctx, 31, 0x1628FCu);
    ctx->pc = 0x1628F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1628F4u;
    // 0x1628f8: 0x27a70230  addiu       $a3, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156E10u, 0x1628F4u, 0x1628FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1628FCu;
label_1628fc:
    // 0x1628fc: 0x10000095  b           . + 4 + (0x95 << 2)
label_162900:
    if (ctx->pc == 0x162900u) {
        ctx->pc = 0x162900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628FCu;
        // 0x162900: 0x8e590008  lw          $t9, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162904u;
        goto label_162904;
    }
    ctx->pc = 0x1628FCu;
    {
        const bool branch_taken_0x1628fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628FCu;
        // 0x162900: 0x8e590008  lw          $t9, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628fc) {
            ctx->pc = 0x162B54u;
            goto label_162b54;
        }
    }
    ctx->pc = 0x162904u;
label_162904:
    // 0x162904: 0xc055c70  jal         func_1571C0
label_162908:
    if (ctx->pc == 0x162908u) {
        ctx->pc = 0x162908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162904u;
        // 0x162908: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16290Cu;
        goto label_16290c;
    }
    ctx->pc = 0x162904u;
    SET_GPR_U32(ctx, 31, 0x16290Cu);
    ctx->pc = 0x162908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162904u;
    // 0x162908: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1571C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1571C0u, 0x162904u, 0x16290Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16290Cu;
label_16290c:
    // 0x16290c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16290cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_162910:
    // 0x162910: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x162910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_162914:
    // 0x162914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x162914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_162918:
    // 0x162918: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x162918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16291c:
    // 0x16291c: 0xc4410134  lwc1        $f1, 0x134($v0)
    ctx->pc = 0x16291cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162920:
    // 0x162920: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x162920u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_162924:
    // 0x162924: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x162924u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_162928:
    // 0x162928: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x162928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_16292c:
    // 0x16292c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16292cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_162930:
    // 0x162930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162934:
    // 0x162934: 0x0  nop
    ctx->pc = 0x162934u;
    // NOP
label_162938:
    // 0x162938: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x162938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16293c:
    // 0x16293c: 0x0  nop
    ctx->pc = 0x16293cu;
    // NOP
label_162940:
    // 0x162940: 0x45000068  bc1f        . + 4 + (0x68 << 2)
label_162944:
    if (ctx->pc == 0x162944u) {
        ctx->pc = 0x162944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162940u;
        // 0x162944: 0x3c033fb3  lui         $v1, 0x3FB3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16307 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162948u;
        goto label_162948;
    }
    ctx->pc = 0x162940u;
    {
        const bool branch_taken_0x162940 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162940u;
        // 0x162944: 0x3c033fb3  lui         $v1, 0x3FB3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16307 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162940) {
            ctx->pc = 0x162AE4u;
            goto label_162ae4;
        }
    }
    ctx->pc = 0x162948u;
label_162948:
    // 0x162948: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x162948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16294c:
    // 0x16294c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x16294cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
label_162950:
    // 0x162950: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x162950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_162954:
    // 0x162954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162958:
    // 0x162958: 0x0  nop
    ctx->pc = 0x162958u;
    // NOP
label_16295c:
    // 0x16295c: 0x46150843  div.s       $f1, $f1, $f21
    ctx->pc = 0x16295cu;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[21]); }
label_162960:
    // 0x162960: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x162960u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_162964:
    // 0x162964: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x162964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162968:
    // 0x162968: 0x0  nop
    ctx->pc = 0x162968u;
    // NOP
label_16296c:
    // 0x16296c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x16296cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162970:
    // 0x162970: 0x0  nop
    ctx->pc = 0x162970u;
    // NOP
label_162974:
    // 0x162974: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_162978:
    if (ctx->pc == 0x162978u) {
        ctx->pc = 0x162978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162974u;
        // 0x162978: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16297Cu;
        goto label_16297c;
    }
    ctx->pc = 0x162974u;
    {
        const bool branch_taken_0x162974 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162974u;
        // 0x162978: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162974) {
            ctx->pc = 0x162980u;
            goto label_162980;
        }
    }
    ctx->pc = 0x16297Cu;
label_16297c:
    // 0x16297c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x16297cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_162980:
    // 0x162980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162984:
    // 0x162984: 0x0  nop
    ctx->pc = 0x162984u;
    // NOP
label_162988:
    // 0x162988: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x162988u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_16298c:
    // 0x16298c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x16298cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162990:
    // 0x162990: 0x0  nop
    ctx->pc = 0x162990u;
    // NOP
label_162994:
    // 0x162994: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_162998:
    if (ctx->pc == 0x162998u) {
        ctx->pc = 0x162998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162994u;
        // 0x162998: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16299Cu;
        goto label_16299c;
    }
    ctx->pc = 0x162994u;
    {
        const bool branch_taken_0x162994 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x162998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162994u;
        // 0x162998: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162994) {
            ctx->pc = 0x1629A0u;
            goto label_1629a0;
        }
    }
    ctx->pc = 0x16299Cu;
label_16299c:
    // 0x16299c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x16299cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1629a0:
    // 0x1629a0: 0xc055ccc  jal         func_157330
label_1629a4:
    if (ctx->pc == 0x1629A4u) {
        ctx->pc = 0x1629A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1629A0u;
        // 0x1629a4: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1629A8u;
        goto label_1629a8;
    }
    ctx->pc = 0x1629A0u;
    SET_GPR_U32(ctx, 31, 0x1629A8u);
    ctx->pc = 0x1629A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1629A0u;
    // 0x1629a4: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157330u, 0x1629A0u, 0x1629A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1629A8u;
label_1629a8:
    // 0x1629a8: 0x27a30210  addiu       $v1, $sp, 0x210
    ctx->pc = 0x1629a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_1629ac:
    // 0x1629ac: 0x27a20240  addiu       $v0, $sp, 0x240
    ctx->pc = 0x1629acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_1629b0:
    // 0x1629b0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1629b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1629b4:
    // 0x1629b4: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1629b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_1629b8:
    // 0x1629b8: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1629b8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_1629bc:
    // 0x1629bc: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x1629bcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1629c0:
    // 0x1629c0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1629c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1629c4:
    // 0x1629c4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1629c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1629c8:
    // 0x1629c8: 0x4be8324a  vmaddz.xyzw $vf9, $vf6, $vf8z
    ctx->pc = 0x1629c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_1629cc:
    // 0x1629cc: 0xf8690000  sqc2        $vf9, 0x0($v1)
    ctx->pc = 0x1629ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[9]));
label_1629d0:
    // 0x1629d0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1629d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1629d4:
    // 0x1629d4: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1629d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1629d8:
    // 0x1629d8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1629d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1629dc:
    // 0x1629dc: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1629dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1629e0:
    // 0x1629e0: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1629e0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1629e4:
    // 0x1629e4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1629e4u;
    // VWAITQ (Q already resolved in this runtime)
label_1629e8:
    // 0x1629e8: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1629e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1629ec:
    // 0x1629ec: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x1629ecu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
label_1629f0:
    // 0x1629f0: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1629f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1629f4:
    // 0x1629f4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1629f4u;
    // VWAITQ (Q already resolved in this runtime)
label_1629f8:
    // 0x1629f8: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1629f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1629fc:
    // 0x1629fc: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x1629fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_162a00:
    // 0x162a00: 0x0  nop
    ctx->pc = 0x162a00u;
    // NOP
label_162a04:
    // 0x162a04: 0x0  nop
    ctx->pc = 0x162a04u;
    // NOP
label_162a08:
    // 0x162a08: 0x0  nop
    ctx->pc = 0x162a08u;
    // NOP
label_162a0c:
    // 0x162a0c: 0x46150004  c1          0x150004
    ctx->pc = 0x162a0cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_162a10:
    // 0x162a10: 0x0  nop
    ctx->pc = 0x162a10u;
    // NOP
label_162a14:
    // 0x162a14: 0x0  nop
    ctx->pc = 0x162a14u;
    // NOP
label_162a18:
    // 0x162a18: 0x0  nop
    ctx->pc = 0x162a18u;
    // NOP
label_162a1c:
    // 0x162a1c: 0x46000104  c1          0x104
    ctx->pc = 0x162a1cu;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
label_162a20:
    // 0x162a20: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x162a20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_162a24:
    // 0x162a24: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x162a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_162a28:
    // 0x162a28: 0x3c02400c  lui         $v0, 0x400C
    ctx->pc = 0x162a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16396 << 16));
label_162a2c:
    // 0x162a2c: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x162a2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_162a30:
    // 0x162a30: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x162a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_162a34:
    // 0x162a34: 0x86420220  lh          $v0, 0x220($s2)
    ctx->pc = 0x162a34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 544)));
label_162a38:
    // 0x162a38: 0xc6230334  lwc1        $f3, 0x334($s1)
    ctx->pc = 0x162a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_162a3c:
    // 0x162a3c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x162a3cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_162a40:
    // 0x162a40: 0xc62102f0  lwc1        $f1, 0x2F0($s1)
    ctx->pc = 0x162a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162a44:
    // 0x162a44: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x162a44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162a48:
    // 0x162a48: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x162a48u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_162a4c:
    // 0x162a4c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x162a4cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_162a50:
    // 0x162a50: 0x4601001a  mula.s      $f0, $f1
    ctx->pc = 0x162a50u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_162a54:
    // 0x162a54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x162a54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162a58:
    // 0x162a58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_162a5c:
    if (ctx->pc == 0x162A5Cu) {
        ctx->pc = 0x162A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A58u;
        // 0x162a5c: 0x4604035c  madd.s      $f13, $f0, $f4 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[4]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162A60u;
        goto label_162a60;
    }
    ctx->pc = 0x162A58u;
    {
        const bool branch_taken_0x162a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A58u;
        // 0x162a5c: 0x4604035c  madd.s      $f13, $f0, $f4 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a58) {
            ctx->pc = 0x162A70u;
            goto label_162a70;
        }
    }
    ctx->pc = 0x162A60u;
label_162a60:
    // 0x162a60: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x162a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_162a64:
    // 0x162a64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162a68:
    // 0x162a68: 0x0  nop
    ctx->pc = 0x162a68u;
    // NOP
label_162a6c:
    // 0x162a6c: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x162a6cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_162a70:
    // 0x162a70: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x162a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_162a74:
    // 0x162a74: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x162a74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_162a78:
    // 0x162a78: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x162a78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_162a7c:
    // 0x162a7c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x162a7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_162a80:
    // 0x162a80: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x162a80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_162a84:
    // 0x162a84: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x162a84u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_162a88:
    // 0x162a88: 0x4a0003bf  vwaitq
    ctx->pc = 0x162a88u;
    // VWAITQ (Q already resolved in this runtime)
label_162a8c:
    // 0x162a8c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x162a8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_162a90:
    // 0x162a90: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x162a90u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_162a94:
    // 0x162a94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_162a98:
    // 0x162a98: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x162a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_162a9c:
    // 0x162a9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162aa0:
    // 0x162aa0: 0x0  nop
    ctx->pc = 0x162aa0u;
    // NOP
label_162aa4:
    // 0x162aa4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x162aa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162aa8:
    // 0x162aa8: 0x0  nop
    ctx->pc = 0x162aa8u;
    // NOP
label_162aac:
    // 0x162aac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_162ab0:
    if (ctx->pc == 0x162AB0u) {
        ctx->pc = 0x162AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AACu;
        // 0x162ab0: 0x3c023e99  lui         $v0, 0x3E99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162AB4u;
        goto label_162ab4;
    }
    ctx->pc = 0x162AACu;
    {
        const bool branch_taken_0x162aac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AACu;
        // 0x162ab0: 0x3c023e99  lui         $v0, 0x3E99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162aac) {
            ctx->pc = 0x162AC4u;
            goto label_162ac4;
        }
    }
    ctx->pc = 0x162AB4u;
label_162ab4:
    // 0x162ab4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x162ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_162ab8:
    // 0x162ab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162abc:
    // 0x162abc: 0x0  nop
    ctx->pc = 0x162abcu;
    // NOP
label_162ac0:
    // 0x162ac0: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x162ac0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_162ac4:
    // 0x162ac4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x162ac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_162ac8:
    // 0x162ac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_162acc:
    // 0x162acc: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x162accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_162ad0:
    // 0x162ad0: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x162ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_162ad4:
    // 0x162ad4: 0xc055b84  jal         func_156E10
label_162ad8:
    if (ctx->pc == 0x162AD8u) {
        ctx->pc = 0x162AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AD4u;
        // 0x162ad8: 0x27a70230  addiu       $a3, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162ADCu;
        goto label_162adc;
    }
    ctx->pc = 0x162AD4u;
    SET_GPR_U32(ctx, 31, 0x162ADCu);
    ctx->pc = 0x162AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162AD4u;
    // 0x162ad8: 0x27a70230  addiu       $a3, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156E10u, 0x162AD4u, 0x162ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162ADCu;
label_162adc:
    // 0x162adc: 0x1000001c  b           . + 4 + (0x1C << 2)
label_162ae0:
    if (ctx->pc == 0x162AE0u) {
        ctx->pc = 0x162AE4u;
        goto label_162ae4;
    }
    ctx->pc = 0x162ADCu;
    {
        const bool branch_taken_0x162adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162adc) {
            ctx->pc = 0x162B50u;
            goto label_162b50;
        }
    }
    ctx->pc = 0x162AE4u;
label_162ae4:
    // 0x162ae4: 0xc6240334  lwc1        $f4, 0x334($s1)
    ctx->pc = 0x162ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_162ae8:
    // 0x162ae8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x162ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_162aec:
    // 0x162aec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x162aecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_162af0:
    // 0x162af0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x162af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_162af4:
    // 0x162af4: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x162af4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_162af8:
    // 0x162af8: 0x3c023fb3  lui         $v0, 0x3FB3
    ctx->pc = 0x162af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16307 << 16));
label_162afc:
    // 0x162afc: 0xc62202f0  lwc1        $f2, 0x2F0($s1)
    ctx->pc = 0x162afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_162b00:
    // 0x162b00: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x162b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_162b04:
    // 0x162b04: 0x86420220  lh          $v0, 0x220($s2)
    ctx->pc = 0x162b04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 544)));
label_162b08:
    // 0x162b08: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x162b08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_162b0c:
    // 0x162b0c: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x162b0cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_162b10:
    // 0x162b10: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x162b10u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
label_162b14:
    // 0x162b14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x162b14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162b18:
    // 0x162b18: 0x0  nop
    ctx->pc = 0x162b18u;
    // NOP
label_162b1c:
    // 0x162b1c: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x162b1cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_162b20:
    // 0x162b20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_162b24:
    if (ctx->pc == 0x162B24u) {
        ctx->pc = 0x162B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B20u;
        // 0x162b24: 0x4615035c  madd.s      $f13, $f0, $f21 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162B28u;
        goto label_162b28;
    }
    ctx->pc = 0x162B20u;
    {
        const bool branch_taken_0x162b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B20u;
        // 0x162b24: 0x4615035c  madd.s      $f13, $f0, $f21 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b20) {
            ctx->pc = 0x162B38u;
            goto label_162b38;
        }
    }
    ctx->pc = 0x162B28u;
label_162b28:
    // 0x162b28: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x162b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_162b2c:
    // 0x162b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162b30:
    // 0x162b30: 0x0  nop
    ctx->pc = 0x162b30u;
    // NOP
label_162b34:
    // 0x162b34: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x162b34u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_162b38:
    // 0x162b38: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x162b38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_162b3c:
    // 0x162b3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_162b40:
    // 0x162b40: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x162b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_162b44:
    // 0x162b44: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x162b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_162b48:
    // 0x162b48: 0xc055b84  jal         func_156E10
label_162b4c:
    if (ctx->pc == 0x162B4Cu) {
        ctx->pc = 0x162B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B48u;
        // 0x162b4c: 0x27a70230  addiu       $a3, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162B50u;
        goto label_162b50;
    }
    ctx->pc = 0x162B48u;
    SET_GPR_U32(ctx, 31, 0x162B50u);
    ctx->pc = 0x162B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162B48u;
    // 0x162b4c: 0x27a70230  addiu       $a3, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156E10u, 0x162B48u, 0x162B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B50u;
label_162b50:
    // 0x162b50: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x162b50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_162b54:
    // 0x162b54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_162b58:
    // 0x162b58: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x162b58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_162b5c:
    // 0x162b5c: 0x320f809  jalr        $t9
label_162b60:
    if (ctx->pc == 0x162B60u) {
        ctx->pc = 0x162B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B5Cu;
        // 0x162b60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162B64u;
        goto label_162b64;
    }
    ctx->pc = 0x162B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x162B64u);
        ctx->pc = 0x162B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B5Cu;
        // 0x162b60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162B5Cu, 0x162B64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162B64u;
label_162b64:
    // 0x162b64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_162b68:
    // 0x162b68: 0xc0564b8  jal         func_1592E0
label_162b6c:
    if (ctx->pc == 0x162B6Cu) {
        ctx->pc = 0x162B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B68u;
        // 0x162b6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162B70u;
        goto label_162b70;
    }
    ctx->pc = 0x162B68u;
    SET_GPR_U32(ctx, 31, 0x162B70u);
    ctx->pc = 0x162B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162B68u;
    // 0x162b6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x162B68u, 0x162B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B70u;
label_162b70:
    // 0x162b70: 0xc7828020  lwc1        $f2, -0x7FE0($gp)
    ctx->pc = 0x162b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_162b74:
    // 0x162b74: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x162b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_162b78:
    // 0x162b78: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x162b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_162b7c:
    // 0x162b7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162b80:
    // 0x162b80: 0xc62102f0  lwc1        $f1, 0x2F0($s1)
    ctx->pc = 0x162b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162b84:
    // 0x162b84: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x162b84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_162b88:
    // 0x162b88: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x162b88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162b8c:
    // 0x162b8c: 0x0  nop
    ctx->pc = 0x162b8cu;
    // NOP
label_162b90:
    // 0x162b90: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_162b94:
    if (ctx->pc == 0x162B94u) {
        ctx->pc = 0x162B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B90u;
        // 0x162b94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162B98u;
        goto label_162b98;
    }
    ctx->pc = 0x162B90u;
    {
        const bool branch_taken_0x162b90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B90u;
        // 0x162b94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b90) {
            ctx->pc = 0x162BD8u;
            goto label_162bd8;
        }
    }
    ctx->pc = 0x162B98u;
label_162b98:
    // 0x162b98: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x162b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_162b9c:
    // 0x162b9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162ba0:
    // 0x162ba0: 0x0  nop
    ctx->pc = 0x162ba0u;
    // NOP
label_162ba4:
    // 0x162ba4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x162ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_162ba8:
    // 0x162ba8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x162ba8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162bac:
    // 0x162bac: 0x0  nop
    ctx->pc = 0x162bacu;
    // NOP
label_162bb0:
    // 0x162bb0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_162bb4:
    if (ctx->pc == 0x162BB4u) {
        ctx->pc = 0x162BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BB0u;
        // 0x162bb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162BB8u;
        goto label_162bb8;
    }
    ctx->pc = 0x162BB0u;
    {
        const bool branch_taken_0x162bb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x162BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BB0u;
        // 0x162bb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162bb0) {
            ctx->pc = 0x162BCCu;
            goto label_162bcc;
        }
    }
    ctx->pc = 0x162BB8u;
label_162bb8:
    // 0x162bb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_162bbc:
    // 0x162bbc: 0xc042118  jal         func_108460
label_162bc0:
    if (ctx->pc == 0x162BC0u) {
        ctx->pc = 0x162BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BBCu;
        // 0x162bc0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162BC4u;
        goto label_162bc4;
    }
    ctx->pc = 0x162BBCu;
    SET_GPR_U32(ctx, 31, 0x162BC4u);
    ctx->pc = 0x162BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162BBCu;
    // 0x162bc0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x162BBCu, 0x162BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162BC4u;
label_162bc4:
    // 0x162bc4: 0x10000003  b           . + 4 + (0x3 << 2)
label_162bc8:
    if (ctx->pc == 0x162BC8u) {
        ctx->pc = 0x162BCCu;
        goto label_162bcc;
    }
    ctx->pc = 0x162BC4u;
    {
        const bool branch_taken_0x162bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162bc4) {
            ctx->pc = 0x162BD4u;
            goto label_162bd4;
        }
    }
    ctx->pc = 0x162BCCu;
label_162bcc:
    // 0x162bcc: 0xc042118  jal         func_108460
label_162bd0:
    if (ctx->pc == 0x162BD0u) {
        ctx->pc = 0x162BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BCCu;
        // 0x162bd0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162BD4u;
        goto label_162bd4;
    }
    ctx->pc = 0x162BCCu;
    SET_GPR_U32(ctx, 31, 0x162BD4u);
    ctx->pc = 0x162BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162BCCu;
    // 0x162bd0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x162BCCu, 0x162BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162BD4u;
label_162bd4:
    // 0x162bd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162bd8:
    // 0x162bd8: 0x10000088  b           . + 4 + (0x88 << 2)
label_162bdc:
    if (ctx->pc == 0x162BDCu) {
        ctx->pc = 0x162BE0u;
        goto label_162be0;
    }
    ctx->pc = 0x162BD8u;
    {
        const bool branch_taken_0x162bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162bd8) {
            ctx->pc = 0x162DFCu;
            goto label_162dfc;
        }
    }
    ctx->pc = 0x162BE0u;
label_162be0:
    // 0x162be0: 0x8e420224  lw          $v0, 0x224($s2)
    ctx->pc = 0x162be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
label_162be4:
    // 0x162be4: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_162be8:
    if (ctx->pc == 0x162BE8u) {
        ctx->pc = 0x162BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BE4u;
        // 0x162be8: 0x27a20220  addiu       $v0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162BECu;
        goto label_162bec;
    }
    ctx->pc = 0x162BE4u;
    {
        const bool branch_taken_0x162be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BE4u;
        // 0x162be8: 0x27a20220  addiu       $v0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162be4) {
            ctx->pc = 0x162C80u;
            goto label_162c80;
        }
    }
    ctx->pc = 0x162BECu;
label_162bec:
    // 0x162bec: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x162becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_162bf0:
    // 0x162bf0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x162bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_162bf4:
    // 0x162bf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162bf8:
    // 0x162bf8: 0x0  nop
    ctx->pc = 0x162bf8u;
    // NOP
label_162bfc:
    // 0x162bfc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x162bfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162c00:
    // 0x162c00: 0x0  nop
    ctx->pc = 0x162c00u;
    // NOP
label_162c04:
    // 0x162c04: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_162c08:
    if (ctx->pc == 0x162C08u) {
        ctx->pc = 0x162C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C04u;
        // 0x162c08: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162C0Cu;
        goto label_162c0c;
    }
    ctx->pc = 0x162C04u;
    {
        const bool branch_taken_0x162c04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x162C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C04u;
        // 0x162c08: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c04) {
            ctx->pc = 0x162C38u;
            goto label_162c38;
        }
    }
    ctx->pc = 0x162C0Cu;
label_162c0c:
    // 0x162c0c: 0xc7838020  lwc1        $f3, -0x7FE0($gp)
    ctx->pc = 0x162c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_162c10:
    // 0x162c10: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x162c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_162c14:
    // 0x162c14: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x162c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_162c18:
    // 0x162c18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162c1c:
    // 0x162c1c: 0x0  nop
    ctx->pc = 0x162c1cu;
    // NOP
label_162c20:
    // 0x162c20: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x162c20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_162c24:
    // 0x162c24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x162c24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162c28:
    // 0x162c28: 0x0  nop
    ctx->pc = 0x162c28u;
    // NOP
label_162c2c:
    // 0x162c2c: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_162c30:
    if (ctx->pc == 0x162C30u) {
        ctx->pc = 0x162C34u;
        goto label_162c34;
    }
    ctx->pc = 0x162C2Cu;
    {
        const bool branch_taken_0x162c2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162c2c) {
            ctx->pc = 0x162C7Cu;
            goto label_162c7c;
        }
    }
    ctx->pc = 0x162C34u;
label_162c34:
    // 0x162c34: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x162c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_162c38:
    // 0x162c38: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x162c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_162c3c:
    // 0x162c3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162c40:
    // 0x162c40: 0x0  nop
    ctx->pc = 0x162c40u;
    // NOP
label_162c44:
    // 0x162c44: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x162c44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162c48:
    // 0x162c48: 0x0  nop
    ctx->pc = 0x162c48u;
    // NOP
label_162c4c:
    // 0x162c4c: 0x45010029  bc1t        . + 4 + (0x29 << 2)
label_162c50:
    if (ctx->pc == 0x162C50u) {
        ctx->pc = 0x162C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C4Cu;
        // 0x162c50: 0x27a20230  addiu       $v0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162C54u;
        goto label_162c54;
    }
    ctx->pc = 0x162C4Cu;
    {
        const bool branch_taken_0x162c4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x162C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C4Cu;
        // 0x162c50: 0x27a20230  addiu       $v0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c4c) {
            ctx->pc = 0x162CF4u;
            goto label_162cf4;
        }
    }
    ctx->pc = 0x162C54u;
label_162c54:
    // 0x162c54: 0xc7838020  lwc1        $f3, -0x7FE0($gp)
    ctx->pc = 0x162c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_162c58:
    // 0x162c58: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x162c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_162c5c:
    // 0x162c5c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x162c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_162c60:
    // 0x162c60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_162c64:
    // 0x162c64: 0xc62002f0  lwc1        $f0, 0x2F0($s1)
    ctx->pc = 0x162c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162c68:
    // 0x162c68: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x162c68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_162c6c:
    // 0x162c6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162c6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162c70:
    // 0x162c70: 0x0  nop
    ctx->pc = 0x162c70u;
    // NOP
label_162c74:
    // 0x162c74: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_162c78:
    if (ctx->pc == 0x162C78u) {
        ctx->pc = 0x162C7Cu;
        goto label_162c7c;
    }
    ctx->pc = 0x162C74u;
    {
        const bool branch_taken_0x162c74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162c74) {
            ctx->pc = 0x162CF0u;
            goto label_162cf0;
        }
    }
    ctx->pc = 0x162C7Cu;
label_162c7c:
    // 0x162c7c: 0x27a20220  addiu       $v0, $sp, 0x220
    ctx->pc = 0x162c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_162c80:
    // 0x162c80: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x162c80u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_162c84:
    // 0x162c84: 0x7e260290  sq          $a2, 0x290($s1)
    ctx->pc = 0x162c84u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 656), GPR_VEC(ctx, 6));
label_162c88:
    // 0x162c88: 0x46020304  c1          0x20304
    ctx->pc = 0x162c88u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_162c8c:
    // 0x162c8c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x162c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_162c90:
    // 0x162c90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_162c94:
    // 0x162c94: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x162c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_162c98:
    // 0x162c98: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x162c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_162c9c:
    // 0x162c9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162ca0:
    // 0x162ca0: 0xc7a40210  lwc1        $f4, 0x210($sp)
    ctx->pc = 0x162ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_162ca4:
    // 0x162ca4: 0xc7a20214  lwc1        $f2, 0x214($sp)
    ctx->pc = 0x162ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_162ca8:
    // 0x162ca8: 0xc7a00218  lwc1        $f0, 0x218($sp)
    ctx->pc = 0x162ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162cac:
    // 0x162cac: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x162cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_162cb0:
    // 0x162cb0: 0xc7a60200  lwc1        $f6, 0x200($sp)
    ctx->pc = 0x162cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_162cb4:
    // 0x162cb4: 0xc7a30204  lwc1        $f3, 0x204($sp)
    ctx->pc = 0x162cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_162cb8:
    // 0x162cb8: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x162cb8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_162cbc:
    // 0x162cbc: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x162cbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_162cc0:
    // 0x162cc0: 0x46043100  add.s       $f4, $f6, $f4
    ctx->pc = 0x162cc0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
label_162cc4:
    // 0x162cc4: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x162cc4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_162cc8:
    // 0x162cc8: 0xc7a10208  lwc1        $f1, 0x208($sp)
    ctx->pc = 0x162cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162ccc:
    // 0x162ccc: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x162cccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_162cd0:
    // 0x162cd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x162cd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_162cd4:
    // 0x162cd4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x162cd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_162cd8:
    // 0x162cd8: 0xe7a40200  swc1        $f4, 0x200($sp)
    ctx->pc = 0x162cd8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_162cdc:
    // 0x162cdc: 0xe7a20204  swc1        $f2, 0x204($sp)
    ctx->pc = 0x162cdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
label_162ce0:
    // 0x162ce0: 0xc055b3c  jal         func_156CF0
label_162ce4:
    if (ctx->pc == 0x162CE4u) {
        ctx->pc = 0x162CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162CE0u;
        // 0x162ce4: 0xe7a00208  swc1        $f0, 0x208($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x162CE8u;
        goto label_162ce8;
    }
    ctx->pc = 0x162CE0u;
    SET_GPR_U32(ctx, 31, 0x162CE8u);
    ctx->pc = 0x162CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162CE0u;
    // 0x162ce4: 0xe7a00208  swc1        $f0, 0x208($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x162CE0u, 0x162CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162CE8u;
label_162ce8:
    // 0x162ce8: 0x1000003a  b           . + 4 + (0x3A << 2)
label_162cec:
    if (ctx->pc == 0x162CECu) {
        ctx->pc = 0x162CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162CE8u;
        // 0x162cec: 0x8e590008  lw          $t9, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162CF0u;
        goto label_162cf0;
    }
    ctx->pc = 0x162CE8u;
    {
        const bool branch_taken_0x162ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162CE8u;
        // 0x162cec: 0x8e590008  lw          $t9, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ce8) {
            ctx->pc = 0x162DD4u;
            goto label_162dd4;
        }
    }
    ctx->pc = 0x162CF0u;
label_162cf0:
    // 0x162cf0: 0x27a20230  addiu       $v0, $sp, 0x230
    ctx->pc = 0x162cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_162cf4:
    // 0x162cf4: 0x26230290  addiu       $v1, $s1, 0x290
    ctx->pc = 0x162cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
label_162cf8:
    // 0x162cf8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x162cf8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_162cfc:
    // 0x162cfc: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x162cfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_162d00:
    // 0x162d00: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x162d00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_162d04:
    // 0x162d04: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x162d04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_162d08:
    // 0x162d08: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x162d08u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_162d0c:
    // 0x162d0c: 0x4a0003bf  vwaitq
    ctx->pc = 0x162d0cu;
    // VWAITQ (Q already resolved in this runtime)
label_162d10:
    // 0x162d10: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x162d10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_162d14:
    // 0x162d14: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x162d14u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
label_162d18:
    // 0x162d18: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x162d18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_162d1c:
    // 0x162d1c: 0x4a0003bf  vwaitq
    ctx->pc = 0x162d1cu;
    // VWAITQ (Q already resolved in this runtime)
label_162d20:
    // 0x162d20: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x162d20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_162d24:
    // 0x162d24: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x162d24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_162d28:
    // 0x162d28: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x162d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_162d2c:
    // 0x162d2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_162d30:
    // 0x162d30: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x162d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_162d34:
    // 0x162d34: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x162d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_162d38:
    // 0x162d38: 0xc44c004c  lwc1        $f12, 0x4C($v0)
    ctx->pc = 0x162d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_162d3c:
    // 0x162d3c: 0xc055bec  jal         func_156FB0
label_162d40:
    if (ctx->pc == 0x162D40u) {
        ctx->pc = 0x162D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D3Cu;
        // 0x162d40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162D44u;
        goto label_162d44;
    }
    ctx->pc = 0x162D3Cu;
    SET_GPR_U32(ctx, 31, 0x162D44u);
    ctx->pc = 0x162D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162D3Cu;
    // 0x162d40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156FB0u, 0x162D3Cu, 0x162D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162D44u;
label_162d44:
    // 0x162d44: 0xc7828020  lwc1        $f2, -0x7FE0($gp)
    ctx->pc = 0x162d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_162d48:
    // 0x162d48: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x162d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_162d4c:
    // 0x162d4c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x162d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_162d50:
    // 0x162d50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_162d54:
    // 0x162d54: 0xc62002f0  lwc1        $f0, 0x2F0($s1)
    ctx->pc = 0x162d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162d58:
    // 0x162d58: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x162d58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_162d5c:
    // 0x162d5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x162d5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162d60:
    // 0x162d60: 0x0  nop
    ctx->pc = 0x162d60u;
    // NOP
label_162d64:
    // 0x162d64: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_162d68:
    if (ctx->pc == 0x162D68u) {
        ctx->pc = 0x162D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D64u;
        // 0x162d68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162D6Cu;
        goto label_162d6c;
    }
    ctx->pc = 0x162D64u;
    {
        const bool branch_taken_0x162d64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D64u;
        // 0x162d68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d64) {
            ctx->pc = 0x162DD0u;
            goto label_162dd0;
        }
    }
    ctx->pc = 0x162D6Cu;
label_162d6c:
    // 0x162d6c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x162d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_162d70:
    // 0x162d70: 0xa243021f  sb          $v1, 0x21F($s2)
    ctx->pc = 0x162d70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 543), (uint8_t)GPR_U32(ctx, 3));
label_162d74:
    // 0x162d74: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x162d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_162d78:
    // 0x162d78: 0xc7828020  lwc1        $f2, -0x7FE0($gp)
    ctx->pc = 0x162d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_162d7c:
    // 0x162d7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162d80:
    // 0x162d80: 0xc62102f0  lwc1        $f1, 0x2F0($s1)
    ctx->pc = 0x162d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162d84:
    // 0x162d84: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x162d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_162d88:
    // 0x162d88: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x162d88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162d8c:
    // 0x162d8c: 0x0  nop
    ctx->pc = 0x162d8cu;
    // NOP
label_162d90:
    // 0x162d90: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_162d94:
    if (ctx->pc == 0x162D94u) {
        ctx->pc = 0x162D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D90u;
        // 0x162d94: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162D98u;
        goto label_162d98;
    }
    ctx->pc = 0x162D90u;
    {
        const bool branch_taken_0x162d90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D90u;
        // 0x162d94: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d90) {
            ctx->pc = 0x162DD0u;
            goto label_162dd0;
        }
    }
    ctx->pc = 0x162D98u;
label_162d98:
    // 0x162d98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162d9c:
    // 0x162d9c: 0x0  nop
    ctx->pc = 0x162d9cu;
    // NOP
label_162da0:
    // 0x162da0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x162da0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_162da4:
    // 0x162da4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x162da4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162da8:
    // 0x162da8: 0x0  nop
    ctx->pc = 0x162da8u;
    // NOP
label_162dac:
    // 0x162dac: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_162db0:
    if (ctx->pc == 0x162DB0u) {
        ctx->pc = 0x162DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DACu;
        // 0x162db0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162DB4u;
        goto label_162db4;
    }
    ctx->pc = 0x162DACu;
    {
        const bool branch_taken_0x162dac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x162DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DACu;
        // 0x162db0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162dac) {
            ctx->pc = 0x162DC8u;
            goto label_162dc8;
        }
    }
    ctx->pc = 0x162DB4u;
label_162db4:
    // 0x162db4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_162db8:
    // 0x162db8: 0xc042118  jal         func_108460
label_162dbc:
    if (ctx->pc == 0x162DBCu) {
        ctx->pc = 0x162DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DB8u;
        // 0x162dbc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162DC0u;
        goto label_162dc0;
    }
    ctx->pc = 0x162DB8u;
    SET_GPR_U32(ctx, 31, 0x162DC0u);
    ctx->pc = 0x162DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162DB8u;
    // 0x162dbc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x162DB8u, 0x162DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162DC0u;
label_162dc0:
    // 0x162dc0: 0x10000003  b           . + 4 + (0x3 << 2)
label_162dc4:
    if (ctx->pc == 0x162DC4u) {
        ctx->pc = 0x162DC8u;
        goto label_162dc8;
    }
    ctx->pc = 0x162DC0u;
    {
        const bool branch_taken_0x162dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162dc0) {
            ctx->pc = 0x162DD0u;
            goto label_162dd0;
        }
    }
    ctx->pc = 0x162DC8u;
label_162dc8:
    // 0x162dc8: 0xc042118  jal         func_108460
label_162dcc:
    if (ctx->pc == 0x162DCCu) {
        ctx->pc = 0x162DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DC8u;
        // 0x162dcc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162DD0u;
        goto label_162dd0;
    }
    ctx->pc = 0x162DC8u;
    SET_GPR_U32(ctx, 31, 0x162DD0u);
    ctx->pc = 0x162DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162DC8u;
    // 0x162dcc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x162DC8u, 0x162DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162DD0u;
label_162dd0:
    // 0x162dd0: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x162dd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_162dd4:
    // 0x162dd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_162dd8:
    // 0x162dd8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x162dd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_162ddc:
    // 0x162ddc: 0x320f809  jalr        $t9
label_162de0:
    if (ctx->pc == 0x162DE0u) {
        ctx->pc = 0x162DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DDCu;
        // 0x162de0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162DE4u;
        goto label_162de4;
    }
    ctx->pc = 0x162DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x162DE4u);
        ctx->pc = 0x162DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DDCu;
        // 0x162de0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162DDCu, 0x162DE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162DE4u;
label_162de4:
    // 0x162de4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_162de8:
    // 0x162de8: 0xc0564b8  jal         func_1592E0
label_162dec:
    if (ctx->pc == 0x162DECu) {
        ctx->pc = 0x162DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DE8u;
        // 0x162dec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162DF0u;
        goto label_162df0;
    }
    ctx->pc = 0x162DE8u;
    SET_GPR_U32(ctx, 31, 0x162DF0u);
    ctx->pc = 0x162DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162DE8u;
    // 0x162dec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x162DE8u, 0x162DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162DF0u;
label_162df0:
    // 0x162df0: 0x10000002  b           . + 4 + (0x2 << 2)
label_162df4:
    if (ctx->pc == 0x162DF4u) {
        ctx->pc = 0x162DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DF0u;
        // 0x162df4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162DF8u;
        goto label_162df8;
    }
    ctx->pc = 0x162DF0u;
    {
        const bool branch_taken_0x162df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DF0u;
        // 0x162df4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162df0) {
            ctx->pc = 0x162DFCu;
            goto label_162dfc;
        }
    }
    ctx->pc = 0x162DF8u;
label_162df8:
    // 0x162df8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x162df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_162dfc:
    // 0x162dfc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x162dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_162e00:
    // 0x162e00: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x162e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_162e04:
    // 0x162e04: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x162e04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_162e08:
    // 0x162e08: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x162e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_162e0c:
    // 0x162e0c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x162e0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_162e10:
    // 0x162e10: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x162e10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_162e14:
    // 0x162e14: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x162e14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_162e18:
    // 0x162e18: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x162e18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_162e1c:
    // 0x162e1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x162e1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_162e20:
    // 0x162e20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x162e20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_162e24:
    // 0x162e24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x162e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_162e28:
    // 0x162e28: 0x3e00008  jr          $ra
label_162e2c:
    if (ctx->pc == 0x162E2Cu) {
        ctx->pc = 0x162E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E28u;
        // 0x162e2c: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162E30u;
        goto label_fallthrough_0x162e28;
    }
    ctx->pc = 0x162E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E28u;
        // 0x162e2c: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x162e28:
    ctx->pc = 0x162E30u;
}
