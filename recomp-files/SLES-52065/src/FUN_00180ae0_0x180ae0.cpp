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

// Function: FUN_00180ae0
// Address: 0x180ae0 - 0x1813a4
void FUN_00180ae0_0x180ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00180ae0_0x180ae0");
#endif

    switch (ctx->pc) {
        case 0x180ae0u: goto label_180ae0;
        case 0x180ae4u: goto label_180ae4;
        case 0x180ae8u: goto label_180ae8;
        case 0x180aecu: goto label_180aec;
        case 0x180af0u: goto label_180af0;
        case 0x180af4u: goto label_180af4;
        case 0x180af8u: goto label_180af8;
        case 0x180afcu: goto label_180afc;
        case 0x180b00u: goto label_180b00;
        case 0x180b04u: goto label_180b04;
        case 0x180b08u: goto label_180b08;
        case 0x180b0cu: goto label_180b0c;
        case 0x180b10u: goto label_180b10;
        case 0x180b14u: goto label_180b14;
        case 0x180b18u: goto label_180b18;
        case 0x180b1cu: goto label_180b1c;
        case 0x180b20u: goto label_180b20;
        case 0x180b24u: goto label_180b24;
        case 0x180b28u: goto label_180b28;
        case 0x180b2cu: goto label_180b2c;
        case 0x180b30u: goto label_180b30;
        case 0x180b34u: goto label_180b34;
        case 0x180b38u: goto label_180b38;
        case 0x180b3cu: goto label_180b3c;
        case 0x180b40u: goto label_180b40;
        case 0x180b44u: goto label_180b44;
        case 0x180b48u: goto label_180b48;
        case 0x180b4cu: goto label_180b4c;
        case 0x180b50u: goto label_180b50;
        case 0x180b54u: goto label_180b54;
        case 0x180b58u: goto label_180b58;
        case 0x180b5cu: goto label_180b5c;
        case 0x180b60u: goto label_180b60;
        case 0x180b64u: goto label_180b64;
        case 0x180b68u: goto label_180b68;
        case 0x180b6cu: goto label_180b6c;
        case 0x180b70u: goto label_180b70;
        case 0x180b74u: goto label_180b74;
        case 0x180b78u: goto label_180b78;
        case 0x180b7cu: goto label_180b7c;
        case 0x180b80u: goto label_180b80;
        case 0x180b84u: goto label_180b84;
        case 0x180b88u: goto label_180b88;
        case 0x180b8cu: goto label_180b8c;
        case 0x180b90u: goto label_180b90;
        case 0x180b94u: goto label_180b94;
        case 0x180b98u: goto label_180b98;
        case 0x180b9cu: goto label_180b9c;
        case 0x180ba0u: goto label_180ba0;
        case 0x180ba4u: goto label_180ba4;
        case 0x180ba8u: goto label_180ba8;
        case 0x180bacu: goto label_180bac;
        case 0x180bb0u: goto label_180bb0;
        case 0x180bb4u: goto label_180bb4;
        case 0x180bb8u: goto label_180bb8;
        case 0x180bbcu: goto label_180bbc;
        case 0x180bc0u: goto label_180bc0;
        case 0x180bc4u: goto label_180bc4;
        case 0x180bc8u: goto label_180bc8;
        case 0x180bccu: goto label_180bcc;
        case 0x180bd0u: goto label_180bd0;
        case 0x180bd4u: goto label_180bd4;
        case 0x180bd8u: goto label_180bd8;
        case 0x180bdcu: goto label_180bdc;
        case 0x180be0u: goto label_180be0;
        case 0x180be4u: goto label_180be4;
        case 0x180be8u: goto label_180be8;
        case 0x180becu: goto label_180bec;
        case 0x180bf0u: goto label_180bf0;
        case 0x180bf4u: goto label_180bf4;
        case 0x180bf8u: goto label_180bf8;
        case 0x180bfcu: goto label_180bfc;
        case 0x180c00u: goto label_180c00;
        case 0x180c04u: goto label_180c04;
        case 0x180c08u: goto label_180c08;
        case 0x180c0cu: goto label_180c0c;
        case 0x180c10u: goto label_180c10;
        case 0x180c14u: goto label_180c14;
        case 0x180c18u: goto label_180c18;
        case 0x180c1cu: goto label_180c1c;
        case 0x180c20u: goto label_180c20;
        case 0x180c24u: goto label_180c24;
        case 0x180c28u: goto label_180c28;
        case 0x180c2cu: goto label_180c2c;
        case 0x180c30u: goto label_180c30;
        case 0x180c34u: goto label_180c34;
        case 0x180c38u: goto label_180c38;
        case 0x180c3cu: goto label_180c3c;
        case 0x180c40u: goto label_180c40;
        case 0x180c44u: goto label_180c44;
        case 0x180c48u: goto label_180c48;
        case 0x180c4cu: goto label_180c4c;
        case 0x180c50u: goto label_180c50;
        case 0x180c54u: goto label_180c54;
        case 0x180c58u: goto label_180c58;
        case 0x180c5cu: goto label_180c5c;
        case 0x180c60u: goto label_180c60;
        case 0x180c64u: goto label_180c64;
        case 0x180c68u: goto label_180c68;
        case 0x180c6cu: goto label_180c6c;
        case 0x180c70u: goto label_180c70;
        case 0x180c74u: goto label_180c74;
        case 0x180c78u: goto label_180c78;
        case 0x180c7cu: goto label_180c7c;
        case 0x180c80u: goto label_180c80;
        case 0x180c84u: goto label_180c84;
        case 0x180c88u: goto label_180c88;
        case 0x180c8cu: goto label_180c8c;
        case 0x180c90u: goto label_180c90;
        case 0x180c94u: goto label_180c94;
        case 0x180c98u: goto label_180c98;
        case 0x180c9cu: goto label_180c9c;
        case 0x180ca0u: goto label_180ca0;
        case 0x180ca4u: goto label_180ca4;
        case 0x180ca8u: goto label_180ca8;
        case 0x180cacu: goto label_180cac;
        case 0x180cb0u: goto label_180cb0;
        case 0x180cb4u: goto label_180cb4;
        case 0x180cb8u: goto label_180cb8;
        case 0x180cbcu: goto label_180cbc;
        case 0x180cc0u: goto label_180cc0;
        case 0x180cc4u: goto label_180cc4;
        case 0x180cc8u: goto label_180cc8;
        case 0x180cccu: goto label_180ccc;
        case 0x180cd0u: goto label_180cd0;
        case 0x180cd4u: goto label_180cd4;
        case 0x180cd8u: goto label_180cd8;
        case 0x180cdcu: goto label_180cdc;
        case 0x180ce0u: goto label_180ce0;
        case 0x180ce4u: goto label_180ce4;
        case 0x180ce8u: goto label_180ce8;
        case 0x180cecu: goto label_180cec;
        case 0x180cf0u: goto label_180cf0;
        case 0x180cf4u: goto label_180cf4;
        case 0x180cf8u: goto label_180cf8;
        case 0x180cfcu: goto label_180cfc;
        case 0x180d00u: goto label_180d00;
        case 0x180d04u: goto label_180d04;
        case 0x180d08u: goto label_180d08;
        case 0x180d0cu: goto label_180d0c;
        case 0x180d10u: goto label_180d10;
        case 0x180d14u: goto label_180d14;
        case 0x180d18u: goto label_180d18;
        case 0x180d1cu: goto label_180d1c;
        case 0x180d20u: goto label_180d20;
        case 0x180d24u: goto label_180d24;
        case 0x180d28u: goto label_180d28;
        case 0x180d2cu: goto label_180d2c;
        case 0x180d30u: goto label_180d30;
        case 0x180d34u: goto label_180d34;
        case 0x180d38u: goto label_180d38;
        case 0x180d3cu: goto label_180d3c;
        case 0x180d40u: goto label_180d40;
        case 0x180d44u: goto label_180d44;
        case 0x180d48u: goto label_180d48;
        case 0x180d4cu: goto label_180d4c;
        case 0x180d50u: goto label_180d50;
        case 0x180d54u: goto label_180d54;
        case 0x180d58u: goto label_180d58;
        case 0x180d5cu: goto label_180d5c;
        case 0x180d60u: goto label_180d60;
        case 0x180d64u: goto label_180d64;
        case 0x180d68u: goto label_180d68;
        case 0x180d6cu: goto label_180d6c;
        case 0x180d70u: goto label_180d70;
        case 0x180d74u: goto label_180d74;
        case 0x180d78u: goto label_180d78;
        case 0x180d7cu: goto label_180d7c;
        case 0x180d80u: goto label_180d80;
        case 0x180d84u: goto label_180d84;
        case 0x180d88u: goto label_180d88;
        case 0x180d8cu: goto label_180d8c;
        case 0x180d90u: goto label_180d90;
        case 0x180d94u: goto label_180d94;
        case 0x180d98u: goto label_180d98;
        case 0x180d9cu: goto label_180d9c;
        case 0x180da0u: goto label_180da0;
        case 0x180da4u: goto label_180da4;
        case 0x180da8u: goto label_180da8;
        case 0x180dacu: goto label_180dac;
        case 0x180db0u: goto label_180db0;
        case 0x180db4u: goto label_180db4;
        case 0x180db8u: goto label_180db8;
        case 0x180dbcu: goto label_180dbc;
        case 0x180dc0u: goto label_180dc0;
        case 0x180dc4u: goto label_180dc4;
        case 0x180dc8u: goto label_180dc8;
        case 0x180dccu: goto label_180dcc;
        case 0x180dd0u: goto label_180dd0;
        case 0x180dd4u: goto label_180dd4;
        case 0x180dd8u: goto label_180dd8;
        case 0x180ddcu: goto label_180ddc;
        case 0x180de0u: goto label_180de0;
        case 0x180de4u: goto label_180de4;
        case 0x180de8u: goto label_180de8;
        case 0x180decu: goto label_180dec;
        case 0x180df0u: goto label_180df0;
        case 0x180df4u: goto label_180df4;
        case 0x180df8u: goto label_180df8;
        case 0x180dfcu: goto label_180dfc;
        case 0x180e00u: goto label_180e00;
        case 0x180e04u: goto label_180e04;
        case 0x180e08u: goto label_180e08;
        case 0x180e0cu: goto label_180e0c;
        case 0x180e10u: goto label_180e10;
        case 0x180e14u: goto label_180e14;
        case 0x180e18u: goto label_180e18;
        case 0x180e1cu: goto label_180e1c;
        case 0x180e20u: goto label_180e20;
        case 0x180e24u: goto label_180e24;
        case 0x180e28u: goto label_180e28;
        case 0x180e2cu: goto label_180e2c;
        case 0x180e30u: goto label_180e30;
        case 0x180e34u: goto label_180e34;
        case 0x180e38u: goto label_180e38;
        case 0x180e3cu: goto label_180e3c;
        case 0x180e40u: goto label_180e40;
        case 0x180e44u: goto label_180e44;
        case 0x180e48u: goto label_180e48;
        case 0x180e4cu: goto label_180e4c;
        case 0x180e50u: goto label_180e50;
        case 0x180e54u: goto label_180e54;
        case 0x180e58u: goto label_180e58;
        case 0x180e5cu: goto label_180e5c;
        case 0x180e60u: goto label_180e60;
        case 0x180e64u: goto label_180e64;
        case 0x180e68u: goto label_180e68;
        case 0x180e6cu: goto label_180e6c;
        case 0x180e70u: goto label_180e70;
        case 0x180e74u: goto label_180e74;
        case 0x180e78u: goto label_180e78;
        case 0x180e7cu: goto label_180e7c;
        case 0x180e80u: goto label_180e80;
        case 0x180e84u: goto label_180e84;
        case 0x180e88u: goto label_180e88;
        case 0x180e8cu: goto label_180e8c;
        case 0x180e90u: goto label_180e90;
        case 0x180e94u: goto label_180e94;
        case 0x180e98u: goto label_180e98;
        case 0x180e9cu: goto label_180e9c;
        case 0x180ea0u: goto label_180ea0;
        case 0x180ea4u: goto label_180ea4;
        case 0x180ea8u: goto label_180ea8;
        case 0x180eacu: goto label_180eac;
        case 0x180eb0u: goto label_180eb0;
        case 0x180eb4u: goto label_180eb4;
        case 0x180eb8u: goto label_180eb8;
        case 0x180ebcu: goto label_180ebc;
        case 0x180ec0u: goto label_180ec0;
        case 0x180ec4u: goto label_180ec4;
        case 0x180ec8u: goto label_180ec8;
        case 0x180eccu: goto label_180ecc;
        case 0x180ed0u: goto label_180ed0;
        case 0x180ed4u: goto label_180ed4;
        case 0x180ed8u: goto label_180ed8;
        case 0x180edcu: goto label_180edc;
        case 0x180ee0u: goto label_180ee0;
        case 0x180ee4u: goto label_180ee4;
        case 0x180ee8u: goto label_180ee8;
        case 0x180eecu: goto label_180eec;
        case 0x180ef0u: goto label_180ef0;
        case 0x180ef4u: goto label_180ef4;
        case 0x180ef8u: goto label_180ef8;
        case 0x180efcu: goto label_180efc;
        case 0x180f00u: goto label_180f00;
        case 0x180f04u: goto label_180f04;
        case 0x180f08u: goto label_180f08;
        case 0x180f0cu: goto label_180f0c;
        case 0x180f10u: goto label_180f10;
        case 0x180f14u: goto label_180f14;
        case 0x180f18u: goto label_180f18;
        case 0x180f1cu: goto label_180f1c;
        case 0x180f20u: goto label_180f20;
        case 0x180f24u: goto label_180f24;
        case 0x180f28u: goto label_180f28;
        case 0x180f2cu: goto label_180f2c;
        case 0x180f30u: goto label_180f30;
        case 0x180f34u: goto label_180f34;
        case 0x180f38u: goto label_180f38;
        case 0x180f3cu: goto label_180f3c;
        case 0x180f40u: goto label_180f40;
        case 0x180f44u: goto label_180f44;
        case 0x180f48u: goto label_180f48;
        case 0x180f4cu: goto label_180f4c;
        case 0x180f50u: goto label_180f50;
        case 0x180f54u: goto label_180f54;
        case 0x180f58u: goto label_180f58;
        case 0x180f5cu: goto label_180f5c;
        case 0x180f60u: goto label_180f60;
        case 0x180f64u: goto label_180f64;
        case 0x180f68u: goto label_180f68;
        case 0x180f6cu: goto label_180f6c;
        case 0x180f70u: goto label_180f70;
        case 0x180f74u: goto label_180f74;
        case 0x180f78u: goto label_180f78;
        case 0x180f7cu: goto label_180f7c;
        case 0x180f80u: goto label_180f80;
        case 0x180f84u: goto label_180f84;
        case 0x180f88u: goto label_180f88;
        case 0x180f8cu: goto label_180f8c;
        case 0x180f90u: goto label_180f90;
        case 0x180f94u: goto label_180f94;
        case 0x180f98u: goto label_180f98;
        case 0x180f9cu: goto label_180f9c;
        case 0x180fa0u: goto label_180fa0;
        case 0x180fa4u: goto label_180fa4;
        case 0x180fa8u: goto label_180fa8;
        case 0x180facu: goto label_180fac;
        case 0x180fb0u: goto label_180fb0;
        case 0x180fb4u: goto label_180fb4;
        case 0x180fb8u: goto label_180fb8;
        case 0x180fbcu: goto label_180fbc;
        case 0x180fc0u: goto label_180fc0;
        case 0x180fc4u: goto label_180fc4;
        case 0x180fc8u: goto label_180fc8;
        case 0x180fccu: goto label_180fcc;
        case 0x180fd0u: goto label_180fd0;
        case 0x180fd4u: goto label_180fd4;
        case 0x180fd8u: goto label_180fd8;
        case 0x180fdcu: goto label_180fdc;
        case 0x180fe0u: goto label_180fe0;
        case 0x180fe4u: goto label_180fe4;
        case 0x180fe8u: goto label_180fe8;
        case 0x180fecu: goto label_180fec;
        case 0x180ff0u: goto label_180ff0;
        case 0x180ff4u: goto label_180ff4;
        case 0x180ff8u: goto label_180ff8;
        case 0x180ffcu: goto label_180ffc;
        case 0x181000u: goto label_181000;
        case 0x181004u: goto label_181004;
        case 0x181008u: goto label_181008;
        case 0x18100cu: goto label_18100c;
        case 0x181010u: goto label_181010;
        case 0x181014u: goto label_181014;
        case 0x181018u: goto label_181018;
        case 0x18101cu: goto label_18101c;
        case 0x181020u: goto label_181020;
        case 0x181024u: goto label_181024;
        case 0x181028u: goto label_181028;
        case 0x18102cu: goto label_18102c;
        case 0x181030u: goto label_181030;
        case 0x181034u: goto label_181034;
        case 0x181038u: goto label_181038;
        case 0x18103cu: goto label_18103c;
        case 0x181040u: goto label_181040;
        case 0x181044u: goto label_181044;
        case 0x181048u: goto label_181048;
        case 0x18104cu: goto label_18104c;
        case 0x181050u: goto label_181050;
        case 0x181054u: goto label_181054;
        case 0x181058u: goto label_181058;
        case 0x18105cu: goto label_18105c;
        case 0x181060u: goto label_181060;
        case 0x181064u: goto label_181064;
        case 0x181068u: goto label_181068;
        case 0x18106cu: goto label_18106c;
        case 0x181070u: goto label_181070;
        case 0x181074u: goto label_181074;
        case 0x181078u: goto label_181078;
        case 0x18107cu: goto label_18107c;
        case 0x181080u: goto label_181080;
        case 0x181084u: goto label_181084;
        case 0x181088u: goto label_181088;
        case 0x18108cu: goto label_18108c;
        case 0x181090u: goto label_181090;
        case 0x181094u: goto label_181094;
        case 0x181098u: goto label_181098;
        case 0x18109cu: goto label_18109c;
        case 0x1810a0u: goto label_1810a0;
        case 0x1810a4u: goto label_1810a4;
        case 0x1810a8u: goto label_1810a8;
        case 0x1810acu: goto label_1810ac;
        case 0x1810b0u: goto label_1810b0;
        case 0x1810b4u: goto label_1810b4;
        case 0x1810b8u: goto label_1810b8;
        case 0x1810bcu: goto label_1810bc;
        case 0x1810c0u: goto label_1810c0;
        case 0x1810c4u: goto label_1810c4;
        case 0x1810c8u: goto label_1810c8;
        case 0x1810ccu: goto label_1810cc;
        case 0x1810d0u: goto label_1810d0;
        case 0x1810d4u: goto label_1810d4;
        case 0x1810d8u: goto label_1810d8;
        case 0x1810dcu: goto label_1810dc;
        case 0x1810e0u: goto label_1810e0;
        case 0x1810e4u: goto label_1810e4;
        case 0x1810e8u: goto label_1810e8;
        case 0x1810ecu: goto label_1810ec;
        case 0x1810f0u: goto label_1810f0;
        case 0x1810f4u: goto label_1810f4;
        case 0x1810f8u: goto label_1810f8;
        case 0x1810fcu: goto label_1810fc;
        case 0x181100u: goto label_181100;
        case 0x181104u: goto label_181104;
        case 0x181108u: goto label_181108;
        case 0x18110cu: goto label_18110c;
        case 0x181110u: goto label_181110;
        case 0x181114u: goto label_181114;
        case 0x181118u: goto label_181118;
        case 0x18111cu: goto label_18111c;
        case 0x181120u: goto label_181120;
        case 0x181124u: goto label_181124;
        case 0x181128u: goto label_181128;
        case 0x18112cu: goto label_18112c;
        case 0x181130u: goto label_181130;
        case 0x181134u: goto label_181134;
        case 0x181138u: goto label_181138;
        case 0x18113cu: goto label_18113c;
        case 0x181140u: goto label_181140;
        case 0x181144u: goto label_181144;
        case 0x181148u: goto label_181148;
        case 0x18114cu: goto label_18114c;
        case 0x181150u: goto label_181150;
        case 0x181154u: goto label_181154;
        case 0x181158u: goto label_181158;
        case 0x18115cu: goto label_18115c;
        case 0x181160u: goto label_181160;
        case 0x181164u: goto label_181164;
        case 0x181168u: goto label_181168;
        case 0x18116cu: goto label_18116c;
        case 0x181170u: goto label_181170;
        case 0x181174u: goto label_181174;
        case 0x181178u: goto label_181178;
        case 0x18117cu: goto label_18117c;
        case 0x181180u: goto label_181180;
        case 0x181184u: goto label_181184;
        case 0x181188u: goto label_181188;
        case 0x18118cu: goto label_18118c;
        case 0x181190u: goto label_181190;
        case 0x181194u: goto label_181194;
        case 0x181198u: goto label_181198;
        case 0x18119cu: goto label_18119c;
        case 0x1811a0u: goto label_1811a0;
        case 0x1811a4u: goto label_1811a4;
        case 0x1811a8u: goto label_1811a8;
        case 0x1811acu: goto label_1811ac;
        case 0x1811b0u: goto label_1811b0;
        case 0x1811b4u: goto label_1811b4;
        case 0x1811b8u: goto label_1811b8;
        case 0x1811bcu: goto label_1811bc;
        case 0x1811c0u: goto label_1811c0;
        case 0x1811c4u: goto label_1811c4;
        case 0x1811c8u: goto label_1811c8;
        case 0x1811ccu: goto label_1811cc;
        case 0x1811d0u: goto label_1811d0;
        case 0x1811d4u: goto label_1811d4;
        case 0x1811d8u: goto label_1811d8;
        case 0x1811dcu: goto label_1811dc;
        case 0x1811e0u: goto label_1811e0;
        case 0x1811e4u: goto label_1811e4;
        case 0x1811e8u: goto label_1811e8;
        case 0x1811ecu: goto label_1811ec;
        case 0x1811f0u: goto label_1811f0;
        case 0x1811f4u: goto label_1811f4;
        case 0x1811f8u: goto label_1811f8;
        case 0x1811fcu: goto label_1811fc;
        case 0x181200u: goto label_181200;
        case 0x181204u: goto label_181204;
        case 0x181208u: goto label_181208;
        case 0x18120cu: goto label_18120c;
        case 0x181210u: goto label_181210;
        case 0x181214u: goto label_181214;
        case 0x181218u: goto label_181218;
        case 0x18121cu: goto label_18121c;
        case 0x181220u: goto label_181220;
        case 0x181224u: goto label_181224;
        case 0x181228u: goto label_181228;
        case 0x18122cu: goto label_18122c;
        case 0x181230u: goto label_181230;
        case 0x181234u: goto label_181234;
        case 0x181238u: goto label_181238;
        case 0x18123cu: goto label_18123c;
        case 0x181240u: goto label_181240;
        case 0x181244u: goto label_181244;
        case 0x181248u: goto label_181248;
        case 0x18124cu: goto label_18124c;
        case 0x181250u: goto label_181250;
        case 0x181254u: goto label_181254;
        case 0x181258u: goto label_181258;
        case 0x18125cu: goto label_18125c;
        case 0x181260u: goto label_181260;
        case 0x181264u: goto label_181264;
        case 0x181268u: goto label_181268;
        case 0x18126cu: goto label_18126c;
        case 0x181270u: goto label_181270;
        case 0x181274u: goto label_181274;
        case 0x181278u: goto label_181278;
        case 0x18127cu: goto label_18127c;
        case 0x181280u: goto label_181280;
        case 0x181284u: goto label_181284;
        case 0x181288u: goto label_181288;
        case 0x18128cu: goto label_18128c;
        case 0x181290u: goto label_181290;
        case 0x181294u: goto label_181294;
        case 0x181298u: goto label_181298;
        case 0x18129cu: goto label_18129c;
        case 0x1812a0u: goto label_1812a0;
        case 0x1812a4u: goto label_1812a4;
        case 0x1812a8u: goto label_1812a8;
        case 0x1812acu: goto label_1812ac;
        case 0x1812b0u: goto label_1812b0;
        case 0x1812b4u: goto label_1812b4;
        case 0x1812b8u: goto label_1812b8;
        case 0x1812bcu: goto label_1812bc;
        case 0x1812c0u: goto label_1812c0;
        case 0x1812c4u: goto label_1812c4;
        case 0x1812c8u: goto label_1812c8;
        case 0x1812ccu: goto label_1812cc;
        case 0x1812d0u: goto label_1812d0;
        case 0x1812d4u: goto label_1812d4;
        case 0x1812d8u: goto label_1812d8;
        case 0x1812dcu: goto label_1812dc;
        case 0x1812e0u: goto label_1812e0;
        case 0x1812e4u: goto label_1812e4;
        case 0x1812e8u: goto label_1812e8;
        case 0x1812ecu: goto label_1812ec;
        case 0x1812f0u: goto label_1812f0;
        case 0x1812f4u: goto label_1812f4;
        case 0x1812f8u: goto label_1812f8;
        case 0x1812fcu: goto label_1812fc;
        case 0x181300u: goto label_181300;
        case 0x181304u: goto label_181304;
        case 0x181308u: goto label_181308;
        case 0x18130cu: goto label_18130c;
        case 0x181310u: goto label_181310;
        case 0x181314u: goto label_181314;
        case 0x181318u: goto label_181318;
        case 0x18131cu: goto label_18131c;
        case 0x181320u: goto label_181320;
        case 0x181324u: goto label_181324;
        case 0x181328u: goto label_181328;
        case 0x18132cu: goto label_18132c;
        case 0x181330u: goto label_181330;
        case 0x181334u: goto label_181334;
        case 0x181338u: goto label_181338;
        case 0x18133cu: goto label_18133c;
        case 0x181340u: goto label_181340;
        case 0x181344u: goto label_181344;
        case 0x181348u: goto label_181348;
        case 0x18134cu: goto label_18134c;
        case 0x181350u: goto label_181350;
        case 0x181354u: goto label_181354;
        case 0x181358u: goto label_181358;
        case 0x18135cu: goto label_18135c;
        case 0x181360u: goto label_181360;
        case 0x181364u: goto label_181364;
        case 0x181368u: goto label_181368;
        case 0x18136cu: goto label_18136c;
        case 0x181370u: goto label_181370;
        case 0x181374u: goto label_181374;
        case 0x181378u: goto label_181378;
        case 0x18137cu: goto label_18137c;
        case 0x181380u: goto label_181380;
        case 0x181384u: goto label_181384;
        case 0x181388u: goto label_181388;
        case 0x18138cu: goto label_18138c;
        case 0x181390u: goto label_181390;
        case 0x181394u: goto label_181394;
        case 0x181398u: goto label_181398;
        case 0x18139cu: goto label_18139c;
        case 0x1813a0u: goto label_1813a0;
        default: break;
    }

    ctx->pc = 0x180ae0u;

label_180ae0:
    // 0x180ae0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x180ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_180ae4:
    // 0x180ae4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x180ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_180ae8:
    // 0x180ae8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x180ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_180aec:
    // 0x180aec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x180aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_180af0:
    // 0x180af0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x180af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_180af4:
    // 0x180af4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_180af8:
    // 0x180af8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x180af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_180afc:
    // 0x180afc: 0x8c85005c  lw          $a1, 0x5C($a0)
    ctx->pc = 0x180afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_180b00:
    // 0x180b00: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_180b04:
    if (ctx->pc == 0x180B04u) {
        ctx->pc = 0x180B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B00u;
        // 0x180b04: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180B08u;
        goto label_180b08;
    }
    ctx->pc = 0x180B00u;
    {
        const bool branch_taken_0x180b00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x180B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B00u;
        // 0x180b04: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b00) {
            ctx->pc = 0x180B18u;
            goto label_180b18;
        }
    }
    ctx->pc = 0x180B08u;
label_180b08:
    // 0x180b08: 0x8ca40074  lw          $a0, 0x74($a1)
    ctx->pc = 0x180b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
label_180b0c:
    // 0x180b0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x180b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_180b10:
    // 0x180b10: 0x1083021d  beq         $a0, $v1, . + 4 + (0x21D << 2)
label_180b14:
    if (ctx->pc == 0x180B14u) {
        ctx->pc = 0x180B18u;
        goto label_180b18;
    }
    ctx->pc = 0x180B10u;
    {
        const bool branch_taken_0x180b10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x180b10) {
            ctx->pc = 0x181388u;
            goto label_181388;
        }
    }
    ctx->pc = 0x180B18u;
label_180b18:
    // 0x180b18: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x180b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_180b1c:
    // 0x180b1c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x180b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_180b20:
    // 0x180b20: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_180b24:
    if (ctx->pc == 0x180B24u) {
        ctx->pc = 0x180B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B20u;
        // 0x180b24: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180B28u;
        goto label_180b28;
    }
    ctx->pc = 0x180B20u;
    {
        const bool branch_taken_0x180b20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x180B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B20u;
        // 0x180b24: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b20) {
            ctx->pc = 0x180B30u;
            goto label_180b30;
        }
    }
    ctx->pc = 0x180B28u;
label_180b28:
    // 0x180b28: 0x10000217  b           . + 4 + (0x217 << 2)
label_180b2c:
    if (ctx->pc == 0x180B2Cu) {
        ctx->pc = 0x180B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B28u;
        // 0x180b2c: 0xaf83865c  sw          $v1, -0x79A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180B30u;
        goto label_180b30;
    }
    ctx->pc = 0x180B28u;
    {
        const bool branch_taken_0x180b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B28u;
        // 0x180b2c: 0xaf83865c  sw          $v1, -0x79A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b28) {
            ctx->pc = 0x181388u;
            goto label_181388;
        }
    }
    ctx->pc = 0x180B30u;
label_180b30:
    // 0x180b30: 0x83828684  lb          $v0, -0x797C($gp)
    ctx->pc = 0x180b30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936196)));
label_180b34:
    // 0x180b34: 0x144000e2  bnez        $v0, . + 4 + (0xE2 << 2)
label_180b38:
    if (ctx->pc == 0x180B38u) {
        ctx->pc = 0x180B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B34u;
        // 0x180b38: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180B3Cu;
        goto label_180b3c;
    }
    ctx->pc = 0x180B34u;
    {
        const bool branch_taken_0x180b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B34u;
        // 0x180b38: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b34) {
            ctx->pc = 0x180EC0u;
            goto label_180ec0;
        }
    }
    ctx->pc = 0x180B3Cu;
label_180b3c:
    // 0x180b3c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x180b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_180b40:
    // 0x180b40: 0xac208910  sw          $zero, -0x76F0($at)
    ctx->pc = 0x180b40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294936848), GPR_U32(ctx, 0));
label_180b44:
    // 0x180b44: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x180b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_180b48:
    // 0x180b48: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180b4c:
    // 0x180b4c: 0x34028009  ori         $v0, $zero, 0x8009
    ctx->pc = 0x180b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
label_180b50:
    // 0x180b50: 0xac208914  sw          $zero, -0x76EC($at)
    ctx->pc = 0x180b50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294936852), GPR_U32(ctx, 0));
label_180b54:
    // 0x180b54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x180b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_180b58:
    // 0x180b58: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180b5c:
    // 0x180b5c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x180b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_180b60:
    // 0x180b60: 0xfc2088f8  sd          $zero, -0x7708($at)
    ctx->pc = 0x180b60u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936824), GPR_U64(ctx, 0));
label_180b64:
    // 0x180b64: 0x2412fffe  addiu       $s2, $zero, -0x2
    ctx->pc = 0x180b64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_180b68:
    // 0x180b68: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180b6c:
    // 0x180b6c: 0x640a0001  daddiu      $t2, $zero, 0x1
    ctx->pc = 0x180b6cu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_180b70:
    // 0x180b70: 0xfc2288b0  sd          $v0, -0x7750($at)
    ctx->pc = 0x180b70u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936752), GPR_U64(ctx, 2));
label_180b74:
    // 0x180b74: 0x2408ffcf  addiu       $t0, $zero, -0x31
    ctx->pc = 0x180b74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
label_180b78:
    // 0x180b78: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180b7c:
    // 0x180b7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_180b80:
    // 0x180b80: 0xfc2388b8  sd          $v1, -0x7748($at)
    ctx->pc = 0x180b80u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936760), GPR_U64(ctx, 3));
label_180b84:
    // 0x180b84: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x180b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_180b88:
    // 0x180b88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180b8c:
    // 0x180b8c: 0x64060010  daddiu      $a2, $zero, 0x10
    ctx->pc = 0x180b8cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
label_180b90:
    // 0x180b90: 0xfc228908  sd          $v0, -0x76F8($at)
    ctx->pc = 0x180b90u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936840), GPR_U64(ctx, 2));
label_180b94:
    // 0x180b94: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x180b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
label_180b98:
    // 0x180b98: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180b9c:
    // 0x180b9c: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x180b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
label_180ba0:
    // 0x180ba0: 0x902b88d0  lbu         $t3, -0x7730($at)
    ctx->pc = 0x180ba0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936784)));
label_180ba4:
    // 0x180ba4: 0x23840  sll         $a3, $v0, 1
    ctx->pc = 0x180ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_180ba8:
    // 0x180ba8: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x180ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_180bac:
    // 0x180bac: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x180bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_180bb0:
    // 0x180bb0: 0x240dfff9  addiu       $t5, $zero, -0x7
    ctx->pc = 0x180bb0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_180bb4:
    // 0x180bb4: 0x640e0002  daddiu      $t6, $zero, 0x2
    ctx->pc = 0x180bb4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_180bb8:
    // 0x180bb8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180bbc:
    // 0x180bbc: 0x1725824  and         $t3, $t3, $s2
    ctx->pc = 0x180bbcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 18));
label_180bc0:
    // 0x180bc0: 0x902988d1  lbu         $t1, -0x772F($at)
    ctx->pc = 0x180bc0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936785)));
label_180bc4:
    // 0x180bc4: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x180bc4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
label_180bc8:
    // 0x180bc8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180bcc:
    // 0x180bcc: 0x1284824  and         $t1, $t1, $t0
    ctx->pc = 0x180bccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
label_180bd0:
    // 0x180bd0: 0x902f88d2  lbu         $t7, -0x772E($at)
    ctx->pc = 0x180bd0u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936786)));
label_180bd4:
    // 0x180bd4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180bd8:
    // 0x180bd8: 0x1f27824  and         $t7, $t7, $s2
    ctx->pc = 0x180bd8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 18));
label_180bdc:
    // 0x180bdc: 0x902c88f0  lbu         $t4, -0x7710($at)
    ctx->pc = 0x180bdcu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936816)));
label_180be0:
    // 0x180be0: 0x1ea7825  or          $t7, $t7, $t2
    ctx->pc = 0x180be0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
label_180be4:
    // 0x180be4: 0x240aff7f  addiu       $t2, $zero, -0x81
    ctx->pc = 0x180be4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_180be8:
    // 0x180be8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180bec:
    // 0x180bec: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x180becu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
label_180bf0:
    // 0x180bf0: 0xa02b88d0  sb          $t3, -0x7730($at)
    ctx->pc = 0x180bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936784), (uint8_t)GPR_U32(ctx, 11));
label_180bf4:
    // 0x180bf4: 0x3c0c3f80  lui         $t4, 0x3F80
    ctx->pc = 0x180bf4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16256 << 16));
label_180bf8:
    // 0x180bf8: 0x1265825  or          $t3, $t1, $a2
    ctx->pc = 0x180bf8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
label_180bfc:
    // 0x180bfc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180c00:
    // 0x180c00: 0x902988d0  lbu         $t1, -0x7730($at)
    ctx->pc = 0x180c00u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936784)));
label_180c04:
    // 0x180c04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180c08:
    // 0x180c08: 0x1252824  and         $a1, $t1, $a1
    ctx->pc = 0x180c08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
label_180c0c:
    // 0x180c0c: 0xa02b88d1  sb          $t3, -0x772F($at)
    ctx->pc = 0x180c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936785), (uint8_t)GPR_U32(ctx, 11));
label_180c10:
    // 0x180c10: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x180c10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_180c14:
    // 0x180c14: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180c18:
    // 0x180c18: 0x459c0  sll         $t3, $a0, 7
    ctx->pc = 0x180c18u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_180c1c:
    // 0x180c1c: 0x903288d1  lbu         $s2, -0x772F($at)
    ctx->pc = 0x180c1cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936785)));
label_180c20:
    // 0x180c20: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x180c20u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
label_180c24:
    // 0x180c24: 0x64070040  daddiu      $a3, $zero, 0x40
    ctx->pc = 0x180c24u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
label_180c28:
    // 0x180c28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180c2c:
    // 0x180c2c: 0xa02f88d2  sb          $t7, -0x772E($at)
    ctx->pc = 0x180c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936786), (uint8_t)GPR_U32(ctx, 15));
label_180c30:
    // 0x180c30: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180c34:
    // 0x180c34: 0x902b88d2  lbu         $t3, -0x772E($at)
    ctx->pc = 0x180c34u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936786)));
label_180c38:
    // 0x180c38: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180c3c:
    // 0x180c3c: 0xa02a88f0  sb          $t2, -0x7710($at)
    ctx->pc = 0x180c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936816), (uint8_t)GPR_U32(ctx, 10));
label_180c40:
    // 0x180c40: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180c44:
    // 0x180c44: 0x902a88f0  lbu         $t2, -0x7710($at)
    ctx->pc = 0x180c44u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936816)));
label_180c48:
    // 0x180c48: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180c4c:
    // 0x180c4c: 0xa02588d0  sb          $a1, -0x7730($at)
    ctx->pc = 0x180c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936784), (uint8_t)GPR_U32(ctx, 5));
label_180c50:
    // 0x180c50: 0x2422824  and         $a1, $s2, $v0
    ctx->pc = 0x180c50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_180c54:
    // 0x180c54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180c58:
    // 0x180c58: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x180c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_180c5c:
    // 0x180c5c: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x180c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
label_180c60:
    // 0x180c60: 0xa02388d1  sb          $v1, -0x772F($at)
    ctx->pc = 0x180c60u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936785), (uint8_t)GPR_U32(ctx, 3));
label_180c64:
    // 0x180c64: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x180c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_180c68:
    // 0x180c68: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180c6c:
    // 0x180c6c: 0x16d1824  and         $v1, $t3, $t5
    ctx->pc = 0x180c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 13));
label_180c70:
    // 0x180c70: 0x902988f1  lbu         $t1, -0x770F($at)
    ctx->pc = 0x180c70u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936817)));
label_180c74:
    // 0x180c74: 0x6e5825  or          $t3, $v1, $t6
    ctx->pc = 0x180c74u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
label_180c78:
    // 0x180c78: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x180c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_180c7c:
    // 0x180c7c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x180c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_180c80:
    // 0x180c80: 0x45140  sll         $t2, $a0, 5
    ctx->pc = 0x180c80u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_180c84:
    // 0x180c84: 0x46880  sll         $t5, $a0, 2
    ctx->pc = 0x180c84u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_180c88:
    // 0x180c88: 0x64040006  daddiu      $a0, $zero, 0x6
    ctx->pc = 0x180c88u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
label_180c8c:
    // 0x180c8c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180c90:
    // 0x180c90: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x180c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_180c94:
    // 0x180c94: 0xa02b88d2  sb          $t3, -0x772E($at)
    ctx->pc = 0x180c94u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936786), (uint8_t)GPR_U32(ctx, 11));
label_180c98:
    // 0x180c98: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x180c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_180c9c:
    // 0x180c9c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180ca0:
    // 0x180ca0: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x180ca0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_180ca4:
    // 0x180ca4: 0xa02288f0  sb          $v0, -0x7710($at)
    ctx->pc = 0x180ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936816), (uint8_t)GPR_U32(ctx, 2));
label_180ca8:
    // 0x180ca8: 0x240bfffb  addiu       $t3, $zero, -0x5
    ctx->pc = 0x180ca8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_180cac:
    // 0x180cac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180cb0:
    // 0x180cb0: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x180cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_180cb4:
    // 0x180cb4: 0x902f88f0  lbu         $t7, -0x7710($at)
    ctx->pc = 0x180cb4u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936816)));
label_180cb8:
    // 0x180cb8: 0x2405ffef  addiu       $a1, $zero, -0x11
    ctx->pc = 0x180cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_180cbc:
    // 0x180cbc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180cc0:
    // 0x180cc0: 0x1e21024  and         $v0, $t7, $v0
    ctx->pc = 0x180cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & GPR_U64(ctx, 2));
label_180cc4:
    // 0x180cc4: 0xa02388f1  sb          $v1, -0x770F($at)
    ctx->pc = 0x180cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936817), (uint8_t)GPR_U32(ctx, 3));
label_180cc8:
    // 0x180cc8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x180cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_180ccc:
    // 0x180ccc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180cd0:
    // 0x180cd0: 0x240a7000  addiu       $t2, $zero, 0x7000
    ctx->pc = 0x180cd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
label_180cd4:
    // 0x180cd4: 0x902e88f1  lbu         $t6, -0x770F($at)
    ctx->pc = 0x180cd4u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936817)));
label_180cd8:
    // 0x180cd8: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x180cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_180cdc:
    // 0x180cdc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180ce0:
    // 0x180ce0: 0x1cb5824  and         $t3, $t6, $t3
    ctx->pc = 0x180ce0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 11));
label_180ce4:
    // 0x180ce4: 0xa0298900  sb          $t1, -0x7700($at)
    ctx->pc = 0x180ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936832), (uint8_t)GPR_U32(ctx, 9));
label_180ce8:
    // 0x180ce8: 0x16d5825  or          $t3, $t3, $t5
    ctx->pc = 0x180ce8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 13));
label_180cec:
    // 0x180cec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180cf0:
    // 0x180cf0: 0x240dfffc  addiu       $t5, $zero, -0x4
    ctx->pc = 0x180cf0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_180cf4:
    // 0x180cf4: 0xa0298901  sb          $t1, -0x76FF($at)
    ctx->pc = 0x180cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936833), (uint8_t)GPR_U32(ctx, 9));
label_180cf8:
    // 0x180cf8: 0x300e0003  andi        $t6, $zero, 0x3
    ctx->pc = 0x180cf8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
label_180cfc:
    // 0x180cfc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180d00:
    // 0x180d00: 0xa02288f0  sb          $v0, -0x7710($at)
    ctx->pc = 0x180d00u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936816), (uint8_t)GPR_U32(ctx, 2));
label_180d04:
    // 0x180d04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180d08:
    // 0x180d08: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x180d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_180d0c:
    // 0x180d0c: 0xa0298902  sb          $t1, -0x76FE($at)
    ctx->pc = 0x180d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936834), (uint8_t)GPR_U32(ctx, 9));
label_180d10:
    // 0x180d10: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180d14:
    // 0x180d14: 0xa0298903  sb          $t1, -0x76FD($at)
    ctx->pc = 0x180d14u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936835), (uint8_t)GPR_U32(ctx, 9));
label_180d18:
    // 0x180d18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180d1c:
    // 0x180d1c: 0xa02988e4  sb          $t1, -0x771C($at)
    ctx->pc = 0x180d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936804), (uint8_t)GPR_U32(ctx, 9));
label_180d20:
    // 0x180d20: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180d24:
    // 0x180d24: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x180d24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_180d28:
    // 0x180d28: 0xa02b88f1  sb          $t3, -0x770F($at)
    ctx->pc = 0x180d28u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936817), (uint8_t)GPR_U32(ctx, 11));
label_180d2c:
    // 0x180d2c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180d30:
    // 0x180d30: 0x9583c  dsll32      $t3, $t1, 0
    ctx->pc = 0x180d30u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) << (32 + 0));
label_180d34:
    // 0x180d34: 0xac2c8904  sw          $t4, -0x76FC($at)
    ctx->pc = 0x180d34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294936836), GPR_U32(ctx, 12));
label_180d38:
    // 0x180d38: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x180d38u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_180d3c:
    // 0x180d3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180d40:
    // 0x180d40: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x180d40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
label_180d44:
    // 0x180d44: 0xa42a8920  sh          $t2, -0x76E0($at)
    ctx->pc = 0x180d44u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294936864), (uint16_t)GPR_U32(ctx, 10));
label_180d48:
    // 0x180d48: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180d4c:
    // 0x180d4c: 0xa42a8922  sh          $t2, -0x76DE($at)
    ctx->pc = 0x180d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294936866), (uint16_t)GPR_U32(ctx, 10));
label_180d50:
    // 0x180d50: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180d54:
    // 0x180d54: 0x352affff  ori         $t2, $t1, 0xFFFF
    ctx->pc = 0x180d54u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_180d58:
    // 0x180d58: 0xac2c8930  sw          $t4, -0x76D0($at)
    ctx->pc = 0x180d58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294936880), GPR_U32(ctx, 12));
label_180d5c:
    // 0x180d5c: 0x14b4825  or          $t1, $t2, $t3
    ctx->pc = 0x180d5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
label_180d60:
    // 0x180d60: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180d64:
    // 0x180d64: 0xac2c8934  sw          $t4, -0x76CC($at)
    ctx->pc = 0x180d64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294936884), GPR_U32(ctx, 12));
label_180d68:
    // 0x180d68: 0x712a7b89  pcpyld      $t7, $t1, $t2
    ctx->pc = 0x180d68u;
    SET_GPR_VEC(ctx, 15, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
label_180d6c:
    // 0x180d6c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180d70:
    // 0x180d70: 0x34099000  ori         $t1, $zero, 0x9000
    ctx->pc = 0x180d70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
label_180d74:
    // 0x180d74: 0x903288f0  lbu         $s2, -0x7710($at)
    ctx->pc = 0x180d74u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936816)));
label_180d78:
    // 0x180d78: 0x640c0008  daddiu      $t4, $zero, 0x8
    ctx->pc = 0x180d78u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
label_180d7c:
    // 0x180d7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180d80:
    // 0x180d80: 0x2452824  and         $a1, $s2, $a1
    ctx->pc = 0x180d80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 5));
label_180d84:
    // 0x180d84: 0xdc2b8920  ld          $t3, -0x76E0($at)
    ctx->pc = 0x180d84u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 1), 4294936864)));
label_180d88:
    // 0x180d88: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x180d88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_180d8c:
    // 0x180d8c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180d90:
    // 0x180d90: 0x16f2824  and         $a1, $t3, $t7
    ctx->pc = 0x180d90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & GPR_U64(ctx, 15));
label_180d94:
    // 0x180d94: 0xa4298940  sh          $t1, -0x76C0($at)
    ctx->pc = 0x180d94u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294936896), (uint16_t)GPR_U32(ctx, 9));
label_180d98:
    // 0x180d98: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x180d98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_180d9c:
    // 0x180d9c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180da0:
    // 0x180da0: 0x240bfff3  addiu       $t3, $zero, -0xD
    ctx->pc = 0x180da0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_180da4:
    // 0x180da4: 0xa4298942  sh          $t1, -0x76BE($at)
    ctx->pc = 0x180da4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294936898), (uint16_t)GPR_U32(ctx, 9));
label_180da8:
    // 0x180da8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180dac:
    // 0x180dac: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x180dacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_180db0:
    // 0x180db0: 0xdc2a8940  ld          $t2, -0x76C0($at)
    ctx->pc = 0x180db0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 1), 4294936896)));
label_180db4:
    // 0x180db4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180db8:
    // 0x180db8: 0xfc298918  sd          $t1, -0x76E8($at)
    ctx->pc = 0x180db8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936856), GPR_U64(ctx, 9));
label_180dbc:
    // 0x180dbc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180dc0:
    // 0x180dc0: 0xfc298938  sd          $t1, -0x76C8($at)
    ctx->pc = 0x180dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936888), GPR_U64(ctx, 9));
label_180dc4:
    // 0x180dc4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180dc8:
    // 0x180dc8: 0x2409ff3f  addiu       $t1, $zero, -0xC1
    ctx->pc = 0x180dc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_180dcc:
    // 0x180dcc: 0xa02688f0  sb          $a2, -0x7710($at)
    ctx->pc = 0x180dccu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936816), (uint8_t)GPR_U32(ctx, 6));
label_180dd0:
    // 0x180dd0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180dd4:
    // 0x180dd4: 0xfc258920  sd          $a1, -0x76E0($at)
    ctx->pc = 0x180dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936864), GPR_U64(ctx, 5));
label_180dd8:
    // 0x180dd8: 0x14f2824  and         $a1, $t2, $t7
    ctx->pc = 0x180dd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & GPR_U64(ctx, 15));
label_180ddc:
    // 0x180ddc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180de0:
    // 0x180de0: 0x902f88f0  lbu         $t7, -0x7710($at)
    ctx->pc = 0x180de0u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936816)));
label_180de4:
    // 0x180de4: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x180de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_180de8:
    // 0x180de8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x180de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_180dec:
    // 0x180dec: 0xe5100  sll         $t2, $t6, 4
    ctx->pc = 0x180decu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
label_180df0:
    // 0x180df0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180df4:
    // 0x180df4: 0x902688e0  lbu         $a2, -0x7720($at)
    ctx->pc = 0x180df4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936800)));
label_180df8:
    // 0x180df8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180dfc:
    // 0x180dfc: 0xfc228940  sd          $v0, -0x76C0($at)
    ctx->pc = 0x180dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936896), GPR_U64(ctx, 2));
label_180e00:
    // 0x180e00: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x180e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_180e04:
    // 0x180e04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180e08:
    // 0x180e08: 0xfc2288c8  sd          $v0, -0x7738($at)
    ctx->pc = 0x180e08u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936776), GPR_U64(ctx, 2));
label_180e0c:
    // 0x180e0c: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x180e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_180e10:
    // 0x180e10: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180e14:
    // 0x180e14: 0xfc2288d8  sd          $v0, -0x7728($at)
    ctx->pc = 0x180e14u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936792), GPR_U64(ctx, 2));
label_180e18:
    // 0x180e18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180e1c:
    // 0x180e1c: 0x1e31024  and         $v0, $t7, $v1
    ctx->pc = 0x180e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & GPR_U64(ctx, 3));
label_180e20:
    // 0x180e20: 0xfc258928  sd          $a1, -0x76D8($at)
    ctx->pc = 0x180e20u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936872), GPR_U64(ctx, 5));
label_180e24:
    // 0x180e24: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x180e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_180e28:
    // 0x180e28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180e2c:
    // 0x180e2c: 0xcd1024  and         $v0, $a2, $t5
    ctx->pc = 0x180e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 13));
label_180e30:
    // 0x180e30: 0xa02388f0  sb          $v1, -0x7710($at)
    ctx->pc = 0x180e30u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936816), (uint8_t)GPR_U32(ctx, 3));
label_180e34:
    // 0x180e34: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x180e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_180e38:
    // 0x180e38: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x180e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
label_180e3c:
    // 0x180e3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180e40:
    // 0x180e40: 0xa02288e0  sb          $v0, -0x7720($at)
    ctx->pc = 0x180e40u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936800), (uint8_t)GPR_U32(ctx, 2));
label_180e44:
    // 0x180e44: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x180e44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_180e48:
    // 0x180e48: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180e4c:
    // 0x180e4c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x180e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_180e50:
    // 0x180e50: 0xfc258948  sd          $a1, -0x76B8($at)
    ctx->pc = 0x180e50u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936904), GPR_U64(ctx, 5));
label_180e54:
    // 0x180e54: 0x248488b0  addiu       $a0, $a0, -0x7750
    ctx->pc = 0x180e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936752));
label_180e58:
    // 0x180e58: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180e5c:
    // 0x180e5c: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x180e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
label_180e60:
    // 0x180e60: 0xfc2288e8  sd          $v0, -0x7718($at)
    ctx->pc = 0x180e60u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936808), GPR_U64(ctx, 2));
label_180e64:
    // 0x180e64: 0x24a51400  addiu       $a1, $a1, 0x1400
    ctx->pc = 0x180e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5120));
label_180e68:
    // 0x180e68: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180e6c:
    // 0x180e6c: 0x24c688a0  addiu       $a2, $a2, -0x7760
    ctx->pc = 0x180e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936736));
label_180e70:
    // 0x180e70: 0x902288e0  lbu         $v0, -0x7720($at)
    ctx->pc = 0x180e70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936800)));
label_180e74:
    // 0x180e74: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x180e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
label_180e78:
    // 0x180e78: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180e7c:
    // 0x180e7c: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x180e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
label_180e80:
    // 0x180e80: 0xa02288e0  sb          $v0, -0x7720($at)
    ctx->pc = 0x180e80u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936800), (uint8_t)GPR_U32(ctx, 2));
label_180e84:
    // 0x180e84: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180e88:
    // 0x180e88: 0x902288e0  lbu         $v0, -0x7720($at)
    ctx->pc = 0x180e88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936800)));
label_180e8c:
    // 0x180e8c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x180e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_180e90:
    // 0x180e90: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180e94:
    // 0x180e94: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x180e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_180e98:
    // 0x180e98: 0xa02288e0  sb          $v0, -0x7720($at)
    ctx->pc = 0x180e98u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936800), (uint8_t)GPR_U32(ctx, 2));
label_180e9c:
    // 0x180e9c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180ea0:
    // 0x180ea0: 0x902288e0  lbu         $v0, -0x7720($at)
    ctx->pc = 0x180ea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936800)));
label_180ea4:
    // 0x180ea4: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x180ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_180ea8:
    // 0x180ea8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180eac:
    // 0x180eac: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x180eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_180eb0:
    // 0x180eb0: 0xc07a540  jal         func_1E9500
label_180eb4:
    if (ctx->pc == 0x180EB4u) {
        ctx->pc = 0x180EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180EB0u;
        // 0x180eb4: 0xa02288e0  sb          $v0, -0x7720($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294936800), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180EB8u;
        goto label_180eb8;
    }
    ctx->pc = 0x180EB0u;
    SET_GPR_U32(ctx, 31, 0x180EB8u);
    ctx->pc = 0x180EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180EB0u;
    // 0x180eb4: 0xa02288e0  sb          $v0, -0x7720($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936800), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x180EB0u, 0x180EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180EB8u;
label_180eb8:
    // 0x180eb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_180ebc:
    // 0x180ebc: 0xa3828684  sb          $v0, -0x797C($gp)
    ctx->pc = 0x180ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936196), (uint8_t)GPR_U32(ctx, 2));
label_180ec0:
    // 0x180ec0: 0x83828688  lb          $v0, -0x7978($gp)
    ctx->pc = 0x180ec0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936200)));
label_180ec4:
    // 0x180ec4: 0x144000e2  bnez        $v0, . + 4 + (0xE2 << 2)
label_180ec8:
    if (ctx->pc == 0x180EC8u) {
        ctx->pc = 0x180EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180EC4u;
        // 0x180ec8: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180ECCu;
        goto label_180ecc;
    }
    ctx->pc = 0x180EC4u;
    {
        const bool branch_taken_0x180ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180EC4u;
        // 0x180ec8: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ec4) {
            ctx->pc = 0x181250u;
            goto label_181250;
        }
    }
    ctx->pc = 0x180ECCu;
label_180ecc:
    // 0x180ecc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x180eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_180ed0:
    // 0x180ed0: 0xac2089c0  sw          $zero, -0x7640($at)
    ctx->pc = 0x180ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937024), GPR_U32(ctx, 0));
label_180ed4:
    // 0x180ed4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x180ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_180ed8:
    // 0x180ed8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180edc:
    // 0x180edc: 0x34028009  ori         $v0, $zero, 0x8009
    ctx->pc = 0x180edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
label_180ee0:
    // 0x180ee0: 0xac2089c4  sw          $zero, -0x763C($at)
    ctx->pc = 0x180ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937028), GPR_U32(ctx, 0));
label_180ee4:
    // 0x180ee4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x180ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_180ee8:
    // 0x180ee8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180eec:
    // 0x180eec: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x180eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_180ef0:
    // 0x180ef0: 0xfc2089a8  sd          $zero, -0x7658($at)
    ctx->pc = 0x180ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937000), GPR_U64(ctx, 0));
label_180ef4:
    // 0x180ef4: 0x2412fffe  addiu       $s2, $zero, -0x2
    ctx->pc = 0x180ef4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_180ef8:
    // 0x180ef8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180efc:
    // 0x180efc: 0x64080001  daddiu      $t0, $zero, 0x1
    ctx->pc = 0x180efcu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_180f00:
    // 0x180f00: 0xfc228960  sd          $v0, -0x76A0($at)
    ctx->pc = 0x180f00u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936928), GPR_U64(ctx, 2));
label_180f04:
    // 0x180f04: 0x240bffcf  addiu       $t3, $zero, -0x31
    ctx->pc = 0x180f04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
label_180f08:
    // 0x180f08: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180f0c:
    // 0x180f0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_180f10:
    // 0x180f10: 0xfc238968  sd          $v1, -0x7698($at)
    ctx->pc = 0x180f10u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936936), GPR_U64(ctx, 3));
label_180f14:
    // 0x180f14: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x180f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_180f18:
    // 0x180f18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180f1c:
    // 0x180f1c: 0x640c0010  daddiu      $t4, $zero, 0x10
    ctx->pc = 0x180f1cu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
label_180f20:
    // 0x180f20: 0xfc2289b8  sd          $v0, -0x7648($at)
    ctx->pc = 0x180f20u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937016), GPR_U64(ctx, 2));
label_180f24:
    // 0x180f24: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x180f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
label_180f28:
    // 0x180f28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180f2c:
    // 0x180f2c: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x180f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
label_180f30:
    // 0x180f30: 0x90298980  lbu         $t1, -0x7680($at)
    ctx->pc = 0x180f30u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936960)));
label_180f34:
    // 0x180f34: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x180f34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_180f38:
    // 0x180f38: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x180f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_180f3c:
    // 0x180f3c: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x180f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_180f40:
    // 0x180f40: 0x240efff9  addiu       $t6, $zero, -0x7
    ctx->pc = 0x180f40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_180f44:
    // 0x180f44: 0x640a0002  daddiu      $t2, $zero, 0x2
    ctx->pc = 0x180f44u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_180f48:
    // 0x180f48: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180f4c:
    // 0x180f4c: 0x1324824  and         $t1, $t1, $s2
    ctx->pc = 0x180f4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 18));
label_180f50:
    // 0x180f50: 0x90278981  lbu         $a3, -0x767F($at)
    ctx->pc = 0x180f50u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936961)));
label_180f54:
    // 0x180f54: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x180f54u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
label_180f58:
    // 0x180f58: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180f5c:
    // 0x180f5c: 0xeb3824  and         $a3, $a3, $t3
    ctx->pc = 0x180f5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
label_180f60:
    // 0x180f60: 0x902f8982  lbu         $t7, -0x767E($at)
    ctx->pc = 0x180f60u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936962)));
label_180f64:
    // 0x180f64: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180f68:
    // 0x180f68: 0x1f27824  and         $t7, $t7, $s2
    ctx->pc = 0x180f68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 18));
label_180f6c:
    // 0x180f6c: 0x902d89a0  lbu         $t5, -0x7660($at)
    ctx->pc = 0x180f6cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936992)));
label_180f70:
    // 0x180f70: 0x1e87825  or          $t7, $t7, $t0
    ctx->pc = 0x180f70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 8));
label_180f74:
    // 0x180f74: 0x2408ff7f  addiu       $t0, $zero, -0x81
    ctx->pc = 0x180f74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_180f78:
    // 0x180f78: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180f7c:
    // 0x180f7c: 0x1a84024  and         $t0, $t5, $t0
    ctx->pc = 0x180f7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) & GPR_U64(ctx, 8));
label_180f80:
    // 0x180f80: 0xa0298980  sb          $t1, -0x7680($at)
    ctx->pc = 0x180f80u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936960), (uint8_t)GPR_U32(ctx, 9));
label_180f84:
    // 0x180f84: 0xec4825  or          $t1, $a3, $t4
    ctx->pc = 0x180f84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | GPR_U64(ctx, 12));
label_180f88:
    // 0x180f88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180f8c:
    // 0x180f8c: 0x90278980  lbu         $a3, -0x7680($at)
    ctx->pc = 0x180f8cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936960)));
label_180f90:
    // 0x180f90: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180f94:
    // 0x180f94: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x180f94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
label_180f98:
    // 0x180f98: 0xa0298981  sb          $t1, -0x767F($at)
    ctx->pc = 0x180f98u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936961), (uint8_t)GPR_U32(ctx, 9));
label_180f9c:
    // 0x180f9c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x180f9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_180fa0:
    // 0x180fa0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180fa4:
    // 0x180fa4: 0x449c0  sll         $t1, $a0, 7
    ctx->pc = 0x180fa4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_180fa8:
    // 0x180fa8: 0x90328981  lbu         $s2, -0x767F($at)
    ctx->pc = 0x180fa8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936961)));
label_180fac:
    // 0x180fac: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x180facu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_180fb0:
    // 0x180fb0: 0x64090040  daddiu      $t1, $zero, 0x40
    ctx->pc = 0x180fb0u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
label_180fb4:
    // 0x180fb4: 0x43840  sll         $a3, $a0, 1
    ctx->pc = 0x180fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_180fb8:
    // 0x180fb8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180fbc:
    // 0x180fbc: 0xa02f8982  sb          $t7, -0x767E($at)
    ctx->pc = 0x180fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936962), (uint8_t)GPR_U32(ctx, 15));
label_180fc0:
    // 0x180fc0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180fc4:
    // 0x180fc4: 0x902d8982  lbu         $t5, -0x767E($at)
    ctx->pc = 0x180fc4u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936962)));
label_180fc8:
    // 0x180fc8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180fcc:
    // 0x180fcc: 0xa02889a0  sb          $t0, -0x7660($at)
    ctx->pc = 0x180fccu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936992), (uint8_t)GPR_U32(ctx, 8));
label_180fd0:
    // 0x180fd0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180fd4:
    // 0x180fd4: 0x902689a0  lbu         $a2, -0x7660($at)
    ctx->pc = 0x180fd4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936992)));
label_180fd8:
    // 0x180fd8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180fdc:
    // 0x180fdc: 0xa0258980  sb          $a1, -0x7680($at)
    ctx->pc = 0x180fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936960), (uint8_t)GPR_U32(ctx, 5));
label_180fe0:
    // 0x180fe0: 0x2422824  and         $a1, $s2, $v0
    ctx->pc = 0x180fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_180fe4:
    // 0x180fe4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180fe8:
    // 0x180fe8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x180fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_180fec:
    // 0x180fec: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x180fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_180ff0:
    // 0x180ff0: 0xa0238981  sb          $v1, -0x767F($at)
    ctx->pc = 0x180ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936961), (uint8_t)GPR_U32(ctx, 3));
label_180ff4:
    // 0x180ff4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x180ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_180ff8:
    // 0x180ff8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_180ffc:
    // 0x180ffc: 0x1ae1824  and         $v1, $t5, $t6
    ctx->pc = 0x180ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & GPR_U64(ctx, 14));
label_181000:
    // 0x181000: 0x902889a1  lbu         $t0, -0x765F($at)
    ctx->pc = 0x181000u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936993)));
label_181004:
    // 0x181004: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x181004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
label_181008:
    // 0x181008: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x181008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_18100c:
    // 0x18100c: 0x43140  sll         $a2, $a0, 5
    ctx->pc = 0x18100cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_181010:
    // 0x181010: 0x47080  sll         $t6, $a0, 2
    ctx->pc = 0x181010u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_181014:
    // 0x181014: 0x3c0d3f80  lui         $t5, 0x3F80
    ctx->pc = 0x181014u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)16256 << 16));
label_181018:
    // 0x181018: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x181018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_18101c:
    // 0x18101c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18101cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181020:
    // 0x181020: 0xa0238982  sb          $v1, -0x767E($at)
    ctx->pc = 0x181020u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936962), (uint8_t)GPR_U32(ctx, 3));
label_181024:
    // 0x181024: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181028:
    // 0x181028: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x181028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_18102c:
    // 0x18102c: 0xa02289a0  sb          $v0, -0x7660($at)
    ctx->pc = 0x18102cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936992), (uint8_t)GPR_U32(ctx, 2));
label_181030:
    // 0x181030: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181034:
    // 0x181034: 0x1051024  and         $v0, $t0, $a1
    ctx->pc = 0x181034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
label_181038:
    // 0x181038: 0x903289a0  lbu         $s2, -0x7660($at)
    ctx->pc = 0x181038u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936992)));
label_18103c:
    // 0x18103c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x18103cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_181040:
    // 0x181040: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x181040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_181044:
    // 0x181044: 0x2407fff8  addiu       $a3, $zero, -0x8
    ctx->pc = 0x181044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_181048:
    // 0x181048: 0x64080006  daddiu      $t0, $zero, 0x6
    ctx->pc = 0x181048u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
label_18104c:
    // 0x18104c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18104cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181050:
    // 0x181050: 0x2431824  and         $v1, $s2, $v1
    ctx->pc = 0x181050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
label_181054:
    // 0x181054: 0xa02289a1  sb          $v0, -0x765F($at)
    ctx->pc = 0x181054u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936993), (uint8_t)GPR_U32(ctx, 2));
label_181058:
    // 0x181058: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x181058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_18105c:
    // 0x18105c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18105cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181060:
    // 0x181060: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x181060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_181064:
    // 0x181064: 0x902f89a1  lbu         $t7, -0x765F($at)
    ctx->pc = 0x181064u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936993)));
label_181068:
    // 0x181068: 0xc303c  dsll32      $a2, $t4, 0
    ctx->pc = 0x181068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) << (32 + 0));
label_18106c:
    // 0x18106c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18106cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181070:
    // 0x181070: 0x1e52824  and         $a1, $t7, $a1
    ctx->pc = 0x181070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) & GPR_U64(ctx, 5));
label_181074:
    // 0x181074: 0xa02289b0  sb          $v0, -0x7650($at)
    ctx->pc = 0x181074u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937008), (uint8_t)GPR_U32(ctx, 2));
label_181078:
    // 0x181078: 0xae2825  or          $a1, $a1, $t6
    ctx->pc = 0x181078u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 14));
label_18107c:
    // 0x18107c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18107cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181080:
    // 0x181080: 0xa02289b1  sb          $v0, -0x764F($at)
    ctx->pc = 0x181080u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937009), (uint8_t)GPR_U32(ctx, 2));
label_181084:
    // 0x181084: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181088:
    // 0x181088: 0xa02389a0  sb          $v1, -0x7660($at)
    ctx->pc = 0x181088u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936992), (uint8_t)GPR_U32(ctx, 3));
label_18108c:
    // 0x18108c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18108cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181090:
    // 0x181090: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x181090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
label_181094:
    // 0x181094: 0xa02289b2  sb          $v0, -0x764E($at)
    ctx->pc = 0x181094u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937010), (uint8_t)GPR_U32(ctx, 2));
label_181098:
    // 0x181098: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18109c:
    // 0x18109c: 0xa02289b3  sb          $v0, -0x764D($at)
    ctx->pc = 0x18109cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937011), (uint8_t)GPR_U32(ctx, 2));
label_1810a0:
    // 0x1810a0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1810a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1810a4:
    // 0x1810a4: 0xa0228994  sb          $v0, -0x766C($at)
    ctx->pc = 0x1810a4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936980), (uint8_t)GPR_U32(ctx, 2));
label_1810a8:
    // 0x1810a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1810a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1810ac:
    // 0x1810ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1810acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1810b0:
    // 0x1810b0: 0xa02589a1  sb          $a1, -0x765F($at)
    ctx->pc = 0x1810b0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936993), (uint8_t)GPR_U32(ctx, 5));
label_1810b4:
    // 0x1810b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1810b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1810b8:
    // 0x1810b8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1810b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_1810bc:
    // 0x1810bc: 0xac2d89b4  sw          $t5, -0x764C($at)
    ctx->pc = 0x1810bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937012), GPR_U32(ctx, 13));
label_1810c0:
    // 0x1810c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1810c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1810c4:
    // 0x1810c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1810c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1810c8:
    // 0x1810c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1810c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1810cc:
    // 0x1810cc: 0xa42389d0  sh          $v1, -0x7630($at)
    ctx->pc = 0x1810ccu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937040), (uint16_t)GPR_U32(ctx, 3));
label_1810d0:
    // 0x1810d0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1810d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1810d4:
    // 0x1810d4: 0xa42389d2  sh          $v1, -0x762E($at)
    ctx->pc = 0x1810d4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937042), (uint16_t)GPR_U32(ctx, 3));
label_1810d8:
    // 0x1810d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1810d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1810dc:
    // 0x1810dc: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1810dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1810e0:
    // 0x1810e0: 0xac2d89e0  sw          $t5, -0x7620($at)
    ctx->pc = 0x1810e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937056), GPR_U32(ctx, 13));
label_1810e4:
    // 0x1810e4: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x1810e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_1810e8:
    // 0x1810e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1810e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1810ec:
    // 0x1810ec: 0xac2d89e4  sw          $t5, -0x761C($at)
    ctx->pc = 0x1810ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937060), GPR_U32(ctx, 13));
label_1810f0:
    // 0x1810f0: 0x70432b89  pcpyld      $a1, $v0, $v1
    ctx->pc = 0x1810f0u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_1810f4:
    // 0x1810f4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1810f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1810f8:
    // 0x1810f8: 0x34039000  ori         $v1, $zero, 0x9000
    ctx->pc = 0x1810f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
label_1810fc:
    // 0x1810fc: 0x902e89a0  lbu         $t6, -0x7660($at)
    ctx->pc = 0x1810fcu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936992)));
label_181100:
    // 0x181100: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x181100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_181104:
    // 0x181104: 0x300d0003  andi        $t5, $zero, 0x3
    ctx->pc = 0x181104u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
label_181108:
    // 0x181108: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18110c:
    // 0x18110c: 0x1c42024  and         $a0, $t6, $a0
    ctx->pc = 0x18110cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) & GPR_U64(ctx, 4));
label_181110:
    // 0x181110: 0xdc2f89d0  ld          $t7, -0x7630($at)
    ctx->pc = 0x181110u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 1), 4294937040)));
label_181114:
    // 0x181114: 0x8c6025  or          $t4, $a0, $t4
    ctx->pc = 0x181114u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) | GPR_U64(ctx, 12));
label_181118:
    // 0x181118: 0xd7100  sll         $t6, $t5, 4
    ctx->pc = 0x181118u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
label_18111c:
    // 0x18111c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18111cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181120:
    // 0x181120: 0x1e52024  and         $a0, $t7, $a1
    ctx->pc = 0x181120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) & GPR_U64(ctx, 5));
label_181124:
    // 0x181124: 0xa42389f0  sh          $v1, -0x7610($at)
    ctx->pc = 0x181124u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937072), (uint16_t)GPR_U32(ctx, 3));
label_181128:
    // 0x181128: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x181128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_18112c:
    // 0x18112c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18112cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181130:
    // 0x181130: 0x240ffff3  addiu       $t7, $zero, -0xD
    ctx->pc = 0x181130u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_181134:
    // 0x181134: 0xa42389f2  sh          $v1, -0x760E($at)
    ctx->pc = 0x181134u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937074), (uint16_t)GPR_U32(ctx, 3));
label_181138:
    // 0x181138: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18113c:
    // 0x18113c: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x18113cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_181140:
    // 0x181140: 0xfc2289c8  sd          $v0, -0x7638($at)
    ctx->pc = 0x181140u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937032), GPR_U64(ctx, 2));
label_181144:
    // 0x181144: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181148:
    // 0x181148: 0xfc2289e8  sd          $v0, -0x7618($at)
    ctx->pc = 0x181148u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937064), GPR_U64(ctx, 2));
label_18114c:
    // 0x18114c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18114cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181150:
    // 0x181150: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x181150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
label_181154:
    // 0x181154: 0xa02c89a0  sb          $t4, -0x7660($at)
    ctx->pc = 0x181154u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936992), (uint8_t)GPR_U32(ctx, 12));
label_181158:
    // 0x181158: 0x240dff3f  addiu       $t5, $zero, -0xC1
    ctx->pc = 0x181158u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_18115c:
    // 0x18115c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18115cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181160:
    // 0x181160: 0x240c0042  addiu       $t4, $zero, 0x42
    ctx->pc = 0x181160u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_181164:
    // 0x181164: 0xfc2489d0  sd          $a0, -0x7630($at)
    ctx->pc = 0x181164u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937040), GPR_U64(ctx, 4));
label_181168:
    // 0x181168: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18116c:
    // 0x18116c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x18116cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_181170:
    // 0x181170: 0x903389a0  lbu         $s3, -0x7660($at)
    ctx->pc = 0x181170u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936992)));
label_181174:
    // 0x181174: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181178:
    // 0x181178: 0x2673824  and         $a3, $s3, $a3
    ctx->pc = 0x181178u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) & GPR_U64(ctx, 7));
label_18117c:
    // 0x18117c: 0xdc3289f0  ld          $s2, -0x7610($at)
    ctx->pc = 0x18117cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 1), 4294937072)));
label_181180:
    // 0x181180: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x181180u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_181184:
    // 0x181184: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181188:
    // 0x181188: 0x2452824  and         $a1, $s2, $a1
    ctx->pc = 0x181188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 5));
label_18118c:
    // 0x18118c: 0xfc248978  sd          $a0, -0x7688($at)
    ctx->pc = 0x18118cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936952), GPR_U64(ctx, 4));
label_181190:
    // 0x181190: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x181190u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_181194:
    // 0x181194: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x181194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_181198:
    // 0x181198: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18119c:
    // 0x18119c: 0xfc248988  sd          $a0, -0x7678($at)
    ctx->pc = 0x18119cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936968), GPR_U64(ctx, 4));
label_1811a0:
    // 0x1811a0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1811a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1811a4:
    // 0x1811a4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1811a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1811a8:
    // 0x1811a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1811a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1811ac:
    // 0x1811ac: 0xfc2489d8  sd          $a0, -0x7628($at)
    ctx->pc = 0x1811acu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937048), GPR_U64(ctx, 4));
label_1811b0:
    // 0x1811b0: 0x24c68950  addiu       $a2, $a2, -0x76B0
    ctx->pc = 0x1811b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936912));
label_1811b4:
    // 0x1811b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1811b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1811b8:
    // 0x1811b8: 0xfc2489f8  sd          $a0, -0x7608($at)
    ctx->pc = 0x1811b8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937080), GPR_U64(ctx, 4));
label_1811bc:
    // 0x1811bc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1811bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1811c0:
    // 0x1811c0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1811c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1811c4:
    // 0x1811c4: 0xfc2c8998  sd          $t4, -0x7668($at)
    ctx->pc = 0x1811c4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936984), GPR_U64(ctx, 12));
label_1811c8:
    // 0x1811c8: 0x24848960  addiu       $a0, $a0, -0x76A0
    ctx->pc = 0x1811c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936928));
label_1811cc:
    // 0x1811cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1811ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1811d0:
    // 0x1811d0: 0xa02789a0  sb          $a3, -0x7660($at)
    ctx->pc = 0x1811d0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936992), (uint8_t)GPR_U32(ctx, 7));
label_1811d4:
    // 0x1811d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1811d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1811d8:
    // 0x1811d8: 0xfc2589f0  sd          $a1, -0x7610($at)
    ctx->pc = 0x1811d8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937072), GPR_U64(ctx, 5));
label_1811dc:
    // 0x1811dc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1811dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1811e0:
    // 0x1811e0: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x1811e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
label_1811e4:
    // 0x1811e4: 0x90278990  lbu         $a3, -0x7670($at)
    ctx->pc = 0x1811e4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936976)));
label_1811e8:
    // 0x1811e8: 0x24a513b0  addiu       $a1, $a1, 0x13B0
    ctx->pc = 0x1811e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5040));
label_1811ec:
    // 0x1811ec: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x1811ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_1811f0:
    // 0x1811f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1811f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1811f4:
    // 0x1811f4: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x1811f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
label_1811f8:
    // 0x1811f8: 0xa0238990  sb          $v1, -0x7670($at)
    ctx->pc = 0x1811f8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936976), (uint8_t)GPR_U32(ctx, 3));
label_1811fc:
    // 0x1811fc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1811fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181200:
    // 0x181200: 0x90238990  lbu         $v1, -0x7670($at)
    ctx->pc = 0x181200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936976)));
label_181204:
    // 0x181204: 0x6f1824  and         $v1, $v1, $t7
    ctx->pc = 0x181204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 15));
label_181208:
    // 0x181208: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18120c:
    // 0x18120c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18120cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_181210:
    // 0x181210: 0xa0228990  sb          $v0, -0x7670($at)
    ctx->pc = 0x181210u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936976), (uint8_t)GPR_U32(ctx, 2));
label_181214:
    // 0x181214: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181218:
    // 0x181218: 0x90228990  lbu         $v0, -0x7670($at)
    ctx->pc = 0x181218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936976)));
label_18121c:
    // 0x18121c: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x18121cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
label_181220:
    // 0x181220: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181224:
    // 0x181224: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x181224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
label_181228:
    // 0x181228: 0xa0228990  sb          $v0, -0x7670($at)
    ctx->pc = 0x181228u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936976), (uint8_t)GPR_U32(ctx, 2));
label_18122c:
    // 0x18122c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18122cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181230:
    // 0x181230: 0x90228990  lbu         $v0, -0x7670($at)
    ctx->pc = 0x181230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936976)));
label_181234:
    // 0x181234: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x181234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
label_181238:
    // 0x181238: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18123c:
    // 0x18123c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x18123cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_181240:
    // 0x181240: 0xc07a540  jal         func_1E9500
label_181244:
    if (ctx->pc == 0x181244u) {
        ctx->pc = 0x181244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181240u;
        // 0x181244: 0xa0228990  sb          $v0, -0x7670($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294936976), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181248u;
        goto label_181248;
    }
    ctx->pc = 0x181240u;
    SET_GPR_U32(ctx, 31, 0x181248u);
    ctx->pc = 0x181244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181240u;
    // 0x181244: 0xa0228990  sb          $v0, -0x7670($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936976), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x181240u, 0x181248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181248u;
label_181248:
    // 0x181248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18124c:
    // 0x18124c: 0xa3828688  sb          $v0, -0x7978($gp)
    ctx->pc = 0x18124cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936200), (uint8_t)GPR_U32(ctx, 2));
label_181250:
    // 0x181250: 0x8e320058  lw          $s2, 0x58($s1)
    ctx->pc = 0x181250u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_181254:
    // 0x181254: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181258:
    // 0x181258: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x181258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18125c:
    // 0x18125c: 0xc0495c0  jal         func_125700
label_181260:
    if (ctx->pc == 0x181260u) {
        ctx->pc = 0x181260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18125Cu;
        // 0x181260: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181264u;
        goto label_181264;
    }
    ctx->pc = 0x18125Cu;
    SET_GPR_U32(ctx, 31, 0x181264u);
    ctx->pc = 0x181260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18125Cu;
    // 0x181260: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125700u, 0x18125Cu, 0x181264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181264u;
label_181264:
    // 0x181264: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x181264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_181268:
    // 0x181268: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18126c:
    // 0x18126c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18126cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_181270:
    // 0x181270: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x181270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_181274:
    // 0x181274: 0x320f809  jalr        $t9
label_181278:
    if (ctx->pc == 0x181278u) {
        ctx->pc = 0x181278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181274u;
        // 0x181278: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18127Cu;
        goto label_18127c;
    }
    ctx->pc = 0x181274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18127Cu);
        ctx->pc = 0x181278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181274u;
        // 0x181278: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181274u, 0x18127Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18127Cu;
label_18127c:
    // 0x18127c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18127cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181280:
    // 0x181280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181284:
    // 0x181284: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x181284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_181288:
    // 0x181288: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x181288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18128c:
    // 0x18128c: 0xc061734  jal         func_185CD0
label_181290:
    if (ctx->pc == 0x181290u) {
        ctx->pc = 0x181290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18128Cu;
        // 0x181290: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181294u;
        goto label_181294;
    }
    ctx->pc = 0x18128Cu;
    SET_GPR_U32(ctx, 31, 0x181294u);
    ctx->pc = 0x181290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18128Cu;
    // 0x181290: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185CD0u, 0x18128Cu, 0x181294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181294u;
label_181294:
    // 0x181294: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x181294u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_181298:
    // 0x181298: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x181298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_18129c:
    // 0x18129c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x18129cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1812a0:
    // 0x1812a0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1812a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_1812a4:
    // 0x1812a4: 0x24a58960  addiu       $a1, $a1, -0x76A0
    ctx->pc = 0x1812a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936928));
label_1812a8:
    // 0x1812a8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1812a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1812ac:
    // 0x1812ac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1812acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1812b0:
    // 0x1812b0: 0x3448000a  ori         $t0, $v0, 0xA
    ctx->pc = 0x1812b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_1812b4:
    // 0x1812b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1812b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1812b8:
    // 0x1812b8: 0x2a620008  slti        $v0, $s3, 0x8
    ctx->pc = 0x1812b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
label_1812bc:
    // 0x1812bc: 0xa0e60003  sb          $a2, 0x3($a3)
    ctx->pc = 0x1812bcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 6));
label_1812c0:
    // 0x1812c0: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x1812c0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
label_1812c4:
    // 0x1812c4: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x1812c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
label_1812c8:
    // 0x1812c8: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x1812c8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
label_1812cc:
    // 0x1812cc: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1812ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_1812d0:
    // 0x1812d0: 0xace8000c  sw          $t0, 0xC($a3)
    ctx->pc = 0x1812d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
label_1812d4:
    // 0x1812d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1812d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1812d8:
    // 0x1812d8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1812d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1812dc:
    // 0x1812dc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_1812e0:
    if (ctx->pc == 0x1812E0u) {
        ctx->pc = 0x1812E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1812DCu;
        // 0x1812e0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1812E4u;
        goto label_1812e4;
    }
    ctx->pc = 0x1812DCu;
    {
        const bool branch_taken_0x1812dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1812E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1812DCu;
        // 0x1812e0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1812dc) {
            ctx->pc = 0x181280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181280;
        }
    }
    ctx->pc = 0x1812E4u;
label_1812e4:
    // 0x1812e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1812e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1812e8:
    // 0x1812e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1812e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1812ec:
    // 0x1812ec: 0xc0495c0  jal         func_125700
label_1812f0:
    if (ctx->pc == 0x1812F0u) {
        ctx->pc = 0x1812F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1812ECu;
        // 0x1812f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1812F4u;
        goto label_1812f4;
    }
    ctx->pc = 0x1812ECu;
    SET_GPR_U32(ctx, 31, 0x1812F4u);
    ctx->pc = 0x1812F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1812ECu;
    // 0x1812f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125700u, 0x1812ECu, 0x1812F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1812F4u;
label_1812f4:
    // 0x1812f4: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x1812f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_1812f8:
    // 0x1812f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1812f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1812fc:
    // 0x1812fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1812fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_181300:
    // 0x181300: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x181300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_181304:
    // 0x181304: 0x320f809  jalr        $t9
label_181308:
    if (ctx->pc == 0x181308u) {
        ctx->pc = 0x181308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181304u;
        // 0x181308: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18130Cu;
        goto label_18130c;
    }
    ctx->pc = 0x181304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18130Cu);
        ctx->pc = 0x181308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181304u;
        // 0x181308: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181304u, 0x18130Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18130Cu;
label_18130c:
    // 0x18130c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18130cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181310:
    // 0x181310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181314:
    // 0x181314: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x181314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_181318:
    // 0x181318: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x181318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18131c:
    // 0x18131c: 0xc061734  jal         func_185CD0
label_181320:
    if (ctx->pc == 0x181320u) {
        ctx->pc = 0x181320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18131Cu;
        // 0x181320: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181324u;
        goto label_181324;
    }
    ctx->pc = 0x18131Cu;
    SET_GPR_U32(ctx, 31, 0x181324u);
    ctx->pc = 0x181320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18131Cu;
    // 0x181320: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185CD0u, 0x18131Cu, 0x181324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181324u;
label_181324:
    // 0x181324: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x181324u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_181328:
    // 0x181328: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x181328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_18132c:
    // 0x18132c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18132cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_181330:
    // 0x181330: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x181330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_181334:
    // 0x181334: 0x24c688b0  addiu       $a2, $a2, -0x7750
    ctx->pc = 0x181334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936752));
label_181338:
    // 0x181338: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x181338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_18133c:
    // 0x18133c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x18133cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_181340:
    // 0x181340: 0x3443000a  ori         $v1, $v0, 0xA
    ctx->pc = 0x181340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_181344:
    // 0x181344: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x181344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_181348:
    // 0x181348: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x181348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_18134c:
    // 0x18134c: 0xa1070003  sb          $a3, 0x3($t0)
    ctx->pc = 0x18134cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 7));
label_181350:
    // 0x181350: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x181350u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
label_181354:
    // 0x181354: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x181354u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
label_181358:
    // 0x181358: 0xa5050000  sh          $a1, 0x0($t0)
    ctx->pc = 0x181358u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
label_18135c:
    // 0x18135c: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x18135cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
label_181360:
    // 0x181360: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x181360u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
label_181364:
    // 0x181364: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x181364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_181368:
    // 0x181368: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x181368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_18136c:
    // 0x18136c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_181370:
    if (ctx->pc == 0x181370u) {
        ctx->pc = 0x181370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18136Cu;
        // 0x181370: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181374u;
        goto label_181374;
    }
    ctx->pc = 0x18136Cu;
    {
        const bool branch_taken_0x18136c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18136Cu;
        // 0x181370: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18136c) {
            ctx->pc = 0x181310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181310;
        }
    }
    ctx->pc = 0x181374u;
label_181374:
    // 0x181374: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x181374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_181378:
    // 0x181378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18137c:
    // 0x18137c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18137cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181380:
    // 0x181380: 0xc061734  jal         func_185CD0
label_181384:
    if (ctx->pc == 0x181384u) {
        ctx->pc = 0x181384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181380u;
        // 0x181384: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181388u;
        goto label_181388;
    }
    ctx->pc = 0x181380u;
    SET_GPR_U32(ctx, 31, 0x181388u);
    ctx->pc = 0x181384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181380u;
    // 0x181384: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185CD0u, 0x181380u, 0x181388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181388u;
label_181388:
    // 0x181388: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x181388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_18138c:
    // 0x18138c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18138cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_181390:
    // 0x181390: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x181390u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_181394:
    // 0x181394: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_181398:
    // 0x181398: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18139c:
    // 0x18139c: 0x3e00008  jr          $ra
label_1813a0:
    if (ctx->pc == 0x1813A0u) {
        ctx->pc = 0x1813A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18139Cu;
        // 0x1813a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1813A4u;
        goto label_fallthrough_0x18139c;
    }
    ctx->pc = 0x18139Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1813A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18139Cu;
        // 0x1813a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18139Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18139c:
    ctx->pc = 0x1813A4u;
}
