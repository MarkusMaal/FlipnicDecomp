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

// Function: FUN_001028c0
// Address: 0x1028c0 - 0x103414
void FUN_001028c0_0x1028c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001028c0_0x1028c0");
#endif

    switch (ctx->pc) {
        case 0x1028c0u: goto label_1028c0;
        case 0x1028c4u: goto label_1028c4;
        case 0x1028c8u: goto label_1028c8;
        case 0x1028ccu: goto label_1028cc;
        case 0x1028d0u: goto label_1028d0;
        case 0x1028d4u: goto label_1028d4;
        case 0x1028d8u: goto label_1028d8;
        case 0x1028dcu: goto label_1028dc;
        case 0x1028e0u: goto label_1028e0;
        case 0x1028e4u: goto label_1028e4;
        case 0x1028e8u: goto label_1028e8;
        case 0x1028ecu: goto label_1028ec;
        case 0x1028f0u: goto label_1028f0;
        case 0x1028f4u: goto label_1028f4;
        case 0x1028f8u: goto label_1028f8;
        case 0x1028fcu: goto label_1028fc;
        case 0x102900u: goto label_102900;
        case 0x102904u: goto label_102904;
        case 0x102908u: goto label_102908;
        case 0x10290cu: goto label_10290c;
        case 0x102910u: goto label_102910;
        case 0x102914u: goto label_102914;
        case 0x102918u: goto label_102918;
        case 0x10291cu: goto label_10291c;
        case 0x102920u: goto label_102920;
        case 0x102924u: goto label_102924;
        case 0x102928u: goto label_102928;
        case 0x10292cu: goto label_10292c;
        case 0x102930u: goto label_102930;
        case 0x102934u: goto label_102934;
        case 0x102938u: goto label_102938;
        case 0x10293cu: goto label_10293c;
        case 0x102940u: goto label_102940;
        case 0x102944u: goto label_102944;
        case 0x102948u: goto label_102948;
        case 0x10294cu: goto label_10294c;
        case 0x102950u: goto label_102950;
        case 0x102954u: goto label_102954;
        case 0x102958u: goto label_102958;
        case 0x10295cu: goto label_10295c;
        case 0x102960u: goto label_102960;
        case 0x102964u: goto label_102964;
        case 0x102968u: goto label_102968;
        case 0x10296cu: goto label_10296c;
        case 0x102970u: goto label_102970;
        case 0x102974u: goto label_102974;
        case 0x102978u: goto label_102978;
        case 0x10297cu: goto label_10297c;
        case 0x102980u: goto label_102980;
        case 0x102984u: goto label_102984;
        case 0x102988u: goto label_102988;
        case 0x10298cu: goto label_10298c;
        case 0x102990u: goto label_102990;
        case 0x102994u: goto label_102994;
        case 0x102998u: goto label_102998;
        case 0x10299cu: goto label_10299c;
        case 0x1029a0u: goto label_1029a0;
        case 0x1029a4u: goto label_1029a4;
        case 0x1029a8u: goto label_1029a8;
        case 0x1029acu: goto label_1029ac;
        case 0x1029b0u: goto label_1029b0;
        case 0x1029b4u: goto label_1029b4;
        case 0x1029b8u: goto label_1029b8;
        case 0x1029bcu: goto label_1029bc;
        case 0x1029c0u: goto label_1029c0;
        case 0x1029c4u: goto label_1029c4;
        case 0x1029c8u: goto label_1029c8;
        case 0x1029ccu: goto label_1029cc;
        case 0x1029d0u: goto label_1029d0;
        case 0x1029d4u: goto label_1029d4;
        case 0x1029d8u: goto label_1029d8;
        case 0x1029dcu: goto label_1029dc;
        case 0x1029e0u: goto label_1029e0;
        case 0x1029e4u: goto label_1029e4;
        case 0x1029e8u: goto label_1029e8;
        case 0x1029ecu: goto label_1029ec;
        case 0x1029f0u: goto label_1029f0;
        case 0x1029f4u: goto label_1029f4;
        case 0x1029f8u: goto label_1029f8;
        case 0x1029fcu: goto label_1029fc;
        case 0x102a00u: goto label_102a00;
        case 0x102a04u: goto label_102a04;
        case 0x102a08u: goto label_102a08;
        case 0x102a0cu: goto label_102a0c;
        case 0x102a10u: goto label_102a10;
        case 0x102a14u: goto label_102a14;
        case 0x102a18u: goto label_102a18;
        case 0x102a1cu: goto label_102a1c;
        case 0x102a20u: goto label_102a20;
        case 0x102a24u: goto label_102a24;
        case 0x102a28u: goto label_102a28;
        case 0x102a2cu: goto label_102a2c;
        case 0x102a30u: goto label_102a30;
        case 0x102a34u: goto label_102a34;
        case 0x102a38u: goto label_102a38;
        case 0x102a3cu: goto label_102a3c;
        case 0x102a40u: goto label_102a40;
        case 0x102a44u: goto label_102a44;
        case 0x102a48u: goto label_102a48;
        case 0x102a4cu: goto label_102a4c;
        case 0x102a50u: goto label_102a50;
        case 0x102a54u: goto label_102a54;
        case 0x102a58u: goto label_102a58;
        case 0x102a5cu: goto label_102a5c;
        case 0x102a60u: goto label_102a60;
        case 0x102a64u: goto label_102a64;
        case 0x102a68u: goto label_102a68;
        case 0x102a6cu: goto label_102a6c;
        case 0x102a70u: goto label_102a70;
        case 0x102a74u: goto label_102a74;
        case 0x102a78u: goto label_102a78;
        case 0x102a7cu: goto label_102a7c;
        case 0x102a80u: goto label_102a80;
        case 0x102a84u: goto label_102a84;
        case 0x102a88u: goto label_102a88;
        case 0x102a8cu: goto label_102a8c;
        case 0x102a90u: goto label_102a90;
        case 0x102a94u: goto label_102a94;
        case 0x102a98u: goto label_102a98;
        case 0x102a9cu: goto label_102a9c;
        case 0x102aa0u: goto label_102aa0;
        case 0x102aa4u: goto label_102aa4;
        case 0x102aa8u: goto label_102aa8;
        case 0x102aacu: goto label_102aac;
        case 0x102ab0u: goto label_102ab0;
        case 0x102ab4u: goto label_102ab4;
        case 0x102ab8u: goto label_102ab8;
        case 0x102abcu: goto label_102abc;
        case 0x102ac0u: goto label_102ac0;
        case 0x102ac4u: goto label_102ac4;
        case 0x102ac8u: goto label_102ac8;
        case 0x102accu: goto label_102acc;
        case 0x102ad0u: goto label_102ad0;
        case 0x102ad4u: goto label_102ad4;
        case 0x102ad8u: goto label_102ad8;
        case 0x102adcu: goto label_102adc;
        case 0x102ae0u: goto label_102ae0;
        case 0x102ae4u: goto label_102ae4;
        case 0x102ae8u: goto label_102ae8;
        case 0x102aecu: goto label_102aec;
        case 0x102af0u: goto label_102af0;
        case 0x102af4u: goto label_102af4;
        case 0x102af8u: goto label_102af8;
        case 0x102afcu: goto label_102afc;
        case 0x102b00u: goto label_102b00;
        case 0x102b04u: goto label_102b04;
        case 0x102b08u: goto label_102b08;
        case 0x102b0cu: goto label_102b0c;
        case 0x102b10u: goto label_102b10;
        case 0x102b14u: goto label_102b14;
        case 0x102b18u: goto label_102b18;
        case 0x102b1cu: goto label_102b1c;
        case 0x102b20u: goto label_102b20;
        case 0x102b24u: goto label_102b24;
        case 0x102b28u: goto label_102b28;
        case 0x102b2cu: goto label_102b2c;
        case 0x102b30u: goto label_102b30;
        case 0x102b34u: goto label_102b34;
        case 0x102b38u: goto label_102b38;
        case 0x102b3cu: goto label_102b3c;
        case 0x102b40u: goto label_102b40;
        case 0x102b44u: goto label_102b44;
        case 0x102b48u: goto label_102b48;
        case 0x102b4cu: goto label_102b4c;
        case 0x102b50u: goto label_102b50;
        case 0x102b54u: goto label_102b54;
        case 0x102b58u: goto label_102b58;
        case 0x102b5cu: goto label_102b5c;
        case 0x102b60u: goto label_102b60;
        case 0x102b64u: goto label_102b64;
        case 0x102b68u: goto label_102b68;
        case 0x102b6cu: goto label_102b6c;
        case 0x102b70u: goto label_102b70;
        case 0x102b74u: goto label_102b74;
        case 0x102b78u: goto label_102b78;
        case 0x102b7cu: goto label_102b7c;
        case 0x102b80u: goto label_102b80;
        case 0x102b84u: goto label_102b84;
        case 0x102b88u: goto label_102b88;
        case 0x102b8cu: goto label_102b8c;
        case 0x102b90u: goto label_102b90;
        case 0x102b94u: goto label_102b94;
        case 0x102b98u: goto label_102b98;
        case 0x102b9cu: goto label_102b9c;
        case 0x102ba0u: goto label_102ba0;
        case 0x102ba4u: goto label_102ba4;
        case 0x102ba8u: goto label_102ba8;
        case 0x102bacu: goto label_102bac;
        case 0x102bb0u: goto label_102bb0;
        case 0x102bb4u: goto label_102bb4;
        case 0x102bb8u: goto label_102bb8;
        case 0x102bbcu: goto label_102bbc;
        case 0x102bc0u: goto label_102bc0;
        case 0x102bc4u: goto label_102bc4;
        case 0x102bc8u: goto label_102bc8;
        case 0x102bccu: goto label_102bcc;
        case 0x102bd0u: goto label_102bd0;
        case 0x102bd4u: goto label_102bd4;
        case 0x102bd8u: goto label_102bd8;
        case 0x102bdcu: goto label_102bdc;
        case 0x102be0u: goto label_102be0;
        case 0x102be4u: goto label_102be4;
        case 0x102be8u: goto label_102be8;
        case 0x102becu: goto label_102bec;
        case 0x102bf0u: goto label_102bf0;
        case 0x102bf4u: goto label_102bf4;
        case 0x102bf8u: goto label_102bf8;
        case 0x102bfcu: goto label_102bfc;
        case 0x102c00u: goto label_102c00;
        case 0x102c04u: goto label_102c04;
        case 0x102c08u: goto label_102c08;
        case 0x102c0cu: goto label_102c0c;
        case 0x102c10u: goto label_102c10;
        case 0x102c14u: goto label_102c14;
        case 0x102c18u: goto label_102c18;
        case 0x102c1cu: goto label_102c1c;
        case 0x102c20u: goto label_102c20;
        case 0x102c24u: goto label_102c24;
        case 0x102c28u: goto label_102c28;
        case 0x102c2cu: goto label_102c2c;
        case 0x102c30u: goto label_102c30;
        case 0x102c34u: goto label_102c34;
        case 0x102c38u: goto label_102c38;
        case 0x102c3cu: goto label_102c3c;
        case 0x102c40u: goto label_102c40;
        case 0x102c44u: goto label_102c44;
        case 0x102c48u: goto label_102c48;
        case 0x102c4cu: goto label_102c4c;
        case 0x102c50u: goto label_102c50;
        case 0x102c54u: goto label_102c54;
        case 0x102c58u: goto label_102c58;
        case 0x102c5cu: goto label_102c5c;
        case 0x102c60u: goto label_102c60;
        case 0x102c64u: goto label_102c64;
        case 0x102c68u: goto label_102c68;
        case 0x102c6cu: goto label_102c6c;
        case 0x102c70u: goto label_102c70;
        case 0x102c74u: goto label_102c74;
        case 0x102c78u: goto label_102c78;
        case 0x102c7cu: goto label_102c7c;
        case 0x102c80u: goto label_102c80;
        case 0x102c84u: goto label_102c84;
        case 0x102c88u: goto label_102c88;
        case 0x102c8cu: goto label_102c8c;
        case 0x102c90u: goto label_102c90;
        case 0x102c94u: goto label_102c94;
        case 0x102c98u: goto label_102c98;
        case 0x102c9cu: goto label_102c9c;
        case 0x102ca0u: goto label_102ca0;
        case 0x102ca4u: goto label_102ca4;
        case 0x102ca8u: goto label_102ca8;
        case 0x102cacu: goto label_102cac;
        case 0x102cb0u: goto label_102cb0;
        case 0x102cb4u: goto label_102cb4;
        case 0x102cb8u: goto label_102cb8;
        case 0x102cbcu: goto label_102cbc;
        case 0x102cc0u: goto label_102cc0;
        case 0x102cc4u: goto label_102cc4;
        case 0x102cc8u: goto label_102cc8;
        case 0x102cccu: goto label_102ccc;
        case 0x102cd0u: goto label_102cd0;
        case 0x102cd4u: goto label_102cd4;
        case 0x102cd8u: goto label_102cd8;
        case 0x102cdcu: goto label_102cdc;
        case 0x102ce0u: goto label_102ce0;
        case 0x102ce4u: goto label_102ce4;
        case 0x102ce8u: goto label_102ce8;
        case 0x102cecu: goto label_102cec;
        case 0x102cf0u: goto label_102cf0;
        case 0x102cf4u: goto label_102cf4;
        case 0x102cf8u: goto label_102cf8;
        case 0x102cfcu: goto label_102cfc;
        case 0x102d00u: goto label_102d00;
        case 0x102d04u: goto label_102d04;
        case 0x102d08u: goto label_102d08;
        case 0x102d0cu: goto label_102d0c;
        case 0x102d10u: goto label_102d10;
        case 0x102d14u: goto label_102d14;
        case 0x102d18u: goto label_102d18;
        case 0x102d1cu: goto label_102d1c;
        case 0x102d20u: goto label_102d20;
        case 0x102d24u: goto label_102d24;
        case 0x102d28u: goto label_102d28;
        case 0x102d2cu: goto label_102d2c;
        case 0x102d30u: goto label_102d30;
        case 0x102d34u: goto label_102d34;
        case 0x102d38u: goto label_102d38;
        case 0x102d3cu: goto label_102d3c;
        case 0x102d40u: goto label_102d40;
        case 0x102d44u: goto label_102d44;
        case 0x102d48u: goto label_102d48;
        case 0x102d4cu: goto label_102d4c;
        case 0x102d50u: goto label_102d50;
        case 0x102d54u: goto label_102d54;
        case 0x102d58u: goto label_102d58;
        case 0x102d5cu: goto label_102d5c;
        case 0x102d60u: goto label_102d60;
        case 0x102d64u: goto label_102d64;
        case 0x102d68u: goto label_102d68;
        case 0x102d6cu: goto label_102d6c;
        case 0x102d70u: goto label_102d70;
        case 0x102d74u: goto label_102d74;
        case 0x102d78u: goto label_102d78;
        case 0x102d7cu: goto label_102d7c;
        case 0x102d80u: goto label_102d80;
        case 0x102d84u: goto label_102d84;
        case 0x102d88u: goto label_102d88;
        case 0x102d8cu: goto label_102d8c;
        case 0x102d90u: goto label_102d90;
        case 0x102d94u: goto label_102d94;
        case 0x102d98u: goto label_102d98;
        case 0x102d9cu: goto label_102d9c;
        case 0x102da0u: goto label_102da0;
        case 0x102da4u: goto label_102da4;
        case 0x102da8u: goto label_102da8;
        case 0x102dacu: goto label_102dac;
        case 0x102db0u: goto label_102db0;
        case 0x102db4u: goto label_102db4;
        case 0x102db8u: goto label_102db8;
        case 0x102dbcu: goto label_102dbc;
        case 0x102dc0u: goto label_102dc0;
        case 0x102dc4u: goto label_102dc4;
        case 0x102dc8u: goto label_102dc8;
        case 0x102dccu: goto label_102dcc;
        case 0x102dd0u: goto label_102dd0;
        case 0x102dd4u: goto label_102dd4;
        case 0x102dd8u: goto label_102dd8;
        case 0x102ddcu: goto label_102ddc;
        case 0x102de0u: goto label_102de0;
        case 0x102de4u: goto label_102de4;
        case 0x102de8u: goto label_102de8;
        case 0x102decu: goto label_102dec;
        case 0x102df0u: goto label_102df0;
        case 0x102df4u: goto label_102df4;
        case 0x102df8u: goto label_102df8;
        case 0x102dfcu: goto label_102dfc;
        case 0x102e00u: goto label_102e00;
        case 0x102e04u: goto label_102e04;
        case 0x102e08u: goto label_102e08;
        case 0x102e0cu: goto label_102e0c;
        case 0x102e10u: goto label_102e10;
        case 0x102e14u: goto label_102e14;
        case 0x102e18u: goto label_102e18;
        case 0x102e1cu: goto label_102e1c;
        case 0x102e20u: goto label_102e20;
        case 0x102e24u: goto label_102e24;
        case 0x102e28u: goto label_102e28;
        case 0x102e2cu: goto label_102e2c;
        case 0x102e30u: goto label_102e30;
        case 0x102e34u: goto label_102e34;
        case 0x102e38u: goto label_102e38;
        case 0x102e3cu: goto label_102e3c;
        case 0x102e40u: goto label_102e40;
        case 0x102e44u: goto label_102e44;
        case 0x102e48u: goto label_102e48;
        case 0x102e4cu: goto label_102e4c;
        case 0x102e50u: goto label_102e50;
        case 0x102e54u: goto label_102e54;
        case 0x102e58u: goto label_102e58;
        case 0x102e5cu: goto label_102e5c;
        case 0x102e60u: goto label_102e60;
        case 0x102e64u: goto label_102e64;
        case 0x102e68u: goto label_102e68;
        case 0x102e6cu: goto label_102e6c;
        case 0x102e70u: goto label_102e70;
        case 0x102e74u: goto label_102e74;
        case 0x102e78u: goto label_102e78;
        case 0x102e7cu: goto label_102e7c;
        case 0x102e80u: goto label_102e80;
        case 0x102e84u: goto label_102e84;
        case 0x102e88u: goto label_102e88;
        case 0x102e8cu: goto label_102e8c;
        case 0x102e90u: goto label_102e90;
        case 0x102e94u: goto label_102e94;
        case 0x102e98u: goto label_102e98;
        case 0x102e9cu: goto label_102e9c;
        case 0x102ea0u: goto label_102ea0;
        case 0x102ea4u: goto label_102ea4;
        case 0x102ea8u: goto label_102ea8;
        case 0x102eacu: goto label_102eac;
        case 0x102eb0u: goto label_102eb0;
        case 0x102eb4u: goto label_102eb4;
        case 0x102eb8u: goto label_102eb8;
        case 0x102ebcu: goto label_102ebc;
        case 0x102ec0u: goto label_102ec0;
        case 0x102ec4u: goto label_102ec4;
        case 0x102ec8u: goto label_102ec8;
        case 0x102eccu: goto label_102ecc;
        case 0x102ed0u: goto label_102ed0;
        case 0x102ed4u: goto label_102ed4;
        case 0x102ed8u: goto label_102ed8;
        case 0x102edcu: goto label_102edc;
        case 0x102ee0u: goto label_102ee0;
        case 0x102ee4u: goto label_102ee4;
        case 0x102ee8u: goto label_102ee8;
        case 0x102eecu: goto label_102eec;
        case 0x102ef0u: goto label_102ef0;
        case 0x102ef4u: goto label_102ef4;
        case 0x102ef8u: goto label_102ef8;
        case 0x102efcu: goto label_102efc;
        case 0x102f00u: goto label_102f00;
        case 0x102f04u: goto label_102f04;
        case 0x102f08u: goto label_102f08;
        case 0x102f0cu: goto label_102f0c;
        case 0x102f10u: goto label_102f10;
        case 0x102f14u: goto label_102f14;
        case 0x102f18u: goto label_102f18;
        case 0x102f1cu: goto label_102f1c;
        case 0x102f20u: goto label_102f20;
        case 0x102f24u: goto label_102f24;
        case 0x102f28u: goto label_102f28;
        case 0x102f2cu: goto label_102f2c;
        case 0x102f30u: goto label_102f30;
        case 0x102f34u: goto label_102f34;
        case 0x102f38u: goto label_102f38;
        case 0x102f3cu: goto label_102f3c;
        case 0x102f40u: goto label_102f40;
        case 0x102f44u: goto label_102f44;
        case 0x102f48u: goto label_102f48;
        case 0x102f4cu: goto label_102f4c;
        case 0x102f50u: goto label_102f50;
        case 0x102f54u: goto label_102f54;
        case 0x102f58u: goto label_102f58;
        case 0x102f5cu: goto label_102f5c;
        case 0x102f60u: goto label_102f60;
        case 0x102f64u: goto label_102f64;
        case 0x102f68u: goto label_102f68;
        case 0x102f6cu: goto label_102f6c;
        case 0x102f70u: goto label_102f70;
        case 0x102f74u: goto label_102f74;
        case 0x102f78u: goto label_102f78;
        case 0x102f7cu: goto label_102f7c;
        case 0x102f80u: goto label_102f80;
        case 0x102f84u: goto label_102f84;
        case 0x102f88u: goto label_102f88;
        case 0x102f8cu: goto label_102f8c;
        case 0x102f90u: goto label_102f90;
        case 0x102f94u: goto label_102f94;
        case 0x102f98u: goto label_102f98;
        case 0x102f9cu: goto label_102f9c;
        case 0x102fa0u: goto label_102fa0;
        case 0x102fa4u: goto label_102fa4;
        case 0x102fa8u: goto label_102fa8;
        case 0x102facu: goto label_102fac;
        case 0x102fb0u: goto label_102fb0;
        case 0x102fb4u: goto label_102fb4;
        case 0x102fb8u: goto label_102fb8;
        case 0x102fbcu: goto label_102fbc;
        case 0x102fc0u: goto label_102fc0;
        case 0x102fc4u: goto label_102fc4;
        case 0x102fc8u: goto label_102fc8;
        case 0x102fccu: goto label_102fcc;
        case 0x102fd0u: goto label_102fd0;
        case 0x102fd4u: goto label_102fd4;
        case 0x102fd8u: goto label_102fd8;
        case 0x102fdcu: goto label_102fdc;
        case 0x102fe0u: goto label_102fe0;
        case 0x102fe4u: goto label_102fe4;
        case 0x102fe8u: goto label_102fe8;
        case 0x102fecu: goto label_102fec;
        case 0x102ff0u: goto label_102ff0;
        case 0x102ff4u: goto label_102ff4;
        case 0x102ff8u: goto label_102ff8;
        case 0x102ffcu: goto label_102ffc;
        case 0x103000u: goto label_103000;
        case 0x103004u: goto label_103004;
        case 0x103008u: goto label_103008;
        case 0x10300cu: goto label_10300c;
        case 0x103010u: goto label_103010;
        case 0x103014u: goto label_103014;
        case 0x103018u: goto label_103018;
        case 0x10301cu: goto label_10301c;
        case 0x103020u: goto label_103020;
        case 0x103024u: goto label_103024;
        case 0x103028u: goto label_103028;
        case 0x10302cu: goto label_10302c;
        case 0x103030u: goto label_103030;
        case 0x103034u: goto label_103034;
        case 0x103038u: goto label_103038;
        case 0x10303cu: goto label_10303c;
        case 0x103040u: goto label_103040;
        case 0x103044u: goto label_103044;
        case 0x103048u: goto label_103048;
        case 0x10304cu: goto label_10304c;
        case 0x103050u: goto label_103050;
        case 0x103054u: goto label_103054;
        case 0x103058u: goto label_103058;
        case 0x10305cu: goto label_10305c;
        case 0x103060u: goto label_103060;
        case 0x103064u: goto label_103064;
        case 0x103068u: goto label_103068;
        case 0x10306cu: goto label_10306c;
        case 0x103070u: goto label_103070;
        case 0x103074u: goto label_103074;
        case 0x103078u: goto label_103078;
        case 0x10307cu: goto label_10307c;
        case 0x103080u: goto label_103080;
        case 0x103084u: goto label_103084;
        case 0x103088u: goto label_103088;
        case 0x10308cu: goto label_10308c;
        case 0x103090u: goto label_103090;
        case 0x103094u: goto label_103094;
        case 0x103098u: goto label_103098;
        case 0x10309cu: goto label_10309c;
        case 0x1030a0u: goto label_1030a0;
        case 0x1030a4u: goto label_1030a4;
        case 0x1030a8u: goto label_1030a8;
        case 0x1030acu: goto label_1030ac;
        case 0x1030b0u: goto label_1030b0;
        case 0x1030b4u: goto label_1030b4;
        case 0x1030b8u: goto label_1030b8;
        case 0x1030bcu: goto label_1030bc;
        case 0x1030c0u: goto label_1030c0;
        case 0x1030c4u: goto label_1030c4;
        case 0x1030c8u: goto label_1030c8;
        case 0x1030ccu: goto label_1030cc;
        case 0x1030d0u: goto label_1030d0;
        case 0x1030d4u: goto label_1030d4;
        case 0x1030d8u: goto label_1030d8;
        case 0x1030dcu: goto label_1030dc;
        case 0x1030e0u: goto label_1030e0;
        case 0x1030e4u: goto label_1030e4;
        case 0x1030e8u: goto label_1030e8;
        case 0x1030ecu: goto label_1030ec;
        case 0x1030f0u: goto label_1030f0;
        case 0x1030f4u: goto label_1030f4;
        case 0x1030f8u: goto label_1030f8;
        case 0x1030fcu: goto label_1030fc;
        case 0x103100u: goto label_103100;
        case 0x103104u: goto label_103104;
        case 0x103108u: goto label_103108;
        case 0x10310cu: goto label_10310c;
        case 0x103110u: goto label_103110;
        case 0x103114u: goto label_103114;
        case 0x103118u: goto label_103118;
        case 0x10311cu: goto label_10311c;
        case 0x103120u: goto label_103120;
        case 0x103124u: goto label_103124;
        case 0x103128u: goto label_103128;
        case 0x10312cu: goto label_10312c;
        case 0x103130u: goto label_103130;
        case 0x103134u: goto label_103134;
        case 0x103138u: goto label_103138;
        case 0x10313cu: goto label_10313c;
        case 0x103140u: goto label_103140;
        case 0x103144u: goto label_103144;
        case 0x103148u: goto label_103148;
        case 0x10314cu: goto label_10314c;
        case 0x103150u: goto label_103150;
        case 0x103154u: goto label_103154;
        case 0x103158u: goto label_103158;
        case 0x10315cu: goto label_10315c;
        case 0x103160u: goto label_103160;
        case 0x103164u: goto label_103164;
        case 0x103168u: goto label_103168;
        case 0x10316cu: goto label_10316c;
        case 0x103170u: goto label_103170;
        case 0x103174u: goto label_103174;
        case 0x103178u: goto label_103178;
        case 0x10317cu: goto label_10317c;
        case 0x103180u: goto label_103180;
        case 0x103184u: goto label_103184;
        case 0x103188u: goto label_103188;
        case 0x10318cu: goto label_10318c;
        case 0x103190u: goto label_103190;
        case 0x103194u: goto label_103194;
        case 0x103198u: goto label_103198;
        case 0x10319cu: goto label_10319c;
        case 0x1031a0u: goto label_1031a0;
        case 0x1031a4u: goto label_1031a4;
        case 0x1031a8u: goto label_1031a8;
        case 0x1031acu: goto label_1031ac;
        case 0x1031b0u: goto label_1031b0;
        case 0x1031b4u: goto label_1031b4;
        case 0x1031b8u: goto label_1031b8;
        case 0x1031bcu: goto label_1031bc;
        case 0x1031c0u: goto label_1031c0;
        case 0x1031c4u: goto label_1031c4;
        case 0x1031c8u: goto label_1031c8;
        case 0x1031ccu: goto label_1031cc;
        case 0x1031d0u: goto label_1031d0;
        case 0x1031d4u: goto label_1031d4;
        case 0x1031d8u: goto label_1031d8;
        case 0x1031dcu: goto label_1031dc;
        case 0x1031e0u: goto label_1031e0;
        case 0x1031e4u: goto label_1031e4;
        case 0x1031e8u: goto label_1031e8;
        case 0x1031ecu: goto label_1031ec;
        case 0x1031f0u: goto label_1031f0;
        case 0x1031f4u: goto label_1031f4;
        case 0x1031f8u: goto label_1031f8;
        case 0x1031fcu: goto label_1031fc;
        case 0x103200u: goto label_103200;
        case 0x103204u: goto label_103204;
        case 0x103208u: goto label_103208;
        case 0x10320cu: goto label_10320c;
        case 0x103210u: goto label_103210;
        case 0x103214u: goto label_103214;
        case 0x103218u: goto label_103218;
        case 0x10321cu: goto label_10321c;
        case 0x103220u: goto label_103220;
        case 0x103224u: goto label_103224;
        case 0x103228u: goto label_103228;
        case 0x10322cu: goto label_10322c;
        case 0x103230u: goto label_103230;
        case 0x103234u: goto label_103234;
        case 0x103238u: goto label_103238;
        case 0x10323cu: goto label_10323c;
        case 0x103240u: goto label_103240;
        case 0x103244u: goto label_103244;
        case 0x103248u: goto label_103248;
        case 0x10324cu: goto label_10324c;
        case 0x103250u: goto label_103250;
        case 0x103254u: goto label_103254;
        case 0x103258u: goto label_103258;
        case 0x10325cu: goto label_10325c;
        case 0x103260u: goto label_103260;
        case 0x103264u: goto label_103264;
        case 0x103268u: goto label_103268;
        case 0x10326cu: goto label_10326c;
        case 0x103270u: goto label_103270;
        case 0x103274u: goto label_103274;
        case 0x103278u: goto label_103278;
        case 0x10327cu: goto label_10327c;
        case 0x103280u: goto label_103280;
        case 0x103284u: goto label_103284;
        case 0x103288u: goto label_103288;
        case 0x10328cu: goto label_10328c;
        case 0x103290u: goto label_103290;
        case 0x103294u: goto label_103294;
        case 0x103298u: goto label_103298;
        case 0x10329cu: goto label_10329c;
        case 0x1032a0u: goto label_1032a0;
        case 0x1032a4u: goto label_1032a4;
        case 0x1032a8u: goto label_1032a8;
        case 0x1032acu: goto label_1032ac;
        case 0x1032b0u: goto label_1032b0;
        case 0x1032b4u: goto label_1032b4;
        case 0x1032b8u: goto label_1032b8;
        case 0x1032bcu: goto label_1032bc;
        case 0x1032c0u: goto label_1032c0;
        case 0x1032c4u: goto label_1032c4;
        case 0x1032c8u: goto label_1032c8;
        case 0x1032ccu: goto label_1032cc;
        case 0x1032d0u: goto label_1032d0;
        case 0x1032d4u: goto label_1032d4;
        case 0x1032d8u: goto label_1032d8;
        case 0x1032dcu: goto label_1032dc;
        case 0x1032e0u: goto label_1032e0;
        case 0x1032e4u: goto label_1032e4;
        case 0x1032e8u: goto label_1032e8;
        case 0x1032ecu: goto label_1032ec;
        case 0x1032f0u: goto label_1032f0;
        case 0x1032f4u: goto label_1032f4;
        case 0x1032f8u: goto label_1032f8;
        case 0x1032fcu: goto label_1032fc;
        case 0x103300u: goto label_103300;
        case 0x103304u: goto label_103304;
        case 0x103308u: goto label_103308;
        case 0x10330cu: goto label_10330c;
        case 0x103310u: goto label_103310;
        case 0x103314u: goto label_103314;
        case 0x103318u: goto label_103318;
        case 0x10331cu: goto label_10331c;
        case 0x103320u: goto label_103320;
        case 0x103324u: goto label_103324;
        case 0x103328u: goto label_103328;
        case 0x10332cu: goto label_10332c;
        case 0x103330u: goto label_103330;
        case 0x103334u: goto label_103334;
        case 0x103338u: goto label_103338;
        case 0x10333cu: goto label_10333c;
        case 0x103340u: goto label_103340;
        case 0x103344u: goto label_103344;
        case 0x103348u: goto label_103348;
        case 0x10334cu: goto label_10334c;
        case 0x103350u: goto label_103350;
        case 0x103354u: goto label_103354;
        case 0x103358u: goto label_103358;
        case 0x10335cu: goto label_10335c;
        case 0x103360u: goto label_103360;
        case 0x103364u: goto label_103364;
        case 0x103368u: goto label_103368;
        case 0x10336cu: goto label_10336c;
        case 0x103370u: goto label_103370;
        case 0x103374u: goto label_103374;
        case 0x103378u: goto label_103378;
        case 0x10337cu: goto label_10337c;
        case 0x103380u: goto label_103380;
        case 0x103384u: goto label_103384;
        case 0x103388u: goto label_103388;
        case 0x10338cu: goto label_10338c;
        case 0x103390u: goto label_103390;
        case 0x103394u: goto label_103394;
        case 0x103398u: goto label_103398;
        case 0x10339cu: goto label_10339c;
        case 0x1033a0u: goto label_1033a0;
        case 0x1033a4u: goto label_1033a4;
        case 0x1033a8u: goto label_1033a8;
        case 0x1033acu: goto label_1033ac;
        case 0x1033b0u: goto label_1033b0;
        case 0x1033b4u: goto label_1033b4;
        case 0x1033b8u: goto label_1033b8;
        case 0x1033bcu: goto label_1033bc;
        case 0x1033c0u: goto label_1033c0;
        case 0x1033c4u: goto label_1033c4;
        case 0x1033c8u: goto label_1033c8;
        case 0x1033ccu: goto label_1033cc;
        case 0x1033d0u: goto label_1033d0;
        case 0x1033d4u: goto label_1033d4;
        case 0x1033d8u: goto label_1033d8;
        case 0x1033dcu: goto label_1033dc;
        case 0x1033e0u: goto label_1033e0;
        case 0x1033e4u: goto label_1033e4;
        case 0x1033e8u: goto label_1033e8;
        case 0x1033ecu: goto label_1033ec;
        case 0x1033f0u: goto label_1033f0;
        case 0x1033f4u: goto label_1033f4;
        case 0x1033f8u: goto label_1033f8;
        case 0x1033fcu: goto label_1033fc;
        case 0x103400u: goto label_103400;
        case 0x103404u: goto label_103404;
        case 0x103408u: goto label_103408;
        case 0x10340cu: goto label_10340c;
        case 0x103410u: goto label_103410;
        default: break;
    }

    ctx->pc = 0x1028c0u;

label_1028c0:
    // 0x1028c0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1028c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1028c4:
    // 0x1028c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1028c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1028c8:
    // 0x1028c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1028c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1028cc:
    // 0x1028cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1028ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1028d0:
    // 0x1028d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1028d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1028d4:
    // 0x1028d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1028d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1028d8:
    // 0x1028d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1028d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1028dc:
    // 0x1028dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1028dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1028e0:
    // 0x1028e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1028e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1028e4:
    // 0x1028e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1028e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1028e8:
    // 0x1028e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1028e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1028ec:
    // 0x1028ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1028ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1028f0:
    // 0x1028f0: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x1028f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
label_1028f4:
    // 0x1028f4: 0x10000284  b           . + 4 + (0x284 << 2)
label_1028f8:
    if (ctx->pc == 0x1028F8u) {
        ctx->pc = 0x1028F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028F4u;
        // 0x1028f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1028FCu;
        goto label_1028fc;
    }
    ctx->pc = 0x1028F4u;
    {
        const bool branch_taken_0x1028f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1028F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028F4u;
        // 0x1028f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1028f4) {
            ctx->pc = 0x103308u;
            goto label_103308;
        }
    }
    ctx->pc = 0x1028FCu;
label_1028fc:
    // 0x1028fc: 0xc05f58c  jal         func_17D630
label_102900:
    if (ctx->pc == 0x102900u) {
        ctx->pc = 0x102904u;
        goto label_102904;
    }
    ctx->pc = 0x1028FCu;
    SET_GPR_U32(ctx, 31, 0x102904u);
    ctx->pc = 0x17D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D630u, 0x1028FCu, 0x102904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102904u;
label_102904:
    // 0x102904: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x102904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102908:
    // 0x102908: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x102908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_10290c:
    // 0x10290c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10290cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_102910:
    // 0x102910: 0x3c070018  lui         $a3, 0x18
    ctx->pc = 0x102910u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24 << 16));
label_102914:
    // 0x102914: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x102914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_102918:
    // 0x102918: 0x24e7dd40  addiu       $a3, $a3, -0x22C0
    ctx->pc = 0x102918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958400));
label_10291c:
    // 0x10291c: 0x8c822c1c  lw          $v0, 0x2C1C($a0)
    ctx->pc = 0x10291cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11292)));
label_102920:
    // 0x102920: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_102924:
    // 0x102924: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x102924u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_102928:
    // 0x102928: 0x84460004  lh          $a2, 0x4($v0)
    ctx->pc = 0x102928u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_10292c:
    // 0x10292c: 0xe0f809  jalr        $a3
label_102930:
    if (ctx->pc == 0x102930u) {
        ctx->pc = 0x102930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10292Cu;
        // 0x102930: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102934u;
        goto label_102934;
    }
    ctx->pc = 0x10292Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x102934u);
        ctx->pc = 0x102930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10292Cu;
        // 0x102930: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10292Cu, 0x102934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102934u;
label_102934:
    // 0x102934: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x102934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102938:
    // 0x102938: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x102938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_10293c:
    // 0x10293c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10293cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_102940:
    // 0x102940: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_102944:
    // 0x102944: 0x8c632c1c  lw          $v1, 0x2C1C($v1)
    ctx->pc = 0x102944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
label_102948:
    // 0x102948: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10294c:
    // 0x10294c: 0xc05f58c  jal         func_17D630
label_102950:
    if (ctx->pc == 0x102950u) {
        ctx->pc = 0x102950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10294Cu;
        // 0x102950: 0xac500030  sw          $s0, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102954u;
        goto label_102954;
    }
    ctx->pc = 0x10294Cu;
    SET_GPR_U32(ctx, 31, 0x102954u);
    ctx->pc = 0x102950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10294Cu;
    // 0x102950: 0xac500030  sw          $s0, 0x30($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D630u, 0x10294Cu, 0x102954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102954u;
label_102954:
    // 0x102954: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x102954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
label_102958:
    // 0x102958: 0x2442e140  addiu       $v0, $v0, -0x1EC0
    ctx->pc = 0x102958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959424));
label_10295c:
    // 0x10295c: 0x40f809  jalr        $v0
label_102960:
    if (ctx->pc == 0x102960u) {
        ctx->pc = 0x102960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10295Cu;
        // 0x102960: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102964u;
        goto label_102964;
    }
    ctx->pc = 0x10295Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x102964u);
        ctx->pc = 0x102960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10295Cu;
        // 0x102960: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10295Cu, 0x102964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102964u;
label_102964:
    // 0x102964: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x102964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102968:
    // 0x102968: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x102968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_10296c:
    // 0x10296c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x10296cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_102970:
    // 0x102970: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x102970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102974:
    // 0x102974: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x102974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_102978:
    // 0x102978: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x102978u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10297c:
    // 0x10297c: 0x8c842c1c  lw          $a0, 0x2C1C($a0)
    ctx->pc = 0x10297cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11292)));
label_102980:
    // 0x102980: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x102980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_102984:
    // 0x102984: 0x10000053  b           . + 4 + (0x53 << 2)
label_102988:
    if (ctx->pc == 0x102988u) {
        ctx->pc = 0x102988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102984u;
        // 0x102988: 0xa462000a  sh          $v0, 0xA($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10298Cu;
        goto label_10298c;
    }
    ctx->pc = 0x102984u;
    {
        const bool branch_taken_0x102984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102984u;
        // 0x102988: 0xa462000a  sh          $v0, 0xA($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102984) {
            ctx->pc = 0x102AD4u;
            goto label_102ad4;
        }
    }
    ctx->pc = 0x10298Cu;
label_10298c:
    // 0x10298c: 0x0  nop
    ctx->pc = 0x10298cu;
    // NOP
label_102990:
    // 0x102990: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x102990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102994:
    // 0x102994: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x102994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_102998:
    // 0x102998: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x102998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_10299c:
    // 0x10299c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10299cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1029a0:
    // 0x1029a0: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1029a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1029a4:
    // 0x1029a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1029a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1029a8:
    // 0x1029a8: 0x8c632c1c  lw          $v1, 0x2C1C($v1)
    ctx->pc = 0x1029a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
label_1029ac:
    // 0x1029ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1029acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1029b0:
    // 0x1029b0: 0x8c540034  lw          $s4, 0x34($v0)
    ctx->pc = 0x1029b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1029b4:
    // 0x1029b4: 0xc06cf0c  jal         func_1B3C30
label_1029b8:
    if (ctx->pc == 0x1029B8u) {
        ctx->pc = 0x1029B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1029B4u;
        // 0x1029b8: 0x24a5e098  addiu       $a1, $a1, -0x1F68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1029BCu;
        goto label_1029bc;
    }
    ctx->pc = 0x1029B4u;
    SET_GPR_U32(ctx, 31, 0x1029BCu);
    ctx->pc = 0x1029B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1029B4u;
    // 0x1029b8: 0x24a5e098  addiu       $a1, $a1, -0x1F68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1029B4u, 0x1029BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1029BCu;
label_1029bc:
    // 0x1029bc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1029c0:
    if (ctx->pc == 0x1029C0u) {
        ctx->pc = 0x1029C4u;
        goto label_1029c4;
    }
    ctx->pc = 0x1029BCu;
    {
        const bool branch_taken_0x1029bc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1029bc) {
            ctx->pc = 0x1029CCu;
            goto label_1029cc;
        }
    }
    ctx->pc = 0x1029C4u;
label_1029c4:
    // 0x1029c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1029c8:
    if (ctx->pc == 0x1029C8u) {
        ctx->pc = 0x1029CCu;
        goto label_1029cc;
    }
    ctx->pc = 0x1029C4u;
    {
        const bool branch_taken_0x1029c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1029c4) {
            ctx->pc = 0x1029D0u;
            goto label_1029d0;
        }
    }
    ctx->pc = 0x1029CCu;
label_1029cc:
    // 0x1029cc: 0x0  nop
    ctx->pc = 0x1029ccu;
    // NOP
label_1029d0:
    // 0x1029d0: 0x8f838388  lw          $v1, -0x7C78($gp)
    ctx->pc = 0x1029d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1029d4:
    // 0x1029d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1029d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1029d8:
    // 0x1029d8: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x1029d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1029dc:
    // 0x1029dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1029dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1029e0:
    // 0x1029e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1029e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1029e4:
    // 0x1029e4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1029e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1029e8:
    // 0x1029e8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1029e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1029ec:
    // 0x1029ec: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1029ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1029f0:
    // 0x1029f0: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x1029f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1029f4:
    // 0x1029f4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1029f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1029f8:
    // 0x1029f8: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x1029f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1029fc:
    // 0x1029fc: 0xc05719c  jal         func_15C670
label_102a00:
    if (ctx->pc == 0x102A00u) {
        ctx->pc = 0x102A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1029FCu;
        // 0x102a00: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102A04u;
        goto label_102a04;
    }
    ctx->pc = 0x1029FCu;
    SET_GPR_U32(ctx, 31, 0x102A04u);
    ctx->pc = 0x102A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1029FCu;
    // 0x102a00: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C670u, 0x1029FCu, 0x102A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A04u;
label_102a04:
    // 0x102a04: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x102a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102a08:
    // 0x102a08: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x102a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_102a0c:
    // 0x102a0c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x102a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_102a10:
    // 0x102a10: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x102a10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_102a14:
    // 0x102a14: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x102a14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_102a18:
    // 0x102a18: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x102a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_102a1c:
    // 0x102a1c: 0xac622cd8  sw          $v0, 0x2CD8($v1)
    ctx->pc = 0x102a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11480), GPR_U32(ctx, 2));
label_102a20:
    // 0x102a20: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x102a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102a24:
    // 0x102a24: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x102a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_102a28:
    // 0x102a28: 0x8c632c1c  lw          $v1, 0x2C1C($v1)
    ctx->pc = 0x102a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
label_102a2c:
    // 0x102a2c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x102a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_102a30:
    // 0x102a30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x102a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_102a34:
    // 0x102a34: 0xc05f58c  jal         func_17D630
label_102a38:
    if (ctx->pc == 0x102A38u) {
        ctx->pc = 0x102A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A34u;
        // 0x102a38: 0xac4301d8  sw          $v1, 0x1D8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 472), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102A3Cu;
        goto label_102a3c;
    }
    ctx->pc = 0x102A34u;
    SET_GPR_U32(ctx, 31, 0x102A3Cu);
    ctx->pc = 0x102A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102A34u;
    // 0x102a38: 0xac4301d8  sw          $v1, 0x1D8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 472), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D630u, 0x102A34u, 0x102A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A3Cu;
label_102a3c:
    // 0x102a3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x102a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_102a40:
    // 0x102a40: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x102a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
label_102a44:
    // 0x102a44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x102a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_102a48:
    // 0x102a48: 0x2463e160  addiu       $v1, $v1, -0x1EA0
    ctx->pc = 0x102a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959456));
label_102a4c:
    // 0x102a4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x102a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102a50:
    // 0x102a50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x102a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_102a54:
    // 0x102a54: 0x60f809  jalr        $v1
label_102a58:
    if (ctx->pc == 0x102A58u) {
        ctx->pc = 0x102A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A54u;
        // 0x102a58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102A5Cu;
        goto label_102a5c;
    }
    ctx->pc = 0x102A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x102A5Cu);
        ctx->pc = 0x102A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A54u;
        // 0x102a58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102A54u, 0x102A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102A5Cu;
label_102a5c:
    // 0x102a5c: 0xc05f58c  jal         func_17D630
label_102a60:
    if (ctx->pc == 0x102A60u) {
        ctx->pc = 0x102A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A5Cu;
        // 0x102a60: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102A64u;
        goto label_102a64;
    }
    ctx->pc = 0x102A5Cu;
    SET_GPR_U32(ctx, 31, 0x102A64u);
    ctx->pc = 0x102A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102A5Cu;
    // 0x102a60: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D630u, 0x102A5Cu, 0x102A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A64u;
label_102a64:
    // 0x102a64: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x102a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
label_102a68:
    // 0x102a68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x102a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102a6c:
    // 0x102a6c: 0x2442e1a0  addiu       $v0, $v0, -0x1E60
    ctx->pc = 0x102a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959520));
label_102a70:
    // 0x102a70: 0x40f809  jalr        $v0
label_102a74:
    if (ctx->pc == 0x102A74u) {
        ctx->pc = 0x102A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A70u;
        // 0x102a74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102A78u;
        goto label_102a78;
    }
    ctx->pc = 0x102A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x102A78u);
        ctx->pc = 0x102A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A70u;
        // 0x102a74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102A70u, 0x102A78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102A78u;
label_102a78:
    // 0x102a78: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x102a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102a7c:
    // 0x102a7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x102a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102a80:
    // 0x102a80: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x102a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_102a84:
    // 0x102a84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_102a88:
    // 0x102a88: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x102a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_102a8c:
    // 0x102a8c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x102a8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_102a90:
    // 0x102a90: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x102a90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_102a94:
    // 0x102a94: 0x320f809  jalr        $t9
label_102a98:
    if (ctx->pc == 0x102A98u) {
        ctx->pc = 0x102A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A94u;
        // 0x102a98: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102A9Cu;
        goto label_102a9c;
    }
    ctx->pc = 0x102A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x102A9Cu);
        ctx->pc = 0x102A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A94u;
        // 0x102a98: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102A94u, 0x102A9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102A9Cu;
label_102a9c:
    // 0x102a9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x102a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102aa0:
    // 0x102aa0: 0xc05f860  jal         func_17E180
label_102aa4:
    if (ctx->pc == 0x102AA4u) {
        ctx->pc = 0x102AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AA0u;
        // 0x102aa4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102AA8u;
        goto label_102aa8;
    }
    ctx->pc = 0x102AA0u;
    SET_GPR_U32(ctx, 31, 0x102AA8u);
    ctx->pc = 0x102AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102AA0u;
    // 0x102aa4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E180u, 0x102AA0u, 0x102AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102AA8u;
label_102aa8:
    // 0x102aa8: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x102aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102aac:
    // 0x102aac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x102aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102ab0:
    // 0x102ab0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x102ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_102ab4:
    // 0x102ab4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_102ab8:
    // 0x102ab8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x102ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_102abc:
    // 0x102abc: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x102abcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_102ac0:
    // 0x102ac0: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x102ac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_102ac4:
    // 0x102ac4: 0x320f809  jalr        $t9
label_102ac8:
    if (ctx->pc == 0x102AC8u) {
        ctx->pc = 0x102ACCu;
        goto label_102acc;
    }
    ctx->pc = 0x102AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x102ACCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102AC4u, 0x102ACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102ACCu;
label_102acc:
    // 0x102acc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x102accu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_102ad0:
    // 0x102ad0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x102ad0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_102ad4:
    // 0x102ad4: 0x0  nop
    ctx->pc = 0x102ad4u;
    // NOP
label_102ad8:
    // 0x102ad8: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x102ad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_102adc:
    // 0x102adc: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
label_102ae0:
    if (ctx->pc == 0x102AE0u) {
        ctx->pc = 0x102AE4u;
        goto label_102ae4;
    }
    ctx->pc = 0x102ADCu;
    {
        const bool branch_taken_0x102adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102adc) {
            ctx->pc = 0x10298Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10298c;
        }
    }
    ctx->pc = 0x102AE4u;
label_102ae4:
    // 0x102ae4: 0xc05f58c  jal         func_17D630
label_102ae8:
    if (ctx->pc == 0x102AE8u) {
        ctx->pc = 0x102AECu;
        goto label_102aec;
    }
    ctx->pc = 0x102AE4u;
    SET_GPR_U32(ctx, 31, 0x102AECu);
    ctx->pc = 0x17D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D630u, 0x102AE4u, 0x102AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102AECu;
label_102aec:
    // 0x102aec: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x102aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
label_102af0:
    // 0x102af0: 0x2442e140  addiu       $v0, $v0, -0x1EC0
    ctx->pc = 0x102af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959424));
label_102af4:
    // 0x102af4: 0x40f809  jalr        $v0
label_102af8:
    if (ctx->pc == 0x102AF8u) {
        ctx->pc = 0x102AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AF4u;
        // 0x102af8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102AFCu;
        goto label_102afc;
    }
    ctx->pc = 0x102AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x102AFCu);
        ctx->pc = 0x102AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AF4u;
        // 0x102af8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102AF4u, 0x102AFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102AFCu;
label_102afc:
    // 0x102afc: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x102afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102b00:
    // 0x102b00: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x102b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_102b04:
    // 0x102b04: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x102b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_102b08:
    // 0x102b08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x102b08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102b0c:
    // 0x102b0c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x102b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_102b10:
    // 0x102b10: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x102b10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102b14:
    // 0x102b14: 0x8c842c1c  lw          $a0, 0x2C1C($a0)
    ctx->pc = 0x102b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11292)));
label_102b18:
    // 0x102b18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x102b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_102b1c:
    // 0x102b1c: 0x10000053  b           . + 4 + (0x53 << 2)
label_102b20:
    if (ctx->pc == 0x102B20u) {
        ctx->pc = 0x102B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B1Cu;
        // 0x102b20: 0xa462000c  sh          $v0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102B24u;
        goto label_102b24;
    }
    ctx->pc = 0x102B1Cu;
    {
        const bool branch_taken_0x102b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B1Cu;
        // 0x102b20: 0xa462000c  sh          $v0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b1c) {
            ctx->pc = 0x102C6Cu;
            goto label_102c6c;
        }
    }
    ctx->pc = 0x102B24u;
label_102b24:
    // 0x102b24: 0x0  nop
    ctx->pc = 0x102b24u;
    // NOP
label_102b28:
    // 0x102b28: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x102b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102b2c:
    // 0x102b2c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x102b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_102b30:
    // 0x102b30: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x102b30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_102b34:
    // 0x102b34: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x102b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_102b38:
    // 0x102b38: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x102b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_102b3c:
    // 0x102b3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_102b40:
    // 0x102b40: 0x8c632c1c  lw          $v1, 0x2C1C($v1)
    ctx->pc = 0x102b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
label_102b44:
    // 0x102b44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_102b48:
    // 0x102b48: 0x8c540038  lw          $s4, 0x38($v0)
    ctx->pc = 0x102b48u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_102b4c:
    // 0x102b4c: 0xc06cf0c  jal         func_1B3C30
label_102b50:
    if (ctx->pc == 0x102B50u) {
        ctx->pc = 0x102B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B4Cu;
        // 0x102b50: 0x24a5e0a8  addiu       $a1, $a1, -0x1F58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102B54u;
        goto label_102b54;
    }
    ctx->pc = 0x102B4Cu;
    SET_GPR_U32(ctx, 31, 0x102B54u);
    ctx->pc = 0x102B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B4Cu;
    // 0x102b50: 0x24a5e0a8  addiu       $a1, $a1, -0x1F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x102B4Cu, 0x102B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B54u;
label_102b54:
    // 0x102b54: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_102b58:
    if (ctx->pc == 0x102B58u) {
        ctx->pc = 0x102B5Cu;
        goto label_102b5c;
    }
    ctx->pc = 0x102B54u;
    {
        const bool branch_taken_0x102b54 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x102b54) {
            ctx->pc = 0x102B64u;
            goto label_102b64;
        }
    }
    ctx->pc = 0x102B5Cu;
label_102b5c:
    // 0x102b5c: 0x10000002  b           . + 4 + (0x2 << 2)
label_102b60:
    if (ctx->pc == 0x102B60u) {
        ctx->pc = 0x102B64u;
        goto label_102b64;
    }
    ctx->pc = 0x102B5Cu;
    {
        const bool branch_taken_0x102b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x102b5c) {
            ctx->pc = 0x102B68u;
            goto label_102b68;
        }
    }
    ctx->pc = 0x102B64u;
label_102b64:
    // 0x102b64: 0x0  nop
    ctx->pc = 0x102b64u;
    // NOP
label_102b68:
    // 0x102b68: 0x8f838388  lw          $v1, -0x7C78($gp)
    ctx->pc = 0x102b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_102b6c:
    // 0x102b6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_102b70:
    // 0x102b70: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x102b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102b74:
    // 0x102b74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_102b78:
    // 0x102b78: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x102b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_102b7c:
    // 0x102b7c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x102b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_102b80:
    // 0x102b80: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x102b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_102b84:
    // 0x102b84: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x102b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_102b88:
    // 0x102b88: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x102b88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_102b8c:
    // 0x102b8c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x102b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_102b90:
    // 0x102b90: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x102b90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_102b94:
    // 0x102b94: 0xc05719c  jal         func_15C670
label_102b98:
    if (ctx->pc == 0x102B98u) {
        ctx->pc = 0x102B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B94u;
        // 0x102b98: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102B9Cu;
        goto label_102b9c;
    }
    ctx->pc = 0x102B94u;
    SET_GPR_U32(ctx, 31, 0x102B9Cu);
    ctx->pc = 0x102B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B94u;
    // 0x102b98: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C670u, 0x102B94u, 0x102B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B9Cu;
label_102b9c:
    // 0x102b9c: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x102b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102ba0:
    // 0x102ba0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x102ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_102ba4:
    // 0x102ba4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x102ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_102ba8:
    // 0x102ba8: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x102ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_102bac:
    // 0x102bac: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x102bacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_102bb0:
    // 0x102bb0: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x102bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_102bb4:
    // 0x102bb4: 0xac622cd8  sw          $v0, 0x2CD8($v1)
    ctx->pc = 0x102bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11480), GPR_U32(ctx, 2));
label_102bb8:
    // 0x102bb8: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x102bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102bbc:
    // 0x102bbc: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x102bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_102bc0:
    // 0x102bc0: 0x8c632c1c  lw          $v1, 0x2C1C($v1)
    ctx->pc = 0x102bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
label_102bc4:
    // 0x102bc4: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x102bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_102bc8:
    // 0x102bc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x102bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_102bcc:
    // 0x102bcc: 0xc05f58c  jal         func_17D630
label_102bd0:
    if (ctx->pc == 0x102BD0u) {
        ctx->pc = 0x102BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BCCu;
        // 0x102bd0: 0xac4301d8  sw          $v1, 0x1D8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 472), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102BD4u;
        goto label_102bd4;
    }
    ctx->pc = 0x102BCCu;
    SET_GPR_U32(ctx, 31, 0x102BD4u);
    ctx->pc = 0x102BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102BCCu;
    // 0x102bd0: 0xac4301d8  sw          $v1, 0x1D8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 472), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D630u, 0x102BCCu, 0x102BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BD4u;
label_102bd4:
    // 0x102bd4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x102bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_102bd8:
    // 0x102bd8: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x102bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
label_102bdc:
    // 0x102bdc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x102bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_102be0:
    // 0x102be0: 0x2463e160  addiu       $v1, $v1, -0x1EA0
    ctx->pc = 0x102be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959456));
label_102be4:
    // 0x102be4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x102be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_102be8:
    // 0x102be8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x102be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_102bec:
    // 0x102bec: 0x60f809  jalr        $v1
label_102bf0:
    if (ctx->pc == 0x102BF0u) {
        ctx->pc = 0x102BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BECu;
        // 0x102bf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102BF4u;
        goto label_102bf4;
    }
    ctx->pc = 0x102BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x102BF4u);
        ctx->pc = 0x102BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BECu;
        // 0x102bf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102BECu, 0x102BF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102BF4u;
label_102bf4:
    // 0x102bf4: 0xc05f58c  jal         func_17D630
label_102bf8:
    if (ctx->pc == 0x102BF8u) {
        ctx->pc = 0x102BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BF4u;
        // 0x102bf8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102BFCu;
        goto label_102bfc;
    }
    ctx->pc = 0x102BF4u;
    SET_GPR_U32(ctx, 31, 0x102BFCu);
    ctx->pc = 0x102BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102BF4u;
    // 0x102bf8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D630u, 0x102BF4u, 0x102BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BFCu;
label_102bfc:
    // 0x102bfc: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x102bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
label_102c00:
    // 0x102c00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x102c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_102c04:
    // 0x102c04: 0x2442e1a0  addiu       $v0, $v0, -0x1E60
    ctx->pc = 0x102c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959520));
label_102c08:
    // 0x102c08: 0x40f809  jalr        $v0
label_102c0c:
    if (ctx->pc == 0x102C0Cu) {
        ctx->pc = 0x102C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C08u;
        // 0x102c0c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C10u;
        goto label_102c10;
    }
    ctx->pc = 0x102C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x102C10u);
        ctx->pc = 0x102C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C08u;
        // 0x102c0c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102C08u, 0x102C10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102C10u;
label_102c10:
    // 0x102c10: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x102c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102c14:
    // 0x102c14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x102c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102c18:
    // 0x102c18: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x102c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_102c1c:
    // 0x102c1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_102c20:
    // 0x102c20: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x102c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_102c24:
    // 0x102c24: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x102c24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_102c28:
    // 0x102c28: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x102c28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_102c2c:
    // 0x102c2c: 0x320f809  jalr        $t9
label_102c30:
    if (ctx->pc == 0x102C30u) {
        ctx->pc = 0x102C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C2Cu;
        // 0x102c30: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C34u;
        goto label_102c34;
    }
    ctx->pc = 0x102C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x102C34u);
        ctx->pc = 0x102C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C2Cu;
        // 0x102c30: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102C2Cu, 0x102C34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102C34u;
label_102c34:
    // 0x102c34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x102c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_102c38:
    // 0x102c38: 0xc05f860  jal         func_17E180
label_102c3c:
    if (ctx->pc == 0x102C3Cu) {
        ctx->pc = 0x102C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C38u;
        // 0x102c3c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C40u;
        goto label_102c40;
    }
    ctx->pc = 0x102C38u;
    SET_GPR_U32(ctx, 31, 0x102C40u);
    ctx->pc = 0x102C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102C38u;
    // 0x102c3c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E180u, 0x102C38u, 0x102C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102C40u;
label_102c40:
    // 0x102c40: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x102c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102c44:
    // 0x102c44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x102c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102c48:
    // 0x102c48: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x102c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_102c4c:
    // 0x102c4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_102c50:
    // 0x102c50: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x102c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_102c54:
    // 0x102c54: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x102c54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_102c58:
    // 0x102c58: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x102c58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_102c5c:
    // 0x102c5c: 0x320f809  jalr        $t9
label_102c60:
    if (ctx->pc == 0x102C60u) {
        ctx->pc = 0x102C64u;
        goto label_102c64;
    }
    ctx->pc = 0x102C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x102C64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102C5Cu, 0x102C64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102C64u;
label_102c64:
    // 0x102c64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x102c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_102c68:
    // 0x102c68: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x102c68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_102c6c:
    // 0x102c6c: 0x0  nop
    ctx->pc = 0x102c6cu;
    // NOP
label_102c70:
    // 0x102c70: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x102c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_102c74:
    // 0x102c74: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
label_102c78:
    if (ctx->pc == 0x102C78u) {
        ctx->pc = 0x102C7Cu;
        goto label_102c7c;
    }
    ctx->pc = 0x102C74u;
    {
        const bool branch_taken_0x102c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102c74) {
            ctx->pc = 0x102B24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102b24;
        }
    }
    ctx->pc = 0x102C7Cu;
label_102c7c:
    // 0x102c7c: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x102c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102c80:
    // 0x102c80: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x102c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_102c84:
    // 0x102c84: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x102c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_102c88:
    // 0x102c88: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x102c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_102c8c:
    // 0x102c8c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_102c90:
    // 0x102c90: 0x8c632c1c  lw          $v1, 0x2C1C($v1)
    ctx->pc = 0x102c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
label_102c94:
    // 0x102c94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_102c98:
    // 0x102c98: 0x84530004  lh          $s3, 0x4($v0)
    ctx->pc = 0x102c98u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_102c9c:
    // 0x102c9c: 0x84520002  lh          $s2, 0x2($v0)
    ctx->pc = 0x102c9cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_102ca0:
    // 0x102ca0: 0x84540000  lh          $s4, 0x0($v0)
    ctx->pc = 0x102ca0u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_102ca4:
    // 0x102ca4: 0xc07efaa  jal         func_1FBEA8
label_102ca8:
    if (ctx->pc == 0x102CA8u) {
        ctx->pc = 0x102CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CA4u;
        // 0x102ca8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102CACu;
        goto label_102cac;
    }
    ctx->pc = 0x102CA4u;
    SET_GPR_U32(ctx, 31, 0x102CACu);
    ctx->pc = 0x102CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102CA4u;
    // 0x102ca8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBEA8u, 0x102CA4u, 0x102CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102CACu;
label_102cac:
    // 0x102cac: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x102cacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_102cb0:
    // 0x102cb0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x102cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_102cb4:
    // 0x102cb4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x102cb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_102cb8:
    // 0x102cb8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x102cb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_102cbc:
    // 0x102cbc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x102cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_102cc0:
    // 0x102cc0: 0xc0805c8  jal         func_201720
label_102cc4:
    if (ctx->pc == 0x102CC4u) {
        ctx->pc = 0x102CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CC0u;
        // 0x102cc4: 0x24a5e070  addiu       $a1, $a1, -0x1F90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102CC8u;
        goto label_102cc8;
    }
    ctx->pc = 0x102CC0u;
    SET_GPR_U32(ctx, 31, 0x102CC8u);
    ctx->pc = 0x102CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102CC0u;
    // 0x102cc4: 0x24a5e070  addiu       $a1, $a1, -0x1F90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x102CC0u, 0x102CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102CC8u;
label_102cc8:
    // 0x102cc8: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x102cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_102ccc:
    // 0x102ccc: 0xc06cf0c  jal         func_1B3C30
label_102cd0:
    if (ctx->pc == 0x102CD0u) {
        ctx->pc = 0x102CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CCCu;
        // 0x102cd0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102CD4u;
        goto label_102cd4;
    }
    ctx->pc = 0x102CCCu;
    SET_GPR_U32(ctx, 31, 0x102CD4u);
    ctx->pc = 0x102CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102CCCu;
    // 0x102cd0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x102CCCu, 0x102CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102CD4u;
label_102cd4:
    // 0x102cd4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_102cd8:
    if (ctx->pc == 0x102CD8u) {
        ctx->pc = 0x102CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CD4u;
        // 0x102cd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102CDCu;
        goto label_102cdc;
    }
    ctx->pc = 0x102CD4u;
    {
        const bool branch_taken_0x102cd4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x102CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CD4u;
        // 0x102cd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102cd4) {
            ctx->pc = 0x102CE4u;
            goto label_102ce4;
        }
    }
    ctx->pc = 0x102CDCu;
label_102cdc:
    // 0x102cdc: 0x1000000c  b           . + 4 + (0xC << 2)
label_102ce0:
    if (ctx->pc == 0x102CE0u) {
        ctx->pc = 0x102CE4u;
        goto label_102ce4;
    }
    ctx->pc = 0x102CDCu;
    {
        const bool branch_taken_0x102cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x102cdc) {
            ctx->pc = 0x102D10u;
            goto label_102d10;
        }
    }
    ctx->pc = 0x102CE4u;
label_102ce4:
    // 0x102ce4: 0x0  nop
    ctx->pc = 0x102ce4u;
    // NOP
label_102ce8:
    // 0x102ce8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_102cec:
    if (ctx->pc == 0x102CECu) {
        ctx->pc = 0x102CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CE8u;
        // 0x102cec: 0x8f838388  lw          $v1, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102CF0u;
        goto label_102cf0;
    }
    ctx->pc = 0x102CE8u;
    {
        const bool branch_taken_0x102ce8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x102CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CE8u;
        // 0x102cec: 0x8f838388  lw          $v1, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ce8) {
            ctx->pc = 0x102CF8u;
            goto label_102cf8;
        }
    }
    ctx->pc = 0x102CF0u;
label_102cf0:
    // 0x102cf0: 0x10000007  b           . + 4 + (0x7 << 2)
label_102cf4:
    if (ctx->pc == 0x102CF4u) {
        ctx->pc = 0x102CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CF0u;
        // 0x102cf4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102CF8u;
        goto label_102cf8;
    }
    ctx->pc = 0x102CF0u;
    {
        const bool branch_taken_0x102cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CF0u;
        // 0x102cf4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102cf0) {
            ctx->pc = 0x102D10u;
            goto label_102d10;
        }
    }
    ctx->pc = 0x102CF8u;
label_102cf8:
    // 0x102cf8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x102cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_102cfc:
    // 0x102cfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_102d00:
    // 0x102d00: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_102d04:
    // 0x102d04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x102d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_102d08:
    // 0x102d08: 0x84450008  lh          $a1, 0x8($v0)
    ctx->pc = 0x102d08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_102d0c:
    // 0x102d0c: 0x0  nop
    ctx->pc = 0x102d0cu;
    // NOP
label_102d10:
    // 0x102d10: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x102d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102d14:
    // 0x102d14: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x102d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_102d18:
    // 0x102d18: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x102d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_102d1c:
    // 0x102d1c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x102d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_102d20:
    // 0x102d20: 0x8c822c1c  lw          $v0, 0x2C1C($a0)
    ctx->pc = 0x102d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11292)));
label_102d24:
    // 0x102d24: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x102d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_102d28:
    // 0x102d28: 0xa4450008  sh          $a1, 0x8($v0)
    ctx->pc = 0x102d28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 5));
label_102d2c:
    // 0x102d2c: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x102d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102d30:
    // 0x102d30: 0x8c422c1c  lw          $v0, 0x2C1C($v0)
    ctx->pc = 0x102d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11292)));
label_102d34:
    // 0x102d34: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x102d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_102d38:
    // 0x102d38: 0x845e0008  lh          $fp, 0x8($v0)
    ctx->pc = 0x102d38u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_102d3c:
    // 0x102d3c: 0x1000016e  b           . + 4 + (0x16E << 2)
label_102d40:
    if (ctx->pc == 0x102D40u) {
        ctx->pc = 0x102D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D3Cu;
        // 0x102d40: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102D44u;
        goto label_102d44;
    }
    ctx->pc = 0x102D3Cu;
    {
        const bool branch_taken_0x102d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D3Cu;
        // 0x102d40: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d3c) {
            ctx->pc = 0x1032F8u;
            goto label_1032f8;
        }
    }
    ctx->pc = 0x102D44u;
label_102d44:
    // 0x102d44: 0x0  nop
    ctx->pc = 0x102d44u;
    // NOP
label_102d48:
    // 0x102d48: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x102d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102d4c:
    // 0x102d4c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x102d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_102d50:
    // 0x102d50: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x102d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_102d54:
    // 0x102d54: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x102d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_102d58:
    // 0x102d58: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_102d5c:
    // 0x102d5c: 0x8c632c1c  lw          $v1, 0x2C1C($v1)
    ctx->pc = 0x102d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
label_102d60:
    // 0x102d60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_102d64:
    // 0x102d64: 0x84540004  lh          $s4, 0x4($v0)
    ctx->pc = 0x102d64u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_102d68:
    // 0x102d68: 0x84530002  lh          $s3, 0x2($v0)
    ctx->pc = 0x102d68u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_102d6c:
    // 0x102d6c: 0x84550000  lh          $s5, 0x0($v0)
    ctx->pc = 0x102d6cu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_102d70:
    // 0x102d70: 0xc07efaa  jal         func_1FBEA8
label_102d74:
    if (ctx->pc == 0x102D74u) {
        ctx->pc = 0x102D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D70u;
        // 0x102d74: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102D78u;
        goto label_102d78;
    }
    ctx->pc = 0x102D70u;
    SET_GPR_U32(ctx, 31, 0x102D78u);
    ctx->pc = 0x102D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102D70u;
    // 0x102d74: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBEA8u, 0x102D70u, 0x102D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102D78u;
label_102d78:
    // 0x102d78: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x102d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_102d7c:
    // 0x102d7c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x102d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_102d80:
    // 0x102d80: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x102d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_102d84:
    // 0x102d84: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x102d84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_102d88:
    // 0x102d88: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x102d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_102d8c:
    // 0x102d8c: 0xc0805c8  jal         func_201720
label_102d90:
    if (ctx->pc == 0x102D90u) {
        ctx->pc = 0x102D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D8Cu;
        // 0x102d90: 0x24a5e070  addiu       $a1, $a1, -0x1F90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102D94u;
        goto label_102d94;
    }
    ctx->pc = 0x102D8Cu;
    SET_GPR_U32(ctx, 31, 0x102D94u);
    ctx->pc = 0x102D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102D8Cu;
    // 0x102d90: 0x24a5e070  addiu       $a1, $a1, -0x1F90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x102D8Cu, 0x102D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102D94u;
label_102d94:
    // 0x102d94: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x102d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_102d98:
    // 0x102d98: 0xc06cf0c  jal         func_1B3C30
label_102d9c:
    if (ctx->pc == 0x102D9Cu) {
        ctx->pc = 0x102D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D98u;
        // 0x102d9c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102DA0u;
        goto label_102da0;
    }
    ctx->pc = 0x102D98u;
    SET_GPR_U32(ctx, 31, 0x102DA0u);
    ctx->pc = 0x102D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102D98u;
    // 0x102d9c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x102D98u, 0x102DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102DA0u;
label_102da0:
    // 0x102da0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_102da4:
    if (ctx->pc == 0x102DA4u) {
        ctx->pc = 0x102DA8u;
        goto label_102da8;
    }
    ctx->pc = 0x102DA0u;
    {
        const bool branch_taken_0x102da0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x102da0) {
            ctx->pc = 0x102DB0u;
            goto label_102db0;
        }
    }
    ctx->pc = 0x102DA8u;
label_102da8:
    // 0x102da8: 0x10000001  b           . + 4 + (0x1 << 2)
label_102dac:
    if (ctx->pc == 0x102DACu) {
        ctx->pc = 0x102DB0u;
        goto label_102db0;
    }
    ctx->pc = 0x102DA8u;
    {
        const bool branch_taken_0x102da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x102da8) {
            ctx->pc = 0x102DB0u;
            goto label_102db0;
        }
    }
    ctx->pc = 0x102DB0u;
label_102db0:
    // 0x102db0: 0x8f838388  lw          $v1, -0x7C78($gp)
    ctx->pc = 0x102db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_102db4:
    // 0x102db4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_102db8:
    // 0x102db8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x102db8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_102dbc:
    // 0x102dbc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_102dc0:
    // 0x102dc0: 0x24a5e0b8  addiu       $a1, $a1, -0x1F48
    ctx->pc = 0x102dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959288));
label_102dc4:
    // 0x102dc4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x102dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_102dc8:
    // 0x102dc8: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x102dc8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_102dcc:
    // 0x102dcc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x102dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_102dd0:
    // 0x102dd0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x102dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_102dd4:
    // 0x102dd4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x102dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_102dd8:
    // 0x102dd8: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x102dd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_102ddc:
    // 0x102ddc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x102ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_102de0:
    // 0x102de0: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x102de0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_102de4:
    // 0x102de4: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x102de4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_102de8:
    // 0x102de8: 0xc080796  jal         func_201E58
label_102dec:
    if (ctx->pc == 0x102DECu) {
        ctx->pc = 0x102DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DE8u;
        // 0x102dec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102DF0u;
        goto label_102df0;
    }
    ctx->pc = 0x102DE8u;
    SET_GPR_U32(ctx, 31, 0x102DF0u);
    ctx->pc = 0x102DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102DE8u;
    // 0x102dec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E58u, 0x102DE8u, 0x102DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102DF0u;
label_102df0:
    // 0x102df0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_102df4:
    if (ctx->pc == 0x102DF4u) {
        ctx->pc = 0x102DF8u;
        goto label_102df8;
    }
    ctx->pc = 0x102DF0u;
    {
        const bool branch_taken_0x102df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102df0) {
            ctx->pc = 0x102E40u;
            goto label_102e40;
        }
    }
    ctx->pc = 0x102DF8u;
label_102df8:
    // 0x102df8: 0x86850020  lh          $a1, 0x20($s4)
    ctx->pc = 0x102df8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
label_102dfc:
    // 0x102dfc: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x102dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102e00:
    // 0x102e00: 0xc05719c  jal         func_15C670
label_102e04:
    if (ctx->pc == 0x102E04u) {
        ctx->pc = 0x102E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E00u;
        // 0x102e04: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E08u;
        goto label_102e08;
    }
    ctx->pc = 0x102E00u;
    SET_GPR_U32(ctx, 31, 0x102E08u);
    ctx->pc = 0x102E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102E00u;
    // 0x102e04: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C670u, 0x102E00u, 0x102E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102E08u;
label_102e08:
    // 0x102e08: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x102e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102e0c:
    // 0x102e0c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x102e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_102e10:
    // 0x102e10: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x102e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_102e14:
    // 0x102e14: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x102e14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_102e18:
    // 0x102e18: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x102e18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_102e1c:
    // 0x102e1c: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x102e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_102e20:
    // 0x102e20: 0xac622cd8  sw          $v0, 0x2CD8($v1)
    ctx->pc = 0x102e20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11480), GPR_U32(ctx, 2));
label_102e24:
    // 0x102e24: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x102e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102e28:
    // 0x102e28: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x102e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_102e2c:
    // 0x102e2c: 0x8c632c1c  lw          $v1, 0x2C1C($v1)
    ctx->pc = 0x102e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
label_102e30:
    // 0x102e30: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x102e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_102e34:
    // 0x102e34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x102e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_102e38:
    // 0x102e38: 0x1000012c  b           . + 4 + (0x12C << 2)
label_102e3c:
    if (ctx->pc == 0x102E3Cu) {
        ctx->pc = 0x102E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E38u;
        // 0x102e3c: 0xac4301d8  sw          $v1, 0x1D8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 472), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E40u;
        goto label_102e40;
    }
    ctx->pc = 0x102E38u;
    {
        const bool branch_taken_0x102e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E38u;
        // 0x102e3c: 0xac4301d8  sw          $v1, 0x1D8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 472), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e38) {
            ctx->pc = 0x1032ECu;
            goto label_1032ec;
        }
    }
    ctx->pc = 0x102E40u;
label_102e40:
    // 0x102e40: 0x86850020  lh          $a1, 0x20($s4)
    ctx->pc = 0x102e40u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
label_102e44:
    // 0x102e44: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x102e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102e48:
    // 0x102e48: 0xc05719c  jal         func_15C670
label_102e4c:
    if (ctx->pc == 0x102E4Cu) {
        ctx->pc = 0x102E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E48u;
        // 0x102e4c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E50u;
        goto label_102e50;
    }
    ctx->pc = 0x102E48u;
    SET_GPR_U32(ctx, 31, 0x102E50u);
    ctx->pc = 0x102E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102E48u;
    // 0x102e4c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C670u, 0x102E48u, 0x102E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102E50u;
label_102e50:
    // 0x102e50: 0x8f878218  lw          $a3, -0x7DE8($gp)
    ctx->pc = 0x102e50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102e54:
    // 0x102e54: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x102e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_102e58:
    // 0x102e58: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x102e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_102e5c:
    // 0x102e5c: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x102e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_102e60:
    // 0x102e60: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x102e60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_102e64:
    // 0x102e64: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x102e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_102e68:
    // 0x102e68: 0xac622cd8  sw          $v0, 0x2CD8($v1)
    ctx->pc = 0x102e68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11480), GPR_U32(ctx, 2));
label_102e6c:
    // 0x102e6c: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x102e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102e70:
    // 0x102e70: 0x8c432c1c  lw          $v1, 0x2C1C($v0)
    ctx->pc = 0x102e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11292)));
label_102e74:
    // 0x102e74: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x102e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_102e78:
    // 0x102e78: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x102e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_102e7c:
    // 0x102e7c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x102e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_102e80:
    // 0x102e80: 0xac4301d8  sw          $v1, 0x1D8($v0)
    ctx->pc = 0x102e80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 472), GPR_U32(ctx, 3));
label_102e84:
    // 0x102e84: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x102e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102e88:
    // 0x102e88: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x102e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_102e8c:
    // 0x102e8c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x102e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_102e90:
    // 0x102e90: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x102e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_102e94:
    // 0x102e94: 0xc05f854  jal         func_17E150
label_102e98:
    if (ctx->pc == 0x102E98u) {
        ctx->pc = 0x102E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E94u;
        // 0x102e98: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E9Cu;
        goto label_102e9c;
    }
    ctx->pc = 0x102E94u;
    SET_GPR_U32(ctx, 31, 0x102E9Cu);
    ctx->pc = 0x102E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102E94u;
    // 0x102e98: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E150u, 0x102E94u, 0x102E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102E9Cu;
label_102e9c:
    // 0x102e9c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x102e9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102ea0:
    // 0x102ea0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x102ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_102ea4:
    // 0x102ea4: 0xc05f870  jal         func_17E1C0
label_102ea8:
    if (ctx->pc == 0x102EA8u) {
        ctx->pc = 0x102EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EA4u;
        // 0x102ea8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102EACu;
        goto label_102eac;
    }
    ctx->pc = 0x102EA4u;
    SET_GPR_U32(ctx, 31, 0x102EACu);
    ctx->pc = 0x102EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102EA4u;
    // 0x102ea8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1C0u, 0x102EA4u, 0x102EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102EACu;
label_102eac:
    // 0x102eac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x102eacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102eb0:
    // 0x102eb0: 0x8682002c  lh          $v0, 0x2C($s4)
    ctx->pc = 0x102eb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 44)));
label_102eb4:
    // 0x102eb4: 0x441002f  bgez        $v0, . + 4 + (0x2F << 2)
label_102eb8:
    if (ctx->pc == 0x102EB8u) {
        ctx->pc = 0x102EBCu;
        goto label_102ebc;
    }
    ctx->pc = 0x102EB4u;
    {
        const bool branch_taken_0x102eb4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x102eb4) {
            ctx->pc = 0x102F74u;
            goto label_102f74;
        }
    }
    ctx->pc = 0x102EBCu;
label_102ebc:
    // 0x102ebc: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x102ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_102ec0:
    // 0x102ec0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x102ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_102ec4:
    // 0x102ec4: 0x86960020  lh          $s6, 0x20($s4)
    ctx->pc = 0x102ec4u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
label_102ec8:
    // 0x102ec8: 0xc06cf0c  jal         func_1B3C30
label_102ecc:
    if (ctx->pc == 0x102ECCu) {
        ctx->pc = 0x102ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EC8u;
        // 0x102ecc: 0x24a5e088  addiu       $a1, $a1, -0x1F78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102ED0u;
        goto label_102ed0;
    }
    ctx->pc = 0x102EC8u;
    SET_GPR_U32(ctx, 31, 0x102ED0u);
    ctx->pc = 0x102ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102EC8u;
    // 0x102ecc: 0x24a5e088  addiu       $a1, $a1, -0x1F78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x102EC8u, 0x102ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102ED0u;
label_102ed0:
    // 0x102ed0: 0x4400022  bltz        $v0, . + 4 + (0x22 << 2)
label_102ed4:
    if (ctx->pc == 0x102ED4u) {
        ctx->pc = 0x102ED8u;
        goto label_102ed8;
    }
    ctx->pc = 0x102ED0u;
    {
        const bool branch_taken_0x102ed0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x102ed0) {
            ctx->pc = 0x102F5Cu;
            goto label_102f5c;
        }
    }
    ctx->pc = 0x102ED8u;
label_102ed8:
    // 0x102ed8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_102edc:
    if (ctx->pc == 0x102EDCu) {
        ctx->pc = 0x102EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102ED8u;
        // 0x102edc: 0x8f838388  lw          $v1, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102EE0u;
        goto label_102ee0;
    }
    ctx->pc = 0x102ED8u;
    {
        const bool branch_taken_0x102ed8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x102EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102ED8u;
        // 0x102edc: 0x8f838388  lw          $v1, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ed8) {
            ctx->pc = 0x102EE8u;
            goto label_102ee8;
        }
    }
    ctx->pc = 0x102EE0u;
label_102ee0:
    // 0x102ee0: 0x10000007  b           . + 4 + (0x7 << 2)
label_102ee4:
    if (ctx->pc == 0x102EE4u) {
        ctx->pc = 0x102EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EE0u;
        // 0x102ee4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102EE8u;
        goto label_102ee8;
    }
    ctx->pc = 0x102EE0u;
    {
        const bool branch_taken_0x102ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EE0u;
        // 0x102ee4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ee0) {
            ctx->pc = 0x102F00u;
            goto label_102f00;
        }
    }
    ctx->pc = 0x102EE8u;
label_102ee8:
    // 0x102ee8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x102ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_102eec:
    // 0x102eec: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x102eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_102ef0:
    // 0x102ef0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x102ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_102ef4:
    // 0x102ef4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x102ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_102ef8:
    // 0x102ef8: 0x84650008  lh          $a1, 0x8($v1)
    ctx->pc = 0x102ef8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_102efc:
    // 0x102efc: 0x0  nop
    ctx->pc = 0x102efcu;
    // NOP
label_102f00:
    // 0x102f00: 0x8f888388  lw          $t0, -0x7C78($gp)
    ctx->pc = 0x102f00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_102f04:
    // 0x102f04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_102f08:
    // 0x102f08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x102f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102f0c:
    // 0x102f0c: 0x1000000f  b           . + 4 + (0xF << 2)
label_102f10:
    if (ctx->pc == 0x102F10u) {
        ctx->pc = 0x102F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F0Cu;
        // 0x102f10: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F14u;
        goto label_102f14;
    }
    ctx->pc = 0x102F0Cu;
    {
        const bool branch_taken_0x102f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F0Cu;
        // 0x102f10: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f0c) {
            ctx->pc = 0x102F4Cu;
            goto label_102f4c;
        }
    }
    ctx->pc = 0x102F14u;
label_102f14:
    // 0x102f14: 0x0  nop
    ctx->pc = 0x102f14u;
    // NOP
label_102f18:
    // 0x102f18: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x102f18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_102f1c:
    // 0x102f1c: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x102f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_102f20:
    // 0x102f20: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x102f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_102f24:
    // 0x102f24: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x102f24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_102f28:
    // 0x102f28: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x102f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_102f2c:
    // 0x102f2c: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x102f2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_102f30:
    // 0x102f30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x102f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_102f34:
    // 0x102f34: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x102f34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_102f38:
    // 0x102f38: 0x14560003  bne         $v0, $s6, . + 4 + (0x3 << 2)
label_102f3c:
    if (ctx->pc == 0x102F3Cu) {
        ctx->pc = 0x102F40u;
        goto label_102f40;
    }
    ctx->pc = 0x102F38u;
    {
        const bool branch_taken_0x102f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x102f38) {
            ctx->pc = 0x102F48u;
            goto label_102f48;
        }
    }
    ctx->pc = 0x102F40u;
label_102f40:
    // 0x102f40: 0x10000008  b           . + 4 + (0x8 << 2)
label_102f44:
    if (ctx->pc == 0x102F44u) {
        ctx->pc = 0x102F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F40u;
        // 0x102f44: 0x84620002  lh          $v0, 0x2($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F48u;
        goto label_102f48;
    }
    ctx->pc = 0x102F40u;
    {
        const bool branch_taken_0x102f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F40u;
        // 0x102f44: 0x84620002  lh          $v0, 0x2($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f40) {
            ctx->pc = 0x102F64u;
            goto label_102f64;
        }
    }
    ctx->pc = 0x102F48u;
label_102f48:
    // 0x102f48: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x102f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_102f4c:
    // 0x102f4c: 0x0  nop
    ctx->pc = 0x102f4cu;
    // NOP
label_102f50:
    // 0x102f50: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x102f50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_102f54:
    // 0x102f54: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_102f58:
    if (ctx->pc == 0x102F58u) {
        ctx->pc = 0x102F5Cu;
        goto label_102f5c;
    }
    ctx->pc = 0x102F54u;
    {
        const bool branch_taken_0x102f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102f54) {
            ctx->pc = 0x102F14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102f14;
        }
    }
    ctx->pc = 0x102F5Cu;
label_102f5c:
    // 0x102f5c: 0x0  nop
    ctx->pc = 0x102f5cu;
    // NOP
label_102f60:
    // 0x102f60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x102f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_102f64:
    // 0x102f64: 0x0  nop
    ctx->pc = 0x102f64u;
    // NOP
label_102f68:
    // 0x102f68: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
label_102f6c:
    if (ctx->pc == 0x102F6Cu) {
        ctx->pc = 0x102F70u;
        goto label_102f70;
    }
    ctx->pc = 0x102F68u;
    {
        const bool branch_taken_0x102f68 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x102f68) {
            ctx->pc = 0x102F74u;
            goto label_102f74;
        }
    }
    ctx->pc = 0x102F70u;
label_102f70:
    // 0x102f70: 0xa682002c  sh          $v0, 0x2C($s4)
    ctx->pc = 0x102f70u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 44), (uint16_t)GPR_U32(ctx, 2));
label_102f74:
    // 0x102f74: 0x0  nop
    ctx->pc = 0x102f74u;
    // NOP
label_102f78:
    // 0x102f78: 0x8682002c  lh          $v0, 0x2C($s4)
    ctx->pc = 0x102f78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 44)));
label_102f7c:
    // 0x102f7c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_102f80:
    if (ctx->pc == 0x102F80u) {
        ctx->pc = 0x102F84u;
        goto label_102f84;
    }
    ctx->pc = 0x102F7Cu;
    {
        const bool branch_taken_0x102f7c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x102f7c) {
            ctx->pc = 0x102FD0u;
            goto label_102fd0;
        }
    }
    ctx->pc = 0x102F84u;
label_102f84:
    // 0x102f84: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x102f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_102f88:
    // 0x102f88: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x102f88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_102f8c:
    // 0x102f8c: 0xc06cf0c  jal         func_1B3C30
label_102f90:
    if (ctx->pc == 0x102F90u) {
        ctx->pc = 0x102F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F8Cu;
        // 0x102f90: 0x24a5e0c0  addiu       $a1, $a1, -0x1F40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F94u;
        goto label_102f94;
    }
    ctx->pc = 0x102F8Cu;
    SET_GPR_U32(ctx, 31, 0x102F94u);
    ctx->pc = 0x102F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102F8Cu;
    // 0x102f90: 0x24a5e0c0  addiu       $a1, $a1, -0x1F40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x102F8Cu, 0x102F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102F94u;
label_102f94:
    // 0x102f94: 0x8f838388  lw          $v1, -0x7C78($gp)
    ctx->pc = 0x102f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_102f98:
    // 0x102f98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_102f9c:
    // 0x102f9c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x102f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_102fa0:
    // 0x102fa0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_102fa4:
    // 0x102fa4: 0x8685002c  lh          $a1, 0x2C($s4)
    ctx->pc = 0x102fa4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 44)));
label_102fa8:
    // 0x102fa8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x102fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_102fac:
    // 0x102fac: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x102facu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_102fb0:
    // 0x102fb0: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x102fb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_102fb4:
    // 0x102fb4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x102fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_102fb8:
    // 0x102fb8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x102fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_102fbc:
    // 0x102fbc: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x102fbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_102fc0:
    // 0x102fc0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x102fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_102fc4:
    // 0x102fc4: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x102fc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_102fc8:
    // 0x102fc8: 0x320f809  jalr        $t9
label_102fcc:
    if (ctx->pc == 0x102FCCu) {
        ctx->pc = 0x102FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FC8u;
        // 0x102fcc: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102FD0u;
        goto label_102fd0;
    }
    ctx->pc = 0x102FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x102FD0u);
        ctx->pc = 0x102FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FC8u;
        // 0x102fcc: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102FC8u, 0x102FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102FD0u;
label_102fd0:
    // 0x102fd0: 0x8682002e  lh          $v0, 0x2E($s4)
    ctx->pc = 0x102fd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 46)));
label_102fd4:
    // 0x102fd4: 0x440001d  bltz        $v0, . + 4 + (0x1D << 2)
label_102fd8:
    if (ctx->pc == 0x102FD8u) {
        ctx->pc = 0x102FDCu;
        goto label_102fdc;
    }
    ctx->pc = 0x102FD4u;
    {
        const bool branch_taken_0x102fd4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x102fd4) {
            ctx->pc = 0x10304Cu;
            goto label_10304c;
        }
    }
    ctx->pc = 0x102FDCu;
label_102fdc:
    // 0x102fdc: 0x86820032  lh          $v0, 0x32($s4)
    ctx->pc = 0x102fdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 50)));
label_102fe0:
    // 0x102fe0: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
label_102fe4:
    if (ctx->pc == 0x102FE4u) {
        ctx->pc = 0x102FE8u;
        goto label_102fe8;
    }
    ctx->pc = 0x102FE0u;
    {
        const bool branch_taken_0x102fe0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x102fe0) {
            ctx->pc = 0x10304Cu;
            goto label_10304c;
        }
    }
    ctx->pc = 0x102FE8u;
label_102fe8:
    // 0x102fe8: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x102fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_102fec:
    // 0x102fec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x102fecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_102ff0:
    // 0x102ff0: 0xc06cf0c  jal         func_1B3C30
label_102ff4:
    if (ctx->pc == 0x102FF4u) {
        ctx->pc = 0x102FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FF0u;
        // 0x102ff4: 0x24a5e0c8  addiu       $a1, $a1, -0x1F38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102FF8u;
        goto label_102ff8;
    }
    ctx->pc = 0x102FF0u;
    SET_GPR_U32(ctx, 31, 0x102FF8u);
    ctx->pc = 0x102FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102FF0u;
    // 0x102ff4: 0x24a5e0c8  addiu       $a1, $a1, -0x1F38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x102FF0u, 0x102FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102FF8u;
label_102ff8:
    // 0x102ff8: 0x8f838388  lw          $v1, -0x7C78($gp)
    ctx->pc = 0x102ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_102ffc:
    // 0x102ffc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_103000:
    // 0x103000: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x103000u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_103004:
    // 0x103004: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x103004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_103008:
    // 0x103008: 0x8685002e  lh          $a1, 0x2E($s4)
    ctx->pc = 0x103008u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 46)));
label_10300c:
    // 0x10300c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10300cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_103010:
    // 0x103010: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x103010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_103014:
    // 0x103014: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x103014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_103018:
    // 0x103018: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x103018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_10301c:
    // 0x10301c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10301cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_103020:
    // 0x103020: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x103020u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_103024:
    // 0x103024: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x103024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_103028:
    // 0x103028: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x103028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_10302c:
    // 0x10302c: 0x320f809  jalr        $t9
label_103030:
    if (ctx->pc == 0x103030u) {
        ctx->pc = 0x103030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10302Cu;
        // 0x103030: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103034u;
        goto label_103034;
    }
    ctx->pc = 0x10302Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103034u);
        ctx->pc = 0x103030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10302Cu;
        // 0x103030: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10302Cu, 0x103034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103034u;
label_103034:
    // 0x103034: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x103034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_103038:
    // 0x103038: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x103038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10303c:
    // 0x10303c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10303cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103040:
    // 0x103040: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x103040u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_103044:
    // 0x103044: 0x320f809  jalr        $t9
label_103048:
    if (ctx->pc == 0x103048u) {
        ctx->pc = 0x103048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103044u;
        // 0x103048: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10304Cu;
        goto label_10304c;
    }
    ctx->pc = 0x103044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10304Cu);
        ctx->pc = 0x103048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103044u;
        // 0x103048: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103044u, 0x10304Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10304Cu;
label_10304c:
    // 0x10304c: 0x0  nop
    ctx->pc = 0x10304cu;
    // NOP
label_103050:
    // 0x103050: 0x86850030  lh          $a1, 0x30($s4)
    ctx->pc = 0x103050u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 48)));
label_103054:
    // 0x103054: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_103058:
    if (ctx->pc == 0x103058u) {
        ctx->pc = 0x10305Cu;
        goto label_10305c;
    }
    ctx->pc = 0x103054u;
    {
        const bool branch_taken_0x103054 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x103054) {
            ctx->pc = 0x103088u;
            goto label_103088;
        }
    }
    ctx->pc = 0x10305Cu;
label_10305c:
    // 0x10305c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x10305cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_103060:
    // 0x103060: 0x86860032  lh          $a2, 0x32($s4)
    ctx->pc = 0x103060u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 50)));
label_103064:
    // 0x103064: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x103064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_103068:
    // 0x103068: 0x320f809  jalr        $t9
label_10306c:
    if (ctx->pc == 0x10306Cu) {
        ctx->pc = 0x10306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103068u;
        // 0x10306c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103070u;
        goto label_103070;
    }
    ctx->pc = 0x103068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103070u);
        ctx->pc = 0x10306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103068u;
        // 0x10306c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103068u, 0x103070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103070u;
label_103070:
    // 0x103070: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x103070u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_103074:
    // 0x103074: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x103074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_103078:
    // 0x103078: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x103078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10307c:
    // 0x10307c: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x10307cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_103080:
    // 0x103080: 0x320f809  jalr        $t9
label_103084:
    if (ctx->pc == 0x103084u) {
        ctx->pc = 0x103084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103080u;
        // 0x103084: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103088u;
        goto label_103088;
    }
    ctx->pc = 0x103080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103088u);
        ctx->pc = 0x103084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103080u;
        // 0x103084: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103080u, 0x103088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103088u;
label_103088:
    // 0x103088: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x103088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_10308c:
    // 0x10308c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x10308cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_103090:
    // 0x103090: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x103090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_103094:
    // 0x103094: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x103094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_103098:
    // 0x103098: 0x12600094  beqz        $s3, . + 4 + (0x94 << 2)
label_10309c:
    if (ctx->pc == 0x10309Cu) {
        ctx->pc = 0x10309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103098u;
        // 0x10309c: 0xac530004  sw          $s3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1030A0u;
        goto label_1030a0;
    }
    ctx->pc = 0x103098u;
    {
        const bool branch_taken_0x103098 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103098u;
        // 0x10309c: 0xac530004  sw          $s3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103098) {
            ctx->pc = 0x1032ECu;
            goto label_1032ec;
        }
    }
    ctx->pc = 0x1030A0u;
label_1030a0:
    // 0x1030a0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1030a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1030a4:
    // 0x1030a4: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1030a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1030a8:
    // 0x1030a8: 0x320f809  jalr        $t9
label_1030ac:
    if (ctx->pc == 0x1030ACu) {
        ctx->pc = 0x1030ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030A8u;
        // 0x1030ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1030B0u;
        goto label_1030b0;
    }
    ctx->pc = 0x1030A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1030B0u);
        ctx->pc = 0x1030ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030A8u;
        // 0x1030ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1030A8u, 0x1030B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1030B0u;
label_1030b0:
    // 0x1030b0: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_1030b4:
    if (ctx->pc == 0x1030B4u) {
        ctx->pc = 0x1030B8u;
        goto label_1030b8;
    }
    ctx->pc = 0x1030B0u;
    {
        const bool branch_taken_0x1030b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1030b0) {
            ctx->pc = 0x103200u;
            goto label_103200;
        }
    }
    ctx->pc = 0x1030B8u;
label_1030b8:
    // 0x1030b8: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1030b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1030bc:
    // 0x1030bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1030bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1030c0:
    // 0x1030c0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1030c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1030c4:
    // 0x1030c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1030c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1030c8:
    // 0x1030c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1030c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1030cc:
    // 0x1030cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1030ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1030d0:
    // 0x1030d0: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1030d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1030d4:
    // 0x1030d4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1030d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1030d8:
    // 0x1030d8: 0x320f809  jalr        $t9
label_1030dc:
    if (ctx->pc == 0x1030DCu) {
        ctx->pc = 0x1030DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030D8u;
        // 0x1030dc: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1030E0u;
        goto label_1030e0;
    }
    ctx->pc = 0x1030D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1030E0u);
        ctx->pc = 0x1030DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030D8u;
        // 0x1030dc: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1030D8u, 0x1030E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1030E0u;
label_1030e0:
    // 0x1030e0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1030e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1030e4:
    // 0x1030e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1030e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1030e8:
    // 0x1030e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1030e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1030ec:
    // 0x1030ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1030ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1030f0:
    // 0x1030f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1030f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1030f4:
    // 0x1030f4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1030f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1030f8:
    // 0x1030f8: 0x320f809  jalr        $t9
label_1030fc:
    if (ctx->pc == 0x1030FCu) {
        ctx->pc = 0x1030FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030F8u;
        // 0x1030fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103100u;
        goto label_103100;
    }
    ctx->pc = 0x1030F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103100u);
        ctx->pc = 0x1030FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030F8u;
        // 0x1030fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1030F8u, 0x103100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103100u;
label_103100:
    // 0x103100: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x103100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_103104:
    // 0x103104: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x103104u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103108:
    // 0x103108: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x103108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10310c:
    // 0x10310c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10310cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_103110:
    // 0x103110: 0x320f809  jalr        $t9
label_103114:
    if (ctx->pc == 0x103114u) {
        ctx->pc = 0x103114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103110u;
        // 0x103114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103118u;
        goto label_103118;
    }
    ctx->pc = 0x103110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103118u);
        ctx->pc = 0x103114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103110u;
        // 0x103114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103110u, 0x103118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103118u;
label_103118:
    // 0x103118: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x103118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_10311c:
    // 0x10311c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10311cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103120:
    // 0x103120: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x103120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_103124:
    // 0x103124: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x103124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_103128:
    // 0x103128: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x103128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10312c:
    // 0x10312c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10312cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_103130:
    // 0x103130: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x103130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_103134:
    // 0x103134: 0x320f809  jalr        $t9
label_103138:
    if (ctx->pc == 0x103138u) {
        ctx->pc = 0x103138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103134u;
        // 0x103138: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10313Cu;
        goto label_10313c;
    }
    ctx->pc = 0x103134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10313Cu);
        ctx->pc = 0x103138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103134u;
        // 0x103138: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103134u, 0x10313Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10313Cu;
label_10313c:
    // 0x10313c: 0xc04c734  jal         func_131CD0
label_103140:
    if (ctx->pc == 0x103140u) {
        ctx->pc = 0x103140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10313Cu;
        // 0x103140: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103144u;
        goto label_103144;
    }
    ctx->pc = 0x10313Cu;
    SET_GPR_U32(ctx, 31, 0x103144u);
    ctx->pc = 0x103140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10313Cu;
    // 0x103140: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CD0u, 0x10313Cu, 0x103144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103144u;
label_103144:
    // 0x103144: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x103144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_103148:
    // 0x103148: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x103148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_10314c:
    // 0x10314c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10314cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_103150:
    // 0x103150: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x103150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_103154:
    // 0x103154: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x103154u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_103158:
    // 0x103158: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x103158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10315c:
    // 0x10315c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x10315cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_103160:
    // 0x103160: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x103160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_103164:
    // 0x103164: 0x46000885  abs.s       $f2, $f1
    ctx->pc = 0x103164u;
    ctx->f[2] = FPU_ABS_S(ctx->f[1]);
label_103168:
    // 0x103168: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x103168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_10316c:
    // 0x10316c: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x10316cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_103170:
    // 0x103170: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x103170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_103174:
    // 0x103174: 0x0  nop
    ctx->pc = 0x103174u;
    // NOP
label_103178:
    // 0x103178: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x103178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10317c:
    // 0x10317c: 0x0  nop
    ctx->pc = 0x10317cu;
    // NOP
label_103180:
    // 0x103180: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_103184:
    if (ctx->pc == 0x103184u) {
        ctx->pc = 0x103184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103180u;
        // 0x103184: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103188u;
        goto label_103188;
    }
    ctx->pc = 0x103180u;
    {
        const bool branch_taken_0x103180 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x103184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103180u;
        // 0x103184: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103180) {
            ctx->pc = 0x103190u;
            goto label_103190;
        }
    }
    ctx->pc = 0x103188u;
label_103188:
    // 0x103188: 0x10000002  b           . + 4 + (0x2 << 2)
label_10318c:
    if (ctx->pc == 0x10318Cu) {
        ctx->pc = 0x103190u;
        goto label_103190;
    }
    ctx->pc = 0x103188u;
    {
        const bool branch_taken_0x103188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x103188) {
            ctx->pc = 0x103194u;
            goto label_103194;
        }
    }
    ctx->pc = 0x103190u;
label_103190:
    // 0x103190: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x103190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103194:
    // 0x103194: 0x0  nop
    ctx->pc = 0x103194u;
    // NOP
label_103198:
    // 0x103198: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_10319c:
    if (ctx->pc == 0x10319Cu) {
        ctx->pc = 0x1031A0u;
        goto label_1031a0;
    }
    ctx->pc = 0x103198u;
    {
        const bool branch_taken_0x103198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103198) {
            ctx->pc = 0x1031C0u;
            goto label_1031c0;
        }
    }
    ctx->pc = 0x1031A0u;
label_1031a0:
    // 0x1031a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1031a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1031a4:
    // 0x1031a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1031a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1031a8:
    // 0x1031a8: 0x0  nop
    ctx->pc = 0x1031a8u;
    // NOP
label_1031ac:
    // 0x1031ac: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1031acu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1031b0:
    // 0x1031b0: 0x0  nop
    ctx->pc = 0x1031b0u;
    // NOP
label_1031b4:
    // 0x1031b4: 0x0  nop
    ctx->pc = 0x1031b4u;
    // NOP
label_1031b8:
    // 0x1031b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1031bc:
    if (ctx->pc == 0x1031BCu) {
        ctx->pc = 0x1031BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1031B8u;
        // 0x1031bc: 0xe4600060  swc1        $f0, 0x60($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1031C0u;
        goto label_1031c0;
    }
    ctx->pc = 0x1031B8u;
    {
        const bool branch_taken_0x1031b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1031BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1031B8u;
        // 0x1031bc: 0xe4600060  swc1        $f0, 0x60($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1031b8) {
            ctx->pc = 0x1031C8u;
            goto label_1031c8;
        }
    }
    ctx->pc = 0x1031C0u;
label_1031c0:
    // 0x1031c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1031c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1031c4:
    // 0x1031c4: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x1031c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
label_1031c8:
    // 0x1031c8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1031c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1031cc:
    // 0x1031cc: 0xc05f860  jal         func_17E180
label_1031d0:
    if (ctx->pc == 0x1031D0u) {
        ctx->pc = 0x1031D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1031CCu;
        // 0x1031d0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1031D4u;
        goto label_1031d4;
    }
    ctx->pc = 0x1031CCu;
    SET_GPR_U32(ctx, 31, 0x1031D4u);
    ctx->pc = 0x1031D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1031CCu;
    // 0x1031d0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E180u, 0x1031CCu, 0x1031D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1031D4u;
label_1031d4:
    // 0x1031d4: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1031d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1031d8:
    // 0x1031d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1031d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1031dc:
    // 0x1031dc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1031dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1031e0:
    // 0x1031e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1031e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1031e4:
    // 0x1031e4: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1031e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1031e8:
    // 0x1031e8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1031e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1031ec:
    // 0x1031ec: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x1031ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_1031f0:
    // 0x1031f0: 0x320f809  jalr        $t9
label_1031f4:
    if (ctx->pc == 0x1031F4u) {
        ctx->pc = 0x1031F8u;
        goto label_1031f8;
    }
    ctx->pc = 0x1031F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1031F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1031F0u, 0x1031F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1031F8u;
label_1031f8:
    // 0x1031f8: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1031fc:
    if (ctx->pc == 0x1031FCu) {
        ctx->pc = 0x103200u;
        goto label_103200;
    }
    ctx->pc = 0x1031F8u;
    {
        const bool branch_taken_0x1031f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1031f8) {
            ctx->pc = 0x1032ECu;
            goto label_1032ec;
        }
    }
    ctx->pc = 0x103200u;
label_103200:
    // 0x103200: 0xc04c734  jal         func_131CD0
label_103204:
    if (ctx->pc == 0x103204u) {
        ctx->pc = 0x103204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103200u;
        // 0x103204: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103208u;
        goto label_103208;
    }
    ctx->pc = 0x103200u;
    SET_GPR_U32(ctx, 31, 0x103208u);
    ctx->pc = 0x103204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103200u;
    // 0x103204: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CD0u, 0x103200u, 0x103208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103208u;
label_103208:
    // 0x103208: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x103208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_10320c:
    // 0x10320c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10320cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_103210:
    // 0x103210: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x103210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_103214:
    // 0x103214: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x103214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_103218:
    // 0x103218: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x103218u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_10321c:
    // 0x10321c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x10321cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_103220:
    // 0x103220: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x103220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_103224:
    // 0x103224: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x103224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_103228:
    // 0x103228: 0x46000885  abs.s       $f2, $f1
    ctx->pc = 0x103228u;
    ctx->f[2] = FPU_ABS_S(ctx->f[1]);
label_10322c:
    // 0x10322c: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x10322cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_103230:
    // 0x103230: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x103230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_103234:
    // 0x103234: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x103234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_103238:
    // 0x103238: 0x0  nop
    ctx->pc = 0x103238u;
    // NOP
label_10323c:
    // 0x10323c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x10323cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_103240:
    // 0x103240: 0x0  nop
    ctx->pc = 0x103240u;
    // NOP
label_103244:
    // 0x103244: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_103248:
    if (ctx->pc == 0x103248u) {
        ctx->pc = 0x103248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103244u;
        // 0x103248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10324Cu;
        goto label_10324c;
    }
    ctx->pc = 0x103244u;
    {
        const bool branch_taken_0x103244 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x103248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103244u;
        // 0x103248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103244) {
            ctx->pc = 0x103254u;
            goto label_103254;
        }
    }
    ctx->pc = 0x10324Cu;
label_10324c:
    // 0x10324c: 0x10000003  b           . + 4 + (0x3 << 2)
label_103250:
    if (ctx->pc == 0x103250u) {
        ctx->pc = 0x103254u;
        goto label_103254;
    }
    ctx->pc = 0x10324Cu;
    {
        const bool branch_taken_0x10324c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10324c) {
            ctx->pc = 0x10325Cu;
            goto label_10325c;
        }
    }
    ctx->pc = 0x103254u;
label_103254:
    // 0x103254: 0x0  nop
    ctx->pc = 0x103254u;
    // NOP
label_103258:
    // 0x103258: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x103258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10325c:
    // 0x10325c: 0x0  nop
    ctx->pc = 0x10325cu;
    // NOP
label_103260:
    // 0x103260: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_103264:
    if (ctx->pc == 0x103264u) {
        ctx->pc = 0x103268u;
        goto label_103268;
    }
    ctx->pc = 0x103260u;
    {
        const bool branch_taken_0x103260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103260) {
            ctx->pc = 0x103288u;
            goto label_103288;
        }
    }
    ctx->pc = 0x103268u;
label_103268:
    // 0x103268: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x103268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_10326c:
    // 0x10326c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10326cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_103270:
    // 0x103270: 0x0  nop
    ctx->pc = 0x103270u;
    // NOP
label_103274:
    // 0x103274: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x103274u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_103278:
    // 0x103278: 0x0  nop
    ctx->pc = 0x103278u;
    // NOP
label_10327c:
    // 0x10327c: 0x0  nop
    ctx->pc = 0x10327cu;
    // NOP
label_103280:
    // 0x103280: 0x10000003  b           . + 4 + (0x3 << 2)
label_103284:
    if (ctx->pc == 0x103284u) {
        ctx->pc = 0x103284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103280u;
        // 0x103284: 0xe4600060  swc1        $f0, 0x60($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x103288u;
        goto label_103288;
    }
    ctx->pc = 0x103280u;
    {
        const bool branch_taken_0x103280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103280u;
        // 0x103284: 0xe4600060  swc1        $f0, 0x60($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103280) {
            ctx->pc = 0x103290u;
            goto label_103290;
        }
    }
    ctx->pc = 0x103288u;
label_103288:
    // 0x103288: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x103288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_10328c:
    // 0x10328c: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x10328cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
label_103290:
    // 0x103290: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x103290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_103294:
    // 0x103294: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x103294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_103298:
    // 0x103298: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x103298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10329c:
    // 0x10329c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10329cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1032a0:
    // 0x1032a0: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1032a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1032a4:
    // 0x1032a4: 0xc04c6dc  jal         func_131B70
label_1032a8:
    if (ctx->pc == 0x1032A8u) {
        ctx->pc = 0x1032A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032A4u;
        // 0x1032a8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1032ACu;
        goto label_1032ac;
    }
    ctx->pc = 0x1032A4u;
    SET_GPR_U32(ctx, 31, 0x1032ACu);
    ctx->pc = 0x1032A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1032A4u;
    // 0x1032a8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x1032A4u, 0x1032ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1032ACu;
label_1032ac:
    // 0x1032ac: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1032acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1032b0:
    // 0x1032b0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1032b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1032b4:
    // 0x1032b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1032b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1032b8:
    // 0x1032b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1032b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1032bc:
    // 0x1032bc: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1032bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1032c0:
    // 0x1032c0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1032c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1032c4:
    // 0x1032c4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1032c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1032c8:
    // 0x1032c8: 0x320f809  jalr        $t9
label_1032cc:
    if (ctx->pc == 0x1032CCu) {
        ctx->pc = 0x1032CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032C8u;
        // 0x1032cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1032D0u;
        goto label_1032d0;
    }
    ctx->pc = 0x1032C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1032D0u);
        ctx->pc = 0x1032CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032C8u;
        // 0x1032cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1032C8u, 0x1032D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1032D0u;
label_1032d0:
    // 0x1032d0: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1032d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1032d4:
    // 0x1032d4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1032d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1032d8:
    // 0x1032d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1032d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1032dc:
    // 0x1032dc: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1032dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1032e0:
    // 0x1032e0: 0x244401e0  addiu       $a0, $v0, 0x1E0
    ctx->pc = 0x1032e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_1032e4:
    // 0x1032e4: 0xc07d38e  jal         func_1F4E38
label_1032e8:
    if (ctx->pc == 0x1032E8u) {
        ctx->pc = 0x1032E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032E4u;
        // 0x1032e8: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1032ECu;
        goto label_1032ec;
    }
    ctx->pc = 0x1032E4u;
    SET_GPR_U32(ctx, 31, 0x1032ECu);
    ctx->pc = 0x1032E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1032E4u;
    // 0x1032e8: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1032E4u, 0x1032ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1032ECu;
label_1032ec:
    // 0x1032ec: 0x0  nop
    ctx->pc = 0x1032ecu;
    // NOP
label_1032f0:
    // 0x1032f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1032f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1032f4:
    // 0x1032f4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1032f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1032f8:
    // 0x1032f8: 0x25e102a  slt         $v0, $s2, $fp
    ctx->pc = 0x1032f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_1032fc:
    // 0x1032fc: 0x1440fe91  bnez        $v0, . + 4 + (-0x16F << 2)
label_103300:
    if (ctx->pc == 0x103300u) {
        ctx->pc = 0x103304u;
        goto label_103304;
    }
    ctx->pc = 0x1032FCu;
    {
        const bool branch_taken_0x1032fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1032fc) {
            ctx->pc = 0x102D44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102d44;
        }
    }
    ctx->pc = 0x103304u;
label_103304:
    // 0x103304: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x103304u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_103308:
    // 0x103308: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x103308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_10330c:
    // 0x10330c: 0x8c622c20  lw          $v0, 0x2C20($v1)
    ctx->pc = 0x10330cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11296)));
label_103310:
    // 0x103310: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x103310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_103314:
    // 0x103314: 0x1440fd79  bnez        $v0, . + 4 + (-0x287 << 2)
label_103318:
    if (ctx->pc == 0x103318u) {
        ctx->pc = 0x10331Cu;
        goto label_10331c;
    }
    ctx->pc = 0x103314u;
    {
        const bool branch_taken_0x103314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103314) {
            ctx->pc = 0x1028FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1028fc;
        }
    }
    ctx->pc = 0x10331Cu;
label_10331c:
    // 0x10331c: 0xac702cd4  sw          $s0, 0x2CD4($v1)
    ctx->pc = 0x10331cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11476), GPR_U32(ctx, 16));
label_103320:
    // 0x103320: 0x1000001c  b           . + 4 + (0x1C << 2)
label_103324:
    if (ctx->pc == 0x103324u) {
        ctx->pc = 0x103324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103320u;
        // 0x103324: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103328u;
        goto label_103328;
    }
    ctx->pc = 0x103320u;
    {
        const bool branch_taken_0x103320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103320u;
        // 0x103324: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103320) {
            ctx->pc = 0x103394u;
            goto label_103394;
        }
    }
    ctx->pc = 0x103328u;
label_103328:
    // 0x103328: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x103328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_10332c:
    // 0x10332c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x10332cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_103330:
    // 0x103330: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x103330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_103334:
    // 0x103334: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x103334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_103338:
    // 0x103338: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x103338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10333c:
    // 0x10333c: 0x8c522cd8  lw          $s2, 0x2CD8($v0)
    ctx->pc = 0x10333cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_103340:
    // 0x103340: 0xc06cf0c  jal         func_1B3C30
label_103344:
    if (ctx->pc == 0x103344u) {
        ctx->pc = 0x103344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103340u;
        // 0x103344: 0x24a5e080  addiu       $a1, $a1, -0x1F80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103348u;
        goto label_103348;
    }
    ctx->pc = 0x103340u;
    SET_GPR_U32(ctx, 31, 0x103348u);
    ctx->pc = 0x103344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103340u;
    // 0x103344: 0x24a5e080  addiu       $a1, $a1, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x103340u, 0x103348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103348u;
label_103348:
    // 0x103348: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x103348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_10334c:
    // 0x10334c: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x10334cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_103350:
    // 0x103350: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_103354:
    if (ctx->pc == 0x103354u) {
        ctx->pc = 0x103358u;
        goto label_103358;
    }
    ctx->pc = 0x103350u;
    {
        const bool branch_taken_0x103350 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x103350) {
            ctx->pc = 0x103360u;
            goto label_103360;
        }
    }
    ctx->pc = 0x103358u;
label_103358:
    // 0x103358: 0x1000000c  b           . + 4 + (0xC << 2)
label_10335c:
    if (ctx->pc == 0x10335Cu) {
        ctx->pc = 0x10335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103358u;
        // 0x10335c: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103360u;
        goto label_103360;
    }
    ctx->pc = 0x103358u;
    {
        const bool branch_taken_0x103358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103358u;
        // 0x10335c: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103358) {
            ctx->pc = 0x10338Cu;
            goto label_10338c;
        }
    }
    ctx->pc = 0x103360u;
label_103360:
    // 0x103360: 0x8f838388  lw          $v1, -0x7C78($gp)
    ctx->pc = 0x103360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_103364:
    // 0x103364: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x103364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_103368:
    // 0x103368: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x103368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10336c:
    // 0x10336c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x10336cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_103370:
    // 0x103370: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x103370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_103374:
    // 0x103374: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x103374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_103378:
    // 0x103378: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x103378u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_10337c:
    // 0x10337c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x10337cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_103380:
    // 0x103380: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x103380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_103384:
    // 0x103384: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x103384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_103388:
    // 0x103388: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x103388u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_10338c:
    // 0x10338c: 0x0  nop
    ctx->pc = 0x10338cu;
    // NOP
label_103390:
    // 0x103390: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x103390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_103394:
    // 0x103394: 0x0  nop
    ctx->pc = 0x103394u;
    // NOP
label_103398:
    // 0x103398: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x103398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_10339c:
    // 0x10339c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_1033a0:
    if (ctx->pc == 0x1033A0u) {
        ctx->pc = 0x1033A4u;
        goto label_1033a4;
    }
    ctx->pc = 0x10339Cu;
    {
        const bool branch_taken_0x10339c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10339c) {
            ctx->pc = 0x103328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103328;
        }
    }
    ctx->pc = 0x1033A4u;
label_1033a4:
    // 0x1033a4: 0xc042884  jal         func_10A210
label_1033a8:
    if (ctx->pc == 0x1033A8u) {
        ctx->pc = 0x1033A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033A4u;
        // 0x1033a8: 0x8fa400ac  lw          $a0, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1033ACu;
        goto label_1033ac;
    }
    ctx->pc = 0x1033A4u;
    SET_GPR_U32(ctx, 31, 0x1033ACu);
    ctx->pc = 0x1033A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1033A4u;
    // 0x1033a8: 0x8fa400ac  lw          $a0, 0xAC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A210u, 0x1033A4u, 0x1033ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1033ACu;
label_1033ac:
    // 0x1033ac: 0xc057640  jal         func_15D900
label_1033b0:
    if (ctx->pc == 0x1033B0u) {
        ctx->pc = 0x1033B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033ACu;
        // 0x1033b0: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1033B4u;
        goto label_1033b4;
    }
    ctx->pc = 0x1033ACu;
    SET_GPR_U32(ctx, 31, 0x1033B4u);
    ctx->pc = 0x1033B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1033ACu;
    // 0x1033b0: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D900u, 0x1033ACu, 0x1033B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1033B4u;
label_1033b4:
    // 0x1033b4: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1033b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1033b8:
    // 0x1033b8: 0x8c702c20  lw          $s0, 0x2C20($v1)
    ctx->pc = 0x1033b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11296)));
label_1033bc:
    // 0x1033bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1033c0:
    if (ctx->pc == 0x1033C0u) {
        ctx->pc = 0x1033C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033BCu;
        // 0x1033c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1033C4u;
        goto label_1033c4;
    }
    ctx->pc = 0x1033BCu;
    {
        const bool branch_taken_0x1033bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1033C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033BCu;
        // 0x1033c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1033bc) {
            ctx->pc = 0x1033D4u;
            goto label_1033d4;
        }
    }
    ctx->pc = 0x1033C4u;
label_1033c4:
    // 0x1033c4: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x1033c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1033c8:
    // 0x1033c8: 0xc04027c  jal         func_1009F0
label_1033cc:
    if (ctx->pc == 0x1033CCu) {
        ctx->pc = 0x1033CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033C8u;
        // 0x1033cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1033D0u;
        goto label_1033d0;
    }
    ctx->pc = 0x1033C8u;
    SET_GPR_U32(ctx, 31, 0x1033D0u);
    ctx->pc = 0x1033CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1033C8u;
    // 0x1033cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x1033C8u, 0x1033D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1033D0u;
label_1033d0:
    // 0x1033d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1033d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1033d4:
    // 0x1033d4: 0x0  nop
    ctx->pc = 0x1033d4u;
    // NOP
label_1033d8:
    // 0x1033d8: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x1033d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1033dc:
    // 0x1033dc: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_1033e0:
    if (ctx->pc == 0x1033E0u) {
        ctx->pc = 0x1033E4u;
        goto label_1033e4;
    }
    ctx->pc = 0x1033DCu;
    {
        const bool branch_taken_0x1033dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1033dc) {
            ctx->pc = 0x1033C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1033c4;
        }
    }
    ctx->pc = 0x1033E4u;
label_1033e4:
    // 0x1033e4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1033e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1033e8:
    // 0x1033e8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1033e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1033ec:
    // 0x1033ec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1033ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1033f0:
    // 0x1033f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1033f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1033f4:
    // 0x1033f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1033f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1033f8:
    // 0x1033f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1033f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1033fc:
    // 0x1033fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1033fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_103400:
    // 0x103400: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x103400u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_103404:
    // 0x103404: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x103404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_103408:
    // 0x103408: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x103408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10340c:
    // 0x10340c: 0x3e00008  jr          $ra
label_103410:
    if (ctx->pc == 0x103410u) {
        ctx->pc = 0x103410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10340Cu;
        // 0x103410: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103414u;
        goto label_fallthrough_0x10340c;
    }
    ctx->pc = 0x10340Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10340Cu;
        // 0x103410: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10340Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10340c:
    ctx->pc = 0x103414u;
}
