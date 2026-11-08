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

// Function: FUN_00112c00
// Address: 0x112c00 - 0x113624
void FUN_00112c00_0x112c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00112c00_0x112c00");
#endif

    switch (ctx->pc) {
        case 0x112c00u: goto label_112c00;
        case 0x112c04u: goto label_112c04;
        case 0x112c08u: goto label_112c08;
        case 0x112c0cu: goto label_112c0c;
        case 0x112c10u: goto label_112c10;
        case 0x112c14u: goto label_112c14;
        case 0x112c18u: goto label_112c18;
        case 0x112c1cu: goto label_112c1c;
        case 0x112c20u: goto label_112c20;
        case 0x112c24u: goto label_112c24;
        case 0x112c28u: goto label_112c28;
        case 0x112c2cu: goto label_112c2c;
        case 0x112c30u: goto label_112c30;
        case 0x112c34u: goto label_112c34;
        case 0x112c38u: goto label_112c38;
        case 0x112c3cu: goto label_112c3c;
        case 0x112c40u: goto label_112c40;
        case 0x112c44u: goto label_112c44;
        case 0x112c48u: goto label_112c48;
        case 0x112c4cu: goto label_112c4c;
        case 0x112c50u: goto label_112c50;
        case 0x112c54u: goto label_112c54;
        case 0x112c58u: goto label_112c58;
        case 0x112c5cu: goto label_112c5c;
        case 0x112c60u: goto label_112c60;
        case 0x112c64u: goto label_112c64;
        case 0x112c68u: goto label_112c68;
        case 0x112c6cu: goto label_112c6c;
        case 0x112c70u: goto label_112c70;
        case 0x112c74u: goto label_112c74;
        case 0x112c78u: goto label_112c78;
        case 0x112c7cu: goto label_112c7c;
        case 0x112c80u: goto label_112c80;
        case 0x112c84u: goto label_112c84;
        case 0x112c88u: goto label_112c88;
        case 0x112c8cu: goto label_112c8c;
        case 0x112c90u: goto label_112c90;
        case 0x112c94u: goto label_112c94;
        case 0x112c98u: goto label_112c98;
        case 0x112c9cu: goto label_112c9c;
        case 0x112ca0u: goto label_112ca0;
        case 0x112ca4u: goto label_112ca4;
        case 0x112ca8u: goto label_112ca8;
        case 0x112cacu: goto label_112cac;
        case 0x112cb0u: goto label_112cb0;
        case 0x112cb4u: goto label_112cb4;
        case 0x112cb8u: goto label_112cb8;
        case 0x112cbcu: goto label_112cbc;
        case 0x112cc0u: goto label_112cc0;
        case 0x112cc4u: goto label_112cc4;
        case 0x112cc8u: goto label_112cc8;
        case 0x112cccu: goto label_112ccc;
        case 0x112cd0u: goto label_112cd0;
        case 0x112cd4u: goto label_112cd4;
        case 0x112cd8u: goto label_112cd8;
        case 0x112cdcu: goto label_112cdc;
        case 0x112ce0u: goto label_112ce0;
        case 0x112ce4u: goto label_112ce4;
        case 0x112ce8u: goto label_112ce8;
        case 0x112cecu: goto label_112cec;
        case 0x112cf0u: goto label_112cf0;
        case 0x112cf4u: goto label_112cf4;
        case 0x112cf8u: goto label_112cf8;
        case 0x112cfcu: goto label_112cfc;
        case 0x112d00u: goto label_112d00;
        case 0x112d04u: goto label_112d04;
        case 0x112d08u: goto label_112d08;
        case 0x112d0cu: goto label_112d0c;
        case 0x112d10u: goto label_112d10;
        case 0x112d14u: goto label_112d14;
        case 0x112d18u: goto label_112d18;
        case 0x112d1cu: goto label_112d1c;
        case 0x112d20u: goto label_112d20;
        case 0x112d24u: goto label_112d24;
        case 0x112d28u: goto label_112d28;
        case 0x112d2cu: goto label_112d2c;
        case 0x112d30u: goto label_112d30;
        case 0x112d34u: goto label_112d34;
        case 0x112d38u: goto label_112d38;
        case 0x112d3cu: goto label_112d3c;
        case 0x112d40u: goto label_112d40;
        case 0x112d44u: goto label_112d44;
        case 0x112d48u: goto label_112d48;
        case 0x112d4cu: goto label_112d4c;
        case 0x112d50u: goto label_112d50;
        case 0x112d54u: goto label_112d54;
        case 0x112d58u: goto label_112d58;
        case 0x112d5cu: goto label_112d5c;
        case 0x112d60u: goto label_112d60;
        case 0x112d64u: goto label_112d64;
        case 0x112d68u: goto label_112d68;
        case 0x112d6cu: goto label_112d6c;
        case 0x112d70u: goto label_112d70;
        case 0x112d74u: goto label_112d74;
        case 0x112d78u: goto label_112d78;
        case 0x112d7cu: goto label_112d7c;
        case 0x112d80u: goto label_112d80;
        case 0x112d84u: goto label_112d84;
        case 0x112d88u: goto label_112d88;
        case 0x112d8cu: goto label_112d8c;
        case 0x112d90u: goto label_112d90;
        case 0x112d94u: goto label_112d94;
        case 0x112d98u: goto label_112d98;
        case 0x112d9cu: goto label_112d9c;
        case 0x112da0u: goto label_112da0;
        case 0x112da4u: goto label_112da4;
        case 0x112da8u: goto label_112da8;
        case 0x112dacu: goto label_112dac;
        case 0x112db0u: goto label_112db0;
        case 0x112db4u: goto label_112db4;
        case 0x112db8u: goto label_112db8;
        case 0x112dbcu: goto label_112dbc;
        case 0x112dc0u: goto label_112dc0;
        case 0x112dc4u: goto label_112dc4;
        case 0x112dc8u: goto label_112dc8;
        case 0x112dccu: goto label_112dcc;
        case 0x112dd0u: goto label_112dd0;
        case 0x112dd4u: goto label_112dd4;
        case 0x112dd8u: goto label_112dd8;
        case 0x112ddcu: goto label_112ddc;
        case 0x112de0u: goto label_112de0;
        case 0x112de4u: goto label_112de4;
        case 0x112de8u: goto label_112de8;
        case 0x112decu: goto label_112dec;
        case 0x112df0u: goto label_112df0;
        case 0x112df4u: goto label_112df4;
        case 0x112df8u: goto label_112df8;
        case 0x112dfcu: goto label_112dfc;
        case 0x112e00u: goto label_112e00;
        case 0x112e04u: goto label_112e04;
        case 0x112e08u: goto label_112e08;
        case 0x112e0cu: goto label_112e0c;
        case 0x112e10u: goto label_112e10;
        case 0x112e14u: goto label_112e14;
        case 0x112e18u: goto label_112e18;
        case 0x112e1cu: goto label_112e1c;
        case 0x112e20u: goto label_112e20;
        case 0x112e24u: goto label_112e24;
        case 0x112e28u: goto label_112e28;
        case 0x112e2cu: goto label_112e2c;
        case 0x112e30u: goto label_112e30;
        case 0x112e34u: goto label_112e34;
        case 0x112e38u: goto label_112e38;
        case 0x112e3cu: goto label_112e3c;
        case 0x112e40u: goto label_112e40;
        case 0x112e44u: goto label_112e44;
        case 0x112e48u: goto label_112e48;
        case 0x112e4cu: goto label_112e4c;
        case 0x112e50u: goto label_112e50;
        case 0x112e54u: goto label_112e54;
        case 0x112e58u: goto label_112e58;
        case 0x112e5cu: goto label_112e5c;
        case 0x112e60u: goto label_112e60;
        case 0x112e64u: goto label_112e64;
        case 0x112e68u: goto label_112e68;
        case 0x112e6cu: goto label_112e6c;
        case 0x112e70u: goto label_112e70;
        case 0x112e74u: goto label_112e74;
        case 0x112e78u: goto label_112e78;
        case 0x112e7cu: goto label_112e7c;
        case 0x112e80u: goto label_112e80;
        case 0x112e84u: goto label_112e84;
        case 0x112e88u: goto label_112e88;
        case 0x112e8cu: goto label_112e8c;
        case 0x112e90u: goto label_112e90;
        case 0x112e94u: goto label_112e94;
        case 0x112e98u: goto label_112e98;
        case 0x112e9cu: goto label_112e9c;
        case 0x112ea0u: goto label_112ea0;
        case 0x112ea4u: goto label_112ea4;
        case 0x112ea8u: goto label_112ea8;
        case 0x112eacu: goto label_112eac;
        case 0x112eb0u: goto label_112eb0;
        case 0x112eb4u: goto label_112eb4;
        case 0x112eb8u: goto label_112eb8;
        case 0x112ebcu: goto label_112ebc;
        case 0x112ec0u: goto label_112ec0;
        case 0x112ec4u: goto label_112ec4;
        case 0x112ec8u: goto label_112ec8;
        case 0x112eccu: goto label_112ecc;
        case 0x112ed0u: goto label_112ed0;
        case 0x112ed4u: goto label_112ed4;
        case 0x112ed8u: goto label_112ed8;
        case 0x112edcu: goto label_112edc;
        case 0x112ee0u: goto label_112ee0;
        case 0x112ee4u: goto label_112ee4;
        case 0x112ee8u: goto label_112ee8;
        case 0x112eecu: goto label_112eec;
        case 0x112ef0u: goto label_112ef0;
        case 0x112ef4u: goto label_112ef4;
        case 0x112ef8u: goto label_112ef8;
        case 0x112efcu: goto label_112efc;
        case 0x112f00u: goto label_112f00;
        case 0x112f04u: goto label_112f04;
        case 0x112f08u: goto label_112f08;
        case 0x112f0cu: goto label_112f0c;
        case 0x112f10u: goto label_112f10;
        case 0x112f14u: goto label_112f14;
        case 0x112f18u: goto label_112f18;
        case 0x112f1cu: goto label_112f1c;
        case 0x112f20u: goto label_112f20;
        case 0x112f24u: goto label_112f24;
        case 0x112f28u: goto label_112f28;
        case 0x112f2cu: goto label_112f2c;
        case 0x112f30u: goto label_112f30;
        case 0x112f34u: goto label_112f34;
        case 0x112f38u: goto label_112f38;
        case 0x112f3cu: goto label_112f3c;
        case 0x112f40u: goto label_112f40;
        case 0x112f44u: goto label_112f44;
        case 0x112f48u: goto label_112f48;
        case 0x112f4cu: goto label_112f4c;
        case 0x112f50u: goto label_112f50;
        case 0x112f54u: goto label_112f54;
        case 0x112f58u: goto label_112f58;
        case 0x112f5cu: goto label_112f5c;
        case 0x112f60u: goto label_112f60;
        case 0x112f64u: goto label_112f64;
        case 0x112f68u: goto label_112f68;
        case 0x112f6cu: goto label_112f6c;
        case 0x112f70u: goto label_112f70;
        case 0x112f74u: goto label_112f74;
        case 0x112f78u: goto label_112f78;
        case 0x112f7cu: goto label_112f7c;
        case 0x112f80u: goto label_112f80;
        case 0x112f84u: goto label_112f84;
        case 0x112f88u: goto label_112f88;
        case 0x112f8cu: goto label_112f8c;
        case 0x112f90u: goto label_112f90;
        case 0x112f94u: goto label_112f94;
        case 0x112f98u: goto label_112f98;
        case 0x112f9cu: goto label_112f9c;
        case 0x112fa0u: goto label_112fa0;
        case 0x112fa4u: goto label_112fa4;
        case 0x112fa8u: goto label_112fa8;
        case 0x112facu: goto label_112fac;
        case 0x112fb0u: goto label_112fb0;
        case 0x112fb4u: goto label_112fb4;
        case 0x112fb8u: goto label_112fb8;
        case 0x112fbcu: goto label_112fbc;
        case 0x112fc0u: goto label_112fc0;
        case 0x112fc4u: goto label_112fc4;
        case 0x112fc8u: goto label_112fc8;
        case 0x112fccu: goto label_112fcc;
        case 0x112fd0u: goto label_112fd0;
        case 0x112fd4u: goto label_112fd4;
        case 0x112fd8u: goto label_112fd8;
        case 0x112fdcu: goto label_112fdc;
        case 0x112fe0u: goto label_112fe0;
        case 0x112fe4u: goto label_112fe4;
        case 0x112fe8u: goto label_112fe8;
        case 0x112fecu: goto label_112fec;
        case 0x112ff0u: goto label_112ff0;
        case 0x112ff4u: goto label_112ff4;
        case 0x112ff8u: goto label_112ff8;
        case 0x112ffcu: goto label_112ffc;
        case 0x113000u: goto label_113000;
        case 0x113004u: goto label_113004;
        case 0x113008u: goto label_113008;
        case 0x11300cu: goto label_11300c;
        case 0x113010u: goto label_113010;
        case 0x113014u: goto label_113014;
        case 0x113018u: goto label_113018;
        case 0x11301cu: goto label_11301c;
        case 0x113020u: goto label_113020;
        case 0x113024u: goto label_113024;
        case 0x113028u: goto label_113028;
        case 0x11302cu: goto label_11302c;
        case 0x113030u: goto label_113030;
        case 0x113034u: goto label_113034;
        case 0x113038u: goto label_113038;
        case 0x11303cu: goto label_11303c;
        case 0x113040u: goto label_113040;
        case 0x113044u: goto label_113044;
        case 0x113048u: goto label_113048;
        case 0x11304cu: goto label_11304c;
        case 0x113050u: goto label_113050;
        case 0x113054u: goto label_113054;
        case 0x113058u: goto label_113058;
        case 0x11305cu: goto label_11305c;
        case 0x113060u: goto label_113060;
        case 0x113064u: goto label_113064;
        case 0x113068u: goto label_113068;
        case 0x11306cu: goto label_11306c;
        case 0x113070u: goto label_113070;
        case 0x113074u: goto label_113074;
        case 0x113078u: goto label_113078;
        case 0x11307cu: goto label_11307c;
        case 0x113080u: goto label_113080;
        case 0x113084u: goto label_113084;
        case 0x113088u: goto label_113088;
        case 0x11308cu: goto label_11308c;
        case 0x113090u: goto label_113090;
        case 0x113094u: goto label_113094;
        case 0x113098u: goto label_113098;
        case 0x11309cu: goto label_11309c;
        case 0x1130a0u: goto label_1130a0;
        case 0x1130a4u: goto label_1130a4;
        case 0x1130a8u: goto label_1130a8;
        case 0x1130acu: goto label_1130ac;
        case 0x1130b0u: goto label_1130b0;
        case 0x1130b4u: goto label_1130b4;
        case 0x1130b8u: goto label_1130b8;
        case 0x1130bcu: goto label_1130bc;
        case 0x1130c0u: goto label_1130c0;
        case 0x1130c4u: goto label_1130c4;
        case 0x1130c8u: goto label_1130c8;
        case 0x1130ccu: goto label_1130cc;
        case 0x1130d0u: goto label_1130d0;
        case 0x1130d4u: goto label_1130d4;
        case 0x1130d8u: goto label_1130d8;
        case 0x1130dcu: goto label_1130dc;
        case 0x1130e0u: goto label_1130e0;
        case 0x1130e4u: goto label_1130e4;
        case 0x1130e8u: goto label_1130e8;
        case 0x1130ecu: goto label_1130ec;
        case 0x1130f0u: goto label_1130f0;
        case 0x1130f4u: goto label_1130f4;
        case 0x1130f8u: goto label_1130f8;
        case 0x1130fcu: goto label_1130fc;
        case 0x113100u: goto label_113100;
        case 0x113104u: goto label_113104;
        case 0x113108u: goto label_113108;
        case 0x11310cu: goto label_11310c;
        case 0x113110u: goto label_113110;
        case 0x113114u: goto label_113114;
        case 0x113118u: goto label_113118;
        case 0x11311cu: goto label_11311c;
        case 0x113120u: goto label_113120;
        case 0x113124u: goto label_113124;
        case 0x113128u: goto label_113128;
        case 0x11312cu: goto label_11312c;
        case 0x113130u: goto label_113130;
        case 0x113134u: goto label_113134;
        case 0x113138u: goto label_113138;
        case 0x11313cu: goto label_11313c;
        case 0x113140u: goto label_113140;
        case 0x113144u: goto label_113144;
        case 0x113148u: goto label_113148;
        case 0x11314cu: goto label_11314c;
        case 0x113150u: goto label_113150;
        case 0x113154u: goto label_113154;
        case 0x113158u: goto label_113158;
        case 0x11315cu: goto label_11315c;
        case 0x113160u: goto label_113160;
        case 0x113164u: goto label_113164;
        case 0x113168u: goto label_113168;
        case 0x11316cu: goto label_11316c;
        case 0x113170u: goto label_113170;
        case 0x113174u: goto label_113174;
        case 0x113178u: goto label_113178;
        case 0x11317cu: goto label_11317c;
        case 0x113180u: goto label_113180;
        case 0x113184u: goto label_113184;
        case 0x113188u: goto label_113188;
        case 0x11318cu: goto label_11318c;
        case 0x113190u: goto label_113190;
        case 0x113194u: goto label_113194;
        case 0x113198u: goto label_113198;
        case 0x11319cu: goto label_11319c;
        case 0x1131a0u: goto label_1131a0;
        case 0x1131a4u: goto label_1131a4;
        case 0x1131a8u: goto label_1131a8;
        case 0x1131acu: goto label_1131ac;
        case 0x1131b0u: goto label_1131b0;
        case 0x1131b4u: goto label_1131b4;
        case 0x1131b8u: goto label_1131b8;
        case 0x1131bcu: goto label_1131bc;
        case 0x1131c0u: goto label_1131c0;
        case 0x1131c4u: goto label_1131c4;
        case 0x1131c8u: goto label_1131c8;
        case 0x1131ccu: goto label_1131cc;
        case 0x1131d0u: goto label_1131d0;
        case 0x1131d4u: goto label_1131d4;
        case 0x1131d8u: goto label_1131d8;
        case 0x1131dcu: goto label_1131dc;
        case 0x1131e0u: goto label_1131e0;
        case 0x1131e4u: goto label_1131e4;
        case 0x1131e8u: goto label_1131e8;
        case 0x1131ecu: goto label_1131ec;
        case 0x1131f0u: goto label_1131f0;
        case 0x1131f4u: goto label_1131f4;
        case 0x1131f8u: goto label_1131f8;
        case 0x1131fcu: goto label_1131fc;
        case 0x113200u: goto label_113200;
        case 0x113204u: goto label_113204;
        case 0x113208u: goto label_113208;
        case 0x11320cu: goto label_11320c;
        case 0x113210u: goto label_113210;
        case 0x113214u: goto label_113214;
        case 0x113218u: goto label_113218;
        case 0x11321cu: goto label_11321c;
        case 0x113220u: goto label_113220;
        case 0x113224u: goto label_113224;
        case 0x113228u: goto label_113228;
        case 0x11322cu: goto label_11322c;
        case 0x113230u: goto label_113230;
        case 0x113234u: goto label_113234;
        case 0x113238u: goto label_113238;
        case 0x11323cu: goto label_11323c;
        case 0x113240u: goto label_113240;
        case 0x113244u: goto label_113244;
        case 0x113248u: goto label_113248;
        case 0x11324cu: goto label_11324c;
        case 0x113250u: goto label_113250;
        case 0x113254u: goto label_113254;
        case 0x113258u: goto label_113258;
        case 0x11325cu: goto label_11325c;
        case 0x113260u: goto label_113260;
        case 0x113264u: goto label_113264;
        case 0x113268u: goto label_113268;
        case 0x11326cu: goto label_11326c;
        case 0x113270u: goto label_113270;
        case 0x113274u: goto label_113274;
        case 0x113278u: goto label_113278;
        case 0x11327cu: goto label_11327c;
        case 0x113280u: goto label_113280;
        case 0x113284u: goto label_113284;
        case 0x113288u: goto label_113288;
        case 0x11328cu: goto label_11328c;
        case 0x113290u: goto label_113290;
        case 0x113294u: goto label_113294;
        case 0x113298u: goto label_113298;
        case 0x11329cu: goto label_11329c;
        case 0x1132a0u: goto label_1132a0;
        case 0x1132a4u: goto label_1132a4;
        case 0x1132a8u: goto label_1132a8;
        case 0x1132acu: goto label_1132ac;
        case 0x1132b0u: goto label_1132b0;
        case 0x1132b4u: goto label_1132b4;
        case 0x1132b8u: goto label_1132b8;
        case 0x1132bcu: goto label_1132bc;
        case 0x1132c0u: goto label_1132c0;
        case 0x1132c4u: goto label_1132c4;
        case 0x1132c8u: goto label_1132c8;
        case 0x1132ccu: goto label_1132cc;
        case 0x1132d0u: goto label_1132d0;
        case 0x1132d4u: goto label_1132d4;
        case 0x1132d8u: goto label_1132d8;
        case 0x1132dcu: goto label_1132dc;
        case 0x1132e0u: goto label_1132e0;
        case 0x1132e4u: goto label_1132e4;
        case 0x1132e8u: goto label_1132e8;
        case 0x1132ecu: goto label_1132ec;
        case 0x1132f0u: goto label_1132f0;
        case 0x1132f4u: goto label_1132f4;
        case 0x1132f8u: goto label_1132f8;
        case 0x1132fcu: goto label_1132fc;
        case 0x113300u: goto label_113300;
        case 0x113304u: goto label_113304;
        case 0x113308u: goto label_113308;
        case 0x11330cu: goto label_11330c;
        case 0x113310u: goto label_113310;
        case 0x113314u: goto label_113314;
        case 0x113318u: goto label_113318;
        case 0x11331cu: goto label_11331c;
        case 0x113320u: goto label_113320;
        case 0x113324u: goto label_113324;
        case 0x113328u: goto label_113328;
        case 0x11332cu: goto label_11332c;
        case 0x113330u: goto label_113330;
        case 0x113334u: goto label_113334;
        case 0x113338u: goto label_113338;
        case 0x11333cu: goto label_11333c;
        case 0x113340u: goto label_113340;
        case 0x113344u: goto label_113344;
        case 0x113348u: goto label_113348;
        case 0x11334cu: goto label_11334c;
        case 0x113350u: goto label_113350;
        case 0x113354u: goto label_113354;
        case 0x113358u: goto label_113358;
        case 0x11335cu: goto label_11335c;
        case 0x113360u: goto label_113360;
        case 0x113364u: goto label_113364;
        case 0x113368u: goto label_113368;
        case 0x11336cu: goto label_11336c;
        case 0x113370u: goto label_113370;
        case 0x113374u: goto label_113374;
        case 0x113378u: goto label_113378;
        case 0x11337cu: goto label_11337c;
        case 0x113380u: goto label_113380;
        case 0x113384u: goto label_113384;
        case 0x113388u: goto label_113388;
        case 0x11338cu: goto label_11338c;
        case 0x113390u: goto label_113390;
        case 0x113394u: goto label_113394;
        case 0x113398u: goto label_113398;
        case 0x11339cu: goto label_11339c;
        case 0x1133a0u: goto label_1133a0;
        case 0x1133a4u: goto label_1133a4;
        case 0x1133a8u: goto label_1133a8;
        case 0x1133acu: goto label_1133ac;
        case 0x1133b0u: goto label_1133b0;
        case 0x1133b4u: goto label_1133b4;
        case 0x1133b8u: goto label_1133b8;
        case 0x1133bcu: goto label_1133bc;
        case 0x1133c0u: goto label_1133c0;
        case 0x1133c4u: goto label_1133c4;
        case 0x1133c8u: goto label_1133c8;
        case 0x1133ccu: goto label_1133cc;
        case 0x1133d0u: goto label_1133d0;
        case 0x1133d4u: goto label_1133d4;
        case 0x1133d8u: goto label_1133d8;
        case 0x1133dcu: goto label_1133dc;
        case 0x1133e0u: goto label_1133e0;
        case 0x1133e4u: goto label_1133e4;
        case 0x1133e8u: goto label_1133e8;
        case 0x1133ecu: goto label_1133ec;
        case 0x1133f0u: goto label_1133f0;
        case 0x1133f4u: goto label_1133f4;
        case 0x1133f8u: goto label_1133f8;
        case 0x1133fcu: goto label_1133fc;
        case 0x113400u: goto label_113400;
        case 0x113404u: goto label_113404;
        case 0x113408u: goto label_113408;
        case 0x11340cu: goto label_11340c;
        case 0x113410u: goto label_113410;
        case 0x113414u: goto label_113414;
        case 0x113418u: goto label_113418;
        case 0x11341cu: goto label_11341c;
        case 0x113420u: goto label_113420;
        case 0x113424u: goto label_113424;
        case 0x113428u: goto label_113428;
        case 0x11342cu: goto label_11342c;
        case 0x113430u: goto label_113430;
        case 0x113434u: goto label_113434;
        case 0x113438u: goto label_113438;
        case 0x11343cu: goto label_11343c;
        case 0x113440u: goto label_113440;
        case 0x113444u: goto label_113444;
        case 0x113448u: goto label_113448;
        case 0x11344cu: goto label_11344c;
        case 0x113450u: goto label_113450;
        case 0x113454u: goto label_113454;
        case 0x113458u: goto label_113458;
        case 0x11345cu: goto label_11345c;
        case 0x113460u: goto label_113460;
        case 0x113464u: goto label_113464;
        case 0x113468u: goto label_113468;
        case 0x11346cu: goto label_11346c;
        case 0x113470u: goto label_113470;
        case 0x113474u: goto label_113474;
        case 0x113478u: goto label_113478;
        case 0x11347cu: goto label_11347c;
        case 0x113480u: goto label_113480;
        case 0x113484u: goto label_113484;
        case 0x113488u: goto label_113488;
        case 0x11348cu: goto label_11348c;
        case 0x113490u: goto label_113490;
        case 0x113494u: goto label_113494;
        case 0x113498u: goto label_113498;
        case 0x11349cu: goto label_11349c;
        case 0x1134a0u: goto label_1134a0;
        case 0x1134a4u: goto label_1134a4;
        case 0x1134a8u: goto label_1134a8;
        case 0x1134acu: goto label_1134ac;
        case 0x1134b0u: goto label_1134b0;
        case 0x1134b4u: goto label_1134b4;
        case 0x1134b8u: goto label_1134b8;
        case 0x1134bcu: goto label_1134bc;
        case 0x1134c0u: goto label_1134c0;
        case 0x1134c4u: goto label_1134c4;
        case 0x1134c8u: goto label_1134c8;
        case 0x1134ccu: goto label_1134cc;
        case 0x1134d0u: goto label_1134d0;
        case 0x1134d4u: goto label_1134d4;
        case 0x1134d8u: goto label_1134d8;
        case 0x1134dcu: goto label_1134dc;
        case 0x1134e0u: goto label_1134e0;
        case 0x1134e4u: goto label_1134e4;
        case 0x1134e8u: goto label_1134e8;
        case 0x1134ecu: goto label_1134ec;
        case 0x1134f0u: goto label_1134f0;
        case 0x1134f4u: goto label_1134f4;
        case 0x1134f8u: goto label_1134f8;
        case 0x1134fcu: goto label_1134fc;
        case 0x113500u: goto label_113500;
        case 0x113504u: goto label_113504;
        case 0x113508u: goto label_113508;
        case 0x11350cu: goto label_11350c;
        case 0x113510u: goto label_113510;
        case 0x113514u: goto label_113514;
        case 0x113518u: goto label_113518;
        case 0x11351cu: goto label_11351c;
        case 0x113520u: goto label_113520;
        case 0x113524u: goto label_113524;
        case 0x113528u: goto label_113528;
        case 0x11352cu: goto label_11352c;
        case 0x113530u: goto label_113530;
        case 0x113534u: goto label_113534;
        case 0x113538u: goto label_113538;
        case 0x11353cu: goto label_11353c;
        case 0x113540u: goto label_113540;
        case 0x113544u: goto label_113544;
        case 0x113548u: goto label_113548;
        case 0x11354cu: goto label_11354c;
        case 0x113550u: goto label_113550;
        case 0x113554u: goto label_113554;
        case 0x113558u: goto label_113558;
        case 0x11355cu: goto label_11355c;
        case 0x113560u: goto label_113560;
        case 0x113564u: goto label_113564;
        case 0x113568u: goto label_113568;
        case 0x11356cu: goto label_11356c;
        case 0x113570u: goto label_113570;
        case 0x113574u: goto label_113574;
        case 0x113578u: goto label_113578;
        case 0x11357cu: goto label_11357c;
        case 0x113580u: goto label_113580;
        case 0x113584u: goto label_113584;
        case 0x113588u: goto label_113588;
        case 0x11358cu: goto label_11358c;
        case 0x113590u: goto label_113590;
        case 0x113594u: goto label_113594;
        case 0x113598u: goto label_113598;
        case 0x11359cu: goto label_11359c;
        case 0x1135a0u: goto label_1135a0;
        case 0x1135a4u: goto label_1135a4;
        case 0x1135a8u: goto label_1135a8;
        case 0x1135acu: goto label_1135ac;
        case 0x1135b0u: goto label_1135b0;
        case 0x1135b4u: goto label_1135b4;
        case 0x1135b8u: goto label_1135b8;
        case 0x1135bcu: goto label_1135bc;
        case 0x1135c0u: goto label_1135c0;
        case 0x1135c4u: goto label_1135c4;
        case 0x1135c8u: goto label_1135c8;
        case 0x1135ccu: goto label_1135cc;
        case 0x1135d0u: goto label_1135d0;
        case 0x1135d4u: goto label_1135d4;
        case 0x1135d8u: goto label_1135d8;
        case 0x1135dcu: goto label_1135dc;
        case 0x1135e0u: goto label_1135e0;
        case 0x1135e4u: goto label_1135e4;
        case 0x1135e8u: goto label_1135e8;
        case 0x1135ecu: goto label_1135ec;
        case 0x1135f0u: goto label_1135f0;
        case 0x1135f4u: goto label_1135f4;
        case 0x1135f8u: goto label_1135f8;
        case 0x1135fcu: goto label_1135fc;
        case 0x113600u: goto label_113600;
        case 0x113604u: goto label_113604;
        case 0x113608u: goto label_113608;
        case 0x11360cu: goto label_11360c;
        case 0x113610u: goto label_113610;
        case 0x113614u: goto label_113614;
        case 0x113618u: goto label_113618;
        case 0x11361cu: goto label_11361c;
        case 0x113620u: goto label_113620;
        default: break;
    }

    ctx->pc = 0x112c00u;

label_112c00:
    // 0x112c00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x112c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_112c04:
    // 0x112c04: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x112c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_112c08:
    // 0x112c08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x112c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_112c0c:
    // 0x112c0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x112c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_112c10:
    // 0x112c10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x112c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_112c14:
    // 0x112c14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x112c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_112c18:
    // 0x112c18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x112c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_112c1c:
    // 0x112c1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x112c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_112c20:
    // 0x112c20: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x112c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_112c24:
    // 0x112c24: 0x20630001  addi        $v1, $v1, 0x1
    ctx->pc = 0x112c24u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_112c28:
    // 0x112c28: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x112c28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_112c2c:
    // 0x112c2c: 0x10200274  beqz        $at, . + 4 + (0x274 << 2)
label_112c30:
    if (ctx->pc == 0x112C30u) {
        ctx->pc = 0x112C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C2Cu;
        // 0x112c30: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112C34u;
        goto label_112c34;
    }
    ctx->pc = 0x112C2Cu;
    {
        const bool branch_taken_0x112c2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C2Cu;
        // 0x112c30: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c2c) {
            ctx->pc = 0x113600u;
            goto label_113600;
        }
    }
    ctx->pc = 0x112C34u;
label_112c34:
    // 0x112c34: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x112c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_112c38:
    // 0x112c38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_112c3c:
    // 0x112c3c: 0x2484e4a0  addiu       $a0, $a0, -0x1B60
    ctx->pc = 0x112c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960288));
label_112c40:
    // 0x112c40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x112c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_112c44:
    // 0x112c44: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x112c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_112c48:
    // 0x112c48: 0x600008  jr          $v1
label_112c4c:
    if (ctx->pc == 0x112C4Cu) {
        ctx->pc = 0x112C50u;
        goto label_112c50;
    }
    ctx->pc = 0x112C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x112C50u: goto label_112c50;
            case 0x112CE0u: goto label_112ce0;
            case 0x112EE8u: goto label_112ee8;
            case 0x112F48u: goto label_112f48;
            case 0x1131C8u: goto label_1131c8;
            case 0x1131ECu: goto label_1131ec;
            case 0x11331Cu: goto label_11331c;
            case 0x113378u: goto label_113378;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112C48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x112C50u;
label_112c50:
    // 0x112c50: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x112c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_112c54:
    // 0x112c54: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x112c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112c58:
    // 0x112c58: 0x1000001b  b           . + 4 + (0x1B << 2)
label_112c5c:
    if (ctx->pc == 0x112C5Cu) {
        ctx->pc = 0x112C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C58u;
        // 0x112c5c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112C60u;
        goto label_112c60;
    }
    ctx->pc = 0x112C58u;
    {
        const bool branch_taken_0x112c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C58u;
        // 0x112c5c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c58) {
            ctx->pc = 0x112CC8u;
            goto label_112cc8;
        }
    }
    ctx->pc = 0x112C60u;
label_112c60:
    // 0x112c60: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x112c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_112c64:
    // 0x112c64: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x112c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_112c68:
    // 0x112c68: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x112c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_112c6c:
    // 0x112c6c: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x112c6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_112c70:
    // 0x112c70: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x112c70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_112c74:
    // 0x112c74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x112c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_112c78:
    // 0x112c78: 0x8c722cd8  lw          $s2, 0x2CD8($v1)
    ctx->pc = 0x112c78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_112c7c:
    // 0x112c7c: 0x92430220  lbu         $v1, 0x220($s2)
    ctx->pc = 0x112c7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 544)));
label_112c80:
    // 0x112c80: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_112c84:
    if (ctx->pc == 0x112C84u) {
        ctx->pc = 0x112C88u;
        goto label_112c88;
    }
    ctx->pc = 0x112C80u;
    {
        const bool branch_taken_0x112c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x112c80) {
            ctx->pc = 0x112CBCu;
            goto label_112cbc;
        }
    }
    ctx->pc = 0x112C88u;
label_112c88:
    // 0x112c88: 0xa2400220  sb          $zero, 0x220($s2)
    ctx->pc = 0x112c88u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 544), (uint8_t)GPR_U32(ctx, 0));
label_112c8c:
    // 0x112c8c: 0x92420220  lbu         $v0, 0x220($s2)
    ctx->pc = 0x112c8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 544)));
label_112c90:
    // 0x112c90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_112c94:
    if (ctx->pc == 0x112C94u) {
        ctx->pc = 0x112C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C90u;
        // 0x112c94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112C98u;
        goto label_112c98;
    }
    ctx->pc = 0x112C90u;
    {
        const bool branch_taken_0x112c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C90u;
        // 0x112c94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c90) {
            ctx->pc = 0x112CA8u;
            goto label_112ca8;
        }
    }
    ctx->pc = 0x112C98u;
label_112c98:
    // 0x112c98: 0xc042570  jal         func_1095C0
label_112c9c:
    if (ctx->pc == 0x112C9Cu) {
        ctx->pc = 0x112C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C98u;
        // 0x112c9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112CA0u;
        goto label_112ca0;
    }
    ctx->pc = 0x112C98u;
    SET_GPR_U32(ctx, 31, 0x112CA0u);
    ctx->pc = 0x112C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C98u;
    // 0x112c9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x112C98u, 0x112CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CA0u;
label_112ca0:
    // 0x112ca0: 0x10000006  b           . + 4 + (0x6 << 2)
label_112ca4:
    if (ctx->pc == 0x112CA4u) {
        ctx->pc = 0x112CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CA0u;
        // 0x112ca4: 0xa24001d3  sb          $zero, 0x1D3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112CA8u;
        goto label_112ca8;
    }
    ctx->pc = 0x112CA0u;
    {
        const bool branch_taken_0x112ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CA0u;
        // 0x112ca4: 0xa24001d3  sb          $zero, 0x1D3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ca0) {
            ctx->pc = 0x112CBCu;
            goto label_112cbc;
        }
    }
    ctx->pc = 0x112CA8u;
label_112ca8:
    // 0x112ca8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x112ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_112cac:
    // 0x112cac: 0xc042570  jal         func_1095C0
label_112cb0:
    if (ctx->pc == 0x112CB0u) {
        ctx->pc = 0x112CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CACu;
        // 0x112cb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112CB4u;
        goto label_112cb4;
    }
    ctx->pc = 0x112CACu;
    SET_GPR_U32(ctx, 31, 0x112CB4u);
    ctx->pc = 0x112CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CACu;
    // 0x112cb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x112CACu, 0x112CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CB4u;
label_112cb4:
    // 0x112cb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x112cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_112cb8:
    // 0x112cb8: 0xa24301d3  sb          $v1, 0x1D3($s2)
    ctx->pc = 0x112cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 467), (uint8_t)GPR_U32(ctx, 3));
label_112cbc:
    // 0x112cbc: 0x0  nop
    ctx->pc = 0x112cbcu;
    // NOP
label_112cc0:
    // 0x112cc0: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x112cc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_112cc4:
    // 0x112cc4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x112cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_112cc8:
    // 0x112cc8: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x112cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_112ccc:
    // 0x112ccc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x112cccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_112cd0:
    // 0x112cd0: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_112cd4:
    if (ctx->pc == 0x112CD4u) {
        ctx->pc = 0x112CD8u;
        goto label_112cd8;
    }
    ctx->pc = 0x112CD0u;
    {
        const bool branch_taken_0x112cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112cd0) {
            ctx->pc = 0x112C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112c60;
        }
    }
    ctx->pc = 0x112CD8u;
label_112cd8:
    // 0x112cd8: 0x1000024a  b           . + 4 + (0x24A << 2)
label_112cdc:
    if (ctx->pc == 0x112CDCu) {
        ctx->pc = 0x112CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CD8u;
        // 0x112cdc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112CE0u;
        goto label_112ce0;
    }
    ctx->pc = 0x112CD8u;
    {
        const bool branch_taken_0x112cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CD8u;
        // 0x112cdc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112cd8) {
            ctx->pc = 0x113604u;
            goto label_113604;
        }
    }
    ctx->pc = 0x112CE0u;
label_112ce0:
    // 0x112ce0: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x112ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_112ce4:
    // 0x112ce4: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_112ce8:
    if (ctx->pc == 0x112CE8u) {
        ctx->pc = 0x112CECu;
        goto label_112cec;
    }
    ctx->pc = 0x112CE4u;
    {
        const bool branch_taken_0x112ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112ce4) {
            ctx->pc = 0x112D2Cu;
            goto label_112d2c;
        }
    }
    ctx->pc = 0x112CECu;
label_112cec:
    // 0x112cec: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x112cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_112cf0:
    // 0x112cf0: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x112cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_112cf4:
    // 0x112cf4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x112cf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_112cf8:
    // 0x112cf8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x112cf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_112cfc:
    // 0x112cfc: 0x320f809  jalr        $t9
label_112d00:
    if (ctx->pc == 0x112D00u) {
        ctx->pc = 0x112D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CFCu;
        // 0x112d00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112D04u;
        goto label_112d04;
    }
    ctx->pc = 0x112CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x112D04u);
        ctx->pc = 0x112D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CFCu;
        // 0x112d00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112CFCu, 0x112D04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112D04u;
label_112d04:
    // 0x112d04: 0x92230043  lbu         $v1, 0x43($s1)
    ctx->pc = 0x112d04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 67)));
label_112d08:
    // 0x112d08: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_112d0c:
    if (ctx->pc == 0x112D0Cu) {
        ctx->pc = 0x112D10u;
        goto label_112d10;
    }
    ctx->pc = 0x112D08u;
    {
        const bool branch_taken_0x112d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x112d08) {
            ctx->pc = 0x112D24u;
            goto label_112d24;
        }
    }
    ctx->pc = 0x112D10u;
label_112d10:
    // 0x112d10: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x112d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_112d14:
    // 0x112d14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x112d14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_112d18:
    // 0x112d18: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x112d18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_112d1c:
    // 0x112d1c: 0x320f809  jalr        $t9
label_112d20:
    if (ctx->pc == 0x112D20u) {
        ctx->pc = 0x112D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D1Cu;
        // 0x112d20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112D24u;
        goto label_112d24;
    }
    ctx->pc = 0x112D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x112D24u);
        ctx->pc = 0x112D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D1Cu;
        // 0x112d20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112D1Cu, 0x112D24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112D24u;
label_112d24:
    // 0x112d24: 0xa2200043  sb          $zero, 0x43($s1)
    ctx->pc = 0x112d24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 67), (uint8_t)GPR_U32(ctx, 0));
label_112d28:
    // 0x112d28: 0xa2200041  sb          $zero, 0x41($s1)
    ctx->pc = 0x112d28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 65), (uint8_t)GPR_U32(ctx, 0));
label_112d2c:
    // 0x112d2c: 0x92230040  lbu         $v1, 0x40($s1)
    ctx->pc = 0x112d2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 64)));
label_112d30:
    // 0x112d30: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_112d34:
    if (ctx->pc == 0x112D34u) {
        ctx->pc = 0x112D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D30u;
        // 0x112d34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112D38u;
        goto label_112d38;
    }
    ctx->pc = 0x112D30u;
    {
        const bool branch_taken_0x112d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x112D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D30u;
        // 0x112d34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d30) {
            ctx->pc = 0x112D84u;
            goto label_112d84;
        }
    }
    ctx->pc = 0x112D38u;
label_112d38:
    // 0x112d38: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x112d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_112d3c:
    // 0x112d3c: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x112d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_112d40:
    // 0x112d40: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x112d40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_112d44:
    // 0x112d44: 0x0  nop
    ctx->pc = 0x112d44u;
    // NOP
label_112d48:
    // 0x112d48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x112d48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_112d4c:
    // 0x112d4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x112d4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_112d50:
    // 0x112d50: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x112d50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_112d54:
    // 0x112d54: 0x0  nop
    ctx->pc = 0x112d54u;
    // NOP
label_112d58:
    // 0x112d58: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
label_112d5c:
    if (ctx->pc == 0x112D5Cu) {
        ctx->pc = 0x112D60u;
        goto label_112d60;
    }
    ctx->pc = 0x112D58u;
    {
        const bool branch_taken_0x112d58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x112d58) {
            ctx->pc = 0x112D64u;
            goto label_112d64;
        }
    }
    ctx->pc = 0x112D60u;
label_112d60:
    // 0x112d60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x112d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_112d64:
    // 0x112d64: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x112d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_112d68:
    // 0x112d68: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x112d68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_112d6c:
    // 0x112d6c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_112d70:
    if (ctx->pc == 0x112D70u) {
        ctx->pc = 0x112D74u;
        goto label_112d74;
    }
    ctx->pc = 0x112D6Cu;
    {
        const bool branch_taken_0x112d6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x112d6c) {
            ctx->pc = 0x112D80u;
            goto label_112d80;
        }
    }
    ctx->pc = 0x112D74u;
label_112d74:
    // 0x112d74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x112d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_112d78:
    // 0x112d78: 0x10000221  b           . + 4 + (0x221 << 2)
label_112d7c:
    if (ctx->pc == 0x112D7Cu) {
        ctx->pc = 0x112D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D78u;
        // 0x112d7c: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112D80u;
        goto label_112d80;
    }
    ctx->pc = 0x112D78u;
    {
        const bool branch_taken_0x112d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D78u;
        // 0x112d7c: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d78) {
            ctx->pc = 0x113600u;
            goto label_113600;
        }
    }
    ctx->pc = 0x112D80u;
label_112d80:
    // 0x112d80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x112d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112d84:
    // 0x112d84: 0x1000001a  b           . + 4 + (0x1A << 2)
label_112d88:
    if (ctx->pc == 0x112D88u) {
        ctx->pc = 0x112D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D84u;
        // 0x112d88: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112D8Cu;
        goto label_112d8c;
    }
    ctx->pc = 0x112D84u;
    {
        const bool branch_taken_0x112d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D84u;
        // 0x112d88: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d84) {
            ctx->pc = 0x112DF0u;
            goto label_112df0;
        }
    }
    ctx->pc = 0x112D8Cu;
label_112d8c:
    // 0x112d8c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x112d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_112d90:
    // 0x112d90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x112d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_112d94:
    // 0x112d94: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x112d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_112d98:
    // 0x112d98: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x112d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_112d9c:
    // 0x112d9c: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x112d9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_112da0:
    // 0x112da0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x112da0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_112da4:
    // 0x112da4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x112da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_112da8:
    // 0x112da8: 0x8c722cd8  lw          $s2, 0x2CD8($v1)
    ctx->pc = 0x112da8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_112dac:
    // 0x112dac: 0x92430220  lbu         $v1, 0x220($s2)
    ctx->pc = 0x112dacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 544)));
label_112db0:
    // 0x112db0: 0x1065000d  beq         $v1, $a1, . + 4 + (0xD << 2)
label_112db4:
    if (ctx->pc == 0x112DB4u) {
        ctx->pc = 0x112DB8u;
        goto label_112db8;
    }
    ctx->pc = 0x112DB0u;
    {
        const bool branch_taken_0x112db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x112db0) {
            ctx->pc = 0x112DE8u;
            goto label_112de8;
        }
    }
    ctx->pc = 0x112DB8u;
label_112db8:
    // 0x112db8: 0xa2450220  sb          $a1, 0x220($s2)
    ctx->pc = 0x112db8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 544), (uint8_t)GPR_U32(ctx, 5));
label_112dbc:
    // 0x112dbc: 0x92420220  lbu         $v0, 0x220($s2)
    ctx->pc = 0x112dbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 544)));
label_112dc0:
    // 0x112dc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_112dc4:
    if (ctx->pc == 0x112DC4u) {
        ctx->pc = 0x112DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DC0u;
        // 0x112dc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112DC8u;
        goto label_112dc8;
    }
    ctx->pc = 0x112DC0u;
    {
        const bool branch_taken_0x112dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DC0u;
        // 0x112dc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112dc0) {
            ctx->pc = 0x112DD8u;
            goto label_112dd8;
        }
    }
    ctx->pc = 0x112DC8u;
label_112dc8:
    // 0x112dc8: 0xc042570  jal         func_1095C0
label_112dcc:
    if (ctx->pc == 0x112DCCu) {
        ctx->pc = 0x112DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DC8u;
        // 0x112dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112DD0u;
        goto label_112dd0;
    }
    ctx->pc = 0x112DC8u;
    SET_GPR_U32(ctx, 31, 0x112DD0u);
    ctx->pc = 0x112DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112DC8u;
    // 0x112dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x112DC8u, 0x112DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DD0u;
label_112dd0:
    // 0x112dd0: 0x10000005  b           . + 4 + (0x5 << 2)
label_112dd4:
    if (ctx->pc == 0x112DD4u) {
        ctx->pc = 0x112DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DD0u;
        // 0x112dd4: 0xa24001d3  sb          $zero, 0x1D3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112DD8u;
        goto label_112dd8;
    }
    ctx->pc = 0x112DD0u;
    {
        const bool branch_taken_0x112dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DD0u;
        // 0x112dd4: 0xa24001d3  sb          $zero, 0x1D3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112dd0) {
            ctx->pc = 0x112DE8u;
            goto label_112de8;
        }
    }
    ctx->pc = 0x112DD8u;
label_112dd8:
    // 0x112dd8: 0xc042570  jal         func_1095C0
label_112ddc:
    if (ctx->pc == 0x112DDCu) {
        ctx->pc = 0x112DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DD8u;
        // 0x112ddc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112DE0u;
        goto label_112de0;
    }
    ctx->pc = 0x112DD8u;
    SET_GPR_U32(ctx, 31, 0x112DE0u);
    ctx->pc = 0x112DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112DD8u;
    // 0x112ddc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x112DD8u, 0x112DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DE0u;
label_112de0:
    // 0x112de0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x112de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_112de4:
    // 0x112de4: 0xa24301d3  sb          $v1, 0x1D3($s2)
    ctx->pc = 0x112de4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 467), (uint8_t)GPR_U32(ctx, 3));
label_112de8:
    // 0x112de8: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x112de8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_112dec:
    // 0x112dec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x112decu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_112df0:
    // 0x112df0: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x112df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_112df4:
    // 0x112df4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x112df4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_112df8:
    // 0x112df8: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_112dfc:
    if (ctx->pc == 0x112DFCu) {
        ctx->pc = 0x112E00u;
        goto label_112e00;
    }
    ctx->pc = 0x112DF8u;
    {
        const bool branch_taken_0x112df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112df8) {
            ctx->pc = 0x112D8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112d8c;
        }
    }
    ctx->pc = 0x112E00u;
label_112e00:
    // 0x112e00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x112e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112e04:
    // 0x112e04: 0x1000000f  b           . + 4 + (0xF << 2)
label_112e08:
    if (ctx->pc == 0x112E08u) {
        ctx->pc = 0x112E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E04u;
        // 0x112e08: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112E0Cu;
        goto label_112e0c;
    }
    ctx->pc = 0x112E04u;
    {
        const bool branch_taken_0x112e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E04u;
        // 0x112e08: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e04) {
            ctx->pc = 0x112E44u;
            goto label_112e44;
        }
    }
    ctx->pc = 0x112E0Cu;
label_112e0c:
    // 0x112e0c: 0xc044254  jal         func_110950
label_112e10:
    if (ctx->pc == 0x112E10u) {
        ctx->pc = 0x112E14u;
        goto label_112e14;
    }
    ctx->pc = 0x112E0Cu;
    SET_GPR_U32(ctx, 31, 0x112E14u);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x112E0Cu, 0x112E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E14u;
label_112e14:
    // 0x112e14: 0x24432cd8  addiu       $v1, $v0, 0x2CD8
    ctx->pc = 0x112e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
label_112e18:
    // 0x112e18: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x112e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_112e1c:
    // 0x112e1c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x112e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_112e20:
    // 0x112e20: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x112e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_112e24:
    // 0x112e24: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x112e24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_112e28:
    // 0x112e28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_112e2c:
    // 0x112e2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x112e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_112e30:
    // 0x112e30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x112e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_112e34:
    // 0x112e34: 0xc043da0  jal         func_10F680
label_112e38:
    if (ctx->pc == 0x112E38u) {
        ctx->pc = 0x112E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E34u;
        // 0x112e38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112E3Cu;
        goto label_112e3c;
    }
    ctx->pc = 0x112E34u;
    SET_GPR_U32(ctx, 31, 0x112E3Cu);
    ctx->pc = 0x112E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E34u;
    // 0x112e38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F680u, 0x112E34u, 0x112E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E3Cu;
label_112e3c:
    // 0x112e3c: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x112e3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_112e40:
    // 0x112e40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x112e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_112e44:
    // 0x112e44: 0x0  nop
    ctx->pc = 0x112e44u;
    // NOP
label_112e48:
    // 0x112e48: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x112e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_112e4c:
    // 0x112e4c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x112e4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_112e50:
    // 0x112e50: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_112e54:
    if (ctx->pc == 0x112E54u) {
        ctx->pc = 0x112E58u;
        goto label_112e58;
    }
    ctx->pc = 0x112E50u;
    {
        const bool branch_taken_0x112e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112e50) {
            ctx->pc = 0x112E0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112e0c;
        }
    }
    ctx->pc = 0x112E58u;
label_112e58:
    // 0x112e58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x112e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112e5c:
    // 0x112e5c: 0x10000018  b           . + 4 + (0x18 << 2)
label_112e60:
    if (ctx->pc == 0x112E60u) {
        ctx->pc = 0x112E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E5Cu;
        // 0x112e60: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112E64u;
        goto label_112e64;
    }
    ctx->pc = 0x112E5Cu;
    {
        const bool branch_taken_0x112e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E5Cu;
        // 0x112e60: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e5c) {
            ctx->pc = 0x112EC0u;
            goto label_112ec0;
        }
    }
    ctx->pc = 0x112E64u;
label_112e64:
    // 0x112e64: 0xc044254  jal         func_110950
label_112e68:
    if (ctx->pc == 0x112E68u) {
        ctx->pc = 0x112E6Cu;
        goto label_112e6c;
    }
    ctx->pc = 0x112E64u;
    SET_GPR_U32(ctx, 31, 0x112E6Cu);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x112E64u, 0x112E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E6Cu;
label_112e6c:
    // 0x112e6c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x112e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_112e70:
    // 0x112e70: 0x24442cd8  addiu       $a0, $v0, 0x2CD8
    ctx->pc = 0x112e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
label_112e74:
    // 0x112e74: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x112e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_112e78:
    // 0x112e78: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x112e78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_112e7c:
    // 0x112e7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_112e80:
    // 0x112e80: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x112e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_112e84:
    // 0x112e84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x112e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_112e88:
    // 0x112e88: 0x90830224  lbu         $v1, 0x224($a0)
    ctx->pc = 0x112e88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
label_112e8c:
    // 0x112e8c: 0x31efc  dsll32      $v1, $v1, 27
    ctx->pc = 0x112e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 27));
label_112e90:
    // 0x112e90: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x112e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
label_112e94:
    // 0x112e94: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_112e98:
    if (ctx->pc == 0x112E98u) {
        ctx->pc = 0x112E9Cu;
        goto label_112e9c;
    }
    ctx->pc = 0x112E94u;
    {
        const bool branch_taken_0x112e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112e94) {
            ctx->pc = 0x112EB8u;
            goto label_112eb8;
        }
    }
    ctx->pc = 0x112E9Cu;
label_112e9c:
    // 0x112e9c: 0x8c830224  lw          $v1, 0x224($a0)
    ctx->pc = 0x112e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
label_112ea0:
    // 0x112ea0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x112ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_112ea4:
    // 0x112ea4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x112ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_112ea8:
    // 0x112ea8: 0xac830224  sw          $v1, 0x224($a0)
    ctx->pc = 0x112ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 3));
label_112eac:
    // 0x112eac: 0x8c830224  lw          $v1, 0x224($a0)
    ctx->pc = 0x112eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
label_112eb0:
    // 0x112eb0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x112eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_112eb4:
    // 0x112eb4: 0xac830224  sw          $v1, 0x224($a0)
    ctx->pc = 0x112eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 3));
label_112eb8:
    // 0x112eb8: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x112eb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_112ebc:
    // 0x112ebc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x112ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_112ec0:
    // 0x112ec0: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x112ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_112ec4:
    // 0x112ec4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x112ec4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_112ec8:
    // 0x112ec8: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_112ecc:
    if (ctx->pc == 0x112ECCu) {
        ctx->pc = 0x112ED0u;
        goto label_112ed0;
    }
    ctx->pc = 0x112EC8u;
    {
        const bool branch_taken_0x112ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112ec8) {
            ctx->pc = 0x112E64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112e64;
        }
    }
    ctx->pc = 0x112ED0u;
label_112ed0:
    // 0x112ed0: 0xa2200042  sb          $zero, 0x42($s1)
    ctx->pc = 0x112ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 0));
label_112ed4:
    // 0x112ed4: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x112ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_112ed8:
    // 0x112ed8: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x112ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_112edc:
    // 0x112edc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x112edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_112ee0:
    // 0x112ee0: 0x100001c7  b           . + 4 + (0x1C7 << 2)
label_112ee4:
    if (ctx->pc == 0x112EE4u) {
        ctx->pc = 0x112EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112EE0u;
        // 0x112ee4: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112EE8u;
        goto label_112ee8;
    }
    ctx->pc = 0x112EE0u;
    {
        const bool branch_taken_0x112ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112EE0u;
        // 0x112ee4: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ee0) {
            ctx->pc = 0x113600u;
            goto label_113600;
        }
    }
    ctx->pc = 0x112EE8u;
label_112ee8:
    // 0x112ee8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x112ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112eec:
    // 0x112eec: 0x1000000d  b           . + 4 + (0xD << 2)
label_112ef0:
    if (ctx->pc == 0x112EF0u) {
        ctx->pc = 0x112EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112EECu;
        // 0x112ef0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112EF4u;
        goto label_112ef4;
    }
    ctx->pc = 0x112EECu;
    {
        const bool branch_taken_0x112eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112EECu;
        // 0x112ef0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112eec) {
            ctx->pc = 0x112F24u;
            goto label_112f24;
        }
    }
    ctx->pc = 0x112EF4u;
label_112ef4:
    // 0x112ef4: 0xc044254  jal         func_110950
label_112ef8:
    if (ctx->pc == 0x112EF8u) {
        ctx->pc = 0x112EFCu;
        goto label_112efc;
    }
    ctx->pc = 0x112EF4u;
    SET_GPR_U32(ctx, 31, 0x112EFCu);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x112EF4u, 0x112EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112EFCu;
label_112efc:
    // 0x112efc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x112efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_112f00:
    // 0x112f00: 0x24442cd8  addiu       $a0, $v0, 0x2CD8
    ctx->pc = 0x112f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
label_112f04:
    // 0x112f04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x112f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_112f08:
    // 0x112f08: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x112f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_112f0c:
    // 0x112f0c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x112f0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_112f10:
    // 0x112f10: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x112f10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_112f14:
    // 0x112f14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_112f18:
    // 0x112f18: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x112f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_112f1c:
    // 0x112f1c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x112f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_112f20:
    // 0x112f20: 0xac600228  sw          $zero, 0x228($v1)
    ctx->pc = 0x112f20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 552), GPR_U32(ctx, 0));
label_112f24:
    // 0x112f24: 0x0  nop
    ctx->pc = 0x112f24u;
    // NOP
label_112f28:
    // 0x112f28: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x112f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_112f2c:
    // 0x112f2c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x112f2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_112f30:
    // 0x112f30: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_112f34:
    if (ctx->pc == 0x112F34u) {
        ctx->pc = 0x112F38u;
        goto label_112f38;
    }
    ctx->pc = 0x112F30u;
    {
        const bool branch_taken_0x112f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112f30) {
            ctx->pc = 0x112EF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112ef4;
        }
    }
    ctx->pc = 0x112F38u;
label_112f38:
    // 0x112f38: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x112f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_112f3c:
    // 0x112f3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x112f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_112f40:
    // 0x112f40: 0x100001af  b           . + 4 + (0x1AF << 2)
label_112f44:
    if (ctx->pc == 0x112F44u) {
        ctx->pc = 0x112F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F40u;
        // 0x112f44: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112F48u;
        goto label_112f48;
    }
    ctx->pc = 0x112F40u;
    {
        const bool branch_taken_0x112f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F40u;
        // 0x112f44: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f40) {
            ctx->pc = 0x113600u;
            goto label_113600;
        }
    }
    ctx->pc = 0x112F48u;
label_112f48:
    // 0x112f48: 0x8e320038  lw          $s2, 0x38($s1)
    ctx->pc = 0x112f48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_112f4c:
    // 0x112f4c: 0x6410004  bgez        $s2, . + 4 + (0x4 << 2)
label_112f50:
    if (ctx->pc == 0x112F50u) {
        ctx->pc = 0x112F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F4Cu;
        // 0x112f50: 0x12082a  slt         $at, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x112F54u;
        goto label_112f54;
    }
    ctx->pc = 0x112F4Cu;
    {
        const bool branch_taken_0x112f4c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x112F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F4Cu;
        // 0x112f50: 0x12082a  slt         $at, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f4c) {
            ctx->pc = 0x112F60u;
            goto label_112f60;
        }
    }
    ctx->pc = 0x112F54u;
label_112f54:
    // 0x112f54: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x112f54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_112f58:
    // 0x112f58: 0x0  nop
    ctx->pc = 0x112f58u;
    // NOP
label_112f5c:
    // 0x112f5c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x112f5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_112f60:
    // 0x112f60: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_112f64:
    if (ctx->pc == 0x112F64u) {
        ctx->pc = 0x112F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F60u;
        // 0x112f64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112F68u;
        goto label_112f68;
    }
    ctx->pc = 0x112F60u;
    {
        const bool branch_taken_0x112f60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x112F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F60u;
        // 0x112f64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f60) {
            ctx->pc = 0x112FACu;
            goto label_112fac;
        }
    }
    ctx->pc = 0x112F68u;
label_112f68:
    // 0x112f68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x112f68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112f6c:
    // 0x112f6c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x112f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_112f70:
    // 0x112f70: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x112f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_112f74:
    // 0x112f74: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x112f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_112f78:
    // 0x112f78: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x112f78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_112f7c:
    // 0x112f7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_112f80:
    // 0x112f80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_112f84:
    // 0x112f84: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x112f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_112f88:
    // 0x112f88: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x112f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_112f8c:
    // 0x112f8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x112f8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_112f90:
    // 0x112f90: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x112f90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_112f94:
    // 0x112f94: 0x320f809  jalr        $t9
label_112f98:
    if (ctx->pc == 0x112F98u) {
        ctx->pc = 0x112F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F94u;
        // 0x112f98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112F9Cu;
        goto label_112f9c;
    }
    ctx->pc = 0x112F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x112F9Cu);
        ctx->pc = 0x112F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F94u;
        // 0x112f98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112F94u, 0x112F9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112F9Cu;
label_112f9c:
    // 0x112f9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x112f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_112fa0:
    // 0x112fa0: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x112fa0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_112fa4:
    // 0x112fa4: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_112fa8:
    if (ctx->pc == 0x112FA8u) {
        ctx->pc = 0x112FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FA4u;
        // 0x112fa8: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112FACu;
        goto label_112fac;
    }
    ctx->pc = 0x112FA4u;
    {
        const bool branch_taken_0x112fa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x112FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FA4u;
        // 0x112fa8: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112fa4) {
            ctx->pc = 0x112F6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112f6c;
        }
    }
    ctx->pc = 0x112FACu;
label_112fac:
    // 0x112fac: 0x0  nop
    ctx->pc = 0x112facu;
    // NOP
label_112fb0:
    // 0x112fb0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x112fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_112fb4:
    // 0x112fb4: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x112fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_112fb8:
    // 0x112fb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x112fb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_112fbc:
    // 0x112fbc: 0x0  nop
    ctx->pc = 0x112fbcu;
    // NOP
label_112fc0:
    // 0x112fc0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x112fc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_112fc4:
    // 0x112fc4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x112fc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_112fc8:
    // 0x112fc8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x112fc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_112fcc:
    // 0x112fcc: 0x0  nop
    ctx->pc = 0x112fccu;
    // NOP
label_112fd0:
    // 0x112fd0: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
label_112fd4:
    if (ctx->pc == 0x112FD4u) {
        ctx->pc = 0x112FD8u;
        goto label_112fd8;
    }
    ctx->pc = 0x112FD0u;
    {
        const bool branch_taken_0x112fd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x112fd0) {
            ctx->pc = 0x112FDCu;
            goto label_112fdc;
        }
    }
    ctx->pc = 0x112FD8u;
label_112fd8:
    // 0x112fd8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x112fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_112fdc:
    // 0x112fdc: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x112fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_112fe0:
    // 0x112fe0: 0x1464001a  bne         $v1, $a0, . + 4 + (0x1A << 2)
label_112fe4:
    if (ctx->pc == 0x112FE4u) {
        ctx->pc = 0x112FE8u;
        goto label_112fe8;
    }
    ctx->pc = 0x112FE0u;
    {
        const bool branch_taken_0x112fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x112fe0) {
            ctx->pc = 0x11304Cu;
            goto label_11304c;
        }
    }
    ctx->pc = 0x112FE8u;
label_112fe8:
    // 0x112fe8: 0x8f8685f4  lw          $a2, -0x7A0C($gp)
    ctx->pc = 0x112fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_112fec:
    // 0x112fec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x112fecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112ff0:
    // 0x112ff0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x112ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_112ff4:
    // 0x112ff4: 0x10000012  b           . + 4 + (0x12 << 2)
label_112ff8:
    if (ctx->pc == 0x112FF8u) {
        ctx->pc = 0x112FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FF4u;
        // 0x112ff8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112FFCu;
        goto label_112ffc;
    }
    ctx->pc = 0x112FF4u;
    {
        const bool branch_taken_0x112ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FF4u;
        // 0x112ff8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ff4) {
            ctx->pc = 0x113040u;
            goto label_113040;
        }
    }
    ctx->pc = 0x112FFCu;
label_112ffc:
    // 0x112ffc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x112ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_113000:
    // 0x113000: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x113000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_113004:
    // 0x113004: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x113004u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_113008:
    // 0x113008: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_11300c:
    // 0x11300c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x11300cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_113010:
    // 0x113010: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x113010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_113014:
    // 0x113014: 0x90830224  lbu         $v1, 0x224($a0)
    ctx->pc = 0x113014u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
label_113018:
    // 0x113018: 0x31efc  dsll32      $v1, $v1, 27
    ctx->pc = 0x113018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 27));
label_11301c:
    // 0x11301c: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x11301cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
label_113020:
    // 0x113020: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_113024:
    if (ctx->pc == 0x113024u) {
        ctx->pc = 0x113028u;
        goto label_113028;
    }
    ctx->pc = 0x113020u;
    {
        const bool branch_taken_0x113020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113020) {
            ctx->pc = 0x113038u;
            goto label_113038;
        }
    }
    ctx->pc = 0x113028u;
label_113028:
    // 0x113028: 0xc042118  jal         func_108460
label_11302c:
    if (ctx->pc == 0x11302Cu) {
        ctx->pc = 0x11302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113028u;
        // 0x11302c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113030u;
        goto label_113030;
    }
    ctx->pc = 0x113028u;
    SET_GPR_U32(ctx, 31, 0x113030u);
    ctx->pc = 0x11302Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113028u;
    // 0x11302c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x113028u, 0x113030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113030u;
label_113030:
    // 0x113030: 0x10000006  b           . + 4 + (0x6 << 2)
label_113034:
    if (ctx->pc == 0x113034u) {
        ctx->pc = 0x113038u;
        goto label_113038;
    }
    ctx->pc = 0x113030u;
    {
        const bool branch_taken_0x113030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113030) {
            ctx->pc = 0x11304Cu;
            goto label_11304c;
        }
    }
    ctx->pc = 0x113038u;
label_113038:
    // 0x113038: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x113038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_11303c:
    // 0x11303c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11303cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_113040:
    // 0x113040: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x113040u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_113044:
    // 0x113044: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_113048:
    if (ctx->pc == 0x113048u) {
        ctx->pc = 0x11304Cu;
        goto label_11304c;
    }
    ctx->pc = 0x113044u;
    {
        const bool branch_taken_0x113044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113044) {
            ctx->pc = 0x112FFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112ffc;
        }
    }
    ctx->pc = 0x11304Cu;
label_11304c:
    // 0x11304c: 0x0  nop
    ctx->pc = 0x11304cu;
    // NOP
label_113050:
    // 0x113050: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x113050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_113054:
    // 0x113054: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x113054u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113058:
    // 0x113058: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x113058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11305c:
    // 0x11305c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11305cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113060:
    // 0x113060: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x113060u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113064:
    // 0x113064: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x113064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_113068:
    // 0x113068: 0x10000015  b           . + 4 + (0x15 << 2)
label_11306c:
    if (ctx->pc == 0x11306Cu) {
        ctx->pc = 0x11306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113068u;
        // 0x11306c: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113070u;
        goto label_113070;
    }
    ctx->pc = 0x113068u;
    {
        const bool branch_taken_0x113068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113068u;
        // 0x11306c: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113068) {
            ctx->pc = 0x1130C0u;
            goto label_1130c0;
        }
    }
    ctx->pc = 0x113070u;
label_113070:
    // 0x113070: 0xc044254  jal         func_110950
label_113074:
    if (ctx->pc == 0x113074u) {
        ctx->pc = 0x113078u;
        goto label_113078;
    }
    ctx->pc = 0x113070u;
    SET_GPR_U32(ctx, 31, 0x113078u);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x113070u, 0x113078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113078u;
label_113078:
    // 0x113078: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x113078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_11307c:
    // 0x11307c: 0x24442cd8  addiu       $a0, $v0, 0x2CD8
    ctx->pc = 0x11307cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
label_113080:
    // 0x113080: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x113080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_113084:
    // 0x113084: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x113084u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_113088:
    // 0x113088: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113088u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_11308c:
    // 0x11308c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x11308cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_113090:
    // 0x113090: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x113090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_113094:
    // 0x113094: 0x90830224  lbu         $v1, 0x224($a0)
    ctx->pc = 0x113094u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
label_113098:
    // 0x113098: 0x31efc  dsll32      $v1, $v1, 27
    ctx->pc = 0x113098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 27));
label_11309c:
    // 0x11309c: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x11309cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
label_1130a0:
    // 0x1130a0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1130a4:
    if (ctx->pc == 0x1130A4u) {
        ctx->pc = 0x1130A8u;
        goto label_1130a8;
    }
    ctx->pc = 0x1130A0u;
    {
        const bool branch_taken_0x1130a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1130a0) {
            ctx->pc = 0x1130B8u;
            goto label_1130b8;
        }
    }
    ctx->pc = 0x1130A8u;
label_1130a8:
    // 0x1130a8: 0x8c830228  lw          $v1, 0x228($a0)
    ctx->pc = 0x1130a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
label_1130ac:
    // 0x1130ac: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1130b0:
    if (ctx->pc == 0x1130B0u) {
        ctx->pc = 0x1130B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130ACu;
        // 0x1130b0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1130B4u;
        goto label_1130b4;
    }
    ctx->pc = 0x1130ACu;
    {
        const bool branch_taken_0x1130ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1130B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130ACu;
        // 0x1130b0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1130ac) {
            ctx->pc = 0x1130B8u;
            goto label_1130b8;
        }
    }
    ctx->pc = 0x1130B4u;
label_1130b4:
    // 0x1130b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1130b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1130b8:
    // 0x1130b8: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x1130b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_1130bc:
    // 0x1130bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1130bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1130c0:
    // 0x1130c0: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1130c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1130c4:
    // 0x1130c4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1130c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1130c8:
    // 0x1130c8: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_1130cc:
    if (ctx->pc == 0x1130CCu) {
        ctx->pc = 0x1130D0u;
        goto label_1130d0;
    }
    ctx->pc = 0x1130C8u;
    {
        const bool branch_taken_0x1130c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1130c8) {
            ctx->pc = 0x113070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113070;
        }
    }
    ctx->pc = 0x1130D0u;
label_1130d0:
    // 0x1130d0: 0x1672014b  bne         $s3, $s2, . + 4 + (0x14B << 2)
label_1130d4:
    if (ctx->pc == 0x1130D4u) {
        ctx->pc = 0x1130D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130D0u;
        // 0x1130d4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1130D8u;
        goto label_1130d8;
    }
    ctx->pc = 0x1130D0u;
    {
        const bool branch_taken_0x1130d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        ctx->pc = 0x1130D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130D0u;
        // 0x1130d4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1130d0) {
            ctx->pc = 0x113600u;
            goto label_113600;
        }
    }
    ctx->pc = 0x1130D8u;
label_1130d8:
    // 0x1130d8: 0xa2230042  sb          $v1, 0x42($s1)
    ctx->pc = 0x1130d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 3));
label_1130dc:
    // 0x1130dc: 0x8e320038  lw          $s2, 0x38($s1)
    ctx->pc = 0x1130dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1130e0:
    // 0x1130e0: 0x6410004  bgez        $s2, . + 4 + (0x4 << 2)
label_1130e4:
    if (ctx->pc == 0x1130E4u) {
        ctx->pc = 0x1130E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130E0u;
        // 0x1130e4: 0x12082a  slt         $at, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1130E8u;
        goto label_1130e8;
    }
    ctx->pc = 0x1130E0u;
    {
        const bool branch_taken_0x1130e0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1130E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130E0u;
        // 0x1130e4: 0x12082a  slt         $at, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1130e0) {
            ctx->pc = 0x1130F4u;
            goto label_1130f4;
        }
    }
    ctx->pc = 0x1130E8u;
label_1130e8:
    // 0x1130e8: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1130e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1130ec:
    // 0x1130ec: 0x0  nop
    ctx->pc = 0x1130ecu;
    // NOP
label_1130f0:
    // 0x1130f0: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1130f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1130f4:
    // 0x1130f4: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_1130f8:
    if (ctx->pc == 0x1130F8u) {
        ctx->pc = 0x1130F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130F4u;
        // 0x1130f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1130FCu;
        goto label_1130fc;
    }
    ctx->pc = 0x1130F4u;
    {
        const bool branch_taken_0x1130f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1130F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130F4u;
        // 0x1130f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1130f4) {
            ctx->pc = 0x113140u;
            goto label_113140;
        }
    }
    ctx->pc = 0x1130FCu;
label_1130fc:
    // 0x1130fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1130fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113100:
    // 0x113100: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x113100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_113104:
    // 0x113104: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x113104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_113108:
    // 0x113108: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x113108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_11310c:
    // 0x11310c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x11310cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_113110:
    // 0x113110: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_113114:
    // 0x113114: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_113118:
    // 0x113118: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x113118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_11311c:
    // 0x11311c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x11311cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_113120:
    // 0x113120: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x113120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_113124:
    // 0x113124: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x113124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_113128:
    // 0x113128: 0x320f809  jalr        $t9
label_11312c:
    if (ctx->pc == 0x11312Cu) {
        ctx->pc = 0x11312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113128u;
        // 0x11312c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113130u;
        goto label_113130;
    }
    ctx->pc = 0x113128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x113130u);
        ctx->pc = 0x11312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113128u;
        // 0x11312c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113128u, 0x113130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113130u;
label_113130:
    // 0x113130: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x113130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_113134:
    // 0x113134: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x113134u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_113138:
    // 0x113138: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_11313c:
    if (ctx->pc == 0x11313Cu) {
        ctx->pc = 0x11313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113138u;
        // 0x11313c: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113140u;
        goto label_113140;
    }
    ctx->pc = 0x113138u;
    {
        const bool branch_taken_0x113138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113138u;
        // 0x11313c: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113138) {
            ctx->pc = 0x113100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113100;
        }
    }
    ctx->pc = 0x113140u;
label_113140:
    // 0x113140: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x113140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113144:
    // 0x113144: 0x10000016  b           . + 4 + (0x16 << 2)
label_113148:
    if (ctx->pc == 0x113148u) {
        ctx->pc = 0x113148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113144u;
        // 0x113148: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11314Cu;
        goto label_11314c;
    }
    ctx->pc = 0x113144u;
    {
        const bool branch_taken_0x113144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113144u;
        // 0x113148: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113144) {
            ctx->pc = 0x1131A0u;
            goto label_1131a0;
        }
    }
    ctx->pc = 0x11314Cu;
label_11314c:
    // 0x11314c: 0xc044254  jal         func_110950
label_113150:
    if (ctx->pc == 0x113150u) {
        ctx->pc = 0x113154u;
        goto label_113154;
    }
    ctx->pc = 0x11314Cu;
    SET_GPR_U32(ctx, 31, 0x113154u);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x11314Cu, 0x113154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113154u;
label_113154:
    // 0x113154: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x113154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_113158:
    // 0x113158: 0x24442cd8  addiu       $a0, $v0, 0x2CD8
    ctx->pc = 0x113158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
label_11315c:
    // 0x11315c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x11315cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_113160:
    // 0x113160: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x113160u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_113164:
    // 0x113164: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_113168:
    // 0x113168: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x113168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_11316c:
    // 0x11316c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x11316cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_113170:
    // 0x113170: 0x90a30224  lbu         $v1, 0x224($a1)
    ctx->pc = 0x113170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 548)));
label_113174:
    // 0x113174: 0x31efc  dsll32      $v1, $v1, 27
    ctx->pc = 0x113174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 27));
label_113178:
    // 0x113178: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x113178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
label_11317c:
    // 0x11317c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_113180:
    if (ctx->pc == 0x113180u) {
        ctx->pc = 0x113184u;
        goto label_113184;
    }
    ctx->pc = 0x11317Cu;
    {
        const bool branch_taken_0x11317c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11317c) {
            ctx->pc = 0x113194u;
            goto label_113194;
        }
    }
    ctx->pc = 0x113184u;
label_113184:
    // 0x113184: 0x8ca40224  lw          $a0, 0x224($a1)
    ctx->pc = 0x113184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 548)));
label_113188:
    // 0x113188: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x113188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_11318c:
    // 0x11318c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x11318cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_113190:
    // 0x113190: 0xaca30224  sw          $v1, 0x224($a1)
    ctx->pc = 0x113190u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 548), GPR_U32(ctx, 3));
label_113194:
    // 0x113194: 0x0  nop
    ctx->pc = 0x113194u;
    // NOP
label_113198:
    // 0x113198: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x113198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_11319c:
    // 0x11319c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11319cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1131a0:
    // 0x1131a0: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1131a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1131a4:
    // 0x1131a4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1131a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1131a8:
    // 0x1131a8: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_1131ac:
    if (ctx->pc == 0x1131ACu) {
        ctx->pc = 0x1131B0u;
        goto label_1131b0;
    }
    ctx->pc = 0x1131A8u;
    {
        const bool branch_taken_0x1131a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1131a8) {
            ctx->pc = 0x11314Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11314c;
        }
    }
    ctx->pc = 0x1131B0u;
label_1131b0:
    // 0x1131b0: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x1131b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_1131b4:
    // 0x1131b4: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x1131b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_1131b8:
    // 0x1131b8: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x1131b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1131bc:
    // 0x1131bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1131bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1131c0:
    // 0x1131c0: 0x1000010f  b           . + 4 + (0x10F << 2)
label_1131c4:
    if (ctx->pc == 0x1131C4u) {
        ctx->pc = 0x1131C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131C0u;
        // 0x1131c4: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1131C8u;
        goto label_1131c8;
    }
    ctx->pc = 0x1131C0u;
    {
        const bool branch_taken_0x1131c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1131C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131C0u;
        // 0x1131c4: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1131c0) {
            ctx->pc = 0x113600u;
            goto label_113600;
        }
    }
    ctx->pc = 0x1131C8u;
label_1131c8:
    // 0x1131c8: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1131c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1131cc:
    // 0x1131cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1131ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1131d0:
    // 0x1131d0: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x1131d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1131d4:
    // 0x1131d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1131d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1131d8:
    // 0x1131d8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1131d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1131dc:
    // 0x1131dc: 0x320f809  jalr        $t9
label_1131e0:
    if (ctx->pc == 0x1131E0u) {
        ctx->pc = 0x1131E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131DCu;
        // 0x1131e0: 0x26270034  addiu       $a3, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1131E4u;
        goto label_1131e4;
    }
    ctx->pc = 0x1131DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1131E4u);
        ctx->pc = 0x1131E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131DCu;
        // 0x1131e0: 0x26270034  addiu       $a3, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1131DCu, 0x1131E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1131E4u;
label_1131e4:
    // 0x1131e4: 0x10000106  b           . + 4 + (0x106 << 2)
label_1131e8:
    if (ctx->pc == 0x1131E8u) {
        ctx->pc = 0x1131E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131E4u;
        // 0x1131e8: 0xa2220041  sb          $v0, 0x41($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 65), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1131ECu;
        goto label_1131ec;
    }
    ctx->pc = 0x1131E4u;
    {
        const bool branch_taken_0x1131e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1131E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131E4u;
        // 0x1131e8: 0xa2220041  sb          $v0, 0x41($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 65), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1131e4) {
            ctx->pc = 0x113600u;
            goto label_113600;
        }
    }
    ctx->pc = 0x1131ECu;
label_1131ec:
    // 0x1131ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1131ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1131f0:
    // 0x1131f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1131f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1131f4:
    // 0x1131f4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1131f8:
    if (ctx->pc == 0x1131F8u) {
        ctx->pc = 0x1131F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131F4u;
        // 0x1131f8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1131FCu;
        goto label_1131fc;
    }
    ctx->pc = 0x1131F4u;
    {
        const bool branch_taken_0x1131f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1131F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131F4u;
        // 0x1131f8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1131f4) {
            ctx->pc = 0x113224u;
            goto label_113224;
        }
    }
    ctx->pc = 0x1131FCu;
label_1131fc:
    // 0x1131fc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1131fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_113200:
    // 0x113200: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x113200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_113204:
    // 0x113204: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x113204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_113208:
    // 0x113208: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x113208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_11320c:
    // 0x11320c: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x11320cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_113210:
    // 0x113210: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x113210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_113214:
    // 0x113214: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x113214u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_113218:
    // 0x113218: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x113218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_11321c:
    // 0x11321c: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x11321cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_113220:
    // 0x113220: 0xac640230  sw          $a0, 0x230($v1)
    ctx->pc = 0x113220u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 560), GPR_U32(ctx, 4));
label_113224:
    // 0x113224: 0x0  nop
    ctx->pc = 0x113224u;
    // NOP
label_113228:
    // 0x113228: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x113228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_11322c:
    // 0x11322c: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x11322cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_113230:
    // 0x113230: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_113234:
    if (ctx->pc == 0x113234u) {
        ctx->pc = 0x113234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113230u;
        // 0x113234: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113238u;
        goto label_113238;
    }
    ctx->pc = 0x113230u;
    {
        const bool branch_taken_0x113230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x113234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113230u;
        // 0x113234: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113230) {
            ctx->pc = 0x1131FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1131fc;
        }
    }
    ctx->pc = 0x113238u;
label_113238:
    // 0x113238: 0x1000000f  b           . + 4 + (0xF << 2)
label_11323c:
    if (ctx->pc == 0x11323Cu) {
        ctx->pc = 0x11323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113238u;
        // 0x11323c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113240u;
        goto label_113240;
    }
    ctx->pc = 0x113238u;
    {
        const bool branch_taken_0x113238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113238u;
        // 0x11323c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113238) {
            ctx->pc = 0x113278u;
            goto label_113278;
        }
    }
    ctx->pc = 0x113240u;
label_113240:
    // 0x113240: 0xc044254  jal         func_110950
label_113244:
    if (ctx->pc == 0x113244u) {
        ctx->pc = 0x113248u;
        goto label_113248;
    }
    ctx->pc = 0x113240u;
    SET_GPR_U32(ctx, 31, 0x113248u);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x113240u, 0x113248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113248u;
label_113248:
    // 0x113248: 0x24432cd8  addiu       $v1, $v0, 0x2CD8
    ctx->pc = 0x113248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
label_11324c:
    // 0x11324c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11324cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_113250:
    // 0x113250: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x113250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_113254:
    // 0x113254: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x113254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_113258:
    // 0x113258: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x113258u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11325c:
    // 0x11325c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11325cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_113260:
    // 0x113260: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x113260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_113264:
    // 0x113264: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x113264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_113268:
    // 0x113268: 0xc043dec  jal         func_10F7B0
label_11326c:
    if (ctx->pc == 0x11326Cu) {
        ctx->pc = 0x11326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113268u;
        // 0x11326c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113270u;
        goto label_113270;
    }
    ctx->pc = 0x113268u;
    SET_GPR_U32(ctx, 31, 0x113270u);
    ctx->pc = 0x11326Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113268u;
    // 0x11326c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x113268u, 0x113270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113270u;
label_113270:
    // 0x113270: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x113270u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_113274:
    // 0x113274: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x113274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_113278:
    // 0x113278: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x113278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_11327c:
    // 0x11327c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x11327cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_113280:
    // 0x113280: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_113284:
    if (ctx->pc == 0x113284u) {
        ctx->pc = 0x113288u;
        goto label_113288;
    }
    ctx->pc = 0x113280u;
    {
        const bool branch_taken_0x113280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113280) {
            ctx->pc = 0x113240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113240;
        }
    }
    ctx->pc = 0x113288u;
label_113288:
    // 0x113288: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x113288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11328c:
    // 0x11328c: 0x10000018  b           . + 4 + (0x18 << 2)
label_113290:
    if (ctx->pc == 0x113290u) {
        ctx->pc = 0x113290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11328Cu;
        // 0x113290: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113294u;
        goto label_113294;
    }
    ctx->pc = 0x11328Cu;
    {
        const bool branch_taken_0x11328c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11328Cu;
        // 0x113290: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11328c) {
            ctx->pc = 0x1132F0u;
            goto label_1132f0;
        }
    }
    ctx->pc = 0x113294u;
label_113294:
    // 0x113294: 0xc044254  jal         func_110950
label_113298:
    if (ctx->pc == 0x113298u) {
        ctx->pc = 0x11329Cu;
        goto label_11329c;
    }
    ctx->pc = 0x113294u;
    SET_GPR_U32(ctx, 31, 0x11329Cu);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x113294u, 0x11329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11329Cu;
label_11329c:
    // 0x11329c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x11329cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1132a0:
    // 0x1132a0: 0x24442cd8  addiu       $a0, $v0, 0x2CD8
    ctx->pc = 0x1132a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
label_1132a4:
    // 0x1132a4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1132a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1132a8:
    // 0x1132a8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1132a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1132ac:
    // 0x1132ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1132acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1132b0:
    // 0x1132b0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1132b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1132b4:
    // 0x1132b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1132b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1132b8:
    // 0x1132b8: 0x90830224  lbu         $v1, 0x224($a0)
    ctx->pc = 0x1132b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
label_1132bc:
    // 0x1132bc: 0x31efc  dsll32      $v1, $v1, 27
    ctx->pc = 0x1132bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 27));
label_1132c0:
    // 0x1132c0: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x1132c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
label_1132c4:
    // 0x1132c4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_1132c8:
    if (ctx->pc == 0x1132C8u) {
        ctx->pc = 0x1132CCu;
        goto label_1132cc;
    }
    ctx->pc = 0x1132C4u;
    {
        const bool branch_taken_0x1132c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1132c4) {
            ctx->pc = 0x1132E8u;
            goto label_1132e8;
        }
    }
    ctx->pc = 0x1132CCu;
label_1132cc:
    // 0x1132cc: 0x8c830224  lw          $v1, 0x224($a0)
    ctx->pc = 0x1132ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
label_1132d0:
    // 0x1132d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1132d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1132d4:
    // 0x1132d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1132d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1132d8:
    // 0x1132d8: 0xac830224  sw          $v1, 0x224($a0)
    ctx->pc = 0x1132d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 3));
label_1132dc:
    // 0x1132dc: 0x8c830224  lw          $v1, 0x224($a0)
    ctx->pc = 0x1132dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
label_1132e0:
    // 0x1132e0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1132e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_1132e4:
    // 0x1132e4: 0xac830224  sw          $v1, 0x224($a0)
    ctx->pc = 0x1132e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 3));
label_1132e8:
    // 0x1132e8: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1132e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_1132ec:
    // 0x1132ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1132ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1132f0:
    // 0x1132f0: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1132f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1132f4:
    // 0x1132f4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1132f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1132f8:
    // 0x1132f8: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_1132fc:
    if (ctx->pc == 0x1132FCu) {
        ctx->pc = 0x113300u;
        goto label_113300;
    }
    ctx->pc = 0x1132F8u;
    {
        const bool branch_taken_0x1132f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1132f8) {
            ctx->pc = 0x113294u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113294;
        }
    }
    ctx->pc = 0x113300u;
label_113300:
    // 0x113300: 0xa2200042  sb          $zero, 0x42($s1)
    ctx->pc = 0x113300u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 0));
label_113304:
    // 0x113304: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x113304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_113308:
    // 0x113308: 0xa2230041  sb          $v1, 0x41($s1)
    ctx->pc = 0x113308u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 65), (uint8_t)GPR_U32(ctx, 3));
label_11330c:
    // 0x11330c: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x11330cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_113310:
    // 0x113310: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x113310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_113314:
    // 0x113314: 0x100000ba  b           . + 4 + (0xBA << 2)
label_113318:
    if (ctx->pc == 0x113318u) {
        ctx->pc = 0x113318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113314u;
        // 0x113318: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11331Cu;
        goto label_11331c;
    }
    ctx->pc = 0x113314u;
    {
        const bool branch_taken_0x113314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113314u;
        // 0x113318: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113314) {
            ctx->pc = 0x113600u;
            goto label_113600;
        }
    }
    ctx->pc = 0x11331Cu;
label_11331c:
    // 0x11331c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11331cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113320:
    // 0x113320: 0x1000000d  b           . + 4 + (0xD << 2)
label_113324:
    if (ctx->pc == 0x113324u) {
        ctx->pc = 0x113324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113320u;
        // 0x113324: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113328u;
        goto label_113328;
    }
    ctx->pc = 0x113320u;
    {
        const bool branch_taken_0x113320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113320u;
        // 0x113324: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113320) {
            ctx->pc = 0x113358u;
            goto label_113358;
        }
    }
    ctx->pc = 0x113328u;
label_113328:
    // 0x113328: 0xc044254  jal         func_110950
label_11332c:
    if (ctx->pc == 0x11332Cu) {
        ctx->pc = 0x113330u;
        goto label_113330;
    }
    ctx->pc = 0x113328u;
    SET_GPR_U32(ctx, 31, 0x113330u);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x113328u, 0x113330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113330u;
label_113330:
    // 0x113330: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x113330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_113334:
    // 0x113334: 0x24442cd8  addiu       $a0, $v0, 0x2CD8
    ctx->pc = 0x113334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
label_113338:
    // 0x113338: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x113338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_11333c:
    // 0x11333c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x11333cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_113340:
    // 0x113340: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x113340u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_113344:
    // 0x113344: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x113344u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_113348:
    // 0x113348: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_11334c:
    // 0x11334c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x11334cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_113350:
    // 0x113350: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x113350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_113354:
    // 0x113354: 0xac600228  sw          $zero, 0x228($v1)
    ctx->pc = 0x113354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 552), GPR_U32(ctx, 0));
label_113358:
    // 0x113358: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x113358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_11335c:
    // 0x11335c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x11335cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_113360:
    // 0x113360: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_113364:
    if (ctx->pc == 0x113364u) {
        ctx->pc = 0x113368u;
        goto label_113368;
    }
    ctx->pc = 0x113360u;
    {
        const bool branch_taken_0x113360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113360) {
            ctx->pc = 0x113328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113328;
        }
    }
    ctx->pc = 0x113368u;
label_113368:
    // 0x113368: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x113368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_11336c:
    // 0x11336c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11336cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_113370:
    // 0x113370: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_113374:
    if (ctx->pc == 0x113374u) {
        ctx->pc = 0x113374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113370u;
        // 0x113374: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113378u;
        goto label_113378;
    }
    ctx->pc = 0x113370u;
    {
        const bool branch_taken_0x113370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113370u;
        // 0x113374: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113370) {
            ctx->pc = 0x113600u;
            goto label_113600;
        }
    }
    ctx->pc = 0x113378u;
label_113378:
    // 0x113378: 0x8e320038  lw          $s2, 0x38($s1)
    ctx->pc = 0x113378u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_11337c:
    // 0x11337c: 0x6410004  bgez        $s2, . + 4 + (0x4 << 2)
label_113380:
    if (ctx->pc == 0x113380u) {
        ctx->pc = 0x113380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11337Cu;
        // 0x113380: 0x12082a  slt         $at, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x113384u;
        goto label_113384;
    }
    ctx->pc = 0x11337Cu;
    {
        const bool branch_taken_0x11337c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x113380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11337Cu;
        // 0x113380: 0x12082a  slt         $at, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11337c) {
            ctx->pc = 0x113390u;
            goto label_113390;
        }
    }
    ctx->pc = 0x113384u;
label_113384:
    // 0x113384: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x113384u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_113388:
    // 0x113388: 0x0  nop
    ctx->pc = 0x113388u;
    // NOP
label_11338c:
    // 0x11338c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x11338cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_113390:
    // 0x113390: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_113394:
    if (ctx->pc == 0x113394u) {
        ctx->pc = 0x113394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113390u;
        // 0x113394: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113398u;
        goto label_113398;
    }
    ctx->pc = 0x113390u;
    {
        const bool branch_taken_0x113390 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x113394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113390u;
        // 0x113394: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113390) {
            ctx->pc = 0x1133DCu;
            goto label_1133dc;
        }
    }
    ctx->pc = 0x113398u;
label_113398:
    // 0x113398: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x113398u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11339c:
    // 0x11339c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x11339cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1133a0:
    // 0x1133a0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1133a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1133a4:
    // 0x1133a4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1133a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1133a8:
    // 0x1133a8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1133a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1133ac:
    // 0x1133ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1133acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1133b0:
    // 0x1133b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1133b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1133b4:
    // 0x1133b4: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1133b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1133b8:
    // 0x1133b8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1133b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1133bc:
    // 0x1133bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1133bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1133c0:
    // 0x1133c0: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x1133c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_1133c4:
    // 0x1133c4: 0x320f809  jalr        $t9
label_1133c8:
    if (ctx->pc == 0x1133C8u) {
        ctx->pc = 0x1133C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133C4u;
        // 0x1133c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1133CCu;
        goto label_1133cc;
    }
    ctx->pc = 0x1133C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1133CCu);
        ctx->pc = 0x1133C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133C4u;
        // 0x1133c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1133C4u, 0x1133CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1133CCu;
label_1133cc:
    // 0x1133cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1133ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1133d0:
    // 0x1133d0: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x1133d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1133d4:
    // 0x1133d4: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_1133d8:
    if (ctx->pc == 0x1133D8u) {
        ctx->pc = 0x1133D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133D4u;
        // 0x1133d8: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1133DCu;
        goto label_1133dc;
    }
    ctx->pc = 0x1133D4u;
    {
        const bool branch_taken_0x1133d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1133D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133D4u;
        // 0x1133d8: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1133d4) {
            ctx->pc = 0x11339Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11339c;
        }
    }
    ctx->pc = 0x1133DCu;
label_1133dc:
    // 0x1133dc: 0x0  nop
    ctx->pc = 0x1133dcu;
    // NOP
label_1133e0:
    // 0x1133e0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x1133e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_1133e4:
    // 0x1133e4: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x1133e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1133e8:
    // 0x1133e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1133e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1133ec:
    // 0x1133ec: 0x0  nop
    ctx->pc = 0x1133ecu;
    // NOP
label_1133f0:
    // 0x1133f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1133f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1133f4:
    // 0x1133f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1133f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1133f8:
    // 0x1133f8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1133f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1133fc:
    // 0x1133fc: 0x0  nop
    ctx->pc = 0x1133fcu;
    // NOP
label_113400:
    // 0x113400: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
label_113404:
    if (ctx->pc == 0x113404u) {
        ctx->pc = 0x113408u;
        goto label_113408;
    }
    ctx->pc = 0x113400u;
    {
        const bool branch_taken_0x113400 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x113400) {
            ctx->pc = 0x11340Cu;
            goto label_11340c;
        }
    }
    ctx->pc = 0x113408u;
label_113408:
    // 0x113408: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x113408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_11340c:
    // 0x11340c: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x11340cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_113410:
    // 0x113410: 0x1464001a  bne         $v1, $a0, . + 4 + (0x1A << 2)
label_113414:
    if (ctx->pc == 0x113414u) {
        ctx->pc = 0x113418u;
        goto label_113418;
    }
    ctx->pc = 0x113410u;
    {
        const bool branch_taken_0x113410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x113410) {
            ctx->pc = 0x11347Cu;
            goto label_11347c;
        }
    }
    ctx->pc = 0x113418u;
label_113418:
    // 0x113418: 0x8f8685f4  lw          $a2, -0x7A0C($gp)
    ctx->pc = 0x113418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_11341c:
    // 0x11341c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11341cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113420:
    // 0x113420: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x113420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_113424:
    // 0x113424: 0x10000012  b           . + 4 + (0x12 << 2)
label_113428:
    if (ctx->pc == 0x113428u) {
        ctx->pc = 0x113428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113424u;
        // 0x113428: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11342Cu;
        goto label_11342c;
    }
    ctx->pc = 0x113424u;
    {
        const bool branch_taken_0x113424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113424u;
        // 0x113428: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113424) {
            ctx->pc = 0x113470u;
            goto label_113470;
        }
    }
    ctx->pc = 0x11342Cu;
label_11342c:
    // 0x11342c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x11342cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_113430:
    // 0x113430: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x113430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_113434:
    // 0x113434: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x113434u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_113438:
    // 0x113438: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_11343c:
    // 0x11343c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x11343cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_113440:
    // 0x113440: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x113440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_113444:
    // 0x113444: 0x90830224  lbu         $v1, 0x224($a0)
    ctx->pc = 0x113444u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
label_113448:
    // 0x113448: 0x31efc  dsll32      $v1, $v1, 27
    ctx->pc = 0x113448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 27));
label_11344c:
    // 0x11344c: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x11344cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
label_113450:
    // 0x113450: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_113454:
    if (ctx->pc == 0x113454u) {
        ctx->pc = 0x113458u;
        goto label_113458;
    }
    ctx->pc = 0x113450u;
    {
        const bool branch_taken_0x113450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113450) {
            ctx->pc = 0x113468u;
            goto label_113468;
        }
    }
    ctx->pc = 0x113458u;
label_113458:
    // 0x113458: 0xc042118  jal         func_108460
label_11345c:
    if (ctx->pc == 0x11345Cu) {
        ctx->pc = 0x11345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113458u;
        // 0x11345c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113460u;
        goto label_113460;
    }
    ctx->pc = 0x113458u;
    SET_GPR_U32(ctx, 31, 0x113460u);
    ctx->pc = 0x11345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113458u;
    // 0x11345c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x113458u, 0x113460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113460u;
label_113460:
    // 0x113460: 0x10000006  b           . + 4 + (0x6 << 2)
label_113464:
    if (ctx->pc == 0x113464u) {
        ctx->pc = 0x113468u;
        goto label_113468;
    }
    ctx->pc = 0x113460u;
    {
        const bool branch_taken_0x113460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113460) {
            ctx->pc = 0x11347Cu;
            goto label_11347c;
        }
    }
    ctx->pc = 0x113468u;
label_113468:
    // 0x113468: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x113468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_11346c:
    // 0x11346c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11346cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_113470:
    // 0x113470: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x113470u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_113474:
    // 0x113474: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_113478:
    if (ctx->pc == 0x113478u) {
        ctx->pc = 0x11347Cu;
        goto label_11347c;
    }
    ctx->pc = 0x113474u;
    {
        const bool branch_taken_0x113474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113474) {
            ctx->pc = 0x11342Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11342c;
        }
    }
    ctx->pc = 0x11347Cu;
label_11347c:
    // 0x11347c: 0x0  nop
    ctx->pc = 0x11347cu;
    // NOP
label_113480:
    // 0x113480: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x113480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_113484:
    // 0x113484: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x113484u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113488:
    // 0x113488: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x113488u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11348c:
    // 0x11348c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11348cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113490:
    // 0x113490: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x113490u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113494:
    // 0x113494: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x113494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_113498:
    // 0x113498: 0x10000015  b           . + 4 + (0x15 << 2)
label_11349c:
    if (ctx->pc == 0x11349Cu) {
        ctx->pc = 0x11349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113498u;
        // 0x11349c: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1134A0u;
        goto label_1134a0;
    }
    ctx->pc = 0x113498u;
    {
        const bool branch_taken_0x113498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113498u;
        // 0x11349c: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113498) {
            ctx->pc = 0x1134F0u;
            goto label_1134f0;
        }
    }
    ctx->pc = 0x1134A0u;
label_1134a0:
    // 0x1134a0: 0xc044254  jal         func_110950
label_1134a4:
    if (ctx->pc == 0x1134A4u) {
        ctx->pc = 0x1134A8u;
        goto label_1134a8;
    }
    ctx->pc = 0x1134A0u;
    SET_GPR_U32(ctx, 31, 0x1134A8u);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x1134A0u, 0x1134A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1134A8u;
label_1134a8:
    // 0x1134a8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1134a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1134ac:
    // 0x1134ac: 0x24442cd8  addiu       $a0, $v0, 0x2CD8
    ctx->pc = 0x1134acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
label_1134b0:
    // 0x1134b0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1134b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1134b4:
    // 0x1134b4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1134b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1134b8:
    // 0x1134b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1134b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1134bc:
    // 0x1134bc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1134bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1134c0:
    // 0x1134c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1134c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1134c4:
    // 0x1134c4: 0x90830224  lbu         $v1, 0x224($a0)
    ctx->pc = 0x1134c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
label_1134c8:
    // 0x1134c8: 0x31efc  dsll32      $v1, $v1, 27
    ctx->pc = 0x1134c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 27));
label_1134cc:
    // 0x1134cc: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x1134ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
label_1134d0:
    // 0x1134d0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1134d4:
    if (ctx->pc == 0x1134D4u) {
        ctx->pc = 0x1134D8u;
        goto label_1134d8;
    }
    ctx->pc = 0x1134D0u;
    {
        const bool branch_taken_0x1134d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1134d0) {
            ctx->pc = 0x1134E8u;
            goto label_1134e8;
        }
    }
    ctx->pc = 0x1134D8u;
label_1134d8:
    // 0x1134d8: 0x8c830228  lw          $v1, 0x228($a0)
    ctx->pc = 0x1134d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
label_1134dc:
    // 0x1134dc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1134e0:
    if (ctx->pc == 0x1134E0u) {
        ctx->pc = 0x1134E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1134DCu;
        // 0x1134e0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1134E4u;
        goto label_1134e4;
    }
    ctx->pc = 0x1134DCu;
    {
        const bool branch_taken_0x1134dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1134E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1134DCu;
        // 0x1134e0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1134dc) {
            ctx->pc = 0x1134E8u;
            goto label_1134e8;
        }
    }
    ctx->pc = 0x1134E4u;
label_1134e4:
    // 0x1134e4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1134e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1134e8:
    // 0x1134e8: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x1134e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
label_1134ec:
    // 0x1134ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1134ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1134f0:
    // 0x1134f0: 0x8e300038  lw          $s0, 0x38($s1)
    ctx->pc = 0x1134f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1134f4:
    // 0x1134f4: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x1134f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1134f8:
    // 0x1134f8: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_1134fc:
    if (ctx->pc == 0x1134FCu) {
        ctx->pc = 0x113500u;
        goto label_113500;
    }
    ctx->pc = 0x1134F8u;
    {
        const bool branch_taken_0x1134f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1134f8) {
            ctx->pc = 0x1134A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1134a0;
        }
    }
    ctx->pc = 0x113500u;
label_113500:
    // 0x113500: 0x1693003f  bne         $s4, $s3, . + 4 + (0x3F << 2)
label_113504:
    if (ctx->pc == 0x113504u) {
        ctx->pc = 0x113508u;
        goto label_113508;
    }
    ctx->pc = 0x113500u;
    {
        const bool branch_taken_0x113500 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        if (branch_taken_0x113500) {
            ctx->pc = 0x113600u;
            goto label_113600;
        }
    }
    ctx->pc = 0x113508u;
label_113508:
    // 0x113508: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
label_11350c:
    if (ctx->pc == 0x11350Cu) {
        ctx->pc = 0x11350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113508u;
        // 0x11350c: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x113510u;
        goto label_113510;
    }
    ctx->pc = 0x113508u;
    {
        const bool branch_taken_0x113508 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113508u;
        // 0x11350c: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113508) {
            ctx->pc = 0x11351Cu;
            goto label_11351c;
        }
    }
    ctx->pc = 0x113510u;
label_113510:
    // 0x113510: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x113510u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_113514:
    // 0x113514: 0x0  nop
    ctx->pc = 0x113514u;
    // NOP
label_113518:
    // 0x113518: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x113518u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_11351c:
    // 0x11351c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_113520:
    if (ctx->pc == 0x113520u) {
        ctx->pc = 0x113520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11351Cu;
        // 0x113520: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113524u;
        goto label_113524;
    }
    ctx->pc = 0x11351Cu;
    {
        const bool branch_taken_0x11351c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x113520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11351Cu;
        // 0x113520: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11351c) {
            ctx->pc = 0x113568u;
            goto label_113568;
        }
    }
    ctx->pc = 0x113524u;
label_113524:
    // 0x113524: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x113524u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113528:
    // 0x113528: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x113528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_11352c:
    // 0x11352c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x11352cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_113530:
    // 0x113530: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x113530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_113534:
    // 0x113534: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x113534u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_113538:
    // 0x113538: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_11353c:
    // 0x11353c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11353cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_113540:
    // 0x113540: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x113540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_113544:
    // 0x113544: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x113544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_113548:
    // 0x113548: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x113548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11354c:
    // 0x11354c: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x11354cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_113550:
    // 0x113550: 0x320f809  jalr        $t9
label_113554:
    if (ctx->pc == 0x113554u) {
        ctx->pc = 0x113554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113550u;
        // 0x113554: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113558u;
        goto label_113558;
    }
    ctx->pc = 0x113550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x113558u);
        ctx->pc = 0x113554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113550u;
        // 0x113554: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113550u, 0x113558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113558u;
label_113558:
    // 0x113558: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x113558u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_11355c:
    // 0x11355c: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x11355cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_113560:
    // 0x113560: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_113564:
    if (ctx->pc == 0x113564u) {
        ctx->pc = 0x113564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113560u;
        // 0x113564: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113568u;
        goto label_113568;
    }
    ctx->pc = 0x113560u;
    {
        const bool branch_taken_0x113560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x113564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113560u;
        // 0x113564: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113560) {
            ctx->pc = 0x113528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113528;
        }
    }
    ctx->pc = 0x113568u;
label_113568:
    // 0x113568: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x113568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11356c:
    // 0x11356c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_113570:
    if (ctx->pc == 0x113570u) {
        ctx->pc = 0x113570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11356Cu;
        // 0x113570: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113574u;
        goto label_113574;
    }
    ctx->pc = 0x11356Cu;
    {
        const bool branch_taken_0x11356c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11356Cu;
        // 0x113570: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11356c) {
            ctx->pc = 0x1135E0u;
            goto label_1135e0;
        }
    }
    ctx->pc = 0x113574u;
label_113574:
    // 0x113574: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x113574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_113578:
    // 0x113578: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x113578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_11357c:
    // 0x11357c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x11357cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_113580:
    // 0x113580: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x113580u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_113584:
    // 0x113584: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x113584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_113588:
    // 0x113588: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x113588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_11358c:
    // 0x11358c: 0x8c722cd8  lw          $s2, 0x2CD8($v1)
    ctx->pc = 0x11358cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_113590:
    // 0x113590: 0x92430220  lbu         $v1, 0x220($s2)
    ctx->pc = 0x113590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 544)));
label_113594:
    // 0x113594: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_113598:
    if (ctx->pc == 0x113598u) {
        ctx->pc = 0x11359Cu;
        goto label_11359c;
    }
    ctx->pc = 0x113594u;
    {
        const bool branch_taken_0x113594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x113594) {
            ctx->pc = 0x1135D4u;
            goto label_1135d4;
        }
    }
    ctx->pc = 0x11359Cu;
label_11359c:
    // 0x11359c: 0xa2400220  sb          $zero, 0x220($s2)
    ctx->pc = 0x11359cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 544), (uint8_t)GPR_U32(ctx, 0));
label_1135a0:
    // 0x1135a0: 0x92420220  lbu         $v0, 0x220($s2)
    ctx->pc = 0x1135a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 544)));
label_1135a4:
    // 0x1135a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1135a8:
    if (ctx->pc == 0x1135A8u) {
        ctx->pc = 0x1135A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1135A4u;
        // 0x1135a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1135ACu;
        goto label_1135ac;
    }
    ctx->pc = 0x1135A4u;
    {
        const bool branch_taken_0x1135a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1135A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1135A4u;
        // 0x1135a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1135a4) {
            ctx->pc = 0x1135BCu;
            goto label_1135bc;
        }
    }
    ctx->pc = 0x1135ACu;
label_1135ac:
    // 0x1135ac: 0xc042570  jal         func_1095C0
label_1135b0:
    if (ctx->pc == 0x1135B0u) {
        ctx->pc = 0x1135B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1135ACu;
        // 0x1135b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1135B4u;
        goto label_1135b4;
    }
    ctx->pc = 0x1135ACu;
    SET_GPR_U32(ctx, 31, 0x1135B4u);
    ctx->pc = 0x1135B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1135ACu;
    // 0x1135b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1135ACu, 0x1135B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1135B4u;
label_1135b4:
    // 0x1135b4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1135b8:
    if (ctx->pc == 0x1135B8u) {
        ctx->pc = 0x1135B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1135B4u;
        // 0x1135b8: 0xa24001d3  sb          $zero, 0x1D3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1135BCu;
        goto label_1135bc;
    }
    ctx->pc = 0x1135B4u;
    {
        const bool branch_taken_0x1135b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1135B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1135B4u;
        // 0x1135b8: 0xa24001d3  sb          $zero, 0x1D3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1135b4) {
            ctx->pc = 0x1135D4u;
            goto label_1135d4;
        }
    }
    ctx->pc = 0x1135BCu;
label_1135bc:
    // 0x1135bc: 0x0  nop
    ctx->pc = 0x1135bcu;
    // NOP
label_1135c0:
    // 0x1135c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1135c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1135c4:
    // 0x1135c4: 0xc042570  jal         func_1095C0
label_1135c8:
    if (ctx->pc == 0x1135C8u) {
        ctx->pc = 0x1135C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1135C4u;
        // 0x1135c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1135CCu;
        goto label_1135cc;
    }
    ctx->pc = 0x1135C4u;
    SET_GPR_U32(ctx, 31, 0x1135CCu);
    ctx->pc = 0x1135C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1135C4u;
    // 0x1135c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1135C4u, 0x1135CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1135CCu;
label_1135cc:
    // 0x1135cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1135ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1135d0:
    // 0x1135d0: 0xa24301d3  sb          $v1, 0x1D3($s2)
    ctx->pc = 0x1135d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 467), (uint8_t)GPR_U32(ctx, 3));
label_1135d4:
    // 0x1135d4: 0x0  nop
    ctx->pc = 0x1135d4u;
    // NOP
label_1135d8:
    // 0x1135d8: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1135d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_1135dc:
    // 0x1135dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1135dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1135e0:
    // 0x1135e0: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1135e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1135e4:
    // 0x1135e4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1135e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1135e8:
    // 0x1135e8: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_1135ec:
    if (ctx->pc == 0x1135ECu) {
        ctx->pc = 0x1135F0u;
        goto label_1135f0;
    }
    ctx->pc = 0x1135E8u;
    {
        const bool branch_taken_0x1135e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1135e8) {
            ctx->pc = 0x113574u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113574;
        }
    }
    ctx->pc = 0x1135F0u;
label_1135f0:
    // 0x1135f0: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x1135f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_1135f4:
    // 0x1135f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1135f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1135f8:
    // 0x1135f8: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x1135f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_1135fc:
    // 0x1135fc: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x1135fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_113600:
    // 0x113600: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x113600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_113604:
    // 0x113604: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x113604u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_113608:
    // 0x113608: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x113608u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11360c:
    // 0x11360c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11360cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_113610:
    // 0x113610: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x113610u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_113614:
    // 0x113614: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x113614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_113618:
    // 0x113618: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x113618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11361c:
    // 0x11361c: 0x3e00008  jr          $ra
label_113620:
    if (ctx->pc == 0x113620u) {
        ctx->pc = 0x113620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11361Cu;
        // 0x113620: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113624u;
        goto label_fallthrough_0x11361c;
    }
    ctx->pc = 0x11361Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11361Cu;
        // 0x113620: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11361Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11361c:
    ctx->pc = 0x113624u;
}
