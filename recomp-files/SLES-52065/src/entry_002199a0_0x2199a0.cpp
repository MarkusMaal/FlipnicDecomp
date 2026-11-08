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

// Function: entry_002199a0
// Address: 0x2199a0 - 0x21a488
void entry_002199a0_0x2199a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002199a0_0x2199a0");
#endif

    switch (ctx->pc) {
        case 0x2199a0u: goto label_2199a0;
        case 0x2199a4u: goto label_2199a4;
        case 0x2199a8u: goto label_2199a8;
        case 0x2199acu: goto label_2199ac;
        case 0x2199b0u: goto label_2199b0;
        case 0x2199b4u: goto label_2199b4;
        case 0x2199b8u: goto label_2199b8;
        case 0x2199bcu: goto label_2199bc;
        case 0x2199c0u: goto label_2199c0;
        case 0x2199c4u: goto label_2199c4;
        case 0x2199c8u: goto label_2199c8;
        case 0x2199ccu: goto label_2199cc;
        case 0x2199d0u: goto label_2199d0;
        case 0x2199d4u: goto label_2199d4;
        case 0x2199d8u: goto label_2199d8;
        case 0x2199dcu: goto label_2199dc;
        case 0x2199e0u: goto label_2199e0;
        case 0x2199e4u: goto label_2199e4;
        case 0x2199e8u: goto label_2199e8;
        case 0x2199ecu: goto label_2199ec;
        case 0x2199f0u: goto label_2199f0;
        case 0x2199f4u: goto label_2199f4;
        case 0x2199f8u: goto label_2199f8;
        case 0x2199fcu: goto label_2199fc;
        case 0x219a00u: goto label_219a00;
        case 0x219a04u: goto label_219a04;
        case 0x219a08u: goto label_219a08;
        case 0x219a0cu: goto label_219a0c;
        case 0x219a10u: goto label_219a10;
        case 0x219a14u: goto label_219a14;
        case 0x219a18u: goto label_219a18;
        case 0x219a1cu: goto label_219a1c;
        case 0x219a20u: goto label_219a20;
        case 0x219a24u: goto label_219a24;
        case 0x219a28u: goto label_219a28;
        case 0x219a2cu: goto label_219a2c;
        case 0x219a30u: goto label_219a30;
        case 0x219a34u: goto label_219a34;
        case 0x219a38u: goto label_219a38;
        case 0x219a3cu: goto label_219a3c;
        case 0x219a40u: goto label_219a40;
        case 0x219a44u: goto label_219a44;
        case 0x219a48u: goto label_219a48;
        case 0x219a4cu: goto label_219a4c;
        case 0x219a50u: goto label_219a50;
        case 0x219a54u: goto label_219a54;
        case 0x219a58u: goto label_219a58;
        case 0x219a5cu: goto label_219a5c;
        case 0x219a60u: goto label_219a60;
        case 0x219a64u: goto label_219a64;
        case 0x219a68u: goto label_219a68;
        case 0x219a6cu: goto label_219a6c;
        case 0x219a70u: goto label_219a70;
        case 0x219a74u: goto label_219a74;
        case 0x219a78u: goto label_219a78;
        case 0x219a7cu: goto label_219a7c;
        case 0x219a80u: goto label_219a80;
        case 0x219a84u: goto label_219a84;
        case 0x219a88u: goto label_219a88;
        case 0x219a8cu: goto label_219a8c;
        case 0x219a90u: goto label_219a90;
        case 0x219a94u: goto label_219a94;
        case 0x219a98u: goto label_219a98;
        case 0x219a9cu: goto label_219a9c;
        case 0x219aa0u: goto label_219aa0;
        case 0x219aa4u: goto label_219aa4;
        case 0x219aa8u: goto label_219aa8;
        case 0x219aacu: goto label_219aac;
        case 0x219ab0u: goto label_219ab0;
        case 0x219ab4u: goto label_219ab4;
        case 0x219ab8u: goto label_219ab8;
        case 0x219abcu: goto label_219abc;
        case 0x219ac0u: goto label_219ac0;
        case 0x219ac4u: goto label_219ac4;
        case 0x219ac8u: goto label_219ac8;
        case 0x219accu: goto label_219acc;
        case 0x219ad0u: goto label_219ad0;
        case 0x219ad4u: goto label_219ad4;
        case 0x219ad8u: goto label_219ad8;
        case 0x219adcu: goto label_219adc;
        case 0x219ae0u: goto label_219ae0;
        case 0x219ae4u: goto label_219ae4;
        case 0x219ae8u: goto label_219ae8;
        case 0x219aecu: goto label_219aec;
        case 0x219af0u: goto label_219af0;
        case 0x219af4u: goto label_219af4;
        case 0x219af8u: goto label_219af8;
        case 0x219afcu: goto label_219afc;
        case 0x219b00u: goto label_219b00;
        case 0x219b04u: goto label_219b04;
        case 0x219b08u: goto label_219b08;
        case 0x219b0cu: goto label_219b0c;
        case 0x219b10u: goto label_219b10;
        case 0x219b14u: goto label_219b14;
        case 0x219b18u: goto label_219b18;
        case 0x219b1cu: goto label_219b1c;
        case 0x219b20u: goto label_219b20;
        case 0x219b24u: goto label_219b24;
        case 0x219b28u: goto label_219b28;
        case 0x219b2cu: goto label_219b2c;
        case 0x219b30u: goto label_219b30;
        case 0x219b34u: goto label_219b34;
        case 0x219b38u: goto label_219b38;
        case 0x219b3cu: goto label_219b3c;
        case 0x219b40u: goto label_219b40;
        case 0x219b44u: goto label_219b44;
        case 0x219b48u: goto label_219b48;
        case 0x219b4cu: goto label_219b4c;
        case 0x219b50u: goto label_219b50;
        case 0x219b54u: goto label_219b54;
        case 0x219b58u: goto label_219b58;
        case 0x219b5cu: goto label_219b5c;
        case 0x219b60u: goto label_219b60;
        case 0x219b64u: goto label_219b64;
        case 0x219b68u: goto label_219b68;
        case 0x219b6cu: goto label_219b6c;
        case 0x219b70u: goto label_219b70;
        case 0x219b74u: goto label_219b74;
        case 0x219b78u: goto label_219b78;
        case 0x219b7cu: goto label_219b7c;
        case 0x219b80u: goto label_219b80;
        case 0x219b84u: goto label_219b84;
        case 0x219b88u: goto label_219b88;
        case 0x219b8cu: goto label_219b8c;
        case 0x219b90u: goto label_219b90;
        case 0x219b94u: goto label_219b94;
        case 0x219b98u: goto label_219b98;
        case 0x219b9cu: goto label_219b9c;
        case 0x219ba0u: goto label_219ba0;
        case 0x219ba4u: goto label_219ba4;
        case 0x219ba8u: goto label_219ba8;
        case 0x219bacu: goto label_219bac;
        case 0x219bb0u: goto label_219bb0;
        case 0x219bb4u: goto label_219bb4;
        case 0x219bb8u: goto label_219bb8;
        case 0x219bbcu: goto label_219bbc;
        case 0x219bc0u: goto label_219bc0;
        case 0x219bc4u: goto label_219bc4;
        case 0x219bc8u: goto label_219bc8;
        case 0x219bccu: goto label_219bcc;
        case 0x219bd0u: goto label_219bd0;
        case 0x219bd4u: goto label_219bd4;
        case 0x219bd8u: goto label_219bd8;
        case 0x219bdcu: goto label_219bdc;
        case 0x219be0u: goto label_219be0;
        case 0x219be4u: goto label_219be4;
        case 0x219be8u: goto label_219be8;
        case 0x219becu: goto label_219bec;
        case 0x219bf0u: goto label_219bf0;
        case 0x219bf4u: goto label_219bf4;
        case 0x219bf8u: goto label_219bf8;
        case 0x219bfcu: goto label_219bfc;
        case 0x219c00u: goto label_219c00;
        case 0x219c04u: goto label_219c04;
        case 0x219c08u: goto label_219c08;
        case 0x219c0cu: goto label_219c0c;
        case 0x219c10u: goto label_219c10;
        case 0x219c14u: goto label_219c14;
        case 0x219c18u: goto label_219c18;
        case 0x219c1cu: goto label_219c1c;
        case 0x219c20u: goto label_219c20;
        case 0x219c24u: goto label_219c24;
        case 0x219c28u: goto label_219c28;
        case 0x219c2cu: goto label_219c2c;
        case 0x219c30u: goto label_219c30;
        case 0x219c34u: goto label_219c34;
        case 0x219c38u: goto label_219c38;
        case 0x219c3cu: goto label_219c3c;
        case 0x219c40u: goto label_219c40;
        case 0x219c44u: goto label_219c44;
        case 0x219c48u: goto label_219c48;
        case 0x219c4cu: goto label_219c4c;
        case 0x219c50u: goto label_219c50;
        case 0x219c54u: goto label_219c54;
        case 0x219c58u: goto label_219c58;
        case 0x219c5cu: goto label_219c5c;
        case 0x219c60u: goto label_219c60;
        case 0x219c64u: goto label_219c64;
        case 0x219c68u: goto label_219c68;
        case 0x219c6cu: goto label_219c6c;
        case 0x219c70u: goto label_219c70;
        case 0x219c74u: goto label_219c74;
        case 0x219c78u: goto label_219c78;
        case 0x219c7cu: goto label_219c7c;
        case 0x219c80u: goto label_219c80;
        case 0x219c84u: goto label_219c84;
        case 0x219c88u: goto label_219c88;
        case 0x219c8cu: goto label_219c8c;
        case 0x219c90u: goto label_219c90;
        case 0x219c94u: goto label_219c94;
        case 0x219c98u: goto label_219c98;
        case 0x219c9cu: goto label_219c9c;
        case 0x219ca0u: goto label_219ca0;
        case 0x219ca4u: goto label_219ca4;
        case 0x219ca8u: goto label_219ca8;
        case 0x219cacu: goto label_219cac;
        case 0x219cb0u: goto label_219cb0;
        case 0x219cb4u: goto label_219cb4;
        case 0x219cb8u: goto label_219cb8;
        case 0x219cbcu: goto label_219cbc;
        case 0x219cc0u: goto label_219cc0;
        case 0x219cc4u: goto label_219cc4;
        case 0x219cc8u: goto label_219cc8;
        case 0x219cccu: goto label_219ccc;
        case 0x219cd0u: goto label_219cd0;
        case 0x219cd4u: goto label_219cd4;
        case 0x219cd8u: goto label_219cd8;
        case 0x219cdcu: goto label_219cdc;
        case 0x219ce0u: goto label_219ce0;
        case 0x219ce4u: goto label_219ce4;
        case 0x219ce8u: goto label_219ce8;
        case 0x219cecu: goto label_219cec;
        case 0x219cf0u: goto label_219cf0;
        case 0x219cf4u: goto label_219cf4;
        case 0x219cf8u: goto label_219cf8;
        case 0x219cfcu: goto label_219cfc;
        case 0x219d00u: goto label_219d00;
        case 0x219d04u: goto label_219d04;
        case 0x219d08u: goto label_219d08;
        case 0x219d0cu: goto label_219d0c;
        case 0x219d10u: goto label_219d10;
        case 0x219d14u: goto label_219d14;
        case 0x219d18u: goto label_219d18;
        case 0x219d1cu: goto label_219d1c;
        case 0x219d20u: goto label_219d20;
        case 0x219d24u: goto label_219d24;
        case 0x219d28u: goto label_219d28;
        case 0x219d2cu: goto label_219d2c;
        case 0x219d30u: goto label_219d30;
        case 0x219d34u: goto label_219d34;
        case 0x219d38u: goto label_219d38;
        case 0x219d3cu: goto label_219d3c;
        case 0x219d40u: goto label_219d40;
        case 0x219d44u: goto label_219d44;
        case 0x219d48u: goto label_219d48;
        case 0x219d4cu: goto label_219d4c;
        case 0x219d50u: goto label_219d50;
        case 0x219d54u: goto label_219d54;
        case 0x219d58u: goto label_219d58;
        case 0x219d5cu: goto label_219d5c;
        case 0x219d60u: goto label_219d60;
        case 0x219d64u: goto label_219d64;
        case 0x219d68u: goto label_219d68;
        case 0x219d6cu: goto label_219d6c;
        case 0x219d70u: goto label_219d70;
        case 0x219d74u: goto label_219d74;
        case 0x219d78u: goto label_219d78;
        case 0x219d7cu: goto label_219d7c;
        case 0x219d80u: goto label_219d80;
        case 0x219d84u: goto label_219d84;
        case 0x219d88u: goto label_219d88;
        case 0x219d8cu: goto label_219d8c;
        case 0x219d90u: goto label_219d90;
        case 0x219d94u: goto label_219d94;
        case 0x219d98u: goto label_219d98;
        case 0x219d9cu: goto label_219d9c;
        case 0x219da0u: goto label_219da0;
        case 0x219da4u: goto label_219da4;
        case 0x219da8u: goto label_219da8;
        case 0x219dacu: goto label_219dac;
        case 0x219db0u: goto label_219db0;
        case 0x219db4u: goto label_219db4;
        case 0x219db8u: goto label_219db8;
        case 0x219dbcu: goto label_219dbc;
        case 0x219dc0u: goto label_219dc0;
        case 0x219dc4u: goto label_219dc4;
        case 0x219dc8u: goto label_219dc8;
        case 0x219dccu: goto label_219dcc;
        case 0x219dd0u: goto label_219dd0;
        case 0x219dd4u: goto label_219dd4;
        case 0x219dd8u: goto label_219dd8;
        case 0x219ddcu: goto label_219ddc;
        case 0x219de0u: goto label_219de0;
        case 0x219de4u: goto label_219de4;
        case 0x219de8u: goto label_219de8;
        case 0x219decu: goto label_219dec;
        case 0x219df0u: goto label_219df0;
        case 0x219df4u: goto label_219df4;
        case 0x219df8u: goto label_219df8;
        case 0x219dfcu: goto label_219dfc;
        case 0x219e00u: goto label_219e00;
        case 0x219e04u: goto label_219e04;
        case 0x219e08u: goto label_219e08;
        case 0x219e0cu: goto label_219e0c;
        case 0x219e10u: goto label_219e10;
        case 0x219e14u: goto label_219e14;
        case 0x219e18u: goto label_219e18;
        case 0x219e1cu: goto label_219e1c;
        case 0x219e20u: goto label_219e20;
        case 0x219e24u: goto label_219e24;
        case 0x219e28u: goto label_219e28;
        case 0x219e2cu: goto label_219e2c;
        case 0x219e30u: goto label_219e30;
        case 0x219e34u: goto label_219e34;
        case 0x219e38u: goto label_219e38;
        case 0x219e3cu: goto label_219e3c;
        case 0x219e40u: goto label_219e40;
        case 0x219e44u: goto label_219e44;
        case 0x219e48u: goto label_219e48;
        case 0x219e4cu: goto label_219e4c;
        case 0x219e50u: goto label_219e50;
        case 0x219e54u: goto label_219e54;
        case 0x219e58u: goto label_219e58;
        case 0x219e5cu: goto label_219e5c;
        case 0x219e60u: goto label_219e60;
        case 0x219e64u: goto label_219e64;
        case 0x219e68u: goto label_219e68;
        case 0x219e6cu: goto label_219e6c;
        case 0x219e70u: goto label_219e70;
        case 0x219e74u: goto label_219e74;
        case 0x219e78u: goto label_219e78;
        case 0x219e7cu: goto label_219e7c;
        case 0x219e80u: goto label_219e80;
        case 0x219e84u: goto label_219e84;
        case 0x219e88u: goto label_219e88;
        case 0x219e8cu: goto label_219e8c;
        case 0x219e90u: goto label_219e90;
        case 0x219e94u: goto label_219e94;
        case 0x219e98u: goto label_219e98;
        case 0x219e9cu: goto label_219e9c;
        case 0x219ea0u: goto label_219ea0;
        case 0x219ea4u: goto label_219ea4;
        case 0x219ea8u: goto label_219ea8;
        case 0x219eacu: goto label_219eac;
        case 0x219eb0u: goto label_219eb0;
        case 0x219eb4u: goto label_219eb4;
        case 0x219eb8u: goto label_219eb8;
        case 0x219ebcu: goto label_219ebc;
        case 0x219ec0u: goto label_219ec0;
        case 0x219ec4u: goto label_219ec4;
        case 0x219ec8u: goto label_219ec8;
        case 0x219eccu: goto label_219ecc;
        case 0x219ed0u: goto label_219ed0;
        case 0x219ed4u: goto label_219ed4;
        case 0x219ed8u: goto label_219ed8;
        case 0x219edcu: goto label_219edc;
        case 0x219ee0u: goto label_219ee0;
        case 0x219ee4u: goto label_219ee4;
        case 0x219ee8u: goto label_219ee8;
        case 0x219eecu: goto label_219eec;
        case 0x219ef0u: goto label_219ef0;
        case 0x219ef4u: goto label_219ef4;
        case 0x219ef8u: goto label_219ef8;
        case 0x219efcu: goto label_219efc;
        case 0x219f00u: goto label_219f00;
        case 0x219f04u: goto label_219f04;
        case 0x219f08u: goto label_219f08;
        case 0x219f0cu: goto label_219f0c;
        case 0x219f10u: goto label_219f10;
        case 0x219f14u: goto label_219f14;
        case 0x219f18u: goto label_219f18;
        case 0x219f1cu: goto label_219f1c;
        case 0x219f20u: goto label_219f20;
        case 0x219f24u: goto label_219f24;
        case 0x219f28u: goto label_219f28;
        case 0x219f2cu: goto label_219f2c;
        case 0x219f30u: goto label_219f30;
        case 0x219f34u: goto label_219f34;
        case 0x219f38u: goto label_219f38;
        case 0x219f3cu: goto label_219f3c;
        case 0x219f40u: goto label_219f40;
        case 0x219f44u: goto label_219f44;
        case 0x219f48u: goto label_219f48;
        case 0x219f4cu: goto label_219f4c;
        case 0x219f50u: goto label_219f50;
        case 0x219f54u: goto label_219f54;
        case 0x219f58u: goto label_219f58;
        case 0x219f5cu: goto label_219f5c;
        case 0x219f60u: goto label_219f60;
        case 0x219f64u: goto label_219f64;
        case 0x219f68u: goto label_219f68;
        case 0x219f6cu: goto label_219f6c;
        case 0x219f70u: goto label_219f70;
        case 0x219f74u: goto label_219f74;
        case 0x219f78u: goto label_219f78;
        case 0x219f7cu: goto label_219f7c;
        case 0x219f80u: goto label_219f80;
        case 0x219f84u: goto label_219f84;
        case 0x219f88u: goto label_219f88;
        case 0x219f8cu: goto label_219f8c;
        case 0x219f90u: goto label_219f90;
        case 0x219f94u: goto label_219f94;
        case 0x219f98u: goto label_219f98;
        case 0x219f9cu: goto label_219f9c;
        case 0x219fa0u: goto label_219fa0;
        case 0x219fa4u: goto label_219fa4;
        case 0x219fa8u: goto label_219fa8;
        case 0x219facu: goto label_219fac;
        case 0x219fb0u: goto label_219fb0;
        case 0x219fb4u: goto label_219fb4;
        case 0x219fb8u: goto label_219fb8;
        case 0x219fbcu: goto label_219fbc;
        case 0x219fc0u: goto label_219fc0;
        case 0x219fc4u: goto label_219fc4;
        case 0x219fc8u: goto label_219fc8;
        case 0x219fccu: goto label_219fcc;
        case 0x219fd0u: goto label_219fd0;
        case 0x219fd4u: goto label_219fd4;
        case 0x219fd8u: goto label_219fd8;
        case 0x219fdcu: goto label_219fdc;
        case 0x219fe0u: goto label_219fe0;
        case 0x219fe4u: goto label_219fe4;
        case 0x219fe8u: goto label_219fe8;
        case 0x219fecu: goto label_219fec;
        case 0x219ff0u: goto label_219ff0;
        case 0x219ff4u: goto label_219ff4;
        case 0x219ff8u: goto label_219ff8;
        case 0x219ffcu: goto label_219ffc;
        case 0x21a000u: goto label_21a000;
        case 0x21a004u: goto label_21a004;
        case 0x21a008u: goto label_21a008;
        case 0x21a00cu: goto label_21a00c;
        case 0x21a010u: goto label_21a010;
        case 0x21a014u: goto label_21a014;
        case 0x21a018u: goto label_21a018;
        case 0x21a01cu: goto label_21a01c;
        case 0x21a020u: goto label_21a020;
        case 0x21a024u: goto label_21a024;
        case 0x21a028u: goto label_21a028;
        case 0x21a02cu: goto label_21a02c;
        case 0x21a030u: goto label_21a030;
        case 0x21a034u: goto label_21a034;
        case 0x21a038u: goto label_21a038;
        case 0x21a03cu: goto label_21a03c;
        case 0x21a040u: goto label_21a040;
        case 0x21a044u: goto label_21a044;
        case 0x21a048u: goto label_21a048;
        case 0x21a04cu: goto label_21a04c;
        case 0x21a050u: goto label_21a050;
        case 0x21a054u: goto label_21a054;
        case 0x21a058u: goto label_21a058;
        case 0x21a05cu: goto label_21a05c;
        case 0x21a060u: goto label_21a060;
        case 0x21a064u: goto label_21a064;
        case 0x21a068u: goto label_21a068;
        case 0x21a06cu: goto label_21a06c;
        case 0x21a070u: goto label_21a070;
        case 0x21a074u: goto label_21a074;
        case 0x21a078u: goto label_21a078;
        case 0x21a07cu: goto label_21a07c;
        case 0x21a080u: goto label_21a080;
        case 0x21a084u: goto label_21a084;
        case 0x21a088u: goto label_21a088;
        case 0x21a08cu: goto label_21a08c;
        case 0x21a090u: goto label_21a090;
        case 0x21a094u: goto label_21a094;
        case 0x21a098u: goto label_21a098;
        case 0x21a09cu: goto label_21a09c;
        case 0x21a0a0u: goto label_21a0a0;
        case 0x21a0a4u: goto label_21a0a4;
        case 0x21a0a8u: goto label_21a0a8;
        case 0x21a0acu: goto label_21a0ac;
        case 0x21a0b0u: goto label_21a0b0;
        case 0x21a0b4u: goto label_21a0b4;
        case 0x21a0b8u: goto label_21a0b8;
        case 0x21a0bcu: goto label_21a0bc;
        case 0x21a0c0u: goto label_21a0c0;
        case 0x21a0c4u: goto label_21a0c4;
        case 0x21a0c8u: goto label_21a0c8;
        case 0x21a0ccu: goto label_21a0cc;
        case 0x21a0d0u: goto label_21a0d0;
        case 0x21a0d4u: goto label_21a0d4;
        case 0x21a0d8u: goto label_21a0d8;
        case 0x21a0dcu: goto label_21a0dc;
        case 0x21a0e0u: goto label_21a0e0;
        case 0x21a0e4u: goto label_21a0e4;
        case 0x21a0e8u: goto label_21a0e8;
        case 0x21a0ecu: goto label_21a0ec;
        case 0x21a0f0u: goto label_21a0f0;
        case 0x21a0f4u: goto label_21a0f4;
        case 0x21a0f8u: goto label_21a0f8;
        case 0x21a0fcu: goto label_21a0fc;
        case 0x21a100u: goto label_21a100;
        case 0x21a104u: goto label_21a104;
        case 0x21a108u: goto label_21a108;
        case 0x21a10cu: goto label_21a10c;
        case 0x21a110u: goto label_21a110;
        case 0x21a114u: goto label_21a114;
        case 0x21a118u: goto label_21a118;
        case 0x21a11cu: goto label_21a11c;
        case 0x21a120u: goto label_21a120;
        case 0x21a124u: goto label_21a124;
        case 0x21a128u: goto label_21a128;
        case 0x21a12cu: goto label_21a12c;
        case 0x21a130u: goto label_21a130;
        case 0x21a134u: goto label_21a134;
        case 0x21a138u: goto label_21a138;
        case 0x21a13cu: goto label_21a13c;
        case 0x21a140u: goto label_21a140;
        case 0x21a144u: goto label_21a144;
        case 0x21a148u: goto label_21a148;
        case 0x21a14cu: goto label_21a14c;
        case 0x21a150u: goto label_21a150;
        case 0x21a154u: goto label_21a154;
        case 0x21a158u: goto label_21a158;
        case 0x21a15cu: goto label_21a15c;
        case 0x21a160u: goto label_21a160;
        case 0x21a164u: goto label_21a164;
        case 0x21a168u: goto label_21a168;
        case 0x21a16cu: goto label_21a16c;
        case 0x21a170u: goto label_21a170;
        case 0x21a174u: goto label_21a174;
        case 0x21a178u: goto label_21a178;
        case 0x21a17cu: goto label_21a17c;
        case 0x21a180u: goto label_21a180;
        case 0x21a184u: goto label_21a184;
        case 0x21a188u: goto label_21a188;
        case 0x21a18cu: goto label_21a18c;
        case 0x21a190u: goto label_21a190;
        case 0x21a194u: goto label_21a194;
        case 0x21a198u: goto label_21a198;
        case 0x21a19cu: goto label_21a19c;
        case 0x21a1a0u: goto label_21a1a0;
        case 0x21a1a4u: goto label_21a1a4;
        case 0x21a1a8u: goto label_21a1a8;
        case 0x21a1acu: goto label_21a1ac;
        case 0x21a1b0u: goto label_21a1b0;
        case 0x21a1b4u: goto label_21a1b4;
        case 0x21a1b8u: goto label_21a1b8;
        case 0x21a1bcu: goto label_21a1bc;
        case 0x21a1c0u: goto label_21a1c0;
        case 0x21a1c4u: goto label_21a1c4;
        case 0x21a1c8u: goto label_21a1c8;
        case 0x21a1ccu: goto label_21a1cc;
        case 0x21a1d0u: goto label_21a1d0;
        case 0x21a1d4u: goto label_21a1d4;
        case 0x21a1d8u: goto label_21a1d8;
        case 0x21a1dcu: goto label_21a1dc;
        case 0x21a1e0u: goto label_21a1e0;
        case 0x21a1e4u: goto label_21a1e4;
        case 0x21a1e8u: goto label_21a1e8;
        case 0x21a1ecu: goto label_21a1ec;
        case 0x21a1f0u: goto label_21a1f0;
        case 0x21a1f4u: goto label_21a1f4;
        case 0x21a1f8u: goto label_21a1f8;
        case 0x21a1fcu: goto label_21a1fc;
        case 0x21a200u: goto label_21a200;
        case 0x21a204u: goto label_21a204;
        case 0x21a208u: goto label_21a208;
        case 0x21a20cu: goto label_21a20c;
        case 0x21a210u: goto label_21a210;
        case 0x21a214u: goto label_21a214;
        case 0x21a218u: goto label_21a218;
        case 0x21a21cu: goto label_21a21c;
        case 0x21a220u: goto label_21a220;
        case 0x21a224u: goto label_21a224;
        case 0x21a228u: goto label_21a228;
        case 0x21a22cu: goto label_21a22c;
        case 0x21a230u: goto label_21a230;
        case 0x21a234u: goto label_21a234;
        case 0x21a238u: goto label_21a238;
        case 0x21a23cu: goto label_21a23c;
        case 0x21a240u: goto label_21a240;
        case 0x21a244u: goto label_21a244;
        case 0x21a248u: goto label_21a248;
        case 0x21a24cu: goto label_21a24c;
        case 0x21a250u: goto label_21a250;
        case 0x21a254u: goto label_21a254;
        case 0x21a258u: goto label_21a258;
        case 0x21a25cu: goto label_21a25c;
        case 0x21a260u: goto label_21a260;
        case 0x21a264u: goto label_21a264;
        case 0x21a268u: goto label_21a268;
        case 0x21a26cu: goto label_21a26c;
        case 0x21a270u: goto label_21a270;
        case 0x21a274u: goto label_21a274;
        case 0x21a278u: goto label_21a278;
        case 0x21a27cu: goto label_21a27c;
        case 0x21a280u: goto label_21a280;
        case 0x21a284u: goto label_21a284;
        case 0x21a288u: goto label_21a288;
        case 0x21a28cu: goto label_21a28c;
        case 0x21a290u: goto label_21a290;
        case 0x21a294u: goto label_21a294;
        case 0x21a298u: goto label_21a298;
        case 0x21a29cu: goto label_21a29c;
        case 0x21a2a0u: goto label_21a2a0;
        case 0x21a2a4u: goto label_21a2a4;
        case 0x21a2a8u: goto label_21a2a8;
        case 0x21a2acu: goto label_21a2ac;
        case 0x21a2b0u: goto label_21a2b0;
        case 0x21a2b4u: goto label_21a2b4;
        case 0x21a2b8u: goto label_21a2b8;
        case 0x21a2bcu: goto label_21a2bc;
        case 0x21a2c0u: goto label_21a2c0;
        case 0x21a2c4u: goto label_21a2c4;
        case 0x21a2c8u: goto label_21a2c8;
        case 0x21a2ccu: goto label_21a2cc;
        case 0x21a2d0u: goto label_21a2d0;
        case 0x21a2d4u: goto label_21a2d4;
        case 0x21a2d8u: goto label_21a2d8;
        case 0x21a2dcu: goto label_21a2dc;
        case 0x21a2e0u: goto label_21a2e0;
        case 0x21a2e4u: goto label_21a2e4;
        case 0x21a2e8u: goto label_21a2e8;
        case 0x21a2ecu: goto label_21a2ec;
        case 0x21a2f0u: goto label_21a2f0;
        case 0x21a2f4u: goto label_21a2f4;
        case 0x21a2f8u: goto label_21a2f8;
        case 0x21a2fcu: goto label_21a2fc;
        case 0x21a300u: goto label_21a300;
        case 0x21a304u: goto label_21a304;
        case 0x21a308u: goto label_21a308;
        case 0x21a30cu: goto label_21a30c;
        case 0x21a310u: goto label_21a310;
        case 0x21a314u: goto label_21a314;
        case 0x21a318u: goto label_21a318;
        case 0x21a31cu: goto label_21a31c;
        case 0x21a320u: goto label_21a320;
        case 0x21a324u: goto label_21a324;
        case 0x21a328u: goto label_21a328;
        case 0x21a32cu: goto label_21a32c;
        case 0x21a330u: goto label_21a330;
        case 0x21a334u: goto label_21a334;
        case 0x21a338u: goto label_21a338;
        case 0x21a33cu: goto label_21a33c;
        case 0x21a340u: goto label_21a340;
        case 0x21a344u: goto label_21a344;
        case 0x21a348u: goto label_21a348;
        case 0x21a34cu: goto label_21a34c;
        case 0x21a350u: goto label_21a350;
        case 0x21a354u: goto label_21a354;
        case 0x21a358u: goto label_21a358;
        case 0x21a35cu: goto label_21a35c;
        case 0x21a360u: goto label_21a360;
        case 0x21a364u: goto label_21a364;
        case 0x21a368u: goto label_21a368;
        case 0x21a36cu: goto label_21a36c;
        case 0x21a370u: goto label_21a370;
        case 0x21a374u: goto label_21a374;
        case 0x21a378u: goto label_21a378;
        case 0x21a37cu: goto label_21a37c;
        case 0x21a380u: goto label_21a380;
        case 0x21a384u: goto label_21a384;
        case 0x21a388u: goto label_21a388;
        case 0x21a38cu: goto label_21a38c;
        case 0x21a390u: goto label_21a390;
        case 0x21a394u: goto label_21a394;
        case 0x21a398u: goto label_21a398;
        case 0x21a39cu: goto label_21a39c;
        case 0x21a3a0u: goto label_21a3a0;
        case 0x21a3a4u: goto label_21a3a4;
        case 0x21a3a8u: goto label_21a3a8;
        case 0x21a3acu: goto label_21a3ac;
        case 0x21a3b0u: goto label_21a3b0;
        case 0x21a3b4u: goto label_21a3b4;
        case 0x21a3b8u: goto label_21a3b8;
        case 0x21a3bcu: goto label_21a3bc;
        case 0x21a3c0u: goto label_21a3c0;
        case 0x21a3c4u: goto label_21a3c4;
        case 0x21a3c8u: goto label_21a3c8;
        case 0x21a3ccu: goto label_21a3cc;
        case 0x21a3d0u: goto label_21a3d0;
        case 0x21a3d4u: goto label_21a3d4;
        case 0x21a3d8u: goto label_21a3d8;
        case 0x21a3dcu: goto label_21a3dc;
        case 0x21a3e0u: goto label_21a3e0;
        case 0x21a3e4u: goto label_21a3e4;
        case 0x21a3e8u: goto label_21a3e8;
        case 0x21a3ecu: goto label_21a3ec;
        case 0x21a3f0u: goto label_21a3f0;
        case 0x21a3f4u: goto label_21a3f4;
        case 0x21a3f8u: goto label_21a3f8;
        case 0x21a3fcu: goto label_21a3fc;
        case 0x21a400u: goto label_21a400;
        case 0x21a404u: goto label_21a404;
        case 0x21a408u: goto label_21a408;
        case 0x21a40cu: goto label_21a40c;
        case 0x21a410u: goto label_21a410;
        case 0x21a414u: goto label_21a414;
        case 0x21a418u: goto label_21a418;
        case 0x21a41cu: goto label_21a41c;
        case 0x21a420u: goto label_21a420;
        case 0x21a424u: goto label_21a424;
        case 0x21a428u: goto label_21a428;
        case 0x21a42cu: goto label_21a42c;
        case 0x21a430u: goto label_21a430;
        case 0x21a434u: goto label_21a434;
        case 0x21a438u: goto label_21a438;
        case 0x21a43cu: goto label_21a43c;
        case 0x21a440u: goto label_21a440;
        case 0x21a444u: goto label_21a444;
        case 0x21a448u: goto label_21a448;
        case 0x21a44cu: goto label_21a44c;
        case 0x21a450u: goto label_21a450;
        case 0x21a454u: goto label_21a454;
        case 0x21a458u: goto label_21a458;
        case 0x21a45cu: goto label_21a45c;
        case 0x21a460u: goto label_21a460;
        case 0x21a464u: goto label_21a464;
        case 0x21a468u: goto label_21a468;
        case 0x21a46cu: goto label_21a46c;
        case 0x21a470u: goto label_21a470;
        case 0x21a474u: goto label_21a474;
        case 0x21a478u: goto label_21a478;
        case 0x21a47cu: goto label_21a47c;
        case 0x21a480u: goto label_21a480;
        case 0x21a484u: goto label_21a484;
        default: break;
    }

    ctx->pc = 0x2199a0u;

label_2199a0:
    // 0x2199a0: 0x0  nop
    ctx->pc = 0x2199a0u;
    // NOP
label_2199a4:
    // 0x2199a4: 0xffff  dsra32      $ra, $zero, 31
    ctx->pc = 0x2199a4u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> (32 + 31));
label_2199a8:
    // 0x2199a8: 0x8  jr          $zero
label_2199ac:
    if (ctx->pc == 0x2199ACu) {
        ctx->pc = 0x2199ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2199A8u;
        // 0x2199ac: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x2199AC raw=0x41200000");
        ctx->in_delay_slot = false;
        ctx->pc = 0x2199B0u;
        goto label_2199b0;
    }
    ctx->pc = 0x2199A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2199ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2199A8u;
        // 0x2199ac: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x2199AC raw=0x41200000");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2199A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2199B0u;
label_2199b0:
    // 0x2199b0: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2199b0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2199b4:
    // 0x2199b4: 0x0  nop
    ctx->pc = 0x2199b4u;
    // NOP
label_2199b8:
    // 0x2199b8: 0x2231e8  .word       0x002231E8                   # mfsa        $a2 # 002201C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2199b8u;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_2199bc:
    // 0x2199bc: 0x0  nop
    ctx->pc = 0x2199bcu;
    // NOP
label_2199c0:
    // 0x2199c0: 0x0  nop
    ctx->pc = 0x2199c0u;
    // NOP
label_2199c4:
    // 0x2199c4: 0x0  nop
    ctx->pc = 0x2199c4u;
    // NOP
label_2199c8:
    // 0x2199c8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2199c8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2199cc:
    // 0x2199cc: 0x0  nop
    ctx->pc = 0x2199ccu;
    // NOP
label_2199d0:
    // 0x2199d0: 0x0  nop
    ctx->pc = 0x2199d0u;
    // NOP
label_2199d4:
    // 0x2199d4: 0x0  nop
    ctx->pc = 0x2199d4u;
    // NOP
label_2199d8:
    // 0x2199d8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2199d8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2199dc:
    // 0x2199dc: 0x0  nop
    ctx->pc = 0x2199dcu;
    // NOP
label_2199e0:
    // 0x2199e0: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2199e0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2199e4:
    // 0x2199e4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2199e4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2199e8:
    // 0x2199e8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2199e8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2199ec:
    // 0x2199ec: 0x0  nop
    ctx->pc = 0x2199ecu;
    // NOP
label_2199f0:
    // 0x2199f0: 0x45000000  bc1f        . + 4 + (0x0 << 2)
label_2199f4:
    if (ctx->pc == 0x2199F4u) {
        ctx->pc = 0x2199F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2199F0u;
        // 0x2199f4: 0x45000000  bc1f        . + 4 + (0x0 << 2) (Delay Slot)
        // FPU branch instruction - handled elsewhere
        ctx->in_delay_slot = false;
        ctx->pc = 0x2199F8u;
        goto label_2199f8;
    }
    ctx->pc = 0x2199F0u;
    {
        const bool branch_taken_0x2199f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2199F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2199F0u;
        // 0x2199f4: 0x45000000  bc1f        . + 4 + (0x0 << 2) (Delay Slot)
        // FPU branch instruction - handled elsewhere
        ctx->in_delay_slot = false;
        if (branch_taken_0x2199f0) {
            ctx->pc = 0x2199F4u;
            goto label_2199f4;
        }
    }
    ctx->pc = 0x2199F8u;
label_2199f8:
    // 0x2199f8: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2199f8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x2199F8 raw=0x447A0000");
label_2199fc:
    // 0x2199fc: 0x0  nop
    ctx->pc = 0x2199fcu;
    // NOP
label_219a00:
    // 0x219a00: 0x43800000  .word       0x43800000                   # INVALID     $gp, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x219a00u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x219A00 raw=0x43800000");
label_219a04:
    // 0x219a04: 0x43800000  .word       0x43800000                   # INVALID     $gp, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x219a04u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x219A04 raw=0x43800000");
label_219a08:
    // 0x219a08: 0x0  nop
    ctx->pc = 0x219a08u;
    // NOP
label_219a0c:
    // 0x219a0c: 0x0  nop
    ctx->pc = 0x219a0cu;
    // NOP
label_219a10:
    // 0x219a10: 0x44000000  mfc1        $zero, $f0
    ctx->pc = 0x219a10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 0, bits); }
label_219a14:
    // 0x219a14: 0x43cd8000  .word       0x43CD8000                   # INVALID     $fp, $t5, -0x8000 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x219a14u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1E at 0x219A14 raw=0x43CD8000");
label_219a18:
    // 0x219a18: 0x0  nop
    ctx->pc = 0x219a18u;
    // NOP
label_219a1c:
    // 0x219a1c: 0x0  nop
    ctx->pc = 0x219a1cu;
    // NOP
label_219a20:
    // 0x219a20: 0x0  nop
    ctx->pc = 0x219a20u;
    // NOP
label_219a24:
    // 0x219a24: 0x0  nop
    ctx->pc = 0x219a24u;
    // NOP
label_219a28:
    // 0x219a28: 0x0  nop
    ctx->pc = 0x219a28u;
    // NOP
label_219a2c:
    // 0x219a2c: 0x0  nop
    ctx->pc = 0x219a2cu;
    // NOP
label_219a30:
    // 0x219a30: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x219a30u;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x219A30 raw=0x42000000");
label_219a34:
    // 0x219a34: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x219a34u;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x219A34 raw=0x42100000");
label_219a38:
    // 0x219a38: 0x0  nop
    ctx->pc = 0x219a38u;
    // NOP
label_219a3c:
    // 0x219a3c: 0x0  nop
    ctx->pc = 0x219a3cu;
    // NOP
label_219a40:
    // 0x219a40: 0x0  nop
    ctx->pc = 0x219a40u;
    // NOP
label_219a44:
    // 0x219a44: 0x0  nop
    ctx->pc = 0x219a44u;
    // NOP
label_219a48:
    // 0x219a48: 0x0  nop
    ctx->pc = 0x219a48u;
    // NOP
label_219a4c:
    // 0x219a4c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x219a4cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_219a50:
    // 0x219a50: 0x0  nop
    ctx->pc = 0x219a50u;
    // NOP
label_219a54:
    // 0x219a54: 0x0  nop
    ctx->pc = 0x219a54u;
    // NOP
label_219a58:
    // 0x219a58: 0x0  nop
    ctx->pc = 0x219a58u;
    // NOP
label_219a5c:
    // 0x219a5c: 0x0  nop
    ctx->pc = 0x219a5cu;
    // NOP
label_219a60:
    // 0x219a60: 0x0  nop
    ctx->pc = 0x219a60u;
    // NOP
label_219a64:
    // 0x219a64: 0x0  nop
    ctx->pc = 0x219a64u;
    // NOP
label_219a68:
    // 0x219a68: 0x0  nop
    ctx->pc = 0x219a68u;
    // NOP
label_219a6c:
    // 0x219a6c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x219a6cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_219a70:
    // 0x219a70: 0x2234a8  .word       0x002234A8                   # mfsa        $a2 # 00220480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x219a70u;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_219a74:
    // 0x219a74: 0x0  nop
    ctx->pc = 0x219a74u;
    // NOP
label_219a78:
    // 0x219a78: 0x2234b8  .word       0x002234B8                   # dsll        $a2, $v0, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219a78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 18);
label_219a7c:
    // 0x219a7c: 0x0  nop
    ctx->pc = 0x219a7cu;
    // NOP
label_219a80:
    // 0x219a80: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x219a80u;
    
label_219a84:
    // 0x219a84: 0x0  nop
    ctx->pc = 0x219a84u;
    // NOP
label_219a88:
    // 0x219a88: 0x0  nop
    ctx->pc = 0x219a88u;
    // NOP
label_219a8c:
    // 0x219a8c: 0x0  nop
    ctx->pc = 0x219a8cu;
    // NOP
label_219a90:
    // 0x219a90: 0x0  nop
    ctx->pc = 0x219a90u;
    // NOP
label_219a94:
    // 0x219a94: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x219a94u;
    
label_219a98:
    // 0x219a98: 0x0  nop
    ctx->pc = 0x219a98u;
    // NOP
label_219a9c:
    // 0x219a9c: 0x0  nop
    ctx->pc = 0x219a9cu;
    // NOP
label_219aa0:
    // 0x219aa0: 0x0  nop
    ctx->pc = 0x219aa0u;
    // NOP
label_219aa4:
    // 0x219aa4: 0x0  nop
    ctx->pc = 0x219aa4u;
    // NOP
label_219aa8:
    // 0x219aa8: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x219aa8u;
    
label_219aac:
    // 0x219aac: 0x0  nop
    ctx->pc = 0x219aacu;
    // NOP
label_219ab0:
    // 0x219ab0: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x219ab0u;
    
label_219ab4:
    // 0x219ab4: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x219ab4u;
    
label_219ab8:
    // 0x219ab8: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x219ab8u;
    
label_219abc:
    // 0x219abc: 0x0  nop
    ctx->pc = 0x219abcu;
    // NOP
label_219ac0:
    // 0x219ac0: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x219ac0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_219ac4:
    // 0x219ac4: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x219ac4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_219ac8:
    // 0x219ac8: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x219ac8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_219acc:
    // 0x219acc: 0x0  nop
    ctx->pc = 0x219accu;
    // NOP
label_219ad0:
    // 0x219ad0: 0x0  nop
    ctx->pc = 0x219ad0u;
    // NOP
label_219ad4:
    // 0x219ad4: 0xbecccccd  cache       0x0C, -0x3333($s6)
    ctx->pc = 0x219ad4u;
    // CACHE instruction (ignored)
label_219ad8:
    // 0x219ad8: 0xbdcccccd  cache       0x0C, -0x3333($t6)
    ctx->pc = 0x219ad8u;
    // CACHE instruction (ignored)
label_219adc:
    // 0x219adc: 0x0  nop
    ctx->pc = 0x219adcu;
    // NOP
label_219ae0:
    // 0x219ae0: 0xbf000000  cache       0x00, 0x0($t8)
    ctx->pc = 0x219ae0u;
    // CACHE instruction (ignored)
label_219ae4:
    // 0x219ae4: 0xbf000000  cache       0x00, 0x0($t8)
    ctx->pc = 0x219ae4u;
    // CACHE instruction (ignored)
label_219ae8:
    // 0x219ae8: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x219ae8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_219aec:
    // 0x219aec: 0x0  nop
    ctx->pc = 0x219aecu;
    // NOP
label_219af0:
    // 0x219af0: 0x3ef5c28f  .word       0x3EF5C28F                   # lui         $s5, 0xC28F # 02E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x219af0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_219af4:
    // 0x219af4: 0x3ef5c28f  .word       0x3EF5C28F                   # lui         $s5, 0xC28F # 02E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x219af4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_219af8:
    // 0x219af8: 0x3cf5c28f  .word       0x3CF5C28F                   # lui         $s5, 0xC28F # 00E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x219af8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_219afc:
    // 0x219afc: 0x0  nop
    ctx->pc = 0x219afcu;
    // NOP
label_219b00:
    // 0x219b00: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x219b00u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_219b04:
    // 0x219b04: 0x3ea8f5c3  .word       0x3EA8F5C3                   # lui         $t0, 0xF5C3 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x219b04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)62915 << 16));
label_219b08:
    // 0x219b08: 0x3e4ccccd  .word       0x3E4CCCCD                   # lui         $t4, 0xCCCD # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x219b08u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_219b0c:
    // 0x219b0c: 0x0  nop
    ctx->pc = 0x219b0cu;
    // NOP
label_219b10:
    // 0x219b10: 0x3e0f5c29  .word       0x3E0F5C29                   # lui         $t7, 0x5C29 # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x219b10u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_219b14:
    // 0x219b14: 0x3e0f5c29  .word       0x3E0F5C29                   # lui         $t7, 0x5C29 # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x219b14u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_219b18:
    // 0x219b18: 0x3ec28f5c  .word       0x3EC28F5C                   # lui         $v0, 0x8F5C # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x219b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36700 << 16));
label_219b1c:
    // 0x219b1c: 0x0  nop
    ctx->pc = 0x219b1cu;
    // NOP
label_219b20:
    // 0x219b20: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x219b20u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_219b24:
    // 0x219b24: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x219b24u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_219b28:
    // 0x219b28: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x219b28u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_219b2c:
    // 0x219b2c: 0x0  nop
    ctx->pc = 0x219b2cu;
    // NOP
label_219b30:
    // 0x219b30: 0x7f000000  sq          $zero, 0x0($t8)
    ctx->pc = 0x219b30u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 0), GPR_VEC(ctx, 0));
label_219b34:
    // 0x219b34: 0x7f047f02  sq          $a0, 0x7F02($t8)
    ctx->pc = 0x219b34u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 32514), GPR_VEC(ctx, 4));
label_219b38:
    // 0x219b38: 0x7f087f06  sq          $t0, 0x7F06($t8)
    ctx->pc = 0x219b38u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 32518), GPR_VEC(ctx, 8));
label_219b3c:
    // 0x219b3c: 0x7f0c7f0a  sq          $t4, 0x7F0A($t8)
    ctx->pc = 0x219b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 24), 32522), GPR_VEC(ctx, 12));
label_219b40:
    // 0x219b40: 0x7f107f0e  sq          $s0, 0x7F0E($t8)
    ctx->pc = 0x219b40u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 32526), GPR_VEC(ctx, 16));
label_219b44:
    // 0x219b44: 0x7f147f12  sq          $s4, 0x7F12($t8)
    ctx->pc = 0x219b44u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 32530), GPR_VEC(ctx, 20));
label_219b48:
    // 0x219b48: 0x7f187f16  sq          $t8, 0x7F16($t8)
    ctx->pc = 0x219b48u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 32534), GPR_VEC(ctx, 24));
label_219b4c:
    // 0x219b4c: 0x7f1c7f1a  sq          $gp, 0x7F1A($t8)
    ctx->pc = 0x219b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 24), 32538), GPR_VEC(ctx, 28));
label_219b50:
    // 0x219b50: 0x7f207f1e  sq          $zero, 0x7F1E($t9)
    ctx->pc = 0x219b50u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 32542), GPR_VEC(ctx, 0));
label_219b54:
    // 0x219b54: 0x7f247f22  sq          $a0, 0x7F22($t9)
    ctx->pc = 0x219b54u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 32546), GPR_VEC(ctx, 4));
label_219b58:
    // 0x219b58: 0x7f287f26  sq          $t0, 0x7F26($t9)
    ctx->pc = 0x219b58u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 32550), GPR_VEC(ctx, 8));
label_219b5c:
    // 0x219b5c: 0x7f2c7f2a  sq          $t4, 0x7F2A($t9)
    ctx->pc = 0x219b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 25), 32554), GPR_VEC(ctx, 12));
label_219b60:
    // 0x219b60: 0x7f307f2e  sq          $s0, 0x7F2E($t9)
    ctx->pc = 0x219b60u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 32558), GPR_VEC(ctx, 16));
label_219b64:
    // 0x219b64: 0x7f347f32  sq          $s4, 0x7F32($t9)
    ctx->pc = 0x219b64u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 32562), GPR_VEC(ctx, 20));
label_219b68:
    // 0x219b68: 0x7f387f36  sq          $t8, 0x7F36($t9)
    ctx->pc = 0x219b68u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 32566), GPR_VEC(ctx, 24));
label_219b6c:
    // 0x219b6c: 0x7f3c7f3a  sq          $gp, 0x7F3A($t9)
    ctx->pc = 0x219b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 25), 32570), GPR_VEC(ctx, 28));
label_219b70:
    // 0x219b70: 0x7f407f3e  sq          $zero, 0x7F3E($k0)
    ctx->pc = 0x219b70u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32574), GPR_VEC(ctx, 0));
label_219b74:
    // 0x219b74: 0x7f447f42  sq          $a0, 0x7F42($k0)
    ctx->pc = 0x219b74u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32578), GPR_VEC(ctx, 4));
label_219b78:
    // 0x219b78: 0x7f487f46  sq          $t0, 0x7F46($k0)
    ctx->pc = 0x219b78u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32582), GPR_VEC(ctx, 8));
label_219b7c:
    // 0x219b7c: 0x7f4c7f4a  sq          $t4, 0x7F4A($k0)
    ctx->pc = 0x219b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32586), GPR_VEC(ctx, 12));
label_219b80:
    // 0x219b80: 0x7f507f4e  sq          $s0, 0x7F4E($k0)
    ctx->pc = 0x219b80u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32590), GPR_VEC(ctx, 16));
label_219b84:
    // 0x219b84: 0x7f547f52  sq          $s4, 0x7F52($k0)
    ctx->pc = 0x219b84u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32594), GPR_VEC(ctx, 20));
label_219b88:
    // 0x219b88: 0x7f587f56  sq          $t8, 0x7F56($k0)
    ctx->pc = 0x219b88u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32598), GPR_VEC(ctx, 24));
label_219b8c:
    // 0x219b8c: 0x7f5c7f5a  sq          $gp, 0x7F5A($k0)
    ctx->pc = 0x219b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32602), GPR_VEC(ctx, 28));
label_219b90:
    // 0x219b90: 0x7f607f5e  sq          $zero, 0x7F5E($k1)
    ctx->pc = 0x219b90u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32606), GPR_VEC(ctx, 0));
label_219b94:
    // 0x219b94: 0x7f627f61  sq          $v0, 0x7F61($k1)
    ctx->pc = 0x219b94u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32609), GPR_VEC(ctx, 2));
label_219b98:
    // 0x219b98: 0x7f647f63  sq          $a0, 0x7F63($k1)
    ctx->pc = 0x219b98u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32611), GPR_VEC(ctx, 4));
label_219b9c:
    // 0x219b9c: 0x7f667f65  sq          $a2, 0x7F65($k1)
    ctx->pc = 0x219b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32613), GPR_VEC(ctx, 6));
label_219ba0:
    // 0x219ba0: 0x7f687f67  sq          $t0, 0x7F67($k1)
    ctx->pc = 0x219ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32615), GPR_VEC(ctx, 8));
label_219ba4:
    // 0x219ba4: 0x7f6a7f69  sq          $t2, 0x7F69($k1)
    ctx->pc = 0x219ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32617), GPR_VEC(ctx, 10));
label_219ba8:
    // 0x219ba8: 0x7f6c7f6b  sq          $t4, 0x7F6B($k1)
    ctx->pc = 0x219ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32619), GPR_VEC(ctx, 12));
label_219bac:
    // 0x219bac: 0x7f6e7f6d  sq          $t6, 0x7F6D($k1)
    ctx->pc = 0x219bacu;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32621), GPR_VEC(ctx, 14));
label_219bb0:
    // 0x219bb0: 0x6e7f7878  ldr         $ra, 0x7878($s3)
    ctx->pc = 0x219bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30840); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_219bb4:
    // 0x219bb4: 0x6c7f6d7f  ldr         $ra, 0x6D7F($v1)
    ctx->pc = 0x219bb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28031); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_219bb8:
    // 0x219bb8: 0x6a7f6b7f  ldl         $ra, 0x6B7F($s3)
    ctx->pc = 0x219bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 27519); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_219bbc:
    // 0x219bbc: 0x687f697f  ldl         $ra, 0x697F($v1)
    ctx->pc = 0x219bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27007); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_219bc0:
    // 0x219bc0: 0x667f677f  daddiu      $ra, $s3, 0x677F
    ctx->pc = 0x219bc0u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)26495);
label_219bc4:
    // 0x219bc4: 0x647f657f  daddiu      $ra, $v1, 0x657F
    ctx->pc = 0x219bc4u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25983);
label_219bc8:
    // 0x219bc8: 0x627f637f  daddi       $ra, $s3, 0x637F
    ctx->pc = 0x219bc8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)25471; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_219bcc:
    // 0x219bcc: 0x607f617f  daddi       $ra, $v1, 0x617F
    ctx->pc = 0x219bccu;
    { int64_t src = (int64_t)GPR_S64(ctx, 3); int64_t imm = (int64_t)(int32_t)24959; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_219bd0:
    // 0x219bd0: 0x5c7f5e7f  .word       0x5C7F5E7F                   # bgtzl       $v1, . + 4 + (0x5E7F << 2) # 001F0000 <InstrIdType: CPU_NORMAL>
label_219bd4:
    if (ctx->pc == 0x219BD4u) {
        ctx->pc = 0x219BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BD0u;
        // 0x219bd4: 0x587f5a7f  .word       0x587F5A7F                   # blezl       $v1, . + 4 + (0x5A7F << 2) # 001F0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x219BD4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x219BD8u;
        goto label_219bd8;
    }
    ctx->pc = 0x219BD0u;
    {
        const bool branch_taken_0x219bd0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x219bd0) {
            ctx->pc = 0x219BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219BD0u;
            // 0x219bd4: 0x587f5a7f  .word       0x587F5A7F                   # blezl       $v1, . + 4 + (0x5A7F << 2) # 001F0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x219BD4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2315D0u;
            return;
        }
    }
    ctx->pc = 0x219BD8u;
label_219bd8:
    // 0x219bd8: 0x547f567f  bnel        $v1, $ra, . + 4 + (0x567F << 2)
label_219bdc:
    if (ctx->pc == 0x219BDCu) {
        ctx->pc = 0x219BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BD8u;
        // 0x219bdc: 0x507f527f  beql        $v1, $ra, . + 4 + (0x527F << 2) (Delay Slot)
        // Likely branch instruction at 0x219BDC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x219BE0u;
        goto label_219be0;
    }
    ctx->pc = 0x219BD8u;
    {
        const bool branch_taken_0x219bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 31));
        if (branch_taken_0x219bd8) {
            ctx->pc = 0x219BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219BD8u;
            // 0x219bdc: 0x507f527f  beql        $v1, $ra, . + 4 + (0x527F << 2) (Delay Slot)
            // Likely branch instruction at 0x219BDC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F5D8u;
            return;
        }
    }
    ctx->pc = 0x219BE0u;
label_219be0:
    // 0x219be0: 0x4c7f4e7f  .word       0x4C7F4E7F                   # INVALID     $v1, $ra, 0x4E7F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x219be0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x219BE0 raw=0x4C7F4E7F");
label_219be4:
    // 0x219be4: 0x487f4a7f  .word       0x487F4A7F                   # INVALID     $v1, $ra, 0x4A7F # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x219be4u;
    throw std::runtime_error("Unhandled COP2 format: 0x3 at 0x219BE4 raw=0x487F4A7F");
label_219be8:
    // 0x219be8: 0x447f467f  .word       0x447F467F                   # INVALID     $v1, $ra, 0x467F # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x219be8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x3F at 0x219BE8 raw=0x447F467F");
label_219bec:
    // 0x219bec: 0x407f427f  .word       0x407F427F                   # INVALID     $v1, $ra, 0x427F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x219becu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x3 at 0x219BEC raw=0x407F427F");
label_219bf0:
    // 0x219bf0: 0x3c7f3e7f  .word       0x3C7F3E7F                   # lui         $ra, 0x3E7F # 00600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x219bf0u;
    SET_GPR_S32(ctx, 31, (int32_t)((uint32_t)15999 << 16));
label_219bf4:
    // 0x219bf4: 0x387f3a7f  xori        $ra, $v1, 0x3A7F
    ctx->pc = 0x219bf4u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)14975);
label_219bf8:
    // 0x219bf8: 0x347f367f  ori         $ra, $v1, 0x367F
    ctx->pc = 0x219bf8u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13951);
label_219bfc:
    // 0x219bfc: 0x307f327f  andi        $ra, $v1, 0x327F
    ctx->pc = 0x219bfcu;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12927);
label_219c00:
    // 0x219c00: 0x2c7f2e7f  sltiu       $ra, $v1, 0x2E7F
    ctx->pc = 0x219c00u;
    SET_GPR_U64(ctx, 31, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11903) ? 1 : 0);
label_219c04:
    // 0x219c04: 0x287f2a7f  slti        $ra, $v1, 0x2A7F
    ctx->pc = 0x219c04u;
    SET_GPR_U64(ctx, 31, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10879) ? 1 : 0);
label_219c08:
    // 0x219c08: 0x247f267f  addiu       $ra, $v1, 0x267F
    ctx->pc = 0x219c08u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 3), 9855));
label_219c0c:
    // 0x219c0c: 0x207f227f  addi        $ra, $v1, 0x227F
    ctx->pc = 0x219c0cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)8831, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_219c10:
    // 0x219c10: 0x1c7f1e7f  .word       0x1C7F1E7F                   # bgtz        $v1, . + 4 + (0x1E7F << 2) # 001F0000 <InstrIdType: CPU_NORMAL>
label_219c14:
    if (ctx->pc == 0x219C14u) {
        ctx->pc = 0x219C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C10u;
        // 0x219c14: 0x187f1a7f  .word       0x187F1A7F                   # blez        $v1, . + 4 + (0x1A7F << 2) # 001F0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x219C14 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x219C18u;
        goto label_219c18;
    }
    ctx->pc = 0x219C10u;
    {
        const bool branch_taken_0x219c10 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x219C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C10u;
        // 0x219c14: 0x187f1a7f  .word       0x187F1A7F                   # blez        $v1, . + 4 + (0x1A7F << 2) # 001F0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x219C14 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c10) {
            ctx->pc = 0x221610u;
            return;
        }
    }
    ctx->pc = 0x219C18u;
label_219c18:
    // 0x219c18: 0x147f167f  bne         $v1, $ra, . + 4 + (0x167F << 2)
label_219c1c:
    if (ctx->pc == 0x219C1Cu) {
        ctx->pc = 0x219C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C18u;
        // 0x219c1c: 0x107f127f  beq         $v1, $ra, . + 4 + (0x127F << 2) (Delay Slot)
        // Likely branch instruction at 0x219C1C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x219C20u;
        goto label_219c20;
    }
    ctx->pc = 0x219C18u;
    {
        const bool branch_taken_0x219c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 31));
        ctx->pc = 0x219C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C18u;
        // 0x219c1c: 0x107f127f  beq         $v1, $ra, . + 4 + (0x127F << 2) (Delay Slot)
        // Likely branch instruction at 0x219C1C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c18) {
            ctx->pc = 0x21F618u;
            return;
        }
    }
    ctx->pc = 0x219C20u;
label_219c20:
    // 0x219c20: 0xc7f0e7f  jal         func_1FC39FC
label_219c24:
    if (ctx->pc == 0x219C24u) {
        ctx->pc = 0x219C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C20u;
        // 0x219c24: 0x87f0a7f  j           func_1FC29FC (Delay Slot)
        // J 0x1FC29FC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x219C28u;
        goto label_219c28;
    }
    ctx->pc = 0x219C20u;
    SET_GPR_U32(ctx, 31, 0x219C28u);
    ctx->pc = 0x219C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219C20u;
    // 0x219c24: 0x87f0a7f  j           func_1FC29FC (Delay Slot)
    // J 0x1FC29FC - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC39FCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC39FCu, 0x219C20u, 0x219C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219C28u;
label_219c28:
    // 0x219c28: 0x47f067f  .word       0x047F067F                   # INVALID     $v1, $ra, 0x67F # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x219c28u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x1F at 0x219C28 raw=0x047F067F");
label_219c2c:
    // 0x219c2c: 0x7f027f  .word       0x007F027F                   # dsra32      $zero, $ra, 9 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219c2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 9));
label_219c30:
    // 0x219c30: 0x0  nop
    ctx->pc = 0x219c30u;
    // NOP
label_219c34:
    // 0x219c34: 0x0  nop
    ctx->pc = 0x219c34u;
    // NOP
label_219c38:
    // 0x219c38: 0xc100c0  .word       0x00C100C0                   # sll         $zero, $at, 3 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219c38u;
    
label_219c3c:
    // 0x219c3c: 0xc300c2  .word       0x00C300C2                   # srl         $zero, $v1, 3 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219c3cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_219c40:
    // 0x219c40: 0xc500c4  .word       0x00C500C4                   # sllv        $zero, $a1, $a2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219c40u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
label_219c44:
    // 0x219c44: 0xc700c6  .word       0x00C700C6                   # srlv        $zero, $a3, $a2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219c44u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
label_219c48:
    // 0x219c48: 0xc900c8  .word       0x00C900C8                   # jr          $a2 # 000900C0 <InstrIdType: CPU_SPECIAL>
label_219c4c:
    if (ctx->pc == 0x219C4Cu) {
        ctx->pc = 0x219C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C48u;
        // 0x219c4c: 0xcb00ca  .word       0x00CB00CA                   # movz        $zero, $a2, $t3 # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 11) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219C50u;
        goto label_219c50;
    }
    ctx->pc = 0x219C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = 0x219C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C48u;
        // 0x219c4c: 0xcb00ca  .word       0x00CB00CA                   # movz        $zero, $a2, $t3 # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 11) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219C48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x219C50u;
label_219c50:
    // 0x219c50: 0xcd00cc  .word       0x00CD00CC                   # syscall     3 # 00CD0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219c50u;
    ctx->pc = 0x219C54u;
runtime->handleSyscall(rdram, ctx, 0x33403u);
label_219c54:
    // 0x219c54: 0xcf00ce  .word       0x00CF00CE                   # INVALID     $a2, $t7, 0xCE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219c54u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x219C54 raw=0x00CF00CE");
label_219c58:
    // 0x219c58: 0x98908880  lwr         $s0, -0x7780($a0)
    ctx->pc = 0x219c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294936704); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
label_219c5c:
    // 0x219c5c: 0xb8b0a8a0  swr         $s0, -0x5760($a1)
    ctx->pc = 0x219c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294944928); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_219c60:
    // 0x219c60: 0xd8d0c8c0  lqc2        $vf16, -0x3740($a2)
    ctx->pc = 0x219c60u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 4294953152)));
label_219c64:
    // 0x219c64: 0xe8f0e8e0  swc2        $16, -0x1720($a3)
    ctx->pc = 0x219c64u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x219C64 raw=0xE8F0E8E0");
label_219c68:
    // 0x219c68: 0xc8d0d8e0  lwc2        $16, -0x2720($a2)
    ctx->pc = 0x219c68u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x219C68 raw=0xC8D0D8E0");
label_219c6c:
    // 0x219c6c: 0xa8b0b8c0  swl         $s0, -0x4740($a1)
    ctx->pc = 0x219c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294949056); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_219c70:
    // 0x219c70: 0x889098a0  lwl         $s0, -0x6760($a0)
    ctx->pc = 0x219c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294940832); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
label_219c74:
    // 0x219c74: 0x68707880  ldl         $s0, 0x7880($v1)
    ctx->pc = 0x219c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30848); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_219c78:
    // 0x219c78: 0x48505860  .word       0x48505860                   # cfc2.ni     $s0, $vi11 # 00000060 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x219c78u;
    SET_GPR_U32(ctx, 16, static_cast<uint32_t>(ctx->vi[11]));
label_219c7c:
    // 0x219c7c: 0x28303840  slti        $s0, $at, 0x3840
    ctx->pc = 0x219c7cu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)14400) ? 1 : 0);
label_219c80:
    // 0x219c80: 0x8101820  j           func_406080
label_219c84:
    if (ctx->pc == 0x219C84u) {
        ctx->pc = 0x219C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C80u;
        // 0x219c84: 0x18100800  .word       0x18100800                   # blez        $zero, . + 4 + (0x800 << 2) # 00100000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x219C84 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x219C88u;
        goto label_219c88;
    }
    ctx->pc = 0x219C80u;
    ctx->pc = 0x219C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219C80u;
    // 0x219c84: 0x18100800  .word       0x18100800                   # blez        $zero, . + 4 + (0x800 << 2) # 00100000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    // Likely branch instruction at 0x219C84 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x406080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406080u, 0x219C80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x219C88u;
label_219c88:
    // 0x219c88: 0x38302820  xori        $s0, $at, 0x2820
    ctx->pc = 0x219c88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)10272);
label_219c8c:
    // 0x219c8c: 0x58504840  .word       0x58504840                   # blezl       $v0, . + 4 + (0x4840 << 2) # 00100000 <InstrIdType: CPU_NORMAL>
label_219c90:
    if (ctx->pc == 0x219C90u) {
        ctx->pc = 0x219C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C8Cu;
        // 0x219c90: 0x78706860  lq          $s0, 0x6860($v1) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 3), 26720)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219C94u;
        goto label_219c94;
    }
    ctx->pc = 0x219C8Cu;
    {
        const bool branch_taken_0x219c8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x219c8c) {
            ctx->pc = 0x219C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219C8Cu;
            // 0x219c90: 0x78706860  lq          $s0, 0x6860($v1) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 3), 26720)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BD90u;
            return;
        }
    }
    ctx->pc = 0x219C94u;
label_219c94:
    // 0x219c94: 0x0  nop
    ctx->pc = 0x219c94u;
    // NOP
label_219c98:
    // 0x219c98: 0x1d7790  .word       0x001D7790                   # mfhi        $t6 # 001D0780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219c98u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_219c9c:
    // 0x219c9c: 0x1d77d0  .word       0x001D77D0                   # mfhi        $t6 # 001D07C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219c9cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_219ca0:
    // 0x219ca0: 0x1d7878  dsll        $t7, $sp, 1
    ctx->pc = 0x219ca0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 29) << 1);
label_219ca4:
    // 0x219ca4: 0x1d7928  .word       0x001D7928                   # mfsa        $t7 # 001D0100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x219ca4u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_219ca8:
    // 0x219ca8: 0x1d79d0  .word       0x001D79D0                   # mfhi        $t7 # 001D01C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219ca8u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_219cac:
    // 0x219cac: 0x1d7a78  dsll        $t7, $sp, 9
    ctx->pc = 0x219cacu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 29) << 9);
label_219cb0:
    // 0x219cb0: 0x1d7af0  tge         $zero, $sp, 491
    ctx->pc = 0x219cb0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219cb4:
    // 0x219cb4: 0x1d7cf8  dsll        $t7, $sp, 19
    ctx->pc = 0x219cb4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 29) << 19);
label_219cb8:
    // 0x219cb8: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219cb8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219cbc:
    // 0x219cbc: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219cbcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219cc0:
    // 0x219cc0: 0x1d7da0  .word       0x001D7DA0                   # add         $t7, $zero, $sp # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219cc0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_219cc4:
    // 0x219cc4: 0x1d7de0  .word       0x001D7DE0                   # add         $t7, $zero, $sp # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219cc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_219cc8:
    // 0x219cc8: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219cc8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219ccc:
    // 0x219ccc: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219cccu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219cd0:
    // 0x219cd0: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219cd0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219cd4:
    // 0x219cd4: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219cd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219cd8:
    // 0x219cd8: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219cd8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219cdc:
    // 0x219cdc: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219cdcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219ce0:
    // 0x219ce0: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219ce0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219ce4:
    // 0x219ce4: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219ce4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219ce8:
    // 0x219ce8: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219ce8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219cec:
    // 0x219cec: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219cecu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219cf0:
    // 0x219cf0: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219cf0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219cf4:
    // 0x219cf4: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219cf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219cf8:
    // 0x219cf8: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219cf8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219cfc:
    // 0x219cfc: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219cfcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d00:
    // 0x219d00: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d00u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d04:
    // 0x219d04: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d08:
    // 0x219d08: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d08u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d0c:
    // 0x219d0c: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d0cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d10:
    // 0x219d10: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d10u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d14:
    // 0x219d14: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d18:
    // 0x219d18: 0x1d7e90  .word       0x001D7E90                   # mfhi        $t7 # 001D0680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219d18u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_219d1c:
    // 0x219d1c: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d1cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d20:
    // 0x219d20: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d20u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d24:
    // 0x219d24: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d28:
    // 0x219d28: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d28u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d2c:
    // 0x219d2c: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d2cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d30:
    // 0x219d30: 0x1d7e98  .word       0x001D7E98                   # mult        $t7, $zero, $sp # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x219d30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_219d34:
    // 0x219d34: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d38:
    // 0x219d38: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d38u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d3c:
    // 0x219d3c: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d3cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d40:
    // 0x219d40: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d40u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d44:
    // 0x219d44: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d48:
    // 0x219d48: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d48u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d4c:
    // 0x219d4c: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d4cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d50:
    // 0x219d50: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d50u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d54:
    // 0x219d54: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d58:
    // 0x219d58: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d58u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d5c:
    // 0x219d5c: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d5cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d60:
    // 0x219d60: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d60u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d64:
    // 0x219d64: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d68:
    // 0x219d68: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d68u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d6c:
    // 0x219d6c: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d6cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d70:
    // 0x219d70: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d70u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d74:
    // 0x219d74: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d78:
    // 0x219d78: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d78u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d7c:
    // 0x219d7c: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d7cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d80:
    // 0x219d80: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d80u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d84:
    // 0x219d84: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d88:
    // 0x219d88: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d88u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d8c:
    // 0x219d8c: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d8cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d90:
    // 0x219d90: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d90u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d94:
    // 0x219d94: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219d94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219d98:
    // 0x219d98: 0x1d7ea0  .word       0x001D7EA0                   # add         $t7, $zero, $sp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219d98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_219d9c:
    // 0x219d9c: 0x1d7f38  dsll        $t7, $sp, 28
    ctx->pc = 0x219d9cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 29) << 28);
label_219da0:
    // 0x219da0: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219da0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219da4:
    // 0x219da4: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219da4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219da8:
    // 0x219da8: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219da8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219dac:
    // 0x219dac: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219dacu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219db0:
    // 0x219db0: 0x1d7f78  dsll        $t7, $sp, 29
    ctx->pc = 0x219db0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 29) << 29);
label_219db4:
    // 0x219db4: 0x1d7fd0  .word       0x001D7FD0                   # mfhi        $t7 # 001D07C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219db4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_219db8:
    // 0x219db8: 0x1d8030  tge         $zero, $sp, 512
    ctx->pc = 0x219db8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219dbc:
    // 0x219dbc: 0x1d8090  .word       0x001D8090                   # mfhi        $s0 # 001D0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219dbcu;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_219dc0:
    // 0x219dc0: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219dc0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219dc4:
    // 0x219dc4: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219dc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219dc8:
    // 0x219dc8: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219dc8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219dcc:
    // 0x219dcc: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219dccu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219dd0:
    // 0x219dd0: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219dd0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219dd4:
    // 0x219dd4: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219dd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219dd8:
    // 0x219dd8: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219dd8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219ddc:
    // 0x219ddc: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219ddcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219de0:
    // 0x219de0: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219de0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219de4:
    // 0x219de4: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219de4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219de8:
    // 0x219de8: 0x1d80f0  tge         $zero, $sp, 515
    ctx->pc = 0x219de8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219dec:
    // 0x219dec: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219decu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219df0:
    // 0x219df0: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219df0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219df4:
    // 0x219df4: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219df4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219df8:
    // 0x219df8: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219df8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219dfc:
    // 0x219dfc: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219dfcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e00:
    // 0x219e00: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e00u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e04:
    // 0x219e04: 0x1d80f8  dsll        $s0, $sp, 3
    ctx->pc = 0x219e04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 29) << 3);
label_219e08:
    // 0x219e08: 0x1d8138  dsll        $s0, $sp, 4
    ctx->pc = 0x219e08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 29) << 4);
label_219e0c:
    // 0x219e0c: 0x1d81e8  .word       0x001D81E8                   # mfsa        $s0 # 001D01C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x219e0cu;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_219e10:
    // 0x219e10: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e10u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e14:
    // 0x219e14: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e18:
    // 0x219e18: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e18u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e1c:
    // 0x219e1c: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e1cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e20:
    // 0x219e20: 0x1d81f0  tge         $zero, $sp, 519
    ctx->pc = 0x219e20u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e24:
    // 0x219e24: 0x1d8230  tge         $zero, $sp, 520
    ctx->pc = 0x219e24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e28:
    // 0x219e28: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e28u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e2c:
    // 0x219e2c: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e2cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e30:
    // 0x219e30: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e30u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e34:
    // 0x219e34: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e38:
    // 0x219e38: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e38u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e3c:
    // 0x219e3c: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e3cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e40:
    // 0x219e40: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e40u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e44:
    // 0x219e44: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e48:
    // 0x219e48: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e48u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e4c:
    // 0x219e4c: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e4cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e50:
    // 0x219e50: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e50u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e54:
    // 0x219e54: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e58:
    // 0x219e58: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e58u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e5c:
    // 0x219e5c: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e5cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e60:
    // 0x219e60: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e60u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e64:
    // 0x219e64: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e68:
    // 0x219e68: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e68u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e6c:
    // 0x219e6c: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e6cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e70:
    // 0x219e70: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e70u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e74:
    // 0x219e74: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e78:
    // 0x219e78: 0x1d8270  tge         $zero, $sp, 521
    ctx->pc = 0x219e78u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e7c:
    // 0x219e7c: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e7cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e80:
    // 0x219e80: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e80u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e84:
    // 0x219e84: 0x1d8318  .word       0x001D8318                   # mult        $s0, $zero, $sp # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x219e84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_219e88:
    // 0x219e88: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e88u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e8c:
    // 0x219e8c: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e8cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e90:
    // 0x219e90: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e90u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e94:
    // 0x219e94: 0x1d83b0  tge         $zero, $sp, 526
    ctx->pc = 0x219e94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219e98:
    // 0x219e98: 0x1d8bb8  dsll        $s1, $sp, 14
    ctx->pc = 0x219e98u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 29) << 14);
label_219e9c:
    // 0x219e9c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219e9cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x219E9C raw=0x00000001");
label_219ea0:
    // 0x219ea0: 0x1d8bb8  dsll        $s1, $sp, 14
    ctx->pc = 0x219ea0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 29) << 14);
label_219ea4:
    // 0x219ea4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219ea4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x219EA4 raw=0x00000001");
label_219ea8:
    // 0x219ea8: 0x1d8bb8  dsll        $s1, $sp, 14
    ctx->pc = 0x219ea8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 29) << 14);
label_219eac:
    // 0x219eac: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219eacu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x219EAC raw=0x00000001");
label_219eb0:
    // 0x219eb0: 0x1d8ad8  .word       0x001D8AD8                   # mult        $s1, $zero, $sp # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x219eb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_219eb4:
    // 0x219eb4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219eb4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x219EB4 raw=0x00000001");
label_219eb8:
    // 0x219eb8: 0x1d8bb8  dsll        $s1, $sp, 14
    ctx->pc = 0x219eb8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 29) << 14);
label_219ebc:
    // 0x219ebc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219ebcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x219EBC raw=0x00000001");
label_219ec0:
    // 0x219ec0: 0x1d8bb8  dsll        $s1, $sp, 14
    ctx->pc = 0x219ec0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 29) << 14);
label_219ec4:
    // 0x219ec4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219ec4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x219EC4 raw=0x00000001");
label_219ec8:
    // 0x219ec8: 0x1d8bb8  dsll        $s1, $sp, 14
    ctx->pc = 0x219ec8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 29) << 14);
label_219ecc:
    // 0x219ecc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219eccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x219ECC raw=0x00000001");
label_219ed0:
    // 0x219ed0: 0x1d8ad8  .word       0x001D8AD8                   # mult        $s1, $zero, $sp # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x219ed0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_219ed4:
    // 0x219ed4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219ed4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x219ED4 raw=0x00000001");
label_219ed8:
    // 0x219ed8: 0x1d6588  .word       0x001D6588                   # jr          $zero # 001D6580 <InstrIdType: CPU_SPECIAL>
label_219edc:
    if (ctx->pc == 0x219EDCu) {
        ctx->pc = 0x219EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219ED8u;
        // 0x219edc: 0x3  sra         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219EE0u;
        goto label_219ee0;
    }
    ctx->pc = 0x219ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x219EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219ED8u;
        // 0x219edc: 0x3  sra         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219ED8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x219EE0u;
label_219ee0:
    // 0x219ee0: 0x1d65c0  sll         $t4, $sp, 23
    ctx->pc = 0x219ee0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 29), 23));
label_219ee4:
    // 0x219ee4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x219ee4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_219ee8:
    // 0x219ee8: 0x1d7168  .word       0x001D7168                   # mfsa        $t6 # 001D0140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x219ee8u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_219eec:
    // 0x219eec: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x219eecu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_219ef0:
    // 0x219ef0: 0x1d83b8  dsll        $s0, $sp, 14
    ctx->pc = 0x219ef0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 29) << 14);
label_219ef4:
    // 0x219ef4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x219ef4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_219ef8:
    // 0x219ef8: 0x1d83f0  tge         $zero, $sp, 527
    ctx->pc = 0x219ef8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_219efc:
    // 0x219efc: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x219efcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_219f00:
    // 0x219f00: 0x1d8480  sll         $s0, $sp, 18
    ctx->pc = 0x219f00u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 29), 18));
label_219f04:
    // 0x219f04: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x219f04u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_219f08:
    // 0x219f08: 0x1d8488  .word       0x001D8488                   # jr          $zero # 001D8480 <InstrIdType: CPU_SPECIAL>
label_219f0c:
    if (ctx->pc == 0x219F0Cu) {
        ctx->pc = 0x219F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F08u;
        // 0x219f0c: 0x3  sra         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F10u;
        goto label_219f10;
    }
    ctx->pc = 0x219F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x219F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F08u;
        // 0x219f0c: 0x3  sra         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219F08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x219F10u;
label_219f10:
    // 0x219f10: 0x1d8538  dsll        $s0, $sp, 20
    ctx->pc = 0x219f10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 29) << 20);
label_219f14:
    // 0x219f14: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x219f14u;
    
label_219f18:
    // 0x219f18: 0x1d8bb8  dsll        $s1, $sp, 14
    ctx->pc = 0x219f18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 29) << 14);
label_219f1c:
    // 0x219f1c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219f1cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x219F1C raw=0x00000001");
label_219f20:
    // 0x219f20: 0x1d8ab8  dsll        $s1, $sp, 10
    ctx->pc = 0x219f20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 29) << 10);
label_219f24:
    // 0x219f24: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x219f24u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_219f28:
    // 0x219f28: 0x1d8ac0  sll         $s1, $sp, 11
    ctx->pc = 0x219f28u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 29), 11));
label_219f2c:
    // 0x219f2c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x219f2cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_219f30:
    // 0x219f30: 0x1d8ac8  .word       0x001D8AC8                   # jr          $zero # 001D8AC0 <InstrIdType: CPU_SPECIAL>
label_219f34:
    if (ctx->pc == 0x219F34u) {
        ctx->pc = 0x219F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F30u;
        // 0x219f34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x219F34 raw=0x00000001");
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F38u;
        goto label_219f38;
    }
    ctx->pc = 0x219F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x219F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F30u;
        // 0x219f34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x219F34 raw=0x00000001");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219F30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x219F38u;
label_219f38:
    // 0x219f38: 0x1d8ad0  .word       0x001D8AD0                   # mfhi        $s1 # 001D02C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219f38u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_219f3c:
    // 0x219f3c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x219f3cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_219f40:
    // 0x219f40: 0x1d8bb8  dsll        $s1, $sp, 14
    ctx->pc = 0x219f40u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 29) << 14);
label_219f44:
    // 0x219f44: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219f44u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x219F44 raw=0x00000001");
label_219f48:
    // 0x219f48: 0x1d8bb8  dsll        $s1, $sp, 14
    ctx->pc = 0x219f48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 29) << 14);
label_219f4c:
    // 0x219f4c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219f4cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x219F4C raw=0x00000001");
label_219f50:
    // 0x219f50: 0x1d8bb8  dsll        $s1, $sp, 14
    ctx->pc = 0x219f50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 29) << 14);
label_219f54:
    // 0x219f54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219f54u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x219F54 raw=0x00000001");
label_219f58:
    // 0x219f58: 0x1d8bb8  dsll        $s1, $sp, 14
    ctx->pc = 0x219f58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 29) << 14);
label_219f5c:
    // 0x219f5c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219f5cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x219F5C raw=0x00000001");
label_219f60:
    // 0x219f60: 0x1d8bb8  dsll        $s1, $sp, 14
    ctx->pc = 0x219f60u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 29) << 14);
label_219f64:
    // 0x219f64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219f64u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x219F64 raw=0x00000001");
label_219f68:
    // 0x219f68: 0x1d8bb8  dsll        $s1, $sp, 14
    ctx->pc = 0x219f68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 29) << 14);
label_219f6c:
    // 0x219f6c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219f6cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x219F6C raw=0x00000001");
label_219f70:
    // 0x219f70: 0x1d8bb8  dsll        $s1, $sp, 14
    ctx->pc = 0x219f70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 29) << 14);
label_219f74:
    // 0x219f74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219f74u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x219F74 raw=0x00000001");
label_219f78:
    // 0x219f78: 0x1d8bb8  dsll        $s1, $sp, 14
    ctx->pc = 0x219f78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 29) << 14);
label_219f7c:
    // 0x219f7c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219f7cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x219F7C raw=0x00000001");
label_219f80:
    // 0x219f80: 0x1d8bb8  dsll        $s1, $sp, 14
    ctx->pc = 0x219f80u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 29) << 14);
label_219f84:
    // 0x219f84: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219f84u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x219F84 raw=0x00000001");
label_219f88:
    // 0x219f88: 0x1d8ad8  .word       0x001D8AD8                   # mult        $s1, $zero, $sp # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x219f88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_219f8c:
    // 0x219f8c: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x219f8cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_219f90:
    // 0x219f90: 0x1d9f18  .word       0x001D9F18                   # mult        $s3, $zero, $sp # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x219f90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_219f94:
    // 0x219f94: 0x1d9f18  .word       0x001D9F18                   # mult        $s3, $zero, $sp # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x219f94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_219f98:
    // 0x219f98: 0x1d9f18  .word       0x001D9F18                   # mult        $s3, $zero, $sp # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x219f98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_219f9c:
    // 0x219f9c: 0x1d9f18  .word       0x001D9F18                   # mult        $s3, $zero, $sp # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x219f9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_219fa0:
    // 0x219fa0: 0x1d9f18  .word       0x001D9F18                   # mult        $s3, $zero, $sp # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x219fa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_219fa4:
    // 0x219fa4: 0x1d9f18  .word       0x001D9F18                   # mult        $s3, $zero, $sp # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x219fa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_219fa8:
    // 0x219fa8: 0x1d9f18  .word       0x001D9F18                   # mult        $s3, $zero, $sp # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x219fa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_219fac:
    // 0x219fac: 0x1d9f18  .word       0x001D9F18                   # mult        $s3, $zero, $sp # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x219facu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_219fb0:
    // 0x219fb0: 0x1d9f18  .word       0x001D9F18                   # mult        $s3, $zero, $sp # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x219fb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_219fb4:
    // 0x219fb4: 0x1d9f18  .word       0x001D9F18                   # mult        $s3, $zero, $sp # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x219fb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_219fb8:
    // 0x219fb8: 0x1d9f20  .word       0x001D9F20                   # add         $s3, $zero, $sp # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219fb8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_219fbc:
    // 0x219fbc: 0x1d9fd0  .word       0x001D9FD0                   # mfhi        $s3 # 001D07C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219fbcu;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_219fc0:
    // 0x219fc0: 0x1d9f18  .word       0x001D9F18                   # mult        $s3, $zero, $sp # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x219fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_219fc4:
    // 0x219fc4: 0x1d9f18  .word       0x001D9F18                   # mult        $s3, $zero, $sp # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x219fc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_219fc8:
    // 0x219fc8: 0x1d9f18  .word       0x001D9F18                   # mult        $s3, $zero, $sp # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x219fc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_219fcc:
    // 0x219fcc: 0x1da538  dsll        $s4, $sp, 20
    ctx->pc = 0x219fccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 29) << 20);
label_219fd0:
    // 0x219fd0: 0x0  nop
    ctx->pc = 0x219fd0u;
    // NOP
label_219fd4:
    // 0x219fd4: 0x0  nop
    ctx->pc = 0x219fd4u;
    // NOP
label_219fd8:
    // 0x219fd8: 0x0  nop
    ctx->pc = 0x219fd8u;
    // NOP
label_219fdc:
    // 0x219fdc: 0x0  nop
    ctx->pc = 0x219fdcu;
    // NOP
label_219fe0:
    // 0x219fe0: 0xc100c0  .word       0x00C100C0                   # sll         $zero, $at, 3 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219fe0u;
    
label_219fe4:
    // 0x219fe4: 0xc300c2  .word       0x00C300C2                   # srl         $zero, $v1, 3 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219fe4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_219fe8:
    // 0x219fe8: 0xc500c4  .word       0x00C500C4                   # sllv        $zero, $a1, $a2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219fe8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
label_219fec:
    // 0x219fec: 0xc700c6  .word       0x00C700C6                   # srlv        $zero, $a3, $a2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219fecu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
label_219ff0:
    // 0x219ff0: 0xc900c8  .word       0x00C900C8                   # jr          $a2 # 000900C0 <InstrIdType: CPU_SPECIAL>
label_219ff4:
    if (ctx->pc == 0x219FF4u) {
        ctx->pc = 0x219FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FF0u;
        // 0x219ff4: 0xcb00ca  .word       0x00CB00CA                   # movz        $zero, $a2, $t3 # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 11) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219FF8u;
        goto label_219ff8;
    }
    ctx->pc = 0x219FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = 0x219FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FF0u;
        // 0x219ff4: 0xcb00ca  .word       0x00CB00CA                   # movz        $zero, $a2, $t3 # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 11) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219FF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x219FF8u;
label_219ff8:
    // 0x219ff8: 0xcd00cc  .word       0x00CD00CC                   # syscall     3 # 00CD0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219ff8u;
    ctx->pc = 0x219FFCu;
runtime->handleSyscall(rdram, ctx, 0x33403u);
label_219ffc:
    // 0x219ffc: 0xcf00ce  .word       0x00CF00CE                   # INVALID     $a2, $t7, 0xCE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x219ffcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x219FFC raw=0x00CF00CE");
label_21a000:
    // 0x21a000: 0x98908880  lwr         $s0, -0x7780($a0)
    ctx->pc = 0x21a000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294936704); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
label_21a004:
    // 0x21a004: 0xb8b0a8a0  swr         $s0, -0x5760($a1)
    ctx->pc = 0x21a004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294944928); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_21a008:
    // 0x21a008: 0xd8d0c8c0  lqc2        $vf16, -0x3740($a2)
    ctx->pc = 0x21a008u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 4294953152)));
label_21a00c:
    // 0x21a00c: 0xe8f0e8e0  swc2        $16, -0x1720($a3)
    ctx->pc = 0x21a00cu;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x21A00C raw=0xE8F0E8E0");
label_21a010:
    // 0x21a010: 0xc8d0d8e0  lwc2        $16, -0x2720($a2)
    ctx->pc = 0x21a010u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x21A010 raw=0xC8D0D8E0");
label_21a014:
    // 0x21a014: 0xa8b0b8c0  swl         $s0, -0x4740($a1)
    ctx->pc = 0x21a014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294949056); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_21a018:
    // 0x21a018: 0x889098a0  lwl         $s0, -0x6760($a0)
    ctx->pc = 0x21a018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294940832); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
label_21a01c:
    // 0x21a01c: 0x68707880  ldl         $s0, 0x7880($v1)
    ctx->pc = 0x21a01cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30848); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_21a020:
    // 0x21a020: 0x48505860  .word       0x48505860                   # cfc2.ni     $s0, $vi11 # 00000060 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x21a020u;
    SET_GPR_U32(ctx, 16, static_cast<uint32_t>(ctx->vi[11]));
label_21a024:
    // 0x21a024: 0x28303840  slti        $s0, $at, 0x3840
    ctx->pc = 0x21a024u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)14400) ? 1 : 0);
label_21a028:
    // 0x21a028: 0x8101820  j           func_406080
label_21a02c:
    if (ctx->pc == 0x21A02Cu) {
        ctx->pc = 0x21A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A028u;
        // 0x21a02c: 0x18100800  .word       0x18100800                   # blez        $zero, . + 4 + (0x800 << 2) # 00100000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x21A02C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A030u;
        goto label_21a030;
    }
    ctx->pc = 0x21A028u;
    ctx->pc = 0x21A02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A028u;
    // 0x21a02c: 0x18100800  .word       0x18100800                   # blez        $zero, . + 4 + (0x800 << 2) # 00100000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    // Likely branch instruction at 0x21A02C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x406080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406080u, 0x21A028u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x21A030u;
label_21a030:
    // 0x21a030: 0x38302820  xori        $s0, $at, 0x2820
    ctx->pc = 0x21a030u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)10272);
label_21a034:
    // 0x21a034: 0x58504840  .word       0x58504840                   # blezl       $v0, . + 4 + (0x4840 << 2) # 00100000 <InstrIdType: CPU_NORMAL>
label_21a038:
    if (ctx->pc == 0x21A038u) {
        ctx->pc = 0x21A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A034u;
        // 0x21a038: 0x78706860  lq          $s0, 0x6860($v1) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 3), 26720)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A03Cu;
        goto label_21a03c;
    }
    ctx->pc = 0x21A034u;
    {
        const bool branch_taken_0x21a034 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21a034) {
            ctx->pc = 0x21A038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A034u;
            // 0x21a038: 0x78706860  lq          $s0, 0x6860($v1) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 3), 26720)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C138u;
            return;
        }
    }
    ctx->pc = 0x21A03Cu;
label_21a03c:
    // 0x21a03c: 0x0  nop
    ctx->pc = 0x21a03cu;
    // NOP
label_21a040:
    // 0x21a040: 0x1e0310  .word       0x001E0310                   # mfhi        $zero # 001E0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x21a040u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_21a044:
    // 0x21a044: 0x1e0310  .word       0x001E0310                   # mfhi        $zero # 001E0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x21a044u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_21a048:
    // 0x21a048: 0x1e0310  .word       0x001E0310                   # mfhi        $zero # 001E0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x21a048u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_21a04c:
    // 0x21a04c: 0x1e0310  .word       0x001E0310                   # mfhi        $zero # 001E0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x21a04cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_21a050:
    // 0x21a050: 0x1e0310  .word       0x001E0310                   # mfhi        $zero # 001E0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x21a050u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_21a054:
    // 0x21a054: 0x1e0310  .word       0x001E0310                   # mfhi        $zero # 001E0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x21a054u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_21a058:
    // 0x21a058: 0x1e0310  .word       0x001E0310                   # mfhi        $zero # 001E0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x21a058u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_21a05c:
    // 0x21a05c: 0x1e0310  .word       0x001E0310                   # mfhi        $zero # 001E0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x21a05cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_21a060:
    // 0x21a060: 0x1e0318  .word       0x001E0318                   # mult        $zero, $zero, $fp # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x21a060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21a064:
    // 0x21a064: 0x1e0318  .word       0x001E0318                   # mult        $zero, $zero, $fp # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x21a064u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21a068:
    // 0x21a068: 0x1e0318  .word       0x001E0318                   # mult        $zero, $zero, $fp # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x21a068u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21a06c:
    // 0x21a06c: 0x1e03a8  .word       0x001E03A8                   # mfsa        $zero # 001E0380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x21a06cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_21a070:
    // 0x21a070: 0x1e0538  dsll        $zero, $fp, 20
    ctx->pc = 0x21a070u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) << 20);
label_21a074:
    // 0x21a074: 0x1e0538  dsll        $zero, $fp, 20
    ctx->pc = 0x21a074u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) << 20);
label_21a078:
    // 0x21a078: 0x1e0318  .word       0x001E0318                   # mult        $zero, $zero, $fp # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x21a078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21a07c:
    // 0x21a07c: 0x1e05b8  dsll        $zero, $fp, 22
    ctx->pc = 0x21a07cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) << 22);
label_21a080:
    // 0x21a080: 0x0  nop
    ctx->pc = 0x21a080u;
    // NOP
label_21a084:
    // 0x21a084: 0x0  nop
    ctx->pc = 0x21a084u;
    // NOP
label_21a088:
    // 0x21a088: 0x0  nop
    ctx->pc = 0x21a088u;
    // NOP
label_21a08c:
    // 0x21a08c: 0x0  nop
    ctx->pc = 0x21a08cu;
    // NOP
label_21a090:
    // 0x21a090: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x21a090u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x21A090 raw=0x01010101");
label_21a094:
    // 0x21a094: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x21a094u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x21A094 raw=0x01010101");
label_21a098:
    // 0x21a098: 0x2020201  .word       0x02020201                   # INVALID     $s0, $v0, 0x201 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x21a098u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x21A098 raw=0x02020201");
label_21a09c:
    // 0x21a09c: 0x1010202  .word       0x01010202                   # srl         $zero, $at, 8 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x21a09cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 8));
label_21a0a0:
    // 0x21a0a0: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x21a0a0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x21A0A0 raw=0x01010101");
label_21a0a4:
    // 0x21a0a4: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x21a0a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x21A0A4 raw=0x01010101");
label_21a0a8:
    // 0x21a0a8: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x21a0a8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x21A0A8 raw=0x01010101");
label_21a0ac:
    // 0x21a0ac: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x21a0acu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x21A0AC raw=0x01010101");
label_21a0b0:
    // 0x21a0b0: 0x8080804  j           func_202010
label_21a0b4:
    if (ctx->pc == 0x21A0B4u) {
        ctx->pc = 0x21A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0B0u;
        // 0x21a0b4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A0B8u;
        goto label_21a0b8;
    }
    ctx->pc = 0x21A0B0u;
    ctx->pc = 0x21A0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A0B0u;
    // 0x21a0b4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202010u;
    FUN_00202010_0x202010(rdram, ctx, runtime); return;
    ctx->pc = 0x21A0B8u;
label_21a0b8:
    // 0x21a0b8: 0x8080808  j           func_202020
label_21a0bc:
    if (ctx->pc == 0x21A0BCu) {
        ctx->pc = 0x21A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0B8u;
        // 0x21a0bc: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A0C0u;
        goto label_21a0c0;
    }
    ctx->pc = 0x21A0B8u;
    ctx->pc = 0x21A0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A0B8u;
    // 0x21a0bc: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x21A0B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x21A0C0u;
label_21a0c0:
    // 0x21a0c0: 0x30303030  andi        $s0, $at, 0x3030
    ctx->pc = 0x21a0c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12336);
label_21a0c4:
    // 0x21a0c4: 0x30303030  andi        $s0, $at, 0x3030
    ctx->pc = 0x21a0c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12336);
label_21a0c8:
    // 0x21a0c8: 0x8083030  j           func_20C0C0
label_21a0cc:
    if (ctx->pc == 0x21A0CCu) {
        ctx->pc = 0x21A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0C8u;
        // 0x21a0cc: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A0D0u;
        goto label_21a0d0;
    }
    ctx->pc = 0x21A0C8u;
    ctx->pc = 0x21A0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A0C8u;
    // 0x21a0cc: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C0C0u, 0x21A0C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x21A0D0u;
label_21a0d0:
    // 0x21a0d0: 0xa0a0a008  sb          $zero, -0x5FF8($a1)
    ctx->pc = 0x21a0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294942728), (uint8_t)GPR_U32(ctx, 0));
label_21a0d4:
    // 0x21a0d4: 0x80a0a0a0  lb          $zero, -0x5F60($a1)
    ctx->pc = 0x21a0d4u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294942880)));
label_21a0d8:
    // 0x21a0d8: 0x80808080  lb          $zero, -0x7F80($a0)
    ctx->pc = 0x21a0d8u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294934656)));
label_21a0dc:
    // 0x21a0dc: 0x80808080  lb          $zero, -0x7F80($a0)
    ctx->pc = 0x21a0dcu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294934656)));
label_21a0e0:
    // 0x21a0e0: 0x80808080  lb          $zero, -0x7F80($a0)
    ctx->pc = 0x21a0e0u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294934656)));
label_21a0e4:
    // 0x21a0e4: 0x80808080  lb          $zero, -0x7F80($a0)
    ctx->pc = 0x21a0e4u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294934656)));
label_21a0e8:
    // 0x21a0e8: 0x8808080  j           func_2020200
label_21a0ec:
    if (ctx->pc == 0x21A0ECu) {
        ctx->pc = 0x21A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0E8u;
        // 0x21a0ec: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A0F0u;
        goto label_21a0f0;
    }
    ctx->pc = 0x21A0E8u;
    ctx->pc = 0x21A0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A0E8u;
    // 0x21a0ec: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x2020200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2020200u, 0x21A0E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x21A0F0u;
label_21a0f0:
    // 0x21a0f0: 0x60606008  daddi       $zero, $v1, 0x6008
    ctx->pc = 0x21a0f0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 3); int64_t imm = (int64_t)(int32_t)24584; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_21a0f4:
    // 0x21a0f4: 0x40606060  .word       0x40606060                   # INVALID     $v1, $zero, 0x6060 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x21a0f4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x3 at 0x21A0F4 raw=0x40606060");
label_21a0f8:
    // 0x21a0f8: 0x40404040  .word       0x40404040                   # cfc0        $zero, BadVaddr # 00000040 <InstrIdType: R5900_COP0>
    ctx->pc = 0x21a0f8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x21A0F8 raw=0x40404040");
label_21a0fc:
    // 0x21a0fc: 0x40404040  .word       0x40404040                   # cfc0        $zero, BadVaddr # 00000040 <InstrIdType: R5900_COP0>
    ctx->pc = 0x21a0fcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x21A0FC raw=0x40404040");
label_21a100:
    // 0x21a100: 0x40404040  .word       0x40404040                   # cfc0        $zero, BadVaddr # 00000040 <InstrIdType: R5900_COP0>
    ctx->pc = 0x21a100u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x21A100 raw=0x40404040");
label_21a104:
    // 0x21a104: 0x40404040  .word       0x40404040                   # cfc0        $zero, BadVaddr # 00000040 <InstrIdType: R5900_COP0>
    ctx->pc = 0x21a104u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x21A104 raw=0x40404040");
label_21a108:
    // 0x21a108: 0x8404040  j           func_1010100
label_21a10c:
    if (ctx->pc == 0x21A10Cu) {
        ctx->pc = 0x21A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A108u;
        // 0x21a10c: 0x1080808  .word       0x01080808                   # jr          $t0 # 00080800 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A110u;
        goto label_21a110;
    }
    ctx->pc = 0x21A108u;
    ctx->pc = 0x21A10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A108u;
    // 0x21a10c: 0x1080808  .word       0x01080808                   # jr          $t0 # 00080800 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    // JR $8 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1010100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1010100u, 0x21A108u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x21A110u;
label_21a110:
    // 0x21a110: 0x0  nop
    ctx->pc = 0x21a110u;
    // NOP
label_21a114:
    // 0x21a114: 0x0  nop
    ctx->pc = 0x21a114u;
    // NOP
label_21a118:
    // 0x21a118: 0x0  nop
    ctx->pc = 0x21a118u;
    // NOP
label_21a11c:
    // 0x21a11c: 0x0  nop
    ctx->pc = 0x21a11cu;
    // NOP
label_21a120:
    // 0x21a120: 0x0  nop
    ctx->pc = 0x21a120u;
    // NOP
label_21a124:
    // 0x21a124: 0x0  nop
    ctx->pc = 0x21a124u;
    // NOP
label_21a128:
    // 0x21a128: 0x0  nop
    ctx->pc = 0x21a128u;
    // NOP
label_21a12c:
    // 0x21a12c: 0x0  nop
    ctx->pc = 0x21a12cu;
    // NOP
label_21a130:
    // 0x21a130: 0x0  nop
    ctx->pc = 0x21a130u;
    // NOP
label_21a134:
    // 0x21a134: 0x0  nop
    ctx->pc = 0x21a134u;
    // NOP
label_21a138:
    // 0x21a138: 0x0  nop
    ctx->pc = 0x21a138u;
    // NOP
label_21a13c:
    // 0x21a13c: 0x0  nop
    ctx->pc = 0x21a13cu;
    // NOP
label_21a140:
    // 0x21a140: 0x0  nop
    ctx->pc = 0x21a140u;
    // NOP
label_21a144:
    // 0x21a144: 0x0  nop
    ctx->pc = 0x21a144u;
    // NOP
label_21a148:
    // 0x21a148: 0x0  nop
    ctx->pc = 0x21a148u;
    // NOP
label_21a14c:
    // 0x21a14c: 0x0  nop
    ctx->pc = 0x21a14cu;
    // NOP
label_21a150:
    // 0x21a150: 0x0  nop
    ctx->pc = 0x21a150u;
    // NOP
label_21a154:
    // 0x21a154: 0x0  nop
    ctx->pc = 0x21a154u;
    // NOP
label_21a158:
    // 0x21a158: 0x0  nop
    ctx->pc = 0x21a158u;
    // NOP
label_21a15c:
    // 0x21a15c: 0x0  nop
    ctx->pc = 0x21a15cu;
    // NOP
label_21a160:
    // 0x21a160: 0x0  nop
    ctx->pc = 0x21a160u;
    // NOP
label_21a164:
    // 0x21a164: 0x0  nop
    ctx->pc = 0x21a164u;
    // NOP
label_21a168:
    // 0x21a168: 0x0  nop
    ctx->pc = 0x21a168u;
    // NOP
label_21a16c:
    // 0x21a16c: 0x0  nop
    ctx->pc = 0x21a16cu;
    // NOP
label_21a170:
    // 0x21a170: 0x0  nop
    ctx->pc = 0x21a170u;
    // NOP
label_21a174:
    // 0x21a174: 0x0  nop
    ctx->pc = 0x21a174u;
    // NOP
label_21a178:
    // 0x21a178: 0x0  nop
    ctx->pc = 0x21a178u;
    // NOP
label_21a17c:
    // 0x21a17c: 0x0  nop
    ctx->pc = 0x21a17cu;
    // NOP
label_21a180:
    // 0x21a180: 0x0  nop
    ctx->pc = 0x21a180u;
    // NOP
label_21a184:
    // 0x21a184: 0x0  nop
    ctx->pc = 0x21a184u;
    // NOP
label_21a188:
    // 0x21a188: 0x0  nop
    ctx->pc = 0x21a188u;
    // NOP
label_21a18c:
    // 0x21a18c: 0x0  nop
    ctx->pc = 0x21a18cu;
    // NOP
label_21a190:
    // 0x21a190: 0x3020100  .word       0x03020100                   # sll         $zero, $v0, 4 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x21a190u;
    
label_21a194:
    // 0x21a194: 0x7060504  .word       0x07060504                   # INVALID     $t8, $a2, 0x504 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x21a194u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x21A194 raw=0x07060504");
label_21a198:
    // 0x21a198: 0xb0a0908  j           func_C282420
label_21a19c:
    if (ctx->pc == 0x21A19Cu) {
        ctx->pc = 0x21A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A198u;
        // 0x21a19c: 0xf0e0d0c  jal         func_C383430 (Delay Slot)
        // JAL 0xC383430 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A1A0u;
        goto label_21a1a0;
    }
    ctx->pc = 0x21A198u;
    ctx->pc = 0x21A19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A198u;
    // 0x21a19c: 0xf0e0d0c  jal         func_C383430 (Delay Slot)
    // JAL 0xC383430 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC282420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC282420u, 0x21A198u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x21A1A0u;
label_21a1a0:
    // 0x21a1a0: 0x13121110  beq         $t8, $s2, . + 4 + (0x1110 << 2)
label_21a1a4:
    if (ctx->pc == 0x21A1A4u) {
        ctx->pc = 0x21A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1A0u;
        // 0x21a1a4: 0x17161514  bne         $t8, $s6, . + 4 + (0x1514 << 2) (Delay Slot)
        // Likely branch instruction at 0x21A1A4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A1A8u;
        goto label_21a1a8;
    }
    ctx->pc = 0x21A1A0u;
    {
        const bool branch_taken_0x21a1a0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 18));
        ctx->pc = 0x21A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1A0u;
        // 0x21a1a4: 0x17161514  bne         $t8, $s6, . + 4 + (0x1514 << 2) (Delay Slot)
        // Likely branch instruction at 0x21A1A4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a1a0) {
            ctx->pc = 0x21E5E4u;
            return;
        }
    }
    ctx->pc = 0x21A1A8u;
label_21a1a8:
    // 0x21a1a8: 0x1b1a1918  .word       0x1B1A1918                   # blez        $t8, . + 4 + (0x1918 << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_21a1ac:
    if (ctx->pc == 0x21A1ACu) {
        ctx->pc = 0x21A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1A8u;
        // 0x21a1ac: 0x1f1e1d1c  .word       0x1F1E1D1C                   # bgtz        $t8, . + 4 + (0x1D1C << 2) # 001E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x21A1AC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A1B0u;
        goto label_21a1b0;
    }
    ctx->pc = 0x21A1A8u;
    {
        const bool branch_taken_0x21a1a8 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x21A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1A8u;
        // 0x21a1ac: 0x1f1e1d1c  .word       0x1F1E1D1C                   # bgtz        $t8, . + 4 + (0x1D1C << 2) # 001E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x21A1AC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a1a8) {
            ctx->pc = 0x22060Cu;
            return;
        }
    }
    ctx->pc = 0x21A1B0u;
label_21a1b0:
    // 0x21a1b0: 0x23222120  addi        $v0, $t9, 0x2120
    ctx->pc = 0x21a1b0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 25), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_21a1b4:
    // 0x21a1b4: 0x27262524  addiu       $a2, $t9, 0x2524
    ctx->pc = 0x21a1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 25), 9508));
label_21a1b8:
    // 0x21a1b8: 0x2b2a2928  slti        $t2, $t9, 0x2928
    ctx->pc = 0x21a1b8u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)10536) ? 1 : 0);
label_21a1bc:
    // 0x21a1bc: 0x2f2e2d2c  sltiu       $t6, $t9, 0x2D2C
    ctx->pc = 0x21a1bcu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)(int64_t)(int32_t)11564) ? 1 : 0);
label_21a1c0:
    // 0x21a1c0: 0x33323130  andi        $s2, $t9, 0x3130
    ctx->pc = 0x21a1c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)12592);
label_21a1c4:
    // 0x21a1c4: 0x37363534  ori         $s6, $t9, 0x3534
    ctx->pc = 0x21a1c4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)13620);
label_21a1c8:
    // 0x21a1c8: 0x3b3a3938  xori        $k0, $t9, 0x3938
    ctx->pc = 0x21a1c8u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 25) ^ (uint64_t)(uint16_t)14648);
label_21a1cc:
    // 0x21a1cc: 0x3f3e3d3c  .word       0x3F3E3D3C                   # lui         $fp, 0x3D3C # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x21a1ccu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)15676 << 16));
label_21a1d0:
    // 0x21a1d0: 0x63626140  daddi       $v0, $k1, 0x6140
    ctx->pc = 0x21a1d0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24896; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_21a1d4:
    // 0x21a1d4: 0x67666564  daddiu      $a2, $k1, 0x6564
    ctx->pc = 0x21a1d4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25956);
label_21a1d8:
    // 0x21a1d8: 0x6b6a6968  ldl         $t2, 0x6968($k1)
    ctx->pc = 0x21a1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26984); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_21a1dc:
    // 0x21a1dc: 0x6f6e6d6c  ldr         $t6, 0x6D6C($k1)
    ctx->pc = 0x21a1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28012); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_21a1e0:
    // 0x21a1e0: 0x73727170  .word       0x73727170                   # INVALID     $k1, $s2, 0x7170 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x21a1e0u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0x5 at 0x21A1E0 raw=0x73727170");
label_21a1e4:
    // 0x21a1e4: 0x77767574  .word       0x77767574                   # INVALID     $k1, $s6, 0x7574 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x21a1e4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x21A1E4 raw=0x77767574");
label_21a1e8:
    // 0x21a1e8: 0x5b7a7978  .word       0x5B7A7978                   # blezl       $k1, . + 4 + (0x7978 << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_21a1ec:
    if (ctx->pc == 0x21A1ECu) {
        ctx->pc = 0x21A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1E8u;
        // 0x21a1ec: 0x5f5e5d5c  .word       0x5F5E5D5C                   # bgtzl       $k0, . + 4 + (0x5D5C << 2) # 001E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x21A1EC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A1F0u;
        goto label_21a1f0;
    }
    ctx->pc = 0x21A1E8u;
    {
        const bool branch_taken_0x21a1e8 = (GPR_S32(ctx, 27) <= 0);
        if (branch_taken_0x21a1e8) {
            ctx->pc = 0x21A1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A1E8u;
            // 0x21a1ec: 0x5f5e5d5c  .word       0x5F5E5D5C                   # bgtzl       $k0, . + 4 + (0x5D5C << 2) # 001E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x21A1EC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2387CCu;
            return;
        }
    }
    ctx->pc = 0x21A1F0u;
label_21a1f0:
    // 0x21a1f0: 0x63626160  daddi       $v0, $k1, 0x6160
    ctx->pc = 0x21a1f0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24928; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_21a1f4:
    // 0x21a1f4: 0x67666564  daddiu      $a2, $k1, 0x6564
    ctx->pc = 0x21a1f4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25956);
label_21a1f8:
    // 0x21a1f8: 0x6b6a6968  ldl         $t2, 0x6968($k1)
    ctx->pc = 0x21a1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26984); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_21a1fc:
    // 0x21a1fc: 0x6f6e6d6c  ldr         $t6, 0x6D6C($k1)
    ctx->pc = 0x21a1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28012); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_21a200:
    // 0x21a200: 0x73727170  .word       0x73727170                   # INVALID     $k1, $s2, 0x7170 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x21a200u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0x5 at 0x21A200 raw=0x73727170");
label_21a204:
    // 0x21a204: 0x77767574  .word       0x77767574                   # INVALID     $k1, $s6, 0x7574 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x21a204u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x21A204 raw=0x77767574");
label_21a208:
    // 0x21a208: 0x7b7a7978  lq          $k0, 0x7978($k1)
    ctx->pc = 0x21a208u;
    SET_GPR_VEC(ctx, 26, READ128(ADD32(GPR_U32(ctx, 27), 31096)));
label_21a20c:
    // 0x21a20c: 0x7f7e7d7c  sq          $fp, 0x7D7C($k1)
    ctx->pc = 0x21a20cu;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32124), GPR_VEC(ctx, 30));
label_21a210:
    // 0x21a210: 0x83828180  lb          $v0, -0x7E80($gp)
    ctx->pc = 0x21a210u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934912)));
label_21a214:
    // 0x21a214: 0x87868584  lh          $a2, -0x7A7C($gp)
    ctx->pc = 0x21a214u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935940)));
label_21a218:
    // 0x21a218: 0x8b8a8988  lwl         $t2, -0x7678($gp)
    ctx->pc = 0x21a218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 4294936968); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
label_21a21c:
    // 0x21a21c: 0x8f8e8d8c  lw          $t6, -0x7274($gp)
    ctx->pc = 0x21a21cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937996)));
label_21a220:
    // 0x21a220: 0x93929190  lbu         $s2, -0x6E70($gp)
    ctx->pc = 0x21a220u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939024)));
label_21a224:
    // 0x21a224: 0x97969594  lhu         $s6, -0x6A6C($gp)
    ctx->pc = 0x21a224u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940052)));
label_21a228:
    // 0x21a228: 0x9b9a9998  lwr         $k0, -0x6668($gp)
    ctx->pc = 0x21a228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 4294941080); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 26) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 26) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 26, merged64); }
label_21a22c:
    // 0x21a22c: 0x9f9e9d9c  lwu         $fp, -0x6264($gp)
    ctx->pc = 0x21a22cu;
    SET_GPR_ZE32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 28), 4294942108)));
label_21a230:
    // 0x21a230: 0xa3a2a1a0  sb          $v0, -0x5E60($sp)
    ctx->pc = 0x21a230u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4294943136), (uint8_t)GPR_U32(ctx, 2));
label_21a234:
    // 0x21a234: 0xa7a6a5a4  sh          $a2, -0x5A5C($sp)
    ctx->pc = 0x21a234u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4294944164), (uint16_t)GPR_U32(ctx, 6));
label_21a238:
    // 0x21a238: 0xabaaa9a8  swl         $t2, -0x5658($sp)
    ctx->pc = 0x21a238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294945192); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_21a23c:
    // 0x21a23c: 0xafaeadac  sw          $t6, -0x5254($sp)
    ctx->pc = 0x21a23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4294946220), GPR_U32(ctx, 14));
label_21a240:
    // 0x21a240: 0xb3b2b1b0  sdl         $s2, -0x4E50($sp)
    ctx->pc = 0x21a240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294947248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_21a244:
    // 0x21a244: 0xb7b6b5b4  sdr         $s6, -0x4A4C($sp)
    ctx->pc = 0x21a244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294948276); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_21a248:
    // 0x21a248: 0xbbbab9b8  swr         $k0, -0x4648($sp)
    ctx->pc = 0x21a248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294949304); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 26); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_21a24c:
    // 0x21a24c: 0xbfbebdbc  cache       0x1E, -0x4244($sp)
    ctx->pc = 0x21a24cu;
    // CACHE instruction (ignored)
label_21a250:
    // 0x21a250: 0xc3c2c1c0  ll          $v0, -0x3E40($fp)
    ctx->pc = 0x21a250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 4294951360); SET_GPR_S32(ctx, 2, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_21a254:
    // 0x21a254: 0xc7c6c5c4  lwc1        $f6, -0x3A3C($fp)
    ctx->pc = 0x21a254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294952388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_21a258:
    // 0x21a258: 0xcbcac9c8  lwc2        $10, -0x3638($fp)
    ctx->pc = 0x21a258u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x21A258 raw=0xCBCAC9C8");
label_21a25c:
    // 0x21a25c: 0xcfcecdcc  pref        0x0E, -0x3234($fp)
    ctx->pc = 0x21a25cu;
    // PREF instruction (ignored)
label_21a260:
    // 0x21a260: 0xd3d2d1d0  lld         $s2, -0x2E30($fp)
    ctx->pc = 0x21a260u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x21A260 raw=0xD3D2D1D0");
label_21a264:
    // 0x21a264: 0xd7d6d5d4  ldc1        $f22, -0x2A2C($fp)
    ctx->pc = 0x21a264u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x21A264 raw=0xD7D6D5D4");
label_21a268:
    // 0x21a268: 0xdbdad9d8  lqc2        $vf26, -0x2628($fp)
    ctx->pc = 0x21a268u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 4294957528)));
label_21a26c:
    // 0x21a26c: 0xdfdedddc  ld          $fp, -0x2224($fp)
    ctx->pc = 0x21a26cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 30), 4294958556)));
label_21a270:
    // 0x21a270: 0xe3e2e1e0  sc          $v0, -0x1E20($ra)
    ctx->pc = 0x21a270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 4294959584); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 2)); SET_GPR_S32(ctx, 2, 1); } else { SET_GPR_S32(ctx, 2, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
label_21a274:
    // 0x21a274: 0xe7e6e5e4  swc1        $f6, -0x1A1C($ra)
    ctx->pc = 0x21a274u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 31), 4294960612), bits); }
label_21a278:
    // 0x21a278: 0xebeae9e8  swc2        $10, -0x1618($ra)
    ctx->pc = 0x21a278u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x21A278 raw=0xEBEAE9E8");
label_21a27c:
    // 0x21a27c: 0xefeeedec  .word       0xEFEEEDEC                   # INVALID     $ra, $t6, -0x1214 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x21a27cu;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x21A27C raw=0xEFEEEDEC");
label_21a280:
    // 0x21a280: 0xf3f2f1f0  scd         $s2, -0xE10($ra)
    ctx->pc = 0x21a280u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x21A280 raw=0xF3F2F1F0");
label_21a284:
    // 0x21a284: 0xf7f6f5f4  sdc1        $f22, -0xA0C($ra)
    ctx->pc = 0x21a284u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x21A284 raw=0xF7F6F5F4");
label_21a288:
    // 0x21a288: 0xfbfaf9f8  sqc2        $vf26, -0x608($ra)
    ctx->pc = 0x21a288u;
    WRITE128(ADD32(GPR_U32(ctx, 31), 4294965752), _mm_castps_si128(ctx->vu0_vf[26]));
label_21a28c:
    // 0x21a28c: 0xfffefdfc  sd          $fp, -0x204($ra)
    ctx->pc = 0x21a28cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294966780), GPR_U64(ctx, 30));
label_21a290:
    // 0x21a290: 0x3020100  .word       0x03020100                   # sll         $zero, $v0, 4 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x21a290u;
    
label_21a294:
    // 0x21a294: 0x7060504  .word       0x07060504                   # INVALID     $t8, $a2, 0x504 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x21a294u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x21A294 raw=0x07060504");
label_21a298:
    // 0x21a298: 0xb0a0908  j           func_C282420
label_21a29c:
    if (ctx->pc == 0x21A29Cu) {
        ctx->pc = 0x21A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A298u;
        // 0x21a29c: 0xf0e0d0c  jal         func_C383430 (Delay Slot)
        // JAL 0xC383430 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A2A0u;
        goto label_21a2a0;
    }
    ctx->pc = 0x21A298u;
    ctx->pc = 0x21A29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A298u;
    // 0x21a29c: 0xf0e0d0c  jal         func_C383430 (Delay Slot)
    // JAL 0xC383430 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC282420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC282420u, 0x21A298u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x21A2A0u;
label_21a2a0:
    // 0x21a2a0: 0x13121110  beq         $t8, $s2, . + 4 + (0x1110 << 2)
label_21a2a4:
    if (ctx->pc == 0x21A2A4u) {
        ctx->pc = 0x21A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2A0u;
        // 0x21a2a4: 0x17161514  bne         $t8, $s6, . + 4 + (0x1514 << 2) (Delay Slot)
        // Likely branch instruction at 0x21A2A4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A2A8u;
        goto label_21a2a8;
    }
    ctx->pc = 0x21A2A0u;
    {
        const bool branch_taken_0x21a2a0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 18));
        ctx->pc = 0x21A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2A0u;
        // 0x21a2a4: 0x17161514  bne         $t8, $s6, . + 4 + (0x1514 << 2) (Delay Slot)
        // Likely branch instruction at 0x21A2A4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2a0) {
            ctx->pc = 0x21E6E4u;
            return;
        }
    }
    ctx->pc = 0x21A2A8u;
label_21a2a8:
    // 0x21a2a8: 0x1b1a1918  .word       0x1B1A1918                   # blez        $t8, . + 4 + (0x1918 << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_21a2ac:
    if (ctx->pc == 0x21A2ACu) {
        ctx->pc = 0x21A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2A8u;
        // 0x21a2ac: 0x1f1e1d1c  .word       0x1F1E1D1C                   # bgtz        $t8, . + 4 + (0x1D1C << 2) # 001E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x21A2AC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A2B0u;
        goto label_21a2b0;
    }
    ctx->pc = 0x21A2A8u;
    {
        const bool branch_taken_0x21a2a8 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x21A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2A8u;
        // 0x21a2ac: 0x1f1e1d1c  .word       0x1F1E1D1C                   # bgtz        $t8, . + 4 + (0x1D1C << 2) # 001E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x21A2AC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2a8) {
            ctx->pc = 0x22070Cu;
            return;
        }
    }
    ctx->pc = 0x21A2B0u;
label_21a2b0:
    // 0x21a2b0: 0x23222120  addi        $v0, $t9, 0x2120
    ctx->pc = 0x21a2b0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 25), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_21a2b4:
    // 0x21a2b4: 0x27262524  addiu       $a2, $t9, 0x2524
    ctx->pc = 0x21a2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 25), 9508));
label_21a2b8:
    // 0x21a2b8: 0x2b2a2928  slti        $t2, $t9, 0x2928
    ctx->pc = 0x21a2b8u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)10536) ? 1 : 0);
label_21a2bc:
    // 0x21a2bc: 0x2f2e2d2c  sltiu       $t6, $t9, 0x2D2C
    ctx->pc = 0x21a2bcu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)(int64_t)(int32_t)11564) ? 1 : 0);
label_21a2c0:
    // 0x21a2c0: 0x33323130  andi        $s2, $t9, 0x3130
    ctx->pc = 0x21a2c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)12592);
label_21a2c4:
    // 0x21a2c4: 0x37363534  ori         $s6, $t9, 0x3534
    ctx->pc = 0x21a2c4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)13620);
label_21a2c8:
    // 0x21a2c8: 0x3b3a3938  xori        $k0, $t9, 0x3938
    ctx->pc = 0x21a2c8u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 25) ^ (uint64_t)(uint16_t)14648);
label_21a2cc:
    // 0x21a2cc: 0x3f3e3d3c  .word       0x3F3E3D3C                   # lui         $fp, 0x3D3C # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x21a2ccu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)15676 << 16));
label_21a2d0:
    // 0x21a2d0: 0x43424140  .word       0x43424140                   # INVALID     $k0, $v0, 0x4140 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x21a2d0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x21A2D0 raw=0x43424140");
label_21a2d4:
    // 0x21a2d4: 0x47464544  .word       0x47464544                   # INVALID     $k0, $a2, 0x4544 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x21a2d4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x4 at 0x21A2D4 raw=0x47464544");
label_21a2d8:
    // 0x21a2d8: 0x4b4a4948  vmaddx.xz   $vf5, $vf9, $vf10x
    ctx->pc = 0x21a2d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_21a2dc:
    // 0x21a2dc: 0x4f4e4d4c  .word       0x4F4E4D4C                   # INVALID     $k0, $t6, 0x4D4C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x21a2dcu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x21A2DC raw=0x4F4E4D4C");
label_21a2e0:
    // 0x21a2e0: 0x53525150  beql        $k0, $s2, . + 4 + (0x5150 << 2)
label_21a2e4:
    if (ctx->pc == 0x21A2E4u) {
        ctx->pc = 0x21A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2E0u;
        // 0x21a2e4: 0x57565554  bnel        $k0, $s6, . + 4 + (0x5554 << 2) (Delay Slot)
        // Likely branch instruction at 0x21A2E4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A2E8u;
        goto label_21a2e8;
    }
    ctx->pc = 0x21A2E0u;
    {
        const bool branch_taken_0x21a2e0 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 18));
        if (branch_taken_0x21a2e0) {
            ctx->pc = 0x21A2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A2E0u;
            // 0x21a2e4: 0x57565554  bnel        $k0, $s6, . + 4 + (0x5554 << 2) (Delay Slot)
            // Likely branch instruction at 0x21A2E4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E824u;
            return;
        }
    }
    ctx->pc = 0x21A2E8u;
label_21a2e8:
    // 0x21a2e8: 0x5b5a5958  .word       0x5B5A5958                   # blezl       $k0, . + 4 + (0x5958 << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_21a2ec:
    if (ctx->pc == 0x21A2ECu) {
        ctx->pc = 0x21A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2E8u;
        // 0x21a2ec: 0x5f5e5d5c  .word       0x5F5E5D5C                   # bgtzl       $k0, . + 4 + (0x5D5C << 2) # 001E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x21A2EC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A2F0u;
        goto label_21a2f0;
    }
    ctx->pc = 0x21A2E8u;
    {
        const bool branch_taken_0x21a2e8 = (GPR_S32(ctx, 26) <= 0);
        if (branch_taken_0x21a2e8) {
            ctx->pc = 0x21A2ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A2E8u;
            // 0x21a2ec: 0x5f5e5d5c  .word       0x5F5E5D5C                   # bgtzl       $k0, . + 4 + (0x5D5C << 2) # 001E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x21A2EC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x23084Cu;
            return;
        }
    }
    ctx->pc = 0x21A2F0u;
label_21a2f0:
    // 0x21a2f0: 0x43424160  .word       0x43424160                   # INVALID     $k0, $v0, 0x4160 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x21a2f0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x21A2F0 raw=0x43424160");
label_21a2f4:
    // 0x21a2f4: 0x47464544  .word       0x47464544                   # INVALID     $k0, $a2, 0x4544 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x21a2f4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x4 at 0x21A2F4 raw=0x47464544");
label_21a2f8:
    // 0x21a2f8: 0x4b4a4948  vmaddx.xz   $vf5, $vf9, $vf10x
    ctx->pc = 0x21a2f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_21a2fc:
    // 0x21a2fc: 0x4f4e4d4c  .word       0x4F4E4D4C                   # INVALID     $k0, $t6, 0x4D4C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x21a2fcu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x21A2FC raw=0x4F4E4D4C");
label_21a300:
    // 0x21a300: 0x53525150  beql        $k0, $s2, . + 4 + (0x5150 << 2)
label_21a304:
    if (ctx->pc == 0x21A304u) {
        ctx->pc = 0x21A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A300u;
        // 0x21a304: 0x57565554  bnel        $k0, $s6, . + 4 + (0x5554 << 2) (Delay Slot)
        // Likely branch instruction at 0x21A304 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A308u;
        goto label_21a308;
    }
    ctx->pc = 0x21A300u;
    {
        const bool branch_taken_0x21a300 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 18));
        if (branch_taken_0x21a300) {
            ctx->pc = 0x21A304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A300u;
            // 0x21a304: 0x57565554  bnel        $k0, $s6, . + 4 + (0x5554 << 2) (Delay Slot)
            // Likely branch instruction at 0x21A304 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E844u;
            return;
        }
    }
    ctx->pc = 0x21A308u;
label_21a308:
    // 0x21a308: 0x7b5a5958  lq          $k0, 0x5958($k0)
    ctx->pc = 0x21a308u;
    SET_GPR_VEC(ctx, 26, READ128(ADD32(GPR_U32(ctx, 26), 22872)));
label_21a30c:
    // 0x21a30c: 0x7f7e7d7c  sq          $fp, 0x7D7C($k1)
    ctx->pc = 0x21a30cu;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32124), GPR_VEC(ctx, 30));
label_21a310:
    // 0x21a310: 0x83828180  lb          $v0, -0x7E80($gp)
    ctx->pc = 0x21a310u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934912)));
label_21a314:
    // 0x21a314: 0x87868584  lh          $a2, -0x7A7C($gp)
    ctx->pc = 0x21a314u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935940)));
label_21a318:
    // 0x21a318: 0x8b8a8988  lwl         $t2, -0x7678($gp)
    ctx->pc = 0x21a318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 4294936968); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
label_21a31c:
    // 0x21a31c: 0x8f8e8d8c  lw          $t6, -0x7274($gp)
    ctx->pc = 0x21a31cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937996)));
label_21a320:
    // 0x21a320: 0x93929190  lbu         $s2, -0x6E70($gp)
    ctx->pc = 0x21a320u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939024)));
label_21a324:
    // 0x21a324: 0x97969594  lhu         $s6, -0x6A6C($gp)
    ctx->pc = 0x21a324u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940052)));
label_21a328:
    // 0x21a328: 0x9b9a9998  lwr         $k0, -0x6668($gp)
    ctx->pc = 0x21a328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 4294941080); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 26) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 26) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 26, merged64); }
label_21a32c:
    // 0x21a32c: 0x9f9e9d9c  lwu         $fp, -0x6264($gp)
    ctx->pc = 0x21a32cu;
    SET_GPR_ZE32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 28), 4294942108)));
label_21a330:
    // 0x21a330: 0xa3a2a1a0  sb          $v0, -0x5E60($sp)
    ctx->pc = 0x21a330u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4294943136), (uint8_t)GPR_U32(ctx, 2));
label_21a334:
    // 0x21a334: 0xa7a6a5a4  sh          $a2, -0x5A5C($sp)
    ctx->pc = 0x21a334u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4294944164), (uint16_t)GPR_U32(ctx, 6));
label_21a338:
    // 0x21a338: 0xabaaa9a8  swl         $t2, -0x5658($sp)
    ctx->pc = 0x21a338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294945192); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_21a33c:
    // 0x21a33c: 0xafaeadac  sw          $t6, -0x5254($sp)
    ctx->pc = 0x21a33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4294946220), GPR_U32(ctx, 14));
label_21a340:
    // 0x21a340: 0xb3b2b1b0  sdl         $s2, -0x4E50($sp)
    ctx->pc = 0x21a340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294947248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_21a344:
    // 0x21a344: 0xb7b6b5b4  sdr         $s6, -0x4A4C($sp)
    ctx->pc = 0x21a344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294948276); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_21a348:
    // 0x21a348: 0xbbbab9b8  swr         $k0, -0x4648($sp)
    ctx->pc = 0x21a348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294949304); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 26); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_21a34c:
    // 0x21a34c: 0xbfbebdbc  cache       0x1E, -0x4244($sp)
    ctx->pc = 0x21a34cu;
    // CACHE instruction (ignored)
label_21a350:
    // 0x21a350: 0xc3c2c1c0  ll          $v0, -0x3E40($fp)
    ctx->pc = 0x21a350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 4294951360); SET_GPR_S32(ctx, 2, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_21a354:
    // 0x21a354: 0xc7c6c5c4  lwc1        $f6, -0x3A3C($fp)
    ctx->pc = 0x21a354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294952388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_21a358:
    // 0x21a358: 0xcbcac9c8  lwc2        $10, -0x3638($fp)
    ctx->pc = 0x21a358u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x21A358 raw=0xCBCAC9C8");
label_21a35c:
    // 0x21a35c: 0xcfcecdcc  pref        0x0E, -0x3234($fp)
    ctx->pc = 0x21a35cu;
    // PREF instruction (ignored)
label_21a360:
    // 0x21a360: 0xd3d2d1d0  lld         $s2, -0x2E30($fp)
    ctx->pc = 0x21a360u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x21A360 raw=0xD3D2D1D0");
label_21a364:
    // 0x21a364: 0xd7d6d5d4  ldc1        $f22, -0x2A2C($fp)
    ctx->pc = 0x21a364u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x21A364 raw=0xD7D6D5D4");
label_21a368:
    // 0x21a368: 0xdbdad9d8  lqc2        $vf26, -0x2628($fp)
    ctx->pc = 0x21a368u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 4294957528)));
label_21a36c:
    // 0x21a36c: 0xdfdedddc  ld          $fp, -0x2224($fp)
    ctx->pc = 0x21a36cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 30), 4294958556)));
label_21a370:
    // 0x21a370: 0xe3e2e1e0  sc          $v0, -0x1E20($ra)
    ctx->pc = 0x21a370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 4294959584); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 2)); SET_GPR_S32(ctx, 2, 1); } else { SET_GPR_S32(ctx, 2, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
label_21a374:
    // 0x21a374: 0xe7e6e5e4  swc1        $f6, -0x1A1C($ra)
    ctx->pc = 0x21a374u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 31), 4294960612), bits); }
label_21a378:
    // 0x21a378: 0xebeae9e8  swc2        $10, -0x1618($ra)
    ctx->pc = 0x21a378u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x21A378 raw=0xEBEAE9E8");
label_21a37c:
    // 0x21a37c: 0xefeeedec  .word       0xEFEEEDEC                   # INVALID     $ra, $t6, -0x1214 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x21a37cu;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x21A37C raw=0xEFEEEDEC");
label_21a380:
    // 0x21a380: 0xf3f2f1f0  scd         $s2, -0xE10($ra)
    ctx->pc = 0x21a380u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x21A380 raw=0xF3F2F1F0");
label_21a384:
    // 0x21a384: 0xf7f6f5f4  sdc1        $f22, -0xA0C($ra)
    ctx->pc = 0x21a384u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x21A384 raw=0xF7F6F5F4");
label_21a388:
    // 0x21a388: 0xfbfaf9f8  sqc2        $vf26, -0x608($ra)
    ctx->pc = 0x21a388u;
    WRITE128(ADD32(GPR_U32(ctx, 31), 4294965752), _mm_castps_si128(ctx->vu0_vf[26]));
label_21a38c:
    // 0x21a38c: 0xfffefdfc  sd          $fp, -0x204($ra)
    ctx->pc = 0x21a38cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294966780), GPR_U64(ctx, 30));
label_21a390:
    // 0x21a390: 0x1e94e0  .word       0x001E94E0                   # add         $s2, $zero, $fp # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x21a390u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 30);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_21a394:
    // 0x21a394: 0x0  nop
    ctx->pc = 0x21a394u;
    // NOP
label_21a398:
    // 0x21a398: 0x1e94b0  tge         $zero, $fp, 594
    ctx->pc = 0x21a398u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 30)) { runtime->handleTrap(rdram, ctx); }
label_21a39c:
    // 0x21a39c: 0x0  nop
    ctx->pc = 0x21a39cu;
    // NOP
label_21a3a0:
    // 0x21a3a0: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x21a3a0u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x21A3A0 raw=0x49497350");
label_21a3a4:
    // 0x21a3a4: 0x6b62696c  ldl         $v0, 0x696C($k1)
    ctx->pc = 0x21a3a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_21a3a8:
    // 0x21a3a8: 0x6c6e7265  ldr         $t6, 0x7265($v1)
    ctx->pc = 0x21a3a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_21a3ac:
    // 0x21a3ac: 0x30303732  andi        $s0, $at, 0x3732
    ctx->pc = 0x21a3acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)14130);
label_21a3b0:
    // 0x21a3b0: 0x0  nop
    ctx->pc = 0x21a3b0u;
    // NOP
label_21a3b4:
    // 0x21a3b4: 0x392c80  .word       0x00392C80                   # sll         $a1, $t9, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x21a3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 25), 18));
label_21a3b8:
    // 0x21a3b8: 0x0  nop
    ctx->pc = 0x21a3b8u;
    // NOP
label_21a3bc:
    // 0x21a3bc: 0x0  nop
    ctx->pc = 0x21a3bcu;
    // NOP
label_21a3c0:
    // 0x21a3c0: 0x0  nop
    ctx->pc = 0x21a3c0u;
    // NOP
label_21a3c4:
    // 0x21a3c4: 0x1ece68  .word       0x001ECE68                   # mfsa        $t9 # 001E0640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x21a3c4u;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_21a3c8:
    // 0x21a3c8: 0x0  nop
    ctx->pc = 0x21a3c8u;
    // NOP
label_21a3cc:
    // 0x21a3cc: 0x0  nop
    ctx->pc = 0x21a3ccu;
    // NOP
label_21a3d0:
    // 0x21a3d0: 0x0  nop
    ctx->pc = 0x21a3d0u;
    // NOP
label_21a3d4:
    // 0x21a3d4: 0x0  nop
    ctx->pc = 0x21a3d4u;
    // NOP
label_21a3d8:
    // 0x21a3d8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a3dc:
    // 0x21a3dc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a3e0:
    // 0x21a3e0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a3e4:
    // 0x21a3e4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a3e8:
    // 0x21a3e8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a3ec:
    // 0x21a3ec: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a3f0:
    // 0x21a3f0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a3f4:
    // 0x21a3f4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a3f8:
    // 0x21a3f8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a3fc:
    // 0x21a3fc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a400:
    // 0x21a400: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a400u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a404:
    // 0x21a404: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a404u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a408:
    // 0x21a408: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a408u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a40c:
    // 0x21a40c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a40cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a410:
    // 0x21a410: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a410u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a414:
    // 0x21a414: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a414u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a418:
    // 0x21a418: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a418u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a41c:
    // 0x21a41c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a41cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a420:
    // 0x21a420: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a420u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a424:
    // 0x21a424: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a424u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a428:
    // 0x21a428: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a428u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a42c:
    // 0x21a42c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a42cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a430:
    // 0x21a430: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a430u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a434:
    // 0x21a434: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a434u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a438:
    // 0x21a438: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a438u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a43c:
    // 0x21a43c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a43cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a440:
    // 0x21a440: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a440u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a444:
    // 0x21a444: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a444u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a448:
    // 0x21a448: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a448u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a44c:
    // 0x21a44c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a44cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a450:
    // 0x21a450: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a450u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a454:
    // 0x21a454: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a454u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a458:
    // 0x21a458: 0x0  nop
    ctx->pc = 0x21a458u;
    // NOP
label_21a45c:
    // 0x21a45c: 0x0  nop
    ctx->pc = 0x21a45cu;
    // NOP
label_21a460:
    // 0x21a460: 0x0  nop
    ctx->pc = 0x21a460u;
    // NOP
label_21a464:
    // 0x21a464: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a464u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a468:
    // 0x21a468: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a468u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a46c:
    // 0x21a46c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a46cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a470:
    // 0x21a470: 0x224438  .word       0x00224438                   # dsll        $t0, $v0, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x21a470u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << 16);
label_21a474:
    // 0x21a474: 0x0  nop
    ctx->pc = 0x21a474u;
    // NOP
label_21a478:
    // 0x21a478: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a478u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a47c:
    // 0x21a47c: 0x0  nop
    ctx->pc = 0x21a47cu;
    // NOP
label_21a480:
    // 0x21a480: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x21a480u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_21a484:
    // 0x21a484: 0x224440  .word       0x00224440                   # sll         $t0, $v0, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x21a484u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    ctx->pc = 0x21a488u;
}
