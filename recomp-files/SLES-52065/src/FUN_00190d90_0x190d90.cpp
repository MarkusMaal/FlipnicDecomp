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

// Function: FUN_00190d90
// Address: 0x190d90 - 0x1916b0
void FUN_00190d90_0x190d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00190d90_0x190d90");
#endif

    switch (ctx->pc) {
        case 0x190d90u: goto label_190d90;
        case 0x190d94u: goto label_190d94;
        case 0x190d98u: goto label_190d98;
        case 0x190d9cu: goto label_190d9c;
        case 0x190da0u: goto label_190da0;
        case 0x190da4u: goto label_190da4;
        case 0x190da8u: goto label_190da8;
        case 0x190dacu: goto label_190dac;
        case 0x190db0u: goto label_190db0;
        case 0x190db4u: goto label_190db4;
        case 0x190db8u: goto label_190db8;
        case 0x190dbcu: goto label_190dbc;
        case 0x190dc0u: goto label_190dc0;
        case 0x190dc4u: goto label_190dc4;
        case 0x190dc8u: goto label_190dc8;
        case 0x190dccu: goto label_190dcc;
        case 0x190dd0u: goto label_190dd0;
        case 0x190dd4u: goto label_190dd4;
        case 0x190dd8u: goto label_190dd8;
        case 0x190ddcu: goto label_190ddc;
        case 0x190de0u: goto label_190de0;
        case 0x190de4u: goto label_190de4;
        case 0x190de8u: goto label_190de8;
        case 0x190decu: goto label_190dec;
        case 0x190df0u: goto label_190df0;
        case 0x190df4u: goto label_190df4;
        case 0x190df8u: goto label_190df8;
        case 0x190dfcu: goto label_190dfc;
        case 0x190e00u: goto label_190e00;
        case 0x190e04u: goto label_190e04;
        case 0x190e08u: goto label_190e08;
        case 0x190e0cu: goto label_190e0c;
        case 0x190e10u: goto label_190e10;
        case 0x190e14u: goto label_190e14;
        case 0x190e18u: goto label_190e18;
        case 0x190e1cu: goto label_190e1c;
        case 0x190e20u: goto label_190e20;
        case 0x190e24u: goto label_190e24;
        case 0x190e28u: goto label_190e28;
        case 0x190e2cu: goto label_190e2c;
        case 0x190e30u: goto label_190e30;
        case 0x190e34u: goto label_190e34;
        case 0x190e38u: goto label_190e38;
        case 0x190e3cu: goto label_190e3c;
        case 0x190e40u: goto label_190e40;
        case 0x190e44u: goto label_190e44;
        case 0x190e48u: goto label_190e48;
        case 0x190e4cu: goto label_190e4c;
        case 0x190e50u: goto label_190e50;
        case 0x190e54u: goto label_190e54;
        case 0x190e58u: goto label_190e58;
        case 0x190e5cu: goto label_190e5c;
        case 0x190e60u: goto label_190e60;
        case 0x190e64u: goto label_190e64;
        case 0x190e68u: goto label_190e68;
        case 0x190e6cu: goto label_190e6c;
        case 0x190e70u: goto label_190e70;
        case 0x190e74u: goto label_190e74;
        case 0x190e78u: goto label_190e78;
        case 0x190e7cu: goto label_190e7c;
        case 0x190e80u: goto label_190e80;
        case 0x190e84u: goto label_190e84;
        case 0x190e88u: goto label_190e88;
        case 0x190e8cu: goto label_190e8c;
        case 0x190e90u: goto label_190e90;
        case 0x190e94u: goto label_190e94;
        case 0x190e98u: goto label_190e98;
        case 0x190e9cu: goto label_190e9c;
        case 0x190ea0u: goto label_190ea0;
        case 0x190ea4u: goto label_190ea4;
        case 0x190ea8u: goto label_190ea8;
        case 0x190eacu: goto label_190eac;
        case 0x190eb0u: goto label_190eb0;
        case 0x190eb4u: goto label_190eb4;
        case 0x190eb8u: goto label_190eb8;
        case 0x190ebcu: goto label_190ebc;
        case 0x190ec0u: goto label_190ec0;
        case 0x190ec4u: goto label_190ec4;
        case 0x190ec8u: goto label_190ec8;
        case 0x190eccu: goto label_190ecc;
        case 0x190ed0u: goto label_190ed0;
        case 0x190ed4u: goto label_190ed4;
        case 0x190ed8u: goto label_190ed8;
        case 0x190edcu: goto label_190edc;
        case 0x190ee0u: goto label_190ee0;
        case 0x190ee4u: goto label_190ee4;
        case 0x190ee8u: goto label_190ee8;
        case 0x190eecu: goto label_190eec;
        case 0x190ef0u: goto label_190ef0;
        case 0x190ef4u: goto label_190ef4;
        case 0x190ef8u: goto label_190ef8;
        case 0x190efcu: goto label_190efc;
        case 0x190f00u: goto label_190f00;
        case 0x190f04u: goto label_190f04;
        case 0x190f08u: goto label_190f08;
        case 0x190f0cu: goto label_190f0c;
        case 0x190f10u: goto label_190f10;
        case 0x190f14u: goto label_190f14;
        case 0x190f18u: goto label_190f18;
        case 0x190f1cu: goto label_190f1c;
        case 0x190f20u: goto label_190f20;
        case 0x190f24u: goto label_190f24;
        case 0x190f28u: goto label_190f28;
        case 0x190f2cu: goto label_190f2c;
        case 0x190f30u: goto label_190f30;
        case 0x190f34u: goto label_190f34;
        case 0x190f38u: goto label_190f38;
        case 0x190f3cu: goto label_190f3c;
        case 0x190f40u: goto label_190f40;
        case 0x190f44u: goto label_190f44;
        case 0x190f48u: goto label_190f48;
        case 0x190f4cu: goto label_190f4c;
        case 0x190f50u: goto label_190f50;
        case 0x190f54u: goto label_190f54;
        case 0x190f58u: goto label_190f58;
        case 0x190f5cu: goto label_190f5c;
        case 0x190f60u: goto label_190f60;
        case 0x190f64u: goto label_190f64;
        case 0x190f68u: goto label_190f68;
        case 0x190f6cu: goto label_190f6c;
        case 0x190f70u: goto label_190f70;
        case 0x190f74u: goto label_190f74;
        case 0x190f78u: goto label_190f78;
        case 0x190f7cu: goto label_190f7c;
        case 0x190f80u: goto label_190f80;
        case 0x190f84u: goto label_190f84;
        case 0x190f88u: goto label_190f88;
        case 0x190f8cu: goto label_190f8c;
        case 0x190f90u: goto label_190f90;
        case 0x190f94u: goto label_190f94;
        case 0x190f98u: goto label_190f98;
        case 0x190f9cu: goto label_190f9c;
        case 0x190fa0u: goto label_190fa0;
        case 0x190fa4u: goto label_190fa4;
        case 0x190fa8u: goto label_190fa8;
        case 0x190facu: goto label_190fac;
        case 0x190fb0u: goto label_190fb0;
        case 0x190fb4u: goto label_190fb4;
        case 0x190fb8u: goto label_190fb8;
        case 0x190fbcu: goto label_190fbc;
        case 0x190fc0u: goto label_190fc0;
        case 0x190fc4u: goto label_190fc4;
        case 0x190fc8u: goto label_190fc8;
        case 0x190fccu: goto label_190fcc;
        case 0x190fd0u: goto label_190fd0;
        case 0x190fd4u: goto label_190fd4;
        case 0x190fd8u: goto label_190fd8;
        case 0x190fdcu: goto label_190fdc;
        case 0x190fe0u: goto label_190fe0;
        case 0x190fe4u: goto label_190fe4;
        case 0x190fe8u: goto label_190fe8;
        case 0x190fecu: goto label_190fec;
        case 0x190ff0u: goto label_190ff0;
        case 0x190ff4u: goto label_190ff4;
        case 0x190ff8u: goto label_190ff8;
        case 0x190ffcu: goto label_190ffc;
        case 0x191000u: goto label_191000;
        case 0x191004u: goto label_191004;
        case 0x191008u: goto label_191008;
        case 0x19100cu: goto label_19100c;
        case 0x191010u: goto label_191010;
        case 0x191014u: goto label_191014;
        case 0x191018u: goto label_191018;
        case 0x19101cu: goto label_19101c;
        case 0x191020u: goto label_191020;
        case 0x191024u: goto label_191024;
        case 0x191028u: goto label_191028;
        case 0x19102cu: goto label_19102c;
        case 0x191030u: goto label_191030;
        case 0x191034u: goto label_191034;
        case 0x191038u: goto label_191038;
        case 0x19103cu: goto label_19103c;
        case 0x191040u: goto label_191040;
        case 0x191044u: goto label_191044;
        case 0x191048u: goto label_191048;
        case 0x19104cu: goto label_19104c;
        case 0x191050u: goto label_191050;
        case 0x191054u: goto label_191054;
        case 0x191058u: goto label_191058;
        case 0x19105cu: goto label_19105c;
        case 0x191060u: goto label_191060;
        case 0x191064u: goto label_191064;
        case 0x191068u: goto label_191068;
        case 0x19106cu: goto label_19106c;
        case 0x191070u: goto label_191070;
        case 0x191074u: goto label_191074;
        case 0x191078u: goto label_191078;
        case 0x19107cu: goto label_19107c;
        case 0x191080u: goto label_191080;
        case 0x191084u: goto label_191084;
        case 0x191088u: goto label_191088;
        case 0x19108cu: goto label_19108c;
        case 0x191090u: goto label_191090;
        case 0x191094u: goto label_191094;
        case 0x191098u: goto label_191098;
        case 0x19109cu: goto label_19109c;
        case 0x1910a0u: goto label_1910a0;
        case 0x1910a4u: goto label_1910a4;
        case 0x1910a8u: goto label_1910a8;
        case 0x1910acu: goto label_1910ac;
        case 0x1910b0u: goto label_1910b0;
        case 0x1910b4u: goto label_1910b4;
        case 0x1910b8u: goto label_1910b8;
        case 0x1910bcu: goto label_1910bc;
        case 0x1910c0u: goto label_1910c0;
        case 0x1910c4u: goto label_1910c4;
        case 0x1910c8u: goto label_1910c8;
        case 0x1910ccu: goto label_1910cc;
        case 0x1910d0u: goto label_1910d0;
        case 0x1910d4u: goto label_1910d4;
        case 0x1910d8u: goto label_1910d8;
        case 0x1910dcu: goto label_1910dc;
        case 0x1910e0u: goto label_1910e0;
        case 0x1910e4u: goto label_1910e4;
        case 0x1910e8u: goto label_1910e8;
        case 0x1910ecu: goto label_1910ec;
        case 0x1910f0u: goto label_1910f0;
        case 0x1910f4u: goto label_1910f4;
        case 0x1910f8u: goto label_1910f8;
        case 0x1910fcu: goto label_1910fc;
        case 0x191100u: goto label_191100;
        case 0x191104u: goto label_191104;
        case 0x191108u: goto label_191108;
        case 0x19110cu: goto label_19110c;
        case 0x191110u: goto label_191110;
        case 0x191114u: goto label_191114;
        case 0x191118u: goto label_191118;
        case 0x19111cu: goto label_19111c;
        case 0x191120u: goto label_191120;
        case 0x191124u: goto label_191124;
        case 0x191128u: goto label_191128;
        case 0x19112cu: goto label_19112c;
        case 0x191130u: goto label_191130;
        case 0x191134u: goto label_191134;
        case 0x191138u: goto label_191138;
        case 0x19113cu: goto label_19113c;
        case 0x191140u: goto label_191140;
        case 0x191144u: goto label_191144;
        case 0x191148u: goto label_191148;
        case 0x19114cu: goto label_19114c;
        case 0x191150u: goto label_191150;
        case 0x191154u: goto label_191154;
        case 0x191158u: goto label_191158;
        case 0x19115cu: goto label_19115c;
        case 0x191160u: goto label_191160;
        case 0x191164u: goto label_191164;
        case 0x191168u: goto label_191168;
        case 0x19116cu: goto label_19116c;
        case 0x191170u: goto label_191170;
        case 0x191174u: goto label_191174;
        case 0x191178u: goto label_191178;
        case 0x19117cu: goto label_19117c;
        case 0x191180u: goto label_191180;
        case 0x191184u: goto label_191184;
        case 0x191188u: goto label_191188;
        case 0x19118cu: goto label_19118c;
        case 0x191190u: goto label_191190;
        case 0x191194u: goto label_191194;
        case 0x191198u: goto label_191198;
        case 0x19119cu: goto label_19119c;
        case 0x1911a0u: goto label_1911a0;
        case 0x1911a4u: goto label_1911a4;
        case 0x1911a8u: goto label_1911a8;
        case 0x1911acu: goto label_1911ac;
        case 0x1911b0u: goto label_1911b0;
        case 0x1911b4u: goto label_1911b4;
        case 0x1911b8u: goto label_1911b8;
        case 0x1911bcu: goto label_1911bc;
        case 0x1911c0u: goto label_1911c0;
        case 0x1911c4u: goto label_1911c4;
        case 0x1911c8u: goto label_1911c8;
        case 0x1911ccu: goto label_1911cc;
        case 0x1911d0u: goto label_1911d0;
        case 0x1911d4u: goto label_1911d4;
        case 0x1911d8u: goto label_1911d8;
        case 0x1911dcu: goto label_1911dc;
        case 0x1911e0u: goto label_1911e0;
        case 0x1911e4u: goto label_1911e4;
        case 0x1911e8u: goto label_1911e8;
        case 0x1911ecu: goto label_1911ec;
        case 0x1911f0u: goto label_1911f0;
        case 0x1911f4u: goto label_1911f4;
        case 0x1911f8u: goto label_1911f8;
        case 0x1911fcu: goto label_1911fc;
        case 0x191200u: goto label_191200;
        case 0x191204u: goto label_191204;
        case 0x191208u: goto label_191208;
        case 0x19120cu: goto label_19120c;
        case 0x191210u: goto label_191210;
        case 0x191214u: goto label_191214;
        case 0x191218u: goto label_191218;
        case 0x19121cu: goto label_19121c;
        case 0x191220u: goto label_191220;
        case 0x191224u: goto label_191224;
        case 0x191228u: goto label_191228;
        case 0x19122cu: goto label_19122c;
        case 0x191230u: goto label_191230;
        case 0x191234u: goto label_191234;
        case 0x191238u: goto label_191238;
        case 0x19123cu: goto label_19123c;
        case 0x191240u: goto label_191240;
        case 0x191244u: goto label_191244;
        case 0x191248u: goto label_191248;
        case 0x19124cu: goto label_19124c;
        case 0x191250u: goto label_191250;
        case 0x191254u: goto label_191254;
        case 0x191258u: goto label_191258;
        case 0x19125cu: goto label_19125c;
        case 0x191260u: goto label_191260;
        case 0x191264u: goto label_191264;
        case 0x191268u: goto label_191268;
        case 0x19126cu: goto label_19126c;
        case 0x191270u: goto label_191270;
        case 0x191274u: goto label_191274;
        case 0x191278u: goto label_191278;
        case 0x19127cu: goto label_19127c;
        case 0x191280u: goto label_191280;
        case 0x191284u: goto label_191284;
        case 0x191288u: goto label_191288;
        case 0x19128cu: goto label_19128c;
        case 0x191290u: goto label_191290;
        case 0x191294u: goto label_191294;
        case 0x191298u: goto label_191298;
        case 0x19129cu: goto label_19129c;
        case 0x1912a0u: goto label_1912a0;
        case 0x1912a4u: goto label_1912a4;
        case 0x1912a8u: goto label_1912a8;
        case 0x1912acu: goto label_1912ac;
        case 0x1912b0u: goto label_1912b0;
        case 0x1912b4u: goto label_1912b4;
        case 0x1912b8u: goto label_1912b8;
        case 0x1912bcu: goto label_1912bc;
        case 0x1912c0u: goto label_1912c0;
        case 0x1912c4u: goto label_1912c4;
        case 0x1912c8u: goto label_1912c8;
        case 0x1912ccu: goto label_1912cc;
        case 0x1912d0u: goto label_1912d0;
        case 0x1912d4u: goto label_1912d4;
        case 0x1912d8u: goto label_1912d8;
        case 0x1912dcu: goto label_1912dc;
        case 0x1912e0u: goto label_1912e0;
        case 0x1912e4u: goto label_1912e4;
        case 0x1912e8u: goto label_1912e8;
        case 0x1912ecu: goto label_1912ec;
        case 0x1912f0u: goto label_1912f0;
        case 0x1912f4u: goto label_1912f4;
        case 0x1912f8u: goto label_1912f8;
        case 0x1912fcu: goto label_1912fc;
        case 0x191300u: goto label_191300;
        case 0x191304u: goto label_191304;
        case 0x191308u: goto label_191308;
        case 0x19130cu: goto label_19130c;
        case 0x191310u: goto label_191310;
        case 0x191314u: goto label_191314;
        case 0x191318u: goto label_191318;
        case 0x19131cu: goto label_19131c;
        case 0x191320u: goto label_191320;
        case 0x191324u: goto label_191324;
        case 0x191328u: goto label_191328;
        case 0x19132cu: goto label_19132c;
        case 0x191330u: goto label_191330;
        case 0x191334u: goto label_191334;
        case 0x191338u: goto label_191338;
        case 0x19133cu: goto label_19133c;
        case 0x191340u: goto label_191340;
        case 0x191344u: goto label_191344;
        case 0x191348u: goto label_191348;
        case 0x19134cu: goto label_19134c;
        case 0x191350u: goto label_191350;
        case 0x191354u: goto label_191354;
        case 0x191358u: goto label_191358;
        case 0x19135cu: goto label_19135c;
        case 0x191360u: goto label_191360;
        case 0x191364u: goto label_191364;
        case 0x191368u: goto label_191368;
        case 0x19136cu: goto label_19136c;
        case 0x191370u: goto label_191370;
        case 0x191374u: goto label_191374;
        case 0x191378u: goto label_191378;
        case 0x19137cu: goto label_19137c;
        case 0x191380u: goto label_191380;
        case 0x191384u: goto label_191384;
        case 0x191388u: goto label_191388;
        case 0x19138cu: goto label_19138c;
        case 0x191390u: goto label_191390;
        case 0x191394u: goto label_191394;
        case 0x191398u: goto label_191398;
        case 0x19139cu: goto label_19139c;
        case 0x1913a0u: goto label_1913a0;
        case 0x1913a4u: goto label_1913a4;
        case 0x1913a8u: goto label_1913a8;
        case 0x1913acu: goto label_1913ac;
        case 0x1913b0u: goto label_1913b0;
        case 0x1913b4u: goto label_1913b4;
        case 0x1913b8u: goto label_1913b8;
        case 0x1913bcu: goto label_1913bc;
        case 0x1913c0u: goto label_1913c0;
        case 0x1913c4u: goto label_1913c4;
        case 0x1913c8u: goto label_1913c8;
        case 0x1913ccu: goto label_1913cc;
        case 0x1913d0u: goto label_1913d0;
        case 0x1913d4u: goto label_1913d4;
        case 0x1913d8u: goto label_1913d8;
        case 0x1913dcu: goto label_1913dc;
        case 0x1913e0u: goto label_1913e0;
        case 0x1913e4u: goto label_1913e4;
        case 0x1913e8u: goto label_1913e8;
        case 0x1913ecu: goto label_1913ec;
        case 0x1913f0u: goto label_1913f0;
        case 0x1913f4u: goto label_1913f4;
        case 0x1913f8u: goto label_1913f8;
        case 0x1913fcu: goto label_1913fc;
        case 0x191400u: goto label_191400;
        case 0x191404u: goto label_191404;
        case 0x191408u: goto label_191408;
        case 0x19140cu: goto label_19140c;
        case 0x191410u: goto label_191410;
        case 0x191414u: goto label_191414;
        case 0x191418u: goto label_191418;
        case 0x19141cu: goto label_19141c;
        case 0x191420u: goto label_191420;
        case 0x191424u: goto label_191424;
        case 0x191428u: goto label_191428;
        case 0x19142cu: goto label_19142c;
        case 0x191430u: goto label_191430;
        case 0x191434u: goto label_191434;
        case 0x191438u: goto label_191438;
        case 0x19143cu: goto label_19143c;
        case 0x191440u: goto label_191440;
        case 0x191444u: goto label_191444;
        case 0x191448u: goto label_191448;
        case 0x19144cu: goto label_19144c;
        case 0x191450u: goto label_191450;
        case 0x191454u: goto label_191454;
        case 0x191458u: goto label_191458;
        case 0x19145cu: goto label_19145c;
        case 0x191460u: goto label_191460;
        case 0x191464u: goto label_191464;
        case 0x191468u: goto label_191468;
        case 0x19146cu: goto label_19146c;
        case 0x191470u: goto label_191470;
        case 0x191474u: goto label_191474;
        case 0x191478u: goto label_191478;
        case 0x19147cu: goto label_19147c;
        case 0x191480u: goto label_191480;
        case 0x191484u: goto label_191484;
        case 0x191488u: goto label_191488;
        case 0x19148cu: goto label_19148c;
        case 0x191490u: goto label_191490;
        case 0x191494u: goto label_191494;
        case 0x191498u: goto label_191498;
        case 0x19149cu: goto label_19149c;
        case 0x1914a0u: goto label_1914a0;
        case 0x1914a4u: goto label_1914a4;
        case 0x1914a8u: goto label_1914a8;
        case 0x1914acu: goto label_1914ac;
        case 0x1914b0u: goto label_1914b0;
        case 0x1914b4u: goto label_1914b4;
        case 0x1914b8u: goto label_1914b8;
        case 0x1914bcu: goto label_1914bc;
        case 0x1914c0u: goto label_1914c0;
        case 0x1914c4u: goto label_1914c4;
        case 0x1914c8u: goto label_1914c8;
        case 0x1914ccu: goto label_1914cc;
        case 0x1914d0u: goto label_1914d0;
        case 0x1914d4u: goto label_1914d4;
        case 0x1914d8u: goto label_1914d8;
        case 0x1914dcu: goto label_1914dc;
        case 0x1914e0u: goto label_1914e0;
        case 0x1914e4u: goto label_1914e4;
        case 0x1914e8u: goto label_1914e8;
        case 0x1914ecu: goto label_1914ec;
        case 0x1914f0u: goto label_1914f0;
        case 0x1914f4u: goto label_1914f4;
        case 0x1914f8u: goto label_1914f8;
        case 0x1914fcu: goto label_1914fc;
        case 0x191500u: goto label_191500;
        case 0x191504u: goto label_191504;
        case 0x191508u: goto label_191508;
        case 0x19150cu: goto label_19150c;
        case 0x191510u: goto label_191510;
        case 0x191514u: goto label_191514;
        case 0x191518u: goto label_191518;
        case 0x19151cu: goto label_19151c;
        case 0x191520u: goto label_191520;
        case 0x191524u: goto label_191524;
        case 0x191528u: goto label_191528;
        case 0x19152cu: goto label_19152c;
        case 0x191530u: goto label_191530;
        case 0x191534u: goto label_191534;
        case 0x191538u: goto label_191538;
        case 0x19153cu: goto label_19153c;
        case 0x191540u: goto label_191540;
        case 0x191544u: goto label_191544;
        case 0x191548u: goto label_191548;
        case 0x19154cu: goto label_19154c;
        case 0x191550u: goto label_191550;
        case 0x191554u: goto label_191554;
        case 0x191558u: goto label_191558;
        case 0x19155cu: goto label_19155c;
        case 0x191560u: goto label_191560;
        case 0x191564u: goto label_191564;
        case 0x191568u: goto label_191568;
        case 0x19156cu: goto label_19156c;
        case 0x191570u: goto label_191570;
        case 0x191574u: goto label_191574;
        case 0x191578u: goto label_191578;
        case 0x19157cu: goto label_19157c;
        case 0x191580u: goto label_191580;
        case 0x191584u: goto label_191584;
        case 0x191588u: goto label_191588;
        case 0x19158cu: goto label_19158c;
        case 0x191590u: goto label_191590;
        case 0x191594u: goto label_191594;
        case 0x191598u: goto label_191598;
        case 0x19159cu: goto label_19159c;
        case 0x1915a0u: goto label_1915a0;
        case 0x1915a4u: goto label_1915a4;
        case 0x1915a8u: goto label_1915a8;
        case 0x1915acu: goto label_1915ac;
        case 0x1915b0u: goto label_1915b0;
        case 0x1915b4u: goto label_1915b4;
        case 0x1915b8u: goto label_1915b8;
        case 0x1915bcu: goto label_1915bc;
        case 0x1915c0u: goto label_1915c0;
        case 0x1915c4u: goto label_1915c4;
        case 0x1915c8u: goto label_1915c8;
        case 0x1915ccu: goto label_1915cc;
        case 0x1915d0u: goto label_1915d0;
        case 0x1915d4u: goto label_1915d4;
        case 0x1915d8u: goto label_1915d8;
        case 0x1915dcu: goto label_1915dc;
        case 0x1915e0u: goto label_1915e0;
        case 0x1915e4u: goto label_1915e4;
        case 0x1915e8u: goto label_1915e8;
        case 0x1915ecu: goto label_1915ec;
        case 0x1915f0u: goto label_1915f0;
        case 0x1915f4u: goto label_1915f4;
        case 0x1915f8u: goto label_1915f8;
        case 0x1915fcu: goto label_1915fc;
        case 0x191600u: goto label_191600;
        case 0x191604u: goto label_191604;
        case 0x191608u: goto label_191608;
        case 0x19160cu: goto label_19160c;
        case 0x191610u: goto label_191610;
        case 0x191614u: goto label_191614;
        case 0x191618u: goto label_191618;
        case 0x19161cu: goto label_19161c;
        case 0x191620u: goto label_191620;
        case 0x191624u: goto label_191624;
        case 0x191628u: goto label_191628;
        case 0x19162cu: goto label_19162c;
        case 0x191630u: goto label_191630;
        case 0x191634u: goto label_191634;
        case 0x191638u: goto label_191638;
        case 0x19163cu: goto label_19163c;
        case 0x191640u: goto label_191640;
        case 0x191644u: goto label_191644;
        case 0x191648u: goto label_191648;
        case 0x19164cu: goto label_19164c;
        case 0x191650u: goto label_191650;
        case 0x191654u: goto label_191654;
        case 0x191658u: goto label_191658;
        case 0x19165cu: goto label_19165c;
        case 0x191660u: goto label_191660;
        case 0x191664u: goto label_191664;
        case 0x191668u: goto label_191668;
        case 0x19166cu: goto label_19166c;
        case 0x191670u: goto label_191670;
        case 0x191674u: goto label_191674;
        case 0x191678u: goto label_191678;
        case 0x19167cu: goto label_19167c;
        case 0x191680u: goto label_191680;
        case 0x191684u: goto label_191684;
        case 0x191688u: goto label_191688;
        case 0x19168cu: goto label_19168c;
        case 0x191690u: goto label_191690;
        case 0x191694u: goto label_191694;
        case 0x191698u: goto label_191698;
        case 0x19169cu: goto label_19169c;
        case 0x1916a0u: goto label_1916a0;
        case 0x1916a4u: goto label_1916a4;
        case 0x1916a8u: goto label_1916a8;
        case 0x1916acu: goto label_1916ac;
        default: break;
    }

    ctx->pc = 0x190d90u;

label_190d90:
    // 0x190d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x190d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_190d94:
    // 0x190d94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x190d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_190d98:
    // 0x190d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x190d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_190d9c:
    // 0x190d9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x190d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_190da0:
    // 0x190da0: 0x90a20004  lbu         $v0, 0x4($a1)
    ctx->pc = 0x190da0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
label_190da4:
    // 0x190da4: 0x10400116  beqz        $v0, . + 4 + (0x116 << 2)
label_190da8:
    if (ctx->pc == 0x190DA8u) {
        ctx->pc = 0x190DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DA4u;
        // 0x190da8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190DACu;
        goto label_190dac;
    }
    ctx->pc = 0x190DA4u;
    {
        const bool branch_taken_0x190da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DA4u;
        // 0x190da8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190da4) {
            ctx->pc = 0x191200u;
            goto label_191200;
        }
    }
    ctx->pc = 0x190DACu;
label_190dac:
    // 0x190dac: 0xc064918  jal         func_192460
label_190db0:
    if (ctx->pc == 0x190DB0u) {
        ctx->pc = 0x190DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DACu;
        // 0x190db0: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190DB4u;
        goto label_190db4;
    }
    ctx->pc = 0x190DACu;
    SET_GPR_U32(ctx, 31, 0x190DB4u);
    ctx->pc = 0x190DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190DACu;
    // 0x190db0: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x190DACu, 0x190DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190DB4u;
label_190db4:
    // 0x190db4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x190db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190db8:
    // 0x190db8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x190db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_190dbc:
    // 0x190dbc: 0x20420005  addi        $v0, $v0, 0x5
    ctx->pc = 0x190dbcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)5, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_190dc0:
    // 0x190dc0: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x190dc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_190dc4:
    // 0x190dc4: 0x10200234  beqz        $at, . + 4 + (0x234 << 2)
label_190dc8:
    if (ctx->pc == 0x190DC8u) {
        ctx->pc = 0x190DCCu;
        goto label_190dcc;
    }
    ctx->pc = 0x190DC4u;
    {
        const bool branch_taken_0x190dc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x190dc4) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x190DCCu;
label_190dcc:
    // 0x190dcc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x190dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_190dd0:
    // 0x190dd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x190dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_190dd4:
    // 0x190dd4: 0x2463fe50  addiu       $v1, $v1, -0x1B0
    ctx->pc = 0x190dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966864));
label_190dd8:
    // 0x190dd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x190dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_190ddc:
    // 0x190ddc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x190ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_190de0:
    // 0x190de0: 0x400008  jr          $v0
label_190de4:
    if (ctx->pc == 0x190DE4u) {
        ctx->pc = 0x190DE8u;
        goto label_190de8;
    }
    ctx->pc = 0x190DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190DE8u: goto label_190de8;
            case 0x190E10u: goto label_190e10;
            case 0x190E6Cu: goto label_190e6c;
            case 0x190EC8u: goto label_190ec8;
            case 0x190EF0u: goto label_190ef0;
            case 0x190F18u: goto label_190f18;
            case 0x190F60u: goto label_190f60;
            case 0x190FA0u: goto label_190fa0;
            case 0x190FC8u: goto label_190fc8;
            case 0x190FF0u: goto label_190ff0;
            case 0x1910F4u: goto label_1910f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190DE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x190DE8u;
label_190de8:
    // 0x190de8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_190dec:
    if (ctx->pc == 0x190DECu) {
        ctx->pc = 0x190DF0u;
        goto label_190df0;
    }
    ctx->pc = 0x190DE8u;
    {
        const bool branch_taken_0x190de8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x190de8) {
            ctx->pc = 0x190DF8u;
            goto label_190df8;
        }
    }
    ctx->pc = 0x190DF0u;
label_190df0:
    // 0x190df0: 0x1000022a  b           . + 4 + (0x22A << 2)
label_190df4:
    if (ctx->pc == 0x190DF4u) {
        ctx->pc = 0x190DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DF0u;
        // 0x190df4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190DF8u;
        goto label_190df8;
    }
    ctx->pc = 0x190DF0u;
    {
        const bool branch_taken_0x190df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DF0u;
        // 0x190df4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190df0) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x190DF8u;
label_190df8:
    // 0x190df8: 0x8e030320  lw          $v1, 0x320($s0)
    ctx->pc = 0x190df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
label_190dfc:
    // 0x190dfc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x190dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_190e00:
    // 0x190e00: 0x10620226  beq         $v1, $v0, . + 4 + (0x226 << 2)
label_190e04:
    if (ctx->pc == 0x190E04u) {
        ctx->pc = 0x190E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E00u;
        // 0x190e04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E08u;
        goto label_190e08;
    }
    ctx->pc = 0x190E00u;
    {
        const bool branch_taken_0x190e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x190E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E00u;
        // 0x190e04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e00) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x190E08u;
label_190e08:
    // 0x190e08: 0x10000224  b           . + 4 + (0x224 << 2)
label_190e0c:
    if (ctx->pc == 0x190E0Cu) {
        ctx->pc = 0x190E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E08u;
        // 0x190e0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E10u;
        goto label_190e10;
    }
    ctx->pc = 0x190E08u;
    {
        const bool branch_taken_0x190e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E08u;
        // 0x190e0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e08) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x190E10u;
label_190e10:
    // 0x190e10: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_190e14:
    if (ctx->pc == 0x190E14u) {
        ctx->pc = 0x190E18u;
        goto label_190e18;
    }
    ctx->pc = 0x190E10u;
    {
        const bool branch_taken_0x190e10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x190e10) {
            ctx->pc = 0x190E20u;
            goto label_190e20;
        }
    }
    ctx->pc = 0x190E18u;
label_190e18:
    // 0x190e18: 0x10000220  b           . + 4 + (0x220 << 2)
label_190e1c:
    if (ctx->pc == 0x190E1Cu) {
        ctx->pc = 0x190E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E18u;
        // 0x190e1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E20u;
        goto label_190e20;
    }
    ctx->pc = 0x190E18u;
    {
        const bool branch_taken_0x190e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E18u;
        // 0x190e1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e18) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x190E20u;
label_190e20:
    // 0x190e20: 0xc067f08  jal         func_19FC20
label_190e24:
    if (ctx->pc == 0x190E24u) {
        ctx->pc = 0x190E28u;
        goto label_190e28;
    }
    ctx->pc = 0x190E20u;
    SET_GPR_U32(ctx, 31, 0x190E28u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x190E20u, 0x190E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E28u;
label_190e28:
    // 0x190e28: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
label_190e2c:
    if (ctx->pc == 0x190E2Cu) {
        ctx->pc = 0x190E30u;
        goto label_190e30;
    }
    ctx->pc = 0x190E28u;
    {
        const bool branch_taken_0x190e28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x190e28) {
            ctx->pc = 0x190E54u;
            goto label_190e54;
        }
    }
    ctx->pc = 0x190E30u;
label_190e30:
    // 0x190e30: 0xc067f08  jal         func_19FC20
label_190e34:
    if (ctx->pc == 0x190E34u) {
        ctx->pc = 0x190E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E30u;
        // 0x190e34: 0x8e300028  lw          $s0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E38u;
        goto label_190e38;
    }
    ctx->pc = 0x190E30u;
    SET_GPR_U32(ctx, 31, 0x190E38u);
    ctx->pc = 0x190E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E30u;
    // 0x190e34: 0x8e300028  lw          $s0, 0x28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x190E30u, 0x190E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E38u;
label_190e38:
    // 0x190e38: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x190e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_190e3c:
    // 0x190e3c: 0xc067f0c  jal         func_19FC30
label_190e40:
    if (ctx->pc == 0x190E40u) {
        ctx->pc = 0x190E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E3Cu;
        // 0x190e40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E44u;
        goto label_190e44;
    }
    ctx->pc = 0x190E3Cu;
    SET_GPR_U32(ctx, 31, 0x190E44u);
    ctx->pc = 0x190E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E3Cu;
    // 0x190e40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC30u, 0x190E3Cu, 0x190E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E44u;
label_190e44:
    // 0x190e44: 0x16020214  bne         $s0, $v0, . + 4 + (0x214 << 2)
label_190e48:
    if (ctx->pc == 0x190E48u) {
        ctx->pc = 0x190E4Cu;
        goto label_190e4c;
    }
    ctx->pc = 0x190E44u;
    {
        const bool branch_taken_0x190e44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x190e44) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x190E4Cu;
label_190e4c:
    // 0x190e4c: 0x10000213  b           . + 4 + (0x213 << 2)
label_190e50:
    if (ctx->pc == 0x190E50u) {
        ctx->pc = 0x190E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E4Cu;
        // 0x190e50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E54u;
        goto label_190e54;
    }
    ctx->pc = 0x190E4Cu;
    {
        const bool branch_taken_0x190e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E4Cu;
        // 0x190e50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e4c) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x190E54u;
label_190e54:
    // 0x190e54: 0x8e030320  lw          $v1, 0x320($s0)
    ctx->pc = 0x190e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
label_190e58:
    // 0x190e58: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x190e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_190e5c:
    // 0x190e5c: 0x1462020e  bne         $v1, $v0, . + 4 + (0x20E << 2)
label_190e60:
    if (ctx->pc == 0x190E60u) {
        ctx->pc = 0x190E64u;
        goto label_190e64;
    }
    ctx->pc = 0x190E5Cu;
    {
        const bool branch_taken_0x190e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x190e5c) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x190E64u;
label_190e64:
    // 0x190e64: 0x1000020d  b           . + 4 + (0x20D << 2)
label_190e68:
    if (ctx->pc == 0x190E68u) {
        ctx->pc = 0x190E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E64u;
        // 0x190e68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E6Cu;
        goto label_190e6c;
    }
    ctx->pc = 0x190E64u;
    {
        const bool branch_taken_0x190e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E64u;
        // 0x190e68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e64) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x190E6Cu;
label_190e6c:
    // 0x190e6c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_190e70:
    if (ctx->pc == 0x190E70u) {
        ctx->pc = 0x190E74u;
        goto label_190e74;
    }
    ctx->pc = 0x190E6Cu;
    {
        const bool branch_taken_0x190e6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x190e6c) {
            ctx->pc = 0x190E7Cu;
            goto label_190e7c;
        }
    }
    ctx->pc = 0x190E74u;
label_190e74:
    // 0x190e74: 0x10000209  b           . + 4 + (0x209 << 2)
label_190e78:
    if (ctx->pc == 0x190E78u) {
        ctx->pc = 0x190E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E74u;
        // 0x190e78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E7Cu;
        goto label_190e7c;
    }
    ctx->pc = 0x190E74u;
    {
        const bool branch_taken_0x190e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E74u;
        // 0x190e78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e74) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x190E7Cu;
label_190e7c:
    // 0x190e7c: 0xc067f08  jal         func_19FC20
label_190e80:
    if (ctx->pc == 0x190E80u) {
        ctx->pc = 0x190E84u;
        goto label_190e84;
    }
    ctx->pc = 0x190E7Cu;
    SET_GPR_U32(ctx, 31, 0x190E84u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x190E7Cu, 0x190E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E84u;
label_190e84:
    // 0x190e84: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
label_190e88:
    if (ctx->pc == 0x190E88u) {
        ctx->pc = 0x190E8Cu;
        goto label_190e8c;
    }
    ctx->pc = 0x190E84u;
    {
        const bool branch_taken_0x190e84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x190e84) {
            ctx->pc = 0x190EB0u;
            goto label_190eb0;
        }
    }
    ctx->pc = 0x190E8Cu;
label_190e8c:
    // 0x190e8c: 0xc067f08  jal         func_19FC20
label_190e90:
    if (ctx->pc == 0x190E90u) {
        ctx->pc = 0x190E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E8Cu;
        // 0x190e90: 0x8e300028  lw          $s0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E94u;
        goto label_190e94;
    }
    ctx->pc = 0x190E8Cu;
    SET_GPR_U32(ctx, 31, 0x190E94u);
    ctx->pc = 0x190E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E8Cu;
    // 0x190e90: 0x8e300028  lw          $s0, 0x28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x190E8Cu, 0x190E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E94u;
label_190e94:
    // 0x190e94: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x190e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_190e98:
    // 0x190e98: 0xc067f0c  jal         func_19FC30
label_190e9c:
    if (ctx->pc == 0x190E9Cu) {
        ctx->pc = 0x190E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E98u;
        // 0x190e9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190EA0u;
        goto label_190ea0;
    }
    ctx->pc = 0x190E98u;
    SET_GPR_U32(ctx, 31, 0x190EA0u);
    ctx->pc = 0x190E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E98u;
    // 0x190e9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC30u, 0x190E98u, 0x190EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190EA0u;
label_190ea0:
    // 0x190ea0: 0x120201fd  beq         $s0, $v0, . + 4 + (0x1FD << 2)
label_190ea4:
    if (ctx->pc == 0x190EA4u) {
        ctx->pc = 0x190EA8u;
        goto label_190ea8;
    }
    ctx->pc = 0x190EA0u;
    {
        const bool branch_taken_0x190ea0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x190ea0) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x190EA8u;
label_190ea8:
    // 0x190ea8: 0x100001fc  b           . + 4 + (0x1FC << 2)
label_190eac:
    if (ctx->pc == 0x190EACu) {
        ctx->pc = 0x190EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EA8u;
        // 0x190eac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190EB0u;
        goto label_190eb0;
    }
    ctx->pc = 0x190EA8u;
    {
        const bool branch_taken_0x190ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EA8u;
        // 0x190eac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ea8) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x190EB0u;
label_190eb0:
    // 0x190eb0: 0x8e030320  lw          $v1, 0x320($s0)
    ctx->pc = 0x190eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
label_190eb4:
    // 0x190eb4: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x190eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_190eb8:
    // 0x190eb8: 0x106201f7  beq         $v1, $v0, . + 4 + (0x1F7 << 2)
label_190ebc:
    if (ctx->pc == 0x190EBCu) {
        ctx->pc = 0x190EC0u;
        goto label_190ec0;
    }
    ctx->pc = 0x190EB8u;
    {
        const bool branch_taken_0x190eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x190eb8) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x190EC0u;
label_190ec0:
    // 0x190ec0: 0x100001f6  b           . + 4 + (0x1F6 << 2)
label_190ec4:
    if (ctx->pc == 0x190EC4u) {
        ctx->pc = 0x190EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EC0u;
        // 0x190ec4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190EC8u;
        goto label_190ec8;
    }
    ctx->pc = 0x190EC0u;
    {
        const bool branch_taken_0x190ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EC0u;
        // 0x190ec4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ec0) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x190EC8u;
label_190ec8:
    // 0x190ec8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_190ecc:
    if (ctx->pc == 0x190ECCu) {
        ctx->pc = 0x190ED0u;
        goto label_190ed0;
    }
    ctx->pc = 0x190EC8u;
    {
        const bool branch_taken_0x190ec8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x190ec8) {
            ctx->pc = 0x190ED8u;
            goto label_190ed8;
        }
    }
    ctx->pc = 0x190ED0u;
label_190ed0:
    // 0x190ed0: 0x100001f2  b           . + 4 + (0x1F2 << 2)
label_190ed4:
    if (ctx->pc == 0x190ED4u) {
        ctx->pc = 0x190ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190ED0u;
        // 0x190ed4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190ED8u;
        goto label_190ed8;
    }
    ctx->pc = 0x190ED0u;
    {
        const bool branch_taken_0x190ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190ED0u;
        // 0x190ed4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ed0) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x190ED8u;
label_190ed8:
    // 0x190ed8: 0x8e030328  lw          $v1, 0x328($s0)
    ctx->pc = 0x190ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
label_190edc:
    // 0x190edc: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x190edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_190ee0:
    // 0x190ee0: 0x146201ed  bne         $v1, $v0, . + 4 + (0x1ED << 2)
label_190ee4:
    if (ctx->pc == 0x190EE4u) {
        ctx->pc = 0x190EE8u;
        goto label_190ee8;
    }
    ctx->pc = 0x190EE0u;
    {
        const bool branch_taken_0x190ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x190ee0) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x190EE8u;
label_190ee8:
    // 0x190ee8: 0x100001ec  b           . + 4 + (0x1EC << 2)
label_190eec:
    if (ctx->pc == 0x190EECu) {
        ctx->pc = 0x190EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EE8u;
        // 0x190eec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190EF0u;
        goto label_190ef0;
    }
    ctx->pc = 0x190EE8u;
    {
        const bool branch_taken_0x190ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EE8u;
        // 0x190eec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ee8) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x190EF0u;
label_190ef0:
    // 0x190ef0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_190ef4:
    if (ctx->pc == 0x190EF4u) {
        ctx->pc = 0x190EF8u;
        goto label_190ef8;
    }
    ctx->pc = 0x190EF0u;
    {
        const bool branch_taken_0x190ef0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x190ef0) {
            ctx->pc = 0x190F00u;
            goto label_190f00;
        }
    }
    ctx->pc = 0x190EF8u;
label_190ef8:
    // 0x190ef8: 0x100001e8  b           . + 4 + (0x1E8 << 2)
label_190efc:
    if (ctx->pc == 0x190EFCu) {
        ctx->pc = 0x190EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EF8u;
        // 0x190efc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F00u;
        goto label_190f00;
    }
    ctx->pc = 0x190EF8u;
    {
        const bool branch_taken_0x190ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EF8u;
        // 0x190efc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ef8) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x190F00u;
label_190f00:
    // 0x190f00: 0x8e030328  lw          $v1, 0x328($s0)
    ctx->pc = 0x190f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
label_190f04:
    // 0x190f04: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x190f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_190f08:
    // 0x190f08: 0x106201e3  beq         $v1, $v0, . + 4 + (0x1E3 << 2)
label_190f0c:
    if (ctx->pc == 0x190F0Cu) {
        ctx->pc = 0x190F10u;
        goto label_190f10;
    }
    ctx->pc = 0x190F08u;
    {
        const bool branch_taken_0x190f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x190f08) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x190F10u;
label_190f10:
    // 0x190f10: 0x100001e2  b           . + 4 + (0x1E2 << 2)
label_190f14:
    if (ctx->pc == 0x190F14u) {
        ctx->pc = 0x190F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F10u;
        // 0x190f14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F18u;
        goto label_190f18;
    }
    ctx->pc = 0x190F10u;
    {
        const bool branch_taken_0x190f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F10u;
        // 0x190f14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f10) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x190F18u;
label_190f18:
    // 0x190f18: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_190f1c:
    if (ctx->pc == 0x190F1Cu) {
        ctx->pc = 0x190F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F18u;
        // 0x190f1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F20u;
        goto label_190f20;
    }
    ctx->pc = 0x190F18u;
    {
        const bool branch_taken_0x190f18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x190F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F18u;
        // 0x190f1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f18) {
            ctx->pc = 0x190F58u;
            goto label_190f58;
        }
    }
    ctx->pc = 0x190F20u;
label_190f20:
    // 0x190f20: 0x8e030660  lw          $v1, 0x660($s0)
    ctx->pc = 0x190f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
label_190f24:
    // 0x190f24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_190f28:
    // 0x190f28: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_190f2c:
    if (ctx->pc == 0x190F2Cu) {
        ctx->pc = 0x190F30u;
        goto label_190f30;
    }
    ctx->pc = 0x190F28u;
    {
        const bool branch_taken_0x190f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x190f28) {
            ctx->pc = 0x190F4Cu;
            goto label_190f4c;
        }
    }
    ctx->pc = 0x190F30u;
label_190f30:
    // 0x190f30: 0x8e040664  lw          $a0, 0x664($s0)
    ctx->pc = 0x190f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
label_190f34:
    // 0x190f34: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x190f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_190f38:
    // 0x190f38: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x190f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_190f3c:
    // 0x190f3c: 0x148301d6  bne         $a0, $v1, . + 4 + (0x1D6 << 2)
label_190f40:
    if (ctx->pc == 0x190F40u) {
        ctx->pc = 0x190F44u;
        goto label_190f44;
    }
    ctx->pc = 0x190F3Cu;
    {
        const bool branch_taken_0x190f3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x190f3c) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x190F44u;
label_190f44:
    // 0x190f44: 0x100001d6  b           . + 4 + (0x1D6 << 2)
label_190f48:
    if (ctx->pc == 0x190F48u) {
        ctx->pc = 0x190F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F44u;
        // 0x190f48: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F4Cu;
        goto label_190f4c;
    }
    ctx->pc = 0x190F44u;
    {
        const bool branch_taken_0x190f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F44u;
        // 0x190f48: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f44) {
            ctx->pc = 0x1916A0u;
            goto label_1916a0;
        }
    }
    ctx->pc = 0x190F4Cu;
label_190f4c:
    // 0x190f4c: 0x100001d3  b           . + 4 + (0x1D3 << 2)
label_190f50:
    if (ctx->pc == 0x190F50u) {
        ctx->pc = 0x190F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F4Cu;
        // 0x190f50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F54u;
        goto label_190f54;
    }
    ctx->pc = 0x190F4Cu;
    {
        const bool branch_taken_0x190f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F4Cu;
        // 0x190f50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f4c) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x190F54u;
label_190f54:
    // 0x190f54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_190f58:
    // 0x190f58: 0x100001d0  b           . + 4 + (0x1D0 << 2)
label_190f5c:
    if (ctx->pc == 0x190F5Cu) {
        ctx->pc = 0x190F60u;
        goto label_190f60;
    }
    ctx->pc = 0x190F58u;
    {
        const bool branch_taken_0x190f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190f58) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x190F60u;
label_190f60:
    // 0x190f60: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_190f64:
    if (ctx->pc == 0x190F64u) {
        ctx->pc = 0x190F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F60u;
        // 0x190f64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F68u;
        goto label_190f68;
    }
    ctx->pc = 0x190F60u;
    {
        const bool branch_taken_0x190f60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x190F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F60u;
        // 0x190f64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f60) {
            ctx->pc = 0x190F98u;
            goto label_190f98;
        }
    }
    ctx->pc = 0x190F68u;
label_190f68:
    // 0x190f68: 0x8e030660  lw          $v1, 0x660($s0)
    ctx->pc = 0x190f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
label_190f6c:
    // 0x190f6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_190f70:
    // 0x190f70: 0x146201ca  bne         $v1, $v0, . + 4 + (0x1CA << 2)
label_190f74:
    if (ctx->pc == 0x190F74u) {
        ctx->pc = 0x190F78u;
        goto label_190f78;
    }
    ctx->pc = 0x190F70u;
    {
        const bool branch_taken_0x190f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x190f70) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x190F78u;
label_190f78:
    // 0x190f78: 0x8e040664  lw          $a0, 0x664($s0)
    ctx->pc = 0x190f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
label_190f7c:
    // 0x190f7c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x190f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_190f80:
    // 0x190f80: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x190f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_190f84:
    // 0x190f84: 0x108301c4  beq         $a0, $v1, . + 4 + (0x1C4 << 2)
label_190f88:
    if (ctx->pc == 0x190F88u) {
        ctx->pc = 0x190F8Cu;
        goto label_190f8c;
    }
    ctx->pc = 0x190F84u;
    {
        const bool branch_taken_0x190f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x190f84) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x190F8Cu;
label_190f8c:
    // 0x190f8c: 0x100001c3  b           . + 4 + (0x1C3 << 2)
label_190f90:
    if (ctx->pc == 0x190F90u) {
        ctx->pc = 0x190F94u;
        goto label_190f94;
    }
    ctx->pc = 0x190F8Cu;
    {
        const bool branch_taken_0x190f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190f8c) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x190F94u;
label_190f94:
    // 0x190f94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x190f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190f98:
    // 0x190f98: 0x100001c0  b           . + 4 + (0x1C0 << 2)
label_190f9c:
    if (ctx->pc == 0x190F9Cu) {
        ctx->pc = 0x190FA0u;
        goto label_190fa0;
    }
    ctx->pc = 0x190F98u;
    {
        const bool branch_taken_0x190f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190f98) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x190FA0u;
label_190fa0:
    // 0x190fa0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_190fa4:
    if (ctx->pc == 0x190FA4u) {
        ctx->pc = 0x190FA8u;
        goto label_190fa8;
    }
    ctx->pc = 0x190FA0u;
    {
        const bool branch_taken_0x190fa0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x190fa0) {
            ctx->pc = 0x190FB0u;
            goto label_190fb0;
        }
    }
    ctx->pc = 0x190FA8u;
label_190fa8:
    // 0x190fa8: 0x100001bc  b           . + 4 + (0x1BC << 2)
label_190fac:
    if (ctx->pc == 0x190FACu) {
        ctx->pc = 0x190FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FA8u;
        // 0x190fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190FB0u;
        goto label_190fb0;
    }
    ctx->pc = 0x190FA8u;
    {
        const bool branch_taken_0x190fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FA8u;
        // 0x190fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190fa8) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x190FB0u;
label_190fb0:
    // 0x190fb0: 0x8e03032c  lw          $v1, 0x32C($s0)
    ctx->pc = 0x190fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
label_190fb4:
    // 0x190fb4: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x190fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_190fb8:
    // 0x190fb8: 0x146201b7  bne         $v1, $v0, . + 4 + (0x1B7 << 2)
label_190fbc:
    if (ctx->pc == 0x190FBCu) {
        ctx->pc = 0x190FC0u;
        goto label_190fc0;
    }
    ctx->pc = 0x190FB8u;
    {
        const bool branch_taken_0x190fb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x190fb8) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x190FC0u;
label_190fc0:
    // 0x190fc0: 0x100001b6  b           . + 4 + (0x1B6 << 2)
label_190fc4:
    if (ctx->pc == 0x190FC4u) {
        ctx->pc = 0x190FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FC0u;
        // 0x190fc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190FC8u;
        goto label_190fc8;
    }
    ctx->pc = 0x190FC0u;
    {
        const bool branch_taken_0x190fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FC0u;
        // 0x190fc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190fc0) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x190FC8u;
label_190fc8:
    // 0x190fc8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_190fcc:
    if (ctx->pc == 0x190FCCu) {
        ctx->pc = 0x190FD0u;
        goto label_190fd0;
    }
    ctx->pc = 0x190FC8u;
    {
        const bool branch_taken_0x190fc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x190fc8) {
            ctx->pc = 0x190FD8u;
            goto label_190fd8;
        }
    }
    ctx->pc = 0x190FD0u;
label_190fd0:
    // 0x190fd0: 0x100001b2  b           . + 4 + (0x1B2 << 2)
label_190fd4:
    if (ctx->pc == 0x190FD4u) {
        ctx->pc = 0x190FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FD0u;
        // 0x190fd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190FD8u;
        goto label_190fd8;
    }
    ctx->pc = 0x190FD0u;
    {
        const bool branch_taken_0x190fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FD0u;
        // 0x190fd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190fd0) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x190FD8u;
label_190fd8:
    // 0x190fd8: 0x8e03032c  lw          $v1, 0x32C($s0)
    ctx->pc = 0x190fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
label_190fdc:
    // 0x190fdc: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x190fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_190fe0:
    // 0x190fe0: 0x106201ad  beq         $v1, $v0, . + 4 + (0x1AD << 2)
label_190fe4:
    if (ctx->pc == 0x190FE4u) {
        ctx->pc = 0x190FE8u;
        goto label_190fe8;
    }
    ctx->pc = 0x190FE0u;
    {
        const bool branch_taken_0x190fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x190fe0) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x190FE8u;
label_190fe8:
    // 0x190fe8: 0x100001ac  b           . + 4 + (0x1AC << 2)
label_190fec:
    if (ctx->pc == 0x190FECu) {
        ctx->pc = 0x190FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FE8u;
        // 0x190fec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190FF0u;
        goto label_190ff0;
    }
    ctx->pc = 0x190FE8u;
    {
        const bool branch_taken_0x190fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FE8u;
        // 0x190fec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190fe8) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x190FF0u;
label_190ff0:
    // 0x190ff0: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x190ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_190ff4:
    // 0x190ff4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x190ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_190ff8:
    // 0x190ff8: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_190ffc:
    if (ctx->pc == 0x190FFCu) {
        ctx->pc = 0x190FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FF8u;
        // 0x190ffc: 0x2629002c  addiu       $t1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191000u;
        goto label_191000;
    }
    ctx->pc = 0x190FF8u;
    {
        const bool branch_taken_0x190ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x190FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FF8u;
        // 0x190ffc: 0x2629002c  addiu       $t1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ff8) {
            ctx->pc = 0x19107Cu;
            goto label_19107c;
        }
    }
    ctx->pc = 0x191000u;
label_191000:
    // 0x191000: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x191000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_191004:
    // 0x191004: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_191008:
    if (ctx->pc == 0x191008u) {
        ctx->pc = 0x191008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191004u;
        // 0x191008: 0x2626002c  addiu       $a2, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19100Cu;
        goto label_19100c;
    }
    ctx->pc = 0x191004u;
    {
        const bool branch_taken_0x191004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x191008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191004u;
        // 0x191008: 0x2626002c  addiu       $a2, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191004) {
            ctx->pc = 0x19102Cu;
            goto label_19102c;
        }
    }
    ctx->pc = 0x19100Cu;
label_19100c:
    // 0x19100c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19100cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191010:
    // 0x191010: 0x106201a1  beq         $v1, $v0, . + 4 + (0x1A1 << 2)
label_191014:
    if (ctx->pc == 0x191014u) {
        ctx->pc = 0x191018u;
        goto label_191018;
    }
    ctx->pc = 0x191010u;
    {
        const bool branch_taken_0x191010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x191010) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x191018u;
label_191018:
    // 0x191018: 0x1060019f  beqz        $v1, . + 4 + (0x19F << 2)
label_19101c:
    if (ctx->pc == 0x19101Cu) {
        ctx->pc = 0x191020u;
        goto label_191020;
    }
    ctx->pc = 0x191018u;
    {
        const bool branch_taken_0x191018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191018) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x191020u;
label_191020:
    // 0x191020: 0x1000019d  b           . + 4 + (0x19D << 2)
label_191024:
    if (ctx->pc == 0x191024u) {
        ctx->pc = 0x191028u;
        goto label_191028;
    }
    ctx->pc = 0x191020u;
    {
        const bool branch_taken_0x191020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191020) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x191028u;
label_191028:
    // 0x191028: 0x2626002c  addiu       $a2, $s1, 0x2C
    ctx->pc = 0x191028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_19102c:
    // 0x19102c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19102cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191030:
    // 0x191030: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x191030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191034:
    // 0x191034: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x191034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191038:
    // 0x191038: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x191038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19103c:
    // 0x19103c: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x19103cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_191040:
    // 0x191040: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x191040u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_191044:
    // 0x191044: 0x11040194  beq         $t0, $a0, . + 4 + (0x194 << 2)
label_191048:
    if (ctx->pc == 0x191048u) {
        ctx->pc = 0x19104Cu;
        goto label_19104c;
    }
    ctx->pc = 0x191044u;
    {
        const bool branch_taken_0x191044 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        if (branch_taken_0x191044) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x19104Cu;
label_19104c:
    // 0x19104c: 0x8c622c10  lw          $v0, 0x2C10($v1)
    ctx->pc = 0x19104cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11280)));
label_191050:
    // 0x191050: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
label_191054:
    if (ctx->pc == 0x191054u) {
        ctx->pc = 0x191058u;
        goto label_191058;
    }
    ctx->pc = 0x191050u;
    {
        const bool branch_taken_0x191050 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x191050) {
            ctx->pc = 0x191060u;
            goto label_191060;
        }
    }
    ctx->pc = 0x191058u;
label_191058:
    // 0x191058: 0x10000190  b           . + 4 + (0x190 << 2)
label_19105c:
    if (ctx->pc == 0x19105Cu) {
        ctx->pc = 0x19105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191058u;
        // 0x19105c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191060u;
        goto label_191060;
    }
    ctx->pc = 0x191058u;
    {
        const bool branch_taken_0x191058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191058u;
        // 0x19105c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191058) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x191060u;
label_191060:
    // 0x191060: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x191060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_191064:
    // 0x191064: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x191064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
label_191068:
    // 0x191068: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_19106c:
    if (ctx->pc == 0x19106Cu) {
        ctx->pc = 0x19106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191068u;
        // 0x19106c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191070u;
        goto label_191070;
    }
    ctx->pc = 0x191068u;
    {
        const bool branch_taken_0x191068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191068u;
        // 0x19106c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191068) {
            ctx->pc = 0x19103Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19103c;
        }
    }
    ctx->pc = 0x191070u;
label_191070:
    // 0x191070: 0x10000189  b           . + 4 + (0x189 << 2)
label_191074:
    if (ctx->pc == 0x191074u) {
        ctx->pc = 0x191078u;
        goto label_191078;
    }
    ctx->pc = 0x191070u;
    {
        const bool branch_taken_0x191070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191070) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x191078u;
label_191078:
    // 0x191078: 0x2629002c  addiu       $t1, $s1, 0x2C
    ctx->pc = 0x191078u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_19107c:
    // 0x19107c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19107cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191080:
    // 0x191080: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x191080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191084:
    // 0x191084: 0x8f8885f4  lw          $t0, -0x7A0C($gp)
    ctx->pc = 0x191084u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191088:
    // 0x191088: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x191088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19108c:
    // 0x19108c: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x19108cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_191090:
    // 0x191090: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x191090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_191094:
    // 0x191094: 0x10650180  beq         $v1, $a1, . + 4 + (0x180 << 2)
label_191098:
    if (ctx->pc == 0x191098u) {
        ctx->pc = 0x19109Cu;
        goto label_19109c;
    }
    ctx->pc = 0x191094u;
    {
        const bool branch_taken_0x191094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x191094) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x19109Cu;
label_19109c:
    // 0x19109c: 0x8d062c10  lw          $a2, 0x2C10($t0)
    ctx->pc = 0x19109cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11280)));
label_1910a0:
    // 0x1910a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1910a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1910a4:
    // 0x1910a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1910a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1910a8:
    // 0x1910a8: 0x8d032c1c  lw          $v1, 0x2C1C($t0)
    ctx->pc = 0x1910a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11292)));
label_1910ac:
    // 0x1910ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1910acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1910b0:
    // 0x1910b0: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1910b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1910b4:
    // 0x1910b4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1910b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1910b8:
    // 0x1910b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1910b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1910bc:
    // 0x1910bc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1910bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1910c0:
    // 0x1910c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1910c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1910c4:
    // 0x1910c4: 0x9042003f  lbu         $v0, 0x3F($v0)
    ctx->pc = 0x1910c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
label_1910c8:
    // 0x1910c8: 0x9063003f  lbu         $v1, 0x3F($v1)
    ctx->pc = 0x1910c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 63)));
label_1910cc:
    // 0x1910cc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1910d0:
    if (ctx->pc == 0x1910D0u) {
        ctx->pc = 0x1910D4u;
        goto label_1910d4;
    }
    ctx->pc = 0x1910CCu;
    {
        const bool branch_taken_0x1910cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1910cc) {
            ctx->pc = 0x1910DCu;
            goto label_1910dc;
        }
    }
    ctx->pc = 0x1910D4u;
label_1910d4:
    // 0x1910d4: 0x10000171  b           . + 4 + (0x171 << 2)
label_1910d8:
    if (ctx->pc == 0x1910D8u) {
        ctx->pc = 0x1910D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910D4u;
        // 0x1910d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1910DCu;
        goto label_1910dc;
    }
    ctx->pc = 0x1910D4u;
    {
        const bool branch_taken_0x1910d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1910D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910D4u;
        // 0x1910d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1910d4) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x1910DCu;
label_1910dc:
    // 0x1910dc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1910dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1910e0:
    // 0x1910e0: 0x29420005  slti        $v0, $t2, 0x5
    ctx->pc = 0x1910e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)5) ? 1 : 0);
label_1910e4:
    // 0x1910e4: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_1910e8:
    if (ctx->pc == 0x1910E8u) {
        ctx->pc = 0x1910E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910E4u;
        // 0x1910e8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1910ECu;
        goto label_1910ec;
    }
    ctx->pc = 0x1910E4u;
    {
        const bool branch_taken_0x1910e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1910E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910E4u;
        // 0x1910e8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1910e4) {
            ctx->pc = 0x19108Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19108c;
        }
    }
    ctx->pc = 0x1910ECu;
label_1910ec:
    // 0x1910ec: 0x1000016a  b           . + 4 + (0x16A << 2)
label_1910f0:
    if (ctx->pc == 0x1910F0u) {
        ctx->pc = 0x1910F4u;
        goto label_1910f4;
    }
    ctx->pc = 0x1910ECu;
    {
        const bool branch_taken_0x1910ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1910ec) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x1910F4u;
label_1910f4:
    // 0x1910f4: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x1910f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1910f8:
    // 0x1910f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1910f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1910fc:
    // 0x1910fc: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_191100:
    if (ctx->pc == 0x191100u) {
        ctx->pc = 0x191100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910FCu;
        // 0x191100: 0x2628002c  addiu       $t0, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191104u;
        goto label_191104;
    }
    ctx->pc = 0x1910FCu;
    {
        const bool branch_taken_0x1910fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x191100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910FCu;
        // 0x191100: 0x2628002c  addiu       $t0, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1910fc) {
            ctx->pc = 0x191184u;
            goto label_191184;
        }
    }
    ctx->pc = 0x191104u;
label_191104:
    // 0x191104: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x191104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_191108:
    // 0x191108: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_19110c:
    if (ctx->pc == 0x19110Cu) {
        ctx->pc = 0x19110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191108u;
        // 0x19110c: 0x2626002c  addiu       $a2, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191110u;
        goto label_191110;
    }
    ctx->pc = 0x191108u;
    {
        const bool branch_taken_0x191108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191108u;
        // 0x19110c: 0x2626002c  addiu       $a2, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191108) {
            ctx->pc = 0x191130u;
            goto label_191130;
        }
    }
    ctx->pc = 0x191110u;
label_191110:
    // 0x191110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191114:
    // 0x191114: 0x10620160  beq         $v1, $v0, . + 4 + (0x160 << 2)
label_191118:
    if (ctx->pc == 0x191118u) {
        ctx->pc = 0x19111Cu;
        goto label_19111c;
    }
    ctx->pc = 0x191114u;
    {
        const bool branch_taken_0x191114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x191114) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x19111Cu;
label_19111c:
    // 0x19111c: 0x1060015e  beqz        $v1, . + 4 + (0x15E << 2)
label_191120:
    if (ctx->pc == 0x191120u) {
        ctx->pc = 0x191124u;
        goto label_191124;
    }
    ctx->pc = 0x19111Cu;
    {
        const bool branch_taken_0x19111c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19111c) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x191124u;
label_191124:
    // 0x191124: 0x1000015c  b           . + 4 + (0x15C << 2)
label_191128:
    if (ctx->pc == 0x191128u) {
        ctx->pc = 0x19112Cu;
        goto label_19112c;
    }
    ctx->pc = 0x191124u;
    {
        const bool branch_taken_0x191124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191124) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x19112Cu;
label_19112c:
    // 0x19112c: 0x2626002c  addiu       $a2, $s1, 0x2C
    ctx->pc = 0x19112cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_191130:
    // 0x191130: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x191130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191134:
    // 0x191134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x191134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191138:
    // 0x191138: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x191138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19113c:
    // 0x19113c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19113cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_191140:
    // 0x191140: 0x8c442c10  lw          $a0, 0x2C10($v0)
    ctx->pc = 0x191140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11280)));
label_191144:
    // 0x191144: 0x0  nop
    ctx->pc = 0x191144u;
    // NOP
label_191148:
    // 0x191148: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x191148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_19114c:
    // 0x19114c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_191150:
    // 0x191150: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
label_191154:
    if (ctx->pc == 0x191154u) {
        ctx->pc = 0x191158u;
        goto label_191158;
    }
    ctx->pc = 0x191150u;
    {
        const bool branch_taken_0x191150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x191150) {
            ctx->pc = 0x191160u;
            goto label_191160;
        }
    }
    ctx->pc = 0x191158u;
label_191158:
    // 0x191158: 0x10000150  b           . + 4 + (0x150 << 2)
label_19115c:
    if (ctx->pc == 0x19115Cu) {
        ctx->pc = 0x19115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191158u;
        // 0x19115c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191160u;
        goto label_191160;
    }
    ctx->pc = 0x191158u;
    {
        const bool branch_taken_0x191158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191158u;
        // 0x19115c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191158) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x191160u;
label_191160:
    // 0x191160: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_191164:
    if (ctx->pc == 0x191164u) {
        ctx->pc = 0x191168u;
        goto label_191168;
    }
    ctx->pc = 0x191160u;
    {
        const bool branch_taken_0x191160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x191160) {
            ctx->pc = 0x191178u;
            goto label_191178;
        }
    }
    ctx->pc = 0x191168u;
label_191168:
    // 0x191168: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x191168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_19116c:
    // 0x19116c: 0x28e20005  slti        $v0, $a3, 0x5
    ctx->pc = 0x19116cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
label_191170:
    // 0x191170: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_191174:
    if (ctx->pc == 0x191174u) {
        ctx->pc = 0x191174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191170u;
        // 0x191174: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191178u;
        goto label_191178;
    }
    ctx->pc = 0x191170u;
    {
        const bool branch_taken_0x191170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191170u;
        // 0x191174: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191170) {
            ctx->pc = 0x191148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191148;
        }
    }
    ctx->pc = 0x191178u;
label_191178:
    // 0x191178: 0x10000148  b           . + 4 + (0x148 << 2)
label_19117c:
    if (ctx->pc == 0x19117Cu) {
        ctx->pc = 0x19117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191178u;
        // 0x19117c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191180u;
        goto label_191180;
    }
    ctx->pc = 0x191178u;
    {
        const bool branch_taken_0x191178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191178u;
        // 0x19117c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191178) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x191180u;
label_191180:
    // 0x191180: 0x2628002c  addiu       $t0, $s1, 0x2C
    ctx->pc = 0x191180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_191184:
    // 0x191184: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x191184u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191188:
    // 0x191188: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19118c:
    // 0x19118c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19118cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191190:
    // 0x191190: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x191190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_191194:
    // 0x191194: 0x8c442c10  lw          $a0, 0x2C10($v0)
    ctx->pc = 0x191194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11280)));
label_191198:
    // 0x191198: 0x8c452c1c  lw          $a1, 0x2C1C($v0)
    ctx->pc = 0x191198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11292)));
label_19119c:
    // 0x19119c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19119cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1911a0:
    // 0x1911a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1911a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1911a4:
    // 0x1911a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1911a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1911a8:
    // 0x1911a8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1911a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1911ac:
    // 0x1911ac: 0x9044003f  lbu         $a0, 0x3F($v0)
    ctx->pc = 0x1911acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
label_1911b0:
    // 0x1911b0: 0x0  nop
    ctx->pc = 0x1911b0u;
    // NOP
label_1911b4:
    // 0x1911b4: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x1911b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_1911b8:
    // 0x1911b8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1911b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1911bc:
    // 0x1911bc: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1911bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1911c0:
    // 0x1911c0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1911c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1911c4:
    // 0x1911c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1911c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1911c8:
    // 0x1911c8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1911c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1911cc:
    // 0x1911cc: 0x9042003f  lbu         $v0, 0x3F($v0)
    ctx->pc = 0x1911ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
label_1911d0:
    // 0x1911d0: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
label_1911d4:
    if (ctx->pc == 0x1911D4u) {
        ctx->pc = 0x1911D8u;
        goto label_1911d8;
    }
    ctx->pc = 0x1911D0u;
    {
        const bool branch_taken_0x1911d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1911d0) {
            ctx->pc = 0x1911E0u;
            goto label_1911e0;
        }
    }
    ctx->pc = 0x1911D8u;
label_1911d8:
    // 0x1911d8: 0x10000130  b           . + 4 + (0x130 << 2)
label_1911dc:
    if (ctx->pc == 0x1911DCu) {
        ctx->pc = 0x1911DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911D8u;
        // 0x1911dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1911E0u;
        goto label_1911e0;
    }
    ctx->pc = 0x1911D8u;
    {
        const bool branch_taken_0x1911d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1911DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911D8u;
        // 0x1911dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1911d8) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x1911E0u;
label_1911e0:
    // 0x1911e0: 0x10e30005  beq         $a3, $v1, . + 4 + (0x5 << 2)
label_1911e4:
    if (ctx->pc == 0x1911E4u) {
        ctx->pc = 0x1911E8u;
        goto label_1911e8;
    }
    ctx->pc = 0x1911E0u;
    {
        const bool branch_taken_0x1911e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x1911e0) {
            ctx->pc = 0x1911F8u;
            goto label_1911f8;
        }
    }
    ctx->pc = 0x1911E8u;
label_1911e8:
    // 0x1911e8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1911e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1911ec:
    // 0x1911ec: 0x29220005  slti        $v0, $t1, 0x5
    ctx->pc = 0x1911ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)5) ? 1 : 0);
label_1911f0:
    // 0x1911f0: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_1911f4:
    if (ctx->pc == 0x1911F4u) {
        ctx->pc = 0x1911F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911F0u;
        // 0x1911f4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1911F8u;
        goto label_1911f8;
    }
    ctx->pc = 0x1911F0u;
    {
        const bool branch_taken_0x1911f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1911F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911F0u;
        // 0x1911f4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1911f0) {
            ctx->pc = 0x1911B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1911b4;
        }
    }
    ctx->pc = 0x1911F8u;
label_1911f8:
    // 0x1911f8: 0x10000128  b           . + 4 + (0x128 << 2)
label_1911fc:
    if (ctx->pc == 0x1911FCu) {
        ctx->pc = 0x1911FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911F8u;
        // 0x1911fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191200u;
        goto label_191200;
    }
    ctx->pc = 0x1911F8u;
    {
        const bool branch_taken_0x1911f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1911FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911F8u;
        // 0x1911fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1911f8) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x191200u;
label_191200:
    // 0x191200: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x191200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_191204:
    // 0x191204: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x191204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_191208:
    // 0x191208: 0xc057040  jal         func_15C100
label_19120c:
    if (ctx->pc == 0x19120Cu) {
        ctx->pc = 0x19120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191208u;
        // 0x19120c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191210u;
        goto label_191210;
    }
    ctx->pc = 0x191208u;
    SET_GPR_U32(ctx, 31, 0x191210u);
    ctx->pc = 0x19120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191208u;
    // 0x19120c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x191208u, 0x191210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191210u;
label_191210:
    // 0x191210: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x191210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_191214:
    // 0x191214: 0x20630005  addi        $v1, $v1, 0x5
    ctx->pc = 0x191214u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)5, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_191218:
    // 0x191218: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x191218u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_19121c:
    // 0x19121c: 0x1020011e  beqz        $at, . + 4 + (0x11E << 2)
label_191220:
    if (ctx->pc == 0x191220u) {
        ctx->pc = 0x191224u;
        goto label_191224;
    }
    ctx->pc = 0x19121Cu;
    {
        const bool branch_taken_0x19121c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19121c) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x191224u;
label_191224:
    // 0x191224: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x191224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_191228:
    // 0x191228: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x191228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19122c:
    // 0x19122c: 0x2484fe20  addiu       $a0, $a0, -0x1E0
    ctx->pc = 0x19122cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966816));
label_191230:
    // 0x191230: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x191230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_191234:
    // 0x191234: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x191234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_191238:
    // 0x191238: 0x600008  jr          $v1
label_19123c:
    if (ctx->pc == 0x19123Cu) {
        ctx->pc = 0x191240u;
        goto label_191240;
    }
    ctx->pc = 0x191238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191240u: goto label_191240;
            case 0x191264u: goto label_191264;
            case 0x19126Cu: goto label_19126c;
            case 0x191274u: goto label_191274;
            case 0x1912E0u: goto label_1912e0;
            case 0x19134Cu: goto label_19134c;
            case 0x191354u: goto label_191354;
            case 0x1914F8u: goto label_1914f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191238u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x191240u;
label_191240:
    // 0x191240: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x191240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191244:
    // 0x191244: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_191248:
    // 0x191248: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19124c:
    // 0x19124c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x19124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_191250:
    // 0x191250: 0x8c4201fc  lw          $v0, 0x1FC($v0)
    ctx->pc = 0x191250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
label_191254:
    // 0x191254: 0x10400110  beqz        $v0, . + 4 + (0x110 << 2)
label_191258:
    if (ctx->pc == 0x191258u) {
        ctx->pc = 0x19125Cu;
        goto label_19125c;
    }
    ctx->pc = 0x191254u;
    {
        const bool branch_taken_0x191254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191254) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x19125Cu;
label_19125c:
    // 0x19125c: 0x1000010f  b           . + 4 + (0x10F << 2)
label_191260:
    if (ctx->pc == 0x191260u) {
        ctx->pc = 0x191260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19125Cu;
        // 0x191260: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191264u;
        goto label_191264;
    }
    ctx->pc = 0x19125Cu;
    {
        const bool branch_taken_0x19125c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19125Cu;
        // 0x191260: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19125c) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x191264u;
label_191264:
    // 0x191264: 0x1000010d  b           . + 4 + (0x10D << 2)
label_191268:
    if (ctx->pc == 0x191268u) {
        ctx->pc = 0x191268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191264u;
        // 0x191268: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19126Cu;
        goto label_19126c;
    }
    ctx->pc = 0x191264u;
    {
        const bool branch_taken_0x191264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191264u;
        // 0x191268: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191264) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x19126Cu;
label_19126c:
    // 0x19126c: 0x1000010b  b           . + 4 + (0x10B << 2)
label_191270:
    if (ctx->pc == 0x191270u) {
        ctx->pc = 0x191270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19126Cu;
        // 0x191270: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191274u;
        goto label_191274;
    }
    ctx->pc = 0x19126Cu;
    {
        const bool branch_taken_0x19126c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19126Cu;
        // 0x191270: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19126c) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x191274u;
label_191274:
    // 0x191274: 0x8e300030  lw          $s0, 0x30($s1)
    ctx->pc = 0x191274u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_191278:
    // 0x191278: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
label_19127c:
    if (ctx->pc == 0x19127Cu) {
        ctx->pc = 0x191280u;
        goto label_191280;
    }
    ctx->pc = 0x191278u;
    {
        const bool branch_taken_0x191278 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x191278) {
            ctx->pc = 0x1912B0u;
            goto label_1912b0;
        }
    }
    ctx->pc = 0x191280u;
label_191280:
    // 0x191280: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x191280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191284:
    // 0x191284: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_191288:
    // 0x191288: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19128c:
    // 0x19128c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x19128cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_191290:
    // 0x191290: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x191290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_191294:
    // 0x191294: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x191294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_191298:
    // 0x191298: 0x320f809  jalr        $t9
label_19129c:
    if (ctx->pc == 0x19129Cu) {
        ctx->pc = 0x1912A0u;
        goto label_1912a0;
    }
    ctx->pc = 0x191298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1912A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191298u, 0x1912A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1912A0u;
label_1912a0:
    // 0x1912a0: 0x104000fd  beqz        $v0, . + 4 + (0xFD << 2)
label_1912a4:
    if (ctx->pc == 0x1912A4u) {
        ctx->pc = 0x1912A8u;
        goto label_1912a8;
    }
    ctx->pc = 0x1912A0u;
    {
        const bool branch_taken_0x1912a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1912a0) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x1912A8u;
label_1912a8:
    // 0x1912a8: 0x100000fc  b           . + 4 + (0xFC << 2)
label_1912ac:
    if (ctx->pc == 0x1912ACu) {
        ctx->pc = 0x1912ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912A8u;
        // 0x1912ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1912B0u;
        goto label_1912b0;
    }
    ctx->pc = 0x1912A8u;
    {
        const bool branch_taken_0x1912a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1912ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912A8u;
        // 0x1912ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1912a8) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x1912B0u;
label_1912b0:
    // 0x1912b0: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1912b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1912b4:
    // 0x1912b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1912b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1912b8:
    // 0x1912b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1912b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1912bc:
    // 0x1912bc: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1912bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1912c0:
    // 0x1912c0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1912c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1912c4:
    // 0x1912c4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1912c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1912c8:
    // 0x1912c8: 0x320f809  jalr        $t9
label_1912cc:
    if (ctx->pc == 0x1912CCu) {
        ctx->pc = 0x1912D0u;
        goto label_1912d0;
    }
    ctx->pc = 0x1912C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1912D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1912C8u, 0x1912D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1912D0u;
label_1912d0:
    // 0x1912d0: 0x160200f1  bne         $s0, $v0, . + 4 + (0xF1 << 2)
label_1912d4:
    if (ctx->pc == 0x1912D4u) {
        ctx->pc = 0x1912D8u;
        goto label_1912d8;
    }
    ctx->pc = 0x1912D0u;
    {
        const bool branch_taken_0x1912d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1912d0) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x1912D8u;
label_1912d8:
    // 0x1912d8: 0x100000f0  b           . + 4 + (0xF0 << 2)
label_1912dc:
    if (ctx->pc == 0x1912DCu) {
        ctx->pc = 0x1912DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912D8u;
        // 0x1912dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1912E0u;
        goto label_1912e0;
    }
    ctx->pc = 0x1912D8u;
    {
        const bool branch_taken_0x1912d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1912DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912D8u;
        // 0x1912dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1912d8) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x1912E0u;
label_1912e0:
    // 0x1912e0: 0x8e300030  lw          $s0, 0x30($s1)
    ctx->pc = 0x1912e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1912e4:
    // 0x1912e4: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
label_1912e8:
    if (ctx->pc == 0x1912E8u) {
        ctx->pc = 0x1912ECu;
        goto label_1912ec;
    }
    ctx->pc = 0x1912E4u;
    {
        const bool branch_taken_0x1912e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1912e4) {
            ctx->pc = 0x19131Cu;
            goto label_19131c;
        }
    }
    ctx->pc = 0x1912ECu;
label_1912ec:
    // 0x1912ec: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1912ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1912f0:
    // 0x1912f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1912f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1912f4:
    // 0x1912f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1912f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1912f8:
    // 0x1912f8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1912f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1912fc:
    // 0x1912fc: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1912fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_191300:
    // 0x191300: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x191300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_191304:
    // 0x191304: 0x320f809  jalr        $t9
label_191308:
    if (ctx->pc == 0x191308u) {
        ctx->pc = 0x19130Cu;
        goto label_19130c;
    }
    ctx->pc = 0x191304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19130Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191304u, 0x19130Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19130Cu;
label_19130c:
    // 0x19130c: 0x144000e2  bnez        $v0, . + 4 + (0xE2 << 2)
label_191310:
    if (ctx->pc == 0x191310u) {
        ctx->pc = 0x191314u;
        goto label_191314;
    }
    ctx->pc = 0x19130Cu;
    {
        const bool branch_taken_0x19130c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19130c) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x191314u;
label_191314:
    // 0x191314: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_191318:
    if (ctx->pc == 0x191318u) {
        ctx->pc = 0x191318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191314u;
        // 0x191318: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19131Cu;
        goto label_19131c;
    }
    ctx->pc = 0x191314u;
    {
        const bool branch_taken_0x191314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191314u;
        // 0x191318: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191314) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x19131Cu;
label_19131c:
    // 0x19131c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19131cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191320:
    // 0x191320: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_191324:
    // 0x191324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191328:
    // 0x191328: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x191328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_19132c:
    // 0x19132c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x19132cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_191330:
    // 0x191330: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x191330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_191334:
    // 0x191334: 0x320f809  jalr        $t9
label_191338:
    if (ctx->pc == 0x191338u) {
        ctx->pc = 0x19133Cu;
        goto label_19133c;
    }
    ctx->pc = 0x191334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19133Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191334u, 0x19133Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19133Cu;
label_19133c:
    // 0x19133c: 0x120200d6  beq         $s0, $v0, . + 4 + (0xD6 << 2)
label_191340:
    if (ctx->pc == 0x191340u) {
        ctx->pc = 0x191344u;
        goto label_191344;
    }
    ctx->pc = 0x19133Cu;
    {
        const bool branch_taken_0x19133c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x19133c) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x191344u;
label_191344:
    // 0x191344: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_191348:
    if (ctx->pc == 0x191348u) {
        ctx->pc = 0x191348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191344u;
        // 0x191348: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19134Cu;
        goto label_19134c;
    }
    ctx->pc = 0x191344u;
    {
        const bool branch_taken_0x191344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191344u;
        // 0x191348: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191344) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x19134Cu;
label_19134c:
    // 0x19134c: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_191350:
    if (ctx->pc == 0x191350u) {
        ctx->pc = 0x191350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19134Cu;
        // 0x191350: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191354u;
        goto label_191354;
    }
    ctx->pc = 0x19134Cu;
    {
        const bool branch_taken_0x19134c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19134Cu;
        // 0x191350: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19134c) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x191354u;
label_191354:
    // 0x191354: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x191354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_191358:
    // 0x191358: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x191358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19135c:
    // 0x19135c: 0x10a30054  beq         $a1, $v1, . + 4 + (0x54 << 2)
label_191360:
    if (ctx->pc == 0x191360u) {
        ctx->pc = 0x191364u;
        goto label_191364;
    }
    ctx->pc = 0x19135Cu;
    {
        const bool branch_taken_0x19135c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x19135c) {
            ctx->pc = 0x1914B0u;
            goto label_1914b0;
        }
    }
    ctx->pc = 0x191364u;
label_191364:
    // 0x191364: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x191364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_191368:
    // 0x191368: 0x10a4004a  beq         $a1, $a0, . + 4 + (0x4A << 2)
label_19136c:
    if (ctx->pc == 0x19136Cu) {
        ctx->pc = 0x191370u;
        goto label_191370;
    }
    ctx->pc = 0x191368u;
    {
        const bool branch_taken_0x191368 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x191368) {
            ctx->pc = 0x191494u;
            goto label_191494;
        }
    }
    ctx->pc = 0x191370u;
label_191370:
    // 0x191370: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191374:
    // 0x191374: 0x10a30025  beq         $a1, $v1, . + 4 + (0x25 << 2)
label_191378:
    if (ctx->pc == 0x191378u) {
        ctx->pc = 0x19137Cu;
        goto label_19137c;
    }
    ctx->pc = 0x191374u;
    {
        const bool branch_taken_0x191374 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x191374) {
            ctx->pc = 0x19140Cu;
            goto label_19140c;
        }
    }
    ctx->pc = 0x19137Cu;
label_19137c:
    // 0x19137c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_191380:
    if (ctx->pc == 0x191380u) {
        ctx->pc = 0x191384u;
        goto label_191384;
    }
    ctx->pc = 0x19137Cu;
    {
        const bool branch_taken_0x19137c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19137c) {
            ctx->pc = 0x19138Cu;
            goto label_19138c;
        }
    }
    ctx->pc = 0x191384u;
label_191384:
    // 0x191384: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_191388:
    if (ctx->pc == 0x191388u) {
        ctx->pc = 0x19138Cu;
        goto label_19138c;
    }
    ctx->pc = 0x191384u;
    {
        const bool branch_taken_0x191384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191384) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x19138Cu;
label_19138c:
    // 0x19138c: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x19138cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191390:
    // 0x191390: 0x8ca42cd0  lw          $a0, 0x2CD0($a1)
    ctx->pc = 0x191390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11472)));
label_191394:
    // 0x191394: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_191398:
    if (ctx->pc == 0x191398u) {
        ctx->pc = 0x191398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191394u;
        // 0x191398: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19139Cu;
        goto label_19139c;
    }
    ctx->pc = 0x191394u;
    {
        const bool branch_taken_0x191394 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x191398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191394u;
        // 0x191398: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191394) {
            ctx->pc = 0x1913A8u;
            goto label_1913a8;
        }
    }
    ctx->pc = 0x19139Cu;
label_19139c:
    // 0x19139c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1913a0:
    if (ctx->pc == 0x1913A0u) {
        ctx->pc = 0x1913A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19139Cu;
        // 0x1913a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1913A4u;
        goto label_1913a4;
    }
    ctx->pc = 0x19139Cu;
    {
        const bool branch_taken_0x19139c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1913A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19139Cu;
        // 0x1913a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19139c) {
            ctx->pc = 0x1913C0u;
            goto label_1913c0;
        }
    }
    ctx->pc = 0x1913A4u;
label_1913a4:
    // 0x1913a4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1913a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1913a8:
    // 0x1913a8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1913a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1913ac:
    // 0x1913ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1913acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1913b0:
    // 0x1913b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1913b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1913b4:
    // 0x1913b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1913b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1913b8:
    // 0x1913b8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1913b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1913bc:
    // 0x1913bc: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x1913bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1913c0:
    // 0x1913c0: 0x848301ec  lh          $v1, 0x1EC($a0)
    ctx->pc = 0x1913c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 492)));
label_1913c4:
    // 0x1913c4: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_1913c8:
    if (ctx->pc == 0x1913C8u) {
        ctx->pc = 0x1913CCu;
        goto label_1913cc;
    }
    ctx->pc = 0x1913C4u;
    {
        const bool branch_taken_0x1913c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1913c4) {
            ctx->pc = 0x1913F8u;
            goto label_1913f8;
        }
    }
    ctx->pc = 0x1913CCu;
label_1913cc:
    // 0x1913cc: 0x848301e8  lh          $v1, 0x1E8($a0)
    ctx->pc = 0x1913ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 488)));
label_1913d0:
    // 0x1913d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1913d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1913d4:
    // 0x1913d4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1913d8:
    if (ctx->pc == 0x1913D8u) {
        ctx->pc = 0x1913D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913D4u;
        // 0x1913d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1913DCu;
        goto label_1913dc;
    }
    ctx->pc = 0x1913D4u;
    {
        const bool branch_taken_0x1913d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1913D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913D4u;
        // 0x1913d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913d4) {
            ctx->pc = 0x1913E8u;
            goto label_1913e8;
        }
    }
    ctx->pc = 0x1913DCu;
label_1913dc:
    // 0x1913dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1913e0:
    if (ctx->pc == 0x1913E0u) {
        ctx->pc = 0x1913E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913DCu;
        // 0x1913e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1913E4u;
        goto label_1913e4;
    }
    ctx->pc = 0x1913DCu;
    {
        const bool branch_taken_0x1913dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1913E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913DCu;
        // 0x1913e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913dc) {
            ctx->pc = 0x1913E8u;
            goto label_1913e8;
        }
    }
    ctx->pc = 0x1913E4u;
label_1913e4:
    // 0x1913e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1913e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1913e8:
    // 0x1913e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1913ec:
    if (ctx->pc == 0x1913ECu) {
        ctx->pc = 0x1913F0u;
        goto label_1913f0;
    }
    ctx->pc = 0x1913E8u;
    {
        const bool branch_taken_0x1913e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1913e8) {
            ctx->pc = 0x1913F8u;
            goto label_1913f8;
        }
    }
    ctx->pc = 0x1913F0u;
label_1913f0:
    // 0x1913f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1913f4:
    if (ctx->pc == 0x1913F4u) {
        ctx->pc = 0x1913F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913F0u;
        // 0x1913f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1913F8u;
        goto label_1913f8;
    }
    ctx->pc = 0x1913F0u;
    {
        const bool branch_taken_0x1913f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1913F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913F0u;
        // 0x1913f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913f0) {
            ctx->pc = 0x1913FCu;
            goto label_1913fc;
        }
    }
    ctx->pc = 0x1913F8u;
label_1913f8:
    // 0x1913f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1913f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1913fc:
    // 0x1913fc: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
label_191400:
    if (ctx->pc == 0x191400u) {
        ctx->pc = 0x191404u;
        goto label_191404;
    }
    ctx->pc = 0x1913FCu;
    {
        const bool branch_taken_0x1913fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1913fc) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x191404u;
label_191404:
    // 0x191404: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_191408:
    if (ctx->pc == 0x191408u) {
        ctx->pc = 0x191408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191404u;
        // 0x191408: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19140Cu;
        goto label_19140c;
    }
    ctx->pc = 0x191404u;
    {
        const bool branch_taken_0x191404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191404u;
        // 0x191408: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191404) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x19140Cu;
label_19140c:
    // 0x19140c: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x19140cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191410:
    // 0x191410: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191414:
    // 0x191414: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x191414u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191418:
    // 0x191418: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x191418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_19141c:
    // 0x19141c: 0x24670040  addiu       $a3, $v1, 0x40
    ctx->pc = 0x19141cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_191420:
    // 0x191420: 0x8463022c  lh          $v1, 0x22C($v1)
    ctx->pc = 0x191420u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 556)));
label_191424:
    // 0x191424: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_191428:
    if (ctx->pc == 0x191428u) {
        ctx->pc = 0x19142Cu;
        goto label_19142c;
    }
    ctx->pc = 0x191424u;
    {
        const bool branch_taken_0x191424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x191424) {
            ctx->pc = 0x191454u;
            goto label_191454;
        }
    }
    ctx->pc = 0x19142Cu;
label_19142c:
    // 0x19142c: 0x84e301e8  lh          $v1, 0x1E8($a3)
    ctx->pc = 0x19142cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 488)));
label_191430:
    // 0x191430: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_191434:
    if (ctx->pc == 0x191434u) {
        ctx->pc = 0x191434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191430u;
        // 0x191434: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191438u;
        goto label_191438;
    }
    ctx->pc = 0x191430u;
    {
        const bool branch_taken_0x191430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x191434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191430u;
        // 0x191434: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191430) {
            ctx->pc = 0x191444u;
            goto label_191444;
        }
    }
    ctx->pc = 0x191438u;
label_191438:
    // 0x191438: 0x10000002  b           . + 4 + (0x2 << 2)
label_19143c:
    if (ctx->pc == 0x19143Cu) {
        ctx->pc = 0x19143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191438u;
        // 0x19143c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191440u;
        goto label_191440;
    }
    ctx->pc = 0x191438u;
    {
        const bool branch_taken_0x191438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191438u;
        // 0x19143c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191438) {
            ctx->pc = 0x191444u;
            goto label_191444;
        }
    }
    ctx->pc = 0x191440u;
label_191440:
    // 0x191440: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x191440u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191444:
    // 0x191444: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_191448:
    if (ctx->pc == 0x191448u) {
        ctx->pc = 0x19144Cu;
        goto label_19144c;
    }
    ctx->pc = 0x191444u;
    {
        const bool branch_taken_0x191444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191444) {
            ctx->pc = 0x191454u;
            goto label_191454;
        }
    }
    ctx->pc = 0x19144Cu;
label_19144c:
    // 0x19144c: 0x10000003  b           . + 4 + (0x3 << 2)
label_191450:
    if (ctx->pc == 0x191450u) {
        ctx->pc = 0x191450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19144Cu;
        // 0x191450: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191454u;
        goto label_191454;
    }
    ctx->pc = 0x19144Cu;
    {
        const bool branch_taken_0x19144c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19144Cu;
        // 0x191450: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19144c) {
            ctx->pc = 0x19145Cu;
            goto label_19145c;
        }
    }
    ctx->pc = 0x191454u;
label_191454:
    // 0x191454: 0x0  nop
    ctx->pc = 0x191454u;
    // NOP
label_191458:
    // 0x191458: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x191458u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19145c:
    // 0x19145c: 0x0  nop
    ctx->pc = 0x19145cu;
    // NOP
label_191460:
    // 0x191460: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_191464:
    if (ctx->pc == 0x191464u) {
        ctx->pc = 0x191468u;
        goto label_191468;
    }
    ctx->pc = 0x191460u;
    {
        const bool branch_taken_0x191460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191460) {
            ctx->pc = 0x191470u;
            goto label_191470;
        }
    }
    ctx->pc = 0x191468u;
label_191468:
    // 0x191468: 0x10000006  b           . + 4 + (0x6 << 2)
label_19146c:
    if (ctx->pc == 0x19146Cu) {
        ctx->pc = 0x19146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191468u;
        // 0x19146c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191470u;
        goto label_191470;
    }
    ctx->pc = 0x191468u;
    {
        const bool branch_taken_0x191468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191468u;
        // 0x19146c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191468) {
            ctx->pc = 0x191484u;
            goto label_191484;
        }
    }
    ctx->pc = 0x191470u;
label_191470:
    // 0x191470: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x191470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_191474:
    // 0x191474: 0x28c3000a  slti        $v1, $a2, 0xA
    ctx->pc = 0x191474u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
label_191478:
    // 0x191478: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
label_19147c:
    if (ctx->pc == 0x19147Cu) {
        ctx->pc = 0x19147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191478u;
        // 0x19147c: 0x250803d0  addiu       $t0, $t0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191480u;
        goto label_191480;
    }
    ctx->pc = 0x191478u;
    {
        const bool branch_taken_0x191478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191478u;
        // 0x19147c: 0x250803d0  addiu       $t0, $t0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191478) {
            ctx->pc = 0x191418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191418;
        }
    }
    ctx->pc = 0x191480u;
label_191480:
    // 0x191480: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x191480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191484:
    // 0x191484: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
label_191488:
    if (ctx->pc == 0x191488u) {
        ctx->pc = 0x19148Cu;
        goto label_19148c;
    }
    ctx->pc = 0x191484u;
    {
        const bool branch_taken_0x191484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191484) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x19148Cu;
label_19148c:
    // 0x19148c: 0x10000083  b           . + 4 + (0x83 << 2)
label_191490:
    if (ctx->pc == 0x191490u) {
        ctx->pc = 0x191490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19148Cu;
        // 0x191490: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191494u;
        goto label_191494;
    }
    ctx->pc = 0x19148Cu;
    {
        const bool branch_taken_0x19148c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19148Cu;
        // 0x191490: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19148c) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x191494u;
label_191494:
    // 0x191494: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x191494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191498:
    // 0x191498: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x191498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_19149c:
    // 0x19149c: 0x8c632c10  lw          $v1, 0x2C10($v1)
    ctx->pc = 0x19149cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11280)));
label_1914a0:
    // 0x1914a0: 0x1443007d  bne         $v0, $v1, . + 4 + (0x7D << 2)
label_1914a4:
    if (ctx->pc == 0x1914A4u) {
        ctx->pc = 0x1914A8u;
        goto label_1914a8;
    }
    ctx->pc = 0x1914A0u;
    {
        const bool branch_taken_0x1914a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1914a0) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x1914A8u;
label_1914a8:
    // 0x1914a8: 0x1000007c  b           . + 4 + (0x7C << 2)
label_1914ac:
    if (ctx->pc == 0x1914ACu) {
        ctx->pc = 0x1914ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914A8u;
        // 0x1914ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1914B0u;
        goto label_1914b0;
    }
    ctx->pc = 0x1914A8u;
    {
        const bool branch_taken_0x1914a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1914ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914A8u;
        // 0x1914ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1914a8) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x1914B0u;
label_1914b0:
    // 0x1914b0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1914b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1914b4:
    // 0x1914b4: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1914b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1914b8:
    // 0x1914b8: 0x8c852c10  lw          $a1, 0x2C10($a0)
    ctx->pc = 0x1914b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11280)));
label_1914bc:
    // 0x1914bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1914bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1914c0:
    // 0x1914c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1914c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1914c4:
    // 0x1914c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1914c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1914c8:
    // 0x1914c8: 0x8c842c1c  lw          $a0, 0x2C1C($a0)
    ctx->pc = 0x1914c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11292)));
label_1914cc:
    // 0x1914cc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1914ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1914d0:
    // 0x1914d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1914d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1914d4:
    // 0x1914d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1914d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1914d8:
    // 0x1914d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1914d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1914dc:
    // 0x1914dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1914dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1914e0:
    // 0x1914e0: 0x9042003f  lbu         $v0, 0x3F($v0)
    ctx->pc = 0x1914e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
label_1914e4:
    // 0x1914e4: 0x9063003f  lbu         $v1, 0x3F($v1)
    ctx->pc = 0x1914e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 63)));
label_1914e8:
    // 0x1914e8: 0x1443006b  bne         $v0, $v1, . + 4 + (0x6B << 2)
label_1914ec:
    if (ctx->pc == 0x1914ECu) {
        ctx->pc = 0x1914F0u;
        goto label_1914f0;
    }
    ctx->pc = 0x1914E8u;
    {
        const bool branch_taken_0x1914e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1914e8) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x1914F0u;
label_1914f0:
    // 0x1914f0: 0x1000006a  b           . + 4 + (0x6A << 2)
label_1914f4:
    if (ctx->pc == 0x1914F4u) {
        ctx->pc = 0x1914F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914F0u;
        // 0x1914f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1914F8u;
        goto label_1914f8;
    }
    ctx->pc = 0x1914F0u;
    {
        const bool branch_taken_0x1914f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1914F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914F0u;
        // 0x1914f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1914f0) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x1914F8u;
label_1914f8:
    // 0x1914f8: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x1914f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1914fc:
    // 0x1914fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1914fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_191500:
    // 0x191500: 0x10a30053  beq         $a1, $v1, . + 4 + (0x53 << 2)
label_191504:
    if (ctx->pc == 0x191504u) {
        ctx->pc = 0x191508u;
        goto label_191508;
    }
    ctx->pc = 0x191500u;
    {
        const bool branch_taken_0x191500 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x191500) {
            ctx->pc = 0x191650u;
            goto label_191650;
        }
    }
    ctx->pc = 0x191508u;
label_191508:
    // 0x191508: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x191508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19150c:
    // 0x19150c: 0x10a40049  beq         $a1, $a0, . + 4 + (0x49 << 2)
label_191510:
    if (ctx->pc == 0x191510u) {
        ctx->pc = 0x191514u;
        goto label_191514;
    }
    ctx->pc = 0x19150Cu;
    {
        const bool branch_taken_0x19150c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x19150c) {
            ctx->pc = 0x191634u;
            goto label_191634;
        }
    }
    ctx->pc = 0x191514u;
label_191514:
    // 0x191514: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191518:
    // 0x191518: 0x10a30025  beq         $a1, $v1, . + 4 + (0x25 << 2)
label_19151c:
    if (ctx->pc == 0x19151Cu) {
        ctx->pc = 0x191520u;
        goto label_191520;
    }
    ctx->pc = 0x191518u;
    {
        const bool branch_taken_0x191518 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x191518) {
            ctx->pc = 0x1915B0u;
            goto label_1915b0;
        }
    }
    ctx->pc = 0x191520u;
label_191520:
    // 0x191520: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_191524:
    if (ctx->pc == 0x191524u) {
        ctx->pc = 0x191528u;
        goto label_191528;
    }
    ctx->pc = 0x191520u;
    {
        const bool branch_taken_0x191520 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x191520) {
            ctx->pc = 0x191530u;
            goto label_191530;
        }
    }
    ctx->pc = 0x191528u;
label_191528:
    // 0x191528: 0x1000005b  b           . + 4 + (0x5B << 2)
label_19152c:
    if (ctx->pc == 0x19152Cu) {
        ctx->pc = 0x191530u;
        goto label_191530;
    }
    ctx->pc = 0x191528u;
    {
        const bool branch_taken_0x191528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191528) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x191530u;
label_191530:
    // 0x191530: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x191530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191534:
    // 0x191534: 0x8ca42cd0  lw          $a0, 0x2CD0($a1)
    ctx->pc = 0x191534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11472)));
label_191538:
    // 0x191538: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_19153c:
    if (ctx->pc == 0x19153Cu) {
        ctx->pc = 0x19153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191538u;
        // 0x19153c: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191540u;
        goto label_191540;
    }
    ctx->pc = 0x191538u;
    {
        const bool branch_taken_0x191538 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191538u;
        // 0x19153c: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191538) {
            ctx->pc = 0x19154Cu;
            goto label_19154c;
        }
    }
    ctx->pc = 0x191540u;
label_191540:
    // 0x191540: 0x10000008  b           . + 4 + (0x8 << 2)
label_191544:
    if (ctx->pc == 0x191544u) {
        ctx->pc = 0x191544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191540u;
        // 0x191544: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191548u;
        goto label_191548;
    }
    ctx->pc = 0x191540u;
    {
        const bool branch_taken_0x191540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191540u;
        // 0x191544: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191540) {
            ctx->pc = 0x191564u;
            goto label_191564;
        }
    }
    ctx->pc = 0x191548u;
label_191548:
    // 0x191548: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x191548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_19154c:
    // 0x19154c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19154cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_191550:
    // 0x191550: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x191550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_191554:
    // 0x191554: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x191554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_191558:
    // 0x191558: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x191558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_19155c:
    // 0x19155c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x19155cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_191560:
    // 0x191560: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x191560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_191564:
    // 0x191564: 0x848301ec  lh          $v1, 0x1EC($a0)
    ctx->pc = 0x191564u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 492)));
label_191568:
    // 0x191568: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_19156c:
    if (ctx->pc == 0x19156Cu) {
        ctx->pc = 0x191570u;
        goto label_191570;
    }
    ctx->pc = 0x191568u;
    {
        const bool branch_taken_0x191568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x191568) {
            ctx->pc = 0x19159Cu;
            goto label_19159c;
        }
    }
    ctx->pc = 0x191570u;
label_191570:
    // 0x191570: 0x848301e8  lh          $v1, 0x1E8($a0)
    ctx->pc = 0x191570u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 488)));
label_191574:
    // 0x191574: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x191574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_191578:
    // 0x191578: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_19157c:
    if (ctx->pc == 0x19157Cu) {
        ctx->pc = 0x19157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191578u;
        // 0x19157c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191580u;
        goto label_191580;
    }
    ctx->pc = 0x191578u;
    {
        const bool branch_taken_0x191578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191578u;
        // 0x19157c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191578) {
            ctx->pc = 0x19158Cu;
            goto label_19158c;
        }
    }
    ctx->pc = 0x191580u;
label_191580:
    // 0x191580: 0x10000002  b           . + 4 + (0x2 << 2)
label_191584:
    if (ctx->pc == 0x191584u) {
        ctx->pc = 0x191584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191580u;
        // 0x191584: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191588u;
        goto label_191588;
    }
    ctx->pc = 0x191580u;
    {
        const bool branch_taken_0x191580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191580u;
        // 0x191584: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191580) {
            ctx->pc = 0x19158Cu;
            goto label_19158c;
        }
    }
    ctx->pc = 0x191588u;
label_191588:
    // 0x191588: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x191588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19158c:
    // 0x19158c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_191590:
    if (ctx->pc == 0x191590u) {
        ctx->pc = 0x191594u;
        goto label_191594;
    }
    ctx->pc = 0x19158Cu;
    {
        const bool branch_taken_0x19158c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19158c) {
            ctx->pc = 0x19159Cu;
            goto label_19159c;
        }
    }
    ctx->pc = 0x191594u;
label_191594:
    // 0x191594: 0x10000002  b           . + 4 + (0x2 << 2)
label_191598:
    if (ctx->pc == 0x191598u) {
        ctx->pc = 0x191598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191594u;
        // 0x191598: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19159Cu;
        goto label_19159c;
    }
    ctx->pc = 0x191594u;
    {
        const bool branch_taken_0x191594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191594u;
        // 0x191598: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191594) {
            ctx->pc = 0x1915A0u;
            goto label_1915a0;
        }
    }
    ctx->pc = 0x19159Cu;
label_19159c:
    // 0x19159c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19159cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1915a0:
    // 0x1915a0: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
label_1915a4:
    if (ctx->pc == 0x1915A4u) {
        ctx->pc = 0x1915A8u;
        goto label_1915a8;
    }
    ctx->pc = 0x1915A0u;
    {
        const bool branch_taken_0x1915a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1915a0) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x1915A8u;
label_1915a8:
    // 0x1915a8: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1915ac:
    if (ctx->pc == 0x1915ACu) {
        ctx->pc = 0x1915ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915A8u;
        // 0x1915ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1915B0u;
        goto label_1915b0;
    }
    ctx->pc = 0x1915A8u;
    {
        const bool branch_taken_0x1915a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1915ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915A8u;
        // 0x1915ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1915a8) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x1915B0u;
label_1915b0:
    // 0x1915b0: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x1915b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1915b4:
    // 0x1915b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1915b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1915b8:
    // 0x1915b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1915b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1915bc:
    // 0x1915bc: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x1915bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1915c0:
    // 0x1915c0: 0x24670040  addiu       $a3, $v1, 0x40
    ctx->pc = 0x1915c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1915c4:
    // 0x1915c4: 0x8463022c  lh          $v1, 0x22C($v1)
    ctx->pc = 0x1915c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 556)));
label_1915c8:
    // 0x1915c8: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_1915cc:
    if (ctx->pc == 0x1915CCu) {
        ctx->pc = 0x1915D0u;
        goto label_1915d0;
    }
    ctx->pc = 0x1915C8u;
    {
        const bool branch_taken_0x1915c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1915c8) {
            ctx->pc = 0x1915F8u;
            goto label_1915f8;
        }
    }
    ctx->pc = 0x1915D0u;
label_1915d0:
    // 0x1915d0: 0x84e301e8  lh          $v1, 0x1E8($a3)
    ctx->pc = 0x1915d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 488)));
label_1915d4:
    // 0x1915d4: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_1915d8:
    if (ctx->pc == 0x1915D8u) {
        ctx->pc = 0x1915D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915D4u;
        // 0x1915d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1915DCu;
        goto label_1915dc;
    }
    ctx->pc = 0x1915D4u;
    {
        const bool branch_taken_0x1915d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1915D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915D4u;
        // 0x1915d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1915d4) {
            ctx->pc = 0x1915E8u;
            goto label_1915e8;
        }
    }
    ctx->pc = 0x1915DCu;
label_1915dc:
    // 0x1915dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1915e0:
    if (ctx->pc == 0x1915E0u) {
        ctx->pc = 0x1915E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915DCu;
        // 0x1915e0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1915E4u;
        goto label_1915e4;
    }
    ctx->pc = 0x1915DCu;
    {
        const bool branch_taken_0x1915dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1915E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915DCu;
        // 0x1915e0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1915dc) {
            ctx->pc = 0x1915E8u;
            goto label_1915e8;
        }
    }
    ctx->pc = 0x1915E4u;
label_1915e4:
    // 0x1915e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1915e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1915e8:
    // 0x1915e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1915ec:
    if (ctx->pc == 0x1915ECu) {
        ctx->pc = 0x1915F0u;
        goto label_1915f0;
    }
    ctx->pc = 0x1915E8u;
    {
        const bool branch_taken_0x1915e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1915e8) {
            ctx->pc = 0x1915F8u;
            goto label_1915f8;
        }
    }
    ctx->pc = 0x1915F0u;
label_1915f0:
    // 0x1915f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1915f4:
    if (ctx->pc == 0x1915F4u) {
        ctx->pc = 0x1915F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915F0u;
        // 0x1915f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1915F8u;
        goto label_1915f8;
    }
    ctx->pc = 0x1915F0u;
    {
        const bool branch_taken_0x1915f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1915F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915F0u;
        // 0x1915f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1915f0) {
            ctx->pc = 0x1915FCu;
            goto label_1915fc;
        }
    }
    ctx->pc = 0x1915F8u;
label_1915f8:
    // 0x1915f8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1915f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1915fc:
    // 0x1915fc: 0x0  nop
    ctx->pc = 0x1915fcu;
    // NOP
label_191600:
    // 0x191600: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_191604:
    if (ctx->pc == 0x191604u) {
        ctx->pc = 0x191608u;
        goto label_191608;
    }
    ctx->pc = 0x191600u;
    {
        const bool branch_taken_0x191600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191600) {
            ctx->pc = 0x191610u;
            goto label_191610;
        }
    }
    ctx->pc = 0x191608u;
label_191608:
    // 0x191608: 0x10000006  b           . + 4 + (0x6 << 2)
label_19160c:
    if (ctx->pc == 0x19160Cu) {
        ctx->pc = 0x19160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191608u;
        // 0x19160c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191610u;
        goto label_191610;
    }
    ctx->pc = 0x191608u;
    {
        const bool branch_taken_0x191608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191608u;
        // 0x19160c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191608) {
            ctx->pc = 0x191624u;
            goto label_191624;
        }
    }
    ctx->pc = 0x191610u;
label_191610:
    // 0x191610: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x191610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_191614:
    // 0x191614: 0x28c3000a  slti        $v1, $a2, 0xA
    ctx->pc = 0x191614u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
label_191618:
    // 0x191618: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_19161c:
    if (ctx->pc == 0x19161Cu) {
        ctx->pc = 0x19161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191618u;
        // 0x19161c: 0x250803d0  addiu       $t0, $t0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191620u;
        goto label_191620;
    }
    ctx->pc = 0x191618u;
    {
        const bool branch_taken_0x191618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191618u;
        // 0x19161c: 0x250803d0  addiu       $t0, $t0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191618) {
            ctx->pc = 0x1915BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1915bc;
        }
    }
    ctx->pc = 0x191620u;
label_191620:
    // 0x191620: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x191620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191624:
    // 0x191624: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_191628:
    if (ctx->pc == 0x191628u) {
        ctx->pc = 0x19162Cu;
        goto label_19162c;
    }
    ctx->pc = 0x191624u;
    {
        const bool branch_taken_0x191624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191624) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x19162Cu;
label_19162c:
    // 0x19162c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_191630:
    if (ctx->pc == 0x191630u) {
        ctx->pc = 0x191630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19162Cu;
        // 0x191630: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191634u;
        goto label_191634;
    }
    ctx->pc = 0x19162Cu;
    {
        const bool branch_taken_0x19162c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19162Cu;
        // 0x191630: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19162c) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x191634u;
label_191634:
    // 0x191634: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x191634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191638:
    // 0x191638: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x191638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_19163c:
    // 0x19163c: 0x8c632c10  lw          $v1, 0x2C10($v1)
    ctx->pc = 0x19163cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11280)));
label_191640:
    // 0x191640: 0x10430015  beq         $v0, $v1, . + 4 + (0x15 << 2)
label_191644:
    if (ctx->pc == 0x191644u) {
        ctx->pc = 0x191648u;
        goto label_191648;
    }
    ctx->pc = 0x191640u;
    {
        const bool branch_taken_0x191640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x191640) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x191648u;
label_191648:
    // 0x191648: 0x10000014  b           . + 4 + (0x14 << 2)
label_19164c:
    if (ctx->pc == 0x19164Cu) {
        ctx->pc = 0x19164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191648u;
        // 0x19164c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191650u;
        goto label_191650;
    }
    ctx->pc = 0x191648u;
    {
        const bool branch_taken_0x191648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191648u;
        // 0x19164c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191648) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x191650u;
label_191650:
    // 0x191650: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x191650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191654:
    // 0x191654: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x191654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_191658:
    // 0x191658: 0x8c852c10  lw          $a1, 0x2C10($a0)
    ctx->pc = 0x191658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11280)));
label_19165c:
    // 0x19165c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19165cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_191660:
    // 0x191660: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191664:
    // 0x191664: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x191664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_191668:
    // 0x191668: 0x8c842c1c  lw          $a0, 0x2C1C($a0)
    ctx->pc = 0x191668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11292)));
label_19166c:
    // 0x19166c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x19166cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_191670:
    // 0x191670: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x191670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_191674:
    // 0x191674: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x191674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_191678:
    // 0x191678: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x191678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_19167c:
    // 0x19167c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19167cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_191680:
    // 0x191680: 0x9042003f  lbu         $v0, 0x3F($v0)
    ctx->pc = 0x191680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
label_191684:
    // 0x191684: 0x9063003f  lbu         $v1, 0x3F($v1)
    ctx->pc = 0x191684u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 63)));
label_191688:
    // 0x191688: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_19168c:
    if (ctx->pc == 0x19168Cu) {
        ctx->pc = 0x191690u;
        goto label_191690;
    }
    ctx->pc = 0x191688u;
    {
        const bool branch_taken_0x191688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x191688) {
            ctx->pc = 0x191698u;
            goto label_191698;
        }
    }
    ctx->pc = 0x191690u;
label_191690:
    // 0x191690: 0x10000002  b           . + 4 + (0x2 << 2)
label_191694:
    if (ctx->pc == 0x191694u) {
        ctx->pc = 0x191694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191690u;
        // 0x191694: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191698u;
        goto label_191698;
    }
    ctx->pc = 0x191690u;
    {
        const bool branch_taken_0x191690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191690u;
        // 0x191694: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191690) {
            ctx->pc = 0x19169Cu;
            goto label_19169c;
        }
    }
    ctx->pc = 0x191698u;
label_191698:
    // 0x191698: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x191698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19169c:
    // 0x19169c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19169cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1916a0:
    // 0x1916a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1916a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1916a4:
    // 0x1916a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1916a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1916a8:
    // 0x1916a8: 0x3e00008  jr          $ra
label_1916ac:
    if (ctx->pc == 0x1916ACu) {
        ctx->pc = 0x1916ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916A8u;
        // 0x1916ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1916B0u;
        goto label_fallthrough_0x1916a8;
    }
    ctx->pc = 0x1916A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1916ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916A8u;
        // 0x1916ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1916A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1916a8:
    ctx->pc = 0x1916B0u;
}
