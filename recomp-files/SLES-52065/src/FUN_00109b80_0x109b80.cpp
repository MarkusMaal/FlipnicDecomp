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

// Function: FUN_00109b80
// Address: 0x109b80 - 0x10a210
void FUN_00109b80_0x109b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00109b80_0x109b80");
#endif

    switch (ctx->pc) {
        case 0x109b80u: goto label_109b80;
        case 0x109b84u: goto label_109b84;
        case 0x109b88u: goto label_109b88;
        case 0x109b8cu: goto label_109b8c;
        case 0x109b90u: goto label_109b90;
        case 0x109b94u: goto label_109b94;
        case 0x109b98u: goto label_109b98;
        case 0x109b9cu: goto label_109b9c;
        case 0x109ba0u: goto label_109ba0;
        case 0x109ba4u: goto label_109ba4;
        case 0x109ba8u: goto label_109ba8;
        case 0x109bacu: goto label_109bac;
        case 0x109bb0u: goto label_109bb0;
        case 0x109bb4u: goto label_109bb4;
        case 0x109bb8u: goto label_109bb8;
        case 0x109bbcu: goto label_109bbc;
        case 0x109bc0u: goto label_109bc0;
        case 0x109bc4u: goto label_109bc4;
        case 0x109bc8u: goto label_109bc8;
        case 0x109bccu: goto label_109bcc;
        case 0x109bd0u: goto label_109bd0;
        case 0x109bd4u: goto label_109bd4;
        case 0x109bd8u: goto label_109bd8;
        case 0x109bdcu: goto label_109bdc;
        case 0x109be0u: goto label_109be0;
        case 0x109be4u: goto label_109be4;
        case 0x109be8u: goto label_109be8;
        case 0x109becu: goto label_109bec;
        case 0x109bf0u: goto label_109bf0;
        case 0x109bf4u: goto label_109bf4;
        case 0x109bf8u: goto label_109bf8;
        case 0x109bfcu: goto label_109bfc;
        case 0x109c00u: goto label_109c00;
        case 0x109c04u: goto label_109c04;
        case 0x109c08u: goto label_109c08;
        case 0x109c0cu: goto label_109c0c;
        case 0x109c10u: goto label_109c10;
        case 0x109c14u: goto label_109c14;
        case 0x109c18u: goto label_109c18;
        case 0x109c1cu: goto label_109c1c;
        case 0x109c20u: goto label_109c20;
        case 0x109c24u: goto label_109c24;
        case 0x109c28u: goto label_109c28;
        case 0x109c2cu: goto label_109c2c;
        case 0x109c30u: goto label_109c30;
        case 0x109c34u: goto label_109c34;
        case 0x109c38u: goto label_109c38;
        case 0x109c3cu: goto label_109c3c;
        case 0x109c40u: goto label_109c40;
        case 0x109c44u: goto label_109c44;
        case 0x109c48u: goto label_109c48;
        case 0x109c4cu: goto label_109c4c;
        case 0x109c50u: goto label_109c50;
        case 0x109c54u: goto label_109c54;
        case 0x109c58u: goto label_109c58;
        case 0x109c5cu: goto label_109c5c;
        case 0x109c60u: goto label_109c60;
        case 0x109c64u: goto label_109c64;
        case 0x109c68u: goto label_109c68;
        case 0x109c6cu: goto label_109c6c;
        case 0x109c70u: goto label_109c70;
        case 0x109c74u: goto label_109c74;
        case 0x109c78u: goto label_109c78;
        case 0x109c7cu: goto label_109c7c;
        case 0x109c80u: goto label_109c80;
        case 0x109c84u: goto label_109c84;
        case 0x109c88u: goto label_109c88;
        case 0x109c8cu: goto label_109c8c;
        case 0x109c90u: goto label_109c90;
        case 0x109c94u: goto label_109c94;
        case 0x109c98u: goto label_109c98;
        case 0x109c9cu: goto label_109c9c;
        case 0x109ca0u: goto label_109ca0;
        case 0x109ca4u: goto label_109ca4;
        case 0x109ca8u: goto label_109ca8;
        case 0x109cacu: goto label_109cac;
        case 0x109cb0u: goto label_109cb0;
        case 0x109cb4u: goto label_109cb4;
        case 0x109cb8u: goto label_109cb8;
        case 0x109cbcu: goto label_109cbc;
        case 0x109cc0u: goto label_109cc0;
        case 0x109cc4u: goto label_109cc4;
        case 0x109cc8u: goto label_109cc8;
        case 0x109cccu: goto label_109ccc;
        case 0x109cd0u: goto label_109cd0;
        case 0x109cd4u: goto label_109cd4;
        case 0x109cd8u: goto label_109cd8;
        case 0x109cdcu: goto label_109cdc;
        case 0x109ce0u: goto label_109ce0;
        case 0x109ce4u: goto label_109ce4;
        case 0x109ce8u: goto label_109ce8;
        case 0x109cecu: goto label_109cec;
        case 0x109cf0u: goto label_109cf0;
        case 0x109cf4u: goto label_109cf4;
        case 0x109cf8u: goto label_109cf8;
        case 0x109cfcu: goto label_109cfc;
        case 0x109d00u: goto label_109d00;
        case 0x109d04u: goto label_109d04;
        case 0x109d08u: goto label_109d08;
        case 0x109d0cu: goto label_109d0c;
        case 0x109d10u: goto label_109d10;
        case 0x109d14u: goto label_109d14;
        case 0x109d18u: goto label_109d18;
        case 0x109d1cu: goto label_109d1c;
        case 0x109d20u: goto label_109d20;
        case 0x109d24u: goto label_109d24;
        case 0x109d28u: goto label_109d28;
        case 0x109d2cu: goto label_109d2c;
        case 0x109d30u: goto label_109d30;
        case 0x109d34u: goto label_109d34;
        case 0x109d38u: goto label_109d38;
        case 0x109d3cu: goto label_109d3c;
        case 0x109d40u: goto label_109d40;
        case 0x109d44u: goto label_109d44;
        case 0x109d48u: goto label_109d48;
        case 0x109d4cu: goto label_109d4c;
        case 0x109d50u: goto label_109d50;
        case 0x109d54u: goto label_109d54;
        case 0x109d58u: goto label_109d58;
        case 0x109d5cu: goto label_109d5c;
        case 0x109d60u: goto label_109d60;
        case 0x109d64u: goto label_109d64;
        case 0x109d68u: goto label_109d68;
        case 0x109d6cu: goto label_109d6c;
        case 0x109d70u: goto label_109d70;
        case 0x109d74u: goto label_109d74;
        case 0x109d78u: goto label_109d78;
        case 0x109d7cu: goto label_109d7c;
        case 0x109d80u: goto label_109d80;
        case 0x109d84u: goto label_109d84;
        case 0x109d88u: goto label_109d88;
        case 0x109d8cu: goto label_109d8c;
        case 0x109d90u: goto label_109d90;
        case 0x109d94u: goto label_109d94;
        case 0x109d98u: goto label_109d98;
        case 0x109d9cu: goto label_109d9c;
        case 0x109da0u: goto label_109da0;
        case 0x109da4u: goto label_109da4;
        case 0x109da8u: goto label_109da8;
        case 0x109dacu: goto label_109dac;
        case 0x109db0u: goto label_109db0;
        case 0x109db4u: goto label_109db4;
        case 0x109db8u: goto label_109db8;
        case 0x109dbcu: goto label_109dbc;
        case 0x109dc0u: goto label_109dc0;
        case 0x109dc4u: goto label_109dc4;
        case 0x109dc8u: goto label_109dc8;
        case 0x109dccu: goto label_109dcc;
        case 0x109dd0u: goto label_109dd0;
        case 0x109dd4u: goto label_109dd4;
        case 0x109dd8u: goto label_109dd8;
        case 0x109ddcu: goto label_109ddc;
        case 0x109de0u: goto label_109de0;
        case 0x109de4u: goto label_109de4;
        case 0x109de8u: goto label_109de8;
        case 0x109decu: goto label_109dec;
        case 0x109df0u: goto label_109df0;
        case 0x109df4u: goto label_109df4;
        case 0x109df8u: goto label_109df8;
        case 0x109dfcu: goto label_109dfc;
        case 0x109e00u: goto label_109e00;
        case 0x109e04u: goto label_109e04;
        case 0x109e08u: goto label_109e08;
        case 0x109e0cu: goto label_109e0c;
        case 0x109e10u: goto label_109e10;
        case 0x109e14u: goto label_109e14;
        case 0x109e18u: goto label_109e18;
        case 0x109e1cu: goto label_109e1c;
        case 0x109e20u: goto label_109e20;
        case 0x109e24u: goto label_109e24;
        case 0x109e28u: goto label_109e28;
        case 0x109e2cu: goto label_109e2c;
        case 0x109e30u: goto label_109e30;
        case 0x109e34u: goto label_109e34;
        case 0x109e38u: goto label_109e38;
        case 0x109e3cu: goto label_109e3c;
        case 0x109e40u: goto label_109e40;
        case 0x109e44u: goto label_109e44;
        case 0x109e48u: goto label_109e48;
        case 0x109e4cu: goto label_109e4c;
        case 0x109e50u: goto label_109e50;
        case 0x109e54u: goto label_109e54;
        case 0x109e58u: goto label_109e58;
        case 0x109e5cu: goto label_109e5c;
        case 0x109e60u: goto label_109e60;
        case 0x109e64u: goto label_109e64;
        case 0x109e68u: goto label_109e68;
        case 0x109e6cu: goto label_109e6c;
        case 0x109e70u: goto label_109e70;
        case 0x109e74u: goto label_109e74;
        case 0x109e78u: goto label_109e78;
        case 0x109e7cu: goto label_109e7c;
        case 0x109e80u: goto label_109e80;
        case 0x109e84u: goto label_109e84;
        case 0x109e88u: goto label_109e88;
        case 0x109e8cu: goto label_109e8c;
        case 0x109e90u: goto label_109e90;
        case 0x109e94u: goto label_109e94;
        case 0x109e98u: goto label_109e98;
        case 0x109e9cu: goto label_109e9c;
        case 0x109ea0u: goto label_109ea0;
        case 0x109ea4u: goto label_109ea4;
        case 0x109ea8u: goto label_109ea8;
        case 0x109eacu: goto label_109eac;
        case 0x109eb0u: goto label_109eb0;
        case 0x109eb4u: goto label_109eb4;
        case 0x109eb8u: goto label_109eb8;
        case 0x109ebcu: goto label_109ebc;
        case 0x109ec0u: goto label_109ec0;
        case 0x109ec4u: goto label_109ec4;
        case 0x109ec8u: goto label_109ec8;
        case 0x109eccu: goto label_109ecc;
        case 0x109ed0u: goto label_109ed0;
        case 0x109ed4u: goto label_109ed4;
        case 0x109ed8u: goto label_109ed8;
        case 0x109edcu: goto label_109edc;
        case 0x109ee0u: goto label_109ee0;
        case 0x109ee4u: goto label_109ee4;
        case 0x109ee8u: goto label_109ee8;
        case 0x109eecu: goto label_109eec;
        case 0x109ef0u: goto label_109ef0;
        case 0x109ef4u: goto label_109ef4;
        case 0x109ef8u: goto label_109ef8;
        case 0x109efcu: goto label_109efc;
        case 0x109f00u: goto label_109f00;
        case 0x109f04u: goto label_109f04;
        case 0x109f08u: goto label_109f08;
        case 0x109f0cu: goto label_109f0c;
        case 0x109f10u: goto label_109f10;
        case 0x109f14u: goto label_109f14;
        case 0x109f18u: goto label_109f18;
        case 0x109f1cu: goto label_109f1c;
        case 0x109f20u: goto label_109f20;
        case 0x109f24u: goto label_109f24;
        case 0x109f28u: goto label_109f28;
        case 0x109f2cu: goto label_109f2c;
        case 0x109f30u: goto label_109f30;
        case 0x109f34u: goto label_109f34;
        case 0x109f38u: goto label_109f38;
        case 0x109f3cu: goto label_109f3c;
        case 0x109f40u: goto label_109f40;
        case 0x109f44u: goto label_109f44;
        case 0x109f48u: goto label_109f48;
        case 0x109f4cu: goto label_109f4c;
        case 0x109f50u: goto label_109f50;
        case 0x109f54u: goto label_109f54;
        case 0x109f58u: goto label_109f58;
        case 0x109f5cu: goto label_109f5c;
        case 0x109f60u: goto label_109f60;
        case 0x109f64u: goto label_109f64;
        case 0x109f68u: goto label_109f68;
        case 0x109f6cu: goto label_109f6c;
        case 0x109f70u: goto label_109f70;
        case 0x109f74u: goto label_109f74;
        case 0x109f78u: goto label_109f78;
        case 0x109f7cu: goto label_109f7c;
        case 0x109f80u: goto label_109f80;
        case 0x109f84u: goto label_109f84;
        case 0x109f88u: goto label_109f88;
        case 0x109f8cu: goto label_109f8c;
        case 0x109f90u: goto label_109f90;
        case 0x109f94u: goto label_109f94;
        case 0x109f98u: goto label_109f98;
        case 0x109f9cu: goto label_109f9c;
        case 0x109fa0u: goto label_109fa0;
        case 0x109fa4u: goto label_109fa4;
        case 0x109fa8u: goto label_109fa8;
        case 0x109facu: goto label_109fac;
        case 0x109fb0u: goto label_109fb0;
        case 0x109fb4u: goto label_109fb4;
        case 0x109fb8u: goto label_109fb8;
        case 0x109fbcu: goto label_109fbc;
        case 0x109fc0u: goto label_109fc0;
        case 0x109fc4u: goto label_109fc4;
        case 0x109fc8u: goto label_109fc8;
        case 0x109fccu: goto label_109fcc;
        case 0x109fd0u: goto label_109fd0;
        case 0x109fd4u: goto label_109fd4;
        case 0x109fd8u: goto label_109fd8;
        case 0x109fdcu: goto label_109fdc;
        case 0x109fe0u: goto label_109fe0;
        case 0x109fe4u: goto label_109fe4;
        case 0x109fe8u: goto label_109fe8;
        case 0x109fecu: goto label_109fec;
        case 0x109ff0u: goto label_109ff0;
        case 0x109ff4u: goto label_109ff4;
        case 0x109ff8u: goto label_109ff8;
        case 0x109ffcu: goto label_109ffc;
        case 0x10a000u: goto label_10a000;
        case 0x10a004u: goto label_10a004;
        case 0x10a008u: goto label_10a008;
        case 0x10a00cu: goto label_10a00c;
        case 0x10a010u: goto label_10a010;
        case 0x10a014u: goto label_10a014;
        case 0x10a018u: goto label_10a018;
        case 0x10a01cu: goto label_10a01c;
        case 0x10a020u: goto label_10a020;
        case 0x10a024u: goto label_10a024;
        case 0x10a028u: goto label_10a028;
        case 0x10a02cu: goto label_10a02c;
        case 0x10a030u: goto label_10a030;
        case 0x10a034u: goto label_10a034;
        case 0x10a038u: goto label_10a038;
        case 0x10a03cu: goto label_10a03c;
        case 0x10a040u: goto label_10a040;
        case 0x10a044u: goto label_10a044;
        case 0x10a048u: goto label_10a048;
        case 0x10a04cu: goto label_10a04c;
        case 0x10a050u: goto label_10a050;
        case 0x10a054u: goto label_10a054;
        case 0x10a058u: goto label_10a058;
        case 0x10a05cu: goto label_10a05c;
        case 0x10a060u: goto label_10a060;
        case 0x10a064u: goto label_10a064;
        case 0x10a068u: goto label_10a068;
        case 0x10a06cu: goto label_10a06c;
        case 0x10a070u: goto label_10a070;
        case 0x10a074u: goto label_10a074;
        case 0x10a078u: goto label_10a078;
        case 0x10a07cu: goto label_10a07c;
        case 0x10a080u: goto label_10a080;
        case 0x10a084u: goto label_10a084;
        case 0x10a088u: goto label_10a088;
        case 0x10a08cu: goto label_10a08c;
        case 0x10a090u: goto label_10a090;
        case 0x10a094u: goto label_10a094;
        case 0x10a098u: goto label_10a098;
        case 0x10a09cu: goto label_10a09c;
        case 0x10a0a0u: goto label_10a0a0;
        case 0x10a0a4u: goto label_10a0a4;
        case 0x10a0a8u: goto label_10a0a8;
        case 0x10a0acu: goto label_10a0ac;
        case 0x10a0b0u: goto label_10a0b0;
        case 0x10a0b4u: goto label_10a0b4;
        case 0x10a0b8u: goto label_10a0b8;
        case 0x10a0bcu: goto label_10a0bc;
        case 0x10a0c0u: goto label_10a0c0;
        case 0x10a0c4u: goto label_10a0c4;
        case 0x10a0c8u: goto label_10a0c8;
        case 0x10a0ccu: goto label_10a0cc;
        case 0x10a0d0u: goto label_10a0d0;
        case 0x10a0d4u: goto label_10a0d4;
        case 0x10a0d8u: goto label_10a0d8;
        case 0x10a0dcu: goto label_10a0dc;
        case 0x10a0e0u: goto label_10a0e0;
        case 0x10a0e4u: goto label_10a0e4;
        case 0x10a0e8u: goto label_10a0e8;
        case 0x10a0ecu: goto label_10a0ec;
        case 0x10a0f0u: goto label_10a0f0;
        case 0x10a0f4u: goto label_10a0f4;
        case 0x10a0f8u: goto label_10a0f8;
        case 0x10a0fcu: goto label_10a0fc;
        case 0x10a100u: goto label_10a100;
        case 0x10a104u: goto label_10a104;
        case 0x10a108u: goto label_10a108;
        case 0x10a10cu: goto label_10a10c;
        case 0x10a110u: goto label_10a110;
        case 0x10a114u: goto label_10a114;
        case 0x10a118u: goto label_10a118;
        case 0x10a11cu: goto label_10a11c;
        case 0x10a120u: goto label_10a120;
        case 0x10a124u: goto label_10a124;
        case 0x10a128u: goto label_10a128;
        case 0x10a12cu: goto label_10a12c;
        case 0x10a130u: goto label_10a130;
        case 0x10a134u: goto label_10a134;
        case 0x10a138u: goto label_10a138;
        case 0x10a13cu: goto label_10a13c;
        case 0x10a140u: goto label_10a140;
        case 0x10a144u: goto label_10a144;
        case 0x10a148u: goto label_10a148;
        case 0x10a14cu: goto label_10a14c;
        case 0x10a150u: goto label_10a150;
        case 0x10a154u: goto label_10a154;
        case 0x10a158u: goto label_10a158;
        case 0x10a15cu: goto label_10a15c;
        case 0x10a160u: goto label_10a160;
        case 0x10a164u: goto label_10a164;
        case 0x10a168u: goto label_10a168;
        case 0x10a16cu: goto label_10a16c;
        case 0x10a170u: goto label_10a170;
        case 0x10a174u: goto label_10a174;
        case 0x10a178u: goto label_10a178;
        case 0x10a17cu: goto label_10a17c;
        case 0x10a180u: goto label_10a180;
        case 0x10a184u: goto label_10a184;
        case 0x10a188u: goto label_10a188;
        case 0x10a18cu: goto label_10a18c;
        case 0x10a190u: goto label_10a190;
        case 0x10a194u: goto label_10a194;
        case 0x10a198u: goto label_10a198;
        case 0x10a19cu: goto label_10a19c;
        case 0x10a1a0u: goto label_10a1a0;
        case 0x10a1a4u: goto label_10a1a4;
        case 0x10a1a8u: goto label_10a1a8;
        case 0x10a1acu: goto label_10a1ac;
        case 0x10a1b0u: goto label_10a1b0;
        case 0x10a1b4u: goto label_10a1b4;
        case 0x10a1b8u: goto label_10a1b8;
        case 0x10a1bcu: goto label_10a1bc;
        case 0x10a1c0u: goto label_10a1c0;
        case 0x10a1c4u: goto label_10a1c4;
        case 0x10a1c8u: goto label_10a1c8;
        case 0x10a1ccu: goto label_10a1cc;
        case 0x10a1d0u: goto label_10a1d0;
        case 0x10a1d4u: goto label_10a1d4;
        case 0x10a1d8u: goto label_10a1d8;
        case 0x10a1dcu: goto label_10a1dc;
        case 0x10a1e0u: goto label_10a1e0;
        case 0x10a1e4u: goto label_10a1e4;
        case 0x10a1e8u: goto label_10a1e8;
        case 0x10a1ecu: goto label_10a1ec;
        case 0x10a1f0u: goto label_10a1f0;
        case 0x10a1f4u: goto label_10a1f4;
        case 0x10a1f8u: goto label_10a1f8;
        case 0x10a1fcu: goto label_10a1fc;
        case 0x10a200u: goto label_10a200;
        case 0x10a204u: goto label_10a204;
        case 0x10a208u: goto label_10a208;
        case 0x10a20cu: goto label_10a20c;
        default: break;
    }

    ctx->pc = 0x109b80u;

label_109b80:
    // 0x109b80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x109b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_109b84:
    // 0x109b84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x109b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_109b88:
    // 0x109b88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x109b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_109b8c:
    // 0x109b8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x109b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_109b90:
    // 0x109b90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x109b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_109b94:
    // 0x109b94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x109b94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_109b98:
    // 0x109b98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x109b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_109b9c:
    // 0x109b9c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x109b9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_109ba0:
    // 0x109ba0: 0x20420001  addi        $v0, $v0, 0x1
    ctx->pc = 0x109ba0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_109ba4:
    // 0x109ba4: 0x2c41001e  sltiu       $at, $v0, 0x1E
    ctx->pc = 0x109ba4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_109ba8:
    // 0x109ba8: 0x10200191  beqz        $at, . + 4 + (0x191 << 2)
label_109bac:
    if (ctx->pc == 0x109BACu) {
        ctx->pc = 0x109BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109BA8u;
        // 0x109bac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109BB0u;
        goto label_109bb0;
    }
    ctx->pc = 0x109BA8u;
    {
        const bool branch_taken_0x109ba8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x109BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109BA8u;
        // 0x109bac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ba8) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x109BB0u;
label_109bb0:
    // 0x109bb0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x109bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_109bb4:
    // 0x109bb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_109bb8:
    // 0x109bb8: 0x2463e200  addiu       $v1, $v1, -0x1E00
    ctx->pc = 0x109bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959616));
label_109bbc:
    // 0x109bbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_109bc0:
    // 0x109bc0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x109bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_109bc4:
    // 0x109bc4: 0x400008  jr          $v0
label_109bc8:
    if (ctx->pc == 0x109BC8u) {
        ctx->pc = 0x109BCCu;
        goto label_109bcc;
    }
    ctx->pc = 0x109BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x109BCCu: goto label_109bcc;
            case 0x109BF8u: goto label_109bf8;
            case 0x109C00u: goto label_109c00;
            case 0x109C4Cu: goto label_109c4c;
            case 0x109C74u: goto label_109c74;
            case 0x109CB4u: goto label_109cb4;
            case 0x109CECu: goto label_109cec;
            case 0x109D34u: goto label_109d34;
            case 0x109D6Cu: goto label_109d6c;
            case 0x109D98u: goto label_109d98;
            case 0x109DCCu: goto label_109dcc;
            case 0x109DF8u: goto label_109df8;
            case 0x109E08u: goto label_109e08;
            case 0x109E4Cu: goto label_109e4c;
            case 0x109ECCu: goto label_109ecc;
            case 0x109F58u: goto label_109f58;
            case 0x10A0A0u: goto label_10a0a0;
            case 0x10A0B0u: goto label_10a0b0;
            case 0x10A0C0u: goto label_10a0c0;
            case 0x10A0FCu: goto label_10a0fc;
            case 0x10A110u: goto label_10a110;
            case 0x10A120u: goto label_10a120;
            case 0x10A134u: goto label_10a134;
            case 0x10A14Cu: goto label_10a14c;
            case 0x10A198u: goto label_10a198;
            case 0x10A1F0u: goto label_10a1f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109BC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x109BCCu;
label_109bcc:
    // 0x109bcc: 0xc049e34  jal         func_1278D0
label_109bd0:
    if (ctx->pc == 0x109BD0u) {
        ctx->pc = 0x109BD4u;
        goto label_109bd4;
    }
    ctx->pc = 0x109BCCu;
    SET_GPR_U32(ctx, 31, 0x109BD4u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x109BCCu, 0x109BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BD4u;
label_109bd4:
    // 0x109bd4: 0xc04a02c  jal         func_1280B0
label_109bd8:
    if (ctx->pc == 0x109BD8u) {
        ctx->pc = 0x109BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109BD4u;
        // 0x109bd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109BDCu;
        goto label_109bdc;
    }
    ctx->pc = 0x109BD4u;
    SET_GPR_U32(ctx, 31, 0x109BDCu);
    ctx->pc = 0x109BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BD4u;
    // 0x109bd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280B0u, 0x109BD4u, 0x109BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BDCu;
label_109bdc:
    // 0x109bdc: 0xc049e34  jal         func_1278D0
label_109be0:
    if (ctx->pc == 0x109BE0u) {
        ctx->pc = 0x109BE4u;
        goto label_109be4;
    }
    ctx->pc = 0x109BDCu;
    SET_GPR_U32(ctx, 31, 0x109BE4u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x109BDCu, 0x109BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BE4u;
label_109be4:
    // 0x109be4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x109be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109be8:
    // 0x109be8: 0xc049ed8  jal         func_127B60
label_109bec:
    if (ctx->pc == 0x109BECu) {
        ctx->pc = 0x109BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109BE8u;
        // 0x109bec: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109BF0u;
        goto label_109bf0;
    }
    ctx->pc = 0x109BE8u;
    SET_GPR_U32(ctx, 31, 0x109BF0u);
    ctx->pc = 0x109BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BE8u;
    // 0x109bec: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x109BE8u, 0x109BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BF0u;
label_109bf0:
    // 0x109bf0: 0x1000017f  b           . + 4 + (0x17F << 2)
label_109bf4:
    if (ctx->pc == 0x109BF4u) {
        ctx->pc = 0x109BF8u;
        goto label_109bf8;
    }
    ctx->pc = 0x109BF0u;
    {
        const bool branch_taken_0x109bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109bf0) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x109BF8u;
label_109bf8:
    // 0x109bf8: 0x1000017e  b           . + 4 + (0x17E << 2)
label_109bfc:
    if (ctx->pc == 0x109BFCu) {
        ctx->pc = 0x109BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109BF8u;
        // 0x109bfc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109C00u;
        goto label_109c00;
    }
    ctx->pc = 0x109BF8u;
    {
        const bool branch_taken_0x109bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109BF8u;
        // 0x109bfc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109bf8) {
            ctx->pc = 0x10A1F4u;
            goto label_10a1f4;
        }
    }
    ctx->pc = 0x109C00u;
label_109c00:
    // 0x109c00: 0x86300002  lh          $s0, 0x2($s1)
    ctx->pc = 0x109c00u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_109c04:
    // 0x109c04: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x109c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109c08:
    // 0x109c08: 0x86310004  lh          $s1, 0x4($s1)
    ctx->pc = 0x109c08u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_109c0c:
    // 0x109c0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x109c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109c10:
    // 0x109c10: 0x24442c00  addiu       $a0, $v0, 0x2C00
    ctx->pc = 0x109c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
label_109c14:
    // 0x109c14: 0xc0583d4  jal         func_160F50
label_109c18:
    if (ctx->pc == 0x109C18u) {
        ctx->pc = 0x109C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C14u;
        // 0x109c18: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109C1Cu;
        goto label_109c1c;
    }
    ctx->pc = 0x109C14u;
    SET_GPR_U32(ctx, 31, 0x109C1Cu);
    ctx->pc = 0x109C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C14u;
    // 0x109c18: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160F50u, 0x109C14u, 0x109C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C1Cu;
label_109c1c:
    // 0x109c1c: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x109c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109c20:
    // 0x109c20: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x109c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_109c24:
    // 0x109c24: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x109c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_109c28:
    // 0x109c28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x109c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_109c2c:
    // 0x109c2c: 0x8c632c1c  lw          $v1, 0x2C1C($v1)
    ctx->pc = 0x109c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
label_109c30:
    // 0x109c30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_109c34:
    // 0x109c34: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x109c34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_109c38:
    // 0x109c38: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x109c38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_109c3c:
    // 0x109c3c: 0xc05fb2c  jal         func_17ECB0
label_109c40:
    if (ctx->pc == 0x109C40u) {
        ctx->pc = 0x109C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C3Cu;
        // 0x109c40: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109C44u;
        goto label_109c44;
    }
    ctx->pc = 0x109C3Cu;
    SET_GPR_U32(ctx, 31, 0x109C44u);
    ctx->pc = 0x109C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C3Cu;
    // 0x109c40: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ECB0u, 0x109C3Cu, 0x109C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C44u;
label_109c44:
    // 0x109c44: 0x1000016a  b           . + 4 + (0x16A << 2)
label_109c48:
    if (ctx->pc == 0x109C48u) {
        ctx->pc = 0x109C4Cu;
        goto label_109c4c;
    }
    ctx->pc = 0x109C44u;
    {
        const bool branch_taken_0x109c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109c44) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x109C4Cu;
label_109c4c:
    // 0x109c4c: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x109c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109c50:
    // 0x109c50: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x109c50u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_109c54:
    // 0x109c54: 0x86240004  lh          $a0, 0x4($s1)
    ctx->pc = 0x109c54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_109c58:
    // 0x109c58: 0x8c632c1c  lw          $v1, 0x2C1C($v1)
    ctx->pc = 0x109c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
label_109c5c:
    // 0x109c5c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x109c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_109c60:
    // 0x109c60: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x109c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_109c64:
    // 0x109c64: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x109c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_109c68:
    // 0x109c68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_109c6c:
    // 0x109c6c: 0x10000160  b           . + 4 + (0x160 << 2)
label_109c70:
    if (ctx->pc == 0x109C70u) {
        ctx->pc = 0x109C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C6Cu;
        // 0x109c70: 0xa0440041  sb          $a0, 0x41($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 65), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109C74u;
        goto label_109c74;
    }
    ctx->pc = 0x109C6Cu;
    {
        const bool branch_taken_0x109c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C6Cu;
        // 0x109c70: 0xa0440041  sb          $a0, 0x41($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 65), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c6c) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x109C74u;
label_109c74:
    // 0x109c74: 0x86250004  lh          $a1, 0x4($s1)
    ctx->pc = 0x109c74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_109c78:
    // 0x109c78: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109c7c:
    // 0x109c7c: 0xc057040  jal         func_15C100
label_109c80:
    if (ctx->pc == 0x109C80u) {
        ctx->pc = 0x109C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C7Cu;
        // 0x109c80: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109C84u;
        goto label_109c84;
    }
    ctx->pc = 0x109C7Cu;
    SET_GPR_U32(ctx, 31, 0x109C84u);
    ctx->pc = 0x109C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C7Cu;
    // 0x109c80: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x109C7Cu, 0x109C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C84u;
label_109c84:
    // 0x109c84: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x109c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109c88:
    // 0x109c88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_109c8c:
    // 0x109c8c: 0x86250006  lh          $a1, 0x6($s1)
    ctx->pc = 0x109c8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_109c90:
    // 0x109c90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_109c94:
    // 0x109c94: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x109c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_109c98:
    // 0x109c98: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x109c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_109c9c:
    // 0x109c9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x109c9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_109ca0:
    // 0x109ca0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x109ca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_109ca4:
    // 0x109ca4: 0x320f809  jalr        $t9
label_109ca8:
    if (ctx->pc == 0x109CA8u) {
        ctx->pc = 0x109CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CA4u;
        // 0x109ca8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109CACu;
        goto label_109cac;
    }
    ctx->pc = 0x109CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109CACu);
        ctx->pc = 0x109CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CA4u;
        // 0x109ca8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109CA4u, 0x109CACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109CACu;
label_109cac:
    // 0x109cac: 0x10000150  b           . + 4 + (0x150 << 2)
label_109cb0:
    if (ctx->pc == 0x109CB0u) {
        ctx->pc = 0x109CB4u;
        goto label_109cb4;
    }
    ctx->pc = 0x109CACu;
    {
        const bool branch_taken_0x109cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109cac) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x109CB4u;
label_109cb4:
    // 0x109cb4: 0x86250004  lh          $a1, 0x4($s1)
    ctx->pc = 0x109cb4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_109cb8:
    // 0x109cb8: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109cbc:
    // 0x109cbc: 0xc057040  jal         func_15C100
label_109cc0:
    if (ctx->pc == 0x109CC0u) {
        ctx->pc = 0x109CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CBCu;
        // 0x109cc0: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109CC4u;
        goto label_109cc4;
    }
    ctx->pc = 0x109CBCu;
    SET_GPR_U32(ctx, 31, 0x109CC4u);
    ctx->pc = 0x109CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CBCu;
    // 0x109cc0: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x109CBCu, 0x109CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CC4u;
label_109cc4:
    // 0x109cc4: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x109cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109cc8:
    // 0x109cc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_109ccc:
    // 0x109ccc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_109cd0:
    // 0x109cd0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x109cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_109cd4:
    // 0x109cd4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x109cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_109cd8:
    // 0x109cd8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x109cd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_109cdc:
    // 0x109cdc: 0x320f809  jalr        $t9
label_109ce0:
    if (ctx->pc == 0x109CE0u) {
        ctx->pc = 0x109CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CDCu;
        // 0x109ce0: 0x86250006  lh          $a1, 0x6($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109CE4u;
        goto label_109ce4;
    }
    ctx->pc = 0x109CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109CE4u);
        ctx->pc = 0x109CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CDCu;
        // 0x109ce0: 0x86250006  lh          $a1, 0x6($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109CDCu, 0x109CE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109CE4u;
label_109ce4:
    // 0x109ce4: 0x10000142  b           . + 4 + (0x142 << 2)
label_109ce8:
    if (ctx->pc == 0x109CE8u) {
        ctx->pc = 0x109CECu;
        goto label_109cec;
    }
    ctx->pc = 0x109CE4u;
    {
        const bool branch_taken_0x109ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109ce4) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x109CECu;
label_109cec:
    // 0x109cec: 0x86250004  lh          $a1, 0x4($s1)
    ctx->pc = 0x109cecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_109cf0:
    // 0x109cf0: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109cf4:
    // 0x109cf4: 0xc057040  jal         func_15C100
label_109cf8:
    if (ctx->pc == 0x109CF8u) {
        ctx->pc = 0x109CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CF4u;
        // 0x109cf8: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109CFCu;
        goto label_109cfc;
    }
    ctx->pc = 0x109CF4u;
    SET_GPR_U32(ctx, 31, 0x109CFCu);
    ctx->pc = 0x109CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CF4u;
    // 0x109cf8: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x109CF4u, 0x109CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CFCu;
label_109cfc:
    // 0x109cfc: 0x86300006  lh          $s0, 0x6($s1)
    ctx->pc = 0x109cfcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_109d00:
    // 0x109d00: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x109d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109d04:
    // 0x109d04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x109d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109d08:
    // 0x109d08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_109d0c:
    // 0x109d0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_109d10:
    // 0x109d10: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x109d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_109d14:
    // 0x109d14: 0xc042570  jal         func_1095C0
label_109d18:
    if (ctx->pc == 0x109D18u) {
        ctx->pc = 0x109D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D14u;
        // 0x109d18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109D1Cu;
        goto label_109d1c;
    }
    ctx->pc = 0x109D14u;
    SET_GPR_U32(ctx, 31, 0x109D1Cu);
    ctx->pc = 0x109D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D14u;
    // 0x109d18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x109D14u, 0x109D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D1Cu;
label_109d1c:
    // 0x109d1c: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x109d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109d20:
    // 0x109d20: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x109d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_109d24:
    // 0x109d24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_109d28:
    // 0x109d28: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x109d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_109d2c:
    // 0x109d2c: 0x10000130  b           . + 4 + (0x130 << 2)
label_109d30:
    if (ctx->pc == 0x109D30u) {
        ctx->pc = 0x109D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D2Cu;
        // 0x109d30: 0xa05001d3  sb          $s0, 0x1D3($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 467), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109D34u;
        goto label_109d34;
    }
    ctx->pc = 0x109D2Cu;
    {
        const bool branch_taken_0x109d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D2Cu;
        // 0x109d30: 0xa05001d3  sb          $s0, 0x1D3($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 467), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d2c) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x109D34u;
label_109d34:
    // 0x109d34: 0x86250004  lh          $a1, 0x4($s1)
    ctx->pc = 0x109d34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_109d38:
    // 0x109d38: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109d3c:
    // 0x109d3c: 0xc057040  jal         func_15C100
label_109d40:
    if (ctx->pc == 0x109D40u) {
        ctx->pc = 0x109D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D3Cu;
        // 0x109d40: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109D44u;
        goto label_109d44;
    }
    ctx->pc = 0x109D3Cu;
    SET_GPR_U32(ctx, 31, 0x109D44u);
    ctx->pc = 0x109D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D3Cu;
    // 0x109d40: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x109D3Cu, 0x109D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D44u;
label_109d44:
    // 0x109d44: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x109d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109d48:
    // 0x109d48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_109d4c:
    // 0x109d4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_109d50:
    // 0x109d50: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x109d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_109d54:
    // 0x109d54: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x109d54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_109d58:
    // 0x109d58: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x109d58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_109d5c:
    // 0x109d5c: 0x320f809  jalr        $t9
label_109d60:
    if (ctx->pc == 0x109D60u) {
        ctx->pc = 0x109D64u;
        goto label_109d64;
    }
    ctx->pc = 0x109D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109D64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109D5Cu, 0x109D64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109D64u;
label_109d64:
    // 0x109d64: 0x10000122  b           . + 4 + (0x122 << 2)
label_109d68:
    if (ctx->pc == 0x109D68u) {
        ctx->pc = 0x109D6Cu;
        goto label_109d6c;
    }
    ctx->pc = 0x109D64u;
    {
        const bool branch_taken_0x109d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109d64) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x109D6Cu;
label_109d6c:
    // 0x109d6c: 0x86300002  lh          $s0, 0x2($s1)
    ctx->pc = 0x109d6cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_109d70:
    // 0x109d70: 0x86250004  lh          $a1, 0x4($s1)
    ctx->pc = 0x109d70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_109d74:
    // 0x109d74: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109d78:
    // 0x109d78: 0xc057040  jal         func_15C100
label_109d7c:
    if (ctx->pc == 0x109D7Cu) {
        ctx->pc = 0x109D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D78u;
        // 0x109d7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109D80u;
        goto label_109d80;
    }
    ctx->pc = 0x109D78u;
    SET_GPR_U32(ctx, 31, 0x109D80u);
    ctx->pc = 0x109D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D78u;
    // 0x109d7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x109D78u, 0x109D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D80u;
label_109d80:
    // 0x109d80: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x109d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_109d84:
    // 0x109d84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x109d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109d88:
    // 0x109d88: 0xc042360  jal         func_108D80
label_109d8c:
    if (ctx->pc == 0x109D8Cu) {
        ctx->pc = 0x109D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D88u;
        // 0x109d8c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109D90u;
        goto label_109d90;
    }
    ctx->pc = 0x109D88u;
    SET_GPR_U32(ctx, 31, 0x109D90u);
    ctx->pc = 0x109D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D88u;
    // 0x109d8c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108D80u, 0x109D88u, 0x109D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D90u;
label_109d90:
    // 0x109d90: 0x10000117  b           . + 4 + (0x117 << 2)
label_109d94:
    if (ctx->pc == 0x109D94u) {
        ctx->pc = 0x109D98u;
        goto label_109d98;
    }
    ctx->pc = 0x109D90u;
    {
        const bool branch_taken_0x109d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109d90) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x109D98u;
label_109d98:
    // 0x109d98: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x109d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109d9c:
    // 0x109d9c: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x109d9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_109da0:
    // 0x109da0: 0x8c623ddc  lw          $v0, 0x3DDC($v1)
    ctx->pc = 0x109da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15836)));
label_109da4:
    // 0x109da4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x109da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_109da8:
    // 0x109da8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_109dac:
    // 0x109dac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_109db0:
    // 0x109db0: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x109db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_109db4:
    // 0x109db4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x109db4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_109db8:
    // 0x109db8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x109db8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_109dbc:
    // 0x109dbc: 0x320f809  jalr        $t9
label_109dc0:
    if (ctx->pc == 0x109DC0u) {
        ctx->pc = 0x109DC4u;
        goto label_109dc4;
    }
    ctx->pc = 0x109DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109DC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109DBCu, 0x109DC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109DC4u;
label_109dc4:
    // 0x109dc4: 0x1000010a  b           . + 4 + (0x10A << 2)
label_109dc8:
    if (ctx->pc == 0x109DC8u) {
        ctx->pc = 0x109DCCu;
        goto label_109dcc;
    }
    ctx->pc = 0x109DC4u;
    {
        const bool branch_taken_0x109dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109dc4) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x109DCCu;
label_109dcc:
    // 0x109dcc: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x109dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109dd0:
    // 0x109dd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x109dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109dd4:
    // 0x109dd4: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x109dd4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_109dd8:
    // 0x109dd8: 0xc0583f0  jal         func_160FC0
label_109ddc:
    if (ctx->pc == 0x109DDCu) {
        ctx->pc = 0x109DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DD8u;
        // 0x109ddc: 0x24442c00  addiu       $a0, $v0, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109DE0u;
        goto label_109de0;
    }
    ctx->pc = 0x109DD8u;
    SET_GPR_U32(ctx, 31, 0x109DE0u);
    ctx->pc = 0x109DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109DD8u;
    // 0x109ddc: 0x24442c00  addiu       $a0, $v0, 0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160FC0u, 0x109DD8u, 0x109DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DE0u;
label_109de0:
    // 0x109de0: 0xc058018  jal         func_160060
label_109de4:
    if (ctx->pc == 0x109DE4u) {
        ctx->pc = 0x109DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DE0u;
        // 0x109de4: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109DE8u;
        goto label_109de8;
    }
    ctx->pc = 0x109DE0u;
    SET_GPR_U32(ctx, 31, 0x109DE8u);
    ctx->pc = 0x109DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109DE0u;
    // 0x109de4: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x109DE0u, 0x109DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DE8u;
label_109de8:
    // 0x109de8: 0xc057f04  jal         func_15FC10
label_109dec:
    if (ctx->pc == 0x109DECu) {
        ctx->pc = 0x109DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DE8u;
        // 0x109dec: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109DF0u;
        goto label_109df0;
    }
    ctx->pc = 0x109DE8u;
    SET_GPR_U32(ctx, 31, 0x109DF0u);
    ctx->pc = 0x109DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109DE8u;
    // 0x109dec: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x109DE8u, 0x109DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DF0u;
label_109df0:
    // 0x109df0: 0x100000ff  b           . + 4 + (0xFF << 2)
label_109df4:
    if (ctx->pc == 0x109DF4u) {
        ctx->pc = 0x109DF8u;
        goto label_109df8;
    }
    ctx->pc = 0x109DF0u;
    {
        const bool branch_taken_0x109df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109df0) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x109DF8u;
label_109df8:
    // 0x109df8: 0xc058080  jal         func_160200
label_109dfc:
    if (ctx->pc == 0x109DFCu) {
        ctx->pc = 0x109DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DF8u;
        // 0x109dfc: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109E00u;
        goto label_109e00;
    }
    ctx->pc = 0x109DF8u;
    SET_GPR_U32(ctx, 31, 0x109E00u);
    ctx->pc = 0x109DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109DF8u;
    // 0x109dfc: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160200u, 0x109DF8u, 0x109E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E00u;
label_109e00:
    // 0x109e00: 0x100000fb  b           . + 4 + (0xFB << 2)
label_109e04:
    if (ctx->pc == 0x109E04u) {
        ctx->pc = 0x109E08u;
        goto label_109e08;
    }
    ctx->pc = 0x109E00u;
    {
        const bool branch_taken_0x109e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109e00) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x109E08u;
label_109e08:
    // 0x109e08: 0x86300002  lh          $s0, 0x2($s1)
    ctx->pc = 0x109e08u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_109e0c:
    // 0x109e0c: 0xc05fe4c  jal         func_17F930
label_109e10:
    if (ctx->pc == 0x109E10u) {
        ctx->pc = 0x109E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E0Cu;
        // 0x109e10: 0x86310004  lh          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109E14u;
        goto label_109e14;
    }
    ctx->pc = 0x109E0Cu;
    SET_GPR_U32(ctx, 31, 0x109E14u);
    ctx->pc = 0x109E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E0Cu;
    // 0x109e10: 0x86310004  lh          $s1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x109E0Cu, 0x109E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E14u;
label_109e14:
    // 0x109e14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x109e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109e18:
    // 0x109e18: 0xc05fec0  jal         func_17FB00
label_109e1c:
    if (ctx->pc == 0x109E1Cu) {
        ctx->pc = 0x109E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E18u;
        // 0x109e1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109E20u;
        goto label_109e20;
    }
    ctx->pc = 0x109E18u;
    SET_GPR_U32(ctx, 31, 0x109E20u);
    ctx->pc = 0x109E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E18u;
    // 0x109e1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB00u, 0x109E18u, 0x109E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E20u;
label_109e20:
    // 0x109e20: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x109e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_109e24:
    // 0x109e24: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109e28:
    // 0x109e28: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x109e28u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_109e2c:
    // 0x109e2c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x109e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_109e30:
    // 0x109e30: 0x0  nop
    ctx->pc = 0x109e30u;
    // NOP
label_109e34:
    // 0x109e34: 0x1810  mfhi        $v1
    ctx->pc = 0x109e34u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_109e38:
    // 0x109e38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x109e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_109e3c:
    // 0x109e3c: 0xc057f4c  jal         func_15FD30
label_109e40:
    if (ctx->pc == 0x109E40u) {
        ctx->pc = 0x109E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E3Cu;
        // 0x109e40: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109E44u;
        goto label_109e44;
    }
    ctx->pc = 0x109E3Cu;
    SET_GPR_U32(ctx, 31, 0x109E44u);
    ctx->pc = 0x109E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E3Cu;
    // 0x109e40: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FD30u, 0x109E3Cu, 0x109E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E44u;
label_109e44:
    // 0x109e44: 0x100000ea  b           . + 4 + (0xEA << 2)
label_109e48:
    if (ctx->pc == 0x109E48u) {
        ctx->pc = 0x109E4Cu;
        goto label_109e4c;
    }
    ctx->pc = 0x109E44u;
    {
        const bool branch_taken_0x109e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109e44) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x109E4Cu;
label_109e4c:
    // 0x109e4c: 0x86250004  lh          $a1, 0x4($s1)
    ctx->pc = 0x109e4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_109e50:
    // 0x109e50: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109e54:
    // 0x109e54: 0xc057040  jal         func_15C100
label_109e58:
    if (ctx->pc == 0x109E58u) {
        ctx->pc = 0x109E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E54u;
        // 0x109e58: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109E5Cu;
        goto label_109e5c;
    }
    ctx->pc = 0x109E54u;
    SET_GPR_U32(ctx, 31, 0x109E5Cu);
    ctx->pc = 0x109E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E54u;
    // 0x109e58: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x109E54u, 0x109E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E5Cu;
label_109e5c:
    // 0x109e5c: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109e60:
    // 0x109e60: 0xc057f04  jal         func_15FC10
label_109e64:
    if (ctx->pc == 0x109E64u) {
        ctx->pc = 0x109E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E60u;
        // 0x109e64: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109E68u;
        goto label_109e68;
    }
    ctx->pc = 0x109E60u;
    SET_GPR_U32(ctx, 31, 0x109E68u);
    ctx->pc = 0x109E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E60u;
    // 0x109e64: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x109E60u, 0x109E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E68u;
label_109e68:
    // 0x109e68: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x109e68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_109e6c:
    // 0x109e6c: 0x4610007  bgez        $v1, . + 4 + (0x7 << 2)
label_109e70:
    if (ctx->pc == 0x109E70u) {
        ctx->pc = 0x109E74u;
        goto label_109e74;
    }
    ctx->pc = 0x109E6Cu;
    {
        const bool branch_taken_0x109e6c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x109e6c) {
            ctx->pc = 0x109E8Cu;
            goto label_109e8c;
        }
    }
    ctx->pc = 0x109E74u;
label_109e74:
    // 0x109e74: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109e78:
    // 0x109e78: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x109e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_109e7c:
    // 0x109e7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x109e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_109e80:
    // 0x109e80: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x109e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_109e84:
    // 0x109e84: 0x846301f4  lh          $v1, 0x1F4($v1)
    ctx->pc = 0x109e84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 500)));
label_109e88:
    // 0x109e88: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x109e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_109e8c:
    // 0x109e8c: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x109e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109e90:
    // 0x109e90: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x109e90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_109e94:
    // 0x109e94: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x109e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_109e98:
    // 0x109e98: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x109e98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_109e9c:
    // 0x109e9c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x109e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_109ea0:
    // 0x109ea0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x109ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_109ea4:
    // 0x109ea4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x109ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_109ea8:
    // 0x109ea8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x109ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_109eac:
    // 0x109eac: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x109eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_109eb0:
    // 0x109eb0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x109eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_109eb4:
    // 0x109eb4: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x109eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_109eb8:
    // 0x109eb8: 0x8c6301f0  lw          $v1, 0x1F0($v1)
    ctx->pc = 0x109eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 496)));
label_109ebc:
    // 0x109ebc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x109ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_109ec0:
    // 0x109ec0: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x109ec0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_109ec4:
    // 0x109ec4: 0x100000ca  b           . + 4 + (0xCA << 2)
label_109ec8:
    if (ctx->pc == 0x109EC8u) {
        ctx->pc = 0x109EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109EC4u;
        // 0x109ec8: 0x7c460040  sq          $a2, 0x40($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109ECCu;
        goto label_109ecc;
    }
    ctx->pc = 0x109EC4u;
    {
        const bool branch_taken_0x109ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109EC4u;
        // 0x109ec8: 0x7c460040  sq          $a2, 0x40($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ec4) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x109ECCu;
label_109ecc:
    // 0x109ecc: 0x86250004  lh          $a1, 0x4($s1)
    ctx->pc = 0x109eccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_109ed0:
    // 0x109ed0: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109ed4:
    // 0x109ed4: 0xc057040  jal         func_15C100
label_109ed8:
    if (ctx->pc == 0x109ED8u) {
        ctx->pc = 0x109ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109ED4u;
        // 0x109ed8: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109EDCu;
        goto label_109edc;
    }
    ctx->pc = 0x109ED4u;
    SET_GPR_U32(ctx, 31, 0x109EDCu);
    ctx->pc = 0x109ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109ED4u;
    // 0x109ed8: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x109ED4u, 0x109EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109EDCu;
label_109edc:
    // 0x109edc: 0x86330006  lh          $s3, 0x6($s1)
    ctx->pc = 0x109edcu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_109ee0:
    // 0x109ee0: 0x6610007  bgez        $s3, . + 4 + (0x7 << 2)
label_109ee4:
    if (ctx->pc == 0x109EE4u) {
        ctx->pc = 0x109EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109EE0u;
        // 0x109ee4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109EE8u;
        goto label_109ee8;
    }
    ctx->pc = 0x109EE0u;
    {
        const bool branch_taken_0x109ee0 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x109EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109EE0u;
        // 0x109ee4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ee0) {
            ctx->pc = 0x109F00u;
            goto label_109f00;
        }
    }
    ctx->pc = 0x109EE8u;
label_109ee8:
    // 0x109ee8: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x109ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109eec:
    // 0x109eec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x109eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_109ef0:
    // 0x109ef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_109ef4:
    // 0x109ef4: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x109ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_109ef8:
    // 0x109ef8: 0x844201f4  lh          $v0, 0x1F4($v0)
    ctx->pc = 0x109ef8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 500)));
label_109efc:
    // 0x109efc: 0x2453ffff  addiu       $s3, $v0, -0x1
    ctx->pc = 0x109efcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_109f00:
    // 0x109f00: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109f04:
    // 0x109f04: 0xc058080  jal         func_160200
label_109f08:
    if (ctx->pc == 0x109F08u) {
        ctx->pc = 0x109F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F04u;
        // 0x109f08: 0x8c912cd0  lw          $s1, 0x2CD0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109F0Cu;
        goto label_109f0c;
    }
    ctx->pc = 0x109F04u;
    SET_GPR_U32(ctx, 31, 0x109F0Cu);
    ctx->pc = 0x109F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F04u;
    // 0x109f08: 0x8c912cd0  lw          $s1, 0x2CD0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160200u, 0x109F04u, 0x109F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F0Cu;
label_109f0c:
    // 0x109f0c: 0x8f858218  lw          $a1, -0x7DE8($gp)
    ctx->pc = 0x109f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109f10:
    // 0x109f10: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x109f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_109f14:
    // 0x109f14: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x109f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_109f18:
    // 0x109f18: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x109f18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_109f1c:
    // 0x109f1c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x109f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_109f20:
    // 0x109f20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_109f24:
    // 0x109f24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x109f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_109f28:
    // 0x109f28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x109f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_109f2c:
    // 0x109f2c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x109f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_109f30:
    // 0x109f30: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x109f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_109f34:
    // 0x109f34: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x109f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_109f38:
    // 0x109f38: 0x8c6301f0  lw          $v1, 0x1F0($v1)
    ctx->pc = 0x109f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 496)));
label_109f3c:
    // 0x109f3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x109f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_109f40:
    // 0x109f40: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x109f40u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_109f44:
    // 0x109f44: 0x7c460040  sq          $a2, 0x40($v0)
    ctx->pc = 0x109f44u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 6));
label_109f48:
    // 0x109f48: 0xc04043c  jal         func_1010F0
label_109f4c:
    if (ctx->pc == 0x109F4Cu) {
        ctx->pc = 0x109F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F48u;
        // 0x109f4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109F50u;
        goto label_109f50;
    }
    ctx->pc = 0x109F48u;
    SET_GPR_U32(ctx, 31, 0x109F50u);
    ctx->pc = 0x109F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F48u;
    // 0x109f4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1010F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1010F0u, 0x109F48u, 0x109F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F50u;
label_109f50:
    // 0x109f50: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_109f54:
    if (ctx->pc == 0x109F54u) {
        ctx->pc = 0x109F58u;
        goto label_109f58;
    }
    ctx->pc = 0x109F50u;
    {
        const bool branch_taken_0x109f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109f50) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x109F58u;
label_109f58:
    // 0x109f58: 0x86250004  lh          $a1, 0x4($s1)
    ctx->pc = 0x109f58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_109f5c:
    // 0x109f5c: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109f60:
    // 0x109f60: 0xc057040  jal         func_15C100
label_109f64:
    if (ctx->pc == 0x109F64u) {
        ctx->pc = 0x109F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F60u;
        // 0x109f64: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109F68u;
        goto label_109f68;
    }
    ctx->pc = 0x109F60u;
    SET_GPR_U32(ctx, 31, 0x109F68u);
    ctx->pc = 0x109F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F60u;
    // 0x109f64: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x109F60u, 0x109F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F68u;
label_109f68:
    // 0x109f68: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109f6c:
    // 0x109f6c: 0xc057f04  jal         func_15FC10
label_109f70:
    if (ctx->pc == 0x109F70u) {
        ctx->pc = 0x109F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F6Cu;
        // 0x109f70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109F74u;
        goto label_109f74;
    }
    ctx->pc = 0x109F6Cu;
    SET_GPR_U32(ctx, 31, 0x109F74u);
    ctx->pc = 0x109F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F6Cu;
    // 0x109f70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x109F6Cu, 0x109F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F74u;
label_109f74:
    // 0x109f74: 0xc049e34  jal         func_1278D0
label_109f78:
    if (ctx->pc == 0x109F78u) {
        ctx->pc = 0x109F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F74u;
        // 0x109f78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109F7Cu;
        goto label_109f7c;
    }
    ctx->pc = 0x109F74u;
    SET_GPR_U32(ctx, 31, 0x109F7Cu);
    ctx->pc = 0x109F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F74u;
    // 0x109f78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x109F74u, 0x109F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F7Cu;
label_109f7c:
    // 0x109f7c: 0xc04a02c  jal         func_1280B0
label_109f80:
    if (ctx->pc == 0x109F80u) {
        ctx->pc = 0x109F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F7Cu;
        // 0x109f80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109F84u;
        goto label_109f84;
    }
    ctx->pc = 0x109F7Cu;
    SET_GPR_U32(ctx, 31, 0x109F84u);
    ctx->pc = 0x109F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F7Cu;
    // 0x109f80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280B0u, 0x109F7Cu, 0x109F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F84u;
label_109f84:
    // 0x109f84: 0xc049e34  jal         func_1278D0
label_109f88:
    if (ctx->pc == 0x109F88u) {
        ctx->pc = 0x109F8Cu;
        goto label_109f8c;
    }
    ctx->pc = 0x109F84u;
    SET_GPR_U32(ctx, 31, 0x109F8Cu);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x109F84u, 0x109F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F8Cu;
label_109f8c:
    // 0x109f8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x109f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109f90:
    // 0x109f90: 0xc049ed8  jal         func_127B60
label_109f94:
    if (ctx->pc == 0x109F94u) {
        ctx->pc = 0x109F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F90u;
        // 0x109f94: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109F98u;
        goto label_109f98;
    }
    ctx->pc = 0x109F90u;
    SET_GPR_U32(ctx, 31, 0x109F98u);
    ctx->pc = 0x109F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F90u;
    // 0x109f94: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x109F90u, 0x109F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F98u;
label_109f98:
    // 0x109f98: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x109f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109f9c:
    // 0x109f9c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x109f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_109fa0:
    // 0x109fa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_109fa4:
    // 0x109fa4: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x109fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_109fa8:
    // 0x109fa8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x109fa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_109fac:
    // 0x109fac: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x109facu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_109fb0:
    // 0x109fb0: 0x320f809  jalr        $t9
label_109fb4:
    if (ctx->pc == 0x109FB4u) {
        ctx->pc = 0x109FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FB0u;
        // 0x109fb4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109FB8u;
        goto label_109fb8;
    }
    ctx->pc = 0x109FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109FB8u);
        ctx->pc = 0x109FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FB0u;
        // 0x109fb4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109FB0u, 0x109FB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109FB8u;
label_109fb8:
    // 0x109fb8: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109fbc:
    // 0x109fbc: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x109fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_109fc0:
    // 0x109fc0: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x109fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_109fc4:
    // 0x109fc4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x109fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_109fc8:
    // 0x109fc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_109fcc:
    // 0x109fcc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x109fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_109fd0:
    // 0x109fd0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x109fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_109fd4:
    // 0x109fd4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x109fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_109fd8:
    // 0x109fd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x109fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_109fdc:
    // 0x109fdc: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x109fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_109fe0:
    // 0x109fe0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x109fe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_109fe4:
    // 0x109fe4: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x109fe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_109fe8:
    // 0x109fe8: 0x320f809  jalr        $t9
label_109fec:
    if (ctx->pc == 0x109FECu) {
        ctx->pc = 0x109FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FE8u;
        // 0x109fec: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109FF0u;
        goto label_109ff0;
    }
    ctx->pc = 0x109FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109FF0u);
        ctx->pc = 0x109FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FE8u;
        // 0x109fec: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109FE8u, 0x109FF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109FF0u;
label_109ff0:
    // 0x109ff0: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109ff4:
    // 0x109ff4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x109ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_109ff8:
    // 0x109ff8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x109ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_109ffc:
    // 0x109ffc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x109ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_10a000:
    // 0x10a000: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10a004:
    // 0x10a004: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10a004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_10a008:
    // 0x10a008: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10a008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10a00c:
    // 0x10a00c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x10a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10a010:
    // 0x10a010: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10a010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10a014:
    // 0x10a014: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x10a014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_10a018:
    // 0x10a018: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10a018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10a01c:
    // 0x10a01c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x10a01cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_10a020:
    // 0x10a020: 0x320f809  jalr        $t9
label_10a024:
    if (ctx->pc == 0x10A024u) {
        ctx->pc = 0x10A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A020u;
        // 0x10a024: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A028u;
        goto label_10a028;
    }
    ctx->pc = 0x10A020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10A028u);
        ctx->pc = 0x10A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A020u;
        // 0x10a024: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A020u, 0x10A028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10A028u;
label_10a028:
    // 0x10a028: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x10a028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_10a02c:
    // 0x10a02c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x10a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_10a030:
    // 0x10a030: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x10a030u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_10a034:
    // 0x10a034: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x10a034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_10a038:
    // 0x10a038: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10a03c:
    // 0x10a03c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10a03cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a040:
    // 0x10a040: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10a040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_10a044:
    // 0x10a044: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10a044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10a048:
    // 0x10a048: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x10a048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10a04c:
    // 0x10a04c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10a050:
    // 0x10a050: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x10a050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_10a054:
    // 0x10a054: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10a054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10a058:
    // 0x10a058: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x10a058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_10a05c:
    // 0x10a05c: 0x320f809  jalr        $t9
label_10a060:
    if (ctx->pc == 0x10A060u) {
        ctx->pc = 0x10A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A05Cu;
        // 0x10a060: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A064u;
        goto label_10a064;
    }
    ctx->pc = 0x10A05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10A064u);
        ctx->pc = 0x10A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A05Cu;
        // 0x10a060: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A05Cu, 0x10A064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10A064u;
label_10a064:
    // 0x10a064: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x10a064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_10a068:
    // 0x10a068: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x10a068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_10a06c:
    // 0x10a06c: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x10a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_10a070:
    // 0x10a070: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10a070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10a074:
    // 0x10a074: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x10a074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_10a078:
    // 0x10a078: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10a078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10a07c:
    // 0x10a07c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10a080:
    // 0x10a080: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
label_10a084:
    if (ctx->pc == 0x10A084u) {
        ctx->pc = 0x10A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A080u;
        // 0x10a084: 0x24430040  addiu       $v1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A088u;
        goto label_10a088;
    }
    ctx->pc = 0x10A080u;
    {
        const bool branch_taken_0x10a080 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x10A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A080u;
        // 0x10a084: 0x24430040  addiu       $v1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a080) {
            ctx->pc = 0x10A098u;
            goto label_10a098;
        }
    }
    ctx->pc = 0x10A088u;
label_10a088:
    // 0x10a088: 0x846201ec  lh          $v0, 0x1EC($v1)
    ctx->pc = 0x10a088u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 492)));
label_10a08c:
    // 0x10a08c: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
label_10a090:
    if (ctx->pc == 0x10A090u) {
        ctx->pc = 0x10A094u;
        goto label_10a094;
    }
    ctx->pc = 0x10A08Cu;
    {
        const bool branch_taken_0x10a08c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10a08c) {
            ctx->pc = 0x10A098u;
            goto label_10a098;
        }
    }
    ctx->pc = 0x10A094u;
label_10a094:
    // 0x10a094: 0xa46201ee  sh          $v0, 0x1EE($v1)
    ctx->pc = 0x10a094u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 494), (uint16_t)GPR_U32(ctx, 2));
label_10a098:
    // 0x10a098: 0x10000055  b           . + 4 + (0x55 << 2)
label_10a09c:
    if (ctx->pc == 0x10A09Cu) {
        ctx->pc = 0x10A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A098u;
        // 0x10a09c: 0xa47001ec  sh          $s0, 0x1EC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 492), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A0A0u;
        goto label_10a0a0;
    }
    ctx->pc = 0x10A098u;
    {
        const bool branch_taken_0x10a098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A098u;
        // 0x10a09c: 0xa47001ec  sh          $s0, 0x1EC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 492), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a098) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x10A0A0u;
label_10a0a0:
    // 0x10a0a0: 0xc05809c  jal         func_160270
label_10a0a4:
    if (ctx->pc == 0x10A0A4u) {
        ctx->pc = 0x10A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A0A0u;
        // 0x10a0a4: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A0A8u;
        goto label_10a0a8;
    }
    ctx->pc = 0x10A0A0u;
    SET_GPR_U32(ctx, 31, 0x10A0A8u);
    ctx->pc = 0x10A0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A0A0u;
    // 0x10a0a4: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160270u, 0x10A0A0u, 0x10A0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0A8u;
label_10a0a8:
    // 0x10a0a8: 0x10000051  b           . + 4 + (0x51 << 2)
label_10a0ac:
    if (ctx->pc == 0x10A0ACu) {
        ctx->pc = 0x10A0B0u;
        goto label_10a0b0;
    }
    ctx->pc = 0x10A0A8u;
    {
        const bool branch_taken_0x10a0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a0a8) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x10A0B0u;
label_10a0b0:
    // 0x10a0b0: 0xc0580dc  jal         func_160370
label_10a0b4:
    if (ctx->pc == 0x10A0B4u) {
        ctx->pc = 0x10A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A0B0u;
        // 0x10a0b4: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A0B8u;
        goto label_10a0b8;
    }
    ctx->pc = 0x10A0B0u;
    SET_GPR_U32(ctx, 31, 0x10A0B8u);
    ctx->pc = 0x10A0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A0B0u;
    // 0x10a0b4: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160370u, 0x10A0B0u, 0x10A0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0B8u;
label_10a0b8:
    // 0x10a0b8: 0x1000004d  b           . + 4 + (0x4D << 2)
label_10a0bc:
    if (ctx->pc == 0x10A0BCu) {
        ctx->pc = 0x10A0C0u;
        goto label_10a0c0;
    }
    ctx->pc = 0x10A0B8u;
    {
        const bool branch_taken_0x10a0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a0b8) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x10A0C0u;
label_10a0c0:
    // 0x10a0c0: 0x878283a4  lh          $v0, -0x7C5C($gp)
    ctx->pc = 0x10a0c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935460)));
label_10a0c4:
    // 0x10a0c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_10a0c8:
    if (ctx->pc == 0x10A0C8u) {
        ctx->pc = 0x10A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A0C4u;
        // 0x10a0c8: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A0CCu;
        goto label_10a0cc;
    }
    ctx->pc = 0x10A0C4u;
    {
        const bool branch_taken_0x10a0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A0C4u;
        // 0x10a0c8: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a0c4) {
            ctx->pc = 0x10A0E0u;
            goto label_10a0e0;
        }
    }
    ctx->pc = 0x10A0CCu;
label_10a0cc:
    // 0x10a0cc: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10a0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10a0d0:
    // 0x10a0d0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x10a0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_10a0d4:
    // 0x10a0d4: 0xc046578  jal         func_1195E0
label_10a0d8:
    if (ctx->pc == 0x10A0D8u) {
        ctx->pc = 0x10A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A0D4u;
        // 0x10a0d8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A0DCu;
        goto label_10a0dc;
    }
    ctx->pc = 0x10A0D4u;
    SET_GPR_U32(ctx, 31, 0x10A0DCu);
    ctx->pc = 0x10A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A0D4u;
    // 0x10a0d8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1195E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1195E0u, 0x10A0D4u, 0x10A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0DCu;
label_10a0dc:
    // 0x10a0dc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x10a0dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_10a0e0:
    // 0x10a0e0: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
label_10a0e4:
    if (ctx->pc == 0x10A0E4u) {
        ctx->pc = 0x10A0E8u;
        goto label_10a0e8;
    }
    ctx->pc = 0x10A0E0u;
    {
        const bool branch_taken_0x10a0e0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x10a0e0) {
            ctx->pc = 0x10A0CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a0cc;
        }
    }
    ctx->pc = 0x10A0E8u;
label_10a0e8:
    // 0x10a0e8: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x10a0e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_10a0ec:
    // 0x10a0ec: 0xc0461e4  jal         func_118790
label_10a0f0:
    if (ctx->pc == 0x10A0F0u) {
        ctx->pc = 0x10A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A0ECu;
        // 0x10a0f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A0F4u;
        goto label_10a0f4;
    }
    ctx->pc = 0x10A0ECu;
    SET_GPR_U32(ctx, 31, 0x10A0F4u);
    ctx->pc = 0x10A0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A0ECu;
    // 0x10a0f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118790u, 0x10A0ECu, 0x10A0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0F4u;
label_10a0f4:
    // 0x10a0f4: 0x1000003e  b           . + 4 + (0x3E << 2)
label_10a0f8:
    if (ctx->pc == 0x10A0F8u) {
        ctx->pc = 0x10A0FCu;
        goto label_10a0fc;
    }
    ctx->pc = 0x10A0F4u;
    {
        const bool branch_taken_0x10a0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a0f4) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x10A0FCu;
label_10a0fc:
    // 0x10a0fc: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x10a0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_10a100:
    // 0x10a100: 0xc0463c4  jal         func_118F10
label_10a104:
    if (ctx->pc == 0x10A104u) {
        ctx->pc = 0x10A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A100u;
        // 0x10a104: 0x86250002  lh          $a1, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A108u;
        goto label_10a108;
    }
    ctx->pc = 0x10A100u;
    SET_GPR_U32(ctx, 31, 0x10A108u);
    ctx->pc = 0x10A104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A100u;
    // 0x10a104: 0x86250002  lh          $a1, 0x2($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118F10u, 0x10A100u, 0x10A108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A108u;
label_10a108:
    // 0x10a108: 0x10000039  b           . + 4 + (0x39 << 2)
label_10a10c:
    if (ctx->pc == 0x10A10Cu) {
        ctx->pc = 0x10A110u;
        goto label_10a110;
    }
    ctx->pc = 0x10A108u;
    {
        const bool branch_taken_0x10a108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a108) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x10A110u;
label_10a110:
    // 0x10a110: 0xc0463fc  jal         func_118FF0
label_10a114:
    if (ctx->pc == 0x10A114u) {
        ctx->pc = 0x10A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A110u;
        // 0x10a114: 0x8f848388  lw          $a0, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A118u;
        goto label_10a118;
    }
    ctx->pc = 0x10A110u;
    SET_GPR_U32(ctx, 31, 0x10A118u);
    ctx->pc = 0x10A114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A110u;
    // 0x10a114: 0x8f848388  lw          $a0, -0x7C78($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FF0u, 0x10A110u, 0x10A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A118u;
label_10a118:
    // 0x10a118: 0x10000035  b           . + 4 + (0x35 << 2)
label_10a11c:
    if (ctx->pc == 0x10A11Cu) {
        ctx->pc = 0x10A120u;
        goto label_10a120;
    }
    ctx->pc = 0x10A118u;
    {
        const bool branch_taken_0x10a118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a118) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x10A120u;
label_10a120:
    // 0x10a120: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x10a120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_10a124:
    // 0x10a124: 0xc046400  jal         func_119000
label_10a128:
    if (ctx->pc == 0x10A128u) {
        ctx->pc = 0x10A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A124u;
        // 0x10a128: 0x86250002  lh          $a1, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A12Cu;
        goto label_10a12c;
    }
    ctx->pc = 0x10A124u;
    SET_GPR_U32(ctx, 31, 0x10A12Cu);
    ctx->pc = 0x10A128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A124u;
    // 0x10a128: 0x86250002  lh          $a1, 0x2($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119000u, 0x10A124u, 0x10A12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A12Cu;
label_10a12c:
    // 0x10a12c: 0x10000030  b           . + 4 + (0x30 << 2)
label_10a130:
    if (ctx->pc == 0x10A130u) {
        ctx->pc = 0x10A134u;
        goto label_10a134;
    }
    ctx->pc = 0x10A12Cu;
    {
        const bool branch_taken_0x10a12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a12c) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x10A134u;
label_10a134:
    // 0x10a134: 0x86260002  lh          $a2, 0x2($s1)
    ctx->pc = 0x10a134u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_10a138:
    // 0x10a138: 0x8f858388  lw          $a1, -0x7C78($gp)
    ctx->pc = 0x10a138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_10a13c:
    // 0x10a13c: 0xc046350  jal         func_118D40
label_10a140:
    if (ctx->pc == 0x10A140u) {
        ctx->pc = 0x10A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A13Cu;
        // 0x10a140: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A144u;
        goto label_10a144;
    }
    ctx->pc = 0x10A13Cu;
    SET_GPR_U32(ctx, 31, 0x10A144u);
    ctx->pc = 0x10A140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A13Cu;
    // 0x10a140: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D40u, 0x10A13Cu, 0x10A144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A144u;
label_10a144:
    // 0x10a144: 0x1000002a  b           . + 4 + (0x2A << 2)
label_10a148:
    if (ctx->pc == 0x10A148u) {
        ctx->pc = 0x10A14Cu;
        goto label_10a14c;
    }
    ctx->pc = 0x10A144u;
    {
        const bool branch_taken_0x10a144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a144) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x10A14Cu;
label_10a14c:
    // 0x10a14c: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x10a14cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_10a150:
    // 0x10a150: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
label_10a154:
    if (ctx->pc == 0x10A154u) {
        ctx->pc = 0x10A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A150u;
        // 0x10a154: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A158u;
        goto label_10a158;
    }
    ctx->pc = 0x10A150u;
    {
        const bool branch_taken_0x10a150 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x10A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A150u;
        // 0x10a154: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a150) {
            ctx->pc = 0x10A174u;
            goto label_10a174;
        }
    }
    ctx->pc = 0x10A158u;
label_10a158:
    // 0x10a158: 0xc049e34  jal         func_1278D0
label_10a15c:
    if (ctx->pc == 0x10A15Cu) {
        ctx->pc = 0x10A160u;
        goto label_10a160;
    }
    ctx->pc = 0x10A158u;
    SET_GPR_U32(ctx, 31, 0x10A160u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x10A158u, 0x10A160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A160u;
label_10a160:
    // 0x10a160: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x10a160u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_10a164:
    // 0x10a164: 0xc049ff0  jal         func_127FC0
label_10a168:
    if (ctx->pc == 0x10A168u) {
        ctx->pc = 0x10A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A164u;
        // 0x10a168: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A16Cu;
        goto label_10a16c;
    }
    ctx->pc = 0x10A164u;
    SET_GPR_U32(ctx, 31, 0x10A16Cu);
    ctx->pc = 0x10A168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A164u;
    // 0x10a168: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127FC0u, 0x10A164u, 0x10A16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A16Cu;
label_10a16c:
    // 0x10a16c: 0x10000020  b           . + 4 + (0x20 << 2)
label_10a170:
    if (ctx->pc == 0x10A170u) {
        ctx->pc = 0x10A174u;
        goto label_10a174;
    }
    ctx->pc = 0x10A16Cu;
    {
        const bool branch_taken_0x10a16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a16c) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x10A174u;
label_10a174:
    // 0x10a174: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
label_10a178:
    if (ctx->pc == 0x10A178u) {
        ctx->pc = 0x10A17Cu;
        goto label_10a17c;
    }
    ctx->pc = 0x10A174u;
    {
        const bool branch_taken_0x10a174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10a174) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x10A17Cu;
label_10a17c:
    // 0x10a17c: 0xc049e34  jal         func_1278D0
label_10a180:
    if (ctx->pc == 0x10A180u) {
        ctx->pc = 0x10A184u;
        goto label_10a184;
    }
    ctx->pc = 0x10A17Cu;
    SET_GPR_U32(ctx, 31, 0x10A184u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x10A17Cu, 0x10A184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A184u;
label_10a184:
    // 0x10a184: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10a184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a188:
    // 0x10a188: 0xc049ed8  jal         func_127B60
label_10a18c:
    if (ctx->pc == 0x10A18Cu) {
        ctx->pc = 0x10A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A188u;
        // 0x10a18c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A190u;
        goto label_10a190;
    }
    ctx->pc = 0x10A188u;
    SET_GPR_U32(ctx, 31, 0x10A190u);
    ctx->pc = 0x10A18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A188u;
    // 0x10a18c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x10A188u, 0x10A190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A190u;
label_10a190:
    // 0x10a190: 0x10000017  b           . + 4 + (0x17 << 2)
label_10a194:
    if (ctx->pc == 0x10A194u) {
        ctx->pc = 0x10A198u;
        goto label_10a198;
    }
    ctx->pc = 0x10A190u;
    {
        const bool branch_taken_0x10a190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a190) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x10A198u;
label_10a198:
    // 0x10a198: 0x86300002  lh          $s0, 0x2($s1)
    ctx->pc = 0x10a198u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_10a19c:
    // 0x10a19c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x10a19cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_10a1a0:
    // 0x10a1a0: 0x24a5e1f8  addiu       $a1, $a1, -0x1E08
    ctx->pc = 0x10a1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959608));
label_10a1a4:
    // 0x10a1a4: 0x8f918388  lw          $s1, -0x7C78($gp)
    ctx->pc = 0x10a1a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_10a1a8:
    // 0x10a1a8: 0xc06cf0c  jal         func_1B3C30
label_10a1ac:
    if (ctx->pc == 0x10A1ACu) {
        ctx->pc = 0x10A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A1A8u;
        // 0x10a1ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A1B0u;
        goto label_10a1b0;
    }
    ctx->pc = 0x10A1A8u;
    SET_GPR_U32(ctx, 31, 0x10A1B0u);
    ctx->pc = 0x10A1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A1A8u;
    // 0x10a1ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x10A1A8u, 0x10A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A1B0u;
label_10a1b0:
    // 0x10a1b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x10a1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10a1b4:
    // 0x10a1b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10a1b8:
    // 0x10a1b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10a1bc:
    // 0x10a1bc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x10a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10a1c0:
    // 0x10a1c0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_10a1c4:
    // 0x10a1c4: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x10a1c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_10a1c8:
    // 0x10a1c8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x10a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_10a1cc:
    // 0x10a1cc: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x10a1ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_10a1d0:
    // 0x10a1d0: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x10a1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10a1d4:
    // 0x10a1d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10a1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10a1d8:
    // 0x10a1d8: 0xc0426e0  jal         func_109B80
label_10a1dc:
    if (ctx->pc == 0x10A1DCu) {
        ctx->pc = 0x10A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A1D8u;
        // 0x10a1dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A1E0u;
        goto label_10a1e0;
    }
    ctx->pc = 0x10A1D8u;
    SET_GPR_U32(ctx, 31, 0x10A1E0u);
    ctx->pc = 0x10A1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A1D8u;
    // 0x10a1dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109B80u;
    goto label_109b80;
    ctx->pc = 0x10A1E0u;
label_10a1e0:
    // 0x10a1e0: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
label_10a1e4:
    if (ctx->pc == 0x10A1E4u) {
        ctx->pc = 0x10A1E8u;
        goto label_10a1e8;
    }
    ctx->pc = 0x10A1E0u;
    {
        const bool branch_taken_0x10a1e0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10a1e0) {
            ctx->pc = 0x10A1F0u;
            goto label_10a1f0;
        }
    }
    ctx->pc = 0x10A1E8u;
label_10a1e8:
    // 0x10a1e8: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_10a1ec:
    if (ctx->pc == 0x10A1ECu) {
        ctx->pc = 0x10A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A1E8u;
        // 0x10a1ec: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A1F0u;
        goto label_10a1f0;
    }
    ctx->pc = 0x10A1E8u;
    {
        const bool branch_taken_0x10a1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A1E8u;
        // 0x10a1ec: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a1e8) {
            ctx->pc = 0x10A1D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a1d4;
        }
    }
    ctx->pc = 0x10A1F0u;
label_10a1f0:
    // 0x10a1f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10a1f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a1f4:
    // 0x10a1f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10a1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10a1f8:
    // 0x10a1f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10a1f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10a1fc:
    // 0x10a1fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10a1fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10a200:
    // 0x10a200: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10a200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10a204:
    // 0x10a204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10a204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10a208:
    // 0x10a208: 0x3e00008  jr          $ra
label_10a20c:
    if (ctx->pc == 0x10A20Cu) {
        ctx->pc = 0x10A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A208u;
        // 0x10a20c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A210u;
        goto label_fallthrough_0x10a208;
    }
    ctx->pc = 0x10A208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A208u;
        // 0x10a20c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10a208:
    ctx->pc = 0x10A210u;
}
