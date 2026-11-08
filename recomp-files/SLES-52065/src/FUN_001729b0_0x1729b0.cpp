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

// Function: FUN_001729b0
// Address: 0x1729b0 - 0x17325c
void FUN_001729b0_0x1729b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001729b0_0x1729b0");
#endif

    switch (ctx->pc) {
        case 0x1729b0u: goto label_1729b0;
        case 0x1729b4u: goto label_1729b4;
        case 0x1729b8u: goto label_1729b8;
        case 0x1729bcu: goto label_1729bc;
        case 0x1729c0u: goto label_1729c0;
        case 0x1729c4u: goto label_1729c4;
        case 0x1729c8u: goto label_1729c8;
        case 0x1729ccu: goto label_1729cc;
        case 0x1729d0u: goto label_1729d0;
        case 0x1729d4u: goto label_1729d4;
        case 0x1729d8u: goto label_1729d8;
        case 0x1729dcu: goto label_1729dc;
        case 0x1729e0u: goto label_1729e0;
        case 0x1729e4u: goto label_1729e4;
        case 0x1729e8u: goto label_1729e8;
        case 0x1729ecu: goto label_1729ec;
        case 0x1729f0u: goto label_1729f0;
        case 0x1729f4u: goto label_1729f4;
        case 0x1729f8u: goto label_1729f8;
        case 0x1729fcu: goto label_1729fc;
        case 0x172a00u: goto label_172a00;
        case 0x172a04u: goto label_172a04;
        case 0x172a08u: goto label_172a08;
        case 0x172a0cu: goto label_172a0c;
        case 0x172a10u: goto label_172a10;
        case 0x172a14u: goto label_172a14;
        case 0x172a18u: goto label_172a18;
        case 0x172a1cu: goto label_172a1c;
        case 0x172a20u: goto label_172a20;
        case 0x172a24u: goto label_172a24;
        case 0x172a28u: goto label_172a28;
        case 0x172a2cu: goto label_172a2c;
        case 0x172a30u: goto label_172a30;
        case 0x172a34u: goto label_172a34;
        case 0x172a38u: goto label_172a38;
        case 0x172a3cu: goto label_172a3c;
        case 0x172a40u: goto label_172a40;
        case 0x172a44u: goto label_172a44;
        case 0x172a48u: goto label_172a48;
        case 0x172a4cu: goto label_172a4c;
        case 0x172a50u: goto label_172a50;
        case 0x172a54u: goto label_172a54;
        case 0x172a58u: goto label_172a58;
        case 0x172a5cu: goto label_172a5c;
        case 0x172a60u: goto label_172a60;
        case 0x172a64u: goto label_172a64;
        case 0x172a68u: goto label_172a68;
        case 0x172a6cu: goto label_172a6c;
        case 0x172a70u: goto label_172a70;
        case 0x172a74u: goto label_172a74;
        case 0x172a78u: goto label_172a78;
        case 0x172a7cu: goto label_172a7c;
        case 0x172a80u: goto label_172a80;
        case 0x172a84u: goto label_172a84;
        case 0x172a88u: goto label_172a88;
        case 0x172a8cu: goto label_172a8c;
        case 0x172a90u: goto label_172a90;
        case 0x172a94u: goto label_172a94;
        case 0x172a98u: goto label_172a98;
        case 0x172a9cu: goto label_172a9c;
        case 0x172aa0u: goto label_172aa0;
        case 0x172aa4u: goto label_172aa4;
        case 0x172aa8u: goto label_172aa8;
        case 0x172aacu: goto label_172aac;
        case 0x172ab0u: goto label_172ab0;
        case 0x172ab4u: goto label_172ab4;
        case 0x172ab8u: goto label_172ab8;
        case 0x172abcu: goto label_172abc;
        case 0x172ac0u: goto label_172ac0;
        case 0x172ac4u: goto label_172ac4;
        case 0x172ac8u: goto label_172ac8;
        case 0x172accu: goto label_172acc;
        case 0x172ad0u: goto label_172ad0;
        case 0x172ad4u: goto label_172ad4;
        case 0x172ad8u: goto label_172ad8;
        case 0x172adcu: goto label_172adc;
        case 0x172ae0u: goto label_172ae0;
        case 0x172ae4u: goto label_172ae4;
        case 0x172ae8u: goto label_172ae8;
        case 0x172aecu: goto label_172aec;
        case 0x172af0u: goto label_172af0;
        case 0x172af4u: goto label_172af4;
        case 0x172af8u: goto label_172af8;
        case 0x172afcu: goto label_172afc;
        case 0x172b00u: goto label_172b00;
        case 0x172b04u: goto label_172b04;
        case 0x172b08u: goto label_172b08;
        case 0x172b0cu: goto label_172b0c;
        case 0x172b10u: goto label_172b10;
        case 0x172b14u: goto label_172b14;
        case 0x172b18u: goto label_172b18;
        case 0x172b1cu: goto label_172b1c;
        case 0x172b20u: goto label_172b20;
        case 0x172b24u: goto label_172b24;
        case 0x172b28u: goto label_172b28;
        case 0x172b2cu: goto label_172b2c;
        case 0x172b30u: goto label_172b30;
        case 0x172b34u: goto label_172b34;
        case 0x172b38u: goto label_172b38;
        case 0x172b3cu: goto label_172b3c;
        case 0x172b40u: goto label_172b40;
        case 0x172b44u: goto label_172b44;
        case 0x172b48u: goto label_172b48;
        case 0x172b4cu: goto label_172b4c;
        case 0x172b50u: goto label_172b50;
        case 0x172b54u: goto label_172b54;
        case 0x172b58u: goto label_172b58;
        case 0x172b5cu: goto label_172b5c;
        case 0x172b60u: goto label_172b60;
        case 0x172b64u: goto label_172b64;
        case 0x172b68u: goto label_172b68;
        case 0x172b6cu: goto label_172b6c;
        case 0x172b70u: goto label_172b70;
        case 0x172b74u: goto label_172b74;
        case 0x172b78u: goto label_172b78;
        case 0x172b7cu: goto label_172b7c;
        case 0x172b80u: goto label_172b80;
        case 0x172b84u: goto label_172b84;
        case 0x172b88u: goto label_172b88;
        case 0x172b8cu: goto label_172b8c;
        case 0x172b90u: goto label_172b90;
        case 0x172b94u: goto label_172b94;
        case 0x172b98u: goto label_172b98;
        case 0x172b9cu: goto label_172b9c;
        case 0x172ba0u: goto label_172ba0;
        case 0x172ba4u: goto label_172ba4;
        case 0x172ba8u: goto label_172ba8;
        case 0x172bacu: goto label_172bac;
        case 0x172bb0u: goto label_172bb0;
        case 0x172bb4u: goto label_172bb4;
        case 0x172bb8u: goto label_172bb8;
        case 0x172bbcu: goto label_172bbc;
        case 0x172bc0u: goto label_172bc0;
        case 0x172bc4u: goto label_172bc4;
        case 0x172bc8u: goto label_172bc8;
        case 0x172bccu: goto label_172bcc;
        case 0x172bd0u: goto label_172bd0;
        case 0x172bd4u: goto label_172bd4;
        case 0x172bd8u: goto label_172bd8;
        case 0x172bdcu: goto label_172bdc;
        case 0x172be0u: goto label_172be0;
        case 0x172be4u: goto label_172be4;
        case 0x172be8u: goto label_172be8;
        case 0x172becu: goto label_172bec;
        case 0x172bf0u: goto label_172bf0;
        case 0x172bf4u: goto label_172bf4;
        case 0x172bf8u: goto label_172bf8;
        case 0x172bfcu: goto label_172bfc;
        case 0x172c00u: goto label_172c00;
        case 0x172c04u: goto label_172c04;
        case 0x172c08u: goto label_172c08;
        case 0x172c0cu: goto label_172c0c;
        case 0x172c10u: goto label_172c10;
        case 0x172c14u: goto label_172c14;
        case 0x172c18u: goto label_172c18;
        case 0x172c1cu: goto label_172c1c;
        case 0x172c20u: goto label_172c20;
        case 0x172c24u: goto label_172c24;
        case 0x172c28u: goto label_172c28;
        case 0x172c2cu: goto label_172c2c;
        case 0x172c30u: goto label_172c30;
        case 0x172c34u: goto label_172c34;
        case 0x172c38u: goto label_172c38;
        case 0x172c3cu: goto label_172c3c;
        case 0x172c40u: goto label_172c40;
        case 0x172c44u: goto label_172c44;
        case 0x172c48u: goto label_172c48;
        case 0x172c4cu: goto label_172c4c;
        case 0x172c50u: goto label_172c50;
        case 0x172c54u: goto label_172c54;
        case 0x172c58u: goto label_172c58;
        case 0x172c5cu: goto label_172c5c;
        case 0x172c60u: goto label_172c60;
        case 0x172c64u: goto label_172c64;
        case 0x172c68u: goto label_172c68;
        case 0x172c6cu: goto label_172c6c;
        case 0x172c70u: goto label_172c70;
        case 0x172c74u: goto label_172c74;
        case 0x172c78u: goto label_172c78;
        case 0x172c7cu: goto label_172c7c;
        case 0x172c80u: goto label_172c80;
        case 0x172c84u: goto label_172c84;
        case 0x172c88u: goto label_172c88;
        case 0x172c8cu: goto label_172c8c;
        case 0x172c90u: goto label_172c90;
        case 0x172c94u: goto label_172c94;
        case 0x172c98u: goto label_172c98;
        case 0x172c9cu: goto label_172c9c;
        case 0x172ca0u: goto label_172ca0;
        case 0x172ca4u: goto label_172ca4;
        case 0x172ca8u: goto label_172ca8;
        case 0x172cacu: goto label_172cac;
        case 0x172cb0u: goto label_172cb0;
        case 0x172cb4u: goto label_172cb4;
        case 0x172cb8u: goto label_172cb8;
        case 0x172cbcu: goto label_172cbc;
        case 0x172cc0u: goto label_172cc0;
        case 0x172cc4u: goto label_172cc4;
        case 0x172cc8u: goto label_172cc8;
        case 0x172cccu: goto label_172ccc;
        case 0x172cd0u: goto label_172cd0;
        case 0x172cd4u: goto label_172cd4;
        case 0x172cd8u: goto label_172cd8;
        case 0x172cdcu: goto label_172cdc;
        case 0x172ce0u: goto label_172ce0;
        case 0x172ce4u: goto label_172ce4;
        case 0x172ce8u: goto label_172ce8;
        case 0x172cecu: goto label_172cec;
        case 0x172cf0u: goto label_172cf0;
        case 0x172cf4u: goto label_172cf4;
        case 0x172cf8u: goto label_172cf8;
        case 0x172cfcu: goto label_172cfc;
        case 0x172d00u: goto label_172d00;
        case 0x172d04u: goto label_172d04;
        case 0x172d08u: goto label_172d08;
        case 0x172d0cu: goto label_172d0c;
        case 0x172d10u: goto label_172d10;
        case 0x172d14u: goto label_172d14;
        case 0x172d18u: goto label_172d18;
        case 0x172d1cu: goto label_172d1c;
        case 0x172d20u: goto label_172d20;
        case 0x172d24u: goto label_172d24;
        case 0x172d28u: goto label_172d28;
        case 0x172d2cu: goto label_172d2c;
        case 0x172d30u: goto label_172d30;
        case 0x172d34u: goto label_172d34;
        case 0x172d38u: goto label_172d38;
        case 0x172d3cu: goto label_172d3c;
        case 0x172d40u: goto label_172d40;
        case 0x172d44u: goto label_172d44;
        case 0x172d48u: goto label_172d48;
        case 0x172d4cu: goto label_172d4c;
        case 0x172d50u: goto label_172d50;
        case 0x172d54u: goto label_172d54;
        case 0x172d58u: goto label_172d58;
        case 0x172d5cu: goto label_172d5c;
        case 0x172d60u: goto label_172d60;
        case 0x172d64u: goto label_172d64;
        case 0x172d68u: goto label_172d68;
        case 0x172d6cu: goto label_172d6c;
        case 0x172d70u: goto label_172d70;
        case 0x172d74u: goto label_172d74;
        case 0x172d78u: goto label_172d78;
        case 0x172d7cu: goto label_172d7c;
        case 0x172d80u: goto label_172d80;
        case 0x172d84u: goto label_172d84;
        case 0x172d88u: goto label_172d88;
        case 0x172d8cu: goto label_172d8c;
        case 0x172d90u: goto label_172d90;
        case 0x172d94u: goto label_172d94;
        case 0x172d98u: goto label_172d98;
        case 0x172d9cu: goto label_172d9c;
        case 0x172da0u: goto label_172da0;
        case 0x172da4u: goto label_172da4;
        case 0x172da8u: goto label_172da8;
        case 0x172dacu: goto label_172dac;
        case 0x172db0u: goto label_172db0;
        case 0x172db4u: goto label_172db4;
        case 0x172db8u: goto label_172db8;
        case 0x172dbcu: goto label_172dbc;
        case 0x172dc0u: goto label_172dc0;
        case 0x172dc4u: goto label_172dc4;
        case 0x172dc8u: goto label_172dc8;
        case 0x172dccu: goto label_172dcc;
        case 0x172dd0u: goto label_172dd0;
        case 0x172dd4u: goto label_172dd4;
        case 0x172dd8u: goto label_172dd8;
        case 0x172ddcu: goto label_172ddc;
        case 0x172de0u: goto label_172de0;
        case 0x172de4u: goto label_172de4;
        case 0x172de8u: goto label_172de8;
        case 0x172decu: goto label_172dec;
        case 0x172df0u: goto label_172df0;
        case 0x172df4u: goto label_172df4;
        case 0x172df8u: goto label_172df8;
        case 0x172dfcu: goto label_172dfc;
        case 0x172e00u: goto label_172e00;
        case 0x172e04u: goto label_172e04;
        case 0x172e08u: goto label_172e08;
        case 0x172e0cu: goto label_172e0c;
        case 0x172e10u: goto label_172e10;
        case 0x172e14u: goto label_172e14;
        case 0x172e18u: goto label_172e18;
        case 0x172e1cu: goto label_172e1c;
        case 0x172e20u: goto label_172e20;
        case 0x172e24u: goto label_172e24;
        case 0x172e28u: goto label_172e28;
        case 0x172e2cu: goto label_172e2c;
        case 0x172e30u: goto label_172e30;
        case 0x172e34u: goto label_172e34;
        case 0x172e38u: goto label_172e38;
        case 0x172e3cu: goto label_172e3c;
        case 0x172e40u: goto label_172e40;
        case 0x172e44u: goto label_172e44;
        case 0x172e48u: goto label_172e48;
        case 0x172e4cu: goto label_172e4c;
        case 0x172e50u: goto label_172e50;
        case 0x172e54u: goto label_172e54;
        case 0x172e58u: goto label_172e58;
        case 0x172e5cu: goto label_172e5c;
        case 0x172e60u: goto label_172e60;
        case 0x172e64u: goto label_172e64;
        case 0x172e68u: goto label_172e68;
        case 0x172e6cu: goto label_172e6c;
        case 0x172e70u: goto label_172e70;
        case 0x172e74u: goto label_172e74;
        case 0x172e78u: goto label_172e78;
        case 0x172e7cu: goto label_172e7c;
        case 0x172e80u: goto label_172e80;
        case 0x172e84u: goto label_172e84;
        case 0x172e88u: goto label_172e88;
        case 0x172e8cu: goto label_172e8c;
        case 0x172e90u: goto label_172e90;
        case 0x172e94u: goto label_172e94;
        case 0x172e98u: goto label_172e98;
        case 0x172e9cu: goto label_172e9c;
        case 0x172ea0u: goto label_172ea0;
        case 0x172ea4u: goto label_172ea4;
        case 0x172ea8u: goto label_172ea8;
        case 0x172eacu: goto label_172eac;
        case 0x172eb0u: goto label_172eb0;
        case 0x172eb4u: goto label_172eb4;
        case 0x172eb8u: goto label_172eb8;
        case 0x172ebcu: goto label_172ebc;
        case 0x172ec0u: goto label_172ec0;
        case 0x172ec4u: goto label_172ec4;
        case 0x172ec8u: goto label_172ec8;
        case 0x172eccu: goto label_172ecc;
        case 0x172ed0u: goto label_172ed0;
        case 0x172ed4u: goto label_172ed4;
        case 0x172ed8u: goto label_172ed8;
        case 0x172edcu: goto label_172edc;
        case 0x172ee0u: goto label_172ee0;
        case 0x172ee4u: goto label_172ee4;
        case 0x172ee8u: goto label_172ee8;
        case 0x172eecu: goto label_172eec;
        case 0x172ef0u: goto label_172ef0;
        case 0x172ef4u: goto label_172ef4;
        case 0x172ef8u: goto label_172ef8;
        case 0x172efcu: goto label_172efc;
        case 0x172f00u: goto label_172f00;
        case 0x172f04u: goto label_172f04;
        case 0x172f08u: goto label_172f08;
        case 0x172f0cu: goto label_172f0c;
        case 0x172f10u: goto label_172f10;
        case 0x172f14u: goto label_172f14;
        case 0x172f18u: goto label_172f18;
        case 0x172f1cu: goto label_172f1c;
        case 0x172f20u: goto label_172f20;
        case 0x172f24u: goto label_172f24;
        case 0x172f28u: goto label_172f28;
        case 0x172f2cu: goto label_172f2c;
        case 0x172f30u: goto label_172f30;
        case 0x172f34u: goto label_172f34;
        case 0x172f38u: goto label_172f38;
        case 0x172f3cu: goto label_172f3c;
        case 0x172f40u: goto label_172f40;
        case 0x172f44u: goto label_172f44;
        case 0x172f48u: goto label_172f48;
        case 0x172f4cu: goto label_172f4c;
        case 0x172f50u: goto label_172f50;
        case 0x172f54u: goto label_172f54;
        case 0x172f58u: goto label_172f58;
        case 0x172f5cu: goto label_172f5c;
        case 0x172f60u: goto label_172f60;
        case 0x172f64u: goto label_172f64;
        case 0x172f68u: goto label_172f68;
        case 0x172f6cu: goto label_172f6c;
        case 0x172f70u: goto label_172f70;
        case 0x172f74u: goto label_172f74;
        case 0x172f78u: goto label_172f78;
        case 0x172f7cu: goto label_172f7c;
        case 0x172f80u: goto label_172f80;
        case 0x172f84u: goto label_172f84;
        case 0x172f88u: goto label_172f88;
        case 0x172f8cu: goto label_172f8c;
        case 0x172f90u: goto label_172f90;
        case 0x172f94u: goto label_172f94;
        case 0x172f98u: goto label_172f98;
        case 0x172f9cu: goto label_172f9c;
        case 0x172fa0u: goto label_172fa0;
        case 0x172fa4u: goto label_172fa4;
        case 0x172fa8u: goto label_172fa8;
        case 0x172facu: goto label_172fac;
        case 0x172fb0u: goto label_172fb0;
        case 0x172fb4u: goto label_172fb4;
        case 0x172fb8u: goto label_172fb8;
        case 0x172fbcu: goto label_172fbc;
        case 0x172fc0u: goto label_172fc0;
        case 0x172fc4u: goto label_172fc4;
        case 0x172fc8u: goto label_172fc8;
        case 0x172fccu: goto label_172fcc;
        case 0x172fd0u: goto label_172fd0;
        case 0x172fd4u: goto label_172fd4;
        case 0x172fd8u: goto label_172fd8;
        case 0x172fdcu: goto label_172fdc;
        case 0x172fe0u: goto label_172fe0;
        case 0x172fe4u: goto label_172fe4;
        case 0x172fe8u: goto label_172fe8;
        case 0x172fecu: goto label_172fec;
        case 0x172ff0u: goto label_172ff0;
        case 0x172ff4u: goto label_172ff4;
        case 0x172ff8u: goto label_172ff8;
        case 0x172ffcu: goto label_172ffc;
        case 0x173000u: goto label_173000;
        case 0x173004u: goto label_173004;
        case 0x173008u: goto label_173008;
        case 0x17300cu: goto label_17300c;
        case 0x173010u: goto label_173010;
        case 0x173014u: goto label_173014;
        case 0x173018u: goto label_173018;
        case 0x17301cu: goto label_17301c;
        case 0x173020u: goto label_173020;
        case 0x173024u: goto label_173024;
        case 0x173028u: goto label_173028;
        case 0x17302cu: goto label_17302c;
        case 0x173030u: goto label_173030;
        case 0x173034u: goto label_173034;
        case 0x173038u: goto label_173038;
        case 0x17303cu: goto label_17303c;
        case 0x173040u: goto label_173040;
        case 0x173044u: goto label_173044;
        case 0x173048u: goto label_173048;
        case 0x17304cu: goto label_17304c;
        case 0x173050u: goto label_173050;
        case 0x173054u: goto label_173054;
        case 0x173058u: goto label_173058;
        case 0x17305cu: goto label_17305c;
        case 0x173060u: goto label_173060;
        case 0x173064u: goto label_173064;
        case 0x173068u: goto label_173068;
        case 0x17306cu: goto label_17306c;
        case 0x173070u: goto label_173070;
        case 0x173074u: goto label_173074;
        case 0x173078u: goto label_173078;
        case 0x17307cu: goto label_17307c;
        case 0x173080u: goto label_173080;
        case 0x173084u: goto label_173084;
        case 0x173088u: goto label_173088;
        case 0x17308cu: goto label_17308c;
        case 0x173090u: goto label_173090;
        case 0x173094u: goto label_173094;
        case 0x173098u: goto label_173098;
        case 0x17309cu: goto label_17309c;
        case 0x1730a0u: goto label_1730a0;
        case 0x1730a4u: goto label_1730a4;
        case 0x1730a8u: goto label_1730a8;
        case 0x1730acu: goto label_1730ac;
        case 0x1730b0u: goto label_1730b0;
        case 0x1730b4u: goto label_1730b4;
        case 0x1730b8u: goto label_1730b8;
        case 0x1730bcu: goto label_1730bc;
        case 0x1730c0u: goto label_1730c0;
        case 0x1730c4u: goto label_1730c4;
        case 0x1730c8u: goto label_1730c8;
        case 0x1730ccu: goto label_1730cc;
        case 0x1730d0u: goto label_1730d0;
        case 0x1730d4u: goto label_1730d4;
        case 0x1730d8u: goto label_1730d8;
        case 0x1730dcu: goto label_1730dc;
        case 0x1730e0u: goto label_1730e0;
        case 0x1730e4u: goto label_1730e4;
        case 0x1730e8u: goto label_1730e8;
        case 0x1730ecu: goto label_1730ec;
        case 0x1730f0u: goto label_1730f0;
        case 0x1730f4u: goto label_1730f4;
        case 0x1730f8u: goto label_1730f8;
        case 0x1730fcu: goto label_1730fc;
        case 0x173100u: goto label_173100;
        case 0x173104u: goto label_173104;
        case 0x173108u: goto label_173108;
        case 0x17310cu: goto label_17310c;
        case 0x173110u: goto label_173110;
        case 0x173114u: goto label_173114;
        case 0x173118u: goto label_173118;
        case 0x17311cu: goto label_17311c;
        case 0x173120u: goto label_173120;
        case 0x173124u: goto label_173124;
        case 0x173128u: goto label_173128;
        case 0x17312cu: goto label_17312c;
        case 0x173130u: goto label_173130;
        case 0x173134u: goto label_173134;
        case 0x173138u: goto label_173138;
        case 0x17313cu: goto label_17313c;
        case 0x173140u: goto label_173140;
        case 0x173144u: goto label_173144;
        case 0x173148u: goto label_173148;
        case 0x17314cu: goto label_17314c;
        case 0x173150u: goto label_173150;
        case 0x173154u: goto label_173154;
        case 0x173158u: goto label_173158;
        case 0x17315cu: goto label_17315c;
        case 0x173160u: goto label_173160;
        case 0x173164u: goto label_173164;
        case 0x173168u: goto label_173168;
        case 0x17316cu: goto label_17316c;
        case 0x173170u: goto label_173170;
        case 0x173174u: goto label_173174;
        case 0x173178u: goto label_173178;
        case 0x17317cu: goto label_17317c;
        case 0x173180u: goto label_173180;
        case 0x173184u: goto label_173184;
        case 0x173188u: goto label_173188;
        case 0x17318cu: goto label_17318c;
        case 0x173190u: goto label_173190;
        case 0x173194u: goto label_173194;
        case 0x173198u: goto label_173198;
        case 0x17319cu: goto label_17319c;
        case 0x1731a0u: goto label_1731a0;
        case 0x1731a4u: goto label_1731a4;
        case 0x1731a8u: goto label_1731a8;
        case 0x1731acu: goto label_1731ac;
        case 0x1731b0u: goto label_1731b0;
        case 0x1731b4u: goto label_1731b4;
        case 0x1731b8u: goto label_1731b8;
        case 0x1731bcu: goto label_1731bc;
        case 0x1731c0u: goto label_1731c0;
        case 0x1731c4u: goto label_1731c4;
        case 0x1731c8u: goto label_1731c8;
        case 0x1731ccu: goto label_1731cc;
        case 0x1731d0u: goto label_1731d0;
        case 0x1731d4u: goto label_1731d4;
        case 0x1731d8u: goto label_1731d8;
        case 0x1731dcu: goto label_1731dc;
        case 0x1731e0u: goto label_1731e0;
        case 0x1731e4u: goto label_1731e4;
        case 0x1731e8u: goto label_1731e8;
        case 0x1731ecu: goto label_1731ec;
        case 0x1731f0u: goto label_1731f0;
        case 0x1731f4u: goto label_1731f4;
        case 0x1731f8u: goto label_1731f8;
        case 0x1731fcu: goto label_1731fc;
        case 0x173200u: goto label_173200;
        case 0x173204u: goto label_173204;
        case 0x173208u: goto label_173208;
        case 0x17320cu: goto label_17320c;
        case 0x173210u: goto label_173210;
        case 0x173214u: goto label_173214;
        case 0x173218u: goto label_173218;
        case 0x17321cu: goto label_17321c;
        case 0x173220u: goto label_173220;
        case 0x173224u: goto label_173224;
        case 0x173228u: goto label_173228;
        case 0x17322cu: goto label_17322c;
        case 0x173230u: goto label_173230;
        case 0x173234u: goto label_173234;
        case 0x173238u: goto label_173238;
        case 0x17323cu: goto label_17323c;
        case 0x173240u: goto label_173240;
        case 0x173244u: goto label_173244;
        case 0x173248u: goto label_173248;
        case 0x17324cu: goto label_17324c;
        case 0x173250u: goto label_173250;
        case 0x173254u: goto label_173254;
        case 0x173258u: goto label_173258;
        default: break;
    }

    ctx->pc = 0x1729b0u;

label_1729b0:
    // 0x1729b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1729b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1729b4:
    // 0x1729b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1729b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1729b8:
    // 0x1729b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1729b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1729bc:
    // 0x1729bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1729bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1729c0:
    // 0x1729c0: 0x8c826014  lw          $v0, 0x6014($a0)
    ctx->pc = 0x1729c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24596)));
label_1729c4:
    // 0x1729c4: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x1729c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1729c8:
    // 0x1729c8: 0x10200163  beqz        $at, . + 4 + (0x163 << 2)
label_1729cc:
    if (ctx->pc == 0x1729CCu) {
        ctx->pc = 0x1729CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729C8u;
        // 0x1729cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1729D0u;
        goto label_1729d0;
    }
    ctx->pc = 0x1729C8u;
    {
        const bool branch_taken_0x1729c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1729CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729C8u;
        // 0x1729cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729c8) {
            ctx->pc = 0x172F58u;
            goto label_172f58;
        }
    }
    ctx->pc = 0x1729D0u;
label_1729d0:
    // 0x1729d0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1729d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_1729d4:
    // 0x1729d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1729d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1729d8:
    // 0x1729d8: 0x2463f600  addiu       $v1, $v1, -0xA00
    ctx->pc = 0x1729d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964736));
label_1729dc:
    // 0x1729dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1729dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1729e0:
    // 0x1729e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1729e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1729e4:
    // 0x1729e4: 0x400008  jr          $v0
label_1729e8:
    if (ctx->pc == 0x1729E8u) {
        ctx->pc = 0x1729ECu;
        goto label_1729ec;
    }
    ctx->pc = 0x1729E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1729ECu: goto label_1729ec;
            case 0x172A00u: goto label_172a00;
            case 0x172C74u: goto label_172c74;
            case 0x172D38u: goto label_172d38;
            case 0x172D84u: goto label_172d84;
            case 0x172E0Cu: goto label_172e0c;
            case 0x172F08u: goto label_172f08;
            case 0x172F58u: goto label_172f58;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1729E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1729ECu;
label_1729ec:
    // 0x1729ec: 0xc05c9f4  jal         func_1727D0
label_1729f0:
    if (ctx->pc == 0x1729F0u) {
        ctx->pc = 0x1729F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729ECu;
        // 0x1729f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1729F4u;
        goto label_1729f4;
    }
    ctx->pc = 0x1729ECu;
    SET_GPR_U32(ctx, 31, 0x1729F4u);
    ctx->pc = 0x1729F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1729ECu;
    // 0x1729f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1727D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1727D0u, 0x1729ECu, 0x1729F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1729F4u;
label_1729f4:
    // 0x1729f4: 0x8e226014  lw          $v0, 0x6014($s1)
    ctx->pc = 0x1729f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24596)));
label_1729f8:
    // 0x1729f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1729f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1729fc:
    // 0x1729fc: 0xae226014  sw          $v0, 0x6014($s1)
    ctx->pc = 0x1729fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
label_172a00:
    // 0x172a00: 0x92226033  lbu         $v0, 0x6033($s1)
    ctx->pc = 0x172a00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24627)));
label_172a04:
    // 0x172a04: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
label_172a08:
    if (ctx->pc == 0x172A08u) {
        ctx->pc = 0x172A0Cu;
        goto label_172a0c;
    }
    ctx->pc = 0x172A04u;
    {
        const bool branch_taken_0x172a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172a04) {
            ctx->pc = 0x172BE8u;
            goto label_172be8;
        }
    }
    ctx->pc = 0x172A0Cu;
label_172a0c:
    // 0x172a0c: 0x92226031  lbu         $v0, 0x6031($s1)
    ctx->pc = 0x172a0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24625)));
label_172a10:
    // 0x172a10: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_172a14:
    if (ctx->pc == 0x172A14u) {
        ctx->pc = 0x172A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A10u;
        // 0x172a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172A18u;
        goto label_172a18;
    }
    ctx->pc = 0x172A10u;
    {
        const bool branch_taken_0x172a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A10u;
        // 0x172a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a10) {
            ctx->pc = 0x172A64u;
            goto label_172a64;
        }
    }
    ctx->pc = 0x172A18u;
label_172a18:
    // 0x172a18: 0xc05cc98  jal         func_173260
label_172a1c:
    if (ctx->pc == 0x172A1Cu) {
        ctx->pc = 0x172A20u;
        goto label_172a20;
    }
    ctx->pc = 0x172A18u;
    SET_GPR_U32(ctx, 31, 0x172A20u);
    ctx->pc = 0x173260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173260u, 0x172A18u, 0x172A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172A20u;
label_172a20:
    // 0x172a20: 0x8e226008  lw          $v0, 0x6008($s1)
    ctx->pc = 0x172a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24584)));
label_172a24:
    // 0x172a24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x172a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_172a28:
    // 0x172a28: 0x1c400043  bgtz        $v0, . + 4 + (0x43 << 2)
label_172a2c:
    if (ctx->pc == 0x172A2Cu) {
        ctx->pc = 0x172A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A28u;
        // 0x172a2c: 0xae226008  sw          $v0, 0x6008($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172A30u;
        goto label_172a30;
    }
    ctx->pc = 0x172A28u;
    {
        const bool branch_taken_0x172a28 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x172A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A28u;
        // 0x172a2c: 0xae226008  sw          $v0, 0x6008($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a28) {
            ctx->pc = 0x172B38u;
            goto label_172b38;
        }
    }
    ctx->pc = 0x172A30u;
label_172a30:
    // 0x172a30: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x172a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172a34:
    // 0x172a34: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x172a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_172a38:
    // 0x172a38: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x172a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_172a3c:
    // 0x172a3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x172a3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172a40:
    // 0x172a40: 0x0  nop
    ctx->pc = 0x172a40u;
    // NOP
label_172a44:
    // 0x172a44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x172a44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_172a48:
    // 0x172a48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x172a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_172a4c:
    // 0x172a4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172a4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_172a50:
    // 0x172a50: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x172a50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_172a54:
    // 0x172a54: 0x0  nop
    ctx->pc = 0x172a54u;
    // NOP
label_172a58:
    // 0x172a58: 0xae226008  sw          $v0, 0x6008($s1)
    ctx->pc = 0x172a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
label_172a5c:
    // 0x172a5c: 0x10000036  b           . + 4 + (0x36 << 2)
label_172a60:
    if (ctx->pc == 0x172A60u) {
        ctx->pc = 0x172A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A5Cu;
        // 0x172a60: 0xa2206031  sb          $zero, 0x6031($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 24625), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172A64u;
        goto label_172a64;
    }
    ctx->pc = 0x172A5Cu;
    {
        const bool branch_taken_0x172a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A5Cu;
        // 0x172a60: 0xa2206031  sb          $zero, 0x6031($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 24625), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a5c) {
            ctx->pc = 0x172B38u;
            goto label_172b38;
        }
    }
    ctx->pc = 0x172A64u;
label_172a64:
    // 0x172a64: 0x8e244020  lw          $a0, 0x4020($s1)
    ctx->pc = 0x172a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
label_172a68:
    // 0x172a68: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x172a68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_172a6c:
    // 0x172a6c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x172a6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_172a70:
    // 0x172a70: 0x320f809  jalr        $t9
label_172a74:
    if (ctx->pc == 0x172A74u) {
        ctx->pc = 0x172A78u;
        goto label_172a78;
    }
    ctx->pc = 0x172A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172A78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172A70u, 0x172A78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172A78u;
label_172a78:
    // 0x172a78: 0x8e244020  lw          $a0, 0x4020($s1)
    ctx->pc = 0x172a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
label_172a7c:
    // 0x172a7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x172a7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_172a80:
    // 0x172a80: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x172a80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_172a84:
    // 0x172a84: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x172a84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_172a88:
    // 0x172a88: 0x320f809  jalr        $t9
label_172a8c:
    if (ctx->pc == 0x172A8Cu) {
        ctx->pc = 0x172A90u;
        goto label_172a90;
    }
    ctx->pc = 0x172A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172A90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172A88u, 0x172A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172A90u;
label_172a90:
    // 0x172a90: 0x8e226008  lw          $v0, 0x6008($s1)
    ctx->pc = 0x172a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24584)));
label_172a94:
    // 0x172a94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x172a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_172a98:
    // 0x172a98: 0x1c400027  bgtz        $v0, . + 4 + (0x27 << 2)
label_172a9c:
    if (ctx->pc == 0x172A9Cu) {
        ctx->pc = 0x172A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A98u;
        // 0x172a9c: 0xae226008  sw          $v0, 0x6008($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172AA0u;
        goto label_172aa0;
    }
    ctx->pc = 0x172A98u;
    {
        const bool branch_taken_0x172a98 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x172A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A98u;
        // 0x172a9c: 0xae226008  sw          $v0, 0x6008($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a98) {
            ctx->pc = 0x172B38u;
            goto label_172b38;
        }
    }
    ctx->pc = 0x172AA0u;
label_172aa0:
    // 0x172aa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x172aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_172aa4:
    // 0x172aa4: 0xc05c9f4  jal         func_1727D0
label_172aa8:
    if (ctx->pc == 0x172AA8u) {
        ctx->pc = 0x172AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172AA4u;
        // 0x172aa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172AACu;
        goto label_172aac;
    }
    ctx->pc = 0x172AA4u;
    SET_GPR_U32(ctx, 31, 0x172AACu);
    ctx->pc = 0x172AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172AA4u;
    // 0x172aa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1727D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1727D0u, 0x172AA4u, 0x172AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172AACu;
label_172aac:
    // 0x172aac: 0x8e22601c  lw          $v0, 0x601C($s1)
    ctx->pc = 0x172aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24604)));
label_172ab0:
    // 0x172ab0: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x172ab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_172ab4:
    // 0x172ab4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_172ab8:
    if (ctx->pc == 0x172AB8u) {
        ctx->pc = 0x172ABCu;
        goto label_172abc;
    }
    ctx->pc = 0x172AB4u;
    {
        const bool branch_taken_0x172ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172ab4) {
            ctx->pc = 0x172AC0u;
            goto label_172ac0;
        }
    }
    ctx->pc = 0x172ABCu;
label_172abc:
    // 0x172abc: 0xae20601c  sw          $zero, 0x601C($s1)
    ctx->pc = 0x172abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24604), GPR_U32(ctx, 0));
label_172ac0:
    // 0x172ac0: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x172ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172ac4:
    // 0x172ac4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x172ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_172ac8:
    // 0x172ac8: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x172ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_172acc:
    // 0x172acc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x172accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_172ad0:
    // 0x172ad0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x172ad0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_172ad4:
    // 0x172ad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172ad8:
    // 0x172ad8: 0x0  nop
    ctx->pc = 0x172ad8u;
    // NOP
label_172adc:
    // 0x172adc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x172adcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_172ae0:
    // 0x172ae0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x172ae0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_172ae4:
    // 0x172ae4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172ae4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_172ae8:
    // 0x172ae8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x172ae8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_172aec:
    // 0x172aec: 0x0  nop
    ctx->pc = 0x172aecu;
    // NOP
label_172af0:
    // 0x172af0: 0xae226008  sw          $v0, 0x6008($s1)
    ctx->pc = 0x172af0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
label_172af4:
    // 0x172af4: 0xc6216008  lwc1        $f1, 0x6008($s1)
    ctx->pc = 0x172af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172af8:
    // 0x172af8: 0x8e244020  lw          $a0, 0x4020($s1)
    ctx->pc = 0x172af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
label_172afc:
    // 0x172afc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x172afcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_172b00:
    // 0x172b00: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x172b00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_172b04:
    // 0x172b04: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x172b04u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_172b08:
    // 0x172b08: 0x0  nop
    ctx->pc = 0x172b08u;
    // NOP
label_172b0c:
    // 0x172b0c: 0x0  nop
    ctx->pc = 0x172b0cu;
    // NOP
label_172b10:
    // 0x172b10: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x172b10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_172b14:
    // 0x172b14: 0x320f809  jalr        $t9
label_172b18:
    if (ctx->pc == 0x172B18u) {
        ctx->pc = 0x172B1Cu;
        goto label_172b1c;
    }
    ctx->pc = 0x172B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172B1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172B14u, 0x172B1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172B1Cu;
label_172b1c:
    // 0x172b1c: 0xc05cc98  jal         func_173260
label_172b20:
    if (ctx->pc == 0x172B20u) {
        ctx->pc = 0x172B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B1Cu;
        // 0x172b20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B24u;
        goto label_172b24;
    }
    ctx->pc = 0x172B1Cu;
    SET_GPR_U32(ctx, 31, 0x172B24u);
    ctx->pc = 0x172B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B1Cu;
    // 0x172b20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173260u, 0x172B1Cu, 0x172B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172B24u;
label_172b24:
    // 0x172b24: 0x8e236008  lw          $v1, 0x6008($s1)
    ctx->pc = 0x172b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24584)));
label_172b28:
    // 0x172b28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x172b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172b2c:
    // 0x172b2c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x172b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_172b30:
    // 0x172b30: 0xae236008  sw          $v1, 0x6008($s1)
    ctx->pc = 0x172b30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 3));
label_172b34:
    // 0x172b34: 0xa2226031  sb          $v0, 0x6031($s1)
    ctx->pc = 0x172b34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24625), (uint8_t)GPR_U32(ctx, 2));
label_172b38:
    // 0x172b38: 0x92226032  lbu         $v0, 0x6032($s1)
    ctx->pc = 0x172b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24626)));
label_172b3c:
    // 0x172b3c: 0x10400106  beqz        $v0, . + 4 + (0x106 << 2)
label_172b40:
    if (ctx->pc == 0x172B40u) {
        ctx->pc = 0x172B44u;
        goto label_172b44;
    }
    ctx->pc = 0x172B3Cu;
    {
        const bool branch_taken_0x172b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172b3c) {
            ctx->pc = 0x172F58u;
            goto label_172f58;
        }
    }
    ctx->pc = 0x172B44u;
label_172b44:
    // 0x172b44: 0xa2206032  sb          $zero, 0x6032($s1)
    ctx->pc = 0x172b44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24626), (uint8_t)GPR_U32(ctx, 0));
label_172b48:
    // 0x172b48: 0x26222370  addiu       $v0, $s1, 0x2370
    ctx->pc = 0x172b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 9072));
label_172b4c:
    // 0x172b4c: 0xae224020  sw          $v0, 0x4020($s1)
    ctx->pc = 0x172b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16416), GPR_U32(ctx, 2));
label_172b50:
    // 0x172b50: 0x8e244020  lw          $a0, 0x4020($s1)
    ctx->pc = 0x172b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
label_172b54:
    // 0x172b54: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x172b54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_172b58:
    // 0x172b58: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x172b58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_172b5c:
    // 0x172b5c: 0x320f809  jalr        $t9
label_172b60:
    if (ctx->pc == 0x172B60u) {
        ctx->pc = 0x172B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B5Cu;
        // 0x172b60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B64u;
        goto label_172b64;
    }
    ctx->pc = 0x172B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172B64u);
        ctx->pc = 0x172B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B5Cu;
        // 0x172b60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172B5Cu, 0x172B64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172B64u;
label_172b64:
    // 0x172b64: 0xc045b20  jal         func_116C80
label_172b68:
    if (ctx->pc == 0x172B68u) {
        ctx->pc = 0x172B6Cu;
        goto label_172b6c;
    }
    ctx->pc = 0x172B64u;
    SET_GPR_U32(ctx, 31, 0x172B6Cu);
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x172B64u, 0x172B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172B6Cu;
label_172b6c:
    // 0x172b6c: 0xc045b20  jal         func_116C80
label_172b70:
    if (ctx->pc == 0x172B70u) {
        ctx->pc = 0x172B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B6Cu;
        // 0x172b70: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B74u;
        goto label_172b74;
    }
    ctx->pc = 0x172B6Cu;
    SET_GPR_U32(ctx, 31, 0x172B74u);
    ctx->pc = 0x172B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B6Cu;
    // 0x172b70: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x172B6Cu, 0x172B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172B74u;
label_172b74:
    // 0x172b74: 0xc045b00  jal         func_116C00
label_172b78:
    if (ctx->pc == 0x172B78u) {
        ctx->pc = 0x172B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B74u;
        // 0x172b78: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B7Cu;
        goto label_172b7c;
    }
    ctx->pc = 0x172B74u;
    SET_GPR_U32(ctx, 31, 0x172B7Cu);
    ctx->pc = 0x172B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B74u;
    // 0x172b78: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C00u, 0x172B74u, 0x172B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172B7Cu;
label_172b7c:
    // 0x172b7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x172b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_172b80:
    // 0x172b80: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x172b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_172b84:
    // 0x172b84: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x172b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_172b88:
    // 0x172b88: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x172b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_172b8c:
    // 0x172b8c: 0xc07d312  jal         func_1F4C48
label_172b90:
    if (ctx->pc == 0x172B90u) {
        ctx->pc = 0x172B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B8Cu;
        // 0x172b90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B94u;
        goto label_172b94;
    }
    ctx->pc = 0x172B8Cu;
    SET_GPR_U32(ctx, 31, 0x172B94u);
    ctx->pc = 0x172B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B8Cu;
    // 0x172b90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x172B8Cu, 0x172B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172B94u;
label_172b94:
    // 0x172b94: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x172b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_172b98:
    // 0x172b98: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x172b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_172b9c:
    // 0x172b9c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x172b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172ba0:
    // 0x172ba0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x172ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_172ba4:
    // 0x172ba4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x172ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172ba8:
    // 0x172ba8: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x172ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_172bac:
    // 0x172bac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x172bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_172bb0:
    // 0x172bb0: 0x26242370  addiu       $a0, $s1, 0x2370
    ctx->pc = 0x172bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9072));
label_172bb4:
    // 0x172bb4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x172bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_172bb8:
    // 0x172bb8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x172bb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_172bbc:
    // 0x172bbc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x172bbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_172bc0:
    // 0x172bc0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x172bc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_172bc4:
    // 0x172bc4: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x172bc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_172bc8:
    // 0x172bc8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x172bc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_172bcc:
    // 0x172bcc: 0xc05dcc0  jal         func_177300
label_172bd0:
    if (ctx->pc == 0x172BD0u) {
        ctx->pc = 0x172BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BCCu;
        // 0x172bd0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x172BD4u;
        goto label_172bd4;
    }
    ctx->pc = 0x172BCCu;
    SET_GPR_U32(ctx, 31, 0x172BD4u);
    ctx->pc = 0x172BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172BCCu;
    // 0x172bd0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x177300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177300u, 0x172BCCu, 0x172BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172BD4u;
label_172bd4:
    // 0x172bd4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x172bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_172bd8:
    // 0x172bd8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x172bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_172bdc:
    // 0x172bdc: 0xae236020  sw          $v1, 0x6020($s1)
    ctx->pc = 0x172bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24608), GPR_U32(ctx, 3));
label_172be0:
    // 0x172be0: 0x100000dd  b           . + 4 + (0xDD << 2)
label_172be4:
    if (ctx->pc == 0x172BE4u) {
        ctx->pc = 0x172BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BE0u;
        // 0x172be4: 0xae226014  sw          $v0, 0x6014($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172BE8u;
        goto label_172be8;
    }
    ctx->pc = 0x172BE0u;
    {
        const bool branch_taken_0x172be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BE0u;
        // 0x172be4: 0xae226014  sw          $v0, 0x6014($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172be0) {
            ctx->pc = 0x172F58u;
            goto label_172f58;
        }
    }
    ctx->pc = 0x172BE8u;
label_172be8:
    // 0x172be8: 0x8e244020  lw          $a0, 0x4020($s1)
    ctx->pc = 0x172be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
label_172bec:
    // 0x172bec: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x172becu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_172bf0:
    // 0x172bf0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x172bf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_172bf4:
    // 0x172bf4: 0x320f809  jalr        $t9
label_172bf8:
    if (ctx->pc == 0x172BF8u) {
        ctx->pc = 0x172BFCu;
        goto label_172bfc;
    }
    ctx->pc = 0x172BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172BFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172BF4u, 0x172BFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172BFCu;
label_172bfc:
    // 0x172bfc: 0x8e244020  lw          $a0, 0x4020($s1)
    ctx->pc = 0x172bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
label_172c00:
    // 0x172c00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x172c00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_172c04:
    // 0x172c04: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x172c04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_172c08:
    // 0x172c08: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x172c08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_172c0c:
    // 0x172c0c: 0x320f809  jalr        $t9
label_172c10:
    if (ctx->pc == 0x172C10u) {
        ctx->pc = 0x172C14u;
        goto label_172c14;
    }
    ctx->pc = 0x172C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172C14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172C0Cu, 0x172C14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172C14u;
label_172c14:
    // 0x172c14: 0x92226032  lbu         $v0, 0x6032($s1)
    ctx->pc = 0x172c14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24626)));
label_172c18:
    // 0x172c18: 0x104000cf  beqz        $v0, . + 4 + (0xCF << 2)
label_172c1c:
    if (ctx->pc == 0x172C1Cu) {
        ctx->pc = 0x172C20u;
        goto label_172c20;
    }
    ctx->pc = 0x172C18u;
    {
        const bool branch_taken_0x172c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172c18) {
            ctx->pc = 0x172F58u;
            goto label_172f58;
        }
    }
    ctx->pc = 0x172C20u;
label_172c20:
    // 0x172c20: 0xa2206032  sb          $zero, 0x6032($s1)
    ctx->pc = 0x172c20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24626), (uint8_t)GPR_U32(ctx, 0));
label_172c24:
    // 0x172c24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x172c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_172c28:
    // 0x172c28: 0x8e22601c  lw          $v0, 0x601C($s1)
    ctx->pc = 0x172c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24604)));
label_172c2c:
    // 0x172c2c: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x172c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_172c30:
    // 0x172c30: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x172c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_172c34:
    // 0x172c34: 0xc05e658  jal         func_179960
label_172c38:
    if (ctx->pc == 0x172C38u) {
        ctx->pc = 0x172C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C34u;
        // 0x172c38: 0xa2226034  sb          $v0, 0x6034($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 24628), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172C3Cu;
        goto label_172c3c;
    }
    ctx->pc = 0x172C34u;
    SET_GPR_U32(ctx, 31, 0x172C3Cu);
    ctx->pc = 0x172C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172C34u;
    // 0x172c38: 0xa2226034  sb          $v0, 0x6034($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 24628), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179960u, 0x172C34u, 0x172C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172C3Cu;
label_172c3c:
    // 0x172c3c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x172c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172c40:
    // 0x172c40: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x172c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_172c44:
    // 0x172c44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x172c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172c48:
    // 0x172c48: 0x0  nop
    ctx->pc = 0x172c48u;
    // NOP
label_172c4c:
    // 0x172c4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x172c4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_172c50:
    // 0x172c50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x172c50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_172c54:
    // 0x172c54: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172c54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_172c58:
    // 0x172c58: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x172c58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_172c5c:
    // 0x172c5c: 0x0  nop
    ctx->pc = 0x172c5cu;
    // NOP
label_172c60:
    // 0x172c60: 0xae226008  sw          $v0, 0x6008($s1)
    ctx->pc = 0x172c60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
label_172c64:
    // 0x172c64: 0x8e226014  lw          $v0, 0x6014($s1)
    ctx->pc = 0x172c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24596)));
label_172c68:
    // 0x172c68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x172c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_172c6c:
    // 0x172c6c: 0x100000ba  b           . + 4 + (0xBA << 2)
label_172c70:
    if (ctx->pc == 0x172C70u) {
        ctx->pc = 0x172C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C6Cu;
        // 0x172c70: 0xae226014  sw          $v0, 0x6014($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172C74u;
        goto label_172c74;
    }
    ctx->pc = 0x172C6Cu;
    {
        const bool branch_taken_0x172c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C6Cu;
        // 0x172c70: 0xae226014  sw          $v0, 0x6014($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c6c) {
            ctx->pc = 0x172F58u;
            goto label_172f58;
        }
    }
    ctx->pc = 0x172C74u;
label_172c74:
    // 0x172c74: 0xc05e6b0  jal         func_179AC0
label_172c78:
    if (ctx->pc == 0x172C78u) {
        ctx->pc = 0x172C7Cu;
        goto label_172c7c;
    }
    ctx->pc = 0x172C74u;
    SET_GPR_U32(ctx, 31, 0x172C7Cu);
    ctx->pc = 0x179AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179AC0u, 0x172C74u, 0x172C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172C7Cu;
label_172c7c:
    // 0x172c7c: 0x8e226008  lw          $v0, 0x6008($s1)
    ctx->pc = 0x172c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24584)));
label_172c80:
    // 0x172c80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x172c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_172c84:
    // 0x172c84: 0x1c4000b4  bgtz        $v0, . + 4 + (0xB4 << 2)
label_172c88:
    if (ctx->pc == 0x172C88u) {
        ctx->pc = 0x172C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C84u;
        // 0x172c88: 0xae226008  sw          $v0, 0x6008($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172C8Cu;
        goto label_172c8c;
    }
    ctx->pc = 0x172C84u;
    {
        const bool branch_taken_0x172c84 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x172C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C84u;
        // 0x172c88: 0xae226008  sw          $v0, 0x6008($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c84) {
            ctx->pc = 0x172F58u;
            goto label_172f58;
        }
    }
    ctx->pc = 0x172C8Cu;
label_172c8c:
    // 0x172c8c: 0x92226034  lbu         $v0, 0x6034($s1)
    ctx->pc = 0x172c8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24628)));
label_172c90:
    // 0x172c90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_172c94:
    if (ctx->pc == 0x172C94u) {
        ctx->pc = 0x172C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C90u;
        // 0x172c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172C98u;
        goto label_172c98;
    }
    ctx->pc = 0x172C90u;
    {
        const bool branch_taken_0x172c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C90u;
        // 0x172c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c90) {
            ctx->pc = 0x172CA8u;
            goto label_172ca8;
        }
    }
    ctx->pc = 0x172C98u;
label_172c98:
    // 0x172c98: 0xae20601c  sw          $zero, 0x601C($s1)
    ctx->pc = 0x172c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24604), GPR_U32(ctx, 0));
label_172c9c:
    // 0x172c9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x172c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172ca0:
    // 0x172ca0: 0xa2226033  sb          $v0, 0x6033($s1)
    ctx->pc = 0x172ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24627), (uint8_t)GPR_U32(ctx, 2));
label_172ca4:
    // 0x172ca4: 0xa2206031  sb          $zero, 0x6031($s1)
    ctx->pc = 0x172ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24625), (uint8_t)GPR_U32(ctx, 0));
label_172ca8:
    // 0x172ca8: 0xc05c9f4  jal         func_1727D0
label_172cac:
    if (ctx->pc == 0x172CACu) {
        ctx->pc = 0x172CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172CA8u;
        // 0x172cac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172CB0u;
        goto label_172cb0;
    }
    ctx->pc = 0x172CA8u;
    SET_GPR_U32(ctx, 31, 0x172CB0u);
    ctx->pc = 0x172CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172CA8u;
    // 0x172cac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1727D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1727D0u, 0x172CA8u, 0x172CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172CB0u;
label_172cb0:
    // 0x172cb0: 0x8e244020  lw          $a0, 0x4020($s1)
    ctx->pc = 0x172cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
label_172cb4:
    // 0x172cb4: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x172cb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_172cb8:
    // 0x172cb8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x172cb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_172cbc:
    // 0x172cbc: 0x320f809  jalr        $t9
label_172cc0:
    if (ctx->pc == 0x172CC0u) {
        ctx->pc = 0x172CC4u;
        goto label_172cc4;
    }
    ctx->pc = 0x172CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172CC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172CBCu, 0x172CC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172CC4u;
label_172cc4:
    // 0x172cc4: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x172cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172cc8:
    // 0x172cc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x172cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_172ccc:
    // 0x172ccc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x172cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172cd0:
    // 0x172cd0: 0x0  nop
    ctx->pc = 0x172cd0u;
    // NOP
label_172cd4:
    // 0x172cd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x172cd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_172cd8:
    // 0x172cd8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x172cd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_172cdc:
    // 0x172cdc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172cdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_172ce0:
    // 0x172ce0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x172ce0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_172ce4:
    // 0x172ce4: 0x0  nop
    ctx->pc = 0x172ce4u;
    // NOP
label_172ce8:
    // 0x172ce8: 0xae226008  sw          $v0, 0x6008($s1)
    ctx->pc = 0x172ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
label_172cec:
    // 0x172cec: 0xc6206008  lwc1        $f0, 0x6008($s1)
    ctx->pc = 0x172cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172cf0:
    // 0x172cf0: 0x8e244020  lw          $a0, 0x4020($s1)
    ctx->pc = 0x172cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
label_172cf4:
    // 0x172cf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x172cf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_172cf8:
    // 0x172cf8: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x172cf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_172cfc:
    // 0x172cfc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x172cfcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_172d00:
    // 0x172d00: 0x0  nop
    ctx->pc = 0x172d00u;
    // NOP
label_172d04:
    // 0x172d04: 0x0  nop
    ctx->pc = 0x172d04u;
    // NOP
label_172d08:
    // 0x172d08: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x172d08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_172d0c:
    // 0x172d0c: 0x320f809  jalr        $t9
label_172d10:
    if (ctx->pc == 0x172D10u) {
        ctx->pc = 0x172D14u;
        goto label_172d14;
    }
    ctx->pc = 0x172D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172D14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172D0Cu, 0x172D14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172D14u;
label_172d14:
    // 0x172d14: 0xc05cc98  jal         func_173260
label_172d18:
    if (ctx->pc == 0x172D18u) {
        ctx->pc = 0x172D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D14u;
        // 0x172d18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172D1Cu;
        goto label_172d1c;
    }
    ctx->pc = 0x172D14u;
    SET_GPR_U32(ctx, 31, 0x172D1Cu);
    ctx->pc = 0x172D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172D14u;
    // 0x172d18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173260u, 0x172D14u, 0x172D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172D1Cu;
label_172d1c:
    // 0x172d1c: 0x8e226008  lw          $v0, 0x6008($s1)
    ctx->pc = 0x172d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24584)));
label_172d20:
    // 0x172d20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x172d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_172d24:
    // 0x172d24: 0xae226008  sw          $v0, 0x6008($s1)
    ctx->pc = 0x172d24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
label_172d28:
    // 0x172d28: 0x8e226014  lw          $v0, 0x6014($s1)
    ctx->pc = 0x172d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24596)));
label_172d2c:
    // 0x172d2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x172d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_172d30:
    // 0x172d30: 0x10000089  b           . + 4 + (0x89 << 2)
label_172d34:
    if (ctx->pc == 0x172D34u) {
        ctx->pc = 0x172D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D30u;
        // 0x172d34: 0xae226014  sw          $v0, 0x6014($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172D38u;
        goto label_172d38;
    }
    ctx->pc = 0x172D30u;
    {
        const bool branch_taken_0x172d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D30u;
        // 0x172d34: 0xae226014  sw          $v0, 0x6014($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d30) {
            ctx->pc = 0x172F58u;
            goto label_172f58;
        }
    }
    ctx->pc = 0x172D38u;
label_172d38:
    // 0x172d38: 0xc05cc98  jal         func_173260
label_172d3c:
    if (ctx->pc == 0x172D3Cu) {
        ctx->pc = 0x172D40u;
        goto label_172d40;
    }
    ctx->pc = 0x172D38u;
    SET_GPR_U32(ctx, 31, 0x172D40u);
    ctx->pc = 0x173260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173260u, 0x172D38u, 0x172D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172D40u;
label_172d40:
    // 0x172d40: 0x8e226008  lw          $v0, 0x6008($s1)
    ctx->pc = 0x172d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24584)));
label_172d44:
    // 0x172d44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x172d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_172d48:
    // 0x172d48: 0x1c400083  bgtz        $v0, . + 4 + (0x83 << 2)
label_172d4c:
    if (ctx->pc == 0x172D4Cu) {
        ctx->pc = 0x172D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D48u;
        // 0x172d4c: 0xae226008  sw          $v0, 0x6008($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172D50u;
        goto label_172d50;
    }
    ctx->pc = 0x172D48u;
    {
        const bool branch_taken_0x172d48 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x172D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D48u;
        // 0x172d4c: 0xae226008  sw          $v0, 0x6008($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d48) {
            ctx->pc = 0x172F58u;
            goto label_172f58;
        }
    }
    ctx->pc = 0x172D50u;
label_172d50:
    // 0x172d50: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x172d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172d54:
    // 0x172d54: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x172d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_172d58:
    // 0x172d58: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x172d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_172d5c:
    // 0x172d5c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x172d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172d60:
    // 0x172d60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x172d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172d64:
    // 0x172d64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x172d64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_172d68:
    // 0x172d68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x172d68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_172d6c:
    // 0x172d6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172d6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_172d70:
    // 0x172d70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x172d70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_172d74:
    // 0x172d74: 0x0  nop
    ctx->pc = 0x172d74u;
    // NOP
label_172d78:
    // 0x172d78: 0xae236008  sw          $v1, 0x6008($s1)
    ctx->pc = 0x172d78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 3));
label_172d7c:
    // 0x172d7c: 0x10000076  b           . + 4 + (0x76 << 2)
label_172d80:
    if (ctx->pc == 0x172D80u) {
        ctx->pc = 0x172D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D7Cu;
        // 0x172d80: 0xae226014  sw          $v0, 0x6014($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172D84u;
        goto label_172d84;
    }
    ctx->pc = 0x172D7Cu;
    {
        const bool branch_taken_0x172d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D7Cu;
        // 0x172d80: 0xae226014  sw          $v0, 0x6014($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d7c) {
            ctx->pc = 0x172F58u;
            goto label_172f58;
        }
    }
    ctx->pc = 0x172D84u;
label_172d84:
    // 0x172d84: 0x8e244020  lw          $a0, 0x4020($s1)
    ctx->pc = 0x172d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
label_172d88:
    // 0x172d88: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x172d88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_172d8c:
    // 0x172d8c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x172d8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_172d90:
    // 0x172d90: 0x320f809  jalr        $t9
label_172d94:
    if (ctx->pc == 0x172D94u) {
        ctx->pc = 0x172D98u;
        goto label_172d98;
    }
    ctx->pc = 0x172D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172D98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172D90u, 0x172D98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172D98u;
label_172d98:
    // 0x172d98: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_172d9c:
    if (ctx->pc == 0x172D9Cu) {
        ctx->pc = 0x172DA0u;
        goto label_172da0;
    }
    ctx->pc = 0x172D98u;
    {
        const bool branch_taken_0x172d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172d98) {
            ctx->pc = 0x172DECu;
            goto label_172dec;
        }
    }
    ctx->pc = 0x172DA0u;
label_172da0:
    // 0x172da0: 0x8e244020  lw          $a0, 0x4020($s1)
    ctx->pc = 0x172da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
label_172da4:
    // 0x172da4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x172da4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_172da8:
    // 0x172da8: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x172da8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_172dac:
    // 0x172dac: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x172dacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_172db0:
    // 0x172db0: 0x320f809  jalr        $t9
label_172db4:
    if (ctx->pc == 0x172DB4u) {
        ctx->pc = 0x172DB8u;
        goto label_172db8;
    }
    ctx->pc = 0x172DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172DB8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172DB0u, 0x172DB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172DB8u;
label_172db8:
    // 0x172db8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x172db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172dbc:
    // 0x172dbc: 0xc05e610  jal         func_179840
label_172dc0:
    if (ctx->pc == 0x172DC0u) {
        ctx->pc = 0x172DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DBCu;
        // 0x172dc0: 0x2624402c  addiu       $a0, $s1, 0x402C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16428));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172DC4u;
        goto label_172dc4;
    }
    ctx->pc = 0x172DBCu;
    SET_GPR_U32(ctx, 31, 0x172DC4u);
    ctx->pc = 0x172DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172DBCu;
    // 0x172dc0: 0x2624402c  addiu       $a0, $s1, 0x402C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179840u, 0x172DBCu, 0x172DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172DC4u;
label_172dc4:
    // 0x172dc4: 0x8e3937b0  lw          $t9, 0x37B0($s1)
    ctx->pc = 0x172dc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14256)));
label_172dc8:
    // 0x172dc8: 0x262437a0  addiu       $a0, $s1, 0x37A0
    ctx->pc = 0x172dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14240));
label_172dcc:
    // 0x172dcc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x172dccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_172dd0:
    // 0x172dd0: 0x320f809  jalr        $t9
label_172dd4:
    if (ctx->pc == 0x172DD4u) {
        ctx->pc = 0x172DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DD0u;
        // 0x172dd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172DD8u;
        goto label_172dd8;
    }
    ctx->pc = 0x172DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172DD8u);
        ctx->pc = 0x172DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DD0u;
        // 0x172dd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172DD0u, 0x172DD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172DD8u;
label_172dd8:
    // 0x172dd8: 0xae206008  sw          $zero, 0x6008($s1)
    ctx->pc = 0x172dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 0));
label_172ddc:
    // 0x172ddc: 0x8e226014  lw          $v0, 0x6014($s1)
    ctx->pc = 0x172ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24596)));
label_172de0:
    // 0x172de0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x172de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_172de4:
    // 0x172de4: 0x1000005c  b           . + 4 + (0x5C << 2)
label_172de8:
    if (ctx->pc == 0x172DE8u) {
        ctx->pc = 0x172DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DE4u;
        // 0x172de8: 0xae226014  sw          $v0, 0x6014($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172DECu;
        goto label_172dec;
    }
    ctx->pc = 0x172DE4u;
    {
        const bool branch_taken_0x172de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DE4u;
        // 0x172de8: 0xae226014  sw          $v0, 0x6014($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172de4) {
            ctx->pc = 0x172F58u;
            goto label_172f58;
        }
    }
    ctx->pc = 0x172DECu;
label_172dec:
    // 0x172dec: 0x8e244020  lw          $a0, 0x4020($s1)
    ctx->pc = 0x172decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
label_172df0:
    // 0x172df0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x172df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_172df4:
    // 0x172df4: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x172df4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_172df8:
    // 0x172df8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x172df8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_172dfc:
    // 0x172dfc: 0x320f809  jalr        $t9
label_172e00:
    if (ctx->pc == 0x172E00u) {
        ctx->pc = 0x172E04u;
        goto label_172e04;
    }
    ctx->pc = 0x172DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172E04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172DFCu, 0x172E04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172E04u;
label_172e04:
    // 0x172e04: 0x10000055  b           . + 4 + (0x55 << 2)
label_172e08:
    if (ctx->pc == 0x172E08u) {
        ctx->pc = 0x172E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E04u;
        // 0x172e08: 0x8e226020  lw          $v0, 0x6020($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172E0Cu;
        goto label_172e0c;
    }
    ctx->pc = 0x172E04u;
    {
        const bool branch_taken_0x172e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E04u;
        // 0x172e08: 0x8e226020  lw          $v0, 0x6020($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e04) {
            ctx->pc = 0x172F5Cu;
            goto label_172f5c;
        }
    }
    ctx->pc = 0x172E0Cu;
label_172e0c:
    // 0x172e0c: 0x8e3937b0  lw          $t9, 0x37B0($s1)
    ctx->pc = 0x172e0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14256)));
label_172e10:
    // 0x172e10: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x172e10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_172e14:
    // 0x172e14: 0x320f809  jalr        $t9
label_172e18:
    if (ctx->pc == 0x172E18u) {
        ctx->pc = 0x172E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E14u;
        // 0x172e18: 0x262437a0  addiu       $a0, $s1, 0x37A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172E1Cu;
        goto label_172e1c;
    }
    ctx->pc = 0x172E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172E1Cu);
        ctx->pc = 0x172E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E14u;
        // 0x172e18: 0x262437a0  addiu       $a0, $s1, 0x37A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172E14u, 0x172E1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172E1Cu;
label_172e1c:
    // 0x172e1c: 0x8e3937b0  lw          $t9, 0x37B0($s1)
    ctx->pc = 0x172e1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14256)));
label_172e20:
    // 0x172e20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x172e20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_172e24:
    // 0x172e24: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x172e24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_172e28:
    // 0x172e28: 0x320f809  jalr        $t9
label_172e2c:
    if (ctx->pc == 0x172E2Cu) {
        ctx->pc = 0x172E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E28u;
        // 0x172e2c: 0x262437a0  addiu       $a0, $s1, 0x37A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172E30u;
        goto label_172e30;
    }
    ctx->pc = 0x172E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172E30u);
        ctx->pc = 0x172E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E28u;
        // 0x172e2c: 0x262437a0  addiu       $a0, $s1, 0x37A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172E28u, 0x172E30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172E30u;
label_172e30:
    // 0x172e30: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x172e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172e34:
    // 0x172e34: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x172e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_172e38:
    // 0x172e38: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x172e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_172e3c:
    // 0x172e3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x172e3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172e40:
    // 0x172e40: 0x8e226008  lw          $v0, 0x6008($s1)
    ctx->pc = 0x172e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24584)));
label_172e44:
    // 0x172e44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x172e44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_172e48:
    // 0x172e48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x172e48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_172e4c:
    // 0x172e4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172e4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_172e50:
    // 0x172e50: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x172e50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_172e54:
    // 0x172e54: 0x0  nop
    ctx->pc = 0x172e54u;
    // NOP
label_172e58:
    // 0x172e58: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x172e58u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_172e5c:
    // 0x172e5c: 0x0  nop
    ctx->pc = 0x172e5cu;
    // NOP
label_172e60:
    // 0x172e60: 0x0  nop
    ctx->pc = 0x172e60u;
    // NOP
label_172e64:
    // 0x172e64: 0x1010  mfhi        $v0
    ctx->pc = 0x172e64u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_172e68:
    // 0x172e68: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_172e6c:
    if (ctx->pc == 0x172E6Cu) {
        ctx->pc = 0x172E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E68u;
        // 0x172e6c: 0x2624402c  addiu       $a0, $s1, 0x402C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16428));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172E70u;
        goto label_172e70;
    }
    ctx->pc = 0x172E68u;
    {
        const bool branch_taken_0x172e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E68u;
        // 0x172e6c: 0x2624402c  addiu       $a0, $s1, 0x402C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16428));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e68) {
            ctx->pc = 0x172F58u;
            goto label_172f58;
        }
    }
    ctx->pc = 0x172E70u;
label_172e70:
    // 0x172e70: 0xc05e638  jal         func_1798E0
label_172e74:
    if (ctx->pc == 0x172E74u) {
        ctx->pc = 0x172E78u;
        goto label_172e78;
    }
    ctx->pc = 0x172E70u;
    SET_GPR_U32(ctx, 31, 0x172E78u);
    ctx->pc = 0x1798E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1798E0u, 0x172E70u, 0x172E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172E78u;
label_172e78:
    // 0x172e78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x172e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172e7c:
    // 0x172e7c: 0x6000014  bltz        $s0, . + 4 + (0x14 << 2)
label_172e80:
    if (ctx->pc == 0x172E80u) {
        ctx->pc = 0x172E84u;
        goto label_172e84;
    }
    ctx->pc = 0x172E7Cu;
    {
        const bool branch_taken_0x172e7c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x172e7c) {
            ctx->pc = 0x172ED0u;
            goto label_172ed0;
        }
    }
    ctx->pc = 0x172E84u;
label_172e84:
    // 0x172e84: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x172e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_172e88:
    // 0x172e88: 0x262437a0  addiu       $a0, $s1, 0x37A0
    ctx->pc = 0x172e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14240));
label_172e8c:
    // 0x172e8c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x172e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_172e90:
    // 0x172e90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x172e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172e94:
    // 0x172e94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x172e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_172e98:
    // 0x172e98: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x172e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_172e9c:
    // 0x172e9c: 0xc05e5e0  jal         func_179780
label_172ea0:
    if (ctx->pc == 0x172EA0u) {
        ctx->pc = 0x172EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E9Cu;
        // 0x172ea0: 0x24460060  addiu       $a2, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172EA4u;
        goto label_172ea4;
    }
    ctx->pc = 0x172E9Cu;
    SET_GPR_U32(ctx, 31, 0x172EA4u);
    ctx->pc = 0x172EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172E9Cu;
    // 0x172ea0: 0x24460060  addiu       $a2, $v0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179780u, 0x172E9Cu, 0x172EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172EA4u;
label_172ea4:
    // 0x172ea4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x172ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_172ea8:
    // 0x172ea8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x172ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172eac:
    // 0x172eac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x172eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_172eb0:
    // 0x172eb0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x172eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_172eb4:
    // 0x172eb4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x172eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_172eb8:
    // 0x172eb8: 0xac4300a4  sw          $v1, 0xA4($v0)
    ctx->pc = 0x172eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 3));
label_172ebc:
    // 0x172ebc: 0x8e244024  lw          $a0, 0x4024($s1)
    ctx->pc = 0x172ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16420)));
label_172ec0:
    // 0x172ec0: 0xc042118  jal         func_108460
label_172ec4:
    if (ctx->pc == 0x172EC4u) {
        ctx->pc = 0x172EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172EC0u;
        // 0x172ec4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172EC8u;
        goto label_172ec8;
    }
    ctx->pc = 0x172EC0u;
    SET_GPR_U32(ctx, 31, 0x172EC8u);
    ctx->pc = 0x172EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172EC0u;
    // 0x172ec4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x172EC0u, 0x172EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172EC8u;
label_172ec8:
    // 0x172ec8: 0x10000023  b           . + 4 + (0x23 << 2)
label_172ecc:
    if (ctx->pc == 0x172ECCu) {
        ctx->pc = 0x172ED0u;
        goto label_172ed0;
    }
    ctx->pc = 0x172EC8u;
    {
        const bool branch_taken_0x172ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172ec8) {
            ctx->pc = 0x172F58u;
            goto label_172f58;
        }
    }
    ctx->pc = 0x172ED0u;
label_172ed0:
    // 0x172ed0: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x172ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172ed4:
    // 0x172ed4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x172ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_172ed8:
    // 0x172ed8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x172ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172edc:
    // 0x172edc: 0x0  nop
    ctx->pc = 0x172edcu;
    // NOP
label_172ee0:
    // 0x172ee0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x172ee0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_172ee4:
    // 0x172ee4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x172ee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_172ee8:
    // 0x172ee8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172ee8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_172eec:
    // 0x172eec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x172eecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_172ef0:
    // 0x172ef0: 0x0  nop
    ctx->pc = 0x172ef0u;
    // NOP
label_172ef4:
    // 0x172ef4: 0xae226008  sw          $v0, 0x6008($s1)
    ctx->pc = 0x172ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
label_172ef8:
    // 0x172ef8: 0x8e226014  lw          $v0, 0x6014($s1)
    ctx->pc = 0x172ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24596)));
label_172efc:
    // 0x172efc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x172efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_172f00:
    // 0x172f00: 0x10000015  b           . + 4 + (0x15 << 2)
label_172f04:
    if (ctx->pc == 0x172F04u) {
        ctx->pc = 0x172F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F00u;
        // 0x172f04: 0xae226014  sw          $v0, 0x6014($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F08u;
        goto label_172f08;
    }
    ctx->pc = 0x172F00u;
    {
        const bool branch_taken_0x172f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F00u;
        // 0x172f04: 0xae226014  sw          $v0, 0x6014($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f00) {
            ctx->pc = 0x172F58u;
            goto label_172f58;
        }
    }
    ctx->pc = 0x172F08u;
label_172f08:
    // 0x172f08: 0x8e226008  lw          $v0, 0x6008($s1)
    ctx->pc = 0x172f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24584)));
label_172f0c:
    // 0x172f0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x172f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_172f10:
    // 0x172f10: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_172f14:
    if (ctx->pc == 0x172F14u) {
        ctx->pc = 0x172F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F10u;
        // 0x172f14: 0xae226008  sw          $v0, 0x6008($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F18u;
        goto label_172f18;
    }
    ctx->pc = 0x172F10u;
    {
        const bool branch_taken_0x172f10 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x172F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F10u;
        // 0x172f14: 0xae226008  sw          $v0, 0x6008($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f10) {
            ctx->pc = 0x172F30u;
            goto label_172f30;
        }
    }
    ctx->pc = 0x172F18u;
label_172f18:
    // 0x172f18: 0x8e3937b0  lw          $t9, 0x37B0($s1)
    ctx->pc = 0x172f18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14256)));
label_172f1c:
    // 0x172f1c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x172f1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_172f20:
    // 0x172f20: 0x320f809  jalr        $t9
label_172f24:
    if (ctx->pc == 0x172F24u) {
        ctx->pc = 0x172F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F20u;
        // 0x172f24: 0x262437a0  addiu       $a0, $s1, 0x37A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F28u;
        goto label_172f28;
    }
    ctx->pc = 0x172F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172F28u);
        ctx->pc = 0x172F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F20u;
        // 0x172f24: 0x262437a0  addiu       $a0, $s1, 0x37A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172F20u, 0x172F28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172F28u;
label_172f28:
    // 0x172f28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_172f2c:
    if (ctx->pc == 0x172F2Cu) {
        ctx->pc = 0x172F30u;
        goto label_172f30;
    }
    ctx->pc = 0x172F28u;
    {
        const bool branch_taken_0x172f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172f28) {
            ctx->pc = 0x172F44u;
            goto label_172f44;
        }
    }
    ctx->pc = 0x172F30u;
label_172f30:
    // 0x172f30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x172f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172f34:
    // 0x172f34: 0xae226020  sw          $v0, 0x6020($s1)
    ctx->pc = 0x172f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24608), GPR_U32(ctx, 2));
label_172f38:
    // 0x172f38: 0x8e226014  lw          $v0, 0x6014($s1)
    ctx->pc = 0x172f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24596)));
label_172f3c:
    // 0x172f3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x172f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_172f40:
    // 0x172f40: 0xae226014  sw          $v0, 0x6014($s1)
    ctx->pc = 0x172f40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
label_172f44:
    // 0x172f44: 0x8e3937b0  lw          $t9, 0x37B0($s1)
    ctx->pc = 0x172f44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14256)));
label_172f48:
    // 0x172f48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x172f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_172f4c:
    // 0x172f4c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x172f4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_172f50:
    // 0x172f50: 0x320f809  jalr        $t9
label_172f54:
    if (ctx->pc == 0x172F54u) {
        ctx->pc = 0x172F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F50u;
        // 0x172f54: 0x262437a0  addiu       $a0, $s1, 0x37A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F58u;
        goto label_172f58;
    }
    ctx->pc = 0x172F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172F58u);
        ctx->pc = 0x172F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F50u;
        // 0x172f54: 0x262437a0  addiu       $a0, $s1, 0x37A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172F50u, 0x172F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172F58u;
label_172f58:
    // 0x172f58: 0x8e226020  lw          $v0, 0x6020($s1)
    ctx->pc = 0x172f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24608)));
label_172f5c:
    // 0x172f5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x172f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172f60:
    // 0x172f60: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
label_172f64:
    if (ctx->pc == 0x172F64u) {
        ctx->pc = 0x172F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F60u;
        // 0x172f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F68u;
        goto label_172f68;
    }
    ctx->pc = 0x172F60u;
    {
        const bool branch_taken_0x172f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x172F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F60u;
        // 0x172f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f60) {
            ctx->pc = 0x172F74u;
            goto label_172f74;
        }
    }
    ctx->pc = 0x172F68u;
label_172f68:
    // 0x172f68: 0xc05ccd4  jal         func_173350
label_172f6c:
    if (ctx->pc == 0x172F6Cu) {
        ctx->pc = 0x172F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F68u;
        // 0x172f6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F70u;
        goto label_172f70;
    }
    ctx->pc = 0x172F68u;
    SET_GPR_U32(ctx, 31, 0x172F70u);
    ctx->pc = 0x172F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F68u;
    // 0x172f6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173350u, 0x172F68u, 0x172F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F70u;
label_172f70:
    // 0x172f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x172f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_172f74:
    // 0x172f74: 0xc07d3ac  jal         func_1F4EB0
label_172f78:
    if (ctx->pc == 0x172F78u) {
        ctx->pc = 0x172F7Cu;
        goto label_172f7c;
    }
    ctx->pc = 0x172F74u;
    SET_GPR_U32(ctx, 31, 0x172F7Cu);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x172F74u, 0x172F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F7Cu;
label_172f7c:
    // 0x172f7c: 0x26231460  addiu       $v1, $s1, 0x1460
    ctx->pc = 0x172f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5216));
label_172f80:
    // 0x172f80: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x172f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_172f84:
    // 0x172f84: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x172f84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_172f88:
    // 0x172f88: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x172f88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_172f8c:
    // 0x172f8c: 0xc05ccac  jal         func_1732B0
label_172f90:
    if (ctx->pc == 0x172F90u) {
        ctx->pc = 0x172F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F8Cu;
        // 0x172f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F94u;
        goto label_172f94;
    }
    ctx->pc = 0x172F8Cu;
    SET_GPR_U32(ctx, 31, 0x172F94u);
    ctx->pc = 0x172F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F8Cu;
    // 0x172f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1732B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1732B0u, 0x172F8Cu, 0x172F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F94u;
label_172f94:
    // 0x172f94: 0x26221480  addiu       $v0, $s1, 0x1480
    ctx->pc = 0x172f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5248));
label_172f98:
    // 0x172f98: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x172f98u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_172f9c:
    // 0x172f9c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x172f9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_172fa0:
    // 0x172fa0: 0xda250010  lqc2        $vf5, 0x10($s1)
    ctx->pc = 0x172fa0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_172fa4:
    // 0x172fa4: 0xda260020  lqc2        $vf6, 0x20($s1)
    ctx->pc = 0x172fa4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_172fa8:
    // 0x172fa8: 0xda270030  lqc2        $vf7, 0x30($s1)
    ctx->pc = 0x172fa8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_172fac:
    // 0x172fac: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x172facu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_172fb0:
    // 0x172fb0: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x172fb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_172fb4:
    // 0x172fb4: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x172fb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_172fb8:
    // 0x172fb8: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x172fb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_172fbc:
    // 0x172fbc: 0xf8480000  sqc2        $vf8, 0x0($v0)
    ctx->pc = 0x172fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[8]));
label_172fc0:
    // 0x172fc0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x172fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_172fc4:
    // 0x172fc4: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x172fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
label_172fc8:
    // 0x172fc8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_172fcc:
    if (ctx->pc == 0x172FCCu) {
        ctx->pc = 0x172FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FC8u;
        // 0x172fcc: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172FD0u;
        goto label_172fd0;
    }
    ctx->pc = 0x172FC8u;
    {
        const bool branch_taken_0x172fc8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x172FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FC8u;
        // 0x172fcc: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172fc8) {
            ctx->pc = 0x172FD8u;
            goto label_172fd8;
        }
    }
    ctx->pc = 0x172FD0u;
label_172fd0:
    // 0x172fd0: 0x10000007  b           . + 4 + (0x7 << 2)
label_172fd4:
    if (ctx->pc == 0x172FD4u) {
        ctx->pc = 0x172FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FD0u;
        // 0x172fd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172FD8u;
        goto label_172fd8;
    }
    ctx->pc = 0x172FD0u;
    {
        const bool branch_taken_0x172fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FD0u;
        // 0x172fd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172fd0) {
            ctx->pc = 0x172FF0u;
            goto label_172ff0;
        }
    }
    ctx->pc = 0x172FD8u;
label_172fd8:
    // 0x172fd8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x172fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_172fdc:
    // 0x172fdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x172fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_172fe0:
    // 0x172fe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_172fe4:
    // 0x172fe4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x172fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_172fe8:
    // 0x172fe8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x172fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_172fec:
    // 0x172fec: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x172fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_172ff0:
    // 0x172ff0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x172ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172ff4:
    // 0x172ff4: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x172ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_172ff8:
    // 0x172ff8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x172ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_172ffc:
    // 0x172ffc: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x172ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
label_173000:
    // 0x173000: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_173004:
    if (ctx->pc == 0x173004u) {
        ctx->pc = 0x173008u;
        goto label_173008;
    }
    ctx->pc = 0x173000u;
    {
        const bool branch_taken_0x173000 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x173000) {
            ctx->pc = 0x173010u;
            goto label_173010;
        }
    }
    ctx->pc = 0x173008u;
label_173008:
    // 0x173008: 0x10000008  b           . + 4 + (0x8 << 2)
label_17300c:
    if (ctx->pc == 0x17300Cu) {
        ctx->pc = 0x17300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173008u;
        // 0x17300c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173010u;
        goto label_173010;
    }
    ctx->pc = 0x173008u;
    {
        const bool branch_taken_0x173008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173008u;
        // 0x17300c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173008) {
            ctx->pc = 0x17302Cu;
            goto label_17302c;
        }
    }
    ctx->pc = 0x173010u;
label_173010:
    // 0x173010: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x173010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_173014:
    // 0x173014: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x173014u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_173018:
    // 0x173018: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x173018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17301c:
    // 0x17301c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17301cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_173020:
    // 0x173020: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x173020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_173024:
    // 0x173024: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x173024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_173028:
    // 0x173028: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x173028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_17302c:
    // 0x17302c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x17302cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_173030:
    // 0x173030: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x173030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_173034:
    // 0x173034: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x173034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_173038:
    // 0x173038: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x173038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
label_17303c:
    // 0x17303c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_173040:
    if (ctx->pc == 0x173040u) {
        ctx->pc = 0x173044u;
        goto label_173044;
    }
    ctx->pc = 0x17303Cu;
    {
        const bool branch_taken_0x17303c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x17303c) {
            ctx->pc = 0x17304Cu;
            goto label_17304c;
        }
    }
    ctx->pc = 0x173044u;
label_173044:
    // 0x173044: 0x10000008  b           . + 4 + (0x8 << 2)
label_173048:
    if (ctx->pc == 0x173048u) {
        ctx->pc = 0x173048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173044u;
        // 0x173048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17304Cu;
        goto label_17304c;
    }
    ctx->pc = 0x173044u;
    {
        const bool branch_taken_0x173044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173044u;
        // 0x173048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173044) {
            ctx->pc = 0x173068u;
            goto label_173068;
        }
    }
    ctx->pc = 0x17304Cu;
label_17304c:
    // 0x17304c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17304cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_173050:
    // 0x173050: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x173050u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_173054:
    // 0x173054: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x173054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_173058:
    // 0x173058: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17305c:
    // 0x17305c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17305cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_173060:
    // 0x173060: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x173060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_173064:
    // 0x173064: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x173064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_173068:
    // 0x173068: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x173068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17306c:
    // 0x17306c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17306cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_173070:
    // 0x173070: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x173070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_173074:
    // 0x173074: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x173074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_173078:
    // 0x173078: 0x8e226020  lw          $v0, 0x6020($s1)
    ctx->pc = 0x173078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24608)));
label_17307c:
    // 0x17307c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_173080:
    if (ctx->pc == 0x173080u) {
        ctx->pc = 0x173084u;
        goto label_173084;
    }
    ctx->pc = 0x17307Cu;
    {
        const bool branch_taken_0x17307c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17307c) {
            ctx->pc = 0x17308Cu;
            goto label_17308c;
        }
    }
    ctx->pc = 0x173084u;
label_173084:
    // 0x173084: 0x8e224028  lw          $v0, 0x4028($s1)
    ctx->pc = 0x173084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16424)));
label_173088:
    // 0x173088: 0xa04001d3  sb          $zero, 0x1D3($v0)
    ctx->pc = 0x173088u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 467), (uint8_t)GPR_U32(ctx, 0));
label_17308c:
    // 0x17308c: 0x92226034  lbu         $v0, 0x6034($s1)
    ctx->pc = 0x17308cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24628)));
label_173090:
    // 0x173090: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_173094:
    if (ctx->pc == 0x173094u) {
        ctx->pc = 0x173098u;
        goto label_173098;
    }
    ctx->pc = 0x173090u;
    {
        const bool branch_taken_0x173090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173090) {
            ctx->pc = 0x173118u;
            goto label_173118;
        }
    }
    ctx->pc = 0x173098u;
label_173098:
    // 0x173098: 0xc7838020  lwc1        $f3, -0x7FE0($gp)
    ctx->pc = 0x173098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_17309c:
    // 0x17309c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x17309cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_1730a0:
    // 0x1730a0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1730a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1730a4:
    // 0x1730a4: 0xc6211464  lwc1        $f1, 0x1464($s1)
    ctx->pc = 0x1730a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1730a8:
    // 0x1730a8: 0xc6201474  lwc1        $f0, 0x1474($s1)
    ctx->pc = 0x1730a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1730ac:
    // 0x1730ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1730acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1730b0:
    // 0x1730b0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1730b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1730b4:
    // 0x1730b4: 0x0  nop
    ctx->pc = 0x1730b4u;
    // NOP
label_1730b8:
    // 0x1730b8: 0x45010028  bc1t        . + 4 + (0x28 << 2)
label_1730bc:
    if (ctx->pc == 0x1730BCu) {
        ctx->pc = 0x1730BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730B8u;
        // 0x1730bc: 0x46031082  mul.s       $f2, $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1730C0u;
        goto label_1730c0;
    }
    ctx->pc = 0x1730B8u;
    {
        const bool branch_taken_0x1730b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1730BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730B8u;
        // 0x1730bc: 0x46031082  mul.s       $f2, $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730b8) {
            ctx->pc = 0x17315Cu;
            goto label_17315c;
        }
    }
    ctx->pc = 0x1730C0u;
label_1730c0:
    // 0x1730c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1730c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1730c4:
    // 0x1730c4: 0x0  nop
    ctx->pc = 0x1730c4u;
    // NOP
label_1730c8:
    // 0x1730c8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_1730cc:
    if (ctx->pc == 0x1730CCu) {
        ctx->pc = 0x1730D0u;
        goto label_1730d0;
    }
    ctx->pc = 0x1730C8u;
    {
        const bool branch_taken_0x1730c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1730c8) {
            ctx->pc = 0x1730F4u;
            goto label_1730f4;
        }
    }
    ctx->pc = 0x1730D0u;
label_1730d0:
    // 0x1730d0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1730d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1730d4:
    // 0x1730d4: 0xe6211464  swc1        $f1, 0x1464($s1)
    ctx->pc = 0x1730d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5220), bits); }
label_1730d8:
    // 0x1730d8: 0xc6201474  lwc1        $f0, 0x1474($s1)
    ctx->pc = 0x1730d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1730dc:
    // 0x1730dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1730dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1730e0:
    // 0x1730e0: 0x0  nop
    ctx->pc = 0x1730e0u;
    // NOP
label_1730e4:
    // 0x1730e4: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_1730e8:
    if (ctx->pc == 0x1730E8u) {
        ctx->pc = 0x1730E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730E4u;
        // 0x1730e8: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1730ECu;
        goto label_1730ec;
    }
    ctx->pc = 0x1730E4u;
    {
        const bool branch_taken_0x1730e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1730E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730E4u;
        // 0x1730e8: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730e4) {
            ctx->pc = 0x173160u;
            goto label_173160;
        }
    }
    ctx->pc = 0x1730ECu;
label_1730ec:
    // 0x1730ec: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1730f0:
    if (ctx->pc == 0x1730F0u) {
        ctx->pc = 0x1730F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730ECu;
        // 0x1730f0: 0xe6201464  swc1        $f0, 0x1464($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5220), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1730F4u;
        goto label_1730f4;
    }
    ctx->pc = 0x1730ECu;
    {
        const bool branch_taken_0x1730ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1730F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730ECu;
        // 0x1730f0: 0xe6201464  swc1        $f0, 0x1464($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730ec) {
            ctx->pc = 0x17315Cu;
            goto label_17315c;
        }
    }
    ctx->pc = 0x1730F4u;
label_1730f4:
    // 0x1730f4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1730f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1730f8:
    // 0x1730f8: 0xe6211464  swc1        $f1, 0x1464($s1)
    ctx->pc = 0x1730f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5220), bits); }
label_1730fc:
    // 0x1730fc: 0xc6201474  lwc1        $f0, 0x1474($s1)
    ctx->pc = 0x1730fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_173100:
    // 0x173100: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x173100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_173104:
    // 0x173104: 0x0  nop
    ctx->pc = 0x173104u;
    // NOP
label_173108:
    // 0x173108: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_17310c:
    if (ctx->pc == 0x17310Cu) {
        ctx->pc = 0x173110u;
        goto label_173110;
    }
    ctx->pc = 0x173108u;
    {
        const bool branch_taken_0x173108 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x173108) {
            ctx->pc = 0x17315Cu;
            goto label_17315c;
        }
    }
    ctx->pc = 0x173110u;
label_173110:
    // 0x173110: 0x10000012  b           . + 4 + (0x12 << 2)
label_173114:
    if (ctx->pc == 0x173114u) {
        ctx->pc = 0x173114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173110u;
        // 0x173114: 0xe6201464  swc1        $f0, 0x1464($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5220), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x173118u;
        goto label_173118;
    }
    ctx->pc = 0x173110u;
    {
        const bool branch_taken_0x173110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173110u;
        // 0x173114: 0xe6201464  swc1        $f0, 0x1464($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x173110) {
            ctx->pc = 0x17315Cu;
            goto label_17315c;
        }
    }
    ctx->pc = 0x173118u;
label_173118:
    // 0x173118: 0xc7838020  lwc1        $f3, -0x7FE0($gp)
    ctx->pc = 0x173118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_17311c:
    // 0x17311c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x17311cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_173120:
    // 0x173120: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x173120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_173124:
    // 0x173124: 0xc6211484  lwc1        $f1, 0x1484($s1)
    ctx->pc = 0x173124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_173128:
    // 0x173128: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x173128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17312c:
    // 0x17312c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17312cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_173130:
    // 0x173130: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x173130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_173134:
    // 0x173134: 0x0  nop
    ctx->pc = 0x173134u;
    // NOP
label_173138:
    // 0x173138: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_17313c:
    if (ctx->pc == 0x17313Cu) {
        ctx->pc = 0x17313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173138u;
        // 0x17313c: 0x46031082  mul.s       $f2, $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x173140u;
        goto label_173140;
    }
    ctx->pc = 0x173138u;
    {
        const bool branch_taken_0x173138 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173138u;
        // 0x17313c: 0x46031082  mul.s       $f2, $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173138) {
            ctx->pc = 0x173150u;
            goto label_173150;
        }
    }
    ctx->pc = 0x173140u;
label_173140:
    // 0x173140: 0xc6201464  lwc1        $f0, 0x1464($s1)
    ctx->pc = 0x173140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_173144:
    // 0x173144: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x173144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_173148:
    // 0x173148: 0x10000004  b           . + 4 + (0x4 << 2)
label_17314c:
    if (ctx->pc == 0x17314Cu) {
        ctx->pc = 0x17314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173148u;
        // 0x17314c: 0xe6201464  swc1        $f0, 0x1464($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5220), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x173150u;
        goto label_173150;
    }
    ctx->pc = 0x173148u;
    {
        const bool branch_taken_0x173148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173148u;
        // 0x17314c: 0xe6201464  swc1        $f0, 0x1464($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x173148) {
            ctx->pc = 0x17315Cu;
            goto label_17315c;
        }
    }
    ctx->pc = 0x173150u;
label_173150:
    // 0x173150: 0xc6201464  lwc1        $f0, 0x1464($s1)
    ctx->pc = 0x173150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_173154:
    // 0x173154: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x173154u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_173158:
    // 0x173158: 0xe6201464  swc1        $f0, 0x1464($s1)
    ctx->pc = 0x173158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5220), bits); }
label_17315c:
    // 0x17315c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x17315cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_173160:
    // 0x173160: 0x26231480  addiu       $v1, $s1, 0x1480
    ctx->pc = 0x173160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5248));
label_173164:
    // 0x173164: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x173164u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_173168:
    // 0x173168: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x173168u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_17316c:
    // 0x17316c: 0x4bc4292c  vsub.xyz    $vf4, $vf5, $vf4
    ctx->pc = 0x17316cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_173170:
    // 0x173170: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x173170u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_173174:
    // 0x173174: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x173174u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_173178:
    // 0x173178: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x173178u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_17317c:
    // 0x17317c: 0x4a0503bd  .word       0x4A0503BD                   # vsqrt       $Q, $vf5x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17317cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_173180:
    // 0x173180: 0x4a0003bf  vwaitq
    ctx->pc = 0x173180u;
    // VWAITQ (Q already resolved in this runtime)
label_173184:
    // 0x173184: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x173184u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_173188:
    // 0x173188: 0x4a0002ff  vnop
    ctx->pc = 0x173188u;
    // NOP operation, no action needed for VU0
label_17318c:
    // 0x17318c: 0x4a0002ff  vnop
    ctx->pc = 0x17318cu;
    // NOP operation, no action needed for VU0
label_173190:
    // 0x173190: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x173190u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_173194:
    // 0x173194: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x173194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_173198:
    // 0x173198: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x173198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_17319c:
    // 0x17319c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17319cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1731a0:
    // 0x1731a0: 0x0  nop
    ctx->pc = 0x1731a0u;
    // NOP
label_1731a4:
    // 0x1731a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1731a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1731a8:
    // 0x1731a8: 0x0  nop
    ctx->pc = 0x1731a8u;
    // NOP
label_1731ac:
    // 0x1731ac: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_1731b0:
    if (ctx->pc == 0x1731B0u) {
        ctx->pc = 0x1731B4u;
        goto label_1731b4;
    }
    ctx->pc = 0x1731ACu;
    {
        const bool branch_taken_0x1731ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1731ac) {
            ctx->pc = 0x173244u;
            goto label_173244;
        }
    }
    ctx->pc = 0x1731B4u;
label_1731b4:
    // 0x1731b4: 0x8e226014  lw          $v0, 0x6014($s1)
    ctx->pc = 0x1731b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24596)));
label_1731b8:
    // 0x1731b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1731b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1731bc:
    // 0x1731bc: 0x14450021  bne         $v0, $a1, . + 4 + (0x21 << 2)
label_1731c0:
    if (ctx->pc == 0x1731C0u) {
        ctx->pc = 0x1731C4u;
        goto label_1731c4;
    }
    ctx->pc = 0x1731BCu;
    {
        const bool branch_taken_0x1731bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1731bc) {
            ctx->pc = 0x173244u;
            goto label_173244;
        }
    }
    ctx->pc = 0x1731C4u;
label_1731c4:
    // 0x1731c4: 0x8e236018  lw          $v1, 0x6018($s1)
    ctx->pc = 0x1731c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24600)));
label_1731c8:
    // 0x1731c8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1731c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1731cc:
    // 0x1731cc: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
label_1731d0:
    if (ctx->pc == 0x1731D0u) {
        ctx->pc = 0x1731D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731CCu;
        // 0x1731d0: 0xae226018  sw          $v0, 0x6018($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1731D4u;
        goto label_1731d4;
    }
    ctx->pc = 0x1731CCu;
    {
        const bool branch_taken_0x1731cc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1731D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731CCu;
        // 0x1731d0: 0xae226018  sw          $v0, 0x6018($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1731cc) {
            ctx->pc = 0x1731E4u;
            goto label_1731e4;
        }
    }
    ctx->pc = 0x1731D4u;
label_1731d4:
    // 0x1731d4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1731d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1731d8:
    // 0x1731d8: 0xae226018  sw          $v0, 0x6018($s1)
    ctx->pc = 0x1731d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24600), GPR_U32(ctx, 2));
label_1731dc:
    // 0x1731dc: 0x10000019  b           . + 4 + (0x19 << 2)
label_1731e0:
    if (ctx->pc == 0x1731E0u) {
        ctx->pc = 0x1731E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731DCu;
        // 0x1731e0: 0xa2256032  sb          $a1, 0x6032($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 24626), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1731E4u;
        goto label_1731e4;
    }
    ctx->pc = 0x1731DCu;
    {
        const bool branch_taken_0x1731dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1731E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731DCu;
        // 0x1731e0: 0xa2256032  sb          $a1, 0x6032($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 24626), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1731dc) {
            ctx->pc = 0x173244u;
            goto label_173244;
        }
    }
    ctx->pc = 0x1731E4u;
label_1731e4:
    // 0x1731e4: 0xc042118  jal         func_108460
label_1731e8:
    if (ctx->pc == 0x1731E8u) {
        ctx->pc = 0x1731E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731E4u;
        // 0x1731e8: 0x8e244024  lw          $a0, 0x4024($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1731ECu;
        goto label_1731ec;
    }
    ctx->pc = 0x1731E4u;
    SET_GPR_U32(ctx, 31, 0x1731ECu);
    ctx->pc = 0x1731E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1731E4u;
    // 0x1731e8: 0x8e244024  lw          $a0, 0x4024($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16420)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1731E4u, 0x1731ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1731ECu;
label_1731ec:
    // 0x1731ec: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1731ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1731f0:
    // 0x1731f0: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x1731f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
label_1731f4:
    // 0x1731f4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1731f8:
    if (ctx->pc == 0x1731F8u) {
        ctx->pc = 0x1731F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731F4u;
        // 0x1731f8: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1731FCu;
        goto label_1731fc;
    }
    ctx->pc = 0x1731F4u;
    {
        const bool branch_taken_0x1731f4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1731F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731F4u;
        // 0x1731f8: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1731f4) {
            ctx->pc = 0x173204u;
            goto label_173204;
        }
    }
    ctx->pc = 0x1731FCu;
label_1731fc:
    // 0x1731fc: 0x10000007  b           . + 4 + (0x7 << 2)
label_173200:
    if (ctx->pc == 0x173200u) {
        ctx->pc = 0x173200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731FCu;
        // 0x173200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173204u;
        goto label_173204;
    }
    ctx->pc = 0x1731FCu;
    {
        const bool branch_taken_0x1731fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731FCu;
        // 0x173200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1731fc) {
            ctx->pc = 0x17321Cu;
            goto label_17321c;
        }
    }
    ctx->pc = 0x173204u;
label_173204:
    // 0x173204: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x173204u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_173208:
    // 0x173208: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x173208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17320c:
    // 0x17320c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17320cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_173210:
    // 0x173210: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x173210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_173214:
    // 0x173214: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x173214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_173218:
    // 0x173218: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x173218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_17321c:
    // 0x17321c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x17321cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_173220:
    // 0x173220: 0xc07d392  jal         func_1F4E48
label_173224:
    if (ctx->pc == 0x173224u) {
        ctx->pc = 0x173224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173220u;
        // 0x173224: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173228u;
        goto label_173228;
    }
    ctx->pc = 0x173220u;
    SET_GPR_U32(ctx, 31, 0x173228u);
    ctx->pc = 0x173224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173220u;
    // 0x173224: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x173220u, 0x173228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173228u;
label_173228:
    // 0x173228: 0x8e236024  lw          $v1, 0x6024($s1)
    ctx->pc = 0x173228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24612)));
label_17322c:
    // 0x17322c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x17322cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_173230:
    // 0x173230: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x173230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_173234:
    // 0x173234: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x173234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173238:
    // 0x173238: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x173238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_17323c:
    // 0x17323c: 0xc0465f0  jal         func_1197C0
label_173240:
    if (ctx->pc == 0x173240u) {
        ctx->pc = 0x173240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17323Cu;
        // 0x173240: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173244u;
        goto label_173244;
    }
    ctx->pc = 0x17323Cu;
    SET_GPR_U32(ctx, 31, 0x173244u);
    ctx->pc = 0x173240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17323Cu;
    // 0x173240: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x17323Cu, 0x173244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173244u;
label_173244:
    // 0x173244: 0x8e226020  lw          $v0, 0x6020($s1)
    ctx->pc = 0x173244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24608)));
label_173248:
    // 0x173248: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x173248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17324c:
    // 0x17324c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17324cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_173250:
    // 0x173250: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_173254:
    // 0x173254: 0x3e00008  jr          $ra
label_173258:
    if (ctx->pc == 0x173258u) {
        ctx->pc = 0x173258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173254u;
        // 0x173258: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17325Cu;
        goto label_fallthrough_0x173254;
    }
    ctx->pc = 0x173254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173254u;
        // 0x173258: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x173254:
    ctx->pc = 0x17325Cu;
}
