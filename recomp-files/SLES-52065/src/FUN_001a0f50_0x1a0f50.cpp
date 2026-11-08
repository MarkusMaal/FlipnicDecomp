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

// Function: FUN_001a0f50
// Address: 0x1a0f50 - 0x1a21f4
void FUN_001a0f50_0x1a0f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a0f50_0x1a0f50");
#endif

    switch (ctx->pc) {
        case 0x1a0f50u: goto label_1a0f50;
        case 0x1a0f54u: goto label_1a0f54;
        case 0x1a0f58u: goto label_1a0f58;
        case 0x1a0f5cu: goto label_1a0f5c;
        case 0x1a0f60u: goto label_1a0f60;
        case 0x1a0f64u: goto label_1a0f64;
        case 0x1a0f68u: goto label_1a0f68;
        case 0x1a0f6cu: goto label_1a0f6c;
        case 0x1a0f70u: goto label_1a0f70;
        case 0x1a0f74u: goto label_1a0f74;
        case 0x1a0f78u: goto label_1a0f78;
        case 0x1a0f7cu: goto label_1a0f7c;
        case 0x1a0f80u: goto label_1a0f80;
        case 0x1a0f84u: goto label_1a0f84;
        case 0x1a0f88u: goto label_1a0f88;
        case 0x1a0f8cu: goto label_1a0f8c;
        case 0x1a0f90u: goto label_1a0f90;
        case 0x1a0f94u: goto label_1a0f94;
        case 0x1a0f98u: goto label_1a0f98;
        case 0x1a0f9cu: goto label_1a0f9c;
        case 0x1a0fa0u: goto label_1a0fa0;
        case 0x1a0fa4u: goto label_1a0fa4;
        case 0x1a0fa8u: goto label_1a0fa8;
        case 0x1a0facu: goto label_1a0fac;
        case 0x1a0fb0u: goto label_1a0fb0;
        case 0x1a0fb4u: goto label_1a0fb4;
        case 0x1a0fb8u: goto label_1a0fb8;
        case 0x1a0fbcu: goto label_1a0fbc;
        case 0x1a0fc0u: goto label_1a0fc0;
        case 0x1a0fc4u: goto label_1a0fc4;
        case 0x1a0fc8u: goto label_1a0fc8;
        case 0x1a0fccu: goto label_1a0fcc;
        case 0x1a0fd0u: goto label_1a0fd0;
        case 0x1a0fd4u: goto label_1a0fd4;
        case 0x1a0fd8u: goto label_1a0fd8;
        case 0x1a0fdcu: goto label_1a0fdc;
        case 0x1a0fe0u: goto label_1a0fe0;
        case 0x1a0fe4u: goto label_1a0fe4;
        case 0x1a0fe8u: goto label_1a0fe8;
        case 0x1a0fecu: goto label_1a0fec;
        case 0x1a0ff0u: goto label_1a0ff0;
        case 0x1a0ff4u: goto label_1a0ff4;
        case 0x1a0ff8u: goto label_1a0ff8;
        case 0x1a0ffcu: goto label_1a0ffc;
        case 0x1a1000u: goto label_1a1000;
        case 0x1a1004u: goto label_1a1004;
        case 0x1a1008u: goto label_1a1008;
        case 0x1a100cu: goto label_1a100c;
        case 0x1a1010u: goto label_1a1010;
        case 0x1a1014u: goto label_1a1014;
        case 0x1a1018u: goto label_1a1018;
        case 0x1a101cu: goto label_1a101c;
        case 0x1a1020u: goto label_1a1020;
        case 0x1a1024u: goto label_1a1024;
        case 0x1a1028u: goto label_1a1028;
        case 0x1a102cu: goto label_1a102c;
        case 0x1a1030u: goto label_1a1030;
        case 0x1a1034u: goto label_1a1034;
        case 0x1a1038u: goto label_1a1038;
        case 0x1a103cu: goto label_1a103c;
        case 0x1a1040u: goto label_1a1040;
        case 0x1a1044u: goto label_1a1044;
        case 0x1a1048u: goto label_1a1048;
        case 0x1a104cu: goto label_1a104c;
        case 0x1a1050u: goto label_1a1050;
        case 0x1a1054u: goto label_1a1054;
        case 0x1a1058u: goto label_1a1058;
        case 0x1a105cu: goto label_1a105c;
        case 0x1a1060u: goto label_1a1060;
        case 0x1a1064u: goto label_1a1064;
        case 0x1a1068u: goto label_1a1068;
        case 0x1a106cu: goto label_1a106c;
        case 0x1a1070u: goto label_1a1070;
        case 0x1a1074u: goto label_1a1074;
        case 0x1a1078u: goto label_1a1078;
        case 0x1a107cu: goto label_1a107c;
        case 0x1a1080u: goto label_1a1080;
        case 0x1a1084u: goto label_1a1084;
        case 0x1a1088u: goto label_1a1088;
        case 0x1a108cu: goto label_1a108c;
        case 0x1a1090u: goto label_1a1090;
        case 0x1a1094u: goto label_1a1094;
        case 0x1a1098u: goto label_1a1098;
        case 0x1a109cu: goto label_1a109c;
        case 0x1a10a0u: goto label_1a10a0;
        case 0x1a10a4u: goto label_1a10a4;
        case 0x1a10a8u: goto label_1a10a8;
        case 0x1a10acu: goto label_1a10ac;
        case 0x1a10b0u: goto label_1a10b0;
        case 0x1a10b4u: goto label_1a10b4;
        case 0x1a10b8u: goto label_1a10b8;
        case 0x1a10bcu: goto label_1a10bc;
        case 0x1a10c0u: goto label_1a10c0;
        case 0x1a10c4u: goto label_1a10c4;
        case 0x1a10c8u: goto label_1a10c8;
        case 0x1a10ccu: goto label_1a10cc;
        case 0x1a10d0u: goto label_1a10d0;
        case 0x1a10d4u: goto label_1a10d4;
        case 0x1a10d8u: goto label_1a10d8;
        case 0x1a10dcu: goto label_1a10dc;
        case 0x1a10e0u: goto label_1a10e0;
        case 0x1a10e4u: goto label_1a10e4;
        case 0x1a10e8u: goto label_1a10e8;
        case 0x1a10ecu: goto label_1a10ec;
        case 0x1a10f0u: goto label_1a10f0;
        case 0x1a10f4u: goto label_1a10f4;
        case 0x1a10f8u: goto label_1a10f8;
        case 0x1a10fcu: goto label_1a10fc;
        case 0x1a1100u: goto label_1a1100;
        case 0x1a1104u: goto label_1a1104;
        case 0x1a1108u: goto label_1a1108;
        case 0x1a110cu: goto label_1a110c;
        case 0x1a1110u: goto label_1a1110;
        case 0x1a1114u: goto label_1a1114;
        case 0x1a1118u: goto label_1a1118;
        case 0x1a111cu: goto label_1a111c;
        case 0x1a1120u: goto label_1a1120;
        case 0x1a1124u: goto label_1a1124;
        case 0x1a1128u: goto label_1a1128;
        case 0x1a112cu: goto label_1a112c;
        case 0x1a1130u: goto label_1a1130;
        case 0x1a1134u: goto label_1a1134;
        case 0x1a1138u: goto label_1a1138;
        case 0x1a113cu: goto label_1a113c;
        case 0x1a1140u: goto label_1a1140;
        case 0x1a1144u: goto label_1a1144;
        case 0x1a1148u: goto label_1a1148;
        case 0x1a114cu: goto label_1a114c;
        case 0x1a1150u: goto label_1a1150;
        case 0x1a1154u: goto label_1a1154;
        case 0x1a1158u: goto label_1a1158;
        case 0x1a115cu: goto label_1a115c;
        case 0x1a1160u: goto label_1a1160;
        case 0x1a1164u: goto label_1a1164;
        case 0x1a1168u: goto label_1a1168;
        case 0x1a116cu: goto label_1a116c;
        case 0x1a1170u: goto label_1a1170;
        case 0x1a1174u: goto label_1a1174;
        case 0x1a1178u: goto label_1a1178;
        case 0x1a117cu: goto label_1a117c;
        case 0x1a1180u: goto label_1a1180;
        case 0x1a1184u: goto label_1a1184;
        case 0x1a1188u: goto label_1a1188;
        case 0x1a118cu: goto label_1a118c;
        case 0x1a1190u: goto label_1a1190;
        case 0x1a1194u: goto label_1a1194;
        case 0x1a1198u: goto label_1a1198;
        case 0x1a119cu: goto label_1a119c;
        case 0x1a11a0u: goto label_1a11a0;
        case 0x1a11a4u: goto label_1a11a4;
        case 0x1a11a8u: goto label_1a11a8;
        case 0x1a11acu: goto label_1a11ac;
        case 0x1a11b0u: goto label_1a11b0;
        case 0x1a11b4u: goto label_1a11b4;
        case 0x1a11b8u: goto label_1a11b8;
        case 0x1a11bcu: goto label_1a11bc;
        case 0x1a11c0u: goto label_1a11c0;
        case 0x1a11c4u: goto label_1a11c4;
        case 0x1a11c8u: goto label_1a11c8;
        case 0x1a11ccu: goto label_1a11cc;
        case 0x1a11d0u: goto label_1a11d0;
        case 0x1a11d4u: goto label_1a11d4;
        case 0x1a11d8u: goto label_1a11d8;
        case 0x1a11dcu: goto label_1a11dc;
        case 0x1a11e0u: goto label_1a11e0;
        case 0x1a11e4u: goto label_1a11e4;
        case 0x1a11e8u: goto label_1a11e8;
        case 0x1a11ecu: goto label_1a11ec;
        case 0x1a11f0u: goto label_1a11f0;
        case 0x1a11f4u: goto label_1a11f4;
        case 0x1a11f8u: goto label_1a11f8;
        case 0x1a11fcu: goto label_1a11fc;
        case 0x1a1200u: goto label_1a1200;
        case 0x1a1204u: goto label_1a1204;
        case 0x1a1208u: goto label_1a1208;
        case 0x1a120cu: goto label_1a120c;
        case 0x1a1210u: goto label_1a1210;
        case 0x1a1214u: goto label_1a1214;
        case 0x1a1218u: goto label_1a1218;
        case 0x1a121cu: goto label_1a121c;
        case 0x1a1220u: goto label_1a1220;
        case 0x1a1224u: goto label_1a1224;
        case 0x1a1228u: goto label_1a1228;
        case 0x1a122cu: goto label_1a122c;
        case 0x1a1230u: goto label_1a1230;
        case 0x1a1234u: goto label_1a1234;
        case 0x1a1238u: goto label_1a1238;
        case 0x1a123cu: goto label_1a123c;
        case 0x1a1240u: goto label_1a1240;
        case 0x1a1244u: goto label_1a1244;
        case 0x1a1248u: goto label_1a1248;
        case 0x1a124cu: goto label_1a124c;
        case 0x1a1250u: goto label_1a1250;
        case 0x1a1254u: goto label_1a1254;
        case 0x1a1258u: goto label_1a1258;
        case 0x1a125cu: goto label_1a125c;
        case 0x1a1260u: goto label_1a1260;
        case 0x1a1264u: goto label_1a1264;
        case 0x1a1268u: goto label_1a1268;
        case 0x1a126cu: goto label_1a126c;
        case 0x1a1270u: goto label_1a1270;
        case 0x1a1274u: goto label_1a1274;
        case 0x1a1278u: goto label_1a1278;
        case 0x1a127cu: goto label_1a127c;
        case 0x1a1280u: goto label_1a1280;
        case 0x1a1284u: goto label_1a1284;
        case 0x1a1288u: goto label_1a1288;
        case 0x1a128cu: goto label_1a128c;
        case 0x1a1290u: goto label_1a1290;
        case 0x1a1294u: goto label_1a1294;
        case 0x1a1298u: goto label_1a1298;
        case 0x1a129cu: goto label_1a129c;
        case 0x1a12a0u: goto label_1a12a0;
        case 0x1a12a4u: goto label_1a12a4;
        case 0x1a12a8u: goto label_1a12a8;
        case 0x1a12acu: goto label_1a12ac;
        case 0x1a12b0u: goto label_1a12b0;
        case 0x1a12b4u: goto label_1a12b4;
        case 0x1a12b8u: goto label_1a12b8;
        case 0x1a12bcu: goto label_1a12bc;
        case 0x1a12c0u: goto label_1a12c0;
        case 0x1a12c4u: goto label_1a12c4;
        case 0x1a12c8u: goto label_1a12c8;
        case 0x1a12ccu: goto label_1a12cc;
        case 0x1a12d0u: goto label_1a12d0;
        case 0x1a12d4u: goto label_1a12d4;
        case 0x1a12d8u: goto label_1a12d8;
        case 0x1a12dcu: goto label_1a12dc;
        case 0x1a12e0u: goto label_1a12e0;
        case 0x1a12e4u: goto label_1a12e4;
        case 0x1a12e8u: goto label_1a12e8;
        case 0x1a12ecu: goto label_1a12ec;
        case 0x1a12f0u: goto label_1a12f0;
        case 0x1a12f4u: goto label_1a12f4;
        case 0x1a12f8u: goto label_1a12f8;
        case 0x1a12fcu: goto label_1a12fc;
        case 0x1a1300u: goto label_1a1300;
        case 0x1a1304u: goto label_1a1304;
        case 0x1a1308u: goto label_1a1308;
        case 0x1a130cu: goto label_1a130c;
        case 0x1a1310u: goto label_1a1310;
        case 0x1a1314u: goto label_1a1314;
        case 0x1a1318u: goto label_1a1318;
        case 0x1a131cu: goto label_1a131c;
        case 0x1a1320u: goto label_1a1320;
        case 0x1a1324u: goto label_1a1324;
        case 0x1a1328u: goto label_1a1328;
        case 0x1a132cu: goto label_1a132c;
        case 0x1a1330u: goto label_1a1330;
        case 0x1a1334u: goto label_1a1334;
        case 0x1a1338u: goto label_1a1338;
        case 0x1a133cu: goto label_1a133c;
        case 0x1a1340u: goto label_1a1340;
        case 0x1a1344u: goto label_1a1344;
        case 0x1a1348u: goto label_1a1348;
        case 0x1a134cu: goto label_1a134c;
        case 0x1a1350u: goto label_1a1350;
        case 0x1a1354u: goto label_1a1354;
        case 0x1a1358u: goto label_1a1358;
        case 0x1a135cu: goto label_1a135c;
        case 0x1a1360u: goto label_1a1360;
        case 0x1a1364u: goto label_1a1364;
        case 0x1a1368u: goto label_1a1368;
        case 0x1a136cu: goto label_1a136c;
        case 0x1a1370u: goto label_1a1370;
        case 0x1a1374u: goto label_1a1374;
        case 0x1a1378u: goto label_1a1378;
        case 0x1a137cu: goto label_1a137c;
        case 0x1a1380u: goto label_1a1380;
        case 0x1a1384u: goto label_1a1384;
        case 0x1a1388u: goto label_1a1388;
        case 0x1a138cu: goto label_1a138c;
        case 0x1a1390u: goto label_1a1390;
        case 0x1a1394u: goto label_1a1394;
        case 0x1a1398u: goto label_1a1398;
        case 0x1a139cu: goto label_1a139c;
        case 0x1a13a0u: goto label_1a13a0;
        case 0x1a13a4u: goto label_1a13a4;
        case 0x1a13a8u: goto label_1a13a8;
        case 0x1a13acu: goto label_1a13ac;
        case 0x1a13b0u: goto label_1a13b0;
        case 0x1a13b4u: goto label_1a13b4;
        case 0x1a13b8u: goto label_1a13b8;
        case 0x1a13bcu: goto label_1a13bc;
        case 0x1a13c0u: goto label_1a13c0;
        case 0x1a13c4u: goto label_1a13c4;
        case 0x1a13c8u: goto label_1a13c8;
        case 0x1a13ccu: goto label_1a13cc;
        case 0x1a13d0u: goto label_1a13d0;
        case 0x1a13d4u: goto label_1a13d4;
        case 0x1a13d8u: goto label_1a13d8;
        case 0x1a13dcu: goto label_1a13dc;
        case 0x1a13e0u: goto label_1a13e0;
        case 0x1a13e4u: goto label_1a13e4;
        case 0x1a13e8u: goto label_1a13e8;
        case 0x1a13ecu: goto label_1a13ec;
        case 0x1a13f0u: goto label_1a13f0;
        case 0x1a13f4u: goto label_1a13f4;
        case 0x1a13f8u: goto label_1a13f8;
        case 0x1a13fcu: goto label_1a13fc;
        case 0x1a1400u: goto label_1a1400;
        case 0x1a1404u: goto label_1a1404;
        case 0x1a1408u: goto label_1a1408;
        case 0x1a140cu: goto label_1a140c;
        case 0x1a1410u: goto label_1a1410;
        case 0x1a1414u: goto label_1a1414;
        case 0x1a1418u: goto label_1a1418;
        case 0x1a141cu: goto label_1a141c;
        case 0x1a1420u: goto label_1a1420;
        case 0x1a1424u: goto label_1a1424;
        case 0x1a1428u: goto label_1a1428;
        case 0x1a142cu: goto label_1a142c;
        case 0x1a1430u: goto label_1a1430;
        case 0x1a1434u: goto label_1a1434;
        case 0x1a1438u: goto label_1a1438;
        case 0x1a143cu: goto label_1a143c;
        case 0x1a1440u: goto label_1a1440;
        case 0x1a1444u: goto label_1a1444;
        case 0x1a1448u: goto label_1a1448;
        case 0x1a144cu: goto label_1a144c;
        case 0x1a1450u: goto label_1a1450;
        case 0x1a1454u: goto label_1a1454;
        case 0x1a1458u: goto label_1a1458;
        case 0x1a145cu: goto label_1a145c;
        case 0x1a1460u: goto label_1a1460;
        case 0x1a1464u: goto label_1a1464;
        case 0x1a1468u: goto label_1a1468;
        case 0x1a146cu: goto label_1a146c;
        case 0x1a1470u: goto label_1a1470;
        case 0x1a1474u: goto label_1a1474;
        case 0x1a1478u: goto label_1a1478;
        case 0x1a147cu: goto label_1a147c;
        case 0x1a1480u: goto label_1a1480;
        case 0x1a1484u: goto label_1a1484;
        case 0x1a1488u: goto label_1a1488;
        case 0x1a148cu: goto label_1a148c;
        case 0x1a1490u: goto label_1a1490;
        case 0x1a1494u: goto label_1a1494;
        case 0x1a1498u: goto label_1a1498;
        case 0x1a149cu: goto label_1a149c;
        case 0x1a14a0u: goto label_1a14a0;
        case 0x1a14a4u: goto label_1a14a4;
        case 0x1a14a8u: goto label_1a14a8;
        case 0x1a14acu: goto label_1a14ac;
        case 0x1a14b0u: goto label_1a14b0;
        case 0x1a14b4u: goto label_1a14b4;
        case 0x1a14b8u: goto label_1a14b8;
        case 0x1a14bcu: goto label_1a14bc;
        case 0x1a14c0u: goto label_1a14c0;
        case 0x1a14c4u: goto label_1a14c4;
        case 0x1a14c8u: goto label_1a14c8;
        case 0x1a14ccu: goto label_1a14cc;
        case 0x1a14d0u: goto label_1a14d0;
        case 0x1a14d4u: goto label_1a14d4;
        case 0x1a14d8u: goto label_1a14d8;
        case 0x1a14dcu: goto label_1a14dc;
        case 0x1a14e0u: goto label_1a14e0;
        case 0x1a14e4u: goto label_1a14e4;
        case 0x1a14e8u: goto label_1a14e8;
        case 0x1a14ecu: goto label_1a14ec;
        case 0x1a14f0u: goto label_1a14f0;
        case 0x1a14f4u: goto label_1a14f4;
        case 0x1a14f8u: goto label_1a14f8;
        case 0x1a14fcu: goto label_1a14fc;
        case 0x1a1500u: goto label_1a1500;
        case 0x1a1504u: goto label_1a1504;
        case 0x1a1508u: goto label_1a1508;
        case 0x1a150cu: goto label_1a150c;
        case 0x1a1510u: goto label_1a1510;
        case 0x1a1514u: goto label_1a1514;
        case 0x1a1518u: goto label_1a1518;
        case 0x1a151cu: goto label_1a151c;
        case 0x1a1520u: goto label_1a1520;
        case 0x1a1524u: goto label_1a1524;
        case 0x1a1528u: goto label_1a1528;
        case 0x1a152cu: goto label_1a152c;
        case 0x1a1530u: goto label_1a1530;
        case 0x1a1534u: goto label_1a1534;
        case 0x1a1538u: goto label_1a1538;
        case 0x1a153cu: goto label_1a153c;
        case 0x1a1540u: goto label_1a1540;
        case 0x1a1544u: goto label_1a1544;
        case 0x1a1548u: goto label_1a1548;
        case 0x1a154cu: goto label_1a154c;
        case 0x1a1550u: goto label_1a1550;
        case 0x1a1554u: goto label_1a1554;
        case 0x1a1558u: goto label_1a1558;
        case 0x1a155cu: goto label_1a155c;
        case 0x1a1560u: goto label_1a1560;
        case 0x1a1564u: goto label_1a1564;
        case 0x1a1568u: goto label_1a1568;
        case 0x1a156cu: goto label_1a156c;
        case 0x1a1570u: goto label_1a1570;
        case 0x1a1574u: goto label_1a1574;
        case 0x1a1578u: goto label_1a1578;
        case 0x1a157cu: goto label_1a157c;
        case 0x1a1580u: goto label_1a1580;
        case 0x1a1584u: goto label_1a1584;
        case 0x1a1588u: goto label_1a1588;
        case 0x1a158cu: goto label_1a158c;
        case 0x1a1590u: goto label_1a1590;
        case 0x1a1594u: goto label_1a1594;
        case 0x1a1598u: goto label_1a1598;
        case 0x1a159cu: goto label_1a159c;
        case 0x1a15a0u: goto label_1a15a0;
        case 0x1a15a4u: goto label_1a15a4;
        case 0x1a15a8u: goto label_1a15a8;
        case 0x1a15acu: goto label_1a15ac;
        case 0x1a15b0u: goto label_1a15b0;
        case 0x1a15b4u: goto label_1a15b4;
        case 0x1a15b8u: goto label_1a15b8;
        case 0x1a15bcu: goto label_1a15bc;
        case 0x1a15c0u: goto label_1a15c0;
        case 0x1a15c4u: goto label_1a15c4;
        case 0x1a15c8u: goto label_1a15c8;
        case 0x1a15ccu: goto label_1a15cc;
        case 0x1a15d0u: goto label_1a15d0;
        case 0x1a15d4u: goto label_1a15d4;
        case 0x1a15d8u: goto label_1a15d8;
        case 0x1a15dcu: goto label_1a15dc;
        case 0x1a15e0u: goto label_1a15e0;
        case 0x1a15e4u: goto label_1a15e4;
        case 0x1a15e8u: goto label_1a15e8;
        case 0x1a15ecu: goto label_1a15ec;
        case 0x1a15f0u: goto label_1a15f0;
        case 0x1a15f4u: goto label_1a15f4;
        case 0x1a15f8u: goto label_1a15f8;
        case 0x1a15fcu: goto label_1a15fc;
        case 0x1a1600u: goto label_1a1600;
        case 0x1a1604u: goto label_1a1604;
        case 0x1a1608u: goto label_1a1608;
        case 0x1a160cu: goto label_1a160c;
        case 0x1a1610u: goto label_1a1610;
        case 0x1a1614u: goto label_1a1614;
        case 0x1a1618u: goto label_1a1618;
        case 0x1a161cu: goto label_1a161c;
        case 0x1a1620u: goto label_1a1620;
        case 0x1a1624u: goto label_1a1624;
        case 0x1a1628u: goto label_1a1628;
        case 0x1a162cu: goto label_1a162c;
        case 0x1a1630u: goto label_1a1630;
        case 0x1a1634u: goto label_1a1634;
        case 0x1a1638u: goto label_1a1638;
        case 0x1a163cu: goto label_1a163c;
        case 0x1a1640u: goto label_1a1640;
        case 0x1a1644u: goto label_1a1644;
        case 0x1a1648u: goto label_1a1648;
        case 0x1a164cu: goto label_1a164c;
        case 0x1a1650u: goto label_1a1650;
        case 0x1a1654u: goto label_1a1654;
        case 0x1a1658u: goto label_1a1658;
        case 0x1a165cu: goto label_1a165c;
        case 0x1a1660u: goto label_1a1660;
        case 0x1a1664u: goto label_1a1664;
        case 0x1a1668u: goto label_1a1668;
        case 0x1a166cu: goto label_1a166c;
        case 0x1a1670u: goto label_1a1670;
        case 0x1a1674u: goto label_1a1674;
        case 0x1a1678u: goto label_1a1678;
        case 0x1a167cu: goto label_1a167c;
        case 0x1a1680u: goto label_1a1680;
        case 0x1a1684u: goto label_1a1684;
        case 0x1a1688u: goto label_1a1688;
        case 0x1a168cu: goto label_1a168c;
        case 0x1a1690u: goto label_1a1690;
        case 0x1a1694u: goto label_1a1694;
        case 0x1a1698u: goto label_1a1698;
        case 0x1a169cu: goto label_1a169c;
        case 0x1a16a0u: goto label_1a16a0;
        case 0x1a16a4u: goto label_1a16a4;
        case 0x1a16a8u: goto label_1a16a8;
        case 0x1a16acu: goto label_1a16ac;
        case 0x1a16b0u: goto label_1a16b0;
        case 0x1a16b4u: goto label_1a16b4;
        case 0x1a16b8u: goto label_1a16b8;
        case 0x1a16bcu: goto label_1a16bc;
        case 0x1a16c0u: goto label_1a16c0;
        case 0x1a16c4u: goto label_1a16c4;
        case 0x1a16c8u: goto label_1a16c8;
        case 0x1a16ccu: goto label_1a16cc;
        case 0x1a16d0u: goto label_1a16d0;
        case 0x1a16d4u: goto label_1a16d4;
        case 0x1a16d8u: goto label_1a16d8;
        case 0x1a16dcu: goto label_1a16dc;
        case 0x1a16e0u: goto label_1a16e0;
        case 0x1a16e4u: goto label_1a16e4;
        case 0x1a16e8u: goto label_1a16e8;
        case 0x1a16ecu: goto label_1a16ec;
        case 0x1a16f0u: goto label_1a16f0;
        case 0x1a16f4u: goto label_1a16f4;
        case 0x1a16f8u: goto label_1a16f8;
        case 0x1a16fcu: goto label_1a16fc;
        case 0x1a1700u: goto label_1a1700;
        case 0x1a1704u: goto label_1a1704;
        case 0x1a1708u: goto label_1a1708;
        case 0x1a170cu: goto label_1a170c;
        case 0x1a1710u: goto label_1a1710;
        case 0x1a1714u: goto label_1a1714;
        case 0x1a1718u: goto label_1a1718;
        case 0x1a171cu: goto label_1a171c;
        case 0x1a1720u: goto label_1a1720;
        case 0x1a1724u: goto label_1a1724;
        case 0x1a1728u: goto label_1a1728;
        case 0x1a172cu: goto label_1a172c;
        case 0x1a1730u: goto label_1a1730;
        case 0x1a1734u: goto label_1a1734;
        case 0x1a1738u: goto label_1a1738;
        case 0x1a173cu: goto label_1a173c;
        case 0x1a1740u: goto label_1a1740;
        case 0x1a1744u: goto label_1a1744;
        case 0x1a1748u: goto label_1a1748;
        case 0x1a174cu: goto label_1a174c;
        case 0x1a1750u: goto label_1a1750;
        case 0x1a1754u: goto label_1a1754;
        case 0x1a1758u: goto label_1a1758;
        case 0x1a175cu: goto label_1a175c;
        case 0x1a1760u: goto label_1a1760;
        case 0x1a1764u: goto label_1a1764;
        case 0x1a1768u: goto label_1a1768;
        case 0x1a176cu: goto label_1a176c;
        case 0x1a1770u: goto label_1a1770;
        case 0x1a1774u: goto label_1a1774;
        case 0x1a1778u: goto label_1a1778;
        case 0x1a177cu: goto label_1a177c;
        case 0x1a1780u: goto label_1a1780;
        case 0x1a1784u: goto label_1a1784;
        case 0x1a1788u: goto label_1a1788;
        case 0x1a178cu: goto label_1a178c;
        case 0x1a1790u: goto label_1a1790;
        case 0x1a1794u: goto label_1a1794;
        case 0x1a1798u: goto label_1a1798;
        case 0x1a179cu: goto label_1a179c;
        case 0x1a17a0u: goto label_1a17a0;
        case 0x1a17a4u: goto label_1a17a4;
        case 0x1a17a8u: goto label_1a17a8;
        case 0x1a17acu: goto label_1a17ac;
        case 0x1a17b0u: goto label_1a17b0;
        case 0x1a17b4u: goto label_1a17b4;
        case 0x1a17b8u: goto label_1a17b8;
        case 0x1a17bcu: goto label_1a17bc;
        case 0x1a17c0u: goto label_1a17c0;
        case 0x1a17c4u: goto label_1a17c4;
        case 0x1a17c8u: goto label_1a17c8;
        case 0x1a17ccu: goto label_1a17cc;
        case 0x1a17d0u: goto label_1a17d0;
        case 0x1a17d4u: goto label_1a17d4;
        case 0x1a17d8u: goto label_1a17d8;
        case 0x1a17dcu: goto label_1a17dc;
        case 0x1a17e0u: goto label_1a17e0;
        case 0x1a17e4u: goto label_1a17e4;
        case 0x1a17e8u: goto label_1a17e8;
        case 0x1a17ecu: goto label_1a17ec;
        case 0x1a17f0u: goto label_1a17f0;
        case 0x1a17f4u: goto label_1a17f4;
        case 0x1a17f8u: goto label_1a17f8;
        case 0x1a17fcu: goto label_1a17fc;
        case 0x1a1800u: goto label_1a1800;
        case 0x1a1804u: goto label_1a1804;
        case 0x1a1808u: goto label_1a1808;
        case 0x1a180cu: goto label_1a180c;
        case 0x1a1810u: goto label_1a1810;
        case 0x1a1814u: goto label_1a1814;
        case 0x1a1818u: goto label_1a1818;
        case 0x1a181cu: goto label_1a181c;
        case 0x1a1820u: goto label_1a1820;
        case 0x1a1824u: goto label_1a1824;
        case 0x1a1828u: goto label_1a1828;
        case 0x1a182cu: goto label_1a182c;
        case 0x1a1830u: goto label_1a1830;
        case 0x1a1834u: goto label_1a1834;
        case 0x1a1838u: goto label_1a1838;
        case 0x1a183cu: goto label_1a183c;
        case 0x1a1840u: goto label_1a1840;
        case 0x1a1844u: goto label_1a1844;
        case 0x1a1848u: goto label_1a1848;
        case 0x1a184cu: goto label_1a184c;
        case 0x1a1850u: goto label_1a1850;
        case 0x1a1854u: goto label_1a1854;
        case 0x1a1858u: goto label_1a1858;
        case 0x1a185cu: goto label_1a185c;
        case 0x1a1860u: goto label_1a1860;
        case 0x1a1864u: goto label_1a1864;
        case 0x1a1868u: goto label_1a1868;
        case 0x1a186cu: goto label_1a186c;
        case 0x1a1870u: goto label_1a1870;
        case 0x1a1874u: goto label_1a1874;
        case 0x1a1878u: goto label_1a1878;
        case 0x1a187cu: goto label_1a187c;
        case 0x1a1880u: goto label_1a1880;
        case 0x1a1884u: goto label_1a1884;
        case 0x1a1888u: goto label_1a1888;
        case 0x1a188cu: goto label_1a188c;
        case 0x1a1890u: goto label_1a1890;
        case 0x1a1894u: goto label_1a1894;
        case 0x1a1898u: goto label_1a1898;
        case 0x1a189cu: goto label_1a189c;
        case 0x1a18a0u: goto label_1a18a0;
        case 0x1a18a4u: goto label_1a18a4;
        case 0x1a18a8u: goto label_1a18a8;
        case 0x1a18acu: goto label_1a18ac;
        case 0x1a18b0u: goto label_1a18b0;
        case 0x1a18b4u: goto label_1a18b4;
        case 0x1a18b8u: goto label_1a18b8;
        case 0x1a18bcu: goto label_1a18bc;
        case 0x1a18c0u: goto label_1a18c0;
        case 0x1a18c4u: goto label_1a18c4;
        case 0x1a18c8u: goto label_1a18c8;
        case 0x1a18ccu: goto label_1a18cc;
        case 0x1a18d0u: goto label_1a18d0;
        case 0x1a18d4u: goto label_1a18d4;
        case 0x1a18d8u: goto label_1a18d8;
        case 0x1a18dcu: goto label_1a18dc;
        case 0x1a18e0u: goto label_1a18e0;
        case 0x1a18e4u: goto label_1a18e4;
        case 0x1a18e8u: goto label_1a18e8;
        case 0x1a18ecu: goto label_1a18ec;
        case 0x1a18f0u: goto label_1a18f0;
        case 0x1a18f4u: goto label_1a18f4;
        case 0x1a18f8u: goto label_1a18f8;
        case 0x1a18fcu: goto label_1a18fc;
        case 0x1a1900u: goto label_1a1900;
        case 0x1a1904u: goto label_1a1904;
        case 0x1a1908u: goto label_1a1908;
        case 0x1a190cu: goto label_1a190c;
        case 0x1a1910u: goto label_1a1910;
        case 0x1a1914u: goto label_1a1914;
        case 0x1a1918u: goto label_1a1918;
        case 0x1a191cu: goto label_1a191c;
        case 0x1a1920u: goto label_1a1920;
        case 0x1a1924u: goto label_1a1924;
        case 0x1a1928u: goto label_1a1928;
        case 0x1a192cu: goto label_1a192c;
        case 0x1a1930u: goto label_1a1930;
        case 0x1a1934u: goto label_1a1934;
        case 0x1a1938u: goto label_1a1938;
        case 0x1a193cu: goto label_1a193c;
        case 0x1a1940u: goto label_1a1940;
        case 0x1a1944u: goto label_1a1944;
        case 0x1a1948u: goto label_1a1948;
        case 0x1a194cu: goto label_1a194c;
        case 0x1a1950u: goto label_1a1950;
        case 0x1a1954u: goto label_1a1954;
        case 0x1a1958u: goto label_1a1958;
        case 0x1a195cu: goto label_1a195c;
        case 0x1a1960u: goto label_1a1960;
        case 0x1a1964u: goto label_1a1964;
        case 0x1a1968u: goto label_1a1968;
        case 0x1a196cu: goto label_1a196c;
        case 0x1a1970u: goto label_1a1970;
        case 0x1a1974u: goto label_1a1974;
        case 0x1a1978u: goto label_1a1978;
        case 0x1a197cu: goto label_1a197c;
        case 0x1a1980u: goto label_1a1980;
        case 0x1a1984u: goto label_1a1984;
        case 0x1a1988u: goto label_1a1988;
        case 0x1a198cu: goto label_1a198c;
        case 0x1a1990u: goto label_1a1990;
        case 0x1a1994u: goto label_1a1994;
        case 0x1a1998u: goto label_1a1998;
        case 0x1a199cu: goto label_1a199c;
        case 0x1a19a0u: goto label_1a19a0;
        case 0x1a19a4u: goto label_1a19a4;
        case 0x1a19a8u: goto label_1a19a8;
        case 0x1a19acu: goto label_1a19ac;
        case 0x1a19b0u: goto label_1a19b0;
        case 0x1a19b4u: goto label_1a19b4;
        case 0x1a19b8u: goto label_1a19b8;
        case 0x1a19bcu: goto label_1a19bc;
        case 0x1a19c0u: goto label_1a19c0;
        case 0x1a19c4u: goto label_1a19c4;
        case 0x1a19c8u: goto label_1a19c8;
        case 0x1a19ccu: goto label_1a19cc;
        case 0x1a19d0u: goto label_1a19d0;
        case 0x1a19d4u: goto label_1a19d4;
        case 0x1a19d8u: goto label_1a19d8;
        case 0x1a19dcu: goto label_1a19dc;
        case 0x1a19e0u: goto label_1a19e0;
        case 0x1a19e4u: goto label_1a19e4;
        case 0x1a19e8u: goto label_1a19e8;
        case 0x1a19ecu: goto label_1a19ec;
        case 0x1a19f0u: goto label_1a19f0;
        case 0x1a19f4u: goto label_1a19f4;
        case 0x1a19f8u: goto label_1a19f8;
        case 0x1a19fcu: goto label_1a19fc;
        case 0x1a1a00u: goto label_1a1a00;
        case 0x1a1a04u: goto label_1a1a04;
        case 0x1a1a08u: goto label_1a1a08;
        case 0x1a1a0cu: goto label_1a1a0c;
        case 0x1a1a10u: goto label_1a1a10;
        case 0x1a1a14u: goto label_1a1a14;
        case 0x1a1a18u: goto label_1a1a18;
        case 0x1a1a1cu: goto label_1a1a1c;
        case 0x1a1a20u: goto label_1a1a20;
        case 0x1a1a24u: goto label_1a1a24;
        case 0x1a1a28u: goto label_1a1a28;
        case 0x1a1a2cu: goto label_1a1a2c;
        case 0x1a1a30u: goto label_1a1a30;
        case 0x1a1a34u: goto label_1a1a34;
        case 0x1a1a38u: goto label_1a1a38;
        case 0x1a1a3cu: goto label_1a1a3c;
        case 0x1a1a40u: goto label_1a1a40;
        case 0x1a1a44u: goto label_1a1a44;
        case 0x1a1a48u: goto label_1a1a48;
        case 0x1a1a4cu: goto label_1a1a4c;
        case 0x1a1a50u: goto label_1a1a50;
        case 0x1a1a54u: goto label_1a1a54;
        case 0x1a1a58u: goto label_1a1a58;
        case 0x1a1a5cu: goto label_1a1a5c;
        case 0x1a1a60u: goto label_1a1a60;
        case 0x1a1a64u: goto label_1a1a64;
        case 0x1a1a68u: goto label_1a1a68;
        case 0x1a1a6cu: goto label_1a1a6c;
        case 0x1a1a70u: goto label_1a1a70;
        case 0x1a1a74u: goto label_1a1a74;
        case 0x1a1a78u: goto label_1a1a78;
        case 0x1a1a7cu: goto label_1a1a7c;
        case 0x1a1a80u: goto label_1a1a80;
        case 0x1a1a84u: goto label_1a1a84;
        case 0x1a1a88u: goto label_1a1a88;
        case 0x1a1a8cu: goto label_1a1a8c;
        case 0x1a1a90u: goto label_1a1a90;
        case 0x1a1a94u: goto label_1a1a94;
        case 0x1a1a98u: goto label_1a1a98;
        case 0x1a1a9cu: goto label_1a1a9c;
        case 0x1a1aa0u: goto label_1a1aa0;
        case 0x1a1aa4u: goto label_1a1aa4;
        case 0x1a1aa8u: goto label_1a1aa8;
        case 0x1a1aacu: goto label_1a1aac;
        case 0x1a1ab0u: goto label_1a1ab0;
        case 0x1a1ab4u: goto label_1a1ab4;
        case 0x1a1ab8u: goto label_1a1ab8;
        case 0x1a1abcu: goto label_1a1abc;
        case 0x1a1ac0u: goto label_1a1ac0;
        case 0x1a1ac4u: goto label_1a1ac4;
        case 0x1a1ac8u: goto label_1a1ac8;
        case 0x1a1accu: goto label_1a1acc;
        case 0x1a1ad0u: goto label_1a1ad0;
        case 0x1a1ad4u: goto label_1a1ad4;
        case 0x1a1ad8u: goto label_1a1ad8;
        case 0x1a1adcu: goto label_1a1adc;
        case 0x1a1ae0u: goto label_1a1ae0;
        case 0x1a1ae4u: goto label_1a1ae4;
        case 0x1a1ae8u: goto label_1a1ae8;
        case 0x1a1aecu: goto label_1a1aec;
        case 0x1a1af0u: goto label_1a1af0;
        case 0x1a1af4u: goto label_1a1af4;
        case 0x1a1af8u: goto label_1a1af8;
        case 0x1a1afcu: goto label_1a1afc;
        case 0x1a1b00u: goto label_1a1b00;
        case 0x1a1b04u: goto label_1a1b04;
        case 0x1a1b08u: goto label_1a1b08;
        case 0x1a1b0cu: goto label_1a1b0c;
        case 0x1a1b10u: goto label_1a1b10;
        case 0x1a1b14u: goto label_1a1b14;
        case 0x1a1b18u: goto label_1a1b18;
        case 0x1a1b1cu: goto label_1a1b1c;
        case 0x1a1b20u: goto label_1a1b20;
        case 0x1a1b24u: goto label_1a1b24;
        case 0x1a1b28u: goto label_1a1b28;
        case 0x1a1b2cu: goto label_1a1b2c;
        case 0x1a1b30u: goto label_1a1b30;
        case 0x1a1b34u: goto label_1a1b34;
        case 0x1a1b38u: goto label_1a1b38;
        case 0x1a1b3cu: goto label_1a1b3c;
        case 0x1a1b40u: goto label_1a1b40;
        case 0x1a1b44u: goto label_1a1b44;
        case 0x1a1b48u: goto label_1a1b48;
        case 0x1a1b4cu: goto label_1a1b4c;
        case 0x1a1b50u: goto label_1a1b50;
        case 0x1a1b54u: goto label_1a1b54;
        case 0x1a1b58u: goto label_1a1b58;
        case 0x1a1b5cu: goto label_1a1b5c;
        case 0x1a1b60u: goto label_1a1b60;
        case 0x1a1b64u: goto label_1a1b64;
        case 0x1a1b68u: goto label_1a1b68;
        case 0x1a1b6cu: goto label_1a1b6c;
        case 0x1a1b70u: goto label_1a1b70;
        case 0x1a1b74u: goto label_1a1b74;
        case 0x1a1b78u: goto label_1a1b78;
        case 0x1a1b7cu: goto label_1a1b7c;
        case 0x1a1b80u: goto label_1a1b80;
        case 0x1a1b84u: goto label_1a1b84;
        case 0x1a1b88u: goto label_1a1b88;
        case 0x1a1b8cu: goto label_1a1b8c;
        case 0x1a1b90u: goto label_1a1b90;
        case 0x1a1b94u: goto label_1a1b94;
        case 0x1a1b98u: goto label_1a1b98;
        case 0x1a1b9cu: goto label_1a1b9c;
        case 0x1a1ba0u: goto label_1a1ba0;
        case 0x1a1ba4u: goto label_1a1ba4;
        case 0x1a1ba8u: goto label_1a1ba8;
        case 0x1a1bacu: goto label_1a1bac;
        case 0x1a1bb0u: goto label_1a1bb0;
        case 0x1a1bb4u: goto label_1a1bb4;
        case 0x1a1bb8u: goto label_1a1bb8;
        case 0x1a1bbcu: goto label_1a1bbc;
        case 0x1a1bc0u: goto label_1a1bc0;
        case 0x1a1bc4u: goto label_1a1bc4;
        case 0x1a1bc8u: goto label_1a1bc8;
        case 0x1a1bccu: goto label_1a1bcc;
        case 0x1a1bd0u: goto label_1a1bd0;
        case 0x1a1bd4u: goto label_1a1bd4;
        case 0x1a1bd8u: goto label_1a1bd8;
        case 0x1a1bdcu: goto label_1a1bdc;
        case 0x1a1be0u: goto label_1a1be0;
        case 0x1a1be4u: goto label_1a1be4;
        case 0x1a1be8u: goto label_1a1be8;
        case 0x1a1becu: goto label_1a1bec;
        case 0x1a1bf0u: goto label_1a1bf0;
        case 0x1a1bf4u: goto label_1a1bf4;
        case 0x1a1bf8u: goto label_1a1bf8;
        case 0x1a1bfcu: goto label_1a1bfc;
        case 0x1a1c00u: goto label_1a1c00;
        case 0x1a1c04u: goto label_1a1c04;
        case 0x1a1c08u: goto label_1a1c08;
        case 0x1a1c0cu: goto label_1a1c0c;
        case 0x1a1c10u: goto label_1a1c10;
        case 0x1a1c14u: goto label_1a1c14;
        case 0x1a1c18u: goto label_1a1c18;
        case 0x1a1c1cu: goto label_1a1c1c;
        case 0x1a1c20u: goto label_1a1c20;
        case 0x1a1c24u: goto label_1a1c24;
        case 0x1a1c28u: goto label_1a1c28;
        case 0x1a1c2cu: goto label_1a1c2c;
        case 0x1a1c30u: goto label_1a1c30;
        case 0x1a1c34u: goto label_1a1c34;
        case 0x1a1c38u: goto label_1a1c38;
        case 0x1a1c3cu: goto label_1a1c3c;
        case 0x1a1c40u: goto label_1a1c40;
        case 0x1a1c44u: goto label_1a1c44;
        case 0x1a1c48u: goto label_1a1c48;
        case 0x1a1c4cu: goto label_1a1c4c;
        case 0x1a1c50u: goto label_1a1c50;
        case 0x1a1c54u: goto label_1a1c54;
        case 0x1a1c58u: goto label_1a1c58;
        case 0x1a1c5cu: goto label_1a1c5c;
        case 0x1a1c60u: goto label_1a1c60;
        case 0x1a1c64u: goto label_1a1c64;
        case 0x1a1c68u: goto label_1a1c68;
        case 0x1a1c6cu: goto label_1a1c6c;
        case 0x1a1c70u: goto label_1a1c70;
        case 0x1a1c74u: goto label_1a1c74;
        case 0x1a1c78u: goto label_1a1c78;
        case 0x1a1c7cu: goto label_1a1c7c;
        case 0x1a1c80u: goto label_1a1c80;
        case 0x1a1c84u: goto label_1a1c84;
        case 0x1a1c88u: goto label_1a1c88;
        case 0x1a1c8cu: goto label_1a1c8c;
        case 0x1a1c90u: goto label_1a1c90;
        case 0x1a1c94u: goto label_1a1c94;
        case 0x1a1c98u: goto label_1a1c98;
        case 0x1a1c9cu: goto label_1a1c9c;
        case 0x1a1ca0u: goto label_1a1ca0;
        case 0x1a1ca4u: goto label_1a1ca4;
        case 0x1a1ca8u: goto label_1a1ca8;
        case 0x1a1cacu: goto label_1a1cac;
        case 0x1a1cb0u: goto label_1a1cb0;
        case 0x1a1cb4u: goto label_1a1cb4;
        case 0x1a1cb8u: goto label_1a1cb8;
        case 0x1a1cbcu: goto label_1a1cbc;
        case 0x1a1cc0u: goto label_1a1cc0;
        case 0x1a1cc4u: goto label_1a1cc4;
        case 0x1a1cc8u: goto label_1a1cc8;
        case 0x1a1cccu: goto label_1a1ccc;
        case 0x1a1cd0u: goto label_1a1cd0;
        case 0x1a1cd4u: goto label_1a1cd4;
        case 0x1a1cd8u: goto label_1a1cd8;
        case 0x1a1cdcu: goto label_1a1cdc;
        case 0x1a1ce0u: goto label_1a1ce0;
        case 0x1a1ce4u: goto label_1a1ce4;
        case 0x1a1ce8u: goto label_1a1ce8;
        case 0x1a1cecu: goto label_1a1cec;
        case 0x1a1cf0u: goto label_1a1cf0;
        case 0x1a1cf4u: goto label_1a1cf4;
        case 0x1a1cf8u: goto label_1a1cf8;
        case 0x1a1cfcu: goto label_1a1cfc;
        case 0x1a1d00u: goto label_1a1d00;
        case 0x1a1d04u: goto label_1a1d04;
        case 0x1a1d08u: goto label_1a1d08;
        case 0x1a1d0cu: goto label_1a1d0c;
        case 0x1a1d10u: goto label_1a1d10;
        case 0x1a1d14u: goto label_1a1d14;
        case 0x1a1d18u: goto label_1a1d18;
        case 0x1a1d1cu: goto label_1a1d1c;
        case 0x1a1d20u: goto label_1a1d20;
        case 0x1a1d24u: goto label_1a1d24;
        case 0x1a1d28u: goto label_1a1d28;
        case 0x1a1d2cu: goto label_1a1d2c;
        case 0x1a1d30u: goto label_1a1d30;
        case 0x1a1d34u: goto label_1a1d34;
        case 0x1a1d38u: goto label_1a1d38;
        case 0x1a1d3cu: goto label_1a1d3c;
        case 0x1a1d40u: goto label_1a1d40;
        case 0x1a1d44u: goto label_1a1d44;
        case 0x1a1d48u: goto label_1a1d48;
        case 0x1a1d4cu: goto label_1a1d4c;
        case 0x1a1d50u: goto label_1a1d50;
        case 0x1a1d54u: goto label_1a1d54;
        case 0x1a1d58u: goto label_1a1d58;
        case 0x1a1d5cu: goto label_1a1d5c;
        case 0x1a1d60u: goto label_1a1d60;
        case 0x1a1d64u: goto label_1a1d64;
        case 0x1a1d68u: goto label_1a1d68;
        case 0x1a1d6cu: goto label_1a1d6c;
        case 0x1a1d70u: goto label_1a1d70;
        case 0x1a1d74u: goto label_1a1d74;
        case 0x1a1d78u: goto label_1a1d78;
        case 0x1a1d7cu: goto label_1a1d7c;
        case 0x1a1d80u: goto label_1a1d80;
        case 0x1a1d84u: goto label_1a1d84;
        case 0x1a1d88u: goto label_1a1d88;
        case 0x1a1d8cu: goto label_1a1d8c;
        case 0x1a1d90u: goto label_1a1d90;
        case 0x1a1d94u: goto label_1a1d94;
        case 0x1a1d98u: goto label_1a1d98;
        case 0x1a1d9cu: goto label_1a1d9c;
        case 0x1a1da0u: goto label_1a1da0;
        case 0x1a1da4u: goto label_1a1da4;
        case 0x1a1da8u: goto label_1a1da8;
        case 0x1a1dacu: goto label_1a1dac;
        case 0x1a1db0u: goto label_1a1db0;
        case 0x1a1db4u: goto label_1a1db4;
        case 0x1a1db8u: goto label_1a1db8;
        case 0x1a1dbcu: goto label_1a1dbc;
        case 0x1a1dc0u: goto label_1a1dc0;
        case 0x1a1dc4u: goto label_1a1dc4;
        case 0x1a1dc8u: goto label_1a1dc8;
        case 0x1a1dccu: goto label_1a1dcc;
        case 0x1a1dd0u: goto label_1a1dd0;
        case 0x1a1dd4u: goto label_1a1dd4;
        case 0x1a1dd8u: goto label_1a1dd8;
        case 0x1a1ddcu: goto label_1a1ddc;
        case 0x1a1de0u: goto label_1a1de0;
        case 0x1a1de4u: goto label_1a1de4;
        case 0x1a1de8u: goto label_1a1de8;
        case 0x1a1decu: goto label_1a1dec;
        case 0x1a1df0u: goto label_1a1df0;
        case 0x1a1df4u: goto label_1a1df4;
        case 0x1a1df8u: goto label_1a1df8;
        case 0x1a1dfcu: goto label_1a1dfc;
        case 0x1a1e00u: goto label_1a1e00;
        case 0x1a1e04u: goto label_1a1e04;
        case 0x1a1e08u: goto label_1a1e08;
        case 0x1a1e0cu: goto label_1a1e0c;
        case 0x1a1e10u: goto label_1a1e10;
        case 0x1a1e14u: goto label_1a1e14;
        case 0x1a1e18u: goto label_1a1e18;
        case 0x1a1e1cu: goto label_1a1e1c;
        case 0x1a1e20u: goto label_1a1e20;
        case 0x1a1e24u: goto label_1a1e24;
        case 0x1a1e28u: goto label_1a1e28;
        case 0x1a1e2cu: goto label_1a1e2c;
        case 0x1a1e30u: goto label_1a1e30;
        case 0x1a1e34u: goto label_1a1e34;
        case 0x1a1e38u: goto label_1a1e38;
        case 0x1a1e3cu: goto label_1a1e3c;
        case 0x1a1e40u: goto label_1a1e40;
        case 0x1a1e44u: goto label_1a1e44;
        case 0x1a1e48u: goto label_1a1e48;
        case 0x1a1e4cu: goto label_1a1e4c;
        case 0x1a1e50u: goto label_1a1e50;
        case 0x1a1e54u: goto label_1a1e54;
        case 0x1a1e58u: goto label_1a1e58;
        case 0x1a1e5cu: goto label_1a1e5c;
        case 0x1a1e60u: goto label_1a1e60;
        case 0x1a1e64u: goto label_1a1e64;
        case 0x1a1e68u: goto label_1a1e68;
        case 0x1a1e6cu: goto label_1a1e6c;
        case 0x1a1e70u: goto label_1a1e70;
        case 0x1a1e74u: goto label_1a1e74;
        case 0x1a1e78u: goto label_1a1e78;
        case 0x1a1e7cu: goto label_1a1e7c;
        case 0x1a1e80u: goto label_1a1e80;
        case 0x1a1e84u: goto label_1a1e84;
        case 0x1a1e88u: goto label_1a1e88;
        case 0x1a1e8cu: goto label_1a1e8c;
        case 0x1a1e90u: goto label_1a1e90;
        case 0x1a1e94u: goto label_1a1e94;
        case 0x1a1e98u: goto label_1a1e98;
        case 0x1a1e9cu: goto label_1a1e9c;
        case 0x1a1ea0u: goto label_1a1ea0;
        case 0x1a1ea4u: goto label_1a1ea4;
        case 0x1a1ea8u: goto label_1a1ea8;
        case 0x1a1eacu: goto label_1a1eac;
        case 0x1a1eb0u: goto label_1a1eb0;
        case 0x1a1eb4u: goto label_1a1eb4;
        case 0x1a1eb8u: goto label_1a1eb8;
        case 0x1a1ebcu: goto label_1a1ebc;
        case 0x1a1ec0u: goto label_1a1ec0;
        case 0x1a1ec4u: goto label_1a1ec4;
        case 0x1a1ec8u: goto label_1a1ec8;
        case 0x1a1eccu: goto label_1a1ecc;
        case 0x1a1ed0u: goto label_1a1ed0;
        case 0x1a1ed4u: goto label_1a1ed4;
        case 0x1a1ed8u: goto label_1a1ed8;
        case 0x1a1edcu: goto label_1a1edc;
        case 0x1a1ee0u: goto label_1a1ee0;
        case 0x1a1ee4u: goto label_1a1ee4;
        case 0x1a1ee8u: goto label_1a1ee8;
        case 0x1a1eecu: goto label_1a1eec;
        case 0x1a1ef0u: goto label_1a1ef0;
        case 0x1a1ef4u: goto label_1a1ef4;
        case 0x1a1ef8u: goto label_1a1ef8;
        case 0x1a1efcu: goto label_1a1efc;
        case 0x1a1f00u: goto label_1a1f00;
        case 0x1a1f04u: goto label_1a1f04;
        case 0x1a1f08u: goto label_1a1f08;
        case 0x1a1f0cu: goto label_1a1f0c;
        case 0x1a1f10u: goto label_1a1f10;
        case 0x1a1f14u: goto label_1a1f14;
        case 0x1a1f18u: goto label_1a1f18;
        case 0x1a1f1cu: goto label_1a1f1c;
        case 0x1a1f20u: goto label_1a1f20;
        case 0x1a1f24u: goto label_1a1f24;
        case 0x1a1f28u: goto label_1a1f28;
        case 0x1a1f2cu: goto label_1a1f2c;
        case 0x1a1f30u: goto label_1a1f30;
        case 0x1a1f34u: goto label_1a1f34;
        case 0x1a1f38u: goto label_1a1f38;
        case 0x1a1f3cu: goto label_1a1f3c;
        case 0x1a1f40u: goto label_1a1f40;
        case 0x1a1f44u: goto label_1a1f44;
        case 0x1a1f48u: goto label_1a1f48;
        case 0x1a1f4cu: goto label_1a1f4c;
        case 0x1a1f50u: goto label_1a1f50;
        case 0x1a1f54u: goto label_1a1f54;
        case 0x1a1f58u: goto label_1a1f58;
        case 0x1a1f5cu: goto label_1a1f5c;
        case 0x1a1f60u: goto label_1a1f60;
        case 0x1a1f64u: goto label_1a1f64;
        case 0x1a1f68u: goto label_1a1f68;
        case 0x1a1f6cu: goto label_1a1f6c;
        case 0x1a1f70u: goto label_1a1f70;
        case 0x1a1f74u: goto label_1a1f74;
        case 0x1a1f78u: goto label_1a1f78;
        case 0x1a1f7cu: goto label_1a1f7c;
        case 0x1a1f80u: goto label_1a1f80;
        case 0x1a1f84u: goto label_1a1f84;
        case 0x1a1f88u: goto label_1a1f88;
        case 0x1a1f8cu: goto label_1a1f8c;
        case 0x1a1f90u: goto label_1a1f90;
        case 0x1a1f94u: goto label_1a1f94;
        case 0x1a1f98u: goto label_1a1f98;
        case 0x1a1f9cu: goto label_1a1f9c;
        case 0x1a1fa0u: goto label_1a1fa0;
        case 0x1a1fa4u: goto label_1a1fa4;
        case 0x1a1fa8u: goto label_1a1fa8;
        case 0x1a1facu: goto label_1a1fac;
        case 0x1a1fb0u: goto label_1a1fb0;
        case 0x1a1fb4u: goto label_1a1fb4;
        case 0x1a1fb8u: goto label_1a1fb8;
        case 0x1a1fbcu: goto label_1a1fbc;
        case 0x1a1fc0u: goto label_1a1fc0;
        case 0x1a1fc4u: goto label_1a1fc4;
        case 0x1a1fc8u: goto label_1a1fc8;
        case 0x1a1fccu: goto label_1a1fcc;
        case 0x1a1fd0u: goto label_1a1fd0;
        case 0x1a1fd4u: goto label_1a1fd4;
        case 0x1a1fd8u: goto label_1a1fd8;
        case 0x1a1fdcu: goto label_1a1fdc;
        case 0x1a1fe0u: goto label_1a1fe0;
        case 0x1a1fe4u: goto label_1a1fe4;
        case 0x1a1fe8u: goto label_1a1fe8;
        case 0x1a1fecu: goto label_1a1fec;
        case 0x1a1ff0u: goto label_1a1ff0;
        case 0x1a1ff4u: goto label_1a1ff4;
        case 0x1a1ff8u: goto label_1a1ff8;
        case 0x1a1ffcu: goto label_1a1ffc;
        case 0x1a2000u: goto label_1a2000;
        case 0x1a2004u: goto label_1a2004;
        case 0x1a2008u: goto label_1a2008;
        case 0x1a200cu: goto label_1a200c;
        case 0x1a2010u: goto label_1a2010;
        case 0x1a2014u: goto label_1a2014;
        case 0x1a2018u: goto label_1a2018;
        case 0x1a201cu: goto label_1a201c;
        case 0x1a2020u: goto label_1a2020;
        case 0x1a2024u: goto label_1a2024;
        case 0x1a2028u: goto label_1a2028;
        case 0x1a202cu: goto label_1a202c;
        case 0x1a2030u: goto label_1a2030;
        case 0x1a2034u: goto label_1a2034;
        case 0x1a2038u: goto label_1a2038;
        case 0x1a203cu: goto label_1a203c;
        case 0x1a2040u: goto label_1a2040;
        case 0x1a2044u: goto label_1a2044;
        case 0x1a2048u: goto label_1a2048;
        case 0x1a204cu: goto label_1a204c;
        case 0x1a2050u: goto label_1a2050;
        case 0x1a2054u: goto label_1a2054;
        case 0x1a2058u: goto label_1a2058;
        case 0x1a205cu: goto label_1a205c;
        case 0x1a2060u: goto label_1a2060;
        case 0x1a2064u: goto label_1a2064;
        case 0x1a2068u: goto label_1a2068;
        case 0x1a206cu: goto label_1a206c;
        case 0x1a2070u: goto label_1a2070;
        case 0x1a2074u: goto label_1a2074;
        case 0x1a2078u: goto label_1a2078;
        case 0x1a207cu: goto label_1a207c;
        case 0x1a2080u: goto label_1a2080;
        case 0x1a2084u: goto label_1a2084;
        case 0x1a2088u: goto label_1a2088;
        case 0x1a208cu: goto label_1a208c;
        case 0x1a2090u: goto label_1a2090;
        case 0x1a2094u: goto label_1a2094;
        case 0x1a2098u: goto label_1a2098;
        case 0x1a209cu: goto label_1a209c;
        case 0x1a20a0u: goto label_1a20a0;
        case 0x1a20a4u: goto label_1a20a4;
        case 0x1a20a8u: goto label_1a20a8;
        case 0x1a20acu: goto label_1a20ac;
        case 0x1a20b0u: goto label_1a20b0;
        case 0x1a20b4u: goto label_1a20b4;
        case 0x1a20b8u: goto label_1a20b8;
        case 0x1a20bcu: goto label_1a20bc;
        case 0x1a20c0u: goto label_1a20c0;
        case 0x1a20c4u: goto label_1a20c4;
        case 0x1a20c8u: goto label_1a20c8;
        case 0x1a20ccu: goto label_1a20cc;
        case 0x1a20d0u: goto label_1a20d0;
        case 0x1a20d4u: goto label_1a20d4;
        case 0x1a20d8u: goto label_1a20d8;
        case 0x1a20dcu: goto label_1a20dc;
        case 0x1a20e0u: goto label_1a20e0;
        case 0x1a20e4u: goto label_1a20e4;
        case 0x1a20e8u: goto label_1a20e8;
        case 0x1a20ecu: goto label_1a20ec;
        case 0x1a20f0u: goto label_1a20f0;
        case 0x1a20f4u: goto label_1a20f4;
        case 0x1a20f8u: goto label_1a20f8;
        case 0x1a20fcu: goto label_1a20fc;
        case 0x1a2100u: goto label_1a2100;
        case 0x1a2104u: goto label_1a2104;
        case 0x1a2108u: goto label_1a2108;
        case 0x1a210cu: goto label_1a210c;
        case 0x1a2110u: goto label_1a2110;
        case 0x1a2114u: goto label_1a2114;
        case 0x1a2118u: goto label_1a2118;
        case 0x1a211cu: goto label_1a211c;
        case 0x1a2120u: goto label_1a2120;
        case 0x1a2124u: goto label_1a2124;
        case 0x1a2128u: goto label_1a2128;
        case 0x1a212cu: goto label_1a212c;
        case 0x1a2130u: goto label_1a2130;
        case 0x1a2134u: goto label_1a2134;
        case 0x1a2138u: goto label_1a2138;
        case 0x1a213cu: goto label_1a213c;
        case 0x1a2140u: goto label_1a2140;
        case 0x1a2144u: goto label_1a2144;
        case 0x1a2148u: goto label_1a2148;
        case 0x1a214cu: goto label_1a214c;
        case 0x1a2150u: goto label_1a2150;
        case 0x1a2154u: goto label_1a2154;
        case 0x1a2158u: goto label_1a2158;
        case 0x1a215cu: goto label_1a215c;
        case 0x1a2160u: goto label_1a2160;
        case 0x1a2164u: goto label_1a2164;
        case 0x1a2168u: goto label_1a2168;
        case 0x1a216cu: goto label_1a216c;
        case 0x1a2170u: goto label_1a2170;
        case 0x1a2174u: goto label_1a2174;
        case 0x1a2178u: goto label_1a2178;
        case 0x1a217cu: goto label_1a217c;
        case 0x1a2180u: goto label_1a2180;
        case 0x1a2184u: goto label_1a2184;
        case 0x1a2188u: goto label_1a2188;
        case 0x1a218cu: goto label_1a218c;
        case 0x1a2190u: goto label_1a2190;
        case 0x1a2194u: goto label_1a2194;
        case 0x1a2198u: goto label_1a2198;
        case 0x1a219cu: goto label_1a219c;
        case 0x1a21a0u: goto label_1a21a0;
        case 0x1a21a4u: goto label_1a21a4;
        case 0x1a21a8u: goto label_1a21a8;
        case 0x1a21acu: goto label_1a21ac;
        case 0x1a21b0u: goto label_1a21b0;
        case 0x1a21b4u: goto label_1a21b4;
        case 0x1a21b8u: goto label_1a21b8;
        case 0x1a21bcu: goto label_1a21bc;
        case 0x1a21c0u: goto label_1a21c0;
        case 0x1a21c4u: goto label_1a21c4;
        case 0x1a21c8u: goto label_1a21c8;
        case 0x1a21ccu: goto label_1a21cc;
        case 0x1a21d0u: goto label_1a21d0;
        case 0x1a21d4u: goto label_1a21d4;
        case 0x1a21d8u: goto label_1a21d8;
        case 0x1a21dcu: goto label_1a21dc;
        case 0x1a21e0u: goto label_1a21e0;
        case 0x1a21e4u: goto label_1a21e4;
        case 0x1a21e8u: goto label_1a21e8;
        case 0x1a21ecu: goto label_1a21ec;
        case 0x1a21f0u: goto label_1a21f0;
        default: break;
    }

    ctx->pc = 0x1a0f50u;

label_1a0f50:
    // 0x1a0f50: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1a0f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1a0f54:
    // 0x1a0f54: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a0f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1a0f58:
    // 0x1a0f58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a0f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1a0f5c:
    // 0x1a0f5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a0f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1a0f60:
    // 0x1a0f60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a0f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1a0f64:
    // 0x1a0f64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a0f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1a0f68:
    // 0x1a0f68: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a0f68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0f6c:
    // 0x1a0f6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a0f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a0f70:
    // 0x1a0f70: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a0f70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a0f74:
    // 0x1a0f74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a0f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a0f78:
    // 0x1a0f78: 0x268408a0  addiu       $a0, $s4, 0x8A0
    ctx->pc = 0x1a0f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2208));
label_1a0f7c:
    // 0x1a0f7c: 0xc069afc  jal         func_1A6BF0
label_1a0f80:
    if (ctx->pc == 0x1A0F80u) {
        ctx->pc = 0x1A0F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F7Cu;
        // 0x1a0f80: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0F84u;
        goto label_1a0f84;
    }
    ctx->pc = 0x1A0F7Cu;
    SET_GPR_U32(ctx, 31, 0x1A0F84u);
    ctx->pc = 0x1A0F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0F7Cu;
    // 0x1a0f80: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BF0u, 0x1A0F7Cu, 0x1A0F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0F84u;
label_1a0f84:
    // 0x1a0f84: 0xc063dd4  jal         func_18F750
label_1a0f88:
    if (ctx->pc == 0x1A0F88u) {
        ctx->pc = 0x1A0F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F84u;
        // 0x1a0f88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0F8Cu;
        goto label_1a0f8c;
    }
    ctx->pc = 0x1A0F84u;
    SET_GPR_U32(ctx, 31, 0x1A0F8Cu);
    ctx->pc = 0x1A0F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0F84u;
    // 0x1a0f88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1A0F84u, 0x1A0F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0F8Cu;
label_1a0f8c:
    // 0x1a0f8c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a0f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1a0f90:
    // 0x1a0f90: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x1a0f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_1a0f94:
    // 0x1a0f94: 0x1044031b  beq         $v0, $a0, . + 4 + (0x31B << 2)
label_1a0f98:
    if (ctx->pc == 0x1A0F98u) {
        ctx->pc = 0x1A0F9Cu;
        goto label_1a0f9c;
    }
    ctx->pc = 0x1A0F94u;
    {
        const bool branch_taken_0x1a0f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a0f94) {
            ctx->pc = 0x1A1C04u;
            goto label_1a1c04;
        }
    }
    ctx->pc = 0x1A0F9Cu;
label_1a0f9c:
    // 0x1a0f9c: 0x10430319  beq         $v0, $v1, . + 4 + (0x319 << 2)
label_1a0fa0:
    if (ctx->pc == 0x1A0FA0u) {
        ctx->pc = 0x1A0FA4u;
        goto label_1a0fa4;
    }
    ctx->pc = 0x1A0F9Cu;
    {
        const bool branch_taken_0x1a0f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a0f9c) {
            ctx->pc = 0x1A1C04u;
            goto label_1a1c04;
        }
    }
    ctx->pc = 0x1A0FA4u;
label_1a0fa4:
    // 0x1a0fa4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1a0fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1a0fa8:
    // 0x1a0fa8: 0x104302f6  beq         $v0, $v1, . + 4 + (0x2F6 << 2)
label_1a0fac:
    if (ctx->pc == 0x1A0FACu) {
        ctx->pc = 0x1A0FB0u;
        goto label_1a0fb0;
    }
    ctx->pc = 0x1A0FA8u;
    {
        const bool branch_taken_0x1a0fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a0fa8) {
            ctx->pc = 0x1A1B84u;
            goto label_1a1b84;
        }
    }
    ctx->pc = 0x1A0FB0u;
label_1a0fb0:
    // 0x1a0fb0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1a0fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1a0fb4:
    // 0x1a0fb4: 0x104302eb  beq         $v0, $v1, . + 4 + (0x2EB << 2)
label_1a0fb8:
    if (ctx->pc == 0x1A0FB8u) {
        ctx->pc = 0x1A0FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0FB4u;
        // 0x1a0fb8: 0x268408c0  addiu       $a0, $s4, 0x8C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0FBCu;
        goto label_1a0fbc;
    }
    ctx->pc = 0x1A0FB4u;
    {
        const bool branch_taken_0x1a0fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A0FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0FB4u;
        // 0x1a0fb8: 0x268408c0  addiu       $a0, $s4, 0x8C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0fb4) {
            ctx->pc = 0x1A1B64u;
            goto label_1a1b64;
        }
    }
    ctx->pc = 0x1A0FBCu;
label_1a0fbc:
    // 0x1a0fbc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1a0fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a0fc0:
    // 0x1a0fc0: 0x104302bc  beq         $v0, $v1, . + 4 + (0x2BC << 2)
label_1a0fc4:
    if (ctx->pc == 0x1A0FC4u) {
        ctx->pc = 0x1A0FC8u;
        goto label_1a0fc8;
    }
    ctx->pc = 0x1A0FC0u;
    {
        const bool branch_taken_0x1a0fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a0fc0) {
            ctx->pc = 0x1A1AB4u;
            goto label_1a1ab4;
        }
    }
    ctx->pc = 0x1A0FC8u;
label_1a0fc8:
    // 0x1a0fc8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1a0fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1a0fcc:
    // 0x1a0fcc: 0x10430290  beq         $v0, $v1, . + 4 + (0x290 << 2)
label_1a0fd0:
    if (ctx->pc == 0x1A0FD0u) {
        ctx->pc = 0x1A0FD4u;
        goto label_1a0fd4;
    }
    ctx->pc = 0x1A0FCCu;
    {
        const bool branch_taken_0x1a0fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a0fcc) {
            ctx->pc = 0x1A1A10u;
            goto label_1a1a10;
        }
    }
    ctx->pc = 0x1A0FD4u;
label_1a0fd4:
    // 0x1a0fd4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1a0fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1a0fd8:
    // 0x1a0fd8: 0x10430274  beq         $v0, $v1, . + 4 + (0x274 << 2)
label_1a0fdc:
    if (ctx->pc == 0x1A0FDCu) {
        ctx->pc = 0x1A0FE0u;
        goto label_1a0fe0;
    }
    ctx->pc = 0x1A0FD8u;
    {
        const bool branch_taken_0x1a0fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a0fd8) {
            ctx->pc = 0x1A19ACu;
            goto label_1a19ac;
        }
    }
    ctx->pc = 0x1A0FE0u;
label_1a0fe0:
    // 0x1a0fe0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1a0fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a0fe4:
    // 0x1a0fe4: 0x10430206  beq         $v0, $v1, . + 4 + (0x206 << 2)
label_1a0fe8:
    if (ctx->pc == 0x1A0FE8u) {
        ctx->pc = 0x1A0FECu;
        goto label_1a0fec;
    }
    ctx->pc = 0x1A0FE4u;
    {
        const bool branch_taken_0x1a0fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a0fe4) {
            ctx->pc = 0x1A1800u;
            goto label_1a1800;
        }
    }
    ctx->pc = 0x1A0FECu;
label_1a0fec:
    // 0x1a0fec: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1a0fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a0ff0:
    // 0x1a0ff0: 0x104301e1  beq         $v0, $v1, . + 4 + (0x1E1 << 2)
label_1a0ff4:
    if (ctx->pc == 0x1A0FF4u) {
        ctx->pc = 0x1A0FF8u;
        goto label_1a0ff8;
    }
    ctx->pc = 0x1A0FF0u;
    {
        const bool branch_taken_0x1a0ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a0ff0) {
            ctx->pc = 0x1A1778u;
            goto label_1a1778;
        }
    }
    ctx->pc = 0x1A0FF8u;
label_1a0ff8:
    // 0x1a0ff8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1a0ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a0ffc:
    // 0x1a0ffc: 0x1047019a  beq         $v0, $a3, . + 4 + (0x19A << 2)
label_1a1000:
    if (ctx->pc == 0x1A1000u) {
        ctx->pc = 0x1A1004u;
        goto label_1a1004;
    }
    ctx->pc = 0x1A0FFCu;
    {
        const bool branch_taken_0x1a0ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x1a0ffc) {
            ctx->pc = 0x1A1668u;
            goto label_1a1668;
        }
    }
    ctx->pc = 0x1A1004u;
label_1a1004:
    // 0x1a1004: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a1004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a1008:
    // 0x1a1008: 0x1043014d  beq         $v0, $v1, . + 4 + (0x14D << 2)
label_1a100c:
    if (ctx->pc == 0x1A100Cu) {
        ctx->pc = 0x1A1010u;
        goto label_1a1010;
    }
    ctx->pc = 0x1A1008u;
    {
        const bool branch_taken_0x1a1008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a1008) {
            ctx->pc = 0x1A1540u;
            goto label_1a1540;
        }
    }
    ctx->pc = 0x1A1010u;
label_1a1010:
    // 0x1a1010: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a1010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a1014:
    // 0x1a1014: 0x104300e3  beq         $v0, $v1, . + 4 + (0xE3 << 2)
label_1a1018:
    if (ctx->pc == 0x1A1018u) {
        ctx->pc = 0x1A1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1014u;
        // 0x1a1018: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A101Cu;
        goto label_1a101c;
    }
    ctx->pc = 0x1A1014u;
    {
        const bool branch_taken_0x1a1014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1014u;
        // 0x1a1018: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1014) {
            ctx->pc = 0x1A13A4u;
            goto label_1a13a4;
        }
    }
    ctx->pc = 0x1A101Cu;
label_1a101c:
    // 0x1a101c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a101cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a1020:
    // 0x1a1020: 0x104300d7  beq         $v0, $v1, . + 4 + (0xD7 << 2)
label_1a1024:
    if (ctx->pc == 0x1A1024u) {
        ctx->pc = 0x1A1028u;
        goto label_1a1028;
    }
    ctx->pc = 0x1A1020u;
    {
        const bool branch_taken_0x1a1020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a1020) {
            ctx->pc = 0x1A1380u;
            goto label_1a1380;
        }
    }
    ctx->pc = 0x1A1028u;
label_1a1028:
    // 0x1a1028: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a102c:
    // 0x1a102c: 0x104300ad  beq         $v0, $v1, . + 4 + (0xAD << 2)
label_1a1030:
    if (ctx->pc == 0x1A1030u) {
        ctx->pc = 0x1A1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A102Cu;
        // 0x1a1030: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1034u;
        goto label_1a1034;
    }
    ctx->pc = 0x1A102Cu;
    {
        const bool branch_taken_0x1a102c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A102Cu;
        // 0x1a1030: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a102c) {
            ctx->pc = 0x1A12E4u;
            goto label_1a12e4;
        }
    }
    ctx->pc = 0x1A1034u;
label_1a1034:
    // 0x1a1034: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a1038:
    if (ctx->pc == 0x1A1038u) {
        ctx->pc = 0x1A103Cu;
        goto label_1a103c;
    }
    ctx->pc = 0x1A1034u;
    {
        const bool branch_taken_0x1a1034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1034) {
            ctx->pc = 0x1A1044u;
            goto label_1a1044;
        }
    }
    ctx->pc = 0x1A103Cu;
label_1a103c:
    // 0x1a103c: 0x100002f2  b           . + 4 + (0x2F2 << 2)
label_1a1040:
    if (ctx->pc == 0x1A1040u) {
        ctx->pc = 0x1A1040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A103Cu;
        // 0x1a1040: 0x9283068c  lbu         $v1, 0x68C($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1044u;
        goto label_1a1044;
    }
    ctx->pc = 0x1A103Cu;
    {
        const bool branch_taken_0x1a103c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A103Cu;
        // 0x1a1040: 0x9283068c  lbu         $v1, 0x68C($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a103c) {
            ctx->pc = 0x1A1C08u;
            goto label_1a1c08;
        }
    }
    ctx->pc = 0x1A1044u;
label_1a1044:
    // 0x1a1044: 0xc067f08  jal         func_19FC20
label_1a1048:
    if (ctx->pc == 0x1A1048u) {
        ctx->pc = 0x1A104Cu;
        goto label_1a104c;
    }
    ctx->pc = 0x1A1044u;
    SET_GPR_U32(ctx, 31, 0x1A104Cu);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x1A1044u, 0x1A104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A104Cu;
label_1a104c:
    // 0x1a104c: 0xae820670  sw          $v0, 0x670($s4)
    ctx->pc = 0x1a104cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1648), GPR_U32(ctx, 2));
label_1a1050:
    // 0x1a1050: 0x8e840670  lw          $a0, 0x670($s4)
    ctx->pc = 0x1a1050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_1a1054:
    // 0x1a1054: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1a1058:
    if (ctx->pc == 0x1A1058u) {
        ctx->pc = 0x1A105Cu;
        goto label_1a105c;
    }
    ctx->pc = 0x1A1054u;
    {
        const bool branch_taken_0x1a1054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1054) {
            ctx->pc = 0x1A1078u;
            goto label_1a1078;
        }
    }
    ctx->pc = 0x1A105Cu;
label_1a105c:
    // 0x1a105c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a105cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a1060:
    // 0x1a1060: 0xc067f68  jal         func_19FDA0
label_1a1064:
    if (ctx->pc == 0x1A1064u) {
        ctx->pc = 0x1A1064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1060u;
        // 0x1a1064: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1068u;
        goto label_1a1068;
    }
    ctx->pc = 0x1A1060u;
    SET_GPR_U32(ctx, 31, 0x1A1068u);
    ctx->pc = 0x1A1064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1060u;
    // 0x1a1064: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1A1060u, 0x1A1068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1068u;
label_1a1068:
    // 0x1a1068: 0x8e840670  lw          $a0, 0x670($s4)
    ctx->pc = 0x1a1068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_1a106c:
    // 0x1a106c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a106cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1070:
    // 0x1a1070: 0xc067f68  jal         func_19FDA0
label_1a1074:
    if (ctx->pc == 0x1A1074u) {
        ctx->pc = 0x1A1074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1070u;
        // 0x1a1074: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1078u;
        goto label_1a1078;
    }
    ctx->pc = 0x1A1070u;
    SET_GPR_U32(ctx, 31, 0x1A1078u);
    ctx->pc = 0x1A1074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1070u;
    // 0x1a1074: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1A1070u, 0x1A1078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1078u;
label_1a1078:
    // 0x1a1078: 0x8f9085f4  lw          $s0, -0x7A0C($gp)
    ctx->pc = 0x1a1078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a107c:
    // 0x1a107c: 0x8e033ddc  lw          $v1, 0x3DDC($s0)
    ctx->pc = 0x1a107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15836)));
label_1a1080:
    // 0x1a1080: 0x8e023dd8  lw          $v0, 0x3DD8($s0)
    ctx->pc = 0x1a1080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15832)));
label_1a1084:
    // 0x1a1084: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_1a1088:
    if (ctx->pc == 0x1A1088u) {
        ctx->pc = 0x1A108Cu;
        goto label_1a108c;
    }
    ctx->pc = 0x1A1084u;
    {
        const bool branch_taken_0x1a1084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a1084) {
            ctx->pc = 0x1A10C0u;
            goto label_1a10c0;
        }
    }
    ctx->pc = 0x1A108Cu;
label_1a108c:
    // 0x1a108c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a108cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a1090:
    // 0x1a1090: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a1090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1a1094:
    // 0x1a1094: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x1a1094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_1a1098:
    // 0x1a1098: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a1098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a109c:
    // 0x1a109c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1a109cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1a10a0:
    // 0x1a10a0: 0x320f809  jalr        $t9
label_1a10a4:
    if (ctx->pc == 0x1A10A4u) {
        ctx->pc = 0x1A10A8u;
        goto label_1a10a8;
    }
    ctx->pc = 0x1A10A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A10A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A10A0u, 0x1A10A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A10A8u;
label_1a10a8:
    // 0x1a10a8: 0x8e023ddc  lw          $v0, 0x3DDC($s0)
    ctx->pc = 0x1a10a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15836)));
label_1a10ac:
    // 0x1a10ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a10acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a10b0:
    // 0x1a10b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a10b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a10b4:
    // 0x1a10b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a10b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1a10b8:
    // 0x1a10b8: 0x8c423cd8  lw          $v0, 0x3CD8($v0)
    ctx->pc = 0x1a10b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_1a10bc:
    // 0x1a10bc: 0xa04301f9  sb          $v1, 0x1F9($v0)
    ctx->pc = 0x1a10bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 505), (uint8_t)GPR_U32(ctx, 3));
label_1a10c0:
    // 0x1a10c0: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1a10c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1a10c4:
    // 0x1a10c4: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1a10c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1a10c8:
    // 0x1a10c8: 0xc06bd9c  jal         func_1AF670
label_1a10cc:
    if (ctx->pc == 0x1A10CCu) {
        ctx->pc = 0x1A10CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10C8u;
        // 0x1a10cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A10D0u;
        goto label_1a10d0;
    }
    ctx->pc = 0x1A10C8u;
    SET_GPR_U32(ctx, 31, 0x1A10D0u);
    ctx->pc = 0x1A10CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A10C8u;
    // 0x1a10cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF670u, 0x1A10C8u, 0x1A10D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A10D0u;
label_1a10d0:
    // 0x1a10d0: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1a10d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1a10d4:
    // 0x1a10d4: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1a10d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1a10d8:
    // 0x1a10d8: 0x8c4202f4  lw          $v0, 0x2F4($v0)
    ctx->pc = 0x1a10d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 756)));
label_1a10dc:
    // 0x1a10dc: 0xae8209d0  sw          $v0, 0x9D0($s4)
    ctx->pc = 0x1a10dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2512), GPR_U32(ctx, 2));
label_1a10e0:
    // 0x1a10e0: 0x8e8409d0  lw          $a0, 0x9D0($s4)
    ctx->pc = 0x1a10e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2512)));
label_1a10e4:
    // 0x1a10e4: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1a10e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a10e8:
    // 0x1a10e8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a10e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a10ec:
    // 0x1a10ec: 0x320f809  jalr        $t9
label_1a10f0:
    if (ctx->pc == 0x1A10F0u) {
        ctx->pc = 0x1A10F4u;
        goto label_1a10f4;
    }
    ctx->pc = 0x1A10ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A10F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A10ECu, 0x1A10F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A10F4u;
label_1a10f4:
    // 0x1a10f4: 0x8e8209d0  lw          $v0, 0x9D0($s4)
    ctx->pc = 0x1a10f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2512)));
label_1a10f8:
    // 0x1a10f8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1a10f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1a10fc:
    // 0x1a10fc: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1a10fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1a1100:
    // 0x1a1100: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1a1100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1a1104:
    // 0x1a1104: 0x8c4202f8  lw          $v0, 0x2F8($v0)
    ctx->pc = 0x1a1104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 760)));
label_1a1108:
    // 0x1a1108: 0xae8209d4  sw          $v0, 0x9D4($s4)
    ctx->pc = 0x1a1108u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2516), GPR_U32(ctx, 2));
label_1a110c:
    // 0x1a110c: 0x8e8409d4  lw          $a0, 0x9D4($s4)
    ctx->pc = 0x1a110cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2516)));
label_1a1110:
    // 0x1a1110: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1a1110u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a1114:
    // 0x1a1114: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a1114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a1118:
    // 0x1a1118: 0x320f809  jalr        $t9
label_1a111c:
    if (ctx->pc == 0x1A111Cu) {
        ctx->pc = 0x1A1120u;
        goto label_1a1120;
    }
    ctx->pc = 0x1A1118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1120u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1118u, 0x1A1120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1120u;
label_1a1120:
    // 0x1a1120: 0x8e8209d4  lw          $v0, 0x9D4($s4)
    ctx->pc = 0x1a1120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2516)));
label_1a1124:
    // 0x1a1124: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1a1124u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1a1128:
    // 0x1a1128: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1a1128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1a112c:
    // 0x1a112c: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1a112cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1a1130:
    // 0x1a1130: 0x8c42030c  lw          $v0, 0x30C($v0)
    ctx->pc = 0x1a1130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 780)));
label_1a1134:
    // 0x1a1134: 0xae8209d8  sw          $v0, 0x9D8($s4)
    ctx->pc = 0x1a1134u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2520), GPR_U32(ctx, 2));
label_1a1138:
    // 0x1a1138: 0x8e8409d8  lw          $a0, 0x9D8($s4)
    ctx->pc = 0x1a1138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2520)));
label_1a113c:
    // 0x1a113c: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1a113cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a1140:
    // 0x1a1140: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a1140u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a1144:
    // 0x1a1144: 0x320f809  jalr        $t9
label_1a1148:
    if (ctx->pc == 0x1A1148u) {
        ctx->pc = 0x1A114Cu;
        goto label_1a114c;
    }
    ctx->pc = 0x1A1144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A114Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1144u, 0x1A114Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A114Cu;
label_1a114c:
    // 0x1a114c: 0x8e8209d8  lw          $v0, 0x9D8($s4)
    ctx->pc = 0x1a114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2520)));
label_1a1150:
    // 0x1a1150: 0x268408c0  addiu       $a0, $s4, 0x8C0
    ctx->pc = 0x1a1150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2240));
label_1a1154:
    // 0x1a1154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1158:
    // 0x1a1158: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a1158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a115c:
    // 0x1a115c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a115cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1160:
    // 0x1a1160: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1a1160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a1164:
    // 0x1a1164: 0xc0696fc  jal         func_1A5BF0
label_1a1168:
    if (ctx->pc == 0x1A1168u) {
        ctx->pc = 0x1A1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1164u;
        // 0x1a1168: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A116Cu;
        goto label_1a116c;
    }
    ctx->pc = 0x1A1164u;
    SET_GPR_U32(ctx, 31, 0x1A116Cu);
    ctx->pc = 0x1A1168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1164u;
    // 0x1a1168: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5BF0u, 0x1A1164u, 0x1A116Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A116Cu;
label_1a116c:
    // 0x1a116c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1a116cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_1a1170:
    // 0x1a1170: 0xc046458  jal         func_119160
label_1a1174:
    if (ctx->pc == 0x1A1174u) {
        ctx->pc = 0x1A1174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1170u;
        // 0x1a1174: 0x248403f0  addiu       $a0, $a0, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1178u;
        goto label_1a1178;
    }
    ctx->pc = 0x1A1170u;
    SET_GPR_U32(ctx, 31, 0x1A1178u);
    ctx->pc = 0x1A1174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1170u;
    // 0x1a1174: 0x248403f0  addiu       $a0, $a0, 0x3F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x1A1170u, 0x1A1178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1178u;
label_1a1178:
    // 0x1a1178: 0xae8206a4  sw          $v0, 0x6A4($s4)
    ctx->pc = 0x1a1178u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1700), GPR_U32(ctx, 2));
label_1a117c:
    // 0x1a117c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a117cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1180:
    // 0x1a1180: 0xa280068c  sb          $zero, 0x68C($s4)
    ctx->pc = 0x1a1180u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1676), (uint8_t)GPR_U32(ctx, 0));
label_1a1184:
    // 0x1a1184: 0xae800678  sw          $zero, 0x678($s4)
    ctx->pc = 0x1a1184u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1656), GPR_U32(ctx, 0));
label_1a1188:
    // 0x1a1188: 0xfe8006b8  sd          $zero, 0x6B8($s4)
    ctx->pc = 0x1a1188u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 1720), GPR_U64(ctx, 0));
label_1a118c:
    // 0x1a118c: 0xae8006a8  sw          $zero, 0x6A8($s4)
    ctx->pc = 0x1a118cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1704), GPR_U32(ctx, 0));
label_1a1190:
    // 0x1a1190: 0xae8006ac  sw          $zero, 0x6AC($s4)
    ctx->pc = 0x1a1190u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1708), GPR_U32(ctx, 0));
label_1a1194:
    // 0x1a1194: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x1a1194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_1a1198:
    // 0x1a1198: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x1a1198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1a119c:
    // 0x1a119c: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x1a119cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_1a11a0:
    // 0x1a11a0: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_1a11a4:
    if (ctx->pc == 0x1A11A4u) {
        ctx->pc = 0x1A11A8u;
        goto label_1a11a8;
    }
    ctx->pc = 0x1A11A0u;
    {
        const bool branch_taken_0x1a11a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a11a0) {
            ctx->pc = 0x1A1238u;
            goto label_1a1238;
        }
    }
    ctx->pc = 0x1A11A8u;
label_1a11a8:
    // 0x1a11a8: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x1a11a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_1a11ac:
    // 0x1a11ac: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_1a11b0:
    if (ctx->pc == 0x1A11B0u) {
        ctx->pc = 0x1A11B4u;
        goto label_1a11b4;
    }
    ctx->pc = 0x1A11ACu;
    {
        const bool branch_taken_0x1a11ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a11ac) {
            ctx->pc = 0x1A1230u;
            goto label_1a1230;
        }
    }
    ctx->pc = 0x1A11B4u;
label_1a11b4:
    // 0x1a11b4: 0x24020056  addiu       $v0, $zero, 0x56
    ctx->pc = 0x1a11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_1a11b8:
    // 0x1a11b8: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_1a11bc:
    if (ctx->pc == 0x1A11BCu) {
        ctx->pc = 0x1A11C0u;
        goto label_1a11c0;
    }
    ctx->pc = 0x1A11B8u;
    {
        const bool branch_taken_0x1a11b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a11b8) {
            ctx->pc = 0x1A1214u;
            goto label_1a1214;
        }
    }
    ctx->pc = 0x1A11C0u;
label_1a11c0:
    // 0x1a11c0: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x1a11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1a11c4:
    // 0x1a11c4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1a11c8:
    if (ctx->pc == 0x1A11C8u) {
        ctx->pc = 0x1A11CCu;
        goto label_1a11cc;
    }
    ctx->pc = 0x1A11C4u;
    {
        const bool branch_taken_0x1a11c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a11c4) {
            ctx->pc = 0x1A11D4u;
            goto label_1a11d4;
        }
    }
    ctx->pc = 0x1A11CCu;
label_1a11cc:
    // 0x1a11cc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1a11d0:
    if (ctx->pc == 0x1A11D0u) {
        ctx->pc = 0x1A11D4u;
        goto label_1a11d4;
    }
    ctx->pc = 0x1A11CCu;
    {
        const bool branch_taken_0x1a11cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a11cc) {
            ctx->pc = 0x1A1238u;
            goto label_1a1238;
        }
    }
    ctx->pc = 0x1A11D4u;
label_1a11d4:
    // 0x1a11d4: 0x0  nop
    ctx->pc = 0x1a11d4u;
    // NOP
label_1a11d8:
    // 0x1a11d8: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1a11d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1a11dc:
    // 0x1a11dc: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1a11dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a11e0:
    // 0x1a11e0: 0xc057040  jal         func_15C100
label_1a11e4:
    if (ctx->pc == 0x1A11E4u) {
        ctx->pc = 0x1A11E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A11E0u;
        // 0x1a11e4: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A11E8u;
        goto label_1a11e8;
    }
    ctx->pc = 0x1A11E0u;
    SET_GPR_U32(ctx, 31, 0x1A11E8u);
    ctx->pc = 0x1A11E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A11E0u;
    // 0x1a11e4: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A11E0u, 0x1A11E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A11E8u;
label_1a11e8:
    // 0x1a11e8: 0x2912021  addu        $a0, $s4, $s1
    ctx->pc = 0x1a11e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1a11ec:
    // 0x1a11ec: 0xac8209dc  sw          $v0, 0x9DC($a0)
    ctx->pc = 0x1a11ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2524), GPR_U32(ctx, 2));
label_1a11f0:
    // 0x1a11f0: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1a11f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1a11f4:
    // 0x1a11f4: 0x8c8309dc  lw          $v1, 0x9DC($a0)
    ctx->pc = 0x1a11f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2524)));
label_1a11f8:
    // 0x1a11f8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a11f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a11fc:
    // 0x1a11fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a11fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a1200:
    // 0x1a1200: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a1204:
    // 0x1a1204: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1a1204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a1208:
    // 0x1a1208: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a1208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a120c:
    // 0x1a120c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a1210:
    if (ctx->pc == 0x1A1210u) {
        ctx->pc = 0x1A1210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A120Cu;
        // 0x1a1210: 0xac8209e0  sw          $v0, 0x9E0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1214u;
        goto label_1a1214;
    }
    ctx->pc = 0x1A120Cu;
    {
        const bool branch_taken_0x1a120c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A120Cu;
        // 0x1a1210: 0xac8209e0  sw          $v0, 0x9E0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a120c) {
            ctx->pc = 0x1A1238u;
            goto label_1a1238;
        }
    }
    ctx->pc = 0x1A1214u;
label_1a1214:
    // 0x1a1214: 0x0  nop
    ctx->pc = 0x1a1214u;
    // NOP
label_1a1218:
    // 0x1a1218: 0x8e8206a8  lw          $v0, 0x6A8($s4)
    ctx->pc = 0x1a1218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1704)));
label_1a121c:
    // 0x1a121c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1a1220:
    if (ctx->pc == 0x1A1220u) {
        ctx->pc = 0x1A1224u;
        goto label_1a1224;
    }
    ctx->pc = 0x1A121Cu;
    {
        const bool branch_taken_0x1a121c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a121c) {
            ctx->pc = 0x1A1238u;
            goto label_1a1238;
        }
    }
    ctx->pc = 0x1A1224u;
label_1a1224:
    // 0x1a1224: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x1a1224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_1a1228:
    // 0x1a1228: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a122c:
    if (ctx->pc == 0x1A122Cu) {
        ctx->pc = 0x1A122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1228u;
        // 0x1a122c: 0xae8206a8  sw          $v0, 0x6A8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1230u;
        goto label_1a1230;
    }
    ctx->pc = 0x1A1228u;
    {
        const bool branch_taken_0x1a1228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1228u;
        // 0x1a122c: 0xae8206a8  sw          $v0, 0x6A8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1228) {
            ctx->pc = 0x1A1238u;
            goto label_1a1238;
        }
    }
    ctx->pc = 0x1A1230u;
label_1a1230:
    // 0x1a1230: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a1230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a1234:
    // 0x1a1234: 0xae8206ac  sw          $v0, 0x6AC($s4)
    ctx->pc = 0x1a1234u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1708), GPR_U32(ctx, 2));
label_1a1238:
    // 0x1a1238: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1a1238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1a123c:
    // 0x1a123c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a123cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1240:
    // 0x1a1240: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a1240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a1244:
    // 0x1a1244: 0x1062ffd5  beq         $v1, $v0, . + 4 + (-0x2B << 2)
label_1a1248:
    if (ctx->pc == 0x1A1248u) {
        ctx->pc = 0x1A124Cu;
        goto label_1a124c;
    }
    ctx->pc = 0x1A1244u;
    {
        const bool branch_taken_0x1a1244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a1244) {
            ctx->pc = 0x1A119Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a119c;
        }
    }
    ctx->pc = 0x1A124Cu;
label_1a124c:
    // 0x1a124c: 0xc058018  jal         func_160060
label_1a1250:
    if (ctx->pc == 0x1A1250u) {
        ctx->pc = 0x1A1250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A124Cu;
        // 0x1a1250: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1254u;
        goto label_1a1254;
    }
    ctx->pc = 0x1A124Cu;
    SET_GPR_U32(ctx, 31, 0x1A1254u);
    ctx->pc = 0x1A1250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A124Cu;
    // 0x1a1250: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x1A124Cu, 0x1A1254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1254u;
label_1a1254:
    // 0x1a1254: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a1254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1258:
    // 0x1a1258: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a1258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a125c:
    // 0x1a125c: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x1a125cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1a1260:
    // 0x1a1260: 0xa04009fc  sb          $zero, 0x9FC($v0)
    ctx->pc = 0x1a1260u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2556), (uint8_t)GPR_U32(ctx, 0));
label_1a1264:
    // 0x1a1264: 0x245509fc  addiu       $s5, $v0, 0x9FC
    ctx->pc = 0x1a1264u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 2556));
label_1a1268:
    // 0x1a1268: 0x8c4409e0  lw          $a0, 0x9E0($v0)
    ctx->pc = 0x1a1268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2528)));
label_1a126c:
    // 0x1a126c: 0x904509fc  lbu         $a1, 0x9FC($v0)
    ctx->pc = 0x1a126cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2556)));
label_1a1270:
    // 0x1a1270: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1274:
    // 0x1a1274: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a1274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a1278:
    // 0x1a1278: 0x320f809  jalr        $t9
label_1a127c:
    if (ctx->pc == 0x1A127Cu) {
        ctx->pc = 0x1A127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1278u;
        // 0x1a127c: 0x245209e0  addiu       $s2, $v0, 0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1280u;
        goto label_1a1280;
    }
    ctx->pc = 0x1A1278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1280u);
        ctx->pc = 0x1A127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1278u;
        // 0x1a127c: 0x245209e0  addiu       $s2, $v0, 0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1278u, 0x1A1280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1280u;
label_1a1280:
    // 0x1a1280: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x1a1280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_1a1284:
    // 0x1a1284: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a1288:
    if (ctx->pc == 0x1A1288u) {
        ctx->pc = 0x1A128Cu;
        goto label_1a128c;
    }
    ctx->pc = 0x1A1284u;
    {
        const bool branch_taken_0x1a1284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1284) {
            ctx->pc = 0x1A12A4u;
            goto label_1a12a4;
        }
    }
    ctx->pc = 0x1A128Cu;
label_1a128c:
    // 0x1a128c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1a128cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a1290:
    // 0x1a1290: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a1290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a1294:
    // 0x1a1294: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1298:
    // 0x1a1298: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a1298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a129c:
    // 0x1a129c: 0x320f809  jalr        $t9
label_1a12a0:
    if (ctx->pc == 0x1A12A0u) {
        ctx->pc = 0x1A12A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A129Cu;
        // 0x1a12a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A12A4u;
        goto label_1a12a4;
    }
    ctx->pc = 0x1A129Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A12A4u);
        ctx->pc = 0x1A12A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A129Cu;
        // 0x1a12a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A129Cu, 0x1A12A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A12A4u;
label_1a12a4:
    // 0x1a12a4: 0x0  nop
    ctx->pc = 0x1a12a4u;
    // NOP
label_1a12a8:
    // 0x1a12a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a12a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a12ac:
    // 0x1a12ac: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x1a12acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
label_1a12b0:
    // 0x1a12b0: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_1a12b4:
    if (ctx->pc == 0x1A12B4u) {
        ctx->pc = 0x1A12B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12B0u;
        // 0x1a12b4: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A12B8u;
        goto label_1a12b8;
    }
    ctx->pc = 0x1A12B0u;
    {
        const bool branch_taken_0x1a12b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A12B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12B0u;
        // 0x1a12b4: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a12b0) {
            ctx->pc = 0x1A125Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a125c;
        }
    }
    ctx->pc = 0x1A12B8u;
label_1a12b8:
    // 0x1a12b8: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a12b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a12bc:
    // 0x1a12bc: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x1a12bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_1a12c0:
    // 0x1a12c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a12c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a12c4:
    // 0x1a12c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a12c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a12c8:
    // 0x1a12c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a12c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a12cc:
    // 0x1a12cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a12ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a12d0:
    // 0x1a12d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a12d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a12d4:
    // 0x1a12d4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a12d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1a12d8:
    // 0x1a12d8: 0xc063e14  jal         func_18F850
label_1a12dc:
    if (ctx->pc == 0x1A12DCu) {
        ctx->pc = 0x1A12DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12D8u;
        // 0x1a12dc: 0xae82067c  sw          $v0, 0x67C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1660), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A12E0u;
        goto label_1a12e0;
    }
    ctx->pc = 0x1A12D8u;
    SET_GPR_U32(ctx, 31, 0x1A12E0u);
    ctx->pc = 0x1A12DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A12D8u;
    // 0x1a12dc: 0xae82067c  sw          $v0, 0x67C($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1660), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A12D8u, 0x1A12E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A12E0u;
label_1a12e0:
    // 0x1a12e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a12e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a12e4:
    // 0x1a12e4: 0xc064ffc  jal         func_193FF0
label_1a12e8:
    if (ctx->pc == 0x1A12E8u) {
        ctx->pc = 0x1A12ECu;
        goto label_1a12ec;
    }
    ctx->pc = 0x1A12E4u;
    SET_GPR_U32(ctx, 31, 0x1A12ECu);
    ctx->pc = 0x193FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FF0u, 0x1A12E4u, 0x1A12ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A12ECu;
label_1a12ec:
    // 0x1a12ec: 0x10400245  beqz        $v0, . + 4 + (0x245 << 2)
label_1a12f0:
    if (ctx->pc == 0x1A12F0u) {
        ctx->pc = 0x1A12F4u;
        goto label_1a12f4;
    }
    ctx->pc = 0x1A12ECu;
    {
        const bool branch_taken_0x1a12ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a12ec) {
            ctx->pc = 0x1A1C04u;
            goto label_1a1c04;
        }
    }
    ctx->pc = 0x1A12F4u;
label_1a12f4:
    // 0x1a12f4: 0x8e8206a4  lw          $v0, 0x6A4($s4)
    ctx->pc = 0x1a12f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1700)));
label_1a12f8:
    // 0x1a12f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a12f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a12fc:
    // 0x1a12fc: 0xae820c78  sw          $v0, 0xC78($s4)
    ctx->pc = 0x1a12fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3192), GPR_U32(ctx, 2));
label_1a1300:
    // 0x1a1300: 0xae800c7c  sw          $zero, 0xC7C($s4)
    ctx->pc = 0x1a1300u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 0));
label_1a1304:
    // 0x1a1304: 0x8e830c78  lw          $v1, 0xC78($s4)
    ctx->pc = 0x1a1304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3192)));
label_1a1308:
    // 0x1a1308: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1a1308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1a130c:
    // 0x1a130c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a130cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a1310:
    // 0x1a1310: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a1314:
    // 0x1a1314: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a1314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a1318:
    // 0x1a1318: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1a1318u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a131c:
    // 0x1a131c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a131cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1320:
    // 0x1a1320: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a1320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a1324:
    // 0x1a1324: 0x320f809  jalr        $t9
label_1a1328:
    if (ctx->pc == 0x1A1328u) {
        ctx->pc = 0x1A1328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1324u;
        // 0x1a1328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A132Cu;
        goto label_1a132c;
    }
    ctx->pc = 0x1A1324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A132Cu);
        ctx->pc = 0x1A1328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1324u;
        // 0x1a1328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1324u, 0x1A132Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A132Cu;
label_1a132c:
    // 0x1a132c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a132cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1330:
    // 0x1a1330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1334:
    // 0x1a1334: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1338:
    // 0x1a1338: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a1338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a133c:
    // 0x1a133c: 0x320f809  jalr        $t9
label_1a1340:
    if (ctx->pc == 0x1A1340u) {
        ctx->pc = 0x1A1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A133Cu;
        // 0x1a1340: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1344u;
        goto label_1a1344;
    }
    ctx->pc = 0x1A133Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1344u);
        ctx->pc = 0x1A1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A133Cu;
        // 0x1a1340: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A133Cu, 0x1A1344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1344u;
label_1a1344:
    // 0x1a1344: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1348:
    // 0x1a1348: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x1a1348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
label_1a134c:
    // 0x1a134c: 0xae830c7c  sw          $v1, 0xC7C($s4)
    ctx->pc = 0x1a134cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 3));
label_1a1350:
    // 0x1a1350: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a1350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a1354:
    // 0x1a1354: 0xa283068c  sb          $v1, 0x68C($s4)
    ctx->pc = 0x1a1354u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1676), (uint8_t)GPR_U32(ctx, 3));
label_1a1358:
    // 0x1a1358: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a1358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a135c:
    // 0x1a135c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a135cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1360:
    // 0x1a1360: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a1360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a1364:
    // 0x1a1364: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a1364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a1368:
    // 0x1a1368: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a1368u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a136c:
    // 0x1a136c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a136cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1a1370:
    // 0x1a1370: 0xc063e14  jal         func_18F850
label_1a1374:
    if (ctx->pc == 0x1A1374u) {
        ctx->pc = 0x1A1374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1370u;
        // 0x1a1374: 0xae820680  sw          $v0, 0x680($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1378u;
        goto label_1a1378;
    }
    ctx->pc = 0x1A1370u;
    SET_GPR_U32(ctx, 31, 0x1A1378u);
    ctx->pc = 0x1A1374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1370u;
    // 0x1a1374: 0xae820680  sw          $v0, 0x680($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1664), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A1370u, 0x1A1378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1378u;
label_1a1378:
    // 0x1a1378: 0x10000222  b           . + 4 + (0x222 << 2)
label_1a137c:
    if (ctx->pc == 0x1A137Cu) {
        ctx->pc = 0x1A1380u;
        goto label_1a1380;
    }
    ctx->pc = 0x1A1378u;
    {
        const bool branch_taken_0x1a1378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1378) {
            ctx->pc = 0x1A1C04u;
            goto label_1a1c04;
        }
    }
    ctx->pc = 0x1A1380u;
label_1a1380:
    // 0x1a1380: 0x8e830c7c  lw          $v1, 0xC7C($s4)
    ctx->pc = 0x1a1380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3196)));
label_1a1384:
    // 0x1a1384: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1a1384u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1a1388:
    // 0x1a1388: 0x1460021e  bnez        $v1, . + 4 + (0x21E << 2)
label_1a138c:
    if (ctx->pc == 0x1A138Cu) {
        ctx->pc = 0x1A1390u;
        goto label_1a1390;
    }
    ctx->pc = 0x1A1388u;
    {
        const bool branch_taken_0x1a1388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1388) {
            ctx->pc = 0x1A1C04u;
            goto label_1a1c04;
        }
    }
    ctx->pc = 0x1A1390u;
label_1a1390:
    // 0x1a1390: 0xc063e14  jal         func_18F850
label_1a1394:
    if (ctx->pc == 0x1A1394u) {
        ctx->pc = 0x1A1394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1390u;
        // 0x1a1394: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1398u;
        goto label_1a1398;
    }
    ctx->pc = 0x1A1390u;
    SET_GPR_U32(ctx, 31, 0x1A1398u);
    ctx->pc = 0x1A1394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1390u;
    // 0x1a1394: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A1390u, 0x1A1398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1398u;
label_1a1398:
    // 0x1a1398: 0x1000021a  b           . + 4 + (0x21A << 2)
label_1a139c:
    if (ctx->pc == 0x1A139Cu) {
        ctx->pc = 0x1A13A0u;
        goto label_1a13a0;
    }
    ctx->pc = 0x1A1398u;
    {
        const bool branch_taken_0x1a1398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1398) {
            ctx->pc = 0x1A1C04u;
            goto label_1a1c04;
        }
    }
    ctx->pc = 0x1A13A0u;
label_1a13a0:
    // 0x1a13a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a13a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a13a4:
    // 0x1a13a4: 0xc063e14  jal         func_18F850
label_1a13a8:
    if (ctx->pc == 0x1A13A8u) {
        ctx->pc = 0x1A13ACu;
        goto label_1a13ac;
    }
    ctx->pc = 0x1A13A4u;
    SET_GPR_U32(ctx, 31, 0x1A13ACu);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A13A4u, 0x1A13ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A13ACu;
label_1a13ac:
    // 0x1a13ac: 0x8e820678  lw          $v0, 0x678($s4)
    ctx->pc = 0x1a13acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
label_1a13b0:
    // 0x1a13b0: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x1a13b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1a13b4:
    // 0x1a13b4: 0x10200051  beqz        $at, . + 4 + (0x51 << 2)
label_1a13b8:
    if (ctx->pc == 0x1A13B8u) {
        ctx->pc = 0x1A13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13B4u;
        // 0x1a13b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A13BCu;
        goto label_1a13bc;
    }
    ctx->pc = 0x1A13B4u;
    {
        const bool branch_taken_0x1a13b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13B4u;
        // 0x1a13b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a13b4) {
            ctx->pc = 0x1A14FCu;
            goto label_1a14fc;
        }
    }
    ctx->pc = 0x1A13BCu;
label_1a13bc:
    // 0x1a13bc: 0xae8008b0  sw          $zero, 0x8B0($s4)
    ctx->pc = 0x1a13bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2224), GPR_U32(ctx, 0));
label_1a13c0:
    // 0x1a13c0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a13c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1a13c4:
    // 0x1a13c4: 0xae8008a8  sw          $zero, 0x8A8($s4)
    ctx->pc = 0x1a13c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2216), GPR_U32(ctx, 0));
label_1a13c8:
    // 0x1a13c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a13c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a13cc:
    // 0x1a13cc: 0xae8008a4  sw          $zero, 0x8A4($s4)
    ctx->pc = 0x1a13ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2212), GPR_U32(ctx, 0));
label_1a13d0:
    // 0x1a13d0: 0x24a50400  addiu       $a1, $a1, 0x400
    ctx->pc = 0x1a13d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1024));
label_1a13d4:
    // 0x1a13d4: 0xae8208ac  sw          $v0, 0x8AC($s4)
    ctx->pc = 0x1a13d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2220), GPR_U32(ctx, 2));
label_1a13d8:
    // 0x1a13d8: 0xa28008b8  sb          $zero, 0x8B8($s4)
    ctx->pc = 0x1a13d8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2232), (uint8_t)GPR_U32(ctx, 0));
label_1a13dc:
    // 0x1a13dc: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1a13dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1a13e0:
    // 0x1a13e0: 0x8f8680e8  lw          $a2, -0x7F18($gp)
    ctx->pc = 0x1a13e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934760)));
label_1a13e4:
    // 0x1a13e4: 0xc06cf34  jal         func_1B3CD0
label_1a13e8:
    if (ctx->pc == 0x1A13E8u) {
        ctx->pc = 0x1A13E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13E4u;
        // 0x1a13e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A13ECu;
        goto label_1a13ec;
    }
    ctx->pc = 0x1A13E4u;
    SET_GPR_U32(ctx, 31, 0x1A13ECu);
    ctx->pc = 0x1A13E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A13E4u;
    // 0x1a13e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1A13E4u, 0x1A13ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A13ECu;
label_1a13ec:
    // 0x1a13ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a13ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a13f0:
    // 0x1a13f0: 0xc069ac8  jal         func_1A6B20
label_1a13f4:
    if (ctx->pc == 0x1A13F4u) {
        ctx->pc = 0x1A13F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13F0u;
        // 0x1a13f4: 0x268408a0  addiu       $a0, $s4, 0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A13F8u;
        goto label_1a13f8;
    }
    ctx->pc = 0x1A13F0u;
    SET_GPR_U32(ctx, 31, 0x1A13F8u);
    ctx->pc = 0x1A13F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A13F0u;
    // 0x1a13f4: 0x268408a0  addiu       $a0, $s4, 0x8A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1A13F0u, 0x1A13F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A13F8u;
label_1a13f8:
    // 0x1a13f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a13f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a13fc:
    // 0x1a13fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a13fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a1400:
    // 0x1a1400: 0xc069ac0  jal         func_1A6B00
label_1a1404:
    if (ctx->pc == 0x1A1404u) {
        ctx->pc = 0x1A1404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1400u;
        // 0x1a1404: 0x268408a0  addiu       $a0, $s4, 0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1408u;
        goto label_1a1408;
    }
    ctx->pc = 0x1A1400u;
    SET_GPR_U32(ctx, 31, 0x1A1408u);
    ctx->pc = 0x1A1404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1400u;
    // 0x1a1404: 0x268408a0  addiu       $a0, $s4, 0x8A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B00u, 0x1A1400u, 0x1A1408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1408u;
label_1a1408:
    // 0x1a1408: 0xc062114  jal         func_188450
label_1a140c:
    if (ctx->pc == 0x1A140Cu) {
        ctx->pc = 0x1A140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1408u;
        // 0x1a140c: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1410u;
        goto label_1a1410;
    }
    ctx->pc = 0x1A1408u;
    SET_GPR_U32(ctx, 31, 0x1A1410u);
    ctx->pc = 0x1A140Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1408u;
    // 0x1a140c: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A1408u, 0x1A1410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1410u;
label_1a1410:
    // 0x1a1410: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a1410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1414:
    // 0x1a1414: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1a1414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1a1418:
    // 0x1a1418: 0x8e820678  lw          $v0, 0x678($s4)
    ctx->pc = 0x1a1418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
label_1a141c:
    // 0x1a141c: 0xc0620fc  jal         func_1883F0
label_1a1420:
    if (ctx->pc == 0x1A1420u) {
        ctx->pc = 0x1A1420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A141Cu;
        // 0x1a1420: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1424u;
        goto label_1a1424;
    }
    ctx->pc = 0x1A141Cu;
    SET_GPR_U32(ctx, 31, 0x1A1424u);
    ctx->pc = 0x1A1420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A141Cu;
    // 0x1a1420: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1A141Cu, 0x1A1424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1424u;
label_1a1424:
    // 0x1a1424: 0x8e8408a0  lw          $a0, 0x8A0($s4)
    ctx->pc = 0x1a1424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2208)));
label_1a1428:
    // 0x1a1428: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1a142c:
    if (ctx->pc == 0x1A142Cu) {
        ctx->pc = 0x1A142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1428u;
        // 0x1a142c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1430u;
        goto label_1a1430;
    }
    ctx->pc = 0x1A1428u;
    {
        const bool branch_taken_0x1a1428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1428u;
        // 0x1a142c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1428) {
            ctx->pc = 0x1A1448u;
            goto label_1a1448;
        }
    }
    ctx->pc = 0x1A1430u;
label_1a1430:
    // 0x1a1430: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1434:
    // 0x1a1434: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1a1434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1a1438:
    // 0x1a1438: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1a1438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1a143c:
    // 0x1a143c: 0x320f809  jalr        $t9
label_1a1440:
    if (ctx->pc == 0x1A1440u) {
        ctx->pc = 0x1A1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A143Cu;
        // 0x1a1440: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1444u;
        goto label_1a1444;
    }
    ctx->pc = 0x1A143Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1444u);
        ctx->pc = 0x1A1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A143Cu;
        // 0x1a1440: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A143Cu, 0x1A1444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1444u;
label_1a1444:
    // 0x1a1444: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a1444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1448:
    // 0x1a1448: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a1448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a144c:
    // 0x1a144c: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x1a144cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1a1450:
    // 0x1a1450: 0xa04009fc  sb          $zero, 0x9FC($v0)
    ctx->pc = 0x1a1450u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2556), (uint8_t)GPR_U32(ctx, 0));
label_1a1454:
    // 0x1a1454: 0x245509fc  addiu       $s5, $v0, 0x9FC
    ctx->pc = 0x1a1454u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 2556));
label_1a1458:
    // 0x1a1458: 0x8c4409e0  lw          $a0, 0x9E0($v0)
    ctx->pc = 0x1a1458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2528)));
label_1a145c:
    // 0x1a145c: 0x904509fc  lbu         $a1, 0x9FC($v0)
    ctx->pc = 0x1a145cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2556)));
label_1a1460:
    // 0x1a1460: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1464:
    // 0x1a1464: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a1464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a1468:
    // 0x1a1468: 0x320f809  jalr        $t9
label_1a146c:
    if (ctx->pc == 0x1A146Cu) {
        ctx->pc = 0x1A146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1468u;
        // 0x1a146c: 0x245209e0  addiu       $s2, $v0, 0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1470u;
        goto label_1a1470;
    }
    ctx->pc = 0x1A1468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1470u);
        ctx->pc = 0x1A146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1468u;
        // 0x1a146c: 0x245209e0  addiu       $s2, $v0, 0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1468u, 0x1A1470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1470u;
label_1a1470:
    // 0x1a1470: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x1a1470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_1a1474:
    // 0x1a1474: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1a1478:
    if (ctx->pc == 0x1A1478u) {
        ctx->pc = 0x1A147Cu;
        goto label_1a147c;
    }
    ctx->pc = 0x1A1474u;
    {
        const bool branch_taken_0x1a1474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1474) {
            ctx->pc = 0x1A1494u;
            goto label_1a1494;
        }
    }
    ctx->pc = 0x1A147Cu;
label_1a147c:
    // 0x1a147c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1a147cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a1480:
    // 0x1a1480: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a1480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a1484:
    // 0x1a1484: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1488:
    // 0x1a1488: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a1488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a148c:
    // 0x1a148c: 0x320f809  jalr        $t9
label_1a1490:
    if (ctx->pc == 0x1A1490u) {
        ctx->pc = 0x1A1490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A148Cu;
        // 0x1a1490: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1494u;
        goto label_1a1494;
    }
    ctx->pc = 0x1A148Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1494u);
        ctx->pc = 0x1A1490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A148Cu;
        // 0x1a1490: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A148Cu, 0x1A1494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1494u;
label_1a1494:
    // 0x1a1494: 0x0  nop
    ctx->pc = 0x1a1494u;
    // NOP
label_1a1498:
    // 0x1a1498: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a1498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a149c:
    // 0x1a149c: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x1a149cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
label_1a14a0:
    // 0x1a14a0: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_1a14a4:
    if (ctx->pc == 0x1A14A4u) {
        ctx->pc = 0x1A14A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14A0u;
        // 0x1a14a4: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A14A8u;
        goto label_1a14a8;
    }
    ctx->pc = 0x1A14A0u;
    {
        const bool branch_taken_0x1a14a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A14A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14A0u;
        // 0x1a14a4: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a14a0) {
            ctx->pc = 0x1A144Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a144c;
        }
    }
    ctx->pc = 0x1A14A8u;
label_1a14a8:
    // 0x1a14a8: 0xae800694  sw          $zero, 0x694($s4)
    ctx->pc = 0x1a14a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1684), GPR_U32(ctx, 0));
label_1a14ac:
    // 0x1a14ac: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1a14acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a14b0:
    // 0x1a14b0: 0x8e840678  lw          $a0, 0x678($s4)
    ctx->pc = 0x1a14b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
label_1a14b4:
    // 0x1a14b4: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_1a14b8:
    if (ctx->pc == 0x1A14B8u) {
        ctx->pc = 0x1A14BCu;
        goto label_1a14bc;
    }
    ctx->pc = 0x1A14B4u;
    {
        const bool branch_taken_0x1a14b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a14b4) {
            ctx->pc = 0x1A14D0u;
            goto label_1a14d0;
        }
    }
    ctx->pc = 0x1A14BCu;
label_1a14bc:
    // 0x1a14bc: 0x8e8506ac  lw          $a1, 0x6AC($s4)
    ctx->pc = 0x1a14bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1708)));
label_1a14c0:
    // 0x1a14c0: 0xc064fb8  jal         func_193EE0
label_1a14c4:
    if (ctx->pc == 0x1A14C4u) {
        ctx->pc = 0x1A14C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14C0u;
        // 0x1a14c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A14C8u;
        goto label_1a14c8;
    }
    ctx->pc = 0x1A14C0u;
    SET_GPR_U32(ctx, 31, 0x1A14C8u);
    ctx->pc = 0x1A14C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A14C0u;
    // 0x1a14c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A14C0u, 0x1A14C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A14C8u;
label_1a14c8:
    // 0x1a14c8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1a14cc:
    if (ctx->pc == 0x1A14CCu) {
        ctx->pc = 0x1A14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14C8u;
        // 0x1a14cc: 0x928308b8  lbu         $v1, 0x8B8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A14D0u;
        goto label_1a14d0;
    }
    ctx->pc = 0x1A14C8u;
    {
        const bool branch_taken_0x1a14c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14C8u;
        // 0x1a14cc: 0x928308b8  lbu         $v1, 0x8B8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a14c8) {
            ctx->pc = 0x1A1544u;
            goto label_1a1544;
        }
    }
    ctx->pc = 0x1A14D0u;
label_1a14d0:
    // 0x1a14d0: 0x8e8306a8  lw          $v1, 0x6A8($s4)
    ctx->pc = 0x1a14d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1704)));
label_1a14d4:
    // 0x1a14d4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_1a14d8:
    if (ctx->pc == 0x1A14D8u) {
        ctx->pc = 0x1A14DCu;
        goto label_1a14dc;
    }
    ctx->pc = 0x1A14D4u;
    {
        const bool branch_taken_0x1a14d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a14d4) {
            ctx->pc = 0x1A1540u;
            goto label_1a1540;
        }
    }
    ctx->pc = 0x1A14DCu;
label_1a14dc:
    // 0x1a14dc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a14dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a14e0:
    // 0x1a14e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a14e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a14e4:
    // 0x1a14e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a14e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a14e8:
    // 0x1a14e8: 0xc064fb8  jal         func_193EE0
label_1a14ec:
    if (ctx->pc == 0x1A14ECu) {
        ctx->pc = 0x1A14ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14E8u;
        // 0x1a14ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A14F0u;
        goto label_1a14f0;
    }
    ctx->pc = 0x1A14E8u;
    SET_GPR_U32(ctx, 31, 0x1A14F0u);
    ctx->pc = 0x1A14ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A14E8u;
    // 0x1a14ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A14E8u, 0x1A14F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A14F0u;
label_1a14f0:
    // 0x1a14f0: 0x10000013  b           . + 4 + (0x13 << 2)
label_1a14f4:
    if (ctx->pc == 0x1A14F4u) {
        ctx->pc = 0x1A14F8u;
        goto label_1a14f8;
    }
    ctx->pc = 0x1A14F0u;
    {
        const bool branch_taken_0x1a14f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a14f0) {
            ctx->pc = 0x1A1540u;
            goto label_1a1540;
        }
    }
    ctx->pc = 0x1A14F8u;
label_1a14f8:
    // 0x1a14f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a14f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a14fc:
    // 0x1a14fc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1a14fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a1500:
    // 0x1a1500: 0xc063e08  jal         func_18F820
label_1a1504:
    if (ctx->pc == 0x1A1504u) {
        ctx->pc = 0x1A1504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1500u;
        // 0x1a1504: 0xa280068c  sb          $zero, 0x68C($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1676), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1508u;
        goto label_1a1508;
    }
    ctx->pc = 0x1A1500u;
    SET_GPR_U32(ctx, 31, 0x1A1508u);
    ctx->pc = 0x1A1504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1500u;
    // 0x1a1504: 0xa280068c  sb          $zero, 0x68C($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 1676), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A1500u, 0x1A1508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1508u;
label_1a1508:
    // 0x1a1508: 0x8e830c78  lw          $v1, 0xC78($s4)
    ctx->pc = 0x1a1508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3192)));
label_1a150c:
    // 0x1a150c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a150cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1510:
    // 0x1a1510: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1a1510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1a1514:
    // 0x1a1514: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a1514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a1518:
    // 0x1a1518: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a151c:
    // 0x1a151c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a151cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a1520:
    // 0x1a1520: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a1520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a1524:
    // 0x1a1524: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1524u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1528:
    // 0x1a1528: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a1528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a152c:
    // 0x1a152c: 0x320f809  jalr        $t9
label_1a1530:
    if (ctx->pc == 0x1A1530u) {
        ctx->pc = 0x1A1530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A152Cu;
        // 0x1a1530: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1534u;
        goto label_1a1534;
    }
    ctx->pc = 0x1A152Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1534u);
        ctx->pc = 0x1A1530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A152Cu;
        // 0x1a1530: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A152Cu, 0x1A1534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1534u;
label_1a1534:
    // 0x1a1534: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a1534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a1538:
    // 0x1a1538: 0x100001b2  b           . + 4 + (0x1B2 << 2)
label_1a153c:
    if (ctx->pc == 0x1A153Cu) {
        ctx->pc = 0x1A153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1538u;
        // 0x1a153c: 0xae830c7c  sw          $v1, 0xC7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1540u;
        goto label_1a1540;
    }
    ctx->pc = 0x1A1538u;
    {
        const bool branch_taken_0x1a1538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1538u;
        // 0x1a153c: 0xae830c7c  sw          $v1, 0xC7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1538) {
            ctx->pc = 0x1A1C04u;
            goto label_1a1c04;
        }
    }
    ctx->pc = 0x1A1540u;
label_1a1540:
    // 0x1a1540: 0x928308b8  lbu         $v1, 0x8B8($s4)
    ctx->pc = 0x1a1540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2232)));
label_1a1544:
    // 0x1a1544: 0x106001af  beqz        $v1, . + 4 + (0x1AF << 2)
label_1a1548:
    if (ctx->pc == 0x1A1548u) {
        ctx->pc = 0x1A154Cu;
        goto label_1a154c;
    }
    ctx->pc = 0x1A1544u;
    {
        const bool branch_taken_0x1a1544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1544) {
            ctx->pc = 0x1A1C04u;
            goto label_1a1c04;
        }
    }
    ctx->pc = 0x1A154Cu;
label_1a154c:
    // 0x1a154c: 0xc069ae8  jal         func_1A6BA0
label_1a1550:
    if (ctx->pc == 0x1A1550u) {
        ctx->pc = 0x1A1550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A154Cu;
        // 0x1a1550: 0x268408a0  addiu       $a0, $s4, 0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1554u;
        goto label_1a1554;
    }
    ctx->pc = 0x1A154Cu;
    SET_GPR_U32(ctx, 31, 0x1A1554u);
    ctx->pc = 0x1A1550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A154Cu;
    // 0x1a1550: 0x268408a0  addiu       $a0, $s4, 0x8A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1A154Cu, 0x1A1554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1554u;
label_1a1554:
    // 0x1a1554: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a1554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1558:
    // 0x1a1558: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x1a1558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
label_1a155c:
    // 0x1a155c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a155cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a1560:
    // 0x1a1560: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1a1560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a1564:
    // 0x1a1564: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a1564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a1568:
    // 0x1a1568: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a1568u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a156c:
    // 0x1a156c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a156cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a1570:
    // 0x1a1570: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a1570u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a1574:
    // 0x1a1574: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a1574u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1a1578:
    // 0x1a1578: 0x0  nop
    ctx->pc = 0x1a1578u;
    // NOP
label_1a157c:
    // 0x1a157c: 0xae830680  sw          $v1, 0x680($s4)
    ctx->pc = 0x1a157cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1664), GPR_U32(ctx, 3));
label_1a1580:
    // 0x1a1580: 0xae800684  sw          $zero, 0x684($s4)
    ctx->pc = 0x1a1580u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1668), GPR_U32(ctx, 0));
label_1a1584:
    // 0x1a1584: 0xae800690  sw          $zero, 0x690($s4)
    ctx->pc = 0x1a1584u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1680), GPR_U32(ctx, 0));
label_1a1588:
    // 0x1a1588: 0xae80069c  sw          $zero, 0x69C($s4)
    ctx->pc = 0x1a1588u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1692), GPR_U32(ctx, 0));
label_1a158c:
    // 0x1a158c: 0xae8006a0  sw          $zero, 0x6A0($s4)
    ctx->pc = 0x1a158cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1696), GPR_U32(ctx, 0));
label_1a1590:
    // 0x1a1590: 0xae800698  sw          $zero, 0x698($s4)
    ctx->pc = 0x1a1590u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1688), GPR_U32(ctx, 0));
label_1a1594:
    // 0x1a1594: 0xc045ae8  jal         func_116BA0
label_1a1598:
    if (ctx->pc == 0x1A1598u) {
        ctx->pc = 0x1A1598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1594u;
        // 0x1a1598: 0xae8206b0  sw          $v0, 0x6B0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A159Cu;
        goto label_1a159c;
    }
    ctx->pc = 0x1A1594u;
    SET_GPR_U32(ctx, 31, 0x1A159Cu);
    ctx->pc = 0x1A1598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1594u;
    // 0x1a1598: 0xae8206b0  sw          $v0, 0x6B0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1712), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116BA0u, 0x1A1594u, 0x1A159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A159Cu;
label_1a159c:
    // 0x1a159c: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x1a159cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a15a0:
    // 0x1a15a0: 0x24550023  addiu       $s5, $v0, 0x23
    ctx->pc = 0x1a15a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
label_1a15a4:
    // 0x1a15a4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1a15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_1a15a8:
    // 0x1a15a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1a15a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1a15ac:
    // 0x1a15ac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a15acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a15b0:
    // 0x1a15b0: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x1a15b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_1a15b4:
    // 0x1a15b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a15b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a15b8:
    // 0x1a15b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a15b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a15bc:
    // 0x1a15bc: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x1a15bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1a15c0:
    // 0x1a15c0: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x1a15c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a15c4:
    // 0x1a15c4: 0xae800c70  sw          $zero, 0xC70($s4)
    ctx->pc = 0x1a15c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3184), GPR_U32(ctx, 0));
label_1a15c8:
    // 0x1a15c8: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x1a15c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1a15cc:
    // 0x1a15cc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a15ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1a15d0:
    // 0x1a15d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a15d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1a15d4:
    // 0x1a15d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a15d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a15d8:
    // 0x1a15d8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1a15d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1a15dc:
    // 0x1a15dc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a15dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1a15e0:
    // 0x1a15e0: 0x0  nop
    ctx->pc = 0x1a15e0u;
    // NOP
label_1a15e4:
    // 0x1a15e4: 0x83b023  subu        $s6, $a0, $v1
    ctx->pc = 0x1a15e4u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1a15e8:
    // 0x1a15e8: 0x2c2001a  div         $zero, $s6, $v0
    ctx->pc = 0x1a15e8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 22);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a15ec:
    // 0x1a15ec: 0x0  nop
    ctx->pc = 0x1a15ecu;
    // NOP
label_1a15f0:
    // 0x1a15f0: 0x0  nop
    ctx->pc = 0x1a15f0u;
    // NOP
label_1a15f4:
    // 0x1a15f4: 0x8812  mflo        $s1
    ctx->pc = 0x1a15f4u;
    SET_GPR_U64(ctx, 17, ctx->lo);
label_1a15f8:
    // 0x1a15f8: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_1a15fc:
    if (ctx->pc == 0x1A15FCu) {
        ctx->pc = 0x1A15FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15F8u;
        // 0x1a15fc: 0xae950c74  sw          $s5, 0xC74($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3188), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1600u;
        goto label_1a1600;
    }
    ctx->pc = 0x1A15F8u;
    {
        const bool branch_taken_0x1a15f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A15FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15F8u;
        // 0x1a15fc: 0xae950c74  sw          $s5, 0xC74($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3188), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a15f8) {
            ctx->pc = 0x1A1654u;
            goto label_1a1654;
        }
    }
    ctx->pc = 0x1A1600u;
label_1a1600:
    // 0x1a1600: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a1600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1604:
    // 0x1a1604: 0xc045ae8  jal         func_116BA0
label_1a1608:
    if (ctx->pc == 0x1A1608u) {
        ctx->pc = 0x1A1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1604u;
        // 0x1a1608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A160Cu;
        goto label_1a160c;
    }
    ctx->pc = 0x1A1604u;
    SET_GPR_U32(ctx, 31, 0x1A160Cu);
    ctx->pc = 0x1A1608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1604u;
    // 0x1a1608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116BA0u, 0x1A1604u, 0x1A160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A160Cu;
label_1a160c:
    // 0x1a160c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1a160cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a1610:
    // 0x1a1610: 0x26a40001  addiu       $a0, $s5, 0x1
    ctx->pc = 0x1a1610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1a1614:
    // 0x1a1614: 0x762818  mult        $a1, $v1, $s6
    ctx->pc = 0x1a1614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1a1618:
    // 0x1a1618: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x1a1618u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a161c:
    // 0x1a161c: 0x111843  sra         $v1, $s1, 1
    ctx->pc = 0x1a161cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 1));
label_1a1620:
    // 0x1a1620: 0x0  nop
    ctx->pc = 0x1a1620u;
    // NOP
label_1a1624:
    // 0x1a1624: 0x2012  mflo        $a0
    ctx->pc = 0x1a1624u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_1a1628:
    // 0x1a1628: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
label_1a162c:
    if (ctx->pc == 0x1A162Cu) {
        ctx->pc = 0x1A162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1628u;
        // 0x1a162c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1630u;
        goto label_1a1630;
    }
    ctx->pc = 0x1A1628u;
    {
        const bool branch_taken_0x1a1628 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1A162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1628u;
        // 0x1a162c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1628) {
            ctx->pc = 0x1A1638u;
            goto label_1a1638;
        }
    }
    ctx->pc = 0x1A1630u;
label_1a1630:
    // 0x1a1630: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1a1630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a1634:
    // 0x1a1634: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x1a1634u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_1a1638:
    // 0x1a1638: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x1a1638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1a163c:
    // 0x1a163c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1a163cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1a1640:
    // 0x1a1640: 0xac430bbc  sw          $v1, 0xBBC($v0)
    ctx->pc = 0x1a1640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3004), GPR_U32(ctx, 3));
label_1a1644:
    // 0x1a1644: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a1644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a1648:
    // 0x1a1648: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x1a1648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_1a164c:
    // 0x1a164c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_1a1650:
    if (ctx->pc == 0x1A1650u) {
        ctx->pc = 0x1A1650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A164Cu;
        // 0x1a1650: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1654u;
        goto label_1a1654;
    }
    ctx->pc = 0x1A164Cu;
    {
        const bool branch_taken_0x1a164c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A164Cu;
        // 0x1a1650: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a164c) {
            ctx->pc = 0x1A1604u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1604;
        }
    }
    ctx->pc = 0x1A1654u;
label_1a1654:
    // 0x1a1654: 0x0  nop
    ctx->pc = 0x1a1654u;
    // NOP
label_1a1658:
    // 0x1a1658: 0xc063e14  jal         func_18F850
label_1a165c:
    if (ctx->pc == 0x1A165Cu) {
        ctx->pc = 0x1A165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1658u;
        // 0x1a165c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1660u;
        goto label_1a1660;
    }
    ctx->pc = 0x1A1658u;
    SET_GPR_U32(ctx, 31, 0x1A1660u);
    ctx->pc = 0x1A165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1658u;
    // 0x1a165c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A1658u, 0x1A1660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1660u;
label_1a1660:
    // 0x1a1660: 0x10000168  b           . + 4 + (0x168 << 2)
label_1a1664:
    if (ctx->pc == 0x1A1664u) {
        ctx->pc = 0x1A1668u;
        goto label_1a1668;
    }
    ctx->pc = 0x1A1660u;
    {
        const bool branch_taken_0x1a1660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1660) {
            ctx->pc = 0x1A1C04u;
            goto label_1a1c04;
        }
    }
    ctx->pc = 0x1A1668u;
label_1a1668:
    // 0x1a1668: 0x8f86838c  lw          $a2, -0x7C74($gp)
    ctx->pc = 0x1a1668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
label_1a166c:
    // 0x1a166c: 0x8f848318  lw          $a0, -0x7CE8($gp)
    ctx->pc = 0x1a166cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
label_1a1670:
    // 0x1a1670: 0x93838488  lbu         $v1, -0x7B78($gp)
    ctx->pc = 0x1a1670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
label_1a1674:
    // 0x1a1674: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x1a1674u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1a1678:
    // 0x1a1678: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1a1678u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1a167c:
    // 0x1a167c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1a167cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a1680:
    // 0x1a1680: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1a1684:
    if (ctx->pc == 0x1A1684u) {
        ctx->pc = 0x1A1684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1680u;
        // 0x1a1684: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1688u;
        goto label_1a1688;
    }
    ctx->pc = 0x1A1680u;
    {
        const bool branch_taken_0x1a1680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1680u;
        // 0x1a1684: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1680) {
            ctx->pc = 0x1A1694u;
            goto label_1a1694;
        }
    }
    ctx->pc = 0x1A1688u;
label_1a1688:
    // 0x1a1688: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1a1688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_1a168c:
    // 0x1a168c: 0x90272eb5  lbu         $a3, 0x2EB5($at)
    ctx->pc = 0x1a168cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 11957)));
label_1a1690:
    // 0x1a1690: 0x0  nop
    ctx->pc = 0x1a1690u;
    // NOP
label_1a1694:
    // 0x1a1694: 0x4e10004  bgez        $a3, . + 4 + (0x4 << 2)
label_1a1698:
    if (ctx->pc == 0x1A1698u) {
        ctx->pc = 0x1A1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1694u;
        // 0x1a1698: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A169Cu;
        goto label_1a169c;
    }
    ctx->pc = 0x1A1694u;
    {
        const bool branch_taken_0x1a1694 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1A1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1694u;
        // 0x1a1698: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1694) {
            ctx->pc = 0x1A16A8u;
            goto label_1a16a8;
        }
    }
    ctx->pc = 0x1A169Cu;
label_1a169c:
    // 0x1a169c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a16a0:
    if (ctx->pc == 0x1A16A0u) {
        ctx->pc = 0x1A16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A169Cu;
        // 0x1a16a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A16A4u;
        goto label_1a16a4;
    }
    ctx->pc = 0x1A169Cu;
    {
        const bool branch_taken_0x1a169c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A169Cu;
        // 0x1a16a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a169c) {
            ctx->pc = 0x1A16C8u;
            goto label_1a16c8;
        }
    }
    ctx->pc = 0x1A16A4u;
label_1a16a4:
    // 0x1a16a4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1a16a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1a16a8:
    // 0x1a16a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a16a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a16ac:
    // 0x1a16ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a16acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1a16b0:
    // 0x1a16b0: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1a16b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1a16b4:
    // 0x1a16b4: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_1a16b8:
    if (ctx->pc == 0x1A16B8u) {
        ctx->pc = 0x1A16BCu;
        goto label_1a16bc;
    }
    ctx->pc = 0x1A16B4u;
    {
        const bool branch_taken_0x1a16b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a16b4) {
            ctx->pc = 0x1A16C4u;
            goto label_1a16c4;
        }
    }
    ctx->pc = 0x1A16BCu;
label_1a16bc:
    // 0x1a16bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a16c0:
    if (ctx->pc == 0x1A16C0u) {
        ctx->pc = 0x1A16C4u;
        goto label_1a16c4;
    }
    ctx->pc = 0x1A16BCu;
    {
        const bool branch_taken_0x1a16bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a16bc) {
            ctx->pc = 0x1A16C8u;
            goto label_1a16c8;
        }
    }
    ctx->pc = 0x1A16C4u;
label_1a16c4:
    // 0x1a16c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a16c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a16c8:
    // 0x1a16c8: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_1a16cc:
    if (ctx->pc == 0x1A16CCu) {
        ctx->pc = 0x1A16D0u;
        goto label_1a16d0;
    }
    ctx->pc = 0x1A16C8u;
    {
        const bool branch_taken_0x1a16c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a16c8) {
            ctx->pc = 0x1A1734u;
            goto label_1a1734;
        }
    }
    ctx->pc = 0x1A16D0u;
label_1a16d0:
    // 0x1a16d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a16d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a16d4:
    // 0x1a16d4: 0xc064ee0  jal         func_193B80
label_1a16d8:
    if (ctx->pc == 0x1A16D8u) {
        ctx->pc = 0x1A16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16D4u;
        // 0x1a16d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A16DCu;
        goto label_1a16dc;
    }
    ctx->pc = 0x1A16D4u;
    SET_GPR_U32(ctx, 31, 0x1A16DCu);
    ctx->pc = 0x1A16D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A16D4u;
    // 0x1a16d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B80u, 0x1A16D4u, 0x1A16DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A16DCu;
label_1a16dc:
    // 0x1a16dc: 0x8e830c78  lw          $v1, 0xC78($s4)
    ctx->pc = 0x1a16dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3192)));
label_1a16e0:
    // 0x1a16e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a16e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a16e4:
    // 0x1a16e4: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1a16e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1a16e8:
    // 0x1a16e8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a16e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a16ec:
    // 0x1a16ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a16ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a16f0:
    // 0x1a16f0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a16f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a16f4:
    // 0x1a16f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a16f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a16f8:
    // 0x1a16f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a16f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a16fc:
    // 0x1a16fc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a16fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a1700:
    // 0x1a1700: 0x320f809  jalr        $t9
label_1a1704:
    if (ctx->pc == 0x1A1704u) {
        ctx->pc = 0x1A1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1700u;
        // 0x1a1704: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1708u;
        goto label_1a1708;
    }
    ctx->pc = 0x1A1700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1708u);
        ctx->pc = 0x1A1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1700u;
        // 0x1a1704: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1700u, 0x1A1708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1708u;
label_1a1708:
    // 0x1a1708: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a1708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a170c:
    // 0x1a170c: 0xae830c7c  sw          $v1, 0xC7C($s4)
    ctx->pc = 0x1a170cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 3));
label_1a1710:
    // 0x1a1710: 0x8e830694  lw          $v1, 0x694($s4)
    ctx->pc = 0x1a1710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1684)));
label_1a1714:
    // 0x1a1714: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a1714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a1718:
    // 0x1a1718: 0xae830694  sw          $v1, 0x694($s4)
    ctx->pc = 0x1a1718u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1684), GPR_U32(ctx, 3));
label_1a171c:
    // 0x1a171c: 0x8e830694  lw          $v1, 0x694($s4)
    ctx->pc = 0x1a171cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1684)));
label_1a1720:
    // 0x1a1720: 0x28630063  slti        $v1, $v1, 0x63
    ctx->pc = 0x1a1720u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)99) ? 1 : 0);
label_1a1724:
    // 0x1a1724: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1a1728:
    if (ctx->pc == 0x1A1728u) {
        ctx->pc = 0x1A172Cu;
        goto label_1a172c;
    }
    ctx->pc = 0x1A1724u;
    {
        const bool branch_taken_0x1a1724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1724) {
            ctx->pc = 0x1A1734u;
            goto label_1a1734;
        }
    }
    ctx->pc = 0x1A172Cu;
label_1a172c:
    // 0x1a172c: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x1a172cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_1a1730:
    // 0x1a1730: 0xae830694  sw          $v1, 0x694($s4)
    ctx->pc = 0x1a1730u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1684), GPR_U32(ctx, 3));
label_1a1734:
    // 0x1a1734: 0x8e830680  lw          $v1, 0x680($s4)
    ctx->pc = 0x1a1734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1664)));
label_1a1738:
    // 0x1a1738: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a1738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1a173c:
    // 0x1a173c: 0xae830680  sw          $v1, 0x680($s4)
    ctx->pc = 0x1a173cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1664), GPR_U32(ctx, 3));
label_1a1740:
    // 0x1a1740: 0x8e830680  lw          $v1, 0x680($s4)
    ctx->pc = 0x1a1740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1664)));
label_1a1744:
    // 0x1a1744: 0x1c60012f  bgtz        $v1, . + 4 + (0x12F << 2)
label_1a1748:
    if (ctx->pc == 0x1A1748u) {
        ctx->pc = 0x1A174Cu;
        goto label_1a174c;
    }
    ctx->pc = 0x1A1744u;
    {
        const bool branch_taken_0x1a1744 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a1744) {
            ctx->pc = 0x1A1C04u;
            goto label_1a1c04;
        }
    }
    ctx->pc = 0x1A174Cu;
label_1a174c:
    // 0x1a174c: 0x8e8206a8  lw          $v0, 0x6A8($s4)
    ctx->pc = 0x1a174cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1704)));
label_1a1750:
    // 0x1a1750: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a1754:
    if (ctx->pc == 0x1A1754u) {
        ctx->pc = 0x1A1754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1750u;
        // 0x1a1754: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1758u;
        goto label_1a1758;
    }
    ctx->pc = 0x1A1750u;
    {
        const bool branch_taken_0x1a1750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1750u;
        // 0x1a1754: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1750) {
            ctx->pc = 0x1A1768u;
            goto label_1a1768;
        }
    }
    ctx->pc = 0x1A1758u;
label_1a1758:
    // 0x1a1758: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x1a1758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1a175c:
    // 0x1a175c: 0xc064fb8  jal         func_193EE0
label_1a1760:
    if (ctx->pc == 0x1A1760u) {
        ctx->pc = 0x1A1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A175Cu;
        // 0x1a1760: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1764u;
        goto label_1a1764;
    }
    ctx->pc = 0x1A175Cu;
    SET_GPR_U32(ctx, 31, 0x1A1764u);
    ctx->pc = 0x1A1760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A175Cu;
    // 0x1a1760: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A175Cu, 0x1A1764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1764u;
label_1a1764:
    // 0x1a1764: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a1764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a1768:
    // 0x1a1768: 0xc063e14  jal         func_18F850
label_1a176c:
    if (ctx->pc == 0x1A176Cu) {
        ctx->pc = 0x1A1770u;
        goto label_1a1770;
    }
    ctx->pc = 0x1A1768u;
    SET_GPR_U32(ctx, 31, 0x1A1770u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A1768u, 0x1A1770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1770u;
label_1a1770:
    // 0x1a1770: 0x10000124  b           . + 4 + (0x124 << 2)
label_1a1774:
    if (ctx->pc == 0x1A1774u) {
        ctx->pc = 0x1A1778u;
        goto label_1a1778;
    }
    ctx->pc = 0x1A1770u;
    {
        const bool branch_taken_0x1a1770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1770) {
            ctx->pc = 0x1A1C04u;
            goto label_1a1c04;
        }
    }
    ctx->pc = 0x1A1778u;
label_1a1778:
    // 0x1a1778: 0x8e82069c  lw          $v0, 0x69C($s4)
    ctx->pc = 0x1a1778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1692)));
label_1a177c:
    // 0x1a177c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a177cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a1780:
    // 0x1a1780: 0xc068358  jal         func_1A0D60
label_1a1784:
    if (ctx->pc == 0x1A1784u) {
        ctx->pc = 0x1A1784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1780u;
        // 0x1a1784: 0x22883  sra         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1788u;
        goto label_1a1788;
    }
    ctx->pc = 0x1A1780u;
    SET_GPR_U32(ctx, 31, 0x1A1788u);
    ctx->pc = 0x1A1784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1780u;
    // 0x1a1784: 0x22883  sra         $a1, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D60u, 0x1A1780u, 0x1A1788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1788u;
label_1a1788:
    // 0x1a1788: 0x8e83069c  lw          $v1, 0x69C($s4)
    ctx->pc = 0x1a1788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1692)));
label_1a178c:
    // 0x1a178c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a178cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a1790:
    // 0x1a1790: 0xae83069c  sw          $v1, 0x69C($s4)
    ctx->pc = 0x1a1790u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1692), GPR_U32(ctx, 3));
label_1a1794:
    // 0x1a1794: 0x8e83069c  lw          $v1, 0x69C($s4)
    ctx->pc = 0x1a1794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1692)));
label_1a1798:
    // 0x1a1798: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1a1798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1a179c:
    // 0x1a179c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1a17a0:
    if (ctx->pc == 0x1A17A0u) {
        ctx->pc = 0x1A17A4u;
        goto label_1a17a4;
    }
    ctx->pc = 0x1A179Cu;
    {
        const bool branch_taken_0x1a179c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a179c) {
            ctx->pc = 0x1A17BCu;
            goto label_1a17bc;
        }
    }
    ctx->pc = 0x1A17A4u;
label_1a17a4:
    // 0x1a17a4: 0xc062d50  jal         func_18B540
label_1a17a8:
    if (ctx->pc == 0x1A17A8u) {
        ctx->pc = 0x1A17ACu;
        goto label_1a17ac;
    }
    ctx->pc = 0x1A17A4u;
    SET_GPR_U32(ctx, 31, 0x1A17ACu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1A17A4u, 0x1A17ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A17ACu;
label_1a17ac:
    // 0x1a17ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a17acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a17b0:
    // 0x1a17b0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a17b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a17b4:
    // 0x1a17b4: 0xc062b5c  jal         func_18AD70
label_1a17b8:
    if (ctx->pc == 0x1A17B8u) {
        ctx->pc = 0x1A17B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A17B4u;
        // 0x1a17b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A17BCu;
        goto label_1a17bc;
    }
    ctx->pc = 0x1A17B4u;
    SET_GPR_U32(ctx, 31, 0x1A17BCu);
    ctx->pc = 0x1A17B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A17B4u;
    // 0x1a17b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1A17B4u, 0x1A17BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A17BCu;
label_1a17bc:
    // 0x1a17bc: 0x8e84069c  lw          $a0, 0x69C($s4)
    ctx->pc = 0x1a17bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1692)));
label_1a17c0:
    // 0x1a17c0: 0x8e830698  lw          $v1, 0x698($s4)
    ctx->pc = 0x1a17c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1688)));
label_1a17c4:
    // 0x1a17c4: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x1a17c4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
label_1a17c8:
    // 0x1a17c8: 0x1483010e  bne         $a0, $v1, . + 4 + (0x10E << 2)
label_1a17cc:
    if (ctx->pc == 0x1A17CCu) {
        ctx->pc = 0x1A17D0u;
        goto label_1a17d0;
    }
    ctx->pc = 0x1A17C8u;
    {
        const bool branch_taken_0x1a17c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a17c8) {
            ctx->pc = 0x1A1C04u;
            goto label_1a1c04;
        }
    }
    ctx->pc = 0x1A17D0u;
label_1a17d0:
    // 0x1a17d0: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a17d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a17d4:
    // 0x1a17d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a17d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a17d8:
    // 0x1a17d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a17d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a17dc:
    // 0x1a17dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a17dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a17e0:
    // 0x1a17e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a17e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a17e4:
    // 0x1a17e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a17e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a17e8:
    // 0x1a17e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a17e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a17ec:
    // 0x1a17ec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a17ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1a17f0:
    // 0x1a17f0: 0xc063e14  jal         func_18F850
label_1a17f4:
    if (ctx->pc == 0x1A17F4u) {
        ctx->pc = 0x1A17F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A17F0u;
        // 0x1a17f4: 0xae820688  sw          $v0, 0x688($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A17F8u;
        goto label_1a17f8;
    }
    ctx->pc = 0x1A17F0u;
    SET_GPR_U32(ctx, 31, 0x1A17F8u);
    ctx->pc = 0x1A17F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A17F0u;
    // 0x1a17f4: 0xae820688  sw          $v0, 0x688($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1672), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A17F0u, 0x1A17F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A17F8u;
label_1a17f8:
    // 0x1a17f8: 0x10000102  b           . + 4 + (0x102 << 2)
label_1a17fc:
    if (ctx->pc == 0x1A17FCu) {
        ctx->pc = 0x1A1800u;
        goto label_1a1800;
    }
    ctx->pc = 0x1A17F8u;
    {
        const bool branch_taken_0x1a17f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a17f8) {
            ctx->pc = 0x1A1C04u;
            goto label_1a1c04;
        }
    }
    ctx->pc = 0x1A1800u;
label_1a1800:
    // 0x1a1800: 0x8e850698  lw          $a1, 0x698($s4)
    ctx->pc = 0x1a1800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1688)));
label_1a1804:
    // 0x1a1804: 0xc068358  jal         func_1A0D60
label_1a1808:
    if (ctx->pc == 0x1A1808u) {
        ctx->pc = 0x1A1808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1804u;
        // 0x1a1808: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A180Cu;
        goto label_1a180c;
    }
    ctx->pc = 0x1A1804u;
    SET_GPR_U32(ctx, 31, 0x1A180Cu);
    ctx->pc = 0x1A1808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1804u;
    // 0x1a1808: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D60u, 0x1A1804u, 0x1A180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A180Cu;
label_1a180c:
    // 0x1a180c: 0x8e830688  lw          $v1, 0x688($s4)
    ctx->pc = 0x1a180cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
label_1a1810:
    // 0x1a1810: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a1810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1a1814:
    // 0x1a1814: 0xae830688  sw          $v1, 0x688($s4)
    ctx->pc = 0x1a1814u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1672), GPR_U32(ctx, 3));
label_1a1818:
    // 0x1a1818: 0x8e830688  lw          $v1, 0x688($s4)
    ctx->pc = 0x1a1818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
label_1a181c:
    // 0x1a181c: 0x1c6000f9  bgtz        $v1, . + 4 + (0xF9 << 2)
label_1a1820:
    if (ctx->pc == 0x1A1820u) {
        ctx->pc = 0x1A1824u;
        goto label_1a1824;
    }
    ctx->pc = 0x1A181Cu;
    {
        const bool branch_taken_0x1a181c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a181c) {
            ctx->pc = 0x1A1C04u;
            goto label_1a1c04;
        }
    }
    ctx->pc = 0x1A1824u;
label_1a1824:
    // 0x1a1824: 0x8e830698  lw          $v1, 0x698($s4)
    ctx->pc = 0x1a1824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1688)));
label_1a1828:
    // 0x1a1828: 0x8e820694  lw          $v0, 0x694($s4)
    ctx->pc = 0x1a1828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1684)));
label_1a182c:
    // 0x1a182c: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
label_1a1830:
    if (ctx->pc == 0x1A1830u) {
        ctx->pc = 0x1A1834u;
        goto label_1a1834;
    }
    ctx->pc = 0x1A182Cu;
    {
        const bool branch_taken_0x1a182c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a182c) {
            ctx->pc = 0x1A1960u;
            goto label_1a1960;
        }
    }
    ctx->pc = 0x1A1834u;
label_1a1834:
    // 0x1a1834: 0x8e8506ac  lw          $a1, 0x6AC($s4)
    ctx->pc = 0x1a1834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1708)));
label_1a1838:
    // 0x1a1838: 0xc064fb8  jal         func_193EE0
label_1a183c:
    if (ctx->pc == 0x1A183Cu) {
        ctx->pc = 0x1A183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1838u;
        // 0x1a183c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1840u;
        goto label_1a1840;
    }
    ctx->pc = 0x1A1838u;
    SET_GPR_U32(ctx, 31, 0x1A1840u);
    ctx->pc = 0x1A183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1838u;
    // 0x1a183c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A1838u, 0x1A1840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1840u;
label_1a1840:
    // 0x1a1840: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a1840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a1844:
    // 0x1a1844: 0x268408c0  addiu       $a0, $s4, 0x8C0
    ctx->pc = 0x1a1844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2240));
label_1a1848:
    // 0x1a1848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a184c:
    // 0x1a184c: 0xc069994  jal         func_1A6650
label_1a1850:
    if (ctx->pc == 0x1A1850u) {
        ctx->pc = 0x1A1850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A184Cu;
        // 0x1a1850: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1854u;
        goto label_1a1854;
    }
    ctx->pc = 0x1A184Cu;
    SET_GPR_U32(ctx, 31, 0x1A1854u);
    ctx->pc = 0x1A1850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A184Cu;
    // 0x1a1850: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6650u, 0x1A184Cu, 0x1A1854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1854u;
label_1a1854:
    // 0x1a1854: 0x8e8209d4  lw          $v0, 0x9D4($s4)
    ctx->pc = 0x1a1854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2516)));
label_1a1858:
    // 0x1a1858: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a1858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a185c:
    // 0x1a185c: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x1a185cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1a1860:
    // 0x1a1860: 0xc0628f0  jal         func_18A3C0
label_1a1864:
    if (ctx->pc == 0x1A1864u) {
        ctx->pc = 0x1A1864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1860u;
        // 0x1a1864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1868u;
        goto label_1a1868;
    }
    ctx->pc = 0x1A1860u;
    SET_GPR_U32(ctx, 31, 0x1A1868u);
    ctx->pc = 0x1A1864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1860u;
    // 0x1a1864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1A1860u, 0x1A1868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1868u;
label_1a1868:
    // 0x1a1868: 0x8e8609d4  lw          $a2, 0x9D4($s4)
    ctx->pc = 0x1a1868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2516)));
label_1a186c:
    // 0x1a186c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a186cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1870:
    // 0x1a1870: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a1870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a1874:
    // 0x1a1874: 0x3c03c200  lui         $v1, 0xC200
    ctx->pc = 0x1a1874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49664 << 16));
label_1a1878:
    // 0x1a1878: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a1878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a187c:
    // 0x1a187c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a187cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1880:
    // 0x1a1880: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a1880u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a1884:
    // 0x1a1884: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1a1884u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_1a1888:
    // 0x1a1888: 0xacc500b8  sw          $a1, 0xB8($a2)
    ctx->pc = 0x1a1888u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 184), GPR_U32(ctx, 5));
label_1a188c:
    // 0x1a188c: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1a188cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
label_1a1890:
    // 0x1a1890: 0xacc000b0  sw          $zero, 0xB0($a2)
    ctx->pc = 0x1a1890u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 176), GPR_U32(ctx, 0));
label_1a1894:
    // 0x1a1894: 0xc062860  jal         func_18A180
label_1a1898:
    if (ctx->pc == 0x1A1898u) {
        ctx->pc = 0x1A1898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1894u;
        // 0x1a1898: 0xacc300b4  sw          $v1, 0xB4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A189Cu;
        goto label_1a189c;
    }
    ctx->pc = 0x1A1894u;
    SET_GPR_U32(ctx, 31, 0x1A189Cu);
    ctx->pc = 0x1A1898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1894u;
    // 0x1a1898: 0xacc300b4  sw          $v1, 0xB4($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 180), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1A1894u, 0x1A189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A189Cu;
label_1a189c:
    // 0x1a189c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a189cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1a18a0:
    // 0x1a18a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a18a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a18a4:
    // 0x1a18a4: 0xc062858  jal         func_18A160
label_1a18a8:
    if (ctx->pc == 0x1A18A8u) {
        ctx->pc = 0x1A18A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18A4u;
        // 0x1a18a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A18ACu;
        goto label_1a18ac;
    }
    ctx->pc = 0x1A18A4u;
    SET_GPR_U32(ctx, 31, 0x1A18ACu);
    ctx->pc = 0x1A18A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A18A4u;
    // 0x1a18a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1A18A4u, 0x1A18ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18ACu;
label_1a18ac:
    // 0x1a18ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a18acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a18b0:
    // 0x1a18b0: 0xc062200  jal         func_188800
label_1a18b4:
    if (ctx->pc == 0x1A18B4u) {
        ctx->pc = 0x1A18B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18B0u;
        // 0x1a18b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A18B8u;
        goto label_1a18b8;
    }
    ctx->pc = 0x1A18B0u;
    SET_GPR_U32(ctx, 31, 0x1A18B8u);
    ctx->pc = 0x1A18B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A18B0u;
    // 0x1a18b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188800u, 0x1A18B0u, 0x1A18B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18B8u;
label_1a18b8:
    // 0x1a18b8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a18b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1a18bc:
    // 0x1a18bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a18bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a18c0:
    // 0x1a18c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a18c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a18c4:
    // 0x1a18c4: 0xc06223c  jal         func_1888F0
label_1a18c8:
    if (ctx->pc == 0x1A18C8u) {
        ctx->pc = 0x1A18C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18C4u;
        // 0x1a18c8: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A18CCu;
        goto label_1a18cc;
    }
    ctx->pc = 0x1A18C4u;
    SET_GPR_U32(ctx, 31, 0x1A18CCu);
    ctx->pc = 0x1A18C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A18C4u;
    // 0x1a18c8: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1888F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1888F0u, 0x1A18C4u, 0x1A18CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18CCu;
label_1a18cc:
    // 0x1a18cc: 0xc062114  jal         func_188450
label_1a18d0:
    if (ctx->pc == 0x1A18D0u) {
        ctx->pc = 0x1A18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18CCu;
        // 0x1a18d0: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A18D4u;
        goto label_1a18d4;
    }
    ctx->pc = 0x1A18CCu;
    SET_GPR_U32(ctx, 31, 0x1A18D4u);
    ctx->pc = 0x1A18D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A18CCu;
    // 0x1a18d0: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A18CCu, 0x1A18D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18D4u;
label_1a18d4:
    // 0x1a18d4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a18d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1a18d8:
    // 0x1a18d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a18d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a18dc:
    // 0x1a18dc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1a18dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1a18e0:
    // 0x1a18e0: 0xc061fa8  jal         func_187EA0
label_1a18e4:
    if (ctx->pc == 0x1A18E4u) {
        ctx->pc = 0x1A18E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18E0u;
        // 0x1a18e4: 0x24a503d8  addiu       $a1, $a1, 0x3D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A18E8u;
        goto label_1a18e8;
    }
    ctx->pc = 0x1A18E0u;
    SET_GPR_U32(ctx, 31, 0x1A18E8u);
    ctx->pc = 0x1A18E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A18E0u;
    // 0x1a18e4: 0x24a503d8  addiu       $a1, $a1, 0x3D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EA0u, 0x1A18E0u, 0x1A18E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18E8u;
label_1a18e8:
    // 0x1a18e8: 0x8e8209d4  lw          $v0, 0x9D4($s4)
    ctx->pc = 0x1a18e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2516)));
label_1a18ec:
    // 0x1a18ec: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1a18ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1a18f0:
    // 0x1a18f0: 0xa04001bb  sb          $zero, 0x1BB($v0)
    ctx->pc = 0x1a18f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 443), (uint8_t)GPR_U32(ctx, 0));
label_1a18f4:
    // 0x1a18f4: 0x244500bc  addiu       $a1, $v0, 0xBC
    ctx->pc = 0x1a18f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
label_1a18f8:
    // 0x1a18f8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a18fc:
    if (ctx->pc == 0x1A18FCu) {
        ctx->pc = 0x1A18FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18F8u;
        // 0x1a18fc: 0xa04001ba  sb          $zero, 0x1BA($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 442), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1900u;
        goto label_1a1900;
    }
    ctx->pc = 0x1A18F8u;
    {
        const bool branch_taken_0x1a18f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A18FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18F8u;
        // 0x1a18fc: 0xa04001ba  sb          $zero, 0x1BA($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 442), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a18f8) {
            ctx->pc = 0x1A1914u;
            goto label_1a1914;
        }
    }
    ctx->pc = 0x1A1900u;
label_1a1900:
    // 0x1a1900: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x1a1900u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_1a1904:
    // 0x1a1904: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a1904u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_1a1908:
    // 0x1a1908: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x1a1908u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_1a190c:
    // 0x1a190c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1a190cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_1a1910:
    // 0x1a1910: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1a1910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_1a1914:
    // 0x1a1914: 0x0  nop
    ctx->pc = 0x1a1914u;
    // NOP
label_1a1918:
    // 0x1a1918: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1a1918u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1a191c:
    // 0x1a191c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_1a1920:
    if (ctx->pc == 0x1A1920u) {
        ctx->pc = 0x1A1924u;
        goto label_1a1924;
    }
    ctx->pc = 0x1A191Cu;
    {
        const bool branch_taken_0x1a191c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a191c) {
            ctx->pc = 0x1A1900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1900;
        }
    }
    ctx->pc = 0x1A1924u;
label_1a1924:
    // 0x1a1924: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a1924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_1a1928:
    // 0x1a1928: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1a192c:
    if (ctx->pc == 0x1A192Cu) {
        ctx->pc = 0x1A1930u;
        goto label_1a1930;
    }
    ctx->pc = 0x1A1928u;
    {
        const bool branch_taken_0x1a1928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1928) {
            ctx->pc = 0x1A1900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1900;
        }
    }
    ctx->pc = 0x1A1930u;
label_1a1930:
    // 0x1a1930: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x1a1930u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_1a1934:
    // 0x1a1934: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a1934u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_1a1938:
    // 0x1a1938: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a1938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a193c:
    // 0x1a193c: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x1a193cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_1a1940:
    // 0x1a1940: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1944:
    // 0x1a1944: 0x8e8209d4  lw          $v0, 0x9D4($s4)
    ctx->pc = 0x1a1944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2516)));
label_1a1948:
    // 0x1a1948: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1a1948u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1a194c:
    // 0x1a194c: 0x8e8209d0  lw          $v0, 0x9D0($s4)
    ctx->pc = 0x1a194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2512)));
label_1a1950:
    // 0x1a1950: 0xc063e14  jal         func_18F850
label_1a1954:
    if (ctx->pc == 0x1A1954u) {
        ctx->pc = 0x1A1954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1950u;
        // 0x1a1954: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1958u;
        goto label_1a1958;
    }
    ctx->pc = 0x1A1950u;
    SET_GPR_U32(ctx, 31, 0x1A1958u);
    ctx->pc = 0x1A1954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1950u;
    // 0x1a1954: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A1950u, 0x1A1958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1958u;
label_1a1958:
    // 0x1a1958: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a195c:
    if (ctx->pc == 0x1A195Cu) {
        ctx->pc = 0x1A195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1958u;
        // 0x1a195c: 0xc7808028  lwc1        $f0, -0x7FD8($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1960u;
        goto label_1a1960;
    }
    ctx->pc = 0x1A1958u;
    {
        const bool branch_taken_0x1a1958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1958u;
        // 0x1a195c: 0xc7808028  lwc1        $f0, -0x7FD8($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1958) {
            ctx->pc = 0x1A1988u;
            goto label_1a1988;
        }
    }
    ctx->pc = 0x1A1960u;
label_1a1960:
    // 0x1a1960: 0xc062d50  jal         func_18B540
label_1a1964:
    if (ctx->pc == 0x1A1964u) {
        ctx->pc = 0x1A1968u;
        goto label_1a1968;
    }
    ctx->pc = 0x1A1960u;
    SET_GPR_U32(ctx, 31, 0x1A1968u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1A1960u, 0x1A1968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1968u;
label_1a1968:
    // 0x1a1968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a1968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a196c:
    // 0x1a196c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1a196cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1a1970:
    // 0x1a1970: 0xc062b5c  jal         func_18AD70
label_1a1974:
    if (ctx->pc == 0x1A1974u) {
        ctx->pc = 0x1A1974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1970u;
        // 0x1a1974: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1978u;
        goto label_1a1978;
    }
    ctx->pc = 0x1A1970u;
    SET_GPR_U32(ctx, 31, 0x1A1978u);
    ctx->pc = 0x1A1974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1970u;
    // 0x1a1974: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1A1970u, 0x1A1978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1978u;
label_1a1978:
    // 0x1a1978: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a1978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a197c:
    // 0x1a197c: 0xc063e08  jal         func_18F820
label_1a1980:
    if (ctx->pc == 0x1A1980u) {
        ctx->pc = 0x1A1980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A197Cu;
        // 0x1a1980: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1984u;
        goto label_1a1984;
    }
    ctx->pc = 0x1A197Cu;
    SET_GPR_U32(ctx, 31, 0x1A1984u);
    ctx->pc = 0x1A1980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A197Cu;
    // 0x1a1980: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A197Cu, 0x1A1984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1984u;
label_1a1984:
    // 0x1a1984: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a1984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1988:
    // 0x1a1988: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1a1988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1a198c:
    // 0x1a198c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a198cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a1990:
    // 0x1a1990: 0x0  nop
    ctx->pc = 0x1a1990u;
    // NOP
label_1a1994:
    // 0x1a1994: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a1994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a1998:
    // 0x1a1998: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a1998u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a199c:
    // 0x1a199c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a199cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a19a0:
    // 0x1a19a0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a19a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1a19a4:
    // 0x1a19a4: 0x10000097  b           . + 4 + (0x97 << 2)
label_1a19a8:
    if (ctx->pc == 0x1A19A8u) {
        ctx->pc = 0x1A19A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19A4u;
        // 0x1a19a8: 0xae830688  sw          $v1, 0x688($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1672), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A19ACu;
        goto label_1a19ac;
    }
    ctx->pc = 0x1A19A4u;
    {
        const bool branch_taken_0x1a19a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A19A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19A4u;
        // 0x1a19a8: 0xae830688  sw          $v1, 0x688($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1672), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a19a4) {
            ctx->pc = 0x1A1C04u;
            goto label_1a1c04;
        }
    }
    ctx->pc = 0x1A19ACu;
label_1a19ac:
    // 0x1a19ac: 0x8e830688  lw          $v1, 0x688($s4)
    ctx->pc = 0x1a19acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
label_1a19b0:
    // 0x1a19b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a19b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1a19b4:
    // 0x1a19b4: 0xae830688  sw          $v1, 0x688($s4)
    ctx->pc = 0x1a19b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1672), GPR_U32(ctx, 3));
label_1a19b8:
    // 0x1a19b8: 0x8e830688  lw          $v1, 0x688($s4)
    ctx->pc = 0x1a19b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
label_1a19bc:
    // 0x1a19bc: 0x1c600091  bgtz        $v1, . + 4 + (0x91 << 2)
label_1a19c0:
    if (ctx->pc == 0x1A19C0u) {
        ctx->pc = 0x1A19C4u;
        goto label_1a19c4;
    }
    ctx->pc = 0x1A19BCu;
    {
        const bool branch_taken_0x1a19bc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a19bc) {
            ctx->pc = 0x1A1C04u;
            goto label_1a1c04;
        }
    }
    ctx->pc = 0x1A19C4u;
label_1a19c4:
    // 0x1a19c4: 0x8e8309d4  lw          $v1, 0x9D4($s4)
    ctx->pc = 0x1a19c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2516)));
label_1a19c8:
    // 0x1a19c8: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1a19c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_1a19cc:
    // 0x1a19cc: 0x24422ac0  addiu       $v0, $v0, 0x2AC0
    ctx->pc = 0x1a19ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10944));
label_1a19d0:
    // 0x1a19d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a19d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a19d4:
    // 0x1a19d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a19d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a19d8:
    // 0x1a19d8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1a19d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1a19dc:
    // 0x1a19dc: 0x8e860678  lw          $a2, 0x678($s4)
    ctx->pc = 0x1a19dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
label_1a19e0:
    // 0x1a19e0: 0xde8306b8  ld          $v1, 0x6B8($s4)
    ctx->pc = 0x1a19e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 1720)));
label_1a19e4:
    // 0x1a19e4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1a19e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1a19e8:
    // 0x1a19e8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a19e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1a19ec:
    // 0x1a19ec: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1a19ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1a19f0:
    // 0x1a19f0: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x1a19f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_1a19f4:
    // 0x1a19f4: 0xfe8206b8  sd          $v0, 0x6B8($s4)
    ctx->pc = 0x1a19f4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 1720), GPR_U64(ctx, 2));
label_1a19f8:
    // 0x1a19f8: 0x8e820678  lw          $v0, 0x678($s4)
    ctx->pc = 0x1a19f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
label_1a19fc:
    // 0x1a19fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a19fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a1a00:
    // 0x1a1a00: 0xc063e08  jal         func_18F820
label_1a1a04:
    if (ctx->pc == 0x1A1A04u) {
        ctx->pc = 0x1A1A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A00u;
        // 0x1a1a04: 0xae820678  sw          $v0, 0x678($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1A08u;
        goto label_1a1a08;
    }
    ctx->pc = 0x1A1A00u;
    SET_GPR_U32(ctx, 31, 0x1A1A08u);
    ctx->pc = 0x1A1A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A00u;
    // 0x1a1a04: 0xae820678  sw          $v0, 0x678($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1656), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A1A00u, 0x1A1A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A08u;
label_1a1a08:
    // 0x1a1a08: 0x1000007e  b           . + 4 + (0x7E << 2)
label_1a1a0c:
    if (ctx->pc == 0x1A1A0Cu) {
        ctx->pc = 0x1A1A10u;
        goto label_1a1a10;
    }
    ctx->pc = 0x1A1A08u;
    {
        const bool branch_taken_0x1a1a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a08) {
            ctx->pc = 0x1A1C04u;
            goto label_1a1c04;
        }
    }
    ctx->pc = 0x1A1A10u;
label_1a1a10:
    // 0x1a1a10: 0x8e850698  lw          $a1, 0x698($s4)
    ctx->pc = 0x1a1a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1688)));
label_1a1a14:
    // 0x1a1a14: 0xc068358  jal         func_1A0D60
label_1a1a18:
    if (ctx->pc == 0x1A1A18u) {
        ctx->pc = 0x1A1A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A14u;
        // 0x1a1a18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1A1Cu;
        goto label_1a1a1c;
    }
    ctx->pc = 0x1A1A14u;
    SET_GPR_U32(ctx, 31, 0x1A1A1Cu);
    ctx->pc = 0x1A1A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A14u;
    // 0x1a1a18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D60u, 0x1A1A14u, 0x1A1A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A1Cu;
label_1a1a1c:
    // 0x1a1a1c: 0x8e8309d8  lw          $v1, 0x9D8($s4)
    ctx->pc = 0x1a1a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2520)));
label_1a1a20:
    // 0x1a1a20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a1a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1a24:
    // 0x1a1a24: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1a1a24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1a1a28:
    // 0x1a1a28: 0x8e830688  lw          $v1, 0x688($s4)
    ctx->pc = 0x1a1a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
label_1a1a2c:
    // 0x1a1a2c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a1a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1a1a30:
    // 0x1a1a30: 0xae830688  sw          $v1, 0x688($s4)
    ctx->pc = 0x1a1a30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1672), GPR_U32(ctx, 3));
label_1a1a34:
    // 0x1a1a34: 0x8e830688  lw          $v1, 0x688($s4)
    ctx->pc = 0x1a1a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
label_1a1a38:
    // 0x1a1a38: 0x1c600072  bgtz        $v1, . + 4 + (0x72 << 2)
label_1a1a3c:
    if (ctx->pc == 0x1A1A3Cu) {
        ctx->pc = 0x1A1A40u;
        goto label_1a1a40;
    }
    ctx->pc = 0x1A1A38u;
    {
        const bool branch_taken_0x1a1a38 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a1a38) {
            ctx->pc = 0x1A1C04u;
            goto label_1a1c04;
        }
    }
    ctx->pc = 0x1A1A40u;
label_1a1a40:
    // 0x1a1a40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a1a40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a1a44:
    // 0x1a1a44: 0x268408c0  addiu       $a0, $s4, 0x8C0
    ctx->pc = 0x1a1a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2240));
label_1a1a48:
    // 0x1a1a48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1a4c:
    // 0x1a1a4c: 0xc069994  jal         func_1A6650
label_1a1a50:
    if (ctx->pc == 0x1A1A50u) {
        ctx->pc = 0x1A1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A4Cu;
        // 0x1a1a50: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1A54u;
        goto label_1a1a54;
    }
    ctx->pc = 0x1A1A4Cu;
    SET_GPR_U32(ctx, 31, 0x1A1A54u);
    ctx->pc = 0x1A1A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A4Cu;
    // 0x1a1a50: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6650u, 0x1A1A4Cu, 0x1A1A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A54u;
label_1a1a54:
    // 0x1a1a54: 0xa280068c  sb          $zero, 0x68C($s4)
    ctx->pc = 0x1a1a54u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1676), (uint8_t)GPR_U32(ctx, 0));
label_1a1a58:
    // 0x1a1a58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a1a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a1a5c:
    // 0x1a1a5c: 0x8e8209d0  lw          $v0, 0x9D0($s4)
    ctx->pc = 0x1a1a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2512)));
label_1a1a60:
    // 0x1a1a60: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1a1a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a1a64:
    // 0x1a1a64: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1a1a64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1a1a68:
    // 0x1a1a68: 0x8e8209d4  lw          $v0, 0x9D4($s4)
    ctx->pc = 0x1a1a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2516)));
label_1a1a6c:
    // 0x1a1a6c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1a1a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1a1a70:
    // 0x1a1a70: 0x8e8209d8  lw          $v0, 0x9D8($s4)
    ctx->pc = 0x1a1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2520)));
label_1a1a74:
    // 0x1a1a74: 0xc063e08  jal         func_18F820
label_1a1a78:
    if (ctx->pc == 0x1A1A78u) {
        ctx->pc = 0x1A1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A74u;
        // 0x1a1a78: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1A7Cu;
        goto label_1a1a7c;
    }
    ctx->pc = 0x1A1A74u;
    SET_GPR_U32(ctx, 31, 0x1A1A7Cu);
    ctx->pc = 0x1A1A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A74u;
    // 0x1a1a78: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A1A74u, 0x1A1A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A7Cu;
label_1a1a7c:
    // 0x1a1a7c: 0x8e830c78  lw          $v1, 0xC78($s4)
    ctx->pc = 0x1a1a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3192)));
label_1a1a80:
    // 0x1a1a80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a1a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1a84:
    // 0x1a1a84: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1a1a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1a1a88:
    // 0x1a1a88: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a1a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a1a8c:
    // 0x1a1a8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a1a90:
    // 0x1a1a90: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a1a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a1a94:
    // 0x1a1a94: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a1a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a1a98:
    // 0x1a1a98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1a98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1a9c:
    // 0x1a1a9c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a1a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a1aa0:
    // 0x1a1aa0: 0x320f809  jalr        $t9
label_1a1aa4:
    if (ctx->pc == 0x1A1AA4u) {
        ctx->pc = 0x1A1AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AA0u;
        // 0x1a1aa4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1AA8u;
        goto label_1a1aa8;
    }
    ctx->pc = 0x1A1AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1AA8u);
        ctx->pc = 0x1A1AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AA0u;
        // 0x1a1aa4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1AA0u, 0x1A1AA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1AA8u;
label_1a1aa8:
    // 0x1a1aa8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a1aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a1aac:
    // 0x1a1aac: 0x10000055  b           . + 4 + (0x55 << 2)
label_1a1ab0:
    if (ctx->pc == 0x1A1AB0u) {
        ctx->pc = 0x1A1AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AACu;
        // 0x1a1ab0: 0xae830c7c  sw          $v1, 0xC7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1AB4u;
        goto label_1a1ab4;
    }
    ctx->pc = 0x1A1AACu;
    {
        const bool branch_taken_0x1a1aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AACu;
        // 0x1a1ab0: 0xae830c7c  sw          $v1, 0xC7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1aac) {
            ctx->pc = 0x1A1C04u;
            goto label_1a1c04;
        }
    }
    ctx->pc = 0x1A1AB4u;
label_1a1ab4:
    // 0x1a1ab4: 0x8e830678  lw          $v1, 0x678($s4)
    ctx->pc = 0x1a1ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
label_1a1ab8:
    // 0x1a1ab8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a1ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a1abc:
    // 0x1a1abc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1a1ac0:
    if (ctx->pc == 0x1A1AC0u) {
        ctx->pc = 0x1A1AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1ABCu;
        // 0x1a1ac0: 0x8f848714  lw          $a0, -0x78EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1AC4u;
        goto label_1a1ac4;
    }
    ctx->pc = 0x1A1ABCu;
    {
        const bool branch_taken_0x1a1abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A1AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1ABCu;
        // 0x1a1ac0: 0x8f848714  lw          $a0, -0x78EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1abc) {
            ctx->pc = 0x1A1AE4u;
            goto label_1a1ae4;
        }
    }
    ctx->pc = 0x1A1AC4u;
label_1a1ac4:
    // 0x1a1ac4: 0x8e8206a8  lw          $v0, 0x6A8($s4)
    ctx->pc = 0x1a1ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1704)));
label_1a1ac8:
    // 0x1a1ac8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a1acc:
    if (ctx->pc == 0x1A1ACCu) {
        ctx->pc = 0x1A1ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AC8u;
        // 0x1a1acc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1AD0u;
        goto label_1a1ad0;
    }
    ctx->pc = 0x1A1AC8u;
    {
        const bool branch_taken_0x1a1ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AC8u;
        // 0x1a1acc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ac8) {
            ctx->pc = 0x1A1ADCu;
            goto label_1a1adc;
        }
    }
    ctx->pc = 0x1A1AD0u;
label_1a1ad0:
    // 0x1a1ad0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a1ad4:
    if (ctx->pc == 0x1A1AD4u) {
        ctx->pc = 0x1A1AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AD0u;
        // 0x1a1ad4: 0x8c480010  lw          $t0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1AD8u;
        goto label_1a1ad8;
    }
    ctx->pc = 0x1A1AD0u;
    {
        const bool branch_taken_0x1a1ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AD0u;
        // 0x1a1ad4: 0x8c480010  lw          $t0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ad0) {
            ctx->pc = 0x1A1ADCu;
            goto label_1a1adc;
        }
    }
    ctx->pc = 0x1A1AD8u;
label_1a1ad8:
    // 0x1a1ad8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1a1ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a1adc:
    // 0x1a1adc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a1ae0:
    if (ctx->pc == 0x1A1AE0u) {
        ctx->pc = 0x1A1AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1ADCu;
        // 0x1a1ae0: 0xdc852818  ld          $a1, 0x2818($a0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 10264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1AE4u;
        goto label_1a1ae4;
    }
    ctx->pc = 0x1A1ADCu;
    {
        const bool branch_taken_0x1a1adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1ADCu;
        // 0x1a1ae0: 0xdc852818  ld          $a1, 0x2818($a0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 10264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1adc) {
            ctx->pc = 0x1A1B00u;
            goto label_1a1b00;
        }
    }
    ctx->pc = 0x1A1AE4u;
label_1a1ae4:
    // 0x1a1ae4: 0x8e8206a8  lw          $v0, 0x6A8($s4)
    ctx->pc = 0x1a1ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1704)));
label_1a1ae8:
    // 0x1a1ae8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a1aec:
    if (ctx->pc == 0x1A1AECu) {
        ctx->pc = 0x1A1AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AE8u;
        // 0x1a1aec: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1AF0u;
        goto label_1a1af0;
    }
    ctx->pc = 0x1A1AE8u;
    {
        const bool branch_taken_0x1a1ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AE8u;
        // 0x1a1aec: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ae8) {
            ctx->pc = 0x1A1AFCu;
            goto label_1a1afc;
        }
    }
    ctx->pc = 0x1A1AF0u;
label_1a1af0:
    // 0x1a1af0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a1af4:
    if (ctx->pc == 0x1A1AF4u) {
        ctx->pc = 0x1A1AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AF0u;
        // 0x1a1af4: 0x8c480014  lw          $t0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1AF8u;
        goto label_1a1af8;
    }
    ctx->pc = 0x1A1AF0u;
    {
        const bool branch_taken_0x1a1af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AF0u;
        // 0x1a1af4: 0x8c480014  lw          $t0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1af0) {
            ctx->pc = 0x1A1AFCu;
            goto label_1a1afc;
        }
    }
    ctx->pc = 0x1A1AF8u;
label_1a1af8:
    // 0x1a1af8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1a1af8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a1afc:
    // 0x1a1afc: 0xdc852818  ld          $a1, 0x2818($a0)
    ctx->pc = 0x1a1afcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 10264)));
label_1a1b00:
    // 0x1a1b00: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1a1b00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a1b04:
    // 0x1a1b04: 0xde8606b8  ld          $a2, 0x6B8($s4)
    ctx->pc = 0x1a1b04u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 20), 1720)));
label_1a1b08:
    // 0x1a1b08: 0xc0696fc  jal         func_1A5BF0
label_1a1b0c:
    if (ctx->pc == 0x1A1B0Cu) {
        ctx->pc = 0x1A1B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B08u;
        // 0x1a1b0c: 0x268408c0  addiu       $a0, $s4, 0x8C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B10u;
        goto label_1a1b10;
    }
    ctx->pc = 0x1A1B08u;
    SET_GPR_U32(ctx, 31, 0x1A1B10u);
    ctx->pc = 0x1A1B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B08u;
    // 0x1a1b0c: 0x268408c0  addiu       $a0, $s4, 0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5BF0u, 0x1A1B08u, 0x1A1B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B10u;
label_1a1b10:
    // 0x1a1b10: 0x8e8506b8  lw          $a1, 0x6B8($s4)
    ctx->pc = 0x1a1b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1720)));
label_1a1b14:
    // 0x1a1b14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a1b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a1b18:
    // 0x1a1b18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a1b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1b1c:
    // 0x1a1b1c: 0xc064b08  jal         func_192C20
label_1a1b20:
    if (ctx->pc == 0x1A1B20u) {
        ctx->pc = 0x1A1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B1Cu;
        // 0x1a1b20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B24u;
        goto label_1a1b24;
    }
    ctx->pc = 0x1A1B1Cu;
    SET_GPR_U32(ctx, 31, 0x1A1B24u);
    ctx->pc = 0x1A1B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B1Cu;
    // 0x1a1b20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192C20u, 0x1A1B1Cu, 0x1A1B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B24u;
label_1a1b24:
    // 0x1a1b24: 0x8e8206a8  lw          $v0, 0x6A8($s4)
    ctx->pc = 0x1a1b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1704)));
label_1a1b28:
    // 0x1a1b28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a1b2c:
    if (ctx->pc == 0x1A1B2Cu) {
        ctx->pc = 0x1A1B30u;
        goto label_1a1b30;
    }
    ctx->pc = 0x1A1B28u;
    {
        const bool branch_taken_0x1a1b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1b28) {
            ctx->pc = 0x1A1B3Cu;
            goto label_1a1b3c;
        }
    }
    ctx->pc = 0x1A1B30u;
label_1a1b30:
    // 0x1a1b30: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1a1b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a1b34:
    // 0x1a1b34: 0xc064fb8  jal         func_193EE0
label_1a1b38:
    if (ctx->pc == 0x1A1B38u) {
        ctx->pc = 0x1A1B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B34u;
        // 0x1a1b38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B3Cu;
        goto label_1a1b3c;
    }
    ctx->pc = 0x1A1B34u;
    SET_GPR_U32(ctx, 31, 0x1A1B3Cu);
    ctx->pc = 0x1A1B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B34u;
    // 0x1a1b38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A1B34u, 0x1A1B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B3Cu;
label_1a1b3c:
    // 0x1a1b3c: 0x8e860678  lw          $a2, 0x678($s4)
    ctx->pc = 0x1a1b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
label_1a1b40:
    // 0x1a1b40: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a1b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1a1b44:
    // 0x1a1b44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a1b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a1b48:
    // 0x1a1b48: 0xc064a88  jal         func_192A20
label_1a1b4c:
    if (ctx->pc == 0x1A1B4Cu) {
        ctx->pc = 0x1A1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B48u;
        // 0x1a1b4c: 0x24a50408  addiu       $a1, $a1, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B50u;
        goto label_1a1b50;
    }
    ctx->pc = 0x1A1B48u;
    SET_GPR_U32(ctx, 31, 0x1A1B50u);
    ctx->pc = 0x1A1B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B48u;
    // 0x1a1b4c: 0x24a50408  addiu       $a1, $a1, 0x408 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A20u, 0x1A1B48u, 0x1A1B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B50u;
label_1a1b50:
    // 0x1a1b50: 0xc063e14  jal         func_18F850
label_1a1b54:
    if (ctx->pc == 0x1A1B54u) {
        ctx->pc = 0x1A1B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B50u;
        // 0x1a1b54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B58u;
        goto label_1a1b58;
    }
    ctx->pc = 0x1A1B50u;
    SET_GPR_U32(ctx, 31, 0x1A1B58u);
    ctx->pc = 0x1A1B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B50u;
    // 0x1a1b54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A1B50u, 0x1A1B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B58u;
label_1a1b58:
    // 0x1a1b58: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1a1b5c:
    if (ctx->pc == 0x1A1B5Cu) {
        ctx->pc = 0x1A1B60u;
        goto label_1a1b60;
    }
    ctx->pc = 0x1A1B58u;
    {
        const bool branch_taken_0x1a1b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1b58) {
            ctx->pc = 0x1A1C04u;
            goto label_1a1c04;
        }
    }
    ctx->pc = 0x1A1B60u;
label_1a1b60:
    // 0x1a1b60: 0x268408c0  addiu       $a0, $s4, 0x8C0
    ctx->pc = 0x1a1b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2240));
label_1a1b64:
    // 0x1a1b64: 0xc06977c  jal         func_1A5DF0
label_1a1b68:
    if (ctx->pc == 0x1A1B68u) {
        ctx->pc = 0x1A1B6Cu;
        goto label_1a1b6c;
    }
    ctx->pc = 0x1A1B64u;
    SET_GPR_U32(ctx, 31, 0x1A1B6Cu);
    ctx->pc = 0x1A5DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5DF0u, 0x1A1B64u, 0x1A1B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B6Cu;
label_1a1b6c:
    // 0x1a1b6c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_1a1b70:
    if (ctx->pc == 0x1A1B70u) {
        ctx->pc = 0x1A1B74u;
        goto label_1a1b74;
    }
    ctx->pc = 0x1A1B6Cu;
    {
        const bool branch_taken_0x1a1b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1b6c) {
            ctx->pc = 0x1A1C04u;
            goto label_1a1c04;
        }
    }
    ctx->pc = 0x1A1B74u;
label_1a1b74:
    // 0x1a1b74: 0xc063e14  jal         func_18F850
label_1a1b78:
    if (ctx->pc == 0x1A1B78u) {
        ctx->pc = 0x1A1B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B74u;
        // 0x1a1b78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B7Cu;
        goto label_1a1b7c;
    }
    ctx->pc = 0x1A1B74u;
    SET_GPR_U32(ctx, 31, 0x1A1B7Cu);
    ctx->pc = 0x1A1B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B74u;
    // 0x1a1b78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A1B74u, 0x1A1B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B7Cu;
label_1a1b7c:
    // 0x1a1b7c: 0x10000021  b           . + 4 + (0x21 << 2)
label_1a1b80:
    if (ctx->pc == 0x1A1B80u) {
        ctx->pc = 0x1A1B84u;
        goto label_1a1b84;
    }
    ctx->pc = 0x1A1B7Cu;
    {
        const bool branch_taken_0x1a1b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1b7c) {
            ctx->pc = 0x1A1C04u;
            goto label_1a1c04;
        }
    }
    ctx->pc = 0x1A1B84u;
label_1a1b84:
    // 0x1a1b84: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1a1b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a1b88:
    // 0x1a1b88: 0x8c833ddc  lw          $v1, 0x3DDC($a0)
    ctx->pc = 0x1a1b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15836)));
label_1a1b8c:
    // 0x1a1b8c: 0x8c823dd8  lw          $v0, 0x3DD8($a0)
    ctx->pc = 0x1a1b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15832)));
label_1a1b90:
    // 0x1a1b90: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1a1b94:
    if (ctx->pc == 0x1A1B94u) {
        ctx->pc = 0x1A1B98u;
        goto label_1a1b98;
    }
    ctx->pc = 0x1A1B90u;
    {
        const bool branch_taken_0x1a1b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a1b90) {
            ctx->pc = 0x1A1BA8u;
            goto label_1a1ba8;
        }
    }
    ctx->pc = 0x1A1B98u;
label_1a1b98:
    // 0x1a1b98: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a1b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a1b9c:
    // 0x1a1b9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a1b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a1ba0:
    // 0x1a1ba0: 0x8c423cd8  lw          $v0, 0x3CD8($v0)
    ctx->pc = 0x1a1ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_1a1ba4:
    // 0x1a1ba4: 0xa04001f9  sb          $zero, 0x1F9($v0)
    ctx->pc = 0x1a1ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 505), (uint8_t)GPR_U32(ctx, 0));
label_1a1ba8:
    // 0x1a1ba8: 0x8e840670  lw          $a0, 0x670($s4)
    ctx->pc = 0x1a1ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_1a1bac:
    // 0x1a1bac: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1a1bb0:
    if (ctx->pc == 0x1A1BB0u) {
        ctx->pc = 0x1A1BB4u;
        goto label_1a1bb4;
    }
    ctx->pc = 0x1A1BACu;
    {
        const bool branch_taken_0x1a1bac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1bac) {
            ctx->pc = 0x1A1BD0u;
            goto label_1a1bd0;
        }
    }
    ctx->pc = 0x1A1BB4u;
label_1a1bb4:
    // 0x1a1bb4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a1bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a1bb8:
    // 0x1a1bb8: 0xc067f68  jal         func_19FDA0
label_1a1bbc:
    if (ctx->pc == 0x1A1BBCu) {
        ctx->pc = 0x1A1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BB8u;
        // 0x1a1bbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1BC0u;
        goto label_1a1bc0;
    }
    ctx->pc = 0x1A1BB8u;
    SET_GPR_U32(ctx, 31, 0x1A1BC0u);
    ctx->pc = 0x1A1BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1BB8u;
    // 0x1a1bbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1A1BB8u, 0x1A1BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1BC0u;
label_1a1bc0:
    // 0x1a1bc0: 0x8e840670  lw          $a0, 0x670($s4)
    ctx->pc = 0x1a1bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_1a1bc4:
    // 0x1a1bc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a1bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1bc8:
    // 0x1a1bc8: 0xc067f68  jal         func_19FDA0
label_1a1bcc:
    if (ctx->pc == 0x1A1BCCu) {
        ctx->pc = 0x1A1BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BC8u;
        // 0x1a1bcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1BD0u;
        goto label_1a1bd0;
    }
    ctx->pc = 0x1A1BC8u;
    SET_GPR_U32(ctx, 31, 0x1A1BD0u);
    ctx->pc = 0x1A1BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1BC8u;
    // 0x1a1bcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1A1BC8u, 0x1A1BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1BD0u;
label_1a1bd0:
    // 0x1a1bd0: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1a1bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1a1bd4:
    // 0x1a1bd4: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1a1bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1a1bd8:
    // 0x1a1bd8: 0xc06bd9c  jal         func_1AF670
label_1a1bdc:
    if (ctx->pc == 0x1A1BDCu) {
        ctx->pc = 0x1A1BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BD8u;
        // 0x1a1bdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1BE0u;
        goto label_1a1be0;
    }
    ctx->pc = 0x1A1BD8u;
    SET_GPR_U32(ctx, 31, 0x1A1BE0u);
    ctx->pc = 0x1A1BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1BD8u;
    // 0x1a1bdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF670u, 0x1A1BD8u, 0x1A1BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1BE0u;
label_1a1be0:
    // 0x1a1be0: 0x1280017a  beqz        $s4, . + 4 + (0x17A << 2)
label_1a1be4:
    if (ctx->pc == 0x1A1BE4u) {
        ctx->pc = 0x1A1BE8u;
        goto label_1a1be8;
    }
    ctx->pc = 0x1A1BE0u;
    {
        const bool branch_taken_0x1a1be0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1be0) {
            ctx->pc = 0x1A21CCu;
            goto label_1a21cc;
        }
    }
    ctx->pc = 0x1A1BE8u;
label_1a1be8:
    // 0x1a1be8: 0x8e99031c  lw          $t9, 0x31C($s4)
    ctx->pc = 0x1a1be8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 796)));
label_1a1bec:
    // 0x1a1bec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a1becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a1bf0:
    // 0x1a1bf0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a1bf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a1bf4:
    // 0x1a1bf4: 0x320f809  jalr        $t9
label_1a1bf8:
    if (ctx->pc == 0x1A1BF8u) {
        ctx->pc = 0x1A1BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BF4u;
        // 0x1a1bf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1BFCu;
        goto label_1a1bfc;
    }
    ctx->pc = 0x1A1BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1BFCu);
        ctx->pc = 0x1A1BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BF4u;
        // 0x1a1bf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1BF4u, 0x1A1BFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1BFCu;
label_1a1bfc:
    // 0x1a1bfc: 0x10000174  b           . + 4 + (0x174 << 2)
label_1a1c00:
    if (ctx->pc == 0x1A1C00u) {
        ctx->pc = 0x1A1C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BFCu;
        // 0x1a1c00: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1C04u;
        goto label_1a1c04;
    }
    ctx->pc = 0x1A1BFCu;
    {
        const bool branch_taken_0x1a1bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BFCu;
        // 0x1a1c00: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1bfc) {
            ctx->pc = 0x1A21D0u;
            goto label_1a21d0;
        }
    }
    ctx->pc = 0x1A1C04u;
label_1a1c04:
    // 0x1a1c04: 0x9283068c  lbu         $v1, 0x68C($s4)
    ctx->pc = 0x1a1c04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1676)));
label_1a1c08:
    // 0x1a1c08: 0x10600170  beqz        $v1, . + 4 + (0x170 << 2)
label_1a1c0c:
    if (ctx->pc == 0x1A1C0Cu) {
        ctx->pc = 0x1A1C10u;
        goto label_1a1c10;
    }
    ctx->pc = 0x1A1C08u;
    {
        const bool branch_taken_0x1a1c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c08) {
            ctx->pc = 0x1A21CCu;
            goto label_1a21cc;
        }
    }
    ctx->pc = 0x1A1C10u;
label_1a1c10:
    // 0x1a1c10: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x1a1c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a1c14:
    // 0x1a1c14: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1a1c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_1a1c18:
    // 0x1a1c18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a1c1c:
    // 0x1a1c1c: 0x8e830680  lw          $v1, 0x680($s4)
    ctx->pc = 0x1a1c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1664)));
label_1a1c20:
    // 0x1a1c20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a1c20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a1c24:
    // 0x1a1c24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a1c24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a1c28:
    // 0x1a1c28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a1c28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a1c2c:
    // 0x1a1c2c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a1c2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1a1c30:
    // 0x1a1c30: 0x0  nop
    ctx->pc = 0x1a1c30u;
    // NOP
label_1a1c34:
    // 0x1a1c34: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1a1c34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a1c38:
    // 0x1a1c38: 0x102000d7  beqz        $at, . + 4 + (0xD7 << 2)
label_1a1c3c:
    if (ctx->pc == 0x1A1C3Cu) {
        ctx->pc = 0x1A1C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C38u;
        // 0x1a1c3c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1C40u;
        goto label_1a1c40;
    }
    ctx->pc = 0x1A1C38u;
    {
        const bool branch_taken_0x1a1c38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C38u;
        // 0x1a1c3c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c38) {
            ctx->pc = 0x1A1F98u;
            goto label_1a1f98;
        }
    }
    ctx->pc = 0x1A1C40u;
label_1a1c40:
    // 0x1a1c40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a1c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a1c44:
    // 0x1a1c44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a1c48:
    // 0x1a1c48: 0x0  nop
    ctx->pc = 0x1a1c48u;
    // NOP
label_1a1c4c:
    // 0x1a1c4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a1c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a1c50:
    // 0x1a1c50: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a1c50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a1c54:
    // 0x1a1c54: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a1c54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1a1c58:
    // 0x1a1c58: 0x0  nop
    ctx->pc = 0x1a1c58u;
    // NOP
label_1a1c5c:
    // 0x1a1c5c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1a1c5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a1c60:
    // 0x1a1c60: 0x102000cc  beqz        $at, . + 4 + (0xCC << 2)
label_1a1c64:
    if (ctx->pc == 0x1A1C64u) {
        ctx->pc = 0x1A1C68u;
        goto label_1a1c68;
    }
    ctx->pc = 0x1A1C60u;
    {
        const bool branch_taken_0x1a1c60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c60) {
            ctx->pc = 0x1A1F94u;
            goto label_1a1f94;
        }
    }
    ctx->pc = 0x1A1C68u;
label_1a1c68:
    // 0x1a1c68: 0x8e830c70  lw          $v1, 0xC70($s4)
    ctx->pc = 0x1a1c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3184)));
label_1a1c6c:
    // 0x1a1c6c: 0x8e820c74  lw          $v0, 0xC74($s4)
    ctx->pc = 0x1a1c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3188)));
label_1a1c70:
    // 0x1a1c70: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1a1c70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a1c74:
    // 0x1a1c74: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_1a1c78:
    if (ctx->pc == 0x1A1C78u) {
        ctx->pc = 0x1A1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C74u;
        // 0x1a1c78: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1C7Cu;
        goto label_1a1c7c;
    }
    ctx->pc = 0x1A1C74u;
    {
        const bool branch_taken_0x1a1c74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C74u;
        // 0x1a1c78: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c74) {
            ctx->pc = 0x1A1C90u;
            goto label_1a1c90;
        }
    }
    ctx->pc = 0x1A1C7Cu;
label_1a1c7c:
    // 0x1a1c7c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a1c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a1c80:
    // 0x1a1c80: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1a1c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1a1c84:
    // 0x1a1c84: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a1c88:
    if (ctx->pc == 0x1A1C88u) {
        ctx->pc = 0x1A1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C84u;
        // 0x1a1c88: 0x8c440bbc  lw          $a0, 0xBBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3004)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1C8Cu;
        goto label_1a1c8c;
    }
    ctx->pc = 0x1A1C84u;
    {
        const bool branch_taken_0x1a1c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C84u;
        // 0x1a1c88: 0x8c440bbc  lw          $a0, 0xBBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c84) {
            ctx->pc = 0x1A1C94u;
            goto label_1a1c94;
        }
    }
    ctx->pc = 0x1A1C8Cu;
label_1a1c8c:
    // 0x1a1c8c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1a1c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_1a1c90:
    // 0x1a1c90: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x1a1c90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1a1c94:
    // 0x1a1c94: 0x8e8306a0  lw          $v1, 0x6A0($s4)
    ctx->pc = 0x1a1c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1696)));
label_1a1c98:
    // 0x1a1c98: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1a1c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a1c9c:
    // 0x1a1c9c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1a1c9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a1ca0:
    // 0x1a1ca0: 0x102000bc  beqz        $at, . + 4 + (0xBC << 2)
label_1a1ca4:
    if (ctx->pc == 0x1A1CA4u) {
        ctx->pc = 0x1A1CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CA0u;
        // 0x1a1ca4: 0xae8206a0  sw          $v0, 0x6A0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CA8u;
        goto label_1a1ca8;
    }
    ctx->pc = 0x1A1CA0u;
    {
        const bool branch_taken_0x1a1ca0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CA0u;
        // 0x1a1ca4: 0xae8206a0  sw          $v0, 0x6A0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ca0) {
            ctx->pc = 0x1A1F94u;
            goto label_1a1f94;
        }
    }
    ctx->pc = 0x1A1CA8u;
label_1a1ca8:
    // 0x1a1ca8: 0xc045ae8  jal         func_116BA0
label_1a1cac:
    if (ctx->pc == 0x1A1CACu) {
        ctx->pc = 0x1A1CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CA8u;
        // 0x1a1cac: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CB0u;
        goto label_1a1cb0;
    }
    ctx->pc = 0x1A1CA8u;
    SET_GPR_U32(ctx, 31, 0x1A1CB0u);
    ctx->pc = 0x1A1CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1CA8u;
    // 0x1a1cac: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116BA0u, 0x1A1CA8u, 0x1A1CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1CB0u;
label_1a1cb0:
    // 0x1a1cb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a1cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1cb4:
    // 0x1a1cb4: 0x8e8206b0  lw          $v0, 0x6B0($s4)
    ctx->pc = 0x1a1cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1712)));
label_1a1cb8:
    // 0x1a1cb8: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_1a1cbc:
    if (ctx->pc == 0x1A1CBCu) {
        ctx->pc = 0x1A1CC0u;
        goto label_1a1cc0;
    }
    ctx->pc = 0x1A1CB8u;
    {
        const bool branch_taken_0x1a1cb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a1cb8) {
            ctx->pc = 0x1A1CD4u;
            goto label_1a1cd4;
        }
    }
    ctx->pc = 0x1A1CC0u;
label_1a1cc0:
    // 0x1a1cc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a1cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a1cc4:
    // 0x1a1cc4: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x1a1cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1a1cc8:
    // 0x1a1cc8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1a1ccc:
    if (ctx->pc == 0x1A1CCCu) {
        ctx->pc = 0x1A1CD0u;
        goto label_1a1cd0;
    }
    ctx->pc = 0x1A1CC8u;
    {
        const bool branch_taken_0x1a1cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1cc8) {
            ctx->pc = 0x1A1CD4u;
            goto label_1a1cd4;
        }
    }
    ctx->pc = 0x1A1CD0u;
label_1a1cd0:
    // 0x1a1cd0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a1cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1cd4:
    // 0x1a1cd4: 0xae9006b0  sw          $s0, 0x6B0($s4)
    ctx->pc = 0x1a1cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1712), GPR_U32(ctx, 16));
label_1a1cd8:
    // 0x1a1cd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a1cdc:
    // 0x1a1cdc: 0x8e830678  lw          $v1, 0x678($s4)
    ctx->pc = 0x1a1cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
label_1a1ce0:
    // 0x1a1ce0: 0x1062006f  beq         $v1, $v0, . + 4 + (0x6F << 2)
label_1a1ce4:
    if (ctx->pc == 0x1A1CE4u) {
        ctx->pc = 0x1A1CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CE0u;
        // 0x1a1ce4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CE8u;
        goto label_1a1ce8;
    }
    ctx->pc = 0x1A1CE0u;
    {
        const bool branch_taken_0x1a1ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A1CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CE0u;
        // 0x1a1ce4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ce0) {
            ctx->pc = 0x1A1EA0u;
            goto label_1a1ea0;
        }
    }
    ctx->pc = 0x1A1CE8u;
label_1a1ce8:
    // 0x1a1ce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1cec:
    // 0x1a1cec: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
label_1a1cf0:
    if (ctx->pc == 0x1A1CF0u) {
        ctx->pc = 0x1A1CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CECu;
        // 0x1a1cf0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CF4u;
        goto label_1a1cf4;
    }
    ctx->pc = 0x1A1CECu;
    {
        const bool branch_taken_0x1a1cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A1CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CECu;
        // 0x1a1cf0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1cec) {
            ctx->pc = 0x1A1DC8u;
            goto label_1a1dc8;
        }
    }
    ctx->pc = 0x1A1CF4u;
label_1a1cf4:
    // 0x1a1cf4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1a1cf8:
    if (ctx->pc == 0x1A1CF8u) {
        ctx->pc = 0x1A1CFCu;
        goto label_1a1cfc;
    }
    ctx->pc = 0x1A1CF4u;
    {
        const bool branch_taken_0x1a1cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1cf4) {
            ctx->pc = 0x1A1D04u;
            goto label_1a1d04;
        }
    }
    ctx->pc = 0x1A1CFCu;
label_1a1cfc:
    // 0x1a1cfc: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_1a1d00:
    if (ctx->pc == 0x1A1D00u) {
        ctx->pc = 0x1A1D04u;
        goto label_1a1d04;
    }
    ctx->pc = 0x1A1CFCu;
    {
        const bool branch_taken_0x1a1cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1cfc) {
            ctx->pc = 0x1A1F88u;
            goto label_1a1f88;
        }
    }
    ctx->pc = 0x1A1D04u;
label_1a1d04:
    // 0x1a1d04: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a1d04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d08:
    // 0x1a1d08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d0c:
    // 0x1a1d0c: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x1a1d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1a1d10:
    // 0x1a1d10: 0x904209fc  lbu         $v0, 0x9FC($v0)
    ctx->pc = 0x1a1d10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2556)));
label_1a1d14:
    // 0x1a1d14: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_1a1d18:
    if (ctx->pc == 0x1A1D18u) {
        ctx->pc = 0x1A1D1Cu;
        goto label_1a1d1c;
    }
    ctx->pc = 0x1A1D14u;
    {
        const bool branch_taken_0x1a1d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1d14) {
            ctx->pc = 0x1A1DACu;
            goto label_1a1dac;
        }
    }
    ctx->pc = 0x1A1D1Cu;
label_1a1d1c:
    // 0x1a1d1c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a1d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1a1d20:
    // 0x1a1d20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a1d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d24:
    // 0x1a1d24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a1d28:
    // 0x1a1d28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a1d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d2c:
    // 0x1a1d2c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a1d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1a1d30:
    // 0x1a1d30: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1a1d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1a1d34:
    // 0x1a1d34: 0x8c4409e0  lw          $a0, 0x9E0($v0)
    ctx->pc = 0x1a1d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2528)));
label_1a1d38:
    // 0x1a1d38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1d38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1d3c:
    // 0x1a1d3c: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x1a1d3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_1a1d40:
    // 0x1a1d40: 0x320f809  jalr        $t9
label_1a1d44:
    if (ctx->pc == 0x1A1D44u) {
        ctx->pc = 0x1A1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D40u;
        // 0x1a1d44: 0x245009dc  addiu       $s0, $v0, 0x9DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D48u;
        goto label_1a1d48;
    }
    ctx->pc = 0x1A1D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1D48u);
        ctx->pc = 0x1A1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D40u;
        // 0x1a1d44: 0x245009dc  addiu       $s0, $v0, 0x9DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1D40u, 0x1A1D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1D48u;
label_1a1d48:
    // 0x1a1d48: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a1d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a1d4c:
    // 0x1a1d4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1d4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1d50:
    // 0x1a1d50: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x1a1d50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_1a1d54:
    // 0x1a1d54: 0x320f809  jalr        $t9
label_1a1d58:
    if (ctx->pc == 0x1A1D58u) {
        ctx->pc = 0x1A1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D54u;
        // 0x1a1d58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D5Cu;
        goto label_1a1d5c;
    }
    ctx->pc = 0x1A1D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1D5Cu);
        ctx->pc = 0x1A1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D54u;
        // 0x1a1d58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1D54u, 0x1A1D5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1D5Cu;
label_1a1d5c:
    // 0x1a1d5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1d60:
    // 0x1a1d60: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x1a1d60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
label_1a1d64:
    // 0x1a1d64: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a1d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a1d68:
    // 0x1a1d68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1d68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1d6c:
    // 0x1a1d6c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a1d6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a1d70:
    // 0x1a1d70: 0x320f809  jalr        $t9
label_1a1d74:
    if (ctx->pc == 0x1A1D74u) {
        ctx->pc = 0x1A1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D70u;
        // 0x1a1d74: 0x92050020  lbu         $a1, 0x20($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D78u;
        goto label_1a1d78;
    }
    ctx->pc = 0x1A1D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1D78u);
        ctx->pc = 0x1A1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D70u;
        // 0x1a1d74: 0x92050020  lbu         $a1, 0x20($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1D70u, 0x1A1D78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1D78u;
label_1a1d78:
    // 0x1a1d78: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x1a1d78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
label_1a1d7c:
    // 0x1a1d7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a1d80:
    if (ctx->pc == 0x1A1D80u) {
        ctx->pc = 0x1A1D84u;
        goto label_1a1d84;
    }
    ctx->pc = 0x1A1D7Cu;
    {
        const bool branch_taken_0x1a1d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1d7c) {
            ctx->pc = 0x1A1D9Cu;
            goto label_1a1d9c;
        }
    }
    ctx->pc = 0x1A1D84u;
label_1a1d84:
    // 0x1a1d84: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a1d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a1d88:
    // 0x1a1d88: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a1d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a1d8c:
    // 0x1a1d8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1d8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1d90:
    // 0x1a1d90: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a1d90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a1d94:
    // 0x1a1d94: 0x320f809  jalr        $t9
label_1a1d98:
    if (ctx->pc == 0x1A1D98u) {
        ctx->pc = 0x1A1D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D94u;
        // 0x1a1d98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D9Cu;
        goto label_1a1d9c;
    }
    ctx->pc = 0x1A1D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1D9Cu);
        ctx->pc = 0x1A1D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D94u;
        // 0x1a1d98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1D94u, 0x1A1D9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1D9Cu;
label_1a1d9c:
    // 0x1a1d9c: 0x8e820690  lw          $v0, 0x690($s4)
    ctx->pc = 0x1a1d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1680)));
label_1a1da0:
    // 0x1a1da0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a1da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a1da4:
    // 0x1a1da4: 0x10000078  b           . + 4 + (0x78 << 2)
label_1a1da8:
    if (ctx->pc == 0x1A1DA8u) {
        ctx->pc = 0x1A1DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DA4u;
        // 0x1a1da8: 0xae820690  sw          $v0, 0x690($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1DACu;
        goto label_1a1dac;
    }
    ctx->pc = 0x1A1DA4u;
    {
        const bool branch_taken_0x1a1da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DA4u;
        // 0x1a1da8: 0xae820690  sw          $v0, 0x690($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1da4) {
            ctx->pc = 0x1A1F88u;
            goto label_1a1f88;
        }
    }
    ctx->pc = 0x1A1DACu;
label_1a1dac:
    // 0x1a1dac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a1dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a1db0:
    // 0x1a1db0: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x1a1db0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_1a1db4:
    // 0x1a1db4: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_1a1db8:
    if (ctx->pc == 0x1A1DB8u) {
        ctx->pc = 0x1A1DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DB4u;
        // 0x1a1db8: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1DBCu;
        goto label_1a1dbc;
    }
    ctx->pc = 0x1A1DB4u;
    {
        const bool branch_taken_0x1a1db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DB4u;
        // 0x1a1db8: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1db4) {
            ctx->pc = 0x1A1D0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1d0c;
        }
    }
    ctx->pc = 0x1A1DBCu;
label_1a1dbc:
    // 0x1a1dbc: 0x10000072  b           . + 4 + (0x72 << 2)
label_1a1dc0:
    if (ctx->pc == 0x1A1DC0u) {
        ctx->pc = 0x1A1DC4u;
        goto label_1a1dc4;
    }
    ctx->pc = 0x1A1DBCu;
    {
        const bool branch_taken_0x1a1dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1dbc) {
            ctx->pc = 0x1A1F88u;
            goto label_1a1f88;
        }
    }
    ctx->pc = 0x1A1DC4u;
label_1a1dc4:
    // 0x1a1dc4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1a1dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a1dc8:
    // 0x1a1dc8: 0xc045ae8  jal         func_116BA0
label_1a1dcc:
    if (ctx->pc == 0x1A1DCCu) {
        ctx->pc = 0x1A1DD0u;
        goto label_1a1dd0;
    }
    ctx->pc = 0x1A1DC8u;
    SET_GPR_U32(ctx, 31, 0x1A1DD0u);
    ctx->pc = 0x116BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116BA0u, 0x1A1DC8u, 0x1A1DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1DD0u;
label_1a1dd0:
    // 0x1a1dd0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1a1dd4:
    if (ctx->pc == 0x1A1DD4u) {
        ctx->pc = 0x1A1DD8u;
        goto label_1a1dd8;
    }
    ctx->pc = 0x1A1DD0u;
    {
        const bool branch_taken_0x1a1dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1dd0) {
            ctx->pc = 0x1A1DDCu;
            goto label_1a1ddc;
        }
    }
    ctx->pc = 0x1A1DD8u;
label_1a1dd8:
    // 0x1a1dd8: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x1a1dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_1a1ddc:
    // 0x1a1ddc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a1ddcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1de0:
    // 0x1a1de0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1de4:
    // 0x1a1de4: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x1a1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1a1de8:
    // 0x1a1de8: 0x904209fc  lbu         $v0, 0x9FC($v0)
    ctx->pc = 0x1a1de8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2556)));
label_1a1dec:
    // 0x1a1dec: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_1a1df0:
    if (ctx->pc == 0x1A1DF0u) {
        ctx->pc = 0x1A1DF4u;
        goto label_1a1df4;
    }
    ctx->pc = 0x1A1DECu;
    {
        const bool branch_taken_0x1a1dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1dec) {
            ctx->pc = 0x1A1E84u;
            goto label_1a1e84;
        }
    }
    ctx->pc = 0x1A1DF4u;
label_1a1df4:
    // 0x1a1df4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a1df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1a1df8:
    // 0x1a1df8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a1df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1dfc:
    // 0x1a1dfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a1e00:
    // 0x1a1e00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a1e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1e04:
    // 0x1a1e04: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1a1e08:
    // 0x1a1e08: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1a1e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1a1e0c:
    // 0x1a1e0c: 0x8c4409e0  lw          $a0, 0x9E0($v0)
    ctx->pc = 0x1a1e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2528)));
label_1a1e10:
    // 0x1a1e10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1e10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1e14:
    // 0x1a1e14: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x1a1e14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_1a1e18:
    // 0x1a1e18: 0x320f809  jalr        $t9
label_1a1e1c:
    if (ctx->pc == 0x1A1E1Cu) {
        ctx->pc = 0x1A1E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E18u;
        // 0x1a1e1c: 0x245009dc  addiu       $s0, $v0, 0x9DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E20u;
        goto label_1a1e20;
    }
    ctx->pc = 0x1A1E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1E20u);
        ctx->pc = 0x1A1E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E18u;
        // 0x1a1e1c: 0x245009dc  addiu       $s0, $v0, 0x9DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1E18u, 0x1A1E20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1E20u;
label_1a1e20:
    // 0x1a1e20: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a1e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a1e24:
    // 0x1a1e24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1e24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1e28:
    // 0x1a1e28: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x1a1e28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_1a1e2c:
    // 0x1a1e2c: 0x320f809  jalr        $t9
label_1a1e30:
    if (ctx->pc == 0x1A1E30u) {
        ctx->pc = 0x1A1E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E2Cu;
        // 0x1a1e30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E34u;
        goto label_1a1e34;
    }
    ctx->pc = 0x1A1E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1E34u);
        ctx->pc = 0x1A1E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E2Cu;
        // 0x1a1e30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1E2Cu, 0x1A1E34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1E34u;
label_1a1e34:
    // 0x1a1e34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1e38:
    // 0x1a1e38: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x1a1e38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
label_1a1e3c:
    // 0x1a1e3c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a1e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a1e40:
    // 0x1a1e40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1e40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1e44:
    // 0x1a1e44: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a1e44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a1e48:
    // 0x1a1e48: 0x320f809  jalr        $t9
label_1a1e4c:
    if (ctx->pc == 0x1A1E4Cu) {
        ctx->pc = 0x1A1E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E48u;
        // 0x1a1e4c: 0x92050020  lbu         $a1, 0x20($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E50u;
        goto label_1a1e50;
    }
    ctx->pc = 0x1A1E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1E50u);
        ctx->pc = 0x1A1E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E48u;
        // 0x1a1e4c: 0x92050020  lbu         $a1, 0x20($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1E48u, 0x1A1E50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1E50u;
label_1a1e50:
    // 0x1a1e50: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x1a1e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
label_1a1e54:
    // 0x1a1e54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a1e58:
    if (ctx->pc == 0x1A1E58u) {
        ctx->pc = 0x1A1E5Cu;
        goto label_1a1e5c;
    }
    ctx->pc = 0x1A1E54u;
    {
        const bool branch_taken_0x1a1e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e54) {
            ctx->pc = 0x1A1E74u;
            goto label_1a1e74;
        }
    }
    ctx->pc = 0x1A1E5Cu;
label_1a1e5c:
    // 0x1a1e5c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a1e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a1e60:
    // 0x1a1e60: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a1e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a1e64:
    // 0x1a1e64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1e64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1e68:
    // 0x1a1e68: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a1e68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a1e6c:
    // 0x1a1e6c: 0x320f809  jalr        $t9
label_1a1e70:
    if (ctx->pc == 0x1A1E70u) {
        ctx->pc = 0x1A1E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E6Cu;
        // 0x1a1e70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E74u;
        goto label_1a1e74;
    }
    ctx->pc = 0x1A1E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1E74u);
        ctx->pc = 0x1A1E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E6Cu;
        // 0x1a1e70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1E6Cu, 0x1A1E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1E74u;
label_1a1e74:
    // 0x1a1e74: 0x8e820690  lw          $v0, 0x690($s4)
    ctx->pc = 0x1a1e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1680)));
label_1a1e78:
    // 0x1a1e78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a1e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a1e7c:
    // 0x1a1e7c: 0x10000042  b           . + 4 + (0x42 << 2)
label_1a1e80:
    if (ctx->pc == 0x1A1E80u) {
        ctx->pc = 0x1A1E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E7Cu;
        // 0x1a1e80: 0xae820690  sw          $v0, 0x690($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E84u;
        goto label_1a1e84;
    }
    ctx->pc = 0x1A1E7Cu;
    {
        const bool branch_taken_0x1a1e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E7Cu;
        // 0x1a1e80: 0xae820690  sw          $v0, 0x690($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e7c) {
            ctx->pc = 0x1A1F88u;
            goto label_1a1f88;
        }
    }
    ctx->pc = 0x1A1E84u;
label_1a1e84:
    // 0x1a1e84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a1e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a1e88:
    // 0x1a1e88: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x1a1e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_1a1e8c:
    // 0x1a1e8c: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_1a1e90:
    if (ctx->pc == 0x1A1E90u) {
        ctx->pc = 0x1A1E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E8Cu;
        // 0x1a1e90: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E94u;
        goto label_1a1e94;
    }
    ctx->pc = 0x1A1E8Cu;
    {
        const bool branch_taken_0x1a1e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E8Cu;
        // 0x1a1e90: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e8c) {
            ctx->pc = 0x1A1DE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1de4;
        }
    }
    ctx->pc = 0x1A1E94u;
label_1a1e94:
    // 0x1a1e94: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1a1e98:
    if (ctx->pc == 0x1A1E98u) {
        ctx->pc = 0x1A1E9Cu;
        goto label_1a1e9c;
    }
    ctx->pc = 0x1A1E94u;
    {
        const bool branch_taken_0x1a1e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e94) {
            ctx->pc = 0x1A1F88u;
            goto label_1a1f88;
        }
    }
    ctx->pc = 0x1A1E9Cu;
label_1a1e9c:
    // 0x1a1e9c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1a1e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a1ea0:
    // 0x1a1ea0: 0xc045ae8  jal         func_116BA0
label_1a1ea4:
    if (ctx->pc == 0x1A1EA4u) {
        ctx->pc = 0x1A1EA8u;
        goto label_1a1ea8;
    }
    ctx->pc = 0x1A1EA0u;
    SET_GPR_U32(ctx, 31, 0x1A1EA8u);
    ctx->pc = 0x116BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116BA0u, 0x1A1EA0u, 0x1A1EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1EA8u;
label_1a1ea8:
    // 0x1a1ea8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1eac:
    // 0x1a1eac: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_1a1eb0:
    if (ctx->pc == 0x1A1EB0u) {
        ctx->pc = 0x1A1EB4u;
        goto label_1a1eb4;
    }
    ctx->pc = 0x1A1EACu;
    {
        const bool branch_taken_0x1a1eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a1eac) {
            ctx->pc = 0x1A1ECCu;
            goto label_1a1ecc;
        }
    }
    ctx->pc = 0x1A1EB4u;
label_1a1eb4:
    // 0x1a1eb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a1eb8:
    if (ctx->pc == 0x1A1EB8u) {
        ctx->pc = 0x1A1EBCu;
        goto label_1a1ebc;
    }
    ctx->pc = 0x1A1EB4u;
    {
        const bool branch_taken_0x1a1eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1eb4) {
            ctx->pc = 0x1A1EC4u;
            goto label_1a1ec4;
        }
    }
    ctx->pc = 0x1A1EBCu;
label_1a1ebc:
    // 0x1a1ebc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a1ec0:
    if (ctx->pc == 0x1A1EC0u) {
        ctx->pc = 0x1A1EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1EBCu;
        // 0x1a1ec0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1EC4u;
        goto label_1a1ec4;
    }
    ctx->pc = 0x1A1EBCu;
    {
        const bool branch_taken_0x1a1ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1EBCu;
        // 0x1a1ec0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ebc) {
            ctx->pc = 0x1A1ED4u;
            goto label_1a1ed4;
        }
    }
    ctx->pc = 0x1A1EC4u;
label_1a1ec4:
    // 0x1a1ec4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a1ec8:
    if (ctx->pc == 0x1A1EC8u) {
        ctx->pc = 0x1A1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1EC4u;
        // 0x1a1ec8: 0x2610000a  addiu       $s0, $s0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1ECCu;
        goto label_1a1ecc;
    }
    ctx->pc = 0x1A1EC4u;
    {
        const bool branch_taken_0x1a1ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1EC4u;
        // 0x1a1ec8: 0x2610000a  addiu       $s0, $s0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ec4) {
            ctx->pc = 0x1A1ED0u;
            goto label_1a1ed0;
        }
    }
    ctx->pc = 0x1A1ECCu;
label_1a1ecc:
    // 0x1a1ecc: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x1a1eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_1a1ed0:
    // 0x1a1ed0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a1ed0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1ed4:
    // 0x1a1ed4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1ed8:
    // 0x1a1ed8: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x1a1ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1a1edc:
    // 0x1a1edc: 0x904209fc  lbu         $v0, 0x9FC($v0)
    ctx->pc = 0x1a1edcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2556)));
label_1a1ee0:
    // 0x1a1ee0: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_1a1ee4:
    if (ctx->pc == 0x1A1EE4u) {
        ctx->pc = 0x1A1EE8u;
        goto label_1a1ee8;
    }
    ctx->pc = 0x1A1EE0u;
    {
        const bool branch_taken_0x1a1ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1ee0) {
            ctx->pc = 0x1A1F78u;
            goto label_1a1f78;
        }
    }
    ctx->pc = 0x1A1EE8u;
label_1a1ee8:
    // 0x1a1ee8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1a1eec:
    // 0x1a1eec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a1eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1ef0:
    // 0x1a1ef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a1ef4:
    // 0x1a1ef4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a1ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1ef8:
    // 0x1a1ef8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a1ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1a1efc:
    // 0x1a1efc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1a1efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1a1f00:
    // 0x1a1f00: 0x8c4409e0  lw          $a0, 0x9E0($v0)
    ctx->pc = 0x1a1f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2528)));
label_1a1f04:
    // 0x1a1f04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1f04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1f08:
    // 0x1a1f08: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x1a1f08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_1a1f0c:
    // 0x1a1f0c: 0x320f809  jalr        $t9
label_1a1f10:
    if (ctx->pc == 0x1A1F10u) {
        ctx->pc = 0x1A1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F0Cu;
        // 0x1a1f10: 0x245009dc  addiu       $s0, $v0, 0x9DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1F14u;
        goto label_1a1f14;
    }
    ctx->pc = 0x1A1F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1F14u);
        ctx->pc = 0x1A1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F0Cu;
        // 0x1a1f10: 0x245009dc  addiu       $s0, $v0, 0x9DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1F0Cu, 0x1A1F14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1F14u;
label_1a1f14:
    // 0x1a1f14: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a1f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a1f18:
    // 0x1a1f18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1f18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1f1c:
    // 0x1a1f1c: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x1a1f1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_1a1f20:
    // 0x1a1f20: 0x320f809  jalr        $t9
label_1a1f24:
    if (ctx->pc == 0x1A1F24u) {
        ctx->pc = 0x1A1F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F20u;
        // 0x1a1f24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1F28u;
        goto label_1a1f28;
    }
    ctx->pc = 0x1A1F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1F28u);
        ctx->pc = 0x1A1F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F20u;
        // 0x1a1f24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1F20u, 0x1A1F28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1F28u;
label_1a1f28:
    // 0x1a1f28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1f2c:
    // 0x1a1f2c: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x1a1f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
label_1a1f30:
    // 0x1a1f30: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a1f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a1f34:
    // 0x1a1f34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1f34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1f38:
    // 0x1a1f38: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a1f38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a1f3c:
    // 0x1a1f3c: 0x320f809  jalr        $t9
label_1a1f40:
    if (ctx->pc == 0x1A1F40u) {
        ctx->pc = 0x1A1F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F3Cu;
        // 0x1a1f40: 0x92050020  lbu         $a1, 0x20($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1F44u;
        goto label_1a1f44;
    }
    ctx->pc = 0x1A1F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1F44u);
        ctx->pc = 0x1A1F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F3Cu;
        // 0x1a1f40: 0x92050020  lbu         $a1, 0x20($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1F3Cu, 0x1A1F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1F44u;
label_1a1f44:
    // 0x1a1f44: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x1a1f44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
label_1a1f48:
    // 0x1a1f48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a1f4c:
    if (ctx->pc == 0x1A1F4Cu) {
        ctx->pc = 0x1A1F50u;
        goto label_1a1f50;
    }
    ctx->pc = 0x1A1F48u;
    {
        const bool branch_taken_0x1a1f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1f48) {
            ctx->pc = 0x1A1F68u;
            goto label_1a1f68;
        }
    }
    ctx->pc = 0x1A1F50u;
label_1a1f50:
    // 0x1a1f50: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a1f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a1f54:
    // 0x1a1f54: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a1f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a1f58:
    // 0x1a1f58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1f58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1f5c:
    // 0x1a1f5c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a1f5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a1f60:
    // 0x1a1f60: 0x320f809  jalr        $t9
label_1a1f64:
    if (ctx->pc == 0x1A1F64u) {
        ctx->pc = 0x1A1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F60u;
        // 0x1a1f64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1F68u;
        goto label_1a1f68;
    }
    ctx->pc = 0x1A1F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1F68u);
        ctx->pc = 0x1A1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F60u;
        // 0x1a1f64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1F60u, 0x1A1F68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1F68u;
label_1a1f68:
    // 0x1a1f68: 0x8e820690  lw          $v0, 0x690($s4)
    ctx->pc = 0x1a1f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1680)));
label_1a1f6c:
    // 0x1a1f6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a1f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a1f70:
    // 0x1a1f70: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a1f74:
    if (ctx->pc == 0x1A1F74u) {
        ctx->pc = 0x1A1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F70u;
        // 0x1a1f74: 0xae820690  sw          $v0, 0x690($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1F78u;
        goto label_1a1f78;
    }
    ctx->pc = 0x1A1F70u;
    {
        const bool branch_taken_0x1a1f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F70u;
        // 0x1a1f74: 0xae820690  sw          $v0, 0x690($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f70) {
            ctx->pc = 0x1A1F88u;
            goto label_1a1f88;
        }
    }
    ctx->pc = 0x1A1F78u;
label_1a1f78:
    // 0x1a1f78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a1f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a1f7c:
    // 0x1a1f7c: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x1a1f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_1a1f80:
    // 0x1a1f80: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_1a1f84:
    if (ctx->pc == 0x1A1F84u) {
        ctx->pc = 0x1A1F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F80u;
        // 0x1a1f84: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1F88u;
        goto label_1a1f88;
    }
    ctx->pc = 0x1A1F80u;
    {
        const bool branch_taken_0x1a1f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F80u;
        // 0x1a1f84: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f80) {
            ctx->pc = 0x1A1ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1ed8;
        }
    }
    ctx->pc = 0x1A1F88u;
label_1a1f88:
    // 0x1a1f88: 0x8e820c70  lw          $v0, 0xC70($s4)
    ctx->pc = 0x1a1f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3184)));
label_1a1f8c:
    // 0x1a1f8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a1f90:
    // 0x1a1f90: 0xae820c70  sw          $v0, 0xC70($s4)
    ctx->pc = 0x1a1f90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3184), GPR_U32(ctx, 2));
label_1a1f94:
    // 0x1a1f94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a1f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1f98:
    // 0x1a1f98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a1f98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1f9c:
    // 0x1a1f9c: 0x2919821  addu        $s3, $s4, $s1
    ctx->pc = 0x1a1f9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1a1fa0:
    // 0x1a1fa0: 0x926209fc  lbu         $v0, 0x9FC($s3)
    ctx->pc = 0x1a1fa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2556)));
label_1a1fa4:
    // 0x1a1fa4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a1fa8:
    if (ctx->pc == 0x1A1FA8u) {
        ctx->pc = 0x1A1FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FA4u;
        // 0x1a1fa8: 0x267209dc  addiu       $s2, $s3, 0x9DC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 2524));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1FACu;
        goto label_1a1fac;
    }
    ctx->pc = 0x1A1FA4u;
    {
        const bool branch_taken_0x1a1fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FA4u;
        // 0x1a1fa8: 0x267209dc  addiu       $s2, $s3, 0x9DC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 2524));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1fa4) {
            ctx->pc = 0x1A1FB4u;
            goto label_1a1fb4;
        }
    }
    ctx->pc = 0x1A1FACu;
label_1a1fac:
    // 0x1a1fac: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a1fb0:
    if (ctx->pc == 0x1A1FB0u) {
        ctx->pc = 0x1A1FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FACu;
        // 0x1a1fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1FB4u;
        goto label_1a1fb4;
    }
    ctx->pc = 0x1A1FACu;
    {
        const bool branch_taken_0x1a1fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FACu;
        // 0x1a1fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1fac) {
            ctx->pc = 0x1A1FCCu;
            goto label_1a1fcc;
        }
    }
    ctx->pc = 0x1A1FB4u;
label_1a1fb4:
    // 0x1a1fb4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1a1fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1a1fb8:
    // 0x1a1fb8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1fb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1fbc:
    // 0x1a1fbc: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x1a1fbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_1a1fc0:
    // 0x1a1fc0: 0x320f809  jalr        $t9
label_1a1fc4:
    if (ctx->pc == 0x1A1FC4u) {
        ctx->pc = 0x1A1FC8u;
        goto label_1a1fc8;
    }
    ctx->pc = 0x1A1FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1FC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1FC0u, 0x1A1FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1FC8u;
label_1a1fc8:
    // 0x1a1fc8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a1fc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a1fcc:
    // 0x1a1fcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a1fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1a1fd0:
    // 0x1a1fd0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1a1fd4:
    if (ctx->pc == 0x1A1FD4u) {
        ctx->pc = 0x1A1FD8u;
        goto label_1a1fd8;
    }
    ctx->pc = 0x1A1FD0u;
    {
        const bool branch_taken_0x1a1fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1fd0) {
            ctx->pc = 0x1A2034u;
            goto label_1a2034;
        }
    }
    ctx->pc = 0x1A1FD8u;
label_1a1fd8:
    // 0x1a1fd8: 0xa2400020  sb          $zero, 0x20($s2)
    ctx->pc = 0x1a1fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 32), (uint8_t)GPR_U32(ctx, 0));
label_1a1fdc:
    // 0x1a1fdc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1a1fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1a1fe0:
    // 0x1a1fe0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1fe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1fe4:
    // 0x1a1fe4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a1fe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a1fe8:
    // 0x1a1fe8: 0x320f809  jalr        $t9
label_1a1fec:
    if (ctx->pc == 0x1A1FECu) {
        ctx->pc = 0x1A1FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FE8u;
        // 0x1a1fec: 0x92450020  lbu         $a1, 0x20($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1FF0u;
        goto label_1a1ff0;
    }
    ctx->pc = 0x1A1FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1FF0u);
        ctx->pc = 0x1A1FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FE8u;
        // 0x1a1fec: 0x92450020  lbu         $a1, 0x20($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1FE8u, 0x1A1FF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1FF0u;
label_1a1ff0:
    // 0x1a1ff0: 0x92420020  lbu         $v0, 0x20($s2)
    ctx->pc = 0x1a1ff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
label_1a1ff4:
    // 0x1a1ff4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a1ff8:
    if (ctx->pc == 0x1A1FF8u) {
        ctx->pc = 0x1A1FFCu;
        goto label_1a1ffc;
    }
    ctx->pc = 0x1A1FF4u;
    {
        const bool branch_taken_0x1a1ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1ff4) {
            ctx->pc = 0x1A2014u;
            goto label_1a2014;
        }
    }
    ctx->pc = 0x1A1FFCu;
label_1a1ffc:
    // 0x1a1ffc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1a1ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1a2000:
    // 0x1a2000: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a2000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a2004:
    // 0x1a2004: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a2004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a2008:
    // 0x1a2008: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a2008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a200c:
    // 0x1a200c: 0x320f809  jalr        $t9
label_1a2010:
    if (ctx->pc == 0x1A2010u) {
        ctx->pc = 0x1A2010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A200Cu;
        // 0x1a2010: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2014u;
        goto label_1a2014;
    }
    ctx->pc = 0x1A200Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A2014u);
        ctx->pc = 0x1A2010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A200Cu;
        // 0x1a2010: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A200Cu, 0x1A2014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2014u;
label_1a2014:
    // 0x1a2014: 0x0  nop
    ctx->pc = 0x1a2014u;
    // NOP
label_1a2018:
    // 0x1a2018: 0xae600a00  sw          $zero, 0xA00($s3)
    ctx->pc = 0x1a2018u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2560), GPR_U32(ctx, 0));
label_1a201c:
    // 0x1a201c: 0x8e820690  lw          $v0, 0x690($s4)
    ctx->pc = 0x1a201cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1680)));
label_1a2020:
    // 0x1a2020: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a2020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a2024:
    // 0x1a2024: 0xae820690  sw          $v0, 0x690($s4)
    ctx->pc = 0x1a2024u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1680), GPR_U32(ctx, 2));
label_1a2028:
    // 0x1a2028: 0x8e820698  lw          $v0, 0x698($s4)
    ctx->pc = 0x1a2028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1688)));
label_1a202c:
    // 0x1a202c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a202cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a2030:
    // 0x1a2030: 0xae820698  sw          $v0, 0x698($s4)
    ctx->pc = 0x1a2030u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1688), GPR_U32(ctx, 2));
label_1a2034:
    // 0x1a2034: 0x0  nop
    ctx->pc = 0x1a2034u;
    // NOP
label_1a2038:
    // 0x1a2038: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a2038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a203c:
    // 0x1a203c: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x1a203cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
label_1a2040:
    // 0x1a2040: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_1a2044:
    if (ctx->pc == 0x1A2044u) {
        ctx->pc = 0x1A2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2040u;
        // 0x1a2044: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2048u;
        goto label_1a2048;
    }
    ctx->pc = 0x1A2040u;
    {
        const bool branch_taken_0x1a2040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2040u;
        // 0x1a2044: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2040) {
            ctx->pc = 0x1A1F9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1f9c;
        }
    }
    ctx->pc = 0x1A2048u;
label_1a2048:
    // 0x1a2048: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a2048u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a204c:
    // 0x1a204c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1a204cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1a2050:
    // 0x1a2050: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1a2050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1a2054:
    // 0x1a2054: 0x0  nop
    ctx->pc = 0x1a2054u;
    // NOP
label_1a2058:
    // 0x1a2058: 0x0  nop
    ctx->pc = 0x1a2058u;
    // NOP
label_1a205c:
    // 0x1a205c: 0x0  nop
    ctx->pc = 0x1a205cu;
    // NOP
label_1a2060:
    // 0x1a2060: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1a2064:
    if (ctx->pc == 0x1A2064u) {
        ctx->pc = 0x1A2068u;
        goto label_1a2068;
    }
    ctx->pc = 0x1A2060u;
    {
        const bool branch_taken_0x1a2060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2060) {
            ctx->pc = 0x1A204Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a204c;
        }
    }
    ctx->pc = 0x1A2068u;
label_1a2068:
    // 0x1a2068: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x1a2068u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_1a206c:
    // 0x1a206c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1a2070:
    if (ctx->pc == 0x1A2070u) {
        ctx->pc = 0x1A2074u;
        goto label_1a2074;
    }
    ctx->pc = 0x1A206Cu;
    {
        const bool branch_taken_0x1a206c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a206c) {
            ctx->pc = 0x1A2090u;
            goto label_1a2090;
        }
    }
    ctx->pc = 0x1A2074u;
label_1a2074:
    // 0x1a2074: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a2074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a2078:
    // 0x1a2078: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x1a2078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_1a207c:
    // 0x1a207c: 0x0  nop
    ctx->pc = 0x1a207cu;
    // NOP
label_1a2080:
    // 0x1a2080: 0x0  nop
    ctx->pc = 0x1a2080u;
    // NOP
label_1a2084:
    // 0x1a2084: 0x0  nop
    ctx->pc = 0x1a2084u;
    // NOP
label_1a2088:
    // 0x1a2088: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1a208c:
    if (ctx->pc == 0x1A208Cu) {
        ctx->pc = 0x1A2090u;
        goto label_1a2090;
    }
    ctx->pc = 0x1A2088u;
    {
        const bool branch_taken_0x1a2088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2088) {
            ctx->pc = 0x1A2074u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2074;
        }
    }
    ctx->pc = 0x1A2090u;
label_1a2090:
    // 0x1a2090: 0x8e830c78  lw          $v1, 0xC78($s4)
    ctx->pc = 0x1a2090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3192)));
label_1a2094:
    // 0x1a2094: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1a2094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1a2098:
    // 0x1a2098: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a2098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1a209c:
    // 0x1a209c: 0x8e860694  lw          $a2, 0x694($s4)
    ctx->pc = 0x1a209cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1684)));
label_1a20a0:
    // 0x1a20a0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1a20a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1a20a4:
    // 0x1a20a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a20a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a20a8:
    // 0x1a20a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a20a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a20ac:
    // 0x1a20ac: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a20acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a20b0:
    // 0x1a20b0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1a20b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a20b4:
    // 0x1a20b4: 0xc0805c8  jal         func_201720
label_1a20b8:
    if (ctx->pc == 0x1A20B8u) {
        ctx->pc = 0x1A20B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20B4u;
        // 0x1a20b8: 0x24a50410  addiu       $a1, $a1, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A20BCu;
        goto label_1a20bc;
    }
    ctx->pc = 0x1A20B4u;
    SET_GPR_U32(ctx, 31, 0x1A20BCu);
    ctx->pc = 0x1A20B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A20B4u;
    // 0x1a20b8: 0x24a50410  addiu       $a1, $a1, 0x410 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1A20B4u, 0x1A20BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A20BCu;
label_1a20bc:
    // 0x1a20bc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a20bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a20c0:
    // 0x1a20c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a20c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a20c4:
    // 0x1a20c4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1a20c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1a20c8:
    // 0x1a20c8: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1a20c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1a20cc:
    // 0x1a20cc: 0x320f809  jalr        $t9
label_1a20d0:
    if (ctx->pc == 0x1A20D0u) {
        ctx->pc = 0x1A20D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20CCu;
        // 0x1a20d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A20D4u;
        goto label_1a20d4;
    }
    ctx->pc = 0x1A20CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A20D4u);
        ctx->pc = 0x1A20D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20CCu;
        // 0x1a20d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A20CCu, 0x1A20D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A20D4u;
label_1a20d4:
    // 0x1a20d4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a20d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a20d8:
    // 0x1a20d8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1a20d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1a20dc:
    // 0x1a20dc: 0x320f809  jalr        $t9
label_1a20e0:
    if (ctx->pc == 0x1A20E0u) {
        ctx->pc = 0x1A20E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20DCu;
        // 0x1a20e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A20E4u;
        goto label_1a20e4;
    }
    ctx->pc = 0x1A20DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A20E4u);
        ctx->pc = 0x1A20E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20DCu;
        // 0x1a20e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A20DCu, 0x1A20E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A20E4u;
label_1a20e4:
    // 0x1a20e4: 0x8e850c7c  lw          $a1, 0xC7C($s4)
    ctx->pc = 0x1a20e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3196)));
label_1a20e8:
    // 0x1a20e8: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x1a20e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1a20ec:
    // 0x1a20ec: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
label_1a20f0:
    if (ctx->pc == 0x1A20F0u) {
        ctx->pc = 0x1A20F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20ECu;
        // 0x1a20f0: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A20F4u;
        goto label_1a20f4;
    }
    ctx->pc = 0x1A20ECu;
    {
        const bool branch_taken_0x1a20ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A20F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20ECu;
        // 0x1a20f0: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a20ec) {
            ctx->pc = 0x1A21CCu;
            goto label_1a21cc;
        }
    }
    ctx->pc = 0x1A20F4u;
label_1a20f4:
    // 0x1a20f4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1a20f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_1a20f8:
    // 0x1a20f8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a20f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1a20fc:
    // 0x1a20fc: 0x24840420  addiu       $a0, $a0, 0x420
    ctx->pc = 0x1a20fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1056));
label_1a2100:
    // 0x1a2100: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a2100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a2104:
    // 0x1a2104: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a2104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a2108:
    // 0x1a2108: 0x600008  jr          $v1
label_1a210c:
    if (ctx->pc == 0x1A210Cu) {
        ctx->pc = 0x1A2110u;
        goto label_1a2110;
    }
    ctx->pc = 0x1A2108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2110u: goto label_1a2110;
            case 0x1A2144u: goto label_1a2144;
            case 0x1A2180u: goto label_1a2180;
            case 0x1A2190u: goto label_1a2190;
            case 0x1A219Cu: goto label_1a219c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2108u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A2110u;
label_1a2110:
    // 0x1a2110: 0x8e830c78  lw          $v1, 0xC78($s4)
    ctx->pc = 0x1a2110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3192)));
label_1a2114:
    // 0x1a2114: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a2114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a2118:
    // 0x1a2118: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1a2118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1a211c:
    // 0x1a211c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a211cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a2120:
    // 0x1a2120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a2120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a2124:
    // 0x1a2124: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a2124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a2128:
    // 0x1a2128: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a2128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a212c:
    // 0x1a212c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a212cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a2130:
    // 0x1a2130: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a2130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a2134:
    // 0x1a2134: 0x320f809  jalr        $t9
label_1a2138:
    if (ctx->pc == 0x1A2138u) {
        ctx->pc = 0x1A2138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2134u;
        // 0x1a2138: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A213Cu;
        goto label_1a213c;
    }
    ctx->pc = 0x1A2134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A213Cu);
        ctx->pc = 0x1A2138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2134u;
        // 0x1a2138: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2134u, 0x1A213Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A213Cu;
label_1a213c:
    // 0x1a213c: 0x10000023  b           . + 4 + (0x23 << 2)
label_1a2140:
    if (ctx->pc == 0x1A2140u) {
        ctx->pc = 0x1A2140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A213Cu;
        // 0x1a2140: 0xae800c7c  sw          $zero, 0xC7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2144u;
        goto label_1a2144;
    }
    ctx->pc = 0x1A213Cu;
    {
        const bool branch_taken_0x1a213c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A213Cu;
        // 0x1a2140: 0xae800c7c  sw          $zero, 0xC7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a213c) {
            ctx->pc = 0x1A21CCu;
            goto label_1a21cc;
        }
    }
    ctx->pc = 0x1A2144u;
label_1a2144:
    // 0x1a2144: 0x10c00021  beqz        $a2, . + 4 + (0x21 << 2)
label_1a2148:
    if (ctx->pc == 0x1A2148u) {
        ctx->pc = 0x1A214Cu;
        goto label_1a214c;
    }
    ctx->pc = 0x1A2144u;
    {
        const bool branch_taken_0x1a2144 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2144) {
            ctx->pc = 0x1A21CCu;
            goto label_1a21cc;
        }
    }
    ctx->pc = 0x1A214Cu;
label_1a214c:
    // 0x1a214c: 0x8e830c78  lw          $v1, 0xC78($s4)
    ctx->pc = 0x1a214cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3192)));
label_1a2150:
    // 0x1a2150: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a2150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a2154:
    // 0x1a2154: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1a2154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1a2158:
    // 0x1a2158: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a2158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a215c:
    // 0x1a215c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a215cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a2160:
    // 0x1a2160: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a2160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a2164:
    // 0x1a2164: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a2164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a2168:
    // 0x1a2168: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a2168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a216c:
    // 0x1a216c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a216cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a2170:
    // 0x1a2170: 0x320f809  jalr        $t9
label_1a2174:
    if (ctx->pc == 0x1A2174u) {
        ctx->pc = 0x1A2174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2170u;
        // 0x1a2174: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2178u;
        goto label_1a2178;
    }
    ctx->pc = 0x1A2170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A2178u);
        ctx->pc = 0x1A2174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2170u;
        // 0x1a2174: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2170u, 0x1A2178u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2178u;
label_1a2178:
    // 0x1a2178: 0x10000014  b           . + 4 + (0x14 << 2)
label_1a217c:
    if (ctx->pc == 0x1A217Cu) {
        ctx->pc = 0x1A217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2178u;
        // 0x1a217c: 0xae800c7c  sw          $zero, 0xC7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2180u;
        goto label_1a2180;
    }
    ctx->pc = 0x1A2178u;
    {
        const bool branch_taken_0x1a2178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2178u;
        // 0x1a217c: 0xae800c7c  sw          $zero, 0xC7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2178) {
            ctx->pc = 0x1A21CCu;
            goto label_1a21cc;
        }
    }
    ctx->pc = 0x1A2180u;
label_1a2180:
    // 0x1a2180: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_1a2184:
    if (ctx->pc == 0x1A2184u) {
        ctx->pc = 0x1A2188u;
        goto label_1a2188;
    }
    ctx->pc = 0x1A2180u;
    {
        const bool branch_taken_0x1a2180 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2180) {
            ctx->pc = 0x1A21CCu;
            goto label_1a21cc;
        }
    }
    ctx->pc = 0x1A2188u;
label_1a2188:
    // 0x1a2188: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a218c:
    if (ctx->pc == 0x1A218Cu) {
        ctx->pc = 0x1A218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2188u;
        // 0x1a218c: 0xae800c7c  sw          $zero, 0xC7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2190u;
        goto label_1a2190;
    }
    ctx->pc = 0x1A2188u;
    {
        const bool branch_taken_0x1a2188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2188u;
        // 0x1a218c: 0xae800c7c  sw          $zero, 0xC7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2188) {
            ctx->pc = 0x1A21CCu;
            goto label_1a21cc;
        }
    }
    ctx->pc = 0x1A2190u;
label_1a2190:
    // 0x1a2190: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1a2190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a2194:
    // 0x1a2194: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a2198:
    if (ctx->pc == 0x1A2198u) {
        ctx->pc = 0x1A2198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2194u;
        // 0x1a2198: 0xae830c7c  sw          $v1, 0xC7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A219Cu;
        goto label_1a219c;
    }
    ctx->pc = 0x1A2194u;
    {
        const bool branch_taken_0x1a2194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2194u;
        // 0x1a2198: 0xae830c7c  sw          $v1, 0xC7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2194) {
            ctx->pc = 0x1A21CCu;
            goto label_1a21cc;
        }
    }
    ctx->pc = 0x1A219Cu;
label_1a219c:
    // 0x1a219c: 0x8e830c78  lw          $v1, 0xC78($s4)
    ctx->pc = 0x1a219cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3192)));
label_1a21a0:
    // 0x1a21a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a21a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a21a4:
    // 0x1a21a4: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1a21a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1a21a8:
    // 0x1a21a8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a21a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a21ac:
    // 0x1a21ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a21acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a21b0:
    // 0x1a21b0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a21b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a21b4:
    // 0x1a21b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a21b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a21b8:
    // 0x1a21b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a21b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a21bc:
    // 0x1a21bc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a21bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a21c0:
    // 0x1a21c0: 0x320f809  jalr        $t9
label_1a21c4:
    if (ctx->pc == 0x1A21C4u) {
        ctx->pc = 0x1A21C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A21C0u;
        // 0x1a21c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A21C8u;
        goto label_1a21c8;
    }
    ctx->pc = 0x1A21C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A21C8u);
        ctx->pc = 0x1A21C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A21C0u;
        // 0x1a21c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A21C0u, 0x1A21C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A21C8u;
label_1a21c8:
    // 0x1a21c8: 0xae800c7c  sw          $zero, 0xC7C($s4)
    ctx->pc = 0x1a21c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 0));
label_1a21cc:
    // 0x1a21cc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a21ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a21d0:
    // 0x1a21d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a21d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a21d4:
    // 0x1a21d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a21d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a21d8:
    // 0x1a21d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a21d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a21dc:
    // 0x1a21dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a21dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a21e0:
    // 0x1a21e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a21e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a21e4:
    // 0x1a21e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a21e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a21e8:
    // 0x1a21e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a21e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a21ec:
    // 0x1a21ec: 0x3e00008  jr          $ra
label_1a21f0:
    if (ctx->pc == 0x1A21F0u) {
        ctx->pc = 0x1A21F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A21ECu;
        // 0x1a21f0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A21F4u;
        goto label_fallthrough_0x1a21ec;
    }
    ctx->pc = 0x1A21ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A21F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A21ECu;
        // 0x1a21f0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A21ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a21ec:
    ctx->pc = 0x1A21F4u;
}
