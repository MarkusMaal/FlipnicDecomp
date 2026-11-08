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

// Function: FUN_00123c50
// Address: 0x123c50 - 0x124418
void FUN_00123c50_0x123c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00123c50_0x123c50");
#endif

    switch (ctx->pc) {
        case 0x123c50u: goto label_123c50;
        case 0x123c54u: goto label_123c54;
        case 0x123c58u: goto label_123c58;
        case 0x123c5cu: goto label_123c5c;
        case 0x123c60u: goto label_123c60;
        case 0x123c64u: goto label_123c64;
        case 0x123c68u: goto label_123c68;
        case 0x123c6cu: goto label_123c6c;
        case 0x123c70u: goto label_123c70;
        case 0x123c74u: goto label_123c74;
        case 0x123c78u: goto label_123c78;
        case 0x123c7cu: goto label_123c7c;
        case 0x123c80u: goto label_123c80;
        case 0x123c84u: goto label_123c84;
        case 0x123c88u: goto label_123c88;
        case 0x123c8cu: goto label_123c8c;
        case 0x123c90u: goto label_123c90;
        case 0x123c94u: goto label_123c94;
        case 0x123c98u: goto label_123c98;
        case 0x123c9cu: goto label_123c9c;
        case 0x123ca0u: goto label_123ca0;
        case 0x123ca4u: goto label_123ca4;
        case 0x123ca8u: goto label_123ca8;
        case 0x123cacu: goto label_123cac;
        case 0x123cb0u: goto label_123cb0;
        case 0x123cb4u: goto label_123cb4;
        case 0x123cb8u: goto label_123cb8;
        case 0x123cbcu: goto label_123cbc;
        case 0x123cc0u: goto label_123cc0;
        case 0x123cc4u: goto label_123cc4;
        case 0x123cc8u: goto label_123cc8;
        case 0x123cccu: goto label_123ccc;
        case 0x123cd0u: goto label_123cd0;
        case 0x123cd4u: goto label_123cd4;
        case 0x123cd8u: goto label_123cd8;
        case 0x123cdcu: goto label_123cdc;
        case 0x123ce0u: goto label_123ce0;
        case 0x123ce4u: goto label_123ce4;
        case 0x123ce8u: goto label_123ce8;
        case 0x123cecu: goto label_123cec;
        case 0x123cf0u: goto label_123cf0;
        case 0x123cf4u: goto label_123cf4;
        case 0x123cf8u: goto label_123cf8;
        case 0x123cfcu: goto label_123cfc;
        case 0x123d00u: goto label_123d00;
        case 0x123d04u: goto label_123d04;
        case 0x123d08u: goto label_123d08;
        case 0x123d0cu: goto label_123d0c;
        case 0x123d10u: goto label_123d10;
        case 0x123d14u: goto label_123d14;
        case 0x123d18u: goto label_123d18;
        case 0x123d1cu: goto label_123d1c;
        case 0x123d20u: goto label_123d20;
        case 0x123d24u: goto label_123d24;
        case 0x123d28u: goto label_123d28;
        case 0x123d2cu: goto label_123d2c;
        case 0x123d30u: goto label_123d30;
        case 0x123d34u: goto label_123d34;
        case 0x123d38u: goto label_123d38;
        case 0x123d3cu: goto label_123d3c;
        case 0x123d40u: goto label_123d40;
        case 0x123d44u: goto label_123d44;
        case 0x123d48u: goto label_123d48;
        case 0x123d4cu: goto label_123d4c;
        case 0x123d50u: goto label_123d50;
        case 0x123d54u: goto label_123d54;
        case 0x123d58u: goto label_123d58;
        case 0x123d5cu: goto label_123d5c;
        case 0x123d60u: goto label_123d60;
        case 0x123d64u: goto label_123d64;
        case 0x123d68u: goto label_123d68;
        case 0x123d6cu: goto label_123d6c;
        case 0x123d70u: goto label_123d70;
        case 0x123d74u: goto label_123d74;
        case 0x123d78u: goto label_123d78;
        case 0x123d7cu: goto label_123d7c;
        case 0x123d80u: goto label_123d80;
        case 0x123d84u: goto label_123d84;
        case 0x123d88u: goto label_123d88;
        case 0x123d8cu: goto label_123d8c;
        case 0x123d90u: goto label_123d90;
        case 0x123d94u: goto label_123d94;
        case 0x123d98u: goto label_123d98;
        case 0x123d9cu: goto label_123d9c;
        case 0x123da0u: goto label_123da0;
        case 0x123da4u: goto label_123da4;
        case 0x123da8u: goto label_123da8;
        case 0x123dacu: goto label_123dac;
        case 0x123db0u: goto label_123db0;
        case 0x123db4u: goto label_123db4;
        case 0x123db8u: goto label_123db8;
        case 0x123dbcu: goto label_123dbc;
        case 0x123dc0u: goto label_123dc0;
        case 0x123dc4u: goto label_123dc4;
        case 0x123dc8u: goto label_123dc8;
        case 0x123dccu: goto label_123dcc;
        case 0x123dd0u: goto label_123dd0;
        case 0x123dd4u: goto label_123dd4;
        case 0x123dd8u: goto label_123dd8;
        case 0x123ddcu: goto label_123ddc;
        case 0x123de0u: goto label_123de0;
        case 0x123de4u: goto label_123de4;
        case 0x123de8u: goto label_123de8;
        case 0x123decu: goto label_123dec;
        case 0x123df0u: goto label_123df0;
        case 0x123df4u: goto label_123df4;
        case 0x123df8u: goto label_123df8;
        case 0x123dfcu: goto label_123dfc;
        case 0x123e00u: goto label_123e00;
        case 0x123e04u: goto label_123e04;
        case 0x123e08u: goto label_123e08;
        case 0x123e0cu: goto label_123e0c;
        case 0x123e10u: goto label_123e10;
        case 0x123e14u: goto label_123e14;
        case 0x123e18u: goto label_123e18;
        case 0x123e1cu: goto label_123e1c;
        case 0x123e20u: goto label_123e20;
        case 0x123e24u: goto label_123e24;
        case 0x123e28u: goto label_123e28;
        case 0x123e2cu: goto label_123e2c;
        case 0x123e30u: goto label_123e30;
        case 0x123e34u: goto label_123e34;
        case 0x123e38u: goto label_123e38;
        case 0x123e3cu: goto label_123e3c;
        case 0x123e40u: goto label_123e40;
        case 0x123e44u: goto label_123e44;
        case 0x123e48u: goto label_123e48;
        case 0x123e4cu: goto label_123e4c;
        case 0x123e50u: goto label_123e50;
        case 0x123e54u: goto label_123e54;
        case 0x123e58u: goto label_123e58;
        case 0x123e5cu: goto label_123e5c;
        case 0x123e60u: goto label_123e60;
        case 0x123e64u: goto label_123e64;
        case 0x123e68u: goto label_123e68;
        case 0x123e6cu: goto label_123e6c;
        case 0x123e70u: goto label_123e70;
        case 0x123e74u: goto label_123e74;
        case 0x123e78u: goto label_123e78;
        case 0x123e7cu: goto label_123e7c;
        case 0x123e80u: goto label_123e80;
        case 0x123e84u: goto label_123e84;
        case 0x123e88u: goto label_123e88;
        case 0x123e8cu: goto label_123e8c;
        case 0x123e90u: goto label_123e90;
        case 0x123e94u: goto label_123e94;
        case 0x123e98u: goto label_123e98;
        case 0x123e9cu: goto label_123e9c;
        case 0x123ea0u: goto label_123ea0;
        case 0x123ea4u: goto label_123ea4;
        case 0x123ea8u: goto label_123ea8;
        case 0x123eacu: goto label_123eac;
        case 0x123eb0u: goto label_123eb0;
        case 0x123eb4u: goto label_123eb4;
        case 0x123eb8u: goto label_123eb8;
        case 0x123ebcu: goto label_123ebc;
        case 0x123ec0u: goto label_123ec0;
        case 0x123ec4u: goto label_123ec4;
        case 0x123ec8u: goto label_123ec8;
        case 0x123eccu: goto label_123ecc;
        case 0x123ed0u: goto label_123ed0;
        case 0x123ed4u: goto label_123ed4;
        case 0x123ed8u: goto label_123ed8;
        case 0x123edcu: goto label_123edc;
        case 0x123ee0u: goto label_123ee0;
        case 0x123ee4u: goto label_123ee4;
        case 0x123ee8u: goto label_123ee8;
        case 0x123eecu: goto label_123eec;
        case 0x123ef0u: goto label_123ef0;
        case 0x123ef4u: goto label_123ef4;
        case 0x123ef8u: goto label_123ef8;
        case 0x123efcu: goto label_123efc;
        case 0x123f00u: goto label_123f00;
        case 0x123f04u: goto label_123f04;
        case 0x123f08u: goto label_123f08;
        case 0x123f0cu: goto label_123f0c;
        case 0x123f10u: goto label_123f10;
        case 0x123f14u: goto label_123f14;
        case 0x123f18u: goto label_123f18;
        case 0x123f1cu: goto label_123f1c;
        case 0x123f20u: goto label_123f20;
        case 0x123f24u: goto label_123f24;
        case 0x123f28u: goto label_123f28;
        case 0x123f2cu: goto label_123f2c;
        case 0x123f30u: goto label_123f30;
        case 0x123f34u: goto label_123f34;
        case 0x123f38u: goto label_123f38;
        case 0x123f3cu: goto label_123f3c;
        case 0x123f40u: goto label_123f40;
        case 0x123f44u: goto label_123f44;
        case 0x123f48u: goto label_123f48;
        case 0x123f4cu: goto label_123f4c;
        case 0x123f50u: goto label_123f50;
        case 0x123f54u: goto label_123f54;
        case 0x123f58u: goto label_123f58;
        case 0x123f5cu: goto label_123f5c;
        case 0x123f60u: goto label_123f60;
        case 0x123f64u: goto label_123f64;
        case 0x123f68u: goto label_123f68;
        case 0x123f6cu: goto label_123f6c;
        case 0x123f70u: goto label_123f70;
        case 0x123f74u: goto label_123f74;
        case 0x123f78u: goto label_123f78;
        case 0x123f7cu: goto label_123f7c;
        case 0x123f80u: goto label_123f80;
        case 0x123f84u: goto label_123f84;
        case 0x123f88u: goto label_123f88;
        case 0x123f8cu: goto label_123f8c;
        case 0x123f90u: goto label_123f90;
        case 0x123f94u: goto label_123f94;
        case 0x123f98u: goto label_123f98;
        case 0x123f9cu: goto label_123f9c;
        case 0x123fa0u: goto label_123fa0;
        case 0x123fa4u: goto label_123fa4;
        case 0x123fa8u: goto label_123fa8;
        case 0x123facu: goto label_123fac;
        case 0x123fb0u: goto label_123fb0;
        case 0x123fb4u: goto label_123fb4;
        case 0x123fb8u: goto label_123fb8;
        case 0x123fbcu: goto label_123fbc;
        case 0x123fc0u: goto label_123fc0;
        case 0x123fc4u: goto label_123fc4;
        case 0x123fc8u: goto label_123fc8;
        case 0x123fccu: goto label_123fcc;
        case 0x123fd0u: goto label_123fd0;
        case 0x123fd4u: goto label_123fd4;
        case 0x123fd8u: goto label_123fd8;
        case 0x123fdcu: goto label_123fdc;
        case 0x123fe0u: goto label_123fe0;
        case 0x123fe4u: goto label_123fe4;
        case 0x123fe8u: goto label_123fe8;
        case 0x123fecu: goto label_123fec;
        case 0x123ff0u: goto label_123ff0;
        case 0x123ff4u: goto label_123ff4;
        case 0x123ff8u: goto label_123ff8;
        case 0x123ffcu: goto label_123ffc;
        case 0x124000u: goto label_124000;
        case 0x124004u: goto label_124004;
        case 0x124008u: goto label_124008;
        case 0x12400cu: goto label_12400c;
        case 0x124010u: goto label_124010;
        case 0x124014u: goto label_124014;
        case 0x124018u: goto label_124018;
        case 0x12401cu: goto label_12401c;
        case 0x124020u: goto label_124020;
        case 0x124024u: goto label_124024;
        case 0x124028u: goto label_124028;
        case 0x12402cu: goto label_12402c;
        case 0x124030u: goto label_124030;
        case 0x124034u: goto label_124034;
        case 0x124038u: goto label_124038;
        case 0x12403cu: goto label_12403c;
        case 0x124040u: goto label_124040;
        case 0x124044u: goto label_124044;
        case 0x124048u: goto label_124048;
        case 0x12404cu: goto label_12404c;
        case 0x124050u: goto label_124050;
        case 0x124054u: goto label_124054;
        case 0x124058u: goto label_124058;
        case 0x12405cu: goto label_12405c;
        case 0x124060u: goto label_124060;
        case 0x124064u: goto label_124064;
        case 0x124068u: goto label_124068;
        case 0x12406cu: goto label_12406c;
        case 0x124070u: goto label_124070;
        case 0x124074u: goto label_124074;
        case 0x124078u: goto label_124078;
        case 0x12407cu: goto label_12407c;
        case 0x124080u: goto label_124080;
        case 0x124084u: goto label_124084;
        case 0x124088u: goto label_124088;
        case 0x12408cu: goto label_12408c;
        case 0x124090u: goto label_124090;
        case 0x124094u: goto label_124094;
        case 0x124098u: goto label_124098;
        case 0x12409cu: goto label_12409c;
        case 0x1240a0u: goto label_1240a0;
        case 0x1240a4u: goto label_1240a4;
        case 0x1240a8u: goto label_1240a8;
        case 0x1240acu: goto label_1240ac;
        case 0x1240b0u: goto label_1240b0;
        case 0x1240b4u: goto label_1240b4;
        case 0x1240b8u: goto label_1240b8;
        case 0x1240bcu: goto label_1240bc;
        case 0x1240c0u: goto label_1240c0;
        case 0x1240c4u: goto label_1240c4;
        case 0x1240c8u: goto label_1240c8;
        case 0x1240ccu: goto label_1240cc;
        case 0x1240d0u: goto label_1240d0;
        case 0x1240d4u: goto label_1240d4;
        case 0x1240d8u: goto label_1240d8;
        case 0x1240dcu: goto label_1240dc;
        case 0x1240e0u: goto label_1240e0;
        case 0x1240e4u: goto label_1240e4;
        case 0x1240e8u: goto label_1240e8;
        case 0x1240ecu: goto label_1240ec;
        case 0x1240f0u: goto label_1240f0;
        case 0x1240f4u: goto label_1240f4;
        case 0x1240f8u: goto label_1240f8;
        case 0x1240fcu: goto label_1240fc;
        case 0x124100u: goto label_124100;
        case 0x124104u: goto label_124104;
        case 0x124108u: goto label_124108;
        case 0x12410cu: goto label_12410c;
        case 0x124110u: goto label_124110;
        case 0x124114u: goto label_124114;
        case 0x124118u: goto label_124118;
        case 0x12411cu: goto label_12411c;
        case 0x124120u: goto label_124120;
        case 0x124124u: goto label_124124;
        case 0x124128u: goto label_124128;
        case 0x12412cu: goto label_12412c;
        case 0x124130u: goto label_124130;
        case 0x124134u: goto label_124134;
        case 0x124138u: goto label_124138;
        case 0x12413cu: goto label_12413c;
        case 0x124140u: goto label_124140;
        case 0x124144u: goto label_124144;
        case 0x124148u: goto label_124148;
        case 0x12414cu: goto label_12414c;
        case 0x124150u: goto label_124150;
        case 0x124154u: goto label_124154;
        case 0x124158u: goto label_124158;
        case 0x12415cu: goto label_12415c;
        case 0x124160u: goto label_124160;
        case 0x124164u: goto label_124164;
        case 0x124168u: goto label_124168;
        case 0x12416cu: goto label_12416c;
        case 0x124170u: goto label_124170;
        case 0x124174u: goto label_124174;
        case 0x124178u: goto label_124178;
        case 0x12417cu: goto label_12417c;
        case 0x124180u: goto label_124180;
        case 0x124184u: goto label_124184;
        case 0x124188u: goto label_124188;
        case 0x12418cu: goto label_12418c;
        case 0x124190u: goto label_124190;
        case 0x124194u: goto label_124194;
        case 0x124198u: goto label_124198;
        case 0x12419cu: goto label_12419c;
        case 0x1241a0u: goto label_1241a0;
        case 0x1241a4u: goto label_1241a4;
        case 0x1241a8u: goto label_1241a8;
        case 0x1241acu: goto label_1241ac;
        case 0x1241b0u: goto label_1241b0;
        case 0x1241b4u: goto label_1241b4;
        case 0x1241b8u: goto label_1241b8;
        case 0x1241bcu: goto label_1241bc;
        case 0x1241c0u: goto label_1241c0;
        case 0x1241c4u: goto label_1241c4;
        case 0x1241c8u: goto label_1241c8;
        case 0x1241ccu: goto label_1241cc;
        case 0x1241d0u: goto label_1241d0;
        case 0x1241d4u: goto label_1241d4;
        case 0x1241d8u: goto label_1241d8;
        case 0x1241dcu: goto label_1241dc;
        case 0x1241e0u: goto label_1241e0;
        case 0x1241e4u: goto label_1241e4;
        case 0x1241e8u: goto label_1241e8;
        case 0x1241ecu: goto label_1241ec;
        case 0x1241f0u: goto label_1241f0;
        case 0x1241f4u: goto label_1241f4;
        case 0x1241f8u: goto label_1241f8;
        case 0x1241fcu: goto label_1241fc;
        case 0x124200u: goto label_124200;
        case 0x124204u: goto label_124204;
        case 0x124208u: goto label_124208;
        case 0x12420cu: goto label_12420c;
        case 0x124210u: goto label_124210;
        case 0x124214u: goto label_124214;
        case 0x124218u: goto label_124218;
        case 0x12421cu: goto label_12421c;
        case 0x124220u: goto label_124220;
        case 0x124224u: goto label_124224;
        case 0x124228u: goto label_124228;
        case 0x12422cu: goto label_12422c;
        case 0x124230u: goto label_124230;
        case 0x124234u: goto label_124234;
        case 0x124238u: goto label_124238;
        case 0x12423cu: goto label_12423c;
        case 0x124240u: goto label_124240;
        case 0x124244u: goto label_124244;
        case 0x124248u: goto label_124248;
        case 0x12424cu: goto label_12424c;
        case 0x124250u: goto label_124250;
        case 0x124254u: goto label_124254;
        case 0x124258u: goto label_124258;
        case 0x12425cu: goto label_12425c;
        case 0x124260u: goto label_124260;
        case 0x124264u: goto label_124264;
        case 0x124268u: goto label_124268;
        case 0x12426cu: goto label_12426c;
        case 0x124270u: goto label_124270;
        case 0x124274u: goto label_124274;
        case 0x124278u: goto label_124278;
        case 0x12427cu: goto label_12427c;
        case 0x124280u: goto label_124280;
        case 0x124284u: goto label_124284;
        case 0x124288u: goto label_124288;
        case 0x12428cu: goto label_12428c;
        case 0x124290u: goto label_124290;
        case 0x124294u: goto label_124294;
        case 0x124298u: goto label_124298;
        case 0x12429cu: goto label_12429c;
        case 0x1242a0u: goto label_1242a0;
        case 0x1242a4u: goto label_1242a4;
        case 0x1242a8u: goto label_1242a8;
        case 0x1242acu: goto label_1242ac;
        case 0x1242b0u: goto label_1242b0;
        case 0x1242b4u: goto label_1242b4;
        case 0x1242b8u: goto label_1242b8;
        case 0x1242bcu: goto label_1242bc;
        case 0x1242c0u: goto label_1242c0;
        case 0x1242c4u: goto label_1242c4;
        case 0x1242c8u: goto label_1242c8;
        case 0x1242ccu: goto label_1242cc;
        case 0x1242d0u: goto label_1242d0;
        case 0x1242d4u: goto label_1242d4;
        case 0x1242d8u: goto label_1242d8;
        case 0x1242dcu: goto label_1242dc;
        case 0x1242e0u: goto label_1242e0;
        case 0x1242e4u: goto label_1242e4;
        case 0x1242e8u: goto label_1242e8;
        case 0x1242ecu: goto label_1242ec;
        case 0x1242f0u: goto label_1242f0;
        case 0x1242f4u: goto label_1242f4;
        case 0x1242f8u: goto label_1242f8;
        case 0x1242fcu: goto label_1242fc;
        case 0x124300u: goto label_124300;
        case 0x124304u: goto label_124304;
        case 0x124308u: goto label_124308;
        case 0x12430cu: goto label_12430c;
        case 0x124310u: goto label_124310;
        case 0x124314u: goto label_124314;
        case 0x124318u: goto label_124318;
        case 0x12431cu: goto label_12431c;
        case 0x124320u: goto label_124320;
        case 0x124324u: goto label_124324;
        case 0x124328u: goto label_124328;
        case 0x12432cu: goto label_12432c;
        case 0x124330u: goto label_124330;
        case 0x124334u: goto label_124334;
        case 0x124338u: goto label_124338;
        case 0x12433cu: goto label_12433c;
        case 0x124340u: goto label_124340;
        case 0x124344u: goto label_124344;
        case 0x124348u: goto label_124348;
        case 0x12434cu: goto label_12434c;
        case 0x124350u: goto label_124350;
        case 0x124354u: goto label_124354;
        case 0x124358u: goto label_124358;
        case 0x12435cu: goto label_12435c;
        case 0x124360u: goto label_124360;
        case 0x124364u: goto label_124364;
        case 0x124368u: goto label_124368;
        case 0x12436cu: goto label_12436c;
        case 0x124370u: goto label_124370;
        case 0x124374u: goto label_124374;
        case 0x124378u: goto label_124378;
        case 0x12437cu: goto label_12437c;
        case 0x124380u: goto label_124380;
        case 0x124384u: goto label_124384;
        case 0x124388u: goto label_124388;
        case 0x12438cu: goto label_12438c;
        case 0x124390u: goto label_124390;
        case 0x124394u: goto label_124394;
        case 0x124398u: goto label_124398;
        case 0x12439cu: goto label_12439c;
        case 0x1243a0u: goto label_1243a0;
        case 0x1243a4u: goto label_1243a4;
        case 0x1243a8u: goto label_1243a8;
        case 0x1243acu: goto label_1243ac;
        case 0x1243b0u: goto label_1243b0;
        case 0x1243b4u: goto label_1243b4;
        case 0x1243b8u: goto label_1243b8;
        case 0x1243bcu: goto label_1243bc;
        case 0x1243c0u: goto label_1243c0;
        case 0x1243c4u: goto label_1243c4;
        case 0x1243c8u: goto label_1243c8;
        case 0x1243ccu: goto label_1243cc;
        case 0x1243d0u: goto label_1243d0;
        case 0x1243d4u: goto label_1243d4;
        case 0x1243d8u: goto label_1243d8;
        case 0x1243dcu: goto label_1243dc;
        case 0x1243e0u: goto label_1243e0;
        case 0x1243e4u: goto label_1243e4;
        case 0x1243e8u: goto label_1243e8;
        case 0x1243ecu: goto label_1243ec;
        case 0x1243f0u: goto label_1243f0;
        case 0x1243f4u: goto label_1243f4;
        case 0x1243f8u: goto label_1243f8;
        case 0x1243fcu: goto label_1243fc;
        case 0x124400u: goto label_124400;
        case 0x124404u: goto label_124404;
        case 0x124408u: goto label_124408;
        case 0x12440cu: goto label_12440c;
        case 0x124410u: goto label_124410;
        case 0x124414u: goto label_124414;
        default: break;
    }

    ctx->pc = 0x123c50u;

label_123c50:
    // 0x123c50: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x123c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_123c54:
    // 0x123c54: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x123c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_123c58:
    // 0x123c58: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x123c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_123c5c:
    // 0x123c5c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x123c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_123c60:
    // 0x123c60: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x123c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_123c64:
    // 0x123c64: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x123c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_123c68:
    // 0x123c68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x123c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_123c6c:
    // 0x123c6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x123c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_123c70:
    // 0x123c70: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x123c70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_123c74:
    // 0x123c74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x123c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_123c78:
    // 0x123c78: 0x27a400d4  addiu       $a0, $sp, 0xD4
    ctx->pc = 0x123c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_123c7c:
    // 0x123c7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x123c7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_123c80:
    // 0x123c80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x123c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_123c84:
    // 0x123c84: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x123c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_123c88:
    // 0x123c88: 0xc048920  jal         func_122480
label_123c8c:
    if (ctx->pc == 0x123C8Cu) {
        ctx->pc = 0x123C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C88u;
        // 0x123c8c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123C90u;
        goto label_123c90;
    }
    ctx->pc = 0x123C88u;
    SET_GPR_U32(ctx, 31, 0x123C90u);
    ctx->pc = 0x123C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C88u;
    // 0x123c8c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122480u, 0x123C88u, 0x123C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123C90u;
label_123c90:
    // 0x123c90: 0xc080748  jal         func_201D20
label_123c94:
    if (ctx->pc == 0x123C94u) {
        ctx->pc = 0x123C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C90u;
        // 0x123c94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123C98u;
        goto label_123c98;
    }
    ctx->pc = 0x123C90u;
    SET_GPR_U32(ctx, 31, 0x123C98u);
    ctx->pc = 0x123C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C90u;
    // 0x123c94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x123C90u, 0x123C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123C98u;
label_123c98:
    // 0x123c98: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x123c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123c9c:
    // 0x123c9c: 0x27a400d4  addiu       $a0, $sp, 0xD4
    ctx->pc = 0x123c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_123ca0:
    // 0x123ca0: 0xc048884  jal         func_122210
label_123ca4:
    if (ctx->pc == 0x123CA4u) {
        ctx->pc = 0x123CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CA0u;
        // 0x123ca4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123CA8u;
        goto label_123ca8;
    }
    ctx->pc = 0x123CA0u;
    SET_GPR_U32(ctx, 31, 0x123CA8u);
    ctx->pc = 0x123CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123CA0u;
    // 0x123ca4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122210u, 0x123CA0u, 0x123CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123CA8u;
label_123ca8:
    // 0x123ca8: 0xc0485a8  jal         func_1216A0
label_123cac:
    if (ctx->pc == 0x123CACu) {
        ctx->pc = 0x123CB0u;
        goto label_123cb0;
    }
    ctx->pc = 0x123CA8u;
    SET_GPR_U32(ctx, 31, 0x123CB0u);
    ctx->pc = 0x1216A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216A0u, 0x123CA8u, 0x123CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123CB0u;
label_123cb0:
    // 0x123cb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x123cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123cb4:
    // 0x123cb4: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x123cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_123cb8:
    // 0x123cb8: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x123cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_123cbc:
    // 0x123cbc: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x123cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_123cc0:
    // 0x123cc0: 0xc046b90  jal         func_11AE40
label_123cc4:
    if (ctx->pc == 0x123CC4u) {
        ctx->pc = 0x123CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CC0u;
        // 0x123cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123CC8u;
        goto label_123cc8;
    }
    ctx->pc = 0x123CC0u;
    SET_GPR_U32(ctx, 31, 0x123CC8u);
    ctx->pc = 0x123CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123CC0u;
    // 0x123cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x123CC0u, 0x123CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123CC8u;
label_123cc8:
    // 0x123cc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x123cc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123ccc:
    // 0x123ccc: 0x16200026  bnez        $s1, . + 4 + (0x26 << 2)
label_123cd0:
    if (ctx->pc == 0x123CD0u) {
        ctx->pc = 0x123CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CCCu;
        // 0x123cd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123CD4u;
        goto label_123cd4;
    }
    ctx->pc = 0x123CCCu;
    {
        const bool branch_taken_0x123ccc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x123CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CCCu;
        // 0x123cd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ccc) {
            ctx->pc = 0x123D68u;
            goto label_123d68;
        }
    }
    ctx->pc = 0x123CD4u;
label_123cd4:
    // 0x123cd4: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x123cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_123cd8:
    // 0x123cd8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x123cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_123cdc:
    // 0x123cdc: 0x2484b510  addiu       $a0, $a0, -0x4AF0
    ctx->pc = 0x123cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948112));
label_123ce0:
    // 0x123ce0: 0xc048198  jal         func_120660
label_123ce4:
    if (ctx->pc == 0x123CE4u) {
        ctx->pc = 0x123CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CE0u;
        // 0x123ce4: 0x24a5ea80  addiu       $a1, $a1, -0x1580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123CE8u;
        goto label_123ce8;
    }
    ctx->pc = 0x123CE0u;
    SET_GPR_U32(ctx, 31, 0x123CE8u);
    ctx->pc = 0x123CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123CE0u;
    // 0x123ce4: 0x24a5ea80  addiu       $a1, $a1, -0x1580 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120660u, 0x123CE0u, 0x123CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123CE8u;
label_123ce8:
    // 0x123ce8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x123ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_123cec:
    // 0x123cec: 0xc048198  jal         func_120660
label_123cf0:
    if (ctx->pc == 0x123CF0u) {
        ctx->pc = 0x123CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CECu;
        // 0x123cf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123CF4u;
        goto label_123cf4;
    }
    ctx->pc = 0x123CECu;
    SET_GPR_U32(ctx, 31, 0x123CF4u);
    ctx->pc = 0x123CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123CECu;
    // 0x123cf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120660u, 0x123CECu, 0x123CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123CF4u;
label_123cf4:
    // 0x123cf4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x123cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_123cf8:
    // 0x123cf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x123cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123cfc:
    // 0x123cfc: 0xc04805c  jal         func_120170
label_123d00:
    if (ctx->pc == 0x123D00u) {
        ctx->pc = 0x123D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CFCu;
        // 0x123d00: 0x27a400c8  addiu       $a0, $sp, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D04u;
        goto label_123d04;
    }
    ctx->pc = 0x123CFCu;
    SET_GPR_U32(ctx, 31, 0x123D04u);
    ctx->pc = 0x123D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123CFCu;
    // 0x123d00: 0x27a400c8  addiu       $a0, $sp, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120170u, 0x123CFCu, 0x123D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D04u;
label_123d04:
    // 0x123d04: 0x9382841c  lbu         $v0, -0x7BE4($gp)
    ctx->pc = 0x123d04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935580)));
label_123d08:
    // 0x123d08: 0x27a300dc  addiu       $v1, $sp, 0xDC
    ctx->pc = 0x123d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_123d0c:
    // 0x123d0c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x123d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_123d10:
    // 0x123d10: 0x83a500dc  lb          $a1, 0xDC($sp)
    ctx->pc = 0x123d10u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 220)));
label_123d14:
    // 0x123d14: 0xc04815c  jal         func_120570
label_123d18:
    if (ctx->pc == 0x123D18u) {
        ctx->pc = 0x123D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D14u;
        // 0x123d18: 0x27a400c8  addiu       $a0, $sp, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D1Cu;
        goto label_123d1c;
    }
    ctx->pc = 0x123D14u;
    SET_GPR_U32(ctx, 31, 0x123D1Cu);
    ctx->pc = 0x123D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123D14u;
    // 0x123d18: 0x27a400c8  addiu       $a0, $sp, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120570u, 0x123D14u, 0x123D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D1Cu;
label_123d1c:
    // 0x123d1c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x123d1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_123d20:
    // 0x123d20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123d24:
    // 0x123d24: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x123d24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_123d28:
    // 0x123d28: 0x320f809  jalr        $t9
label_123d2c:
    if (ctx->pc == 0x123D2Cu) {
        ctx->pc = 0x123D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D28u;
        // 0x123d2c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D30u;
        goto label_123d30;
    }
    ctx->pc = 0x123D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x123D30u);
        ctx->pc = 0x123D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D28u;
        // 0x123d2c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123D28u, 0x123D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123D30u;
label_123d30:
    // 0x123d30: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x123d30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_123d34:
    // 0x123d34: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x123d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_123d38:
    // 0x123d38: 0xc048044  jal         func_120110
label_123d3c:
    if (ctx->pc == 0x123D3Cu) {
        ctx->pc = 0x123D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D38u;
        // 0x123d3c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D40u;
        goto label_123d40;
    }
    ctx->pc = 0x123D38u;
    SET_GPR_U32(ctx, 31, 0x123D40u);
    ctx->pc = 0x123D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123D38u;
    // 0x123d3c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120110u, 0x123D38u, 0x123D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D40u;
label_123d40:
    // 0x123d40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x123d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_123d44:
    // 0x123d44: 0xc048254  jal         func_120950
label_123d48:
    if (ctx->pc == 0x123D48u) {
        ctx->pc = 0x123D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D44u;
        // 0x123d48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D4Cu;
        goto label_123d4c;
    }
    ctx->pc = 0x123D44u;
    SET_GPR_U32(ctx, 31, 0x123D4Cu);
    ctx->pc = 0x123D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123D44u;
    // 0x123d48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120950u, 0x123D44u, 0x123D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D4Cu;
label_123d4c:
    // 0x123d4c: 0xc048208  jal         func_120820
label_123d50:
    if (ctx->pc == 0x123D50u) {
        ctx->pc = 0x123D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D4Cu;
        // 0x123d50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D54u;
        goto label_123d54;
    }
    ctx->pc = 0x123D4Cu;
    SET_GPR_U32(ctx, 31, 0x123D54u);
    ctx->pc = 0x123D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123D4Cu;
    // 0x123d50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120820u, 0x123D4Cu, 0x123D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D54u;
label_123d54:
    // 0x123d54: 0x27a400d4  addiu       $a0, $sp, 0xD4
    ctx->pc = 0x123d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_123d58:
    // 0x123d58: 0xc04619c  jal         func_118670
label_123d5c:
    if (ctx->pc == 0x123D5Cu) {
        ctx->pc = 0x123D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D58u;
        // 0x123d5c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D60u;
        goto label_123d60;
    }
    ctx->pc = 0x123D58u;
    SET_GPR_U32(ctx, 31, 0x123D60u);
    ctx->pc = 0x123D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123D58u;
    // 0x123d5c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x123D58u, 0x123D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D60u;
label_123d60:
    // 0x123d60: 0x100001a1  b           . + 4 + (0x1A1 << 2)
label_123d64:
    if (ctx->pc == 0x123D64u) {
        ctx->pc = 0x123D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D60u;
        // 0x123d64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D68u;
        goto label_123d68;
    }
    ctx->pc = 0x123D60u;
    {
        const bool branch_taken_0x123d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D60u;
        // 0x123d64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d60) {
            ctx->pc = 0x1243E8u;
            goto label_1243e8;
        }
    }
    ctx->pc = 0x123D68u;
label_123d68:
    // 0x123d68: 0xc080702  jal         func_201C08
label_123d6c:
    if (ctx->pc == 0x123D6Cu) {
        ctx->pc = 0x123D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D68u;
        // 0x123d6c: 0x26840020  addiu       $a0, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D70u;
        goto label_123d70;
    }
    ctx->pc = 0x123D68u;
    SET_GPR_U32(ctx, 31, 0x123D70u);
    ctx->pc = 0x123D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123D68u;
    // 0x123d6c: 0x26840020  addiu       $a0, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x123D68u, 0x123D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D70u;
label_123d70:
    // 0x123d70: 0xc046c8c  jal         func_11B230
label_123d74:
    if (ctx->pc == 0x123D74u) {
        ctx->pc = 0x123D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D70u;
        // 0x123d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D78u;
        goto label_123d78;
    }
    ctx->pc = 0x123D70u;
    SET_GPR_U32(ctx, 31, 0x123D78u);
    ctx->pc = 0x123D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123D70u;
    // 0x123d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x123D70u, 0x123D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D78u;
label_123d78:
    // 0x123d78: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_123d7c:
    if (ctx->pc == 0x123D7Cu) {
        ctx->pc = 0x123D80u;
        goto label_123d80;
    }
    ctx->pc = 0x123D78u;
    {
        const bool branch_taken_0x123d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123d78) {
            ctx->pc = 0x123D9Cu;
            goto label_123d9c;
        }
    }
    ctx->pc = 0x123D80u;
label_123d80:
    // 0x123d80: 0xc046c8c  jal         func_11B230
label_123d84:
    if (ctx->pc == 0x123D84u) {
        ctx->pc = 0x123D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D80u;
        // 0x123d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D88u;
        goto label_123d88;
    }
    ctx->pc = 0x123D80u;
    SET_GPR_U32(ctx, 31, 0x123D88u);
    ctx->pc = 0x123D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123D80u;
    // 0x123d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x123D80u, 0x123D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D88u;
label_123d88:
    // 0x123d88: 0x0  nop
    ctx->pc = 0x123d88u;
    // NOP
label_123d8c:
    // 0x123d8c: 0x0  nop
    ctx->pc = 0x123d8cu;
    // NOP
label_123d90:
    // 0x123d90: 0x0  nop
    ctx->pc = 0x123d90u;
    // NOP
label_123d94:
    // 0x123d94: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_123d98:
    if (ctx->pc == 0x123D98u) {
        ctx->pc = 0x123D9Cu;
        goto label_123d9c;
    }
    ctx->pc = 0x123D94u;
    {
        const bool branch_taken_0x123d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123d94) {
            ctx->pc = 0x123D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123d80;
        }
    }
    ctx->pc = 0x123D9Cu;
label_123d9c:
    // 0x123d9c: 0x0  nop
    ctx->pc = 0x123d9cu;
    // NOP
label_123da0:
    // 0x123da0: 0x92220021  lbu         $v0, 0x21($s1)
    ctx->pc = 0x123da0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
label_123da4:
    // 0x123da4: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x123da4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_123da8:
    // 0x123da8: 0xae82008c  sw          $v0, 0x8C($s4)
    ctx->pc = 0x123da8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 2));
label_123dac:
    // 0x123dac: 0x8e91008c  lw          $s1, 0x8C($s4)
    ctx->pc = 0x123dacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_123db0:
    // 0x123db0: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x123db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_123db4:
    // 0x123db4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x123db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_123db8:
    // 0x123db8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x123db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_123dbc:
    // 0x123dbc: 0xc040168  jal         func_1005A0
label_123dc0:
    if (ctx->pc == 0x123DC0u) {
        ctx->pc = 0x123DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DBCu;
        // 0x123dc0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123DC4u;
        goto label_123dc4;
    }
    ctx->pc = 0x123DBCu;
    SET_GPR_U32(ctx, 31, 0x123DC4u);
    ctx->pc = 0x123DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123DBCu;
    // 0x123dc0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x123DBCu, 0x123DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123DC4u;
label_123dc4:
    // 0x123dc4: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x123dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
label_123dc8:
    // 0x123dc8: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x123dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
label_123dcc:
    // 0x123dcc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x123dccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_123dd0:
    // 0x123dd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123dd4:
    // 0x123dd4: 0x24a5f860  addiu       $a1, $a1, -0x7A0
    ctx->pc = 0x123dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965344));
label_123dd8:
    // 0x123dd8: 0x24c6f9c0  addiu       $a2, $a2, -0x640
    ctx->pc = 0x123dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965696));
label_123ddc:
    // 0x123ddc: 0xc07a424  jal         func_1E9090
label_123de0:
    if (ctx->pc == 0x123DE0u) {
        ctx->pc = 0x123DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DDCu;
        // 0x123de0: 0x24070090  addiu       $a3, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123DE4u;
        goto label_123de4;
    }
    ctx->pc = 0x123DDCu;
    SET_GPR_U32(ctx, 31, 0x123DE4u);
    ctx->pc = 0x123DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123DDCu;
    // 0x123de0: 0x24070090  addiu       $a3, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9090u, 0x123DDCu, 0x123DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123DE4u;
label_123de4:
    // 0x123de4: 0xae820084  sw          $v0, 0x84($s4)
    ctx->pc = 0x123de4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
label_123de8:
    // 0x123de8: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x123de8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_123dec:
    // 0x123dec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_123df0:
    if (ctx->pc == 0x123DF0u) {
        ctx->pc = 0x123DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DECu;
        // 0x123df0: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123DF4u;
        goto label_123df4;
    }
    ctx->pc = 0x123DECu;
    {
        const bool branch_taken_0x123dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DECu;
        // 0x123df0: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123dec) {
            ctx->pc = 0x123E20u;
            goto label_123e20;
        }
    }
    ctx->pc = 0x123DF4u;
label_123df4:
    // 0x123df4: 0xc040168  jal         func_1005A0
label_123df8:
    if (ctx->pc == 0x123DF8u) {
        ctx->pc = 0x123DFCu;
        goto label_123dfc;
    }
    ctx->pc = 0x123DF4u;
    SET_GPR_U32(ctx, 31, 0x123DFCu);
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x123DF4u, 0x123DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123DFCu;
label_123dfc:
    // 0x123dfc: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x123dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
label_123e00:
    // 0x123e00: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x123e00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
label_123e04:
    // 0x123e04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123e08:
    // 0x123e08: 0x24a5f860  addiu       $a1, $a1, -0x7A0
    ctx->pc = 0x123e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965344));
label_123e0c:
    // 0x123e0c: 0x24c6f9c0  addiu       $a2, $a2, -0x640
    ctx->pc = 0x123e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965696));
label_123e10:
    // 0x123e10: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x123e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_123e14:
    // 0x123e14: 0xc07a424  jal         func_1E9090
label_123e18:
    if (ctx->pc == 0x123E18u) {
        ctx->pc = 0x123E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E14u;
        // 0x123e18: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E1Cu;
        goto label_123e1c;
    }
    ctx->pc = 0x123E14u;
    SET_GPR_U32(ctx, 31, 0x123E1Cu);
    ctx->pc = 0x123E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123E14u;
    // 0x123e18: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9090u, 0x123E14u, 0x123E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E1Cu;
label_123e1c:
    // 0x123e1c: 0xae820088  sw          $v0, 0x88($s4)
    ctx->pc = 0x123e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 2));
label_123e20:
    // 0x123e20: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x123e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_123e24:
    // 0x123e24: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x123e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_123e28:
    // 0x123e28: 0x24420b30  addiu       $v0, $v0, 0xB30
    ctx->pc = 0x123e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2864));
label_123e2c:
    // 0x123e2c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x123e2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_123e30:
    // 0x123e30: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x123e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_123e34:
    // 0x123e34: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x123e34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_123e38:
    // 0x123e38: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x123e38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_123e3c:
    // 0x123e3c: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x123e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
label_123e40:
    // 0x123e40: 0x92030013  lbu         $v1, 0x13($s0)
    ctx->pc = 0x123e40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
label_123e44:
    // 0x123e44: 0x8e82008c  lw          $v0, 0x8C($s4)
    ctx->pc = 0x123e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_123e48:
    // 0x123e48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x123e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_123e4c:
    // 0x123e4c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x123e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_123e50:
    // 0x123e50: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x123e50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_123e54:
    // 0x123e54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_123e58:
    if (ctx->pc == 0x123E58u) {
        ctx->pc = 0x123E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E54u;
        // 0x123e58: 0x8c7700b0  lw          $s7, 0xB0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E5Cu;
        goto label_123e5c;
    }
    ctx->pc = 0x123E54u;
    {
        const bool branch_taken_0x123e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E54u;
        // 0x123e58: 0x8c7700b0  lw          $s7, 0xB0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e54) {
            ctx->pc = 0x123E64u;
            goto label_123e64;
        }
    }
    ctx->pc = 0x123E5Cu;
label_123e5c:
    // 0x123e5c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x123e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_123e60:
    // 0x123e60: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x123e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_123e64:
    // 0x123e64: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x123e64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_123e68:
    // 0x123e68: 0x202a821  addu        $s5, $s0, $v0
    ctx->pc = 0x123e68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_123e6c:
    // 0x123e6c: 0xae950080  sw          $s5, 0x80($s4)
    ctx->pc = 0x123e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 21));
label_123e70:
    // 0x123e70: 0x8e9e008c  lw          $fp, 0x8C($s4)
    ctx->pc = 0x123e70u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_123e74:
    // 0x123e74: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x123e74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_123e78:
    // 0x123e78: 0x10200092  beqz        $at, . + 4 + (0x92 << 2)
label_123e7c:
    if (ctx->pc == 0x123E7Cu) {
        ctx->pc = 0x123E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E78u;
        // 0x123e7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E80u;
        goto label_123e80;
    }
    ctx->pc = 0x123E78u;
    {
        const bool branch_taken_0x123e78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E78u;
        // 0x123e7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e78) {
            ctx->pc = 0x1240C4u;
            goto label_1240c4;
        }
    }
    ctx->pc = 0x123E80u;
label_123e80:
    // 0x123e80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x123e80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123e84:
    // 0x123e84: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x123e84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123e88:
    // 0x123e88: 0x96040014  lhu         $a0, 0x14($s0)
    ctx->pc = 0x123e88u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_123e8c:
    // 0x123e8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123e90:
    // 0x123e90: 0x2223004  sllv        $a2, $v0, $s1
    ctx->pc = 0x123e90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_123e94:
    // 0x123e94: 0x8e830084  lw          $v1, 0x84($s4)
    ctx->pc = 0x123e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_123e98:
    // 0x123e98: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x123e98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_123e9c:
    // 0x123e9c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x123e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_123ea0:
    // 0x123ea0: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x123ea0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_123ea4:
    // 0x123ea4: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x123ea4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_123ea8:
    // 0x123ea8: 0x0  nop
    ctx->pc = 0x123ea8u;
    // NOP
label_123eac:
    // 0x123eac: 0x0  nop
    ctx->pc = 0x123eacu;
    // NOP
label_123eb0:
    // 0x123eb0: 0x9012  mflo        $s2
    ctx->pc = 0x123eb0u;
    SET_GPR_U64(ctx, 18, ctx->lo);
label_123eb4:
    // 0x123eb4: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x123eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_123eb8:
    // 0x123eb8: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x123eb8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_123ebc:
    // 0x123ebc: 0x0  nop
    ctx->pc = 0x123ebcu;
    // NOP
label_123ec0:
    // 0x123ec0: 0x0  nop
    ctx->pc = 0x123ec0u;
    // NOP
label_123ec4:
    // 0x123ec4: 0x3812  mflo        $a3
    ctx->pc = 0x123ec4u;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_123ec8:
    // 0x123ec8: 0xc047ec4  jal         func_11FB10
label_123ecc:
    if (ctx->pc == 0x123ECCu) {
        ctx->pc = 0x123ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123EC8u;
        // 0x123ecc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123ED0u;
        goto label_123ed0;
    }
    ctx->pc = 0x123EC8u;
    SET_GPR_U32(ctx, 31, 0x123ED0u);
    ctx->pc = 0x123ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123EC8u;
    // 0x123ecc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FB10u, 0x123EC8u, 0x123ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123ED0u;
label_123ed0:
    // 0x123ed0: 0x8e82008c  lw          $v0, 0x8C($s4)
    ctx->pc = 0x123ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_123ed4:
    // 0x123ed4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x123ed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_123ed8:
    // 0x123ed8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_123edc:
    if (ctx->pc == 0x123EDCu) {
        ctx->pc = 0x123EE0u;
        goto label_123ee0;
    }
    ctx->pc = 0x123ED8u;
    {
        const bool branch_taken_0x123ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123ed8) {
            ctx->pc = 0x123EF0u;
            goto label_123ef0;
        }
    }
    ctx->pc = 0x123EE0u;
label_123ee0:
    // 0x123ee0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x123ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_123ee4:
    // 0x123ee4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x123ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_123ee8:
    // 0x123ee8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x123ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_123eec:
    // 0x123eec: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x123eecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_123ef0:
    // 0x123ef0: 0x2e210007  sltiu       $at, $s1, 0x7
    ctx->pc = 0x123ef0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_123ef4:
    // 0x123ef4: 0x10200047  beqz        $at, . + 4 + (0x47 << 2)
label_123ef8:
    if (ctx->pc == 0x123EF8u) {
        ctx->pc = 0x123EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123EF4u;
        // 0x123ef8: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123EFCu;
        goto label_123efc;
    }
    ctx->pc = 0x123EF4u;
    {
        const bool branch_taken_0x123ef4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x123EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123EF4u;
        // 0x123ef8: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ef4) {
            ctx->pc = 0x124014u;
            goto label_124014;
        }
    }
    ctx->pc = 0x123EFCu;
label_123efc:
    // 0x123efc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x123efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_123f00:
    // 0x123f00: 0x2463ea90  addiu       $v1, $v1, -0x1570
    ctx->pc = 0x123f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961808));
label_123f04:
    // 0x123f04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x123f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_123f08:
    // 0x123f08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x123f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_123f0c:
    // 0x123f0c: 0x400008  jr          $v0
label_123f10:
    if (ctx->pc == 0x123F10u) {
        ctx->pc = 0x123F14u;
        goto label_123f14;
    }
    ctx->pc = 0x123F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123F14u: goto label_123f14;
            case 0x123F44u: goto label_123f44;
            case 0x123F70u: goto label_123f70;
            case 0x123F98u: goto label_123f98;
            case 0x123FC4u: goto label_123fc4;
            case 0x123FF0u: goto label_123ff0;
            case 0x124014u: goto label_124014;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123F0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x123F14u;
label_123f14:
    // 0x123f14: 0x0  nop
    ctx->pc = 0x123f14u;
    // NOP
label_123f18:
    // 0x123f18: 0xde840070  ld          $a0, 0x70($s4)
    ctx->pc = 0x123f18u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 112)));
label_123f1c:
    // 0x123f1c: 0x2642003f  addiu       $v0, $s2, 0x3F
    ctx->pc = 0x123f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
label_123f20:
    // 0x123f20: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x123f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_123f24:
    // 0x123f24: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x123f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_123f28:
    // 0x123f28: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x123f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
label_123f2c:
    // 0x123f2c: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x123f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
label_123f30:
    // 0x123f30: 0x34423fff  ori         $v0, $v0, 0x3FFF
    ctx->pc = 0x123f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
label_123f34:
    // 0x123f34: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x123f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_123f38:
    // 0x123f38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x123f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_123f3c:
    // 0x123f3c: 0x10000035  b           . + 4 + (0x35 << 2)
label_123f40:
    if (ctx->pc == 0x123F40u) {
        ctx->pc = 0x123F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F3Cu;
        // 0x123f40: 0xfe820070  sd          $v0, 0x70($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123F44u;
        goto label_123f44;
    }
    ctx->pc = 0x123F3Cu;
    {
        const bool branch_taken_0x123f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F3Cu;
        // 0x123f40: 0xfe820070  sd          $v0, 0x70($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f3c) {
            ctx->pc = 0x124014u;
            goto label_124014;
        }
    }
    ctx->pc = 0x123F44u;
label_123f44:
    // 0x123f44: 0x0  nop
    ctx->pc = 0x123f44u;
    // NOP
label_123f48:
    // 0x123f48: 0x92840074  lbu         $a0, 0x74($s4)
    ctx->pc = 0x123f48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 116)));
label_123f4c:
    // 0x123f4c: 0x2642003f  addiu       $v0, $s2, 0x3F
    ctx->pc = 0x123f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
label_123f50:
    // 0x123f50: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x123f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_123f54:
    // 0x123f54: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x123f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_123f58:
    // 0x123f58: 0x2402ff03  addiu       $v0, $zero, -0xFD
    ctx->pc = 0x123f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967043));
label_123f5c:
    // 0x123f5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x123f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_123f60:
    // 0x123f60: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x123f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_123f64:
    // 0x123f64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x123f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_123f68:
    // 0x123f68: 0x1000002a  b           . + 4 + (0x2A << 2)
label_123f6c:
    if (ctx->pc == 0x123F6Cu) {
        ctx->pc = 0x123F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F68u;
        // 0x123f6c: 0xa2820074  sb          $v0, 0x74($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123F70u;
        goto label_123f70;
    }
    ctx->pc = 0x123F68u;
    {
        const bool branch_taken_0x123f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F68u;
        // 0x123f6c: 0xa2820074  sb          $v0, 0x74($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f68) {
            ctx->pc = 0x124014u;
            goto label_124014;
        }
    }
    ctx->pc = 0x123F70u;
label_123f70:
    // 0x123f70: 0x96840076  lhu         $a0, 0x76($s4)
    ctx->pc = 0x123f70u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 118)));
label_123f74:
    // 0x123f74: 0x2642003f  addiu       $v0, $s2, 0x3F
    ctx->pc = 0x123f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
label_123f78:
    // 0x123f78: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x123f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_123f7c:
    // 0x123f7c: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x123f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_123f80:
    // 0x123f80: 0x2402f03f  addiu       $v0, $zero, -0xFC1
    ctx->pc = 0x123f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963263));
label_123f84:
    // 0x123f84: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x123f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_123f88:
    // 0x123f88: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x123f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_123f8c:
    // 0x123f8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x123f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_123f90:
    // 0x123f90: 0x10000020  b           . + 4 + (0x20 << 2)
label_123f94:
    if (ctx->pc == 0x123F94u) {
        ctx->pc = 0x123F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F90u;
        // 0x123f94: 0xa6820076  sh          $v0, 0x76($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 118), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123F98u;
        goto label_123f98;
    }
    ctx->pc = 0x123F90u;
    {
        const bool branch_taken_0x123f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F90u;
        // 0x123f94: 0xa6820076  sh          $v0, 0x76($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 118), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f90) {
            ctx->pc = 0x124014u;
            goto label_124014;
        }
    }
    ctx->pc = 0x123F98u;
label_123f98:
    // 0x123f98: 0xde840078  ld          $a0, 0x78($s4)
    ctx->pc = 0x123f98u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 120)));
label_123f9c:
    // 0x123f9c: 0x2642003f  addiu       $v0, $s2, 0x3F
    ctx->pc = 0x123f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
label_123fa0:
    // 0x123fa0: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x123fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_123fa4:
    // 0x123fa4: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x123fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_123fa8:
    // 0x123fa8: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x123fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
label_123fac:
    // 0x123fac: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x123facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
label_123fb0:
    // 0x123fb0: 0x34423fff  ori         $v0, $v0, 0x3FFF
    ctx->pc = 0x123fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
label_123fb4:
    // 0x123fb4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x123fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_123fb8:
    // 0x123fb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x123fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_123fbc:
    // 0x123fbc: 0x10000015  b           . + 4 + (0x15 << 2)
label_123fc0:
    if (ctx->pc == 0x123FC0u) {
        ctx->pc = 0x123FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FBCu;
        // 0x123fc0: 0xfe820078  sd          $v0, 0x78($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123FC4u;
        goto label_123fc4;
    }
    ctx->pc = 0x123FBCu;
    {
        const bool branch_taken_0x123fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FBCu;
        // 0x123fc0: 0xfe820078  sd          $v0, 0x78($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123fbc) {
            ctx->pc = 0x124014u;
            goto label_124014;
        }
    }
    ctx->pc = 0x123FC4u;
label_123fc4:
    // 0x123fc4: 0x0  nop
    ctx->pc = 0x123fc4u;
    // NOP
label_123fc8:
    // 0x123fc8: 0x9284007c  lbu         $a0, 0x7C($s4)
    ctx->pc = 0x123fc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 124)));
label_123fcc:
    // 0x123fcc: 0x2642003f  addiu       $v0, $s2, 0x3F
    ctx->pc = 0x123fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
label_123fd0:
    // 0x123fd0: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x123fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_123fd4:
    // 0x123fd4: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x123fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_123fd8:
    // 0x123fd8: 0x2402ff03  addiu       $v0, $zero, -0xFD
    ctx->pc = 0x123fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967043));
label_123fdc:
    // 0x123fdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x123fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_123fe0:
    // 0x123fe0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x123fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_123fe4:
    // 0x123fe4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x123fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_123fe8:
    // 0x123fe8: 0x1000000a  b           . + 4 + (0xA << 2)
label_123fec:
    if (ctx->pc == 0x123FECu) {
        ctx->pc = 0x123FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FE8u;
        // 0x123fec: 0xa282007c  sb          $v0, 0x7C($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 124), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123FF0u;
        goto label_123ff0;
    }
    ctx->pc = 0x123FE8u;
    {
        const bool branch_taken_0x123fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FE8u;
        // 0x123fec: 0xa282007c  sb          $v0, 0x7C($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 124), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123fe8) {
            ctx->pc = 0x124014u;
            goto label_124014;
        }
    }
    ctx->pc = 0x123FF0u;
label_123ff0:
    // 0x123ff0: 0x9684007e  lhu         $a0, 0x7E($s4)
    ctx->pc = 0x123ff0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 126)));
label_123ff4:
    // 0x123ff4: 0x2642003f  addiu       $v0, $s2, 0x3F
    ctx->pc = 0x123ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
label_123ff8:
    // 0x123ff8: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x123ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_123ffc:
    // 0x123ffc: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x123ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_124000:
    // 0x124000: 0x2402f03f  addiu       $v0, $zero, -0xFC1
    ctx->pc = 0x124000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963263));
label_124004:
    // 0x124004: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x124004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_124008:
    // 0x124008: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x124008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_12400c:
    // 0x12400c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12400cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_124010:
    // 0x124010: 0xa682007e  sh          $v0, 0x7E($s4)
    ctx->pc = 0x124010u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 126), (uint16_t)GPR_U32(ctx, 2));
label_124014:
    // 0x124014: 0x0  nop
    ctx->pc = 0x124014u;
    // NOP
label_124018:
    // 0x124018: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x124018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_12401c:
    // 0x12401c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_124020:
    if (ctx->pc == 0x124020u) {
        ctx->pc = 0x124024u;
        goto label_124024;
    }
    ctx->pc = 0x12401Cu;
    {
        const bool branch_taken_0x12401c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12401c) {
            ctx->pc = 0x1240ACu;
            goto label_1240ac;
        }
    }
    ctx->pc = 0x124024u;
label_124024:
    // 0x124024: 0x16200021  bnez        $s1, . + 4 + (0x21 << 2)
label_124028:
    if (ctx->pc == 0x124028u) {
        ctx->pc = 0x124028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124024u;
        // 0x124028: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12402Cu;
        goto label_12402c;
    }
    ctx->pc = 0x124024u;
    {
        const bool branch_taken_0x124024 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x124028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124024u;
        // 0x124028: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124024) {
            ctx->pc = 0x1240ACu;
            goto label_1240ac;
        }
    }
    ctx->pc = 0x12402Cu;
label_12402c:
    // 0x12402c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x12402cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124030:
    // 0x124030: 0x14680003  bne         $v1, $t0, . + 4 + (0x3 << 2)
label_124034:
    if (ctx->pc == 0x124034u) {
        ctx->pc = 0x124038u;
        goto label_124038;
    }
    ctx->pc = 0x124030u;
    {
        const bool branch_taken_0x124030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x124030) {
            ctx->pc = 0x124040u;
            goto label_124040;
        }
    }
    ctx->pc = 0x124038u;
label_124038:
    // 0x124038: 0x10000008  b           . + 4 + (0x8 << 2)
label_12403c:
    if (ctx->pc == 0x12403Cu) {
        ctx->pc = 0x12403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124038u;
        // 0x12403c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124040u;
        goto label_124040;
    }
    ctx->pc = 0x124038u;
    {
        const bool branch_taken_0x124038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124038u;
        // 0x12403c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124038) {
            ctx->pc = 0x12405Cu;
            goto label_12405c;
        }
    }
    ctx->pc = 0x124040u;
label_124040:
    // 0x124040: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x124040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_124044:
    // 0x124044: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_124048:
    if (ctx->pc == 0x124048u) {
        ctx->pc = 0x12404Cu;
        goto label_12404c;
    }
    ctx->pc = 0x124044u;
    {
        const bool branch_taken_0x124044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x124044) {
            ctx->pc = 0x124054u;
            goto label_124054;
        }
    }
    ctx->pc = 0x12404Cu;
label_12404c:
    // 0x12404c: 0x10000003  b           . + 4 + (0x3 << 2)
label_124050:
    if (ctx->pc == 0x124050u) {
        ctx->pc = 0x124054u;
        goto label_124054;
    }
    ctx->pc = 0x12404Cu;
    {
        const bool branch_taken_0x12404c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12404c) {
            ctx->pc = 0x12405Cu;
            goto label_12405c;
        }
    }
    ctx->pc = 0x124054u;
label_124054:
    // 0x124054: 0x0  nop
    ctx->pc = 0x124054u;
    // NOP
label_124058:
    // 0x124058: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x124058u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12405c:
    // 0x12405c: 0x0  nop
    ctx->pc = 0x12405cu;
    // NOP
label_124060:
    // 0x124060: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x124060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_124064:
    // 0x124064: 0x16e20005  bne         $s7, $v0, . + 4 + (0x5 << 2)
label_124068:
    if (ctx->pc == 0x124068u) {
        ctx->pc = 0x12406Cu;
        goto label_12406c;
    }
    ctx->pc = 0x124064u;
    {
        const bool branch_taken_0x124064 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x124064) {
            ctx->pc = 0x12407Cu;
            goto label_12407c;
        }
    }
    ctx->pc = 0x12406Cu;
label_12406c:
    // 0x12406c: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x12406cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_124070:
    // 0x124070: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x124070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_124074:
    // 0x124074: 0x10000005  b           . + 4 + (0x5 << 2)
label_124078:
    if (ctx->pc == 0x124078u) {
        ctx->pc = 0x124078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124074u;
        // 0x124078: 0x238c2  srl         $a3, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12407Cu;
        goto label_12407c;
    }
    ctx->pc = 0x124074u;
    {
        const bool branch_taken_0x124074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124074u;
        // 0x124078: 0x238c2  srl         $a3, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124074) {
            ctx->pc = 0x12408Cu;
            goto label_12408c;
        }
    }
    ctx->pc = 0x12407Cu;
label_12407c:
    // 0x12407c: 0x0  nop
    ctx->pc = 0x12407cu;
    // NOP
label_124080:
    // 0x124080: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x124080u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_124084:
    // 0x124084: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x124084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_124088:
    // 0x124088: 0x23902  srl         $a3, $v0, 4
    ctx->pc = 0x124088u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_12408c:
    // 0x12408c: 0x0  nop
    ctx->pc = 0x12408cu;
    // NOP
label_124090:
    // 0x124090: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x124090u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_124094:
    // 0x124094: 0x8e840088  lw          $a0, 0x88($s4)
    ctx->pc = 0x124094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
label_124098:
    // 0x124098: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x124098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_12409c:
    // 0x12409c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x12409cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1240a0:
    // 0x1240a0: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1240a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_1240a4:
    // 0x1240a4: 0xc047ec4  jal         func_11FB10
label_1240a8:
    if (ctx->pc == 0x1240A8u) {
        ctx->pc = 0x1240A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240A4u;
        // 0x1240a8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1240ACu;
        goto label_1240ac;
    }
    ctx->pc = 0x1240A4u;
    SET_GPR_U32(ctx, 31, 0x1240ACu);
    ctx->pc = 0x1240A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1240A4u;
    // 0x1240a8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FB10u, 0x1240A4u, 0x1240ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1240ACu;
label_1240ac:
    // 0x1240ac: 0x0  nop
    ctx->pc = 0x1240acu;
    // NOP
label_1240b0:
    // 0x1240b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1240b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1240b4:
    // 0x1240b4: 0x23e102a  slt         $v0, $s1, $fp
    ctx->pc = 0x1240b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_1240b8:
    // 0x1240b8: 0x26730090  addiu       $s3, $s3, 0x90
    ctx->pc = 0x1240b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_1240bc:
    // 0x1240bc: 0x1440ff72  bnez        $v0, . + 4 + (-0x8E << 2)
label_1240c0:
    if (ctx->pc == 0x1240C0u) {
        ctx->pc = 0x1240C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240BCu;
        // 0x1240c0: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1240C4u;
        goto label_1240c4;
    }
    ctx->pc = 0x1240BCu;
    {
        const bool branch_taken_0x1240bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1240C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240BCu;
        // 0x1240c0: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1240bc) {
            ctx->pc = 0x123E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123e88;
        }
    }
    ctx->pc = 0x1240C4u;
label_1240c4:
    // 0x1240c4: 0x0  nop
    ctx->pc = 0x1240c4u;
    // NOP
label_1240c8:
    // 0x1240c8: 0x92850068  lbu         $a1, 0x68($s4)
    ctx->pc = 0x1240c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 104)));
label_1240cc:
    // 0x1240cc: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1240ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1240d0:
    // 0x1240d0: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x1240d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_1240d4:
    // 0x1240d4: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x1240d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
label_1240d8:
    // 0x1240d8: 0x240cffe3  addiu       $t4, $zero, -0x1D
    ctx->pc = 0x1240d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
label_1240dc:
    // 0x1240dc: 0x240afe3f  addiu       $t2, $zero, -0x1C1
    ctx->pc = 0x1240dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
label_1240e0:
    // 0x1240e0: 0x640b0140  daddiu      $t3, $zero, 0x140
    ctx->pc = 0x1240e0u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)320);
label_1240e4:
    // 0x1240e4: 0x2408ffdf  addiu       $t0, $zero, -0x21
    ctx->pc = 0x1240e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_1240e8:
    // 0x1240e8: 0x64090020  daddiu      $t1, $zero, 0x20
    ctx->pc = 0x1240e8u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
label_1240ec:
    // 0x1240ec: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x1240ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1240f0:
    // 0x1240f0: 0x43840  sll         $a3, $a0, 1
    ctx->pc = 0x1240f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1240f4:
    // 0x1240f4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1240f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1240f8:
    // 0x1240f8: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x1240f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1240fc:
    // 0x1240fc: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1240fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_124100:
    // 0x124100: 0xa2820068  sb          $v0, 0x68($s4)
    ctx->pc = 0x124100u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 104), (uint8_t)GPR_U32(ctx, 2));
label_124104:
    // 0x124104: 0x2404ffe7  addiu       $a0, $zero, -0x19
    ctx->pc = 0x124104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
label_124108:
    // 0x124108: 0x8e8e008c  lw          $t6, 0x8C($s4)
    ctx->pc = 0x124108u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_12410c:
    // 0x12410c: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x12410cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_124110:
    // 0x124110: 0x928d0068  lbu         $t5, 0x68($s4)
    ctx->pc = 0x124110u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 104)));
label_124114:
    // 0x124114: 0x30030fff  andi        $v1, $zero, 0xFFF
    ctx->pc = 0x124114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)4095);
label_124118:
    // 0x124118: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x124118u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_12411c:
    // 0x12411c: 0x1ac6024  and         $t4, $t5, $t4
    ctx->pc = 0x12411cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & GPR_U64(ctx, 12));
label_124120:
    // 0x124120: 0x31cd0007  andi        $t5, $t6, 0x7
    ctx->pc = 0x124120u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)7);
label_124124:
    // 0x124124: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x124124u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
label_124128:
    // 0x124128: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x124128u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
label_12412c:
    // 0x12412c: 0xa28c0068  sb          $t4, 0x68($s4)
    ctx->pc = 0x12412cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 104), (uint8_t)GPR_U32(ctx, 12));
label_124130:
    // 0x124130: 0x968c0068  lhu         $t4, 0x68($s4)
    ctx->pc = 0x124130u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 104)));
label_124134:
    // 0x124134: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x124134u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
label_124138:
    // 0x124138: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x124138u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
label_12413c:
    // 0x12413c: 0xa68a0068  sh          $t2, 0x68($s4)
    ctx->pc = 0x12413cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 104), (uint16_t)GPR_U32(ctx, 10));
label_124140:
    // 0x124140: 0x928a0068  lbu         $t2, 0x68($s4)
    ctx->pc = 0x124140u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 104)));
label_124144:
    // 0x124144: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x124144u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
label_124148:
    // 0x124148: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x124148u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_12414c:
    // 0x12414c: 0xa2880068  sb          $t0, 0x68($s4)
    ctx->pc = 0x12414cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 104), (uint8_t)GPR_U32(ctx, 8));
label_124150:
    // 0x124150: 0x92880069  lbu         $t0, 0x69($s4)
    ctx->pc = 0x124150u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 105)));
label_124154:
    // 0x124154: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x124154u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
label_124158:
    // 0x124158: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x124158u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_12415c:
    // 0x12415c: 0xa2860069  sb          $a2, 0x69($s4)
    ctx->pc = 0x12415cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 105), (uint8_t)GPR_U32(ctx, 6));
label_124160:
    // 0x124160: 0x9286006a  lbu         $a2, 0x6A($s4)
    ctx->pc = 0x124160u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 106)));
label_124164:
    // 0x124164: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x124164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_124168:
    // 0x124168: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x124168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_12416c:
    // 0x12416c: 0xa284006a  sb          $a0, 0x6A($s4)
    ctx->pc = 0x12416cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 106), (uint8_t)GPR_U32(ctx, 4));
label_124170:
    // 0x124170: 0x9684006c  lhu         $a0, 0x6C($s4)
    ctx->pc = 0x124170u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 108)));
label_124174:
    // 0x124174: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x124174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_124178:
    // 0x124178: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x124178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_12417c:
    // 0x12417c: 0xa682006c  sh          $v0, 0x6C($s4)
    ctx->pc = 0x12417cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 108), (uint16_t)GPR_U32(ctx, 2));
label_124180:
    // 0x124180: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x124180u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_124184:
    // 0x124184: 0x2443003f  addiu       $v1, $v0, 0x3F
    ctx->pc = 0x124184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
label_124188:
    // 0x124188: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_12418c:
    if (ctx->pc == 0x12418Cu) {
        ctx->pc = 0x12418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124188u;
        // 0x12418c: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124190u;
        goto label_124190;
    }
    ctx->pc = 0x124188u;
    {
        const bool branch_taken_0x124188 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124188u;
        // 0x12418c: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124188) {
            ctx->pc = 0x124198u;
            goto label_124198;
        }
    }
    ctx->pc = 0x124190u;
label_124190:
    // 0x124190: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x124190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_124194:
    // 0x124194: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x124194u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_124198:
    // 0x124198: 0xde860060  ld          $a2, 0x60($s4)
    ctx->pc = 0x124198u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 20), 96)));
label_12419c:
    // 0x12419c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12419cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1241a0:
    // 0x1241a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1241a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1241a4:
    // 0x1241a4: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x1241a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_1241a8:
    // 0x1241a8: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x1241a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
label_1241ac:
    // 0x1241ac: 0x323b8  dsll        $a0, $v1, 14
    ctx->pc = 0x1241acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 14);
label_1241b0:
    // 0x1241b0: 0x34453fff  ori         $a1, $v0, 0x3FFF
    ctx->pc = 0x1241b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
label_1241b4:
    // 0x1241b4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1241b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1241b8:
    // 0x1241b8: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x1241b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_1241bc:
    // 0x1241bc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1241bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1241c0:
    // 0x1241c0: 0x16e2001a  bne         $s7, $v0, . + 4 + (0x1A << 2)
label_1241c4:
    if (ctx->pc == 0x1241C4u) {
        ctx->pc = 0x1241C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241C0u;
        // 0x1241c4: 0xfe830060  sd          $v1, 0x60($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1241C8u;
        goto label_1241c8;
    }
    ctx->pc = 0x1241C0u;
    {
        const bool branch_taken_0x1241c0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x1241C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241C0u;
        // 0x1241c4: 0xfe830060  sd          $v1, 0x60($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241c0) {
            ctx->pc = 0x12422Cu;
            goto label_12422c;
        }
    }
    ctx->pc = 0x1241C8u;
label_1241c8:
    // 0x1241c8: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x1241c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_1241cc:
    // 0x1241cc: 0x28410041  slti        $at, $v0, 0x41
    ctx->pc = 0x1241ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)65) ? 1 : 0);
label_1241d0:
    // 0x1241d0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1241d4:
    if (ctx->pc == 0x1241D4u) {
        ctx->pc = 0x1241D8u;
        goto label_1241d8;
    }
    ctx->pc = 0x1241D0u;
    {
        const bool branch_taken_0x1241d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1241d0) {
            ctx->pc = 0x1241F0u;
            goto label_1241f0;
        }
    }
    ctx->pc = 0x1241D8u;
label_1241d8:
    // 0x1241d8: 0xde840060  ld          $a0, 0x60($s4)
    ctx->pc = 0x1241d8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 96)));
label_1241dc:
    // 0x1241dc: 0x64020004  daddiu      $v0, $zero, 0x4
    ctx->pc = 0x1241dcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_1241e0:
    // 0x1241e0: 0x21bb8  dsll        $v1, $v0, 14
    ctx->pc = 0x1241e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 14);
label_1241e4:
    // 0x1241e4: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x1241e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1241e8:
    // 0x1241e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1241e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1241ec:
    // 0x1241ec: 0xfe820060  sd          $v0, 0x60($s4)
    ctx->pc = 0x1241ecu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 2));
label_1241f0:
    // 0x1241f0: 0xde840060  ld          $a0, 0x60($s4)
    ctx->pc = 0x1241f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 96)));
label_1241f4:
    // 0x1241f4: 0x4133c  dsll32      $v0, $a0, 12
    ctx->pc = 0x1241f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 12));
label_1241f8:
    // 0x1241f8: 0x21ebe  dsrl32      $v1, $v0, 26
    ctx->pc = 0x1241f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 26));
label_1241fc:
    // 0x1241fc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1241fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_124200:
    // 0x124200: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_124204:
    if (ctx->pc == 0x124204u) {
        ctx->pc = 0x124208u;
        goto label_124208;
    }
    ctx->pc = 0x124200u;
    {
        const bool branch_taken_0x124200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124200) {
            ctx->pc = 0x124298u;
            goto label_124298;
        }
    }
    ctx->pc = 0x124208u;
label_124208:
    // 0x124208: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x124208u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
label_12420c:
    // 0x12420c: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x12420cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
label_124210:
    // 0x124210: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x124210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_124214:
    // 0x124214: 0x34423fff  ori         $v0, $v0, 0x3FFF
    ctx->pc = 0x124214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
label_124218:
    // 0x124218: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x124218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_12421c:
    // 0x12421c: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x12421cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
label_124220:
    // 0x124220: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x124220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_124224:
    // 0x124224: 0x1000001c  b           . + 4 + (0x1C << 2)
label_124228:
    if (ctx->pc == 0x124228u) {
        ctx->pc = 0x124228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124224u;
        // 0x124228: 0xfe820060  sd          $v0, 0x60($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12422Cu;
        goto label_12422c;
    }
    ctx->pc = 0x124224u;
    {
        const bool branch_taken_0x124224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124224u;
        // 0x124228: 0xfe820060  sd          $v0, 0x60($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124224) {
            ctx->pc = 0x124298u;
            goto label_124298;
        }
    }
    ctx->pc = 0x12422Cu;
label_12422c:
    // 0x12422c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x12422cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_124230:
    // 0x124230: 0x16e20019  bne         $s7, $v0, . + 4 + (0x19 << 2)
label_124234:
    if (ctx->pc == 0x124234u) {
        ctx->pc = 0x124238u;
        goto label_124238;
    }
    ctx->pc = 0x124230u;
    {
        const bool branch_taken_0x124230 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x124230) {
            ctx->pc = 0x124298u;
            goto label_124298;
        }
    }
    ctx->pc = 0x124238u;
label_124238:
    // 0x124238: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x124238u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_12423c:
    // 0x12423c: 0x28410041  slti        $at, $v0, 0x41
    ctx->pc = 0x12423cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)65) ? 1 : 0);
label_124240:
    // 0x124240: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_124244:
    if (ctx->pc == 0x124244u) {
        ctx->pc = 0x124248u;
        goto label_124248;
    }
    ctx->pc = 0x124240u;
    {
        const bool branch_taken_0x124240 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x124240) {
            ctx->pc = 0x124260u;
            goto label_124260;
        }
    }
    ctx->pc = 0x124248u;
label_124248:
    // 0x124248: 0xde840060  ld          $a0, 0x60($s4)
    ctx->pc = 0x124248u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 96)));
label_12424c:
    // 0x12424c: 0x64020002  daddiu      $v0, $zero, 0x2
    ctx->pc = 0x12424cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_124250:
    // 0x124250: 0x21bb8  dsll        $v1, $v0, 14
    ctx->pc = 0x124250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 14);
label_124254:
    // 0x124254: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x124254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_124258:
    // 0x124258: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x124258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_12425c:
    // 0x12425c: 0xfe820060  sd          $v0, 0x60($s4)
    ctx->pc = 0x12425cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 2));
label_124260:
    // 0x124260: 0xde840060  ld          $a0, 0x60($s4)
    ctx->pc = 0x124260u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 96)));
label_124264:
    // 0x124264: 0x4133c  dsll32      $v0, $a0, 12
    ctx->pc = 0x124264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 12));
label_124268:
    // 0x124268: 0x21ebe  dsrl32      $v1, $v0, 26
    ctx->pc = 0x124268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 26));
label_12426c:
    // 0x12426c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x12426cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_124270:
    // 0x124270: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_124274:
    if (ctx->pc == 0x124274u) {
        ctx->pc = 0x124278u;
        goto label_124278;
    }
    ctx->pc = 0x124270u;
    {
        const bool branch_taken_0x124270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124270) {
            ctx->pc = 0x124298u;
            goto label_124298;
        }
    }
    ctx->pc = 0x124278u;
label_124278:
    // 0x124278: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x124278u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
label_12427c:
    // 0x12427c: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x12427cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
label_124280:
    // 0x124280: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x124280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_124284:
    // 0x124284: 0x34423fff  ori         $v0, $v0, 0x3FFF
    ctx->pc = 0x124284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
label_124288:
    // 0x124288: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x124288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_12428c:
    // 0x12428c: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x12428cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
label_124290:
    // 0x124290: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x124290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_124294:
    // 0x124294: 0xfe820060  sd          $v0, 0x60($s4)
    ctx->pc = 0x124294u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 2));
label_124298:
    // 0x124298: 0x96850062  lhu         $a1, 0x62($s4)
    ctx->pc = 0x124298u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 98)));
label_12429c:
    // 0x12429c: 0x32e2003f  andi        $v0, $s7, 0x3F
    ctx->pc = 0x12429cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)63);
label_1242a0:
    // 0x1242a0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1242a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1242a4:
    // 0x1242a4: 0x2402fc0f  addiu       $v0, $zero, -0x3F1
    ctx->pc = 0x1242a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
label_1242a8:
    // 0x1242a8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1242a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1242ac:
    // 0x1242ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1242acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1242b0:
    // 0x1242b0: 0xa6820062  sh          $v0, 0x62($s4)
    ctx->pc = 0x1242b0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 98), (uint16_t)GPR_U32(ctx, 2));
label_1242b4:
    // 0x1242b4: 0x96050014  lhu         $a1, 0x14($s0)
    ctx->pc = 0x1242b4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_1242b8:
    // 0x1242b8: 0xc04927c  jal         func_1249F0
label_1242bc:
    if (ctx->pc == 0x1242BCu) {
        ctx->pc = 0x1242BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242B8u;
        // 0x1242bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1242C0u;
        goto label_1242c0;
    }
    ctx->pc = 0x1242B8u;
    SET_GPR_U32(ctx, 31, 0x1242C0u);
    ctx->pc = 0x1242BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1242B8u;
    // 0x1242bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1249F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249F0u, 0x1242B8u, 0x1242C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1242C0u;
label_1242c0:
    // 0x1242c0: 0x92850063  lbu         $a1, 0x63($s4)
    ctx->pc = 0x1242c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 99)));
label_1242c4:
    // 0x1242c4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1242c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_1242c8:
    // 0x1242c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1242c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1242cc:
    // 0x1242cc: 0x2402ffc3  addiu       $v0, $zero, -0x3D
    ctx->pc = 0x1242ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
label_1242d0:
    // 0x1242d0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1242d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1242d4:
    // 0x1242d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1242d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1242d8:
    // 0x1242d8: 0xa2820063  sb          $v0, 0x63($s4)
    ctx->pc = 0x1242d8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 99), (uint8_t)GPR_U32(ctx, 2));
label_1242dc:
    // 0x1242dc: 0x96050016  lhu         $a1, 0x16($s0)
    ctx->pc = 0x1242dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_1242e0:
    // 0x1242e0: 0xc04927c  jal         func_1249F0
label_1242e4:
    if (ctx->pc == 0x1242E4u) {
        ctx->pc = 0x1242E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242E0u;
        // 0x1242e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1242E8u;
        goto label_1242e8;
    }
    ctx->pc = 0x1242E0u;
    SET_GPR_U32(ctx, 31, 0x1242E8u);
    ctx->pc = 0x1242E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1242E0u;
    // 0x1242e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1249F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249F0u, 0x1242E0u, 0x1242E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1242E8u;
label_1242e8:
    // 0x1242e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1242e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1242ec:
    // 0x1242ec: 0xde880060  ld          $t0, 0x60($s4)
    ctx->pc = 0x1242ecu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 20), 96)));
label_1242f0:
    // 0x1242f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1242f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1242f4:
    // 0x1242f4: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x1242f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_1242f8:
    // 0x1242f8: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x1242f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_1242fc:
    // 0x1242fc: 0x64050004  daddiu      $a1, $zero, 0x4
    ctx->pc = 0x1242fcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_124300:
    // 0x124300: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x124300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_124304:
    // 0x124304: 0x337b8  dsll        $a2, $v1, 30
    ctx->pc = 0x124304u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 30);
label_124308:
    // 0x124308: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x124308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_12430c:
    // 0x12430c: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x12430cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
label_124310:
    // 0x124310: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x124310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_124314:
    // 0x124314: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x124314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_124318:
    // 0x124318: 0x1021824  and         $v1, $t0, $v0
    ctx->pc = 0x124318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_12431c:
    // 0x12431c: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x12431cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_124320:
    // 0x124320: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x124320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
label_124324:
    // 0x124324: 0xfe860060  sd          $a2, 0x60($s4)
    ctx->pc = 0x124324u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 6));
label_124328:
    // 0x124328: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x124328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_12432c:
    // 0x12432c: 0x92860064  lbu         $a2, 0x64($s4)
    ctx->pc = 0x12432cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 100)));
label_124330:
    // 0x124330: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x124330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
label_124334:
    // 0x124334: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x124334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_124338:
    // 0x124338: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x124338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_12433c:
    // 0x12433c: 0xa2840064  sb          $a0, 0x64($s4)
    ctx->pc = 0x12433cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 100), (uint8_t)GPR_U32(ctx, 4));
label_124340:
    // 0x124340: 0x92840064  lbu         $a0, 0x64($s4)
    ctx->pc = 0x124340u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 100)));
label_124344:
    // 0x124344: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x124344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_124348:
    // 0x124348: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x124348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_12434c:
    // 0x12434c: 0xa2820064  sb          $v0, 0x64($s4)
    ctx->pc = 0x12434cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 100), (uint8_t)GPR_U32(ctx, 2));
label_124350:
    // 0x124350: 0x8e820088  lw          $v0, 0x88($s4)
    ctx->pc = 0x124350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
label_124354:
    // 0x124354: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_124358:
    if (ctx->pc == 0x124358u) {
        ctx->pc = 0x124358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124354u;
        // 0x124358: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12435Cu;
        goto label_12435c;
    }
    ctx->pc = 0x124354u;
    {
        const bool branch_taken_0x124354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124354u;
        // 0x124358: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124354) {
            ctx->pc = 0x1243D8u;
            goto label_1243d8;
        }
    }
    ctx->pc = 0x12435Cu;
label_12435c:
    // 0x12435c: 0x920a0012  lbu         $t2, 0x12($s0)
    ctx->pc = 0x12435cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_124360:
    // 0x124360: 0x30e20007  andi        $v0, $a3, 0x7
    ctx->pc = 0x124360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
label_124364:
    // 0x124364: 0x92890066  lbu         $t1, 0x66($s4)
    ctx->pc = 0x124364u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 102)));
label_124368:
    // 0x124368: 0x2408ff87  addiu       $t0, $zero, -0x79
    ctx->pc = 0x124368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
label_12436c:
    // 0x12436c: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x12436cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_124370:
    // 0x124370: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x124370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_124374:
    // 0x124374: 0x2406ffe0  addiu       $a2, $zero, -0x20
    ctx->pc = 0x124374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_124378:
    // 0x124378: 0x3007001f  andi        $a3, $zero, 0x1F
    ctx->pc = 0x124378u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
label_12437c:
    // 0x12437c: 0x2404ff1f  addiu       $a0, $zero, -0xE1
    ctx->pc = 0x12437cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
label_124380:
    // 0x124380: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x124380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_124384:
    // 0x124384: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x124384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_124388:
    // 0x124388: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x124388u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_12438c:
    // 0x12438c: 0x1284024  and         $t0, $t1, $t0
    ctx->pc = 0x12438cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
label_124390:
    // 0x124390: 0x15d4821  addu        $t1, $t2, $sp
    ctx->pc = 0x124390u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
label_124394:
    // 0x124394: 0x8d2900b0  lw          $t1, 0xB0($t1)
    ctx->pc = 0x124394u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 176)));
label_124398:
    // 0x124398: 0x3129000f  andi        $t1, $t1, 0xF
    ctx->pc = 0x124398u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
label_12439c:
    // 0x12439c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x12439cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_1243a0:
    // 0x1243a0: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1243a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_1243a4:
    // 0x1243a4: 0xa2880066  sb          $t0, 0x66($s4)
    ctx->pc = 0x1243a4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 102), (uint8_t)GPR_U32(ctx, 8));
label_1243a8:
    // 0x1243a8: 0x92880067  lbu         $t0, 0x67($s4)
    ctx->pc = 0x1243a8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 103)));
label_1243ac:
    // 0x1243ac: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x1243acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
label_1243b0:
    // 0x1243b0: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1243b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1243b4:
    // 0x1243b4: 0xa2860067  sb          $a2, 0x67($s4)
    ctx->pc = 0x1243b4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 103), (uint8_t)GPR_U32(ctx, 6));
label_1243b8:
    // 0x1243b8: 0x92860067  lbu         $a2, 0x67($s4)
    ctx->pc = 0x1243b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 103)));
label_1243bc:
    // 0x1243bc: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1243bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_1243c0:
    // 0x1243c0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1243c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1243c4:
    // 0x1243c4: 0xa2840067  sb          $a0, 0x67($s4)
    ctx->pc = 0x1243c4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 103), (uint8_t)GPR_U32(ctx, 4));
label_1243c8:
    // 0x1243c8: 0x92840066  lbu         $a0, 0x66($s4)
    ctx->pc = 0x1243c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 102)));
label_1243cc:
    // 0x1243cc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1243ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1243d0:
    // 0x1243d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1243d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1243d4:
    // 0x1243d4: 0xa2820066  sb          $v0, 0x66($s4)
    ctx->pc = 0x1243d4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 102), (uint8_t)GPR_U32(ctx, 2));
label_1243d8:
    // 0x1243d8: 0x27a400d4  addiu       $a0, $sp, 0xD4
    ctx->pc = 0x1243d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_1243dc:
    // 0x1243dc: 0xc04619c  jal         func_118670
label_1243e0:
    if (ctx->pc == 0x1243E0u) {
        ctx->pc = 0x1243E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243DCu;
        // 0x1243e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1243E4u;
        goto label_1243e4;
    }
    ctx->pc = 0x1243DCu;
    SET_GPR_U32(ctx, 31, 0x1243E4u);
    ctx->pc = 0x1243E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1243DCu;
    // 0x1243e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1243DCu, 0x1243E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1243E4u;
label_1243e4:
    // 0x1243e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1243e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1243e8:
    // 0x1243e8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1243e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1243ec:
    // 0x1243ec: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1243ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1243f0:
    // 0x1243f0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1243f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1243f4:
    // 0x1243f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1243f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1243f8:
    // 0x1243f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1243f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1243fc:
    // 0x1243fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1243fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_124400:
    // 0x124400: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x124400u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_124404:
    // 0x124404: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x124404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_124408:
    // 0x124408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x124408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12440c:
    // 0x12440c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12440cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_124410:
    // 0x124410: 0x3e00008  jr          $ra
label_124414:
    if (ctx->pc == 0x124414u) {
        ctx->pc = 0x124414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124410u;
        // 0x124414: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124418u;
        goto label_fallthrough_0x124410;
    }
    ctx->pc = 0x124410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124410u;
        // 0x124414: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x124410:
    ctx->pc = 0x124418u;
}
