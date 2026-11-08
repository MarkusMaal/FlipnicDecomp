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

// Function: FUN_001b8a80
// Address: 0x1b8a80 - 0x1b9144
void FUN_001b8a80_0x1b8a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b8a80_0x1b8a80");
#endif

    switch (ctx->pc) {
        case 0x1b8a80u: goto label_1b8a80;
        case 0x1b8a84u: goto label_1b8a84;
        case 0x1b8a88u: goto label_1b8a88;
        case 0x1b8a8cu: goto label_1b8a8c;
        case 0x1b8a90u: goto label_1b8a90;
        case 0x1b8a94u: goto label_1b8a94;
        case 0x1b8a98u: goto label_1b8a98;
        case 0x1b8a9cu: goto label_1b8a9c;
        case 0x1b8aa0u: goto label_1b8aa0;
        case 0x1b8aa4u: goto label_1b8aa4;
        case 0x1b8aa8u: goto label_1b8aa8;
        case 0x1b8aacu: goto label_1b8aac;
        case 0x1b8ab0u: goto label_1b8ab0;
        case 0x1b8ab4u: goto label_1b8ab4;
        case 0x1b8ab8u: goto label_1b8ab8;
        case 0x1b8abcu: goto label_1b8abc;
        case 0x1b8ac0u: goto label_1b8ac0;
        case 0x1b8ac4u: goto label_1b8ac4;
        case 0x1b8ac8u: goto label_1b8ac8;
        case 0x1b8accu: goto label_1b8acc;
        case 0x1b8ad0u: goto label_1b8ad0;
        case 0x1b8ad4u: goto label_1b8ad4;
        case 0x1b8ad8u: goto label_1b8ad8;
        case 0x1b8adcu: goto label_1b8adc;
        case 0x1b8ae0u: goto label_1b8ae0;
        case 0x1b8ae4u: goto label_1b8ae4;
        case 0x1b8ae8u: goto label_1b8ae8;
        case 0x1b8aecu: goto label_1b8aec;
        case 0x1b8af0u: goto label_1b8af0;
        case 0x1b8af4u: goto label_1b8af4;
        case 0x1b8af8u: goto label_1b8af8;
        case 0x1b8afcu: goto label_1b8afc;
        case 0x1b8b00u: goto label_1b8b00;
        case 0x1b8b04u: goto label_1b8b04;
        case 0x1b8b08u: goto label_1b8b08;
        case 0x1b8b0cu: goto label_1b8b0c;
        case 0x1b8b10u: goto label_1b8b10;
        case 0x1b8b14u: goto label_1b8b14;
        case 0x1b8b18u: goto label_1b8b18;
        case 0x1b8b1cu: goto label_1b8b1c;
        case 0x1b8b20u: goto label_1b8b20;
        case 0x1b8b24u: goto label_1b8b24;
        case 0x1b8b28u: goto label_1b8b28;
        case 0x1b8b2cu: goto label_1b8b2c;
        case 0x1b8b30u: goto label_1b8b30;
        case 0x1b8b34u: goto label_1b8b34;
        case 0x1b8b38u: goto label_1b8b38;
        case 0x1b8b3cu: goto label_1b8b3c;
        case 0x1b8b40u: goto label_1b8b40;
        case 0x1b8b44u: goto label_1b8b44;
        case 0x1b8b48u: goto label_1b8b48;
        case 0x1b8b4cu: goto label_1b8b4c;
        case 0x1b8b50u: goto label_1b8b50;
        case 0x1b8b54u: goto label_1b8b54;
        case 0x1b8b58u: goto label_1b8b58;
        case 0x1b8b5cu: goto label_1b8b5c;
        case 0x1b8b60u: goto label_1b8b60;
        case 0x1b8b64u: goto label_1b8b64;
        case 0x1b8b68u: goto label_1b8b68;
        case 0x1b8b6cu: goto label_1b8b6c;
        case 0x1b8b70u: goto label_1b8b70;
        case 0x1b8b74u: goto label_1b8b74;
        case 0x1b8b78u: goto label_1b8b78;
        case 0x1b8b7cu: goto label_1b8b7c;
        case 0x1b8b80u: goto label_1b8b80;
        case 0x1b8b84u: goto label_1b8b84;
        case 0x1b8b88u: goto label_1b8b88;
        case 0x1b8b8cu: goto label_1b8b8c;
        case 0x1b8b90u: goto label_1b8b90;
        case 0x1b8b94u: goto label_1b8b94;
        case 0x1b8b98u: goto label_1b8b98;
        case 0x1b8b9cu: goto label_1b8b9c;
        case 0x1b8ba0u: goto label_1b8ba0;
        case 0x1b8ba4u: goto label_1b8ba4;
        case 0x1b8ba8u: goto label_1b8ba8;
        case 0x1b8bacu: goto label_1b8bac;
        case 0x1b8bb0u: goto label_1b8bb0;
        case 0x1b8bb4u: goto label_1b8bb4;
        case 0x1b8bb8u: goto label_1b8bb8;
        case 0x1b8bbcu: goto label_1b8bbc;
        case 0x1b8bc0u: goto label_1b8bc0;
        case 0x1b8bc4u: goto label_1b8bc4;
        case 0x1b8bc8u: goto label_1b8bc8;
        case 0x1b8bccu: goto label_1b8bcc;
        case 0x1b8bd0u: goto label_1b8bd0;
        case 0x1b8bd4u: goto label_1b8bd4;
        case 0x1b8bd8u: goto label_1b8bd8;
        case 0x1b8bdcu: goto label_1b8bdc;
        case 0x1b8be0u: goto label_1b8be0;
        case 0x1b8be4u: goto label_1b8be4;
        case 0x1b8be8u: goto label_1b8be8;
        case 0x1b8becu: goto label_1b8bec;
        case 0x1b8bf0u: goto label_1b8bf0;
        case 0x1b8bf4u: goto label_1b8bf4;
        case 0x1b8bf8u: goto label_1b8bf8;
        case 0x1b8bfcu: goto label_1b8bfc;
        case 0x1b8c00u: goto label_1b8c00;
        case 0x1b8c04u: goto label_1b8c04;
        case 0x1b8c08u: goto label_1b8c08;
        case 0x1b8c0cu: goto label_1b8c0c;
        case 0x1b8c10u: goto label_1b8c10;
        case 0x1b8c14u: goto label_1b8c14;
        case 0x1b8c18u: goto label_1b8c18;
        case 0x1b8c1cu: goto label_1b8c1c;
        case 0x1b8c20u: goto label_1b8c20;
        case 0x1b8c24u: goto label_1b8c24;
        case 0x1b8c28u: goto label_1b8c28;
        case 0x1b8c2cu: goto label_1b8c2c;
        case 0x1b8c30u: goto label_1b8c30;
        case 0x1b8c34u: goto label_1b8c34;
        case 0x1b8c38u: goto label_1b8c38;
        case 0x1b8c3cu: goto label_1b8c3c;
        case 0x1b8c40u: goto label_1b8c40;
        case 0x1b8c44u: goto label_1b8c44;
        case 0x1b8c48u: goto label_1b8c48;
        case 0x1b8c4cu: goto label_1b8c4c;
        case 0x1b8c50u: goto label_1b8c50;
        case 0x1b8c54u: goto label_1b8c54;
        case 0x1b8c58u: goto label_1b8c58;
        case 0x1b8c5cu: goto label_1b8c5c;
        case 0x1b8c60u: goto label_1b8c60;
        case 0x1b8c64u: goto label_1b8c64;
        case 0x1b8c68u: goto label_1b8c68;
        case 0x1b8c6cu: goto label_1b8c6c;
        case 0x1b8c70u: goto label_1b8c70;
        case 0x1b8c74u: goto label_1b8c74;
        case 0x1b8c78u: goto label_1b8c78;
        case 0x1b8c7cu: goto label_1b8c7c;
        case 0x1b8c80u: goto label_1b8c80;
        case 0x1b8c84u: goto label_1b8c84;
        case 0x1b8c88u: goto label_1b8c88;
        case 0x1b8c8cu: goto label_1b8c8c;
        case 0x1b8c90u: goto label_1b8c90;
        case 0x1b8c94u: goto label_1b8c94;
        case 0x1b8c98u: goto label_1b8c98;
        case 0x1b8c9cu: goto label_1b8c9c;
        case 0x1b8ca0u: goto label_1b8ca0;
        case 0x1b8ca4u: goto label_1b8ca4;
        case 0x1b8ca8u: goto label_1b8ca8;
        case 0x1b8cacu: goto label_1b8cac;
        case 0x1b8cb0u: goto label_1b8cb0;
        case 0x1b8cb4u: goto label_1b8cb4;
        case 0x1b8cb8u: goto label_1b8cb8;
        case 0x1b8cbcu: goto label_1b8cbc;
        case 0x1b8cc0u: goto label_1b8cc0;
        case 0x1b8cc4u: goto label_1b8cc4;
        case 0x1b8cc8u: goto label_1b8cc8;
        case 0x1b8cccu: goto label_1b8ccc;
        case 0x1b8cd0u: goto label_1b8cd0;
        case 0x1b8cd4u: goto label_1b8cd4;
        case 0x1b8cd8u: goto label_1b8cd8;
        case 0x1b8cdcu: goto label_1b8cdc;
        case 0x1b8ce0u: goto label_1b8ce0;
        case 0x1b8ce4u: goto label_1b8ce4;
        case 0x1b8ce8u: goto label_1b8ce8;
        case 0x1b8cecu: goto label_1b8cec;
        case 0x1b8cf0u: goto label_1b8cf0;
        case 0x1b8cf4u: goto label_1b8cf4;
        case 0x1b8cf8u: goto label_1b8cf8;
        case 0x1b8cfcu: goto label_1b8cfc;
        case 0x1b8d00u: goto label_1b8d00;
        case 0x1b8d04u: goto label_1b8d04;
        case 0x1b8d08u: goto label_1b8d08;
        case 0x1b8d0cu: goto label_1b8d0c;
        case 0x1b8d10u: goto label_1b8d10;
        case 0x1b8d14u: goto label_1b8d14;
        case 0x1b8d18u: goto label_1b8d18;
        case 0x1b8d1cu: goto label_1b8d1c;
        case 0x1b8d20u: goto label_1b8d20;
        case 0x1b8d24u: goto label_1b8d24;
        case 0x1b8d28u: goto label_1b8d28;
        case 0x1b8d2cu: goto label_1b8d2c;
        case 0x1b8d30u: goto label_1b8d30;
        case 0x1b8d34u: goto label_1b8d34;
        case 0x1b8d38u: goto label_1b8d38;
        case 0x1b8d3cu: goto label_1b8d3c;
        case 0x1b8d40u: goto label_1b8d40;
        case 0x1b8d44u: goto label_1b8d44;
        case 0x1b8d48u: goto label_1b8d48;
        case 0x1b8d4cu: goto label_1b8d4c;
        case 0x1b8d50u: goto label_1b8d50;
        case 0x1b8d54u: goto label_1b8d54;
        case 0x1b8d58u: goto label_1b8d58;
        case 0x1b8d5cu: goto label_1b8d5c;
        case 0x1b8d60u: goto label_1b8d60;
        case 0x1b8d64u: goto label_1b8d64;
        case 0x1b8d68u: goto label_1b8d68;
        case 0x1b8d6cu: goto label_1b8d6c;
        case 0x1b8d70u: goto label_1b8d70;
        case 0x1b8d74u: goto label_1b8d74;
        case 0x1b8d78u: goto label_1b8d78;
        case 0x1b8d7cu: goto label_1b8d7c;
        case 0x1b8d80u: goto label_1b8d80;
        case 0x1b8d84u: goto label_1b8d84;
        case 0x1b8d88u: goto label_1b8d88;
        case 0x1b8d8cu: goto label_1b8d8c;
        case 0x1b8d90u: goto label_1b8d90;
        case 0x1b8d94u: goto label_1b8d94;
        case 0x1b8d98u: goto label_1b8d98;
        case 0x1b8d9cu: goto label_1b8d9c;
        case 0x1b8da0u: goto label_1b8da0;
        case 0x1b8da4u: goto label_1b8da4;
        case 0x1b8da8u: goto label_1b8da8;
        case 0x1b8dacu: goto label_1b8dac;
        case 0x1b8db0u: goto label_1b8db0;
        case 0x1b8db4u: goto label_1b8db4;
        case 0x1b8db8u: goto label_1b8db8;
        case 0x1b8dbcu: goto label_1b8dbc;
        case 0x1b8dc0u: goto label_1b8dc0;
        case 0x1b8dc4u: goto label_1b8dc4;
        case 0x1b8dc8u: goto label_1b8dc8;
        case 0x1b8dccu: goto label_1b8dcc;
        case 0x1b8dd0u: goto label_1b8dd0;
        case 0x1b8dd4u: goto label_1b8dd4;
        case 0x1b8dd8u: goto label_1b8dd8;
        case 0x1b8ddcu: goto label_1b8ddc;
        case 0x1b8de0u: goto label_1b8de0;
        case 0x1b8de4u: goto label_1b8de4;
        case 0x1b8de8u: goto label_1b8de8;
        case 0x1b8decu: goto label_1b8dec;
        case 0x1b8df0u: goto label_1b8df0;
        case 0x1b8df4u: goto label_1b8df4;
        case 0x1b8df8u: goto label_1b8df8;
        case 0x1b8dfcu: goto label_1b8dfc;
        case 0x1b8e00u: goto label_1b8e00;
        case 0x1b8e04u: goto label_1b8e04;
        case 0x1b8e08u: goto label_1b8e08;
        case 0x1b8e0cu: goto label_1b8e0c;
        case 0x1b8e10u: goto label_1b8e10;
        case 0x1b8e14u: goto label_1b8e14;
        case 0x1b8e18u: goto label_1b8e18;
        case 0x1b8e1cu: goto label_1b8e1c;
        case 0x1b8e20u: goto label_1b8e20;
        case 0x1b8e24u: goto label_1b8e24;
        case 0x1b8e28u: goto label_1b8e28;
        case 0x1b8e2cu: goto label_1b8e2c;
        case 0x1b8e30u: goto label_1b8e30;
        case 0x1b8e34u: goto label_1b8e34;
        case 0x1b8e38u: goto label_1b8e38;
        case 0x1b8e3cu: goto label_1b8e3c;
        case 0x1b8e40u: goto label_1b8e40;
        case 0x1b8e44u: goto label_1b8e44;
        case 0x1b8e48u: goto label_1b8e48;
        case 0x1b8e4cu: goto label_1b8e4c;
        case 0x1b8e50u: goto label_1b8e50;
        case 0x1b8e54u: goto label_1b8e54;
        case 0x1b8e58u: goto label_1b8e58;
        case 0x1b8e5cu: goto label_1b8e5c;
        case 0x1b8e60u: goto label_1b8e60;
        case 0x1b8e64u: goto label_1b8e64;
        case 0x1b8e68u: goto label_1b8e68;
        case 0x1b8e6cu: goto label_1b8e6c;
        case 0x1b8e70u: goto label_1b8e70;
        case 0x1b8e74u: goto label_1b8e74;
        case 0x1b8e78u: goto label_1b8e78;
        case 0x1b8e7cu: goto label_1b8e7c;
        case 0x1b8e80u: goto label_1b8e80;
        case 0x1b8e84u: goto label_1b8e84;
        case 0x1b8e88u: goto label_1b8e88;
        case 0x1b8e8cu: goto label_1b8e8c;
        case 0x1b8e90u: goto label_1b8e90;
        case 0x1b8e94u: goto label_1b8e94;
        case 0x1b8e98u: goto label_1b8e98;
        case 0x1b8e9cu: goto label_1b8e9c;
        case 0x1b8ea0u: goto label_1b8ea0;
        case 0x1b8ea4u: goto label_1b8ea4;
        case 0x1b8ea8u: goto label_1b8ea8;
        case 0x1b8eacu: goto label_1b8eac;
        case 0x1b8eb0u: goto label_1b8eb0;
        case 0x1b8eb4u: goto label_1b8eb4;
        case 0x1b8eb8u: goto label_1b8eb8;
        case 0x1b8ebcu: goto label_1b8ebc;
        case 0x1b8ec0u: goto label_1b8ec0;
        case 0x1b8ec4u: goto label_1b8ec4;
        case 0x1b8ec8u: goto label_1b8ec8;
        case 0x1b8eccu: goto label_1b8ecc;
        case 0x1b8ed0u: goto label_1b8ed0;
        case 0x1b8ed4u: goto label_1b8ed4;
        case 0x1b8ed8u: goto label_1b8ed8;
        case 0x1b8edcu: goto label_1b8edc;
        case 0x1b8ee0u: goto label_1b8ee0;
        case 0x1b8ee4u: goto label_1b8ee4;
        case 0x1b8ee8u: goto label_1b8ee8;
        case 0x1b8eecu: goto label_1b8eec;
        case 0x1b8ef0u: goto label_1b8ef0;
        case 0x1b8ef4u: goto label_1b8ef4;
        case 0x1b8ef8u: goto label_1b8ef8;
        case 0x1b8efcu: goto label_1b8efc;
        case 0x1b8f00u: goto label_1b8f00;
        case 0x1b8f04u: goto label_1b8f04;
        case 0x1b8f08u: goto label_1b8f08;
        case 0x1b8f0cu: goto label_1b8f0c;
        case 0x1b8f10u: goto label_1b8f10;
        case 0x1b8f14u: goto label_1b8f14;
        case 0x1b8f18u: goto label_1b8f18;
        case 0x1b8f1cu: goto label_1b8f1c;
        case 0x1b8f20u: goto label_1b8f20;
        case 0x1b8f24u: goto label_1b8f24;
        case 0x1b8f28u: goto label_1b8f28;
        case 0x1b8f2cu: goto label_1b8f2c;
        case 0x1b8f30u: goto label_1b8f30;
        case 0x1b8f34u: goto label_1b8f34;
        case 0x1b8f38u: goto label_1b8f38;
        case 0x1b8f3cu: goto label_1b8f3c;
        case 0x1b8f40u: goto label_1b8f40;
        case 0x1b8f44u: goto label_1b8f44;
        case 0x1b8f48u: goto label_1b8f48;
        case 0x1b8f4cu: goto label_1b8f4c;
        case 0x1b8f50u: goto label_1b8f50;
        case 0x1b8f54u: goto label_1b8f54;
        case 0x1b8f58u: goto label_1b8f58;
        case 0x1b8f5cu: goto label_1b8f5c;
        case 0x1b8f60u: goto label_1b8f60;
        case 0x1b8f64u: goto label_1b8f64;
        case 0x1b8f68u: goto label_1b8f68;
        case 0x1b8f6cu: goto label_1b8f6c;
        case 0x1b8f70u: goto label_1b8f70;
        case 0x1b8f74u: goto label_1b8f74;
        case 0x1b8f78u: goto label_1b8f78;
        case 0x1b8f7cu: goto label_1b8f7c;
        case 0x1b8f80u: goto label_1b8f80;
        case 0x1b8f84u: goto label_1b8f84;
        case 0x1b8f88u: goto label_1b8f88;
        case 0x1b8f8cu: goto label_1b8f8c;
        case 0x1b8f90u: goto label_1b8f90;
        case 0x1b8f94u: goto label_1b8f94;
        case 0x1b8f98u: goto label_1b8f98;
        case 0x1b8f9cu: goto label_1b8f9c;
        case 0x1b8fa0u: goto label_1b8fa0;
        case 0x1b8fa4u: goto label_1b8fa4;
        case 0x1b8fa8u: goto label_1b8fa8;
        case 0x1b8facu: goto label_1b8fac;
        case 0x1b8fb0u: goto label_1b8fb0;
        case 0x1b8fb4u: goto label_1b8fb4;
        case 0x1b8fb8u: goto label_1b8fb8;
        case 0x1b8fbcu: goto label_1b8fbc;
        case 0x1b8fc0u: goto label_1b8fc0;
        case 0x1b8fc4u: goto label_1b8fc4;
        case 0x1b8fc8u: goto label_1b8fc8;
        case 0x1b8fccu: goto label_1b8fcc;
        case 0x1b8fd0u: goto label_1b8fd0;
        case 0x1b8fd4u: goto label_1b8fd4;
        case 0x1b8fd8u: goto label_1b8fd8;
        case 0x1b8fdcu: goto label_1b8fdc;
        case 0x1b8fe0u: goto label_1b8fe0;
        case 0x1b8fe4u: goto label_1b8fe4;
        case 0x1b8fe8u: goto label_1b8fe8;
        case 0x1b8fecu: goto label_1b8fec;
        case 0x1b8ff0u: goto label_1b8ff0;
        case 0x1b8ff4u: goto label_1b8ff4;
        case 0x1b8ff8u: goto label_1b8ff8;
        case 0x1b8ffcu: goto label_1b8ffc;
        case 0x1b9000u: goto label_1b9000;
        case 0x1b9004u: goto label_1b9004;
        case 0x1b9008u: goto label_1b9008;
        case 0x1b900cu: goto label_1b900c;
        case 0x1b9010u: goto label_1b9010;
        case 0x1b9014u: goto label_1b9014;
        case 0x1b9018u: goto label_1b9018;
        case 0x1b901cu: goto label_1b901c;
        case 0x1b9020u: goto label_1b9020;
        case 0x1b9024u: goto label_1b9024;
        case 0x1b9028u: goto label_1b9028;
        case 0x1b902cu: goto label_1b902c;
        case 0x1b9030u: goto label_1b9030;
        case 0x1b9034u: goto label_1b9034;
        case 0x1b9038u: goto label_1b9038;
        case 0x1b903cu: goto label_1b903c;
        case 0x1b9040u: goto label_1b9040;
        case 0x1b9044u: goto label_1b9044;
        case 0x1b9048u: goto label_1b9048;
        case 0x1b904cu: goto label_1b904c;
        case 0x1b9050u: goto label_1b9050;
        case 0x1b9054u: goto label_1b9054;
        case 0x1b9058u: goto label_1b9058;
        case 0x1b905cu: goto label_1b905c;
        case 0x1b9060u: goto label_1b9060;
        case 0x1b9064u: goto label_1b9064;
        case 0x1b9068u: goto label_1b9068;
        case 0x1b906cu: goto label_1b906c;
        case 0x1b9070u: goto label_1b9070;
        case 0x1b9074u: goto label_1b9074;
        case 0x1b9078u: goto label_1b9078;
        case 0x1b907cu: goto label_1b907c;
        case 0x1b9080u: goto label_1b9080;
        case 0x1b9084u: goto label_1b9084;
        case 0x1b9088u: goto label_1b9088;
        case 0x1b908cu: goto label_1b908c;
        case 0x1b9090u: goto label_1b9090;
        case 0x1b9094u: goto label_1b9094;
        case 0x1b9098u: goto label_1b9098;
        case 0x1b909cu: goto label_1b909c;
        case 0x1b90a0u: goto label_1b90a0;
        case 0x1b90a4u: goto label_1b90a4;
        case 0x1b90a8u: goto label_1b90a8;
        case 0x1b90acu: goto label_1b90ac;
        case 0x1b90b0u: goto label_1b90b0;
        case 0x1b90b4u: goto label_1b90b4;
        case 0x1b90b8u: goto label_1b90b8;
        case 0x1b90bcu: goto label_1b90bc;
        case 0x1b90c0u: goto label_1b90c0;
        case 0x1b90c4u: goto label_1b90c4;
        case 0x1b90c8u: goto label_1b90c8;
        case 0x1b90ccu: goto label_1b90cc;
        case 0x1b90d0u: goto label_1b90d0;
        case 0x1b90d4u: goto label_1b90d4;
        case 0x1b90d8u: goto label_1b90d8;
        case 0x1b90dcu: goto label_1b90dc;
        case 0x1b90e0u: goto label_1b90e0;
        case 0x1b90e4u: goto label_1b90e4;
        case 0x1b90e8u: goto label_1b90e8;
        case 0x1b90ecu: goto label_1b90ec;
        case 0x1b90f0u: goto label_1b90f0;
        case 0x1b90f4u: goto label_1b90f4;
        case 0x1b90f8u: goto label_1b90f8;
        case 0x1b90fcu: goto label_1b90fc;
        case 0x1b9100u: goto label_1b9100;
        case 0x1b9104u: goto label_1b9104;
        case 0x1b9108u: goto label_1b9108;
        case 0x1b910cu: goto label_1b910c;
        case 0x1b9110u: goto label_1b9110;
        case 0x1b9114u: goto label_1b9114;
        case 0x1b9118u: goto label_1b9118;
        case 0x1b911cu: goto label_1b911c;
        case 0x1b9120u: goto label_1b9120;
        case 0x1b9124u: goto label_1b9124;
        case 0x1b9128u: goto label_1b9128;
        case 0x1b912cu: goto label_1b912c;
        case 0x1b9130u: goto label_1b9130;
        case 0x1b9134u: goto label_1b9134;
        case 0x1b9138u: goto label_1b9138;
        case 0x1b913cu: goto label_1b913c;
        case 0x1b9140u: goto label_1b9140;
        default: break;
    }

    ctx->pc = 0x1b8a80u;

label_1b8a80:
    // 0x1b8a80: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1b8a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1b8a84:
    // 0x1b8a84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b8a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1b8a88:
    // 0x1b8a88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b8a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1b8a8c:
    // 0x1b8a8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b8a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b8a90:
    // 0x1b8a90: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b8a90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b8a94:
    // 0x1b8a94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b8a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b8a98:
    // 0x1b8a98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b8a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b8a9c:
    // 0x1b8a9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b8a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b8aa0:
    // 0x1b8aa0: 0x908300a0  lbu         $v1, 0xA0($a0)
    ctx->pc = 0x1b8aa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 160)));
label_1b8aa4:
    // 0x1b8aa4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1b8aa8:
    if (ctx->pc == 0x1B8AA8u) {
        ctx->pc = 0x1B8AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AA4u;
        // 0x1b8aa8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8AACu;
        goto label_1b8aac;
    }
    ctx->pc = 0x1B8AA4u;
    {
        const bool branch_taken_0x1b8aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AA4u;
        // 0x1b8aa8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8aa4) {
            ctx->pc = 0x1B8ABCu;
            goto label_1b8abc;
        }
    }
    ctx->pc = 0x1B8AACu;
label_1b8aac:
    // 0x1b8aac: 0xc06e768  jal         func_1B9DA0
label_1b8ab0:
    if (ctx->pc == 0x1B8AB0u) {
        ctx->pc = 0x1B8AB4u;
        goto label_1b8ab4;
    }
    ctx->pc = 0x1B8AACu;
    SET_GPR_U32(ctx, 31, 0x1B8AB4u);
    ctx->pc = 0x1B9DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9DA0u, 0x1B8AACu, 0x1B8AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8AB4u;
label_1b8ab4:
    // 0x1b8ab4: 0x1000019c  b           . + 4 + (0x19C << 2)
label_1b8ab8:
    if (ctx->pc == 0x1B8AB8u) {
        ctx->pc = 0x1B8AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AB4u;
        // 0x1b8ab8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8ABCu;
        goto label_1b8abc;
    }
    ctx->pc = 0x1B8AB4u;
    {
        const bool branch_taken_0x1b8ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AB4u;
        // 0x1b8ab8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ab4) {
            ctx->pc = 0x1B9128u;
            goto label_1b9128;
        }
    }
    ctx->pc = 0x1B8ABCu;
label_1b8abc:
    // 0x1b8abc: 0x928300c0  lbu         $v1, 0xC0($s4)
    ctx->pc = 0x1b8abcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 192)));
label_1b8ac0:
    // 0x1b8ac0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1b8ac4:
    if (ctx->pc == 0x1B8AC4u) {
        ctx->pc = 0x1B8AC8u;
        goto label_1b8ac8;
    }
    ctx->pc = 0x1B8AC0u;
    {
        const bool branch_taken_0x1b8ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8ac0) {
            ctx->pc = 0x1B8AD0u;
            goto label_1b8ad0;
        }
    }
    ctx->pc = 0x1B8AC8u;
label_1b8ac8:
    // 0x1b8ac8: 0xc06e484  jal         func_1B9210
label_1b8acc:
    if (ctx->pc == 0x1B8ACCu) {
        ctx->pc = 0x1B8AD0u;
        goto label_1b8ad0;
    }
    ctx->pc = 0x1B8AC8u;
    SET_GPR_U32(ctx, 31, 0x1B8AD0u);
    ctx->pc = 0x1B9210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9210u, 0x1B8AC8u, 0x1B8AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8AD0u;
label_1b8ad0:
    // 0x1b8ad0: 0x8e8300e4  lw          $v1, 0xE4($s4)
    ctx->pc = 0x1b8ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
label_1b8ad4:
    // 0x1b8ad4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1b8ad8:
    if (ctx->pc == 0x1B8AD8u) {
        ctx->pc = 0x1B8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AD4u;
        // 0x1b8ad8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8ADCu;
        goto label_1b8adc;
    }
    ctx->pc = 0x1B8AD4u;
    {
        const bool branch_taken_0x1b8ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AD4u;
        // 0x1b8ad8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ad4) {
            ctx->pc = 0x1B8AE4u;
            goto label_1b8ae4;
        }
    }
    ctx->pc = 0x1B8ADCu;
label_1b8adc:
    // 0x1b8adc: 0xc06e9d8  jal         func_1BA760
label_1b8ae0:
    if (ctx->pc == 0x1B8AE0u) {
        ctx->pc = 0x1B8AE4u;
        goto label_1b8ae4;
    }
    ctx->pc = 0x1B8ADCu;
    SET_GPR_U32(ctx, 31, 0x1B8AE4u);
    ctx->pc = 0x1BA760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA760u, 0x1B8ADCu, 0x1B8AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8AE4u;
label_1b8ae4:
    // 0x1b8ae4: 0x8e8300f4  lw          $v1, 0xF4($s4)
    ctx->pc = 0x1b8ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
label_1b8ae8:
    // 0x1b8ae8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1b8aec:
    if (ctx->pc == 0x1B8AECu) {
        ctx->pc = 0x1B8AF0u;
        goto label_1b8af0;
    }
    ctx->pc = 0x1B8AE8u;
    {
        const bool branch_taken_0x1b8ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8ae8) {
            ctx->pc = 0x1B8AF8u;
            goto label_1b8af8;
        }
    }
    ctx->pc = 0x1B8AF0u;
label_1b8af0:
    // 0x1b8af0: 0xc06eb10  jal         func_1BAC40
label_1b8af4:
    if (ctx->pc == 0x1B8AF4u) {
        ctx->pc = 0x1B8AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AF0u;
        // 0x1b8af4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8AF8u;
        goto label_1b8af8;
    }
    ctx->pc = 0x1B8AF0u;
    SET_GPR_U32(ctx, 31, 0x1B8AF8u);
    ctx->pc = 0x1B8AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8AF0u;
    // 0x1b8af4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAC40u, 0x1B8AF0u, 0x1B8AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8AF8u;
label_1b8af8:
    // 0x1b8af8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8afc:
    // 0x1b8afc: 0x8023f400  lb          $v1, -0xC00($at)
    ctx->pc = 0x1b8afcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964224)));
label_1b8b00:
    // 0x1b8b00: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_1b8b04:
    if (ctx->pc == 0x1B8B04u) {
        ctx->pc = 0x1B8B08u;
        goto label_1b8b08;
    }
    ctx->pc = 0x1B8B00u;
    {
        const bool branch_taken_0x1b8b00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8b00) {
            ctx->pc = 0x1B8B5Cu;
            goto label_1b8b5c;
        }
    }
    ctx->pc = 0x1B8B08u;
label_1b8b08:
    // 0x1b8b08: 0x3c02602f  lui         $v0, 0x602F
    ctx->pc = 0x1b8b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24623 << 16));
label_1b8b0c:
    // 0x1b8b0c: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x1b8b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
label_1b8b10:
    // 0x1b8b10: 0x34444000  ori         $a0, $v0, 0x4000
    ctx->pc = 0x1b8b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1b8b14:
    // 0x1b8b14: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1b8b14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1b8b18:
    // 0x1b8b18: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x1b8b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
label_1b8b1c:
    // 0x1b8b1c: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1b8b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_1b8b20:
    // 0x1b8b20: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1b8b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1b8b24:
    // 0x1b8b24: 0x3442521e  ori         $v0, $v0, 0x521E
    ctx->pc = 0x1b8b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21022);
label_1b8b28:
    // 0x1b8b28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8b2c:
    // 0x1b8b2c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b8b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b8b30:
    // 0x1b8b30: 0xfc22f418  sd          $v0, -0xBE8($at)
    ctx->pc = 0x1b8b30u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294964248), GPR_U64(ctx, 2));
label_1b8b34:
    // 0x1b8b34: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b8b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1b8b38:
    // 0x1b8b38: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8b3c:
    // 0x1b8b3c: 0x2484f410  addiu       $a0, $a0, -0xBF0
    ctx->pc = 0x1b8b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964240));
label_1b8b40:
    // 0x1b8b40: 0xfc23f410  sd          $v1, -0xBF0($at)
    ctx->pc = 0x1b8b40u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294964240), GPR_U64(ctx, 3));
label_1b8b44:
    // 0x1b8b44: 0x24a54bb0  addiu       $a1, $a1, 0x4BB0
    ctx->pc = 0x1b8b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19376));
label_1b8b48:
    // 0x1b8b48: 0xc07a540  jal         func_1E9500
label_1b8b4c:
    if (ctx->pc == 0x1B8B4Cu) {
        ctx->pc = 0x1B8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B48u;
        // 0x1b8b4c: 0x24c6f3f0  addiu       $a2, $a2, -0xC10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8B50u;
        goto label_1b8b50;
    }
    ctx->pc = 0x1B8B48u;
    SET_GPR_U32(ctx, 31, 0x1B8B50u);
    ctx->pc = 0x1B8B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8B48u;
    // 0x1b8b4c: 0x24c6f3f0  addiu       $a2, $a2, -0xC10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1B8B48u, 0x1B8B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8B50u;
label_1b8b50:
    // 0x1b8b50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b8b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8b54:
    // 0x1b8b54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8b58:
    // 0x1b8b58: 0xa023f400  sb          $v1, -0xC00($at)
    ctx->pc = 0x1b8b58u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964224), (uint8_t)GPR_U32(ctx, 3));
label_1b8b5c:
    // 0x1b8b5c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8b60:
    // 0x1b8b60: 0x8023f420  lb          $v1, -0xBE0($at)
    ctx->pc = 0x1b8b60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964256)));
label_1b8b64:
    // 0x1b8b64: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1b8b68:
    if (ctx->pc == 0x1B8B68u) {
        ctx->pc = 0x1B8B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B64u;
        // 0x1b8b68: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8B6Cu;
        goto label_1b8b6c;
    }
    ctx->pc = 0x1B8B64u;
    {
        const bool branch_taken_0x1b8b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B64u;
        // 0x1b8b68: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b64) {
            ctx->pc = 0x1B8B80u;
            goto label_1b8b80;
        }
    }
    ctx->pc = 0x1B8B6Cu;
label_1b8b6c:
    // 0x1b8b6c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8b70:
    // 0x1b8b70: 0xfc24f438  sd          $a0, -0xBC8($at)
    ctx->pc = 0x1b8b70u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294964280), GPR_U64(ctx, 4));
label_1b8b74:
    // 0x1b8b74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b8b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8b78:
    // 0x1b8b78: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8b7c:
    // 0x1b8b7c: 0xa023f420  sb          $v1, -0xBE0($at)
    ctx->pc = 0x1b8b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964256), (uint8_t)GPR_U32(ctx, 3));
label_1b8b80:
    // 0x1b8b80: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x1b8b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1b8b84:
    // 0x1b8b84: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b8b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b8b88:
    // 0x1b8b88: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x1b8b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_1b8b8c:
    // 0x1b8b8c: 0x10a3006f  beq         $a1, $v1, . + 4 + (0x6F << 2)
label_1b8b90:
    if (ctx->pc == 0x1B8B90u) {
        ctx->pc = 0x1B8B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B8Cu;
        // 0x1b8b90: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8B94u;
        goto label_1b8b94;
    }
    ctx->pc = 0x1B8B8Cu;
    {
        const bool branch_taken_0x1b8b8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B8B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B8Cu;
        // 0x1b8b90: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b8c) {
            ctx->pc = 0x1B8D4Cu;
            goto label_1b8d4c;
        }
    }
    ctx->pc = 0x1B8B94u;
label_1b8b94:
    // 0x1b8b94: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b8b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b8b98:
    // 0x1b8b98: 0x10a4004b  beq         $a1, $a0, . + 4 + (0x4B << 2)
label_1b8b9c:
    if (ctx->pc == 0x1B8B9Cu) {
        ctx->pc = 0x1B8B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B98u;
        // 0x1b8b9c: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8BA0u;
        goto label_1b8ba0;
    }
    ctx->pc = 0x1B8B98u;
    {
        const bool branch_taken_0x1b8b98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B8B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B98u;
        // 0x1b8b9c: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b98) {
            ctx->pc = 0x1B8CC8u;
            goto label_1b8cc8;
        }
    }
    ctx->pc = 0x1B8BA0u;
label_1b8ba0:
    // 0x1b8ba0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b8ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8ba4:
    // 0x1b8ba4: 0x10a30026  beq         $a1, $v1, . + 4 + (0x26 << 2)
label_1b8ba8:
    if (ctx->pc == 0x1B8BA8u) {
        ctx->pc = 0x1B8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8BA4u;
        // 0x1b8ba8: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8BACu;
        goto label_1b8bac;
    }
    ctx->pc = 0x1B8BA4u;
    {
        const bool branch_taken_0x1b8ba4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8BA4u;
        // 0x1b8ba8: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ba4) {
            ctx->pc = 0x1B8C40u;
            goto label_1b8c40;
        }
    }
    ctx->pc = 0x1B8BACu;
label_1b8bac:
    // 0x1b8bac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1b8bb0:
    if (ctx->pc == 0x1B8BB0u) {
        ctx->pc = 0x1B8BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8BACu;
        // 0x1b8bb0: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8BB4u;
        goto label_1b8bb4;
    }
    ctx->pc = 0x1B8BACu;
    {
        const bool branch_taken_0x1b8bac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8BACu;
        // 0x1b8bb0: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8bac) {
            ctx->pc = 0x1B8BBCu;
            goto label_1b8bbc;
        }
    }
    ctx->pc = 0x1B8BB4u;
label_1b8bb4:
    // 0x1b8bb4: 0x10000085  b           . + 4 + (0x85 << 2)
label_1b8bb8:
    if (ctx->pc == 0x1B8BB8u) {
        ctx->pc = 0x1B8BBCu;
        goto label_1b8bbc;
    }
    ctx->pc = 0x1B8BB4u;
    {
        const bool branch_taken_0x1b8bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8bb4) {
            ctx->pc = 0x1B8DCCu;
            goto label_1b8dcc;
        }
    }
    ctx->pc = 0x1B8BBCu;
label_1b8bbc:
    // 0x1b8bbc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1b8bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1b8bc0:
    // 0x1b8bc0: 0x902bf430  lbu         $t3, -0xBD0($at)
    ctx->pc = 0x1b8bc0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964272)));
label_1b8bc4:
    // 0x1b8bc4: 0x2409fffc  addiu       $t1, $zero, -0x4
    ctx->pc = 0x1b8bc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1b8bc8:
    // 0x1b8bc8: 0x300a0003  andi        $t2, $zero, 0x3
    ctx->pc = 0x1b8bc8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
label_1b8bcc:
    // 0x1b8bcc: 0x2407fff3  addiu       $a3, $zero, -0xD
    ctx->pc = 0x1b8bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_1b8bd0:
    // 0x1b8bd0: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x1b8bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1b8bd4:
    // 0x1b8bd4: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1b8bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1b8bd8:
    // 0x1b8bd8: 0x2405ffcf  addiu       $a1, $zero, -0x31
    ctx->pc = 0x1b8bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
label_1b8bdc:
    // 0x1b8bdc: 0xa3100  sll         $a2, $t2, 4
    ctx->pc = 0x1b8bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_1b8be0:
    // 0x1b8be0: 0x2403ff3f  addiu       $v1, $zero, -0xC1
    ctx->pc = 0x1b8be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_1b8be4:
    // 0x1b8be4: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x1b8be4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
label_1b8be8:
    // 0x1b8be8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8bec:
    // 0x1b8bec: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1b8becu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
label_1b8bf0:
    // 0x1b8bf0: 0xa029f430  sb          $t1, -0xBD0($at)
    ctx->pc = 0x1b8bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964272), (uint8_t)GPR_U32(ctx, 9));
label_1b8bf4:
    // 0x1b8bf4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8bf8:
    // 0x1b8bf8: 0x9029f430  lbu         $t1, -0xBD0($at)
    ctx->pc = 0x1b8bf8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964272)));
label_1b8bfc:
    // 0x1b8bfc: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x1b8bfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
label_1b8c00:
    // 0x1b8c00: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8c04:
    // 0x1b8c04: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1b8c04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_1b8c08:
    // 0x1b8c08: 0xa027f430  sb          $a3, -0xBD0($at)
    ctx->pc = 0x1b8c08u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964272), (uint8_t)GPR_U32(ctx, 7));
label_1b8c0c:
    // 0x1b8c0c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8c10:
    // 0x1b8c10: 0x9027f430  lbu         $a3, -0xBD0($at)
    ctx->pc = 0x1b8c10u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964272)));
label_1b8c14:
    // 0x1b8c14: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1b8c14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
label_1b8c18:
    // 0x1b8c18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8c1c:
    // 0x1b8c1c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1b8c1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_1b8c20:
    // 0x1b8c20: 0xa025f430  sb          $a1, -0xBD0($at)
    ctx->pc = 0x1b8c20u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964272), (uint8_t)GPR_U32(ctx, 5));
label_1b8c24:
    // 0x1b8c24: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8c28:
    // 0x1b8c28: 0x9025f430  lbu         $a1, -0xBD0($at)
    ctx->pc = 0x1b8c28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964272)));
label_1b8c2c:
    // 0x1b8c2c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1b8c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1b8c30:
    // 0x1b8c30: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8c34:
    // 0x1b8c34: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b8c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b8c38:
    // 0x1b8c38: 0x10000064  b           . + 4 + (0x64 << 2)
label_1b8c3c:
    if (ctx->pc == 0x1B8C3Cu) {
        ctx->pc = 0x1B8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C38u;
        // 0x1b8c3c: 0xa023f430  sb          $v1, -0xBD0($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294964272), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8C40u;
        goto label_1b8c40;
    }
    ctx->pc = 0x1B8C38u;
    {
        const bool branch_taken_0x1b8c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C38u;
        // 0x1b8c3c: 0xa023f430  sb          $v1, -0xBD0($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294964272), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c38) {
            ctx->pc = 0x1B8DCCu;
            goto label_1b8dcc;
        }
    }
    ctx->pc = 0x1B8C40u;
label_1b8c40:
    // 0x1b8c40: 0x300a0003  andi        $t2, $zero, 0x3
    ctx->pc = 0x1b8c40u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
label_1b8c44:
    // 0x1b8c44: 0x902bf430  lbu         $t3, -0xBD0($at)
    ctx->pc = 0x1b8c44u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964272)));
label_1b8c48:
    // 0x1b8c48: 0x2409fffc  addiu       $t1, $zero, -0x4
    ctx->pc = 0x1b8c48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1b8c4c:
    // 0x1b8c4c: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x1b8c4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_1b8c50:
    // 0x1b8c50: 0x2407fff3  addiu       $a3, $zero, -0xD
    ctx->pc = 0x1b8c50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_1b8c54:
    // 0x1b8c54: 0x44080  sll         $t0, $a0, 2
    ctx->pc = 0x1b8c54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1b8c58:
    // 0x1b8c58: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1b8c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1b8c5c:
    // 0x1b8c5c: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1b8c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1b8c60:
    // 0x1b8c60: 0x2405ffcf  addiu       $a1, $zero, -0x31
    ctx->pc = 0x1b8c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
label_1b8c64:
    // 0x1b8c64: 0xa3100  sll         $a2, $t2, 4
    ctx->pc = 0x1b8c64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_1b8c68:
    // 0x1b8c68: 0x2403ff3f  addiu       $v1, $zero, -0xC1
    ctx->pc = 0x1b8c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_1b8c6c:
    // 0x1b8c6c: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x1b8c6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
label_1b8c70:
    // 0x1b8c70: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8c74:
    // 0x1b8c74: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1b8c74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
label_1b8c78:
    // 0x1b8c78: 0xa029f430  sb          $t1, -0xBD0($at)
    ctx->pc = 0x1b8c78u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964272), (uint8_t)GPR_U32(ctx, 9));
label_1b8c7c:
    // 0x1b8c7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8c80:
    // 0x1b8c80: 0x9029f430  lbu         $t1, -0xBD0($at)
    ctx->pc = 0x1b8c80u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964272)));
label_1b8c84:
    // 0x1b8c84: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x1b8c84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
label_1b8c88:
    // 0x1b8c88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8c8c:
    // 0x1b8c8c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1b8c8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_1b8c90:
    // 0x1b8c90: 0xa027f430  sb          $a3, -0xBD0($at)
    ctx->pc = 0x1b8c90u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964272), (uint8_t)GPR_U32(ctx, 7));
label_1b8c94:
    // 0x1b8c94: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8c98:
    // 0x1b8c98: 0x9027f430  lbu         $a3, -0xBD0($at)
    ctx->pc = 0x1b8c98u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964272)));
label_1b8c9c:
    // 0x1b8c9c: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1b8c9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
label_1b8ca0:
    // 0x1b8ca0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8ca4:
    // 0x1b8ca4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1b8ca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_1b8ca8:
    // 0x1b8ca8: 0xa025f430  sb          $a1, -0xBD0($at)
    ctx->pc = 0x1b8ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964272), (uint8_t)GPR_U32(ctx, 5));
label_1b8cac:
    // 0x1b8cac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8cb0:
    // 0x1b8cb0: 0x9025f430  lbu         $a1, -0xBD0($at)
    ctx->pc = 0x1b8cb0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964272)));
label_1b8cb4:
    // 0x1b8cb4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1b8cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1b8cb8:
    // 0x1b8cb8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8cbc:
    // 0x1b8cbc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b8cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b8cc0:
    // 0x1b8cc0: 0x10000042  b           . + 4 + (0x42 << 2)
label_1b8cc4:
    if (ctx->pc == 0x1B8CC4u) {
        ctx->pc = 0x1B8CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8CC0u;
        // 0x1b8cc4: 0xa023f430  sb          $v1, -0xBD0($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294964272), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8CC8u;
        goto label_1b8cc8;
    }
    ctx->pc = 0x1B8CC0u;
    {
        const bool branch_taken_0x1b8cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8CC0u;
        // 0x1b8cc4: 0xa023f430  sb          $v1, -0xBD0($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294964272), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8cc0) {
            ctx->pc = 0x1B8DCCu;
            goto label_1b8dcc;
        }
    }
    ctx->pc = 0x1B8CC8u;
label_1b8cc8:
    // 0x1b8cc8: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x1b8cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
label_1b8ccc:
    // 0x1b8ccc: 0x902bf430  lbu         $t3, -0xBD0($at)
    ctx->pc = 0x1b8cccu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964272)));
label_1b8cd0:
    // 0x1b8cd0: 0x2409fffc  addiu       $t1, $zero, -0x4
    ctx->pc = 0x1b8cd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1b8cd4:
    // 0x1b8cd4: 0x308a0003  andi        $t2, $a0, 0x3
    ctx->pc = 0x1b8cd4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_1b8cd8:
    // 0x1b8cd8: 0x2407fff3  addiu       $a3, $zero, -0xD
    ctx->pc = 0x1b8cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_1b8cdc:
    // 0x1b8cdc: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x1b8cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1b8ce0:
    // 0x1b8ce0: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x1b8ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1b8ce4:
    // 0x1b8ce4: 0x2405ffcf  addiu       $a1, $zero, -0x31
    ctx->pc = 0x1b8ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
label_1b8ce8:
    // 0x1b8ce8: 0x2403ff3f  addiu       $v1, $zero, -0xC1
    ctx->pc = 0x1b8ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_1b8cec:
    // 0x1b8cec: 0x64040040  daddiu      $a0, $zero, 0x40
    ctx->pc = 0x1b8cecu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
label_1b8cf0:
    // 0x1b8cf0: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x1b8cf0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
label_1b8cf4:
    // 0x1b8cf4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8cf8:
    // 0x1b8cf8: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1b8cf8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
label_1b8cfc:
    // 0x1b8cfc: 0xa029f430  sb          $t1, -0xBD0($at)
    ctx->pc = 0x1b8cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964272), (uint8_t)GPR_U32(ctx, 9));
label_1b8d00:
    // 0x1b8d00: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8d04:
    // 0x1b8d04: 0x9029f430  lbu         $t1, -0xBD0($at)
    ctx->pc = 0x1b8d04u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964272)));
label_1b8d08:
    // 0x1b8d08: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x1b8d08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
label_1b8d0c:
    // 0x1b8d0c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8d10:
    // 0x1b8d10: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1b8d10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_1b8d14:
    // 0x1b8d14: 0xa027f430  sb          $a3, -0xBD0($at)
    ctx->pc = 0x1b8d14u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964272), (uint8_t)GPR_U32(ctx, 7));
label_1b8d18:
    // 0x1b8d18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8d1c:
    // 0x1b8d1c: 0x9027f430  lbu         $a3, -0xBD0($at)
    ctx->pc = 0x1b8d1cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964272)));
label_1b8d20:
    // 0x1b8d20: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1b8d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
label_1b8d24:
    // 0x1b8d24: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8d28:
    // 0x1b8d28: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1b8d28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_1b8d2c:
    // 0x1b8d2c: 0xa025f430  sb          $a1, -0xBD0($at)
    ctx->pc = 0x1b8d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964272), (uint8_t)GPR_U32(ctx, 5));
label_1b8d30:
    // 0x1b8d30: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8d34:
    // 0x1b8d34: 0x9025f430  lbu         $a1, -0xBD0($at)
    ctx->pc = 0x1b8d34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964272)));
label_1b8d38:
    // 0x1b8d38: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1b8d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1b8d3c:
    // 0x1b8d3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8d40:
    // 0x1b8d40: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b8d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b8d44:
    // 0x1b8d44: 0x10000021  b           . + 4 + (0x21 << 2)
label_1b8d48:
    if (ctx->pc == 0x1B8D48u) {
        ctx->pc = 0x1B8D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D44u;
        // 0x1b8d48: 0xa023f430  sb          $v1, -0xBD0($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294964272), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8D4Cu;
        goto label_1b8d4c;
    }
    ctx->pc = 0x1B8D44u;
    {
        const bool branch_taken_0x1b8d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D44u;
        // 0x1b8d48: 0xa023f430  sb          $v1, -0xBD0($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294964272), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d44) {
            ctx->pc = 0x1B8DCCu;
            goto label_1b8dcc;
        }
    }
    ctx->pc = 0x1B8D4Cu;
label_1b8d4c:
    // 0x1b8d4c: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x1b8d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
label_1b8d50:
    // 0x1b8d50: 0x902bf430  lbu         $t3, -0xBD0($at)
    ctx->pc = 0x1b8d50u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964272)));
label_1b8d54:
    // 0x1b8d54: 0x2409fffc  addiu       $t1, $zero, -0x4
    ctx->pc = 0x1b8d54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1b8d58:
    // 0x1b8d58: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1b8d58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1b8d5c:
    // 0x1b8d5c: 0x640a0002  daddiu      $t2, $zero, 0x2
    ctx->pc = 0x1b8d5cu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_1b8d60:
    // 0x1b8d60: 0x2407fff3  addiu       $a3, $zero, -0xD
    ctx->pc = 0x1b8d60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_1b8d64:
    // 0x1b8d64: 0x64080008  daddiu      $t0, $zero, 0x8
    ctx->pc = 0x1b8d64u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
label_1b8d68:
    // 0x1b8d68: 0x2405ffcf  addiu       $a1, $zero, -0x31
    ctx->pc = 0x1b8d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
label_1b8d6c:
    // 0x1b8d6c: 0x64060020  daddiu      $a2, $zero, 0x20
    ctx->pc = 0x1b8d6cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
label_1b8d70:
    // 0x1b8d70: 0x2403ff3f  addiu       $v1, $zero, -0xC1
    ctx->pc = 0x1b8d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_1b8d74:
    // 0x1b8d74: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x1b8d74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
label_1b8d78:
    // 0x1b8d78: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8d7c:
    // 0x1b8d7c: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1b8d7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
label_1b8d80:
    // 0x1b8d80: 0xa029f430  sb          $t1, -0xBD0($at)
    ctx->pc = 0x1b8d80u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964272), (uint8_t)GPR_U32(ctx, 9));
label_1b8d84:
    // 0x1b8d84: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8d88:
    // 0x1b8d88: 0x9029f430  lbu         $t1, -0xBD0($at)
    ctx->pc = 0x1b8d88u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964272)));
label_1b8d8c:
    // 0x1b8d8c: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x1b8d8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
label_1b8d90:
    // 0x1b8d90: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8d94:
    // 0x1b8d94: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1b8d94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_1b8d98:
    // 0x1b8d98: 0xa027f430  sb          $a3, -0xBD0($at)
    ctx->pc = 0x1b8d98u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964272), (uint8_t)GPR_U32(ctx, 7));
label_1b8d9c:
    // 0x1b8d9c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8da0:
    // 0x1b8da0: 0x9027f430  lbu         $a3, -0xBD0($at)
    ctx->pc = 0x1b8da0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964272)));
label_1b8da4:
    // 0x1b8da4: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1b8da4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
label_1b8da8:
    // 0x1b8da8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8dac:
    // 0x1b8dac: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1b8dacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_1b8db0:
    // 0x1b8db0: 0xa025f430  sb          $a1, -0xBD0($at)
    ctx->pc = 0x1b8db0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964272), (uint8_t)GPR_U32(ctx, 5));
label_1b8db4:
    // 0x1b8db4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8db8:
    // 0x1b8db8: 0x9025f430  lbu         $a1, -0xBD0($at)
    ctx->pc = 0x1b8db8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964272)));
label_1b8dbc:
    // 0x1b8dbc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1b8dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1b8dc0:
    // 0x1b8dc0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8dc4:
    // 0x1b8dc4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b8dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b8dc8:
    // 0x1b8dc8: 0xa023f430  sb          $v1, -0xBD0($at)
    ctx->pc = 0x1b8dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964272), (uint8_t)GPR_U32(ctx, 3));
label_1b8dcc:
    // 0x1b8dcc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8dd0:
    // 0x1b8dd0: 0x8023f448  lb          $v1, -0xBB8($at)
    ctx->pc = 0x1b8dd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964296)));
label_1b8dd4:
    // 0x1b8dd4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1b8dd8:
    if (ctx->pc == 0x1B8DD8u) {
        ctx->pc = 0x1B8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DD4u;
        // 0x1b8dd8: 0x3c0442fe  lui         $a0, 0x42FE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17150 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8DDCu;
        goto label_1b8ddc;
    }
    ctx->pc = 0x1B8DD4u;
    {
        const bool branch_taken_0x1b8dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DD4u;
        // 0x1b8dd8: 0x3c0442fe  lui         $a0, 0x42FE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17150 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8dd4) {
            ctx->pc = 0x1B8DF0u;
            goto label_1b8df0;
        }
    }
    ctx->pc = 0x1B8DDCu;
label_1b8ddc:
    // 0x1b8ddc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8de0:
    // 0x1b8de0: 0xac24f440  sw          $a0, -0xBC0($at)
    ctx->pc = 0x1b8de0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964288), GPR_U32(ctx, 4));
label_1b8de4:
    // 0x1b8de4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b8de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8de8:
    // 0x1b8de8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8dec:
    // 0x1b8dec: 0xa023f448  sb          $v1, -0xBB8($at)
    ctx->pc = 0x1b8decu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964296), (uint8_t)GPR_U32(ctx, 3));
label_1b8df0:
    // 0x1b8df0: 0xc6840040  lwc1        $f4, 0x40($s4)
    ctx->pc = 0x1b8df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1b8df4:
    // 0x1b8df4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b8df8:
    // 0x1b8df8: 0xc6830090  lwc1        $f3, 0x90($s4)
    ctx->pc = 0x1b8df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b8dfc:
    // 0x1b8dfc: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x1b8dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
label_1b8e00:
    // 0x1b8e00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b8e00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8e04:
    // 0x1b8e04: 0xc68200b0  lwc1        $f2, 0xB0($s4)
    ctx->pc = 0x1b8e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b8e08:
    // 0x1b8e08: 0xc425f440  lwc1        $f5, -0xBC0($at)
    ctx->pc = 0x1b8e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1b8e0c:
    // 0x1b8e0c: 0x27a3006c  addiu       $v1, $sp, 0x6C
    ctx->pc = 0x1b8e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_1b8e10:
    // 0x1b8e10: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b8e10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b8e14:
    // 0x1b8e14: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1b8e14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_1b8e18:
    // 0x1b8e18: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1b8e18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1b8e1c:
    // 0x1b8e1c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x1b8e1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_1b8e20:
    // 0x1b8e20: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x1b8e20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1b8e24:
    // 0x1b8e24: 0xc6840044  lwc1        $f4, 0x44($s4)
    ctx->pc = 0x1b8e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1b8e28:
    // 0x1b8e28: 0xc6830094  lwc1        $f3, 0x94($s4)
    ctx->pc = 0x1b8e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b8e2c:
    // 0x1b8e2c: 0xc68200b4  lwc1        $f2, 0xB4($s4)
    ctx->pc = 0x1b8e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b8e30:
    // 0x1b8e30: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1b8e30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_1b8e34:
    // 0x1b8e34: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1b8e34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1b8e38:
    // 0x1b8e38: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x1b8e38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_1b8e3c:
    // 0x1b8e3c: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1b8e3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1b8e40:
    // 0x1b8e40: 0xc6840048  lwc1        $f4, 0x48($s4)
    ctx->pc = 0x1b8e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1b8e44:
    // 0x1b8e44: 0xc6830098  lwc1        $f3, 0x98($s4)
    ctx->pc = 0x1b8e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b8e48:
    // 0x1b8e48: 0xc68200b8  lwc1        $f2, 0xB8($s4)
    ctx->pc = 0x1b8e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b8e4c:
    // 0x1b8e4c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1b8e4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_1b8e50:
    // 0x1b8e50: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1b8e50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1b8e54:
    // 0x1b8e54: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x1b8e54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_1b8e58:
    // 0x1b8e58: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x1b8e58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1b8e5c:
    // 0x1b8e5c: 0xc684004c  lwc1        $f4, 0x4C($s4)
    ctx->pc = 0x1b8e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1b8e60:
    // 0x1b8e60: 0xc683009c  lwc1        $f3, 0x9C($s4)
    ctx->pc = 0x1b8e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b8e64:
    // 0x1b8e64: 0xc68200bc  lwc1        $f2, 0xBC($s4)
    ctx->pc = 0x1b8e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b8e68:
    // 0x1b8e68: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1b8e68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_1b8e6c:
    // 0x1b8e6c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1b8e6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1b8e70:
    // 0x1b8e70: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b8e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1b8e74:
    // 0x1b8e74: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1b8e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1b8e78:
    // 0x1b8e78: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x1b8e78u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
label_1b8e7c:
    // 0x1b8e7c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b8e7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8e80:
    // 0x1b8e80: 0x0  nop
    ctx->pc = 0x1b8e80u;
    // NOP
label_1b8e84:
    // 0x1b8e84: 0x450100a7  bc1t        . + 4 + (0xA7 << 2)
label_1b8e88:
    if (ctx->pc == 0x1B8E88u) {
        ctx->pc = 0x1B8E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E84u;
        // 0x1b8e88: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E8Cu;
        goto label_1b8e8c;
    }
    ctx->pc = 0x1B8E84u;
    {
        const bool branch_taken_0x1b8e84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E84u;
        // 0x1b8e88: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8e84) {
            ctx->pc = 0x1B9124u;
            goto label_1b9124;
        }
    }
    ctx->pc = 0x1B8E8Cu;
label_1b8e8c:
    // 0x1b8e8c: 0x9022f280  lbu         $v0, -0xD80($at)
    ctx->pc = 0x1b8e8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294963840)));
label_1b8e90:
    // 0x1b8e90: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1b8e94:
    if (ctx->pc == 0x1B8E94u) {
        ctx->pc = 0x1B8E98u;
        goto label_1b8e98;
    }
    ctx->pc = 0x1B8E90u;
    {
        const bool branch_taken_0x1b8e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8e90) {
            ctx->pc = 0x1B8EC4u;
            goto label_1b8ec4;
        }
    }
    ctx->pc = 0x1B8E98u;
label_1b8e98:
    // 0x1b8e98: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x1b8e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1b8e9c:
    // 0x1b8e9c: 0xc0485c8  jal         func_121720
label_1b8ea0:
    if (ctx->pc == 0x1B8EA0u) {
        ctx->pc = 0x1B8EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E9Cu;
        // 0x1b8ea0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8EA4u;
        goto label_1b8ea4;
    }
    ctx->pc = 0x1B8E9Cu;
    SET_GPR_U32(ctx, 31, 0x1B8EA4u);
    ctx->pc = 0x1B8EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8E9Cu;
    // 0x1b8ea0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121720u, 0x1B8E9Cu, 0x1B8EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8EA4u;
label_1b8ea4:
    // 0x1b8ea4: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x1b8ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1b8ea8:
    // 0x1b8ea8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b8ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b8eac:
    // 0x1b8eac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b8eacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b8eb0:
    // 0x1b8eb0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1b8eb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1b8eb4:
    // 0x1b8eb4: 0x320f809  jalr        $t9
label_1b8eb8:
    if (ctx->pc == 0x1B8EB8u) {
        ctx->pc = 0x1B8EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EB4u;
        // 0x1b8eb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8EBCu;
        goto label_1b8ebc;
    }
    ctx->pc = 0x1B8EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B8EBCu);
        ctx->pc = 0x1B8EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EB4u;
        // 0x1b8eb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8EB4u, 0x1B8EBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8EBCu;
label_1b8ebc:
    // 0x1b8ebc: 0x10000038  b           . + 4 + (0x38 << 2)
label_1b8ec0:
    if (ctx->pc == 0x1B8EC0u) {
        ctx->pc = 0x1B8EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EBCu;
        // 0x1b8ec0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8EC4u;
        goto label_1b8ec4;
    }
    ctx->pc = 0x1B8EBCu;
    {
        const bool branch_taken_0x1b8ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EBCu;
        // 0x1b8ec0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ebc) {
            ctx->pc = 0x1B8FA0u;
            goto label_1b8fa0;
        }
    }
    ctx->pc = 0x1B8EC4u;
label_1b8ec4:
    // 0x1b8ec4: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1b8ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
label_1b8ec8:
    // 0x1b8ec8: 0x8c24c6c0  lw          $a0, -0x3940($at)
    ctx->pc = 0x1b8ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952640)));
label_1b8ecc:
    // 0x1b8ecc: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_1b8ed0:
    if (ctx->pc == 0x1B8ED0u) {
        ctx->pc = 0x1B8ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8ECCu;
        // 0x1b8ed0: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8ED4u;
        goto label_1b8ed4;
    }
    ctx->pc = 0x1B8ECCu;
    {
        const bool branch_taken_0x1b8ecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8ECCu;
        // 0x1b8ed0: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ecc) {
            ctx->pc = 0x1B8F20u;
            goto label_1b8f20;
        }
    }
    ctx->pc = 0x1B8ED4u;
label_1b8ed4:
    // 0x1b8ed4: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1b8ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
label_1b8ed8:
    // 0x1b8ed8: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1b8ed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
label_1b8edc:
    // 0x1b8edc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b8edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b8ee0:
    // 0x1b8ee0: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1b8ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_1b8ee4:
    // 0x1b8ee4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b8ee8:
    // 0x1b8ee8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b8eec:
    if (ctx->pc == 0x1B8EECu) {
        ctx->pc = 0x1B8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EE8u;
        // 0x1b8eec: 0x8c23c6c4  lw          $v1, -0x393C($at) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952644)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8EF0u;
        goto label_1b8ef0;
    }
    ctx->pc = 0x1B8EE8u;
    {
        const bool branch_taken_0x1b8ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EE8u;
        // 0x1b8eec: 0x8c23c6c4  lw          $v1, -0x393C($at) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ee8) {
            ctx->pc = 0x1B8EFCu;
            goto label_1b8efc;
        }
    }
    ctx->pc = 0x1B8EF0u;
label_1b8ef0:
    // 0x1b8ef0: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1b8ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_1b8ef4:
    // 0x1b8ef4: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1b8ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_1b8ef8:
    // 0x1b8ef8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8ef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b8efc:
    // 0x1b8efc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b8f00:
    if (ctx->pc == 0x1B8F00u) {
        ctx->pc = 0x1B8F04u;
        goto label_1b8f04;
    }
    ctx->pc = 0x1B8EFCu;
    {
        const bool branch_taken_0x1b8efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8efc) {
            ctx->pc = 0x1B8F10u;
            goto label_1b8f10;
        }
    }
    ctx->pc = 0x1B8F04u;
label_1b8f04:
    // 0x1b8f04: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b8f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1b8f08:
    // 0x1b8f08: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b8f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b8f0c:
    // 0x1b8f0c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b8f10:
    // 0x1b8f10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b8f14:
    if (ctx->pc == 0x1B8F14u) {
        ctx->pc = 0x1B8F18u;
        goto label_1b8f18;
    }
    ctx->pc = 0x1B8F10u;
    {
        const bool branch_taken_0x1b8f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8f10) {
            ctx->pc = 0x1B8F20u;
            goto label_1b8f20;
        }
    }
    ctx->pc = 0x1B8F18u;
label_1b8f18:
    // 0x1b8f18: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b8f1c:
    if (ctx->pc == 0x1B8F1Cu) {
        ctx->pc = 0x1B8F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F18u;
        // 0x1b8f1c: 0x8e850010  lw          $a1, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F20u;
        goto label_1b8f20;
    }
    ctx->pc = 0x1B8F18u;
    {
        const bool branch_taken_0x1b8f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F18u;
        // 0x1b8f1c: 0x8e850010  lw          $a1, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f18) {
            ctx->pc = 0x1B8F28u;
            goto label_1b8f28;
        }
    }
    ctx->pc = 0x1B8F20u;
label_1b8f20:
    // 0x1b8f20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8f24:
    // 0x1b8f24: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x1b8f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1b8f28:
    // 0x1b8f28: 0xc06d130  jal         func_1B44C0
label_1b8f2c:
    if (ctx->pc == 0x1B8F2Cu) {
        ctx->pc = 0x1B8F30u;
        goto label_1b8f30;
    }
    ctx->pc = 0x1B8F28u;
    SET_GPR_U32(ctx, 31, 0x1B8F30u);
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B8F28u, 0x1B8F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8F30u;
label_1b8f30:
    // 0x1b8f30: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1b8f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
label_1b8f34:
    // 0x1b8f34: 0x8c24c6c0  lw          $a0, -0x3940($at)
    ctx->pc = 0x1b8f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952640)));
label_1b8f38:
    // 0x1b8f38: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_1b8f3c:
    if (ctx->pc == 0x1B8F3Cu) {
        ctx->pc = 0x1B8F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F38u;
        // 0x1b8f3c: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F40u;
        goto label_1b8f40;
    }
    ctx->pc = 0x1B8F38u;
    {
        const bool branch_taken_0x1b8f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F38u;
        // 0x1b8f3c: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f38) {
            ctx->pc = 0x1B8F8Cu;
            goto label_1b8f8c;
        }
    }
    ctx->pc = 0x1B8F40u;
label_1b8f40:
    // 0x1b8f40: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1b8f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
label_1b8f44:
    // 0x1b8f44: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1b8f44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
label_1b8f48:
    // 0x1b8f48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b8f4c:
    // 0x1b8f4c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1b8f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_1b8f50:
    // 0x1b8f50: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8f50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b8f54:
    // 0x1b8f54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b8f58:
    if (ctx->pc == 0x1B8F58u) {
        ctx->pc = 0x1B8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F54u;
        // 0x1b8f58: 0x8c23c6c4  lw          $v1, -0x393C($at) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952644)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F5Cu;
        goto label_1b8f5c;
    }
    ctx->pc = 0x1B8F54u;
    {
        const bool branch_taken_0x1b8f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F54u;
        // 0x1b8f58: 0x8c23c6c4  lw          $v1, -0x393C($at) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f54) {
            ctx->pc = 0x1B8F68u;
            goto label_1b8f68;
        }
    }
    ctx->pc = 0x1B8F5Cu;
label_1b8f5c:
    // 0x1b8f5c: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1b8f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_1b8f60:
    // 0x1b8f60: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1b8f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_1b8f64:
    // 0x1b8f64: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8f64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b8f68:
    // 0x1b8f68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b8f6c:
    if (ctx->pc == 0x1B8F6Cu) {
        ctx->pc = 0x1B8F70u;
        goto label_1b8f70;
    }
    ctx->pc = 0x1B8F68u;
    {
        const bool branch_taken_0x1b8f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8f68) {
            ctx->pc = 0x1B8F7Cu;
            goto label_1b8f7c;
        }
    }
    ctx->pc = 0x1B8F70u;
label_1b8f70:
    // 0x1b8f70: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b8f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1b8f74:
    // 0x1b8f74: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b8f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b8f78:
    // 0x1b8f78: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8f78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b8f7c:
    // 0x1b8f7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b8f80:
    if (ctx->pc == 0x1B8F80u) {
        ctx->pc = 0x1B8F84u;
        goto label_1b8f84;
    }
    ctx->pc = 0x1B8F7Cu;
    {
        const bool branch_taken_0x1b8f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8f7c) {
            ctx->pc = 0x1B8F8Cu;
            goto label_1b8f8c;
        }
    }
    ctx->pc = 0x1B8F84u;
label_1b8f84:
    // 0x1b8f84: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b8f88:
    if (ctx->pc == 0x1B8F88u) {
        ctx->pc = 0x1B8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F84u;
        // 0x1b8f88: 0x8e850010  lw          $a1, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F8Cu;
        goto label_1b8f8c;
    }
    ctx->pc = 0x1B8F84u;
    {
        const bool branch_taken_0x1b8f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F84u;
        // 0x1b8f88: 0x8e850010  lw          $a1, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f84) {
            ctx->pc = 0x1B8F94u;
            goto label_1b8f94;
        }
    }
    ctx->pc = 0x1B8F8Cu;
label_1b8f8c:
    // 0x1b8f8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8f90:
    // 0x1b8f90: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x1b8f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1b8f94:
    // 0x1b8f94: 0xc06d14c  jal         func_1B4530
label_1b8f98:
    if (ctx->pc == 0x1B8F98u) {
        ctx->pc = 0x1B8F9Cu;
        goto label_1b8f9c;
    }
    ctx->pc = 0x1B8F94u;
    SET_GPR_U32(ctx, 31, 0x1B8F9Cu);
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B8F94u, 0x1B8F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8F9Cu;
label_1b8f9c:
    // 0x1b8f9c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1b8f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1b8fa0:
    // 0x1b8fa0: 0xc07d3a0  jal         func_1F4E80
label_1b8fa4:
    if (ctx->pc == 0x1B8FA4u) {
        ctx->pc = 0x1B8FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8FA0u;
        // 0x1b8fa4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8FA8u;
        goto label_1b8fa8;
    }
    ctx->pc = 0x1B8FA0u;
    SET_GPR_U32(ctx, 31, 0x1B8FA8u);
    ctx->pc = 0x1B8FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8FA0u;
    // 0x1b8fa4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E80u, 0x1B8FA0u, 0x1B8FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FA8u;
label_1b8fa8:
    // 0x1b8fa8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b8fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8fac:
    // 0x1b8fac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b8facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8fb0:
    // 0x1b8fb0: 0x23d1821  addu        $v1, $s1, $sp
    ctx->pc = 0x1b8fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_1b8fb4:
    // 0x1b8fb4: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x1b8fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1b8fb8:
    // 0x1b8fb8: 0x24720080  addiu       $s2, $v1, 0x80
    ctx->pc = 0x1b8fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_1b8fbc:
    // 0x1b8fbc: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x1b8fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1b8fc0:
    // 0x1b8fc0: 0xc07d38e  jal         func_1F4E38
label_1b8fc4:
    if (ctx->pc == 0x1B8FC4u) {
        ctx->pc = 0x1B8FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8FC0u;
        // 0x1b8fc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8FC8u;
        goto label_1b8fc8;
    }
    ctx->pc = 0x1B8FC0u;
    SET_GPR_U32(ctx, 31, 0x1B8FC8u);
    ctx->pc = 0x1B8FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8FC0u;
    // 0x1b8fc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1B8FC0u, 0x1B8FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FC8u;
label_1b8fc8:
    // 0x1b8fc8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1b8fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8fcc:
    // 0x1b8fcc: 0x3c023f92  lui         $v0, 0x3F92
    ctx->pc = 0x1b8fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16274 << 16));
label_1b8fd0:
    // 0x1b8fd0: 0x34424925  ori         $v0, $v0, 0x4925
    ctx->pc = 0x1b8fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18725);
label_1b8fd4:
    // 0x1b8fd4: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1b8fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
label_1b8fd8:
    // 0x1b8fd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b8fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b8fdc:
    // 0x1b8fdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b8fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b8fe0:
    // 0x1b8fe0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b8fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b8fe4:
    // 0x1b8fe4: 0x24c62f40  addiu       $a2, $a2, 0x2F40
    ctx->pc = 0x1b8fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12096));
label_1b8fe8:
    // 0x1b8fe8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b8fe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b8fec:
    // 0x1b8fec: 0xc07d370  jal         func_1F4DC0
label_1b8ff0:
    if (ctx->pc == 0x1B8FF0u) {
        ctx->pc = 0x1B8FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8FECu;
        // 0x1b8ff0: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8FF4u;
        goto label_1b8ff4;
    }
    ctx->pc = 0x1B8FECu;
    SET_GPR_U32(ctx, 31, 0x1B8FF4u);
    ctx->pc = 0x1B8FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8FECu;
    // 0x1b8ff0: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x1B8FECu, 0x1B8FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FF4u;
label_1b8ff4:
    // 0x1b8ff4: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1b8ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
label_1b8ff8:
    // 0x1b8ff8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b8ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b8ffc:
    // 0x1b8ffc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b8ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b9000:
    // 0x1b9000: 0xc07d36a  jal         func_1F4DA8
label_1b9004:
    if (ctx->pc == 0x1B9004u) {
        ctx->pc = 0x1B9004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9000u;
        // 0x1b9004: 0x24c62f30  addiu       $a2, $a2, 0x2F30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9008u;
        goto label_1b9008;
    }
    ctx->pc = 0x1B9000u;
    SET_GPR_U32(ctx, 31, 0x1B9008u);
    ctx->pc = 0x1B9004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9000u;
    // 0x1b9004: 0x24c62f30  addiu       $a2, $a2, 0x2F30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x1B9000u, 0x1B9008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9008u;
label_1b9008:
    // 0x1b9008: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b9008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b900c:
    // 0x1b900c: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x1b900cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_1b9010:
    // 0x1b9010: 0x245200a0  addiu       $s2, $v0, 0xA0
    ctx->pc = 0x1b9010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_1b9014:
    // 0x1b9014: 0xc07d39c  jal         func_1F4E70
label_1b9018:
    if (ctx->pc == 0x1B9018u) {
        ctx->pc = 0x1B9018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9014u;
        // 0x1b9018: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B901Cu;
        goto label_1b901c;
    }
    ctx->pc = 0x1B9014u;
    SET_GPR_U32(ctx, 31, 0x1B901Cu);
    ctx->pc = 0x1B9018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9014u;
    // 0x1b9018: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E70u, 0x1B9014u, 0x1B901Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B901Cu;
label_1b901c:
    // 0x1b901c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b901cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b9020:
    // 0x1b9020: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1b9020u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_1b9024:
    // 0x1b9024: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1b9024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b9028:
    // 0x1b9028: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_1b902c:
    if (ctx->pc == 0x1B902Cu) {
        ctx->pc = 0x1B902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9028u;
        // 0x1b902c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9030u;
        goto label_1b9030;
    }
    ctx->pc = 0x1B9028u;
    {
        const bool branch_taken_0x1b9028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9028u;
        // 0x1b902c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9028) {
            ctx->pc = 0x1B8FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8fb0;
        }
    }
    ctx->pc = 0x1B9030u;
label_1b9030:
    // 0x1b9030: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x1b9030u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b9034:
    // 0x1b9034: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1b9034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1b9038:
    // 0x1b9038: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1b9038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_1b903c:
    // 0x1b903c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b903cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1b9040:
    // 0x1b9040: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1b9040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1b9044:
    // 0x1b9044: 0x34630007  ori         $v1, $v1, 0x7
    ctx->pc = 0x1b9044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7);
label_1b9048:
    // 0x1b9048: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b904c:
    // 0x1b904c: 0xa0e60003  sb          $a2, 0x3($a3)
    ctx->pc = 0x1b904cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 6));
label_1b9050:
    // 0x1b9050: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x1b9050u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
label_1b9054:
    // 0x1b9054: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1b9054u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_1b9058:
    // 0x1b9058: 0xa4e50000  sh          $a1, 0x0($a3)
    ctx->pc = 0x1b9058u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
label_1b905c:
    // 0x1b905c: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x1b905cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
label_1b9060:
    // 0x1b9060: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x1b9060u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
label_1b9064:
    // 0x1b9064: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b9064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b9068:
    // 0x1b9068: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b9068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1b906c:
    // 0x1b906c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1b906cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1b9070:
    // 0x1b9070: 0x7824f410  lq          $a0, -0xBF0($at)
    ctx->pc = 0x1b9070u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 1), 4294964240)));
label_1b9074:
    // 0x1b9074: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b9074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b9078:
    // 0x1b9078: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b907c:
    // 0x1b907c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1b907cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1b9080:
    // 0x1b9080: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b9080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b9084:
    // 0x1b9084: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b9084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1b9088:
    // 0x1b9088: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1b9088u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1b908c:
    // 0x1b908c: 0x7824f430  lq          $a0, -0xBD0($at)
    ctx->pc = 0x1b908cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 1), 4294964272)));
label_1b9090:
    // 0x1b9090: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b9090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b9094:
    // 0x1b9094: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1b9094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
label_1b9098:
    // 0x1b9098: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1b9098u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1b909c:
    // 0x1b909c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b909cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b90a0:
    // 0x1b90a0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b90a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1b90a4:
    // 0x1b90a4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1b90a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1b90a8:
    // 0x1b90a8: 0x7ba40070  lq          $a0, 0x70($sp)
    ctx->pc = 0x1b90a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b90ac:
    // 0x1b90ac: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b90acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b90b0:
    // 0x1b90b0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1b90b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1b90b4:
    // 0x1b90b4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b90b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b90b8:
    // 0x1b90b8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b90b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1b90bc:
    // 0x1b90bc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1b90bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1b90c0:
    // 0x1b90c0: 0x78242f10  lq          $a0, 0x2F10($at)
    ctx->pc = 0x1b90c0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 1), 12048)));
label_1b90c4:
    // 0x1b90c4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b90c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b90c8:
    // 0x1b90c8: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1b90c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
label_1b90cc:
    // 0x1b90cc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1b90ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1b90d0:
    // 0x1b90d0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b90d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b90d4:
    // 0x1b90d4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b90d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1b90d8:
    // 0x1b90d8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1b90d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1b90dc:
    // 0x1b90dc: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x1b90dcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1b90e0:
    // 0x1b90e0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b90e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b90e4:
    // 0x1b90e4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1b90e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1b90e8:
    // 0x1b90e8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b90e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b90ec:
    // 0x1b90ec: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b90ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1b90f0:
    // 0x1b90f0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1b90f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1b90f4:
    // 0x1b90f4: 0x78242f20  lq          $a0, 0x2F20($at)
    ctx->pc = 0x1b90f4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 1), 12064)));
label_1b90f8:
    // 0x1b90f8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b90f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b90fc:
    // 0x1b90fc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1b90fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1b9100:
    // 0x1b9100: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b9100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b9104:
    // 0x1b9104: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b9104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1b9108:
    // 0x1b9108: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1b9108u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1b910c:
    // 0x1b910c: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x1b910cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1b9110:
    // 0x1b9110: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b9110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b9114:
    // 0x1b9114: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1b9114u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1b9118:
    // 0x1b9118: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b9118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b911c:
    // 0x1b911c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b911cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1b9120:
    // 0x1b9120: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1b9120u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1b9124:
    // 0x1b9124: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b9124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b9128:
    // 0x1b9128: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b9128u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b912c:
    // 0x1b912c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b912cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b9130:
    // 0x1b9130: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b9130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b9134:
    // 0x1b9134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b9134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b9138:
    // 0x1b9138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b9138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b913c:
    // 0x1b913c: 0x3e00008  jr          $ra
label_1b9140:
    if (ctx->pc == 0x1B9140u) {
        ctx->pc = 0x1B9140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B913Cu;
        // 0x1b9140: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9144u;
        goto label_fallthrough_0x1b913c;
    }
    ctx->pc = 0x1B913Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B913Cu;
        // 0x1b9140: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B913Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b913c:
    ctx->pc = 0x1B9144u;
}
