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

// Function: FUN_001e49a0
// Address: 0x1e49a0 - 0x1e4e54
void FUN_001e49a0_0x1e49a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e49a0_0x1e49a0");
#endif

    switch (ctx->pc) {
        case 0x1e49a0u: goto label_1e49a0;
        case 0x1e49a4u: goto label_1e49a4;
        case 0x1e49a8u: goto label_1e49a8;
        case 0x1e49acu: goto label_1e49ac;
        case 0x1e49b0u: goto label_1e49b0;
        case 0x1e49b4u: goto label_1e49b4;
        case 0x1e49b8u: goto label_1e49b8;
        case 0x1e49bcu: goto label_1e49bc;
        case 0x1e49c0u: goto label_1e49c0;
        case 0x1e49c4u: goto label_1e49c4;
        case 0x1e49c8u: goto label_1e49c8;
        case 0x1e49ccu: goto label_1e49cc;
        case 0x1e49d0u: goto label_1e49d0;
        case 0x1e49d4u: goto label_1e49d4;
        case 0x1e49d8u: goto label_1e49d8;
        case 0x1e49dcu: goto label_1e49dc;
        case 0x1e49e0u: goto label_1e49e0;
        case 0x1e49e4u: goto label_1e49e4;
        case 0x1e49e8u: goto label_1e49e8;
        case 0x1e49ecu: goto label_1e49ec;
        case 0x1e49f0u: goto label_1e49f0;
        case 0x1e49f4u: goto label_1e49f4;
        case 0x1e49f8u: goto label_1e49f8;
        case 0x1e49fcu: goto label_1e49fc;
        case 0x1e4a00u: goto label_1e4a00;
        case 0x1e4a04u: goto label_1e4a04;
        case 0x1e4a08u: goto label_1e4a08;
        case 0x1e4a0cu: goto label_1e4a0c;
        case 0x1e4a10u: goto label_1e4a10;
        case 0x1e4a14u: goto label_1e4a14;
        case 0x1e4a18u: goto label_1e4a18;
        case 0x1e4a1cu: goto label_1e4a1c;
        case 0x1e4a20u: goto label_1e4a20;
        case 0x1e4a24u: goto label_1e4a24;
        case 0x1e4a28u: goto label_1e4a28;
        case 0x1e4a2cu: goto label_1e4a2c;
        case 0x1e4a30u: goto label_1e4a30;
        case 0x1e4a34u: goto label_1e4a34;
        case 0x1e4a38u: goto label_1e4a38;
        case 0x1e4a3cu: goto label_1e4a3c;
        case 0x1e4a40u: goto label_1e4a40;
        case 0x1e4a44u: goto label_1e4a44;
        case 0x1e4a48u: goto label_1e4a48;
        case 0x1e4a4cu: goto label_1e4a4c;
        case 0x1e4a50u: goto label_1e4a50;
        case 0x1e4a54u: goto label_1e4a54;
        case 0x1e4a58u: goto label_1e4a58;
        case 0x1e4a5cu: goto label_1e4a5c;
        case 0x1e4a60u: goto label_1e4a60;
        case 0x1e4a64u: goto label_1e4a64;
        case 0x1e4a68u: goto label_1e4a68;
        case 0x1e4a6cu: goto label_1e4a6c;
        case 0x1e4a70u: goto label_1e4a70;
        case 0x1e4a74u: goto label_1e4a74;
        case 0x1e4a78u: goto label_1e4a78;
        case 0x1e4a7cu: goto label_1e4a7c;
        case 0x1e4a80u: goto label_1e4a80;
        case 0x1e4a84u: goto label_1e4a84;
        case 0x1e4a88u: goto label_1e4a88;
        case 0x1e4a8cu: goto label_1e4a8c;
        case 0x1e4a90u: goto label_1e4a90;
        case 0x1e4a94u: goto label_1e4a94;
        case 0x1e4a98u: goto label_1e4a98;
        case 0x1e4a9cu: goto label_1e4a9c;
        case 0x1e4aa0u: goto label_1e4aa0;
        case 0x1e4aa4u: goto label_1e4aa4;
        case 0x1e4aa8u: goto label_1e4aa8;
        case 0x1e4aacu: goto label_1e4aac;
        case 0x1e4ab0u: goto label_1e4ab0;
        case 0x1e4ab4u: goto label_1e4ab4;
        case 0x1e4ab8u: goto label_1e4ab8;
        case 0x1e4abcu: goto label_1e4abc;
        case 0x1e4ac0u: goto label_1e4ac0;
        case 0x1e4ac4u: goto label_1e4ac4;
        case 0x1e4ac8u: goto label_1e4ac8;
        case 0x1e4accu: goto label_1e4acc;
        case 0x1e4ad0u: goto label_1e4ad0;
        case 0x1e4ad4u: goto label_1e4ad4;
        case 0x1e4ad8u: goto label_1e4ad8;
        case 0x1e4adcu: goto label_1e4adc;
        case 0x1e4ae0u: goto label_1e4ae0;
        case 0x1e4ae4u: goto label_1e4ae4;
        case 0x1e4ae8u: goto label_1e4ae8;
        case 0x1e4aecu: goto label_1e4aec;
        case 0x1e4af0u: goto label_1e4af0;
        case 0x1e4af4u: goto label_1e4af4;
        case 0x1e4af8u: goto label_1e4af8;
        case 0x1e4afcu: goto label_1e4afc;
        case 0x1e4b00u: goto label_1e4b00;
        case 0x1e4b04u: goto label_1e4b04;
        case 0x1e4b08u: goto label_1e4b08;
        case 0x1e4b0cu: goto label_1e4b0c;
        case 0x1e4b10u: goto label_1e4b10;
        case 0x1e4b14u: goto label_1e4b14;
        case 0x1e4b18u: goto label_1e4b18;
        case 0x1e4b1cu: goto label_1e4b1c;
        case 0x1e4b20u: goto label_1e4b20;
        case 0x1e4b24u: goto label_1e4b24;
        case 0x1e4b28u: goto label_1e4b28;
        case 0x1e4b2cu: goto label_1e4b2c;
        case 0x1e4b30u: goto label_1e4b30;
        case 0x1e4b34u: goto label_1e4b34;
        case 0x1e4b38u: goto label_1e4b38;
        case 0x1e4b3cu: goto label_1e4b3c;
        case 0x1e4b40u: goto label_1e4b40;
        case 0x1e4b44u: goto label_1e4b44;
        case 0x1e4b48u: goto label_1e4b48;
        case 0x1e4b4cu: goto label_1e4b4c;
        case 0x1e4b50u: goto label_1e4b50;
        case 0x1e4b54u: goto label_1e4b54;
        case 0x1e4b58u: goto label_1e4b58;
        case 0x1e4b5cu: goto label_1e4b5c;
        case 0x1e4b60u: goto label_1e4b60;
        case 0x1e4b64u: goto label_1e4b64;
        case 0x1e4b68u: goto label_1e4b68;
        case 0x1e4b6cu: goto label_1e4b6c;
        case 0x1e4b70u: goto label_1e4b70;
        case 0x1e4b74u: goto label_1e4b74;
        case 0x1e4b78u: goto label_1e4b78;
        case 0x1e4b7cu: goto label_1e4b7c;
        case 0x1e4b80u: goto label_1e4b80;
        case 0x1e4b84u: goto label_1e4b84;
        case 0x1e4b88u: goto label_1e4b88;
        case 0x1e4b8cu: goto label_1e4b8c;
        case 0x1e4b90u: goto label_1e4b90;
        case 0x1e4b94u: goto label_1e4b94;
        case 0x1e4b98u: goto label_1e4b98;
        case 0x1e4b9cu: goto label_1e4b9c;
        case 0x1e4ba0u: goto label_1e4ba0;
        case 0x1e4ba4u: goto label_1e4ba4;
        case 0x1e4ba8u: goto label_1e4ba8;
        case 0x1e4bacu: goto label_1e4bac;
        case 0x1e4bb0u: goto label_1e4bb0;
        case 0x1e4bb4u: goto label_1e4bb4;
        case 0x1e4bb8u: goto label_1e4bb8;
        case 0x1e4bbcu: goto label_1e4bbc;
        case 0x1e4bc0u: goto label_1e4bc0;
        case 0x1e4bc4u: goto label_1e4bc4;
        case 0x1e4bc8u: goto label_1e4bc8;
        case 0x1e4bccu: goto label_1e4bcc;
        case 0x1e4bd0u: goto label_1e4bd0;
        case 0x1e4bd4u: goto label_1e4bd4;
        case 0x1e4bd8u: goto label_1e4bd8;
        case 0x1e4bdcu: goto label_1e4bdc;
        case 0x1e4be0u: goto label_1e4be0;
        case 0x1e4be4u: goto label_1e4be4;
        case 0x1e4be8u: goto label_1e4be8;
        case 0x1e4becu: goto label_1e4bec;
        case 0x1e4bf0u: goto label_1e4bf0;
        case 0x1e4bf4u: goto label_1e4bf4;
        case 0x1e4bf8u: goto label_1e4bf8;
        case 0x1e4bfcu: goto label_1e4bfc;
        case 0x1e4c00u: goto label_1e4c00;
        case 0x1e4c04u: goto label_1e4c04;
        case 0x1e4c08u: goto label_1e4c08;
        case 0x1e4c0cu: goto label_1e4c0c;
        case 0x1e4c10u: goto label_1e4c10;
        case 0x1e4c14u: goto label_1e4c14;
        case 0x1e4c18u: goto label_1e4c18;
        case 0x1e4c1cu: goto label_1e4c1c;
        case 0x1e4c20u: goto label_1e4c20;
        case 0x1e4c24u: goto label_1e4c24;
        case 0x1e4c28u: goto label_1e4c28;
        case 0x1e4c2cu: goto label_1e4c2c;
        case 0x1e4c30u: goto label_1e4c30;
        case 0x1e4c34u: goto label_1e4c34;
        case 0x1e4c38u: goto label_1e4c38;
        case 0x1e4c3cu: goto label_1e4c3c;
        case 0x1e4c40u: goto label_1e4c40;
        case 0x1e4c44u: goto label_1e4c44;
        case 0x1e4c48u: goto label_1e4c48;
        case 0x1e4c4cu: goto label_1e4c4c;
        case 0x1e4c50u: goto label_1e4c50;
        case 0x1e4c54u: goto label_1e4c54;
        case 0x1e4c58u: goto label_1e4c58;
        case 0x1e4c5cu: goto label_1e4c5c;
        case 0x1e4c60u: goto label_1e4c60;
        case 0x1e4c64u: goto label_1e4c64;
        case 0x1e4c68u: goto label_1e4c68;
        case 0x1e4c6cu: goto label_1e4c6c;
        case 0x1e4c70u: goto label_1e4c70;
        case 0x1e4c74u: goto label_1e4c74;
        case 0x1e4c78u: goto label_1e4c78;
        case 0x1e4c7cu: goto label_1e4c7c;
        case 0x1e4c80u: goto label_1e4c80;
        case 0x1e4c84u: goto label_1e4c84;
        case 0x1e4c88u: goto label_1e4c88;
        case 0x1e4c8cu: goto label_1e4c8c;
        case 0x1e4c90u: goto label_1e4c90;
        case 0x1e4c94u: goto label_1e4c94;
        case 0x1e4c98u: goto label_1e4c98;
        case 0x1e4c9cu: goto label_1e4c9c;
        case 0x1e4ca0u: goto label_1e4ca0;
        case 0x1e4ca4u: goto label_1e4ca4;
        case 0x1e4ca8u: goto label_1e4ca8;
        case 0x1e4cacu: goto label_1e4cac;
        case 0x1e4cb0u: goto label_1e4cb0;
        case 0x1e4cb4u: goto label_1e4cb4;
        case 0x1e4cb8u: goto label_1e4cb8;
        case 0x1e4cbcu: goto label_1e4cbc;
        case 0x1e4cc0u: goto label_1e4cc0;
        case 0x1e4cc4u: goto label_1e4cc4;
        case 0x1e4cc8u: goto label_1e4cc8;
        case 0x1e4cccu: goto label_1e4ccc;
        case 0x1e4cd0u: goto label_1e4cd0;
        case 0x1e4cd4u: goto label_1e4cd4;
        case 0x1e4cd8u: goto label_1e4cd8;
        case 0x1e4cdcu: goto label_1e4cdc;
        case 0x1e4ce0u: goto label_1e4ce0;
        case 0x1e4ce4u: goto label_1e4ce4;
        case 0x1e4ce8u: goto label_1e4ce8;
        case 0x1e4cecu: goto label_1e4cec;
        case 0x1e4cf0u: goto label_1e4cf0;
        case 0x1e4cf4u: goto label_1e4cf4;
        case 0x1e4cf8u: goto label_1e4cf8;
        case 0x1e4cfcu: goto label_1e4cfc;
        case 0x1e4d00u: goto label_1e4d00;
        case 0x1e4d04u: goto label_1e4d04;
        case 0x1e4d08u: goto label_1e4d08;
        case 0x1e4d0cu: goto label_1e4d0c;
        case 0x1e4d10u: goto label_1e4d10;
        case 0x1e4d14u: goto label_1e4d14;
        case 0x1e4d18u: goto label_1e4d18;
        case 0x1e4d1cu: goto label_1e4d1c;
        case 0x1e4d20u: goto label_1e4d20;
        case 0x1e4d24u: goto label_1e4d24;
        case 0x1e4d28u: goto label_1e4d28;
        case 0x1e4d2cu: goto label_1e4d2c;
        case 0x1e4d30u: goto label_1e4d30;
        case 0x1e4d34u: goto label_1e4d34;
        case 0x1e4d38u: goto label_1e4d38;
        case 0x1e4d3cu: goto label_1e4d3c;
        case 0x1e4d40u: goto label_1e4d40;
        case 0x1e4d44u: goto label_1e4d44;
        case 0x1e4d48u: goto label_1e4d48;
        case 0x1e4d4cu: goto label_1e4d4c;
        case 0x1e4d50u: goto label_1e4d50;
        case 0x1e4d54u: goto label_1e4d54;
        case 0x1e4d58u: goto label_1e4d58;
        case 0x1e4d5cu: goto label_1e4d5c;
        case 0x1e4d60u: goto label_1e4d60;
        case 0x1e4d64u: goto label_1e4d64;
        case 0x1e4d68u: goto label_1e4d68;
        case 0x1e4d6cu: goto label_1e4d6c;
        case 0x1e4d70u: goto label_1e4d70;
        case 0x1e4d74u: goto label_1e4d74;
        case 0x1e4d78u: goto label_1e4d78;
        case 0x1e4d7cu: goto label_1e4d7c;
        case 0x1e4d80u: goto label_1e4d80;
        case 0x1e4d84u: goto label_1e4d84;
        case 0x1e4d88u: goto label_1e4d88;
        case 0x1e4d8cu: goto label_1e4d8c;
        case 0x1e4d90u: goto label_1e4d90;
        case 0x1e4d94u: goto label_1e4d94;
        case 0x1e4d98u: goto label_1e4d98;
        case 0x1e4d9cu: goto label_1e4d9c;
        case 0x1e4da0u: goto label_1e4da0;
        case 0x1e4da4u: goto label_1e4da4;
        case 0x1e4da8u: goto label_1e4da8;
        case 0x1e4dacu: goto label_1e4dac;
        case 0x1e4db0u: goto label_1e4db0;
        case 0x1e4db4u: goto label_1e4db4;
        case 0x1e4db8u: goto label_1e4db8;
        case 0x1e4dbcu: goto label_1e4dbc;
        case 0x1e4dc0u: goto label_1e4dc0;
        case 0x1e4dc4u: goto label_1e4dc4;
        case 0x1e4dc8u: goto label_1e4dc8;
        case 0x1e4dccu: goto label_1e4dcc;
        case 0x1e4dd0u: goto label_1e4dd0;
        case 0x1e4dd4u: goto label_1e4dd4;
        case 0x1e4dd8u: goto label_1e4dd8;
        case 0x1e4ddcu: goto label_1e4ddc;
        case 0x1e4de0u: goto label_1e4de0;
        case 0x1e4de4u: goto label_1e4de4;
        case 0x1e4de8u: goto label_1e4de8;
        case 0x1e4decu: goto label_1e4dec;
        case 0x1e4df0u: goto label_1e4df0;
        case 0x1e4df4u: goto label_1e4df4;
        case 0x1e4df8u: goto label_1e4df8;
        case 0x1e4dfcu: goto label_1e4dfc;
        case 0x1e4e00u: goto label_1e4e00;
        case 0x1e4e04u: goto label_1e4e04;
        case 0x1e4e08u: goto label_1e4e08;
        case 0x1e4e0cu: goto label_1e4e0c;
        case 0x1e4e10u: goto label_1e4e10;
        case 0x1e4e14u: goto label_1e4e14;
        case 0x1e4e18u: goto label_1e4e18;
        case 0x1e4e1cu: goto label_1e4e1c;
        case 0x1e4e20u: goto label_1e4e20;
        case 0x1e4e24u: goto label_1e4e24;
        case 0x1e4e28u: goto label_1e4e28;
        case 0x1e4e2cu: goto label_1e4e2c;
        case 0x1e4e30u: goto label_1e4e30;
        case 0x1e4e34u: goto label_1e4e34;
        case 0x1e4e38u: goto label_1e4e38;
        case 0x1e4e3cu: goto label_1e4e3c;
        case 0x1e4e40u: goto label_1e4e40;
        case 0x1e4e44u: goto label_1e4e44;
        case 0x1e4e48u: goto label_1e4e48;
        case 0x1e4e4cu: goto label_1e4e4c;
        case 0x1e4e50u: goto label_1e4e50;
        default: break;
    }

    ctx->pc = 0x1e49a0u;

label_1e49a0:
    // 0x1e49a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e49a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1e49a4:
    // 0x1e49a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e49a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e49a8:
    // 0x1e49a8: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1e49a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_1e49ac:
    // 0x1e49ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e49acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e49b0:
    // 0x1e49b0: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x1e49b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
label_1e49b4:
    // 0x1e49b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e49b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e49b8:
    // 0x1e49b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e49b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e49bc:
    // 0x1e49bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e49bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e49c0:
    // 0x1e49c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e49c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e49c4:
    // 0x1e49c4: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1e49c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1e49c8:
    // 0x1e49c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e49cc:
    if (ctx->pc == 0x1E49CCu) {
        ctx->pc = 0x1E49CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49C8u;
        // 0x1e49cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E49D0u;
        goto label_1e49d0;
    }
    ctx->pc = 0x1E49C8u;
    {
        const bool branch_taken_0x1e49c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E49CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49C8u;
        // 0x1e49cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e49c8) {
            ctx->pc = 0x1E49D8u;
            goto label_1e49d8;
        }
    }
    ctx->pc = 0x1E49D0u;
label_1e49d0:
    // 0x1e49d0: 0x10000117  b           . + 4 + (0x117 << 2)
label_1e49d4:
    if (ctx->pc == 0x1E49D4u) {
        ctx->pc = 0x1E49D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49D0u;
        // 0x1e49d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E49D8u;
        goto label_1e49d8;
    }
    ctx->pc = 0x1E49D0u;
    {
        const bool branch_taken_0x1e49d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E49D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49D0u;
        // 0x1e49d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e49d0) {
            ctx->pc = 0x1E4E30u;
            goto label_1e4e30;
        }
    }
    ctx->pc = 0x1E49D8u;
label_1e49d8:
    // 0x1e49d8: 0x92220052  lbu         $v0, 0x52($s1)
    ctx->pc = 0x1e49d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
label_1e49dc:
    // 0x1e49dc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1e49e0:
    if (ctx->pc == 0x1E49E0u) {
        ctx->pc = 0x1E49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49DCu;
        // 0x1e49e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E49E4u;
        goto label_1e49e4;
    }
    ctx->pc = 0x1E49DCu;
    {
        const bool branch_taken_0x1e49dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49DCu;
        // 0x1e49e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e49dc) {
            ctx->pc = 0x1E4A58u;
            goto label_1e4a58;
        }
    }
    ctx->pc = 0x1E49E4u;
label_1e49e4:
    // 0x1e49e4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e49e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e49e8:
    // 0x1e49e8: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1e49ec:
    if (ctx->pc == 0x1E49ECu) {
        ctx->pc = 0x1E49F0u;
        goto label_1e49f0;
    }
    ctx->pc = 0x1E49E8u;
    {
        const bool branch_taken_0x1e49e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e49e8) {
            ctx->pc = 0x1E4A54u;
            goto label_1e4a54;
        }
    }
    ctx->pc = 0x1E49F0u;
label_1e49f0:
    // 0x1e49f0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e49f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e49f4:
    // 0x1e49f4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e49f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e49f8:
    // 0x1e49f8: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1e49f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e49fc:
    // 0x1e49fc: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_1e4a00:
    if (ctx->pc == 0x1E4A00u) {
        ctx->pc = 0x1E4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49FCu;
        // 0x1e4a00: 0x26230030  addiu       $v1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A04u;
        goto label_1e4a04;
    }
    ctx->pc = 0x1E49FCu;
    {
        const bool branch_taken_0x1e49fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49FCu;
        // 0x1e4a00: 0x26230030  addiu       $v1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e49fc) {
            ctx->pc = 0x1E4A44u;
            goto label_1e4a44;
        }
    }
    ctx->pc = 0x1E4A04u;
label_1e4a04:
    // 0x1e4a04: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1e4a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4a08:
    // 0x1e4a08: 0x27c40060  addiu       $a0, $fp, 0x60
    ctx->pc = 0x1e4a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
label_1e4a0c:
    // 0x1e4a0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e4a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4a10:
    // 0x1e4a10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e4a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4a14:
    // 0x1e4a14: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1e4a14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e4a18:
    // 0x1e4a18: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1e4a18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1e4a1c:
    // 0x1e4a1c: 0x320f809  jalr        $t9
label_1e4a20:
    if (ctx->pc == 0x1E4A20u) {
        ctx->pc = 0x1E4A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A1Cu;
        // 0x1e4a20: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A24u;
        goto label_1e4a24;
    }
    ctx->pc = 0x1E4A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4A24u);
        ctx->pc = 0x1E4A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A1Cu;
        // 0x1e4a20: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4A1Cu, 0x1E4A24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4A24u;
label_1e4a24:
    // 0x1e4a24: 0x27c30060  addiu       $v1, $fp, 0x60
    ctx->pc = 0x1e4a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
label_1e4a28:
    // 0x1e4a28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e4a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e4a2c:
    // 0x1e4a2c: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x1e4a2cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1e4a30:
    // 0x1e4a30: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1e4a34:
    if (ctx->pc == 0x1E4A34u) {
        ctx->pc = 0x1E4A38u;
        goto label_1e4a38;
    }
    ctx->pc = 0x1E4A30u;
    {
        const bool branch_taken_0x1e4a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e4a30) {
            ctx->pc = 0x1E4A40u;
            goto label_1e4a40;
        }
    }
    ctx->pc = 0x1E4A38u;
label_1e4a38:
    // 0x1e4a38: 0x100000fe  b           . + 4 + (0xFE << 2)
label_1e4a3c:
    if (ctx->pc == 0x1E4A3Cu) {
        ctx->pc = 0x1E4A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A38u;
        // 0x1e4a3c: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A40u;
        goto label_1e4a40;
    }
    ctx->pc = 0x1E4A38u;
    {
        const bool branch_taken_0x1e4a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A38u;
        // 0x1e4a3c: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a38) {
            ctx->pc = 0x1E4E34u;
            goto label_1e4e34;
        }
    }
    ctx->pc = 0x1E4A40u;
label_1e4a40:
    // 0x1e4a40: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x1e4a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1e4a44:
    // 0x1e4a44: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x1e4a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1e4a48:
    // 0x1e4a48: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x1e4a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_1e4a4c:
    // 0x1e4a4c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x1e4a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_1e4a50:
    // 0x1e4a50: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1e4a50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_1e4a54:
    // 0x1e4a54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4a58:
    // 0x1e4a58: 0xa2220050  sb          $v0, 0x50($s1)
    ctx->pc = 0x1e4a58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 2));
label_1e4a5c:
    // 0x1e4a5c: 0x92220051  lbu         $v0, 0x51($s1)
    ctx->pc = 0x1e4a5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 81)));
label_1e4a60:
    // 0x1e4a60: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
label_1e4a64:
    if (ctx->pc == 0x1E4A64u) {
        ctx->pc = 0x1E4A68u;
        goto label_1e4a68;
    }
    ctx->pc = 0x1E4A60u;
    {
        const bool branch_taken_0x1e4a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4a60) {
            ctx->pc = 0x1E4CC8u;
            goto label_1e4cc8;
        }
    }
    ctx->pc = 0x1E4A68u;
label_1e4a68:
    // 0x1e4a68: 0x1000004f  b           . + 4 + (0x4F << 2)
label_1e4a6c:
    if (ctx->pc == 0x1E4A6Cu) {
        ctx->pc = 0x1E4A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A68u;
        // 0x1e4a6c: 0x8e320010  lw          $s2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A70u;
        goto label_1e4a70;
    }
    ctx->pc = 0x1E4A68u;
    {
        const bool branch_taken_0x1e4a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A68u;
        // 0x1e4a6c: 0x8e320010  lw          $s2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a68) {
            ctx->pc = 0x1E4BA8u;
            goto label_1e4ba8;
        }
    }
    ctx->pc = 0x1E4A70u;
label_1e4a70:
    // 0x1e4a70: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1e4a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4a74:
    // 0x1e4a74: 0x96530000  lhu         $s3, 0x0($s2)
    ctx->pc = 0x1e4a74u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1e4a78:
    // 0x1e4a78: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e4a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1e4a7c:
    // 0x1e4a7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e4a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e4a80:
    // 0x1e4a80: 0x441001b  bgez        $v0, . + 4 + (0x1B << 2)
label_1e4a84:
    if (ctx->pc == 0x1E4A84u) {
        ctx->pc = 0x1E4A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A80u;
        // 0x1e4a84: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A88u;
        goto label_1e4a88;
    }
    ctx->pc = 0x1E4A80u;
    {
        const bool branch_taken_0x1e4a80 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E4A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A80u;
        // 0x1e4a84: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a80) {
            ctx->pc = 0x1E4AF0u;
            goto label_1e4af0;
        }
    }
    ctx->pc = 0x1E4A88u;
label_1e4a88:
    // 0x1e4a88: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1e4a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4a8c:
    // 0x1e4a8c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e4a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1e4a90:
    // 0x1e4a90: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1e4a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1e4a94:
    // 0x1e4a94: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e4a94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e4a98:
    // 0x1e4a98: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e4a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e4a9c:
    // 0x1e4a9c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1e4aa0:
    if (ctx->pc == 0x1E4AA0u) {
        ctx->pc = 0x1E4AA4u;
        goto label_1e4aa4;
    }
    ctx->pc = 0x1E4A9Cu;
    {
        const bool branch_taken_0x1e4a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4a9c) {
            ctx->pc = 0x1E4AE0u;
            goto label_1e4ae0;
        }
    }
    ctx->pc = 0x1E4AA4u;
label_1e4aa4:
    // 0x1e4aa4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e4aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e4aa8:
    // 0x1e4aa8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e4aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e4aac:
    // 0x1e4aac: 0xa0530000  sb          $s3, 0x0($v0)
    ctx->pc = 0x1e4aacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 19));
label_1e4ab0:
    // 0x1e4ab0: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1e4ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4ab4:
    // 0x1e4ab4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e4ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e4ab8:
    // 0x1e4ab8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e4ab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e4abc:
    // 0x1e4abc: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
label_1e4ac0:
    if (ctx->pc == 0x1E4AC0u) {
        ctx->pc = 0x1E4AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4ABCu;
        // 0x1e4ac0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4AC4u;
        goto label_1e4ac4;
    }
    ctx->pc = 0x1E4ABCu;
    {
        const bool branch_taken_0x1e4abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E4AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4ABCu;
        // 0x1e4ac0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4abc) {
            ctx->pc = 0x1E4AD0u;
            goto label_1e4ad0;
        }
    }
    ctx->pc = 0x1E4AC4u;
label_1e4ac4:
    // 0x1e4ac4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e4ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1e4ac8:
    // 0x1e4ac8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e4acc:
    if (ctx->pc == 0x1E4ACCu) {
        ctx->pc = 0x1E4ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4AC8u;
        // 0x1e4acc: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4AD0u;
        goto label_1e4ad0;
    }
    ctx->pc = 0x1E4AC8u;
    {
        const bool branch_taken_0x1e4ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4AC8u;
        // 0x1e4acc: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ac8) {
            ctx->pc = 0x1E4AD8u;
            goto label_1e4ad8;
        }
    }
    ctx->pc = 0x1E4AD0u;
label_1e4ad0:
    // 0x1e4ad0: 0xc0817ae  jal         func_205EB8
label_1e4ad4:
    if (ctx->pc == 0x1E4AD4u) {
        ctx->pc = 0x1E4AD8u;
        goto label_1e4ad8;
    }
    ctx->pc = 0x1E4AD0u;
    SET_GPR_U32(ctx, 31, 0x1E4AD8u);
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E4AD0u, 0x1E4AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4AD8u;
label_1e4ad8:
    // 0x1e4ad8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e4adc:
    if (ctx->pc == 0x1E4ADCu) {
        ctx->pc = 0x1E4AE0u;
        goto label_1e4ae0;
    }
    ctx->pc = 0x1E4AD8u;
    {
        const bool branch_taken_0x1e4ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4ad8) {
            ctx->pc = 0x1E4AE8u;
            goto label_1e4ae8;
        }
    }
    ctx->pc = 0x1E4AE0u;
label_1e4ae0:
    // 0x1e4ae0: 0xc0817ae  jal         func_205EB8
label_1e4ae4:
    if (ctx->pc == 0x1E4AE4u) {
        ctx->pc = 0x1E4AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4AE0u;
        // 0x1e4ae4: 0x3264ffff  andi        $a0, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4AE8u;
        goto label_1e4ae8;
    }
    ctx->pc = 0x1E4AE0u;
    SET_GPR_U32(ctx, 31, 0x1E4AE8u);
    ctx->pc = 0x1E4AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4AE0u;
    // 0x1e4ae4: 0x3264ffff  andi        $a0, $s3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E4AE0u, 0x1E4AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4AE8u;
label_1e4ae8:
    // 0x1e4ae8: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e4aec:
    if (ctx->pc == 0x1E4AECu) {
        ctx->pc = 0x1E4AF0u;
        goto label_1e4af0;
    }
    ctx->pc = 0x1E4AE8u;
    {
        const bool branch_taken_0x1e4ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4ae8) {
            ctx->pc = 0x1E4B14u;
            goto label_1e4b14;
        }
    }
    ctx->pc = 0x1E4AF0u;
label_1e4af0:
    // 0x1e4af0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4af4:
    // 0x1e4af4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e4af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e4af8:
    // 0x1e4af8: 0xa0530000  sb          $s3, 0x0($v0)
    ctx->pc = 0x1e4af8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 19));
label_1e4afc:
    // 0x1e4afc: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1e4afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4b00:
    // 0x1e4b00: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e4b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4b04:
    // 0x1e4b04: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e4b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e4b08:
    // 0x1e4b08: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e4b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1e4b0c:
    // 0x1e4b0c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e4b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e4b10:
    // 0x1e4b10: 0x0  nop
    ctx->pc = 0x1e4b10u;
    // NOP
label_1e4b14:
    // 0x1e4b14: 0x0  nop
    ctx->pc = 0x1e4b14u;
    // NOP
label_1e4b18:
    // 0x1e4b18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e4b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e4b1c:
    // 0x1e4b1c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e4b20:
    if (ctx->pc == 0x1E4B20u) {
        ctx->pc = 0x1E4B24u;
        goto label_1e4b24;
    }
    ctx->pc = 0x1E4B1Cu;
    {
        const bool branch_taken_0x1e4b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e4b1c) {
            ctx->pc = 0x1E4B2Cu;
            goto label_1e4b2c;
        }
    }
    ctx->pc = 0x1E4B24u;
label_1e4b24:
    // 0x1e4b24: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e4b28:
    if (ctx->pc == 0x1E4B28u) {
        ctx->pc = 0x1E4B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B24u;
        // 0x1e4b28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4B2Cu;
        goto label_1e4b2c;
    }
    ctx->pc = 0x1E4B24u;
    {
        const bool branch_taken_0x1e4b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B24u;
        // 0x1e4b28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b24) {
            ctx->pc = 0x1E4B34u;
            goto label_1e4b34;
        }
    }
    ctx->pc = 0x1E4B2Cu;
label_1e4b2c:
    // 0x1e4b2c: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x1e4b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_1e4b30:
    // 0x1e4b30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e4b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e4b34:
    // 0x1e4b34: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_1e4b38:
    if (ctx->pc == 0x1E4B38u) {
        ctx->pc = 0x1E4B3Cu;
        goto label_1e4b3c;
    }
    ctx->pc = 0x1E4B34u;
    {
        const bool branch_taken_0x1e4b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e4b34) {
            ctx->pc = 0x1E4BA4u;
            goto label_1e4ba4;
        }
    }
    ctx->pc = 0x1E4B3Cu;
label_1e4b3c:
    // 0x1e4b3c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1e4b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e4b40:
    // 0x1e4b40: 0x92082b  sltu        $at, $a0, $s2
    ctx->pc = 0x1e4b40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1e4b44:
    // 0x1e4b44: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_1e4b48:
    if (ctx->pc == 0x1E4B48u) {
        ctx->pc = 0x1E4B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B44u;
        // 0x1e4b48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4B4Cu;
        goto label_1e4b4c;
    }
    ctx->pc = 0x1E4B44u;
    {
        const bool branch_taken_0x1e4b44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B44u;
        // 0x1e4b48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b44) {
            ctx->pc = 0x1E4B9Cu;
            goto label_1e4b9c;
        }
    }
    ctx->pc = 0x1E4B4Cu;
label_1e4b4c:
    // 0x1e4b4c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e4b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e4b50:
    // 0x1e4b50: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x1e4b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1e4b54:
    // 0x1e4b54: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e4b58:
    if (ctx->pc == 0x1E4B58u) {
        ctx->pc = 0x1E4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B54u;
        // 0x1e4b58: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4B5Cu;
        goto label_1e4b5c;
    }
    ctx->pc = 0x1E4B54u;
    {
        const bool branch_taken_0x1e4b54 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B54u;
        // 0x1e4b58: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b54) {
            ctx->pc = 0x1E4B64u;
            goto label_1e4b64;
        }
    }
    ctx->pc = 0x1E4B5Cu;
label_1e4b5c:
    // 0x1e4b5c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e4b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e4b60:
    // 0x1e4b60: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1e4b60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1e4b64:
    // 0x1e4b64: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1e4b64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1e4b68:
    // 0x1e4b68: 0xc07fdfe  jal         func_1FF7F8
label_1e4b6c:
    if (ctx->pc == 0x1E4B6Cu) {
        ctx->pc = 0x1E4B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B68u;
        // 0x1e4b6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4B70u;
        goto label_1e4b70;
    }
    ctx->pc = 0x1E4B68u;
    SET_GPR_U32(ctx, 31, 0x1E4B70u);
    ctx->pc = 0x1E4B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4B68u;
    // 0x1e4b6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1E4B68u, 0x1E4B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4B70u;
label_1e4b70:
    // 0x1e4b70: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e4b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e4b74:
    // 0x1e4b74: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x1e4b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1e4b78:
    // 0x1e4b78: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e4b7c:
    if (ctx->pc == 0x1E4B7Cu) {
        ctx->pc = 0x1E4B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B78u;
        // 0x1e4b7c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4B80u;
        goto label_1e4b80;
    }
    ctx->pc = 0x1E4B78u;
    {
        const bool branch_taken_0x1e4b78 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E4B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B78u;
        // 0x1e4b7c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b78) {
            ctx->pc = 0x1E4B88u;
            goto label_1e4b88;
        }
    }
    ctx->pc = 0x1E4B80u;
label_1e4b80:
    // 0x1e4b80: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e4b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e4b84:
    // 0x1e4b84: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1e4b84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1e4b88:
    // 0x1e4b88: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1e4b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1e4b8c:
    // 0x1e4b8c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e4b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e4b90:
    // 0x1e4b90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4b94:
    // 0x1e4b94: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1e4b94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_1e4b98:
    // 0x1e4b98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e4b9c:
    // 0x1e4b9c: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_1e4ba0:
    if (ctx->pc == 0x1E4BA0u) {
        ctx->pc = 0x1E4BA4u;
        goto label_1e4ba4;
    }
    ctx->pc = 0x1E4B9Cu;
    {
        const bool branch_taken_0x1e4b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4b9c) {
            ctx->pc = 0x1E4E30u;
            goto label_1e4e30;
        }
    }
    ctx->pc = 0x1E4BA4u;
label_1e4ba4:
    // 0x1e4ba4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1e4ba4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_1e4ba8:
    // 0x1e4ba8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e4ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e4bac:
    // 0x1e4bac: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x1e4bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e4bb0:
    // 0x1e4bb0: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
label_1e4bb4:
    if (ctx->pc == 0x1E4BB4u) {
        ctx->pc = 0x1E4BB8u;
        goto label_1e4bb8;
    }
    ctx->pc = 0x1E4BB0u;
    {
        const bool branch_taken_0x1e4bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4bb0) {
            ctx->pc = 0x1E4A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4a70;
        }
    }
    ctx->pc = 0x1E4BB8u;
label_1e4bb8:
    // 0x1e4bb8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e4bbc:
    // 0x1e4bbc: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1e4bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4bc0:
    // 0x1e4bc0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e4bc4:
    if (ctx->pc == 0x1E4BC4u) {
        ctx->pc = 0x1E4BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4BC0u;
        // 0x1e4bc4: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4BC8u;
        goto label_1e4bc8;
    }
    ctx->pc = 0x1E4BC0u;
    {
        const bool branch_taken_0x1e4bc0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E4BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4BC0u;
        // 0x1e4bc4: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4bc0) {
            ctx->pc = 0x1E4BD0u;
            goto label_1e4bd0;
        }
    }
    ctx->pc = 0x1E4BC8u;
label_1e4bc8:
    // 0x1e4bc8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e4bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e4bcc:
    // 0x1e4bcc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1e4bccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1e4bd0:
    // 0x1e4bd0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e4bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e4bd4:
    // 0x1e4bd4: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1e4bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1e4bd8:
    // 0x1e4bd8: 0x2001027  not         $v0, $s0
    ctx->pc = 0x1e4bd8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
label_1e4bdc:
    // 0x1e4bdc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e4bdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e4be0:
    // 0x1e4be0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e4be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e4be4:
    // 0x1e4be4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1e4be4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e4be8:
    // 0x1e4be8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1e4be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e4bec:
    // 0x1e4bec: 0x10a00032  beqz        $a1, . + 4 + (0x32 << 2)
label_1e4bf0:
    if (ctx->pc == 0x1E4BF0u) {
        ctx->pc = 0x1E4BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4BECu;
        // 0x1e4bf0: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4BF4u;
        goto label_1e4bf4;
    }
    ctx->pc = 0x1E4BECu;
    {
        const bool branch_taken_0x1e4bec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4BECu;
        // 0x1e4bf0: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4bec) {
            ctx->pc = 0x1E4CB8u;
            goto label_1e4cb8;
        }
    }
    ctx->pc = 0x1E4BF4u;
label_1e4bf4:
    // 0x1e4bf4: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1e4bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4bf8:
    // 0x1e4bf8: 0x3212ffff  andi        $s2, $s0, 0xFFFF
    ctx->pc = 0x1e4bf8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1e4bfc:
    // 0x1e4bfc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e4bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1e4c00:
    // 0x1e4c00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e4c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e4c04:
    // 0x1e4c04: 0x441001b  bgez        $v0, . + 4 + (0x1B << 2)
label_1e4c08:
    if (ctx->pc == 0x1E4C08u) {
        ctx->pc = 0x1E4C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C04u;
        // 0x1e4c08: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4C0Cu;
        goto label_1e4c0c;
    }
    ctx->pc = 0x1E4C04u;
    {
        const bool branch_taken_0x1e4c04 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E4C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C04u;
        // 0x1e4c08: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4c04) {
            ctx->pc = 0x1E4C74u;
            goto label_1e4c74;
        }
    }
    ctx->pc = 0x1E4C0Cu;
label_1e4c0c:
    // 0x1e4c0c: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1e4c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4c10:
    // 0x1e4c10: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e4c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1e4c14:
    // 0x1e4c14: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1e4c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1e4c18:
    // 0x1e4c18: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e4c18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e4c1c:
    // 0x1e4c1c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e4c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e4c20:
    // 0x1e4c20: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1e4c24:
    if (ctx->pc == 0x1E4C24u) {
        ctx->pc = 0x1E4C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C20u;
        // 0x1e4c24: 0x3244ffff  andi        $a0, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4C28u;
        goto label_1e4c28;
    }
    ctx->pc = 0x1E4C20u;
    {
        const bool branch_taken_0x1e4c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C20u;
        // 0x1e4c24: 0x3244ffff  andi        $a0, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4c20) {
            ctx->pc = 0x1E4C64u;
            goto label_1e4c64;
        }
    }
    ctx->pc = 0x1E4C28u;
label_1e4c28:
    // 0x1e4c28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e4c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e4c2c:
    // 0x1e4c2c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e4c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e4c30:
    // 0x1e4c30: 0xa0520000  sb          $s2, 0x0($v0)
    ctx->pc = 0x1e4c30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 18));
label_1e4c34:
    // 0x1e4c34: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1e4c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4c38:
    // 0x1e4c38: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e4c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e4c3c:
    // 0x1e4c3c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e4c3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e4c40:
    // 0x1e4c40: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
label_1e4c44:
    if (ctx->pc == 0x1E4C44u) {
        ctx->pc = 0x1E4C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C40u;
        // 0x1e4c44: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4C48u;
        goto label_1e4c48;
    }
    ctx->pc = 0x1E4C40u;
    {
        const bool branch_taken_0x1e4c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E4C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C40u;
        // 0x1e4c44: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4c40) {
            ctx->pc = 0x1E4C54u;
            goto label_1e4c54;
        }
    }
    ctx->pc = 0x1E4C48u;
label_1e4c48:
    // 0x1e4c48: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e4c48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1e4c4c:
    // 0x1e4c4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e4c50:
    if (ctx->pc == 0x1E4C50u) {
        ctx->pc = 0x1E4C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C4Cu;
        // 0x1e4c50: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4C54u;
        goto label_1e4c54;
    }
    ctx->pc = 0x1E4C4Cu;
    {
        const bool branch_taken_0x1e4c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C4Cu;
        // 0x1e4c50: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4c4c) {
            ctx->pc = 0x1E4C5Cu;
            goto label_1e4c5c;
        }
    }
    ctx->pc = 0x1E4C54u;
label_1e4c54:
    // 0x1e4c54: 0xc0817ae  jal         func_205EB8
label_1e4c58:
    if (ctx->pc == 0x1E4C58u) {
        ctx->pc = 0x1E4C5Cu;
        goto label_1e4c5c;
    }
    ctx->pc = 0x1E4C54u;
    SET_GPR_U32(ctx, 31, 0x1E4C5Cu);
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E4C54u, 0x1E4C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C5Cu;
label_1e4c5c:
    // 0x1e4c5c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e4c60:
    if (ctx->pc == 0x1E4C60u) {
        ctx->pc = 0x1E4C64u;
        goto label_1e4c64;
    }
    ctx->pc = 0x1E4C5Cu;
    {
        const bool branch_taken_0x1e4c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4c5c) {
            ctx->pc = 0x1E4C6Cu;
            goto label_1e4c6c;
        }
    }
    ctx->pc = 0x1E4C64u;
label_1e4c64:
    // 0x1e4c64: 0xc0817ae  jal         func_205EB8
label_1e4c68:
    if (ctx->pc == 0x1E4C68u) {
        ctx->pc = 0x1E4C6Cu;
        goto label_1e4c6c;
    }
    ctx->pc = 0x1E4C64u;
    SET_GPR_U32(ctx, 31, 0x1E4C6Cu);
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E4C64u, 0x1E4C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C6Cu;
label_1e4c6c:
    // 0x1e4c6c: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e4c70:
    if (ctx->pc == 0x1E4C70u) {
        ctx->pc = 0x1E4C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C6Cu;
        // 0x1e4c70: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4C74u;
        goto label_1e4c74;
    }
    ctx->pc = 0x1E4C6Cu;
    {
        const bool branch_taken_0x1e4c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C6Cu;
        // 0x1e4c70: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4c6c) {
            ctx->pc = 0x1E4C9Cu;
            goto label_1e4c9c;
        }
    }
    ctx->pc = 0x1E4C74u;
label_1e4c74:
    // 0x1e4c74: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4c78:
    // 0x1e4c78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e4c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e4c7c:
    // 0x1e4c7c: 0xa0520000  sb          $s2, 0x0($v0)
    ctx->pc = 0x1e4c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 18));
label_1e4c80:
    // 0x1e4c80: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1e4c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4c84:
    // 0x1e4c84: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e4c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4c88:
    // 0x1e4c88: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e4c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e4c8c:
    // 0x1e4c8c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e4c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1e4c90:
    // 0x1e4c90: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e4c90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e4c94:
    // 0x1e4c94: 0x0  nop
    ctx->pc = 0x1e4c94u;
    // NOP
label_1e4c98:
    // 0x1e4c98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e4c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e4c9c:
    // 0x1e4c9c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e4ca0:
    if (ctx->pc == 0x1E4CA0u) {
        ctx->pc = 0x1E4CA4u;
        goto label_1e4ca4;
    }
    ctx->pc = 0x1E4C9Cu;
    {
        const bool branch_taken_0x1e4c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e4c9c) {
            ctx->pc = 0x1E4CACu;
            goto label_1e4cac;
        }
    }
    ctx->pc = 0x1E4CA4u;
label_1e4ca4:
    // 0x1e4ca4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e4ca8:
    if (ctx->pc == 0x1E4CA8u) {
        ctx->pc = 0x1E4CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CA4u;
        // 0x1e4ca8: 0x601027  not         $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CACu;
        goto label_1e4cac;
    }
    ctx->pc = 0x1E4CA4u;
    {
        const bool branch_taken_0x1e4ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CA4u;
        // 0x1e4ca8: 0x601027  not         $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ca4) {
            ctx->pc = 0x1E4CB4u;
            goto label_1e4cb4;
        }
    }
    ctx->pc = 0x1E4CACu;
label_1e4cac:
    // 0x1e4cac: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x1e4cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_1e4cb0:
    // 0x1e4cb0: 0x601027  not         $v0, $v1
    ctx->pc = 0x1e4cb0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_1e4cb4:
    // 0x1e4cb4: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1e4cb4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e4cb8:
    // 0x1e4cb8: 0x10a00059  beqz        $a1, . + 4 + (0x59 << 2)
label_1e4cbc:
    if (ctx->pc == 0x1E4CBCu) {
        ctx->pc = 0x1E4CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CB8u;
        // 0x1e4cbc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CC0u;
        goto label_1e4cc0;
    }
    ctx->pc = 0x1E4CB8u;
    {
        const bool branch_taken_0x1e4cb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CB8u;
        // 0x1e4cbc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4cb8) {
            ctx->pc = 0x1E4E20u;
            goto label_1e4e20;
        }
    }
    ctx->pc = 0x1E4CC0u;
label_1e4cc0:
    // 0x1e4cc0: 0x1000005b  b           . + 4 + (0x5B << 2)
label_1e4cc4:
    if (ctx->pc == 0x1E4CC4u) {
        ctx->pc = 0x1E4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CC0u;
        // 0x1e4cc4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CC8u;
        goto label_1e4cc8;
    }
    ctx->pc = 0x1E4CC0u;
    {
        const bool branch_taken_0x1e4cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CC0u;
        // 0x1e4cc4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4cc0) {
            ctx->pc = 0x1E4E30u;
            goto label_1e4e30;
        }
    }
    ctx->pc = 0x1E4CC8u;
label_1e4cc8:
    // 0x1e4cc8: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1e4cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1e4ccc:
    // 0x1e4ccc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4cccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4cd0:
    // 0x1e4cd0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e4cd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e4cd4:
    // 0x1e4cd4: 0x320f809  jalr        $t9
label_1e4cd8:
    if (ctx->pc == 0x1E4CD8u) {
        ctx->pc = 0x1E4CDCu;
        goto label_1e4cdc;
    }
    ctx->pc = 0x1E4CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4CDCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4CD4u, 0x1E4CDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4CDCu;
label_1e4cdc:
    // 0x1e4cdc: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e4ce0:
    if (ctx->pc == 0x1E4CE0u) {
        ctx->pc = 0x1E4CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CDCu;
        // 0x1e4ce0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CE4u;
        goto label_1e4ce4;
    }
    ctx->pc = 0x1E4CDCu;
    {
        const bool branch_taken_0x1e4cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CDCu;
        // 0x1e4ce0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4cdc) {
            ctx->pc = 0x1E4D0Cu;
            goto label_1e4d0c;
        }
    }
    ctx->pc = 0x1E4CE4u;
label_1e4ce4:
    // 0x1e4ce4: 0xc07a704  jal         func_1E9C10
label_1e4ce8:
    if (ctx->pc == 0x1E4CE8u) {
        ctx->pc = 0x1E4CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CE4u;
        // 0x1e4ce8: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CECu;
        goto label_1e4cec;
    }
    ctx->pc = 0x1E4CE4u;
    SET_GPR_U32(ctx, 31, 0x1E4CECu);
    ctx->pc = 0x1E4CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CE4u;
    // 0x1e4ce8: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E4CE4u, 0x1E4CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4CECu;
label_1e4cec:
    // 0x1e4cec: 0x0  nop
    ctx->pc = 0x1e4cecu;
    // NOP
label_1e4cf0:
    // 0x1e4cf0: 0x0  nop
    ctx->pc = 0x1e4cf0u;
    // NOP
label_1e4cf4:
    // 0x1e4cf4: 0x0  nop
    ctx->pc = 0x1e4cf4u;
    // NOP
label_1e4cf8:
    // 0x1e4cf8: 0x0  nop
    ctx->pc = 0x1e4cf8u;
    // NOP
label_1e4cfc:
    // 0x1e4cfc: 0x0  nop
    ctx->pc = 0x1e4cfcu;
    // NOP
label_1e4d00:
    // 0x1e4d00: 0x0  nop
    ctx->pc = 0x1e4d00u;
    // NOP
label_1e4d04:
    // 0x1e4d04: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e4d08:
    if (ctx->pc == 0x1E4D08u) {
        ctx->pc = 0x1E4D0Cu;
        goto label_1e4d0c;
    }
    ctx->pc = 0x1E4D04u;
    {
        const bool branch_taken_0x1e4d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4d04) {
            ctx->pc = 0x1E4CECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4cec;
        }
    }
    ctx->pc = 0x1E4D0Cu;
label_1e4d0c:
    // 0x1e4d0c: 0x0  nop
    ctx->pc = 0x1e4d0cu;
    // NOP
label_1e4d10:
    // 0x1e4d10: 0x10000023  b           . + 4 + (0x23 << 2)
label_1e4d14:
    if (ctx->pc == 0x1E4D14u) {
        ctx->pc = 0x1E4D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D10u;
        // 0x1e4d14: 0x8e320010  lw          $s2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4D18u;
        goto label_1e4d18;
    }
    ctx->pc = 0x1E4D10u;
    {
        const bool branch_taken_0x1e4d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D10u;
        // 0x1e4d14: 0x8e320010  lw          $s2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d10) {
            ctx->pc = 0x1E4DA0u;
            goto label_1e4da0;
        }
    }
    ctx->pc = 0x1E4D18u;
label_1e4d18:
    // 0x1e4d18: 0x96460000  lhu         $a2, 0x0($s2)
    ctx->pc = 0x1e4d18u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1e4d1c:
    // 0x1e4d1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4d20:
    // 0x1e4d20: 0xc079804  jal         func_1E6010
label_1e4d24:
    if (ctx->pc == 0x1E4D24u) {
        ctx->pc = 0x1E4D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D20u;
        // 0x1e4d24: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4D28u;
        goto label_1e4d28;
    }
    ctx->pc = 0x1E4D20u;
    SET_GPR_U32(ctx, 31, 0x1E4D28u);
    ctx->pc = 0x1E4D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4D20u;
    // 0x1e4d24: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6010u, 0x1E4D20u, 0x1E4D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4D28u;
label_1e4d28:
    // 0x1e4d28: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e4d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e4d2c:
    // 0x1e4d2c: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
label_1e4d30:
    if (ctx->pc == 0x1E4D30u) {
        ctx->pc = 0x1E4D34u;
        goto label_1e4d34;
    }
    ctx->pc = 0x1E4D2Cu;
    {
        const bool branch_taken_0x1e4d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e4d2c) {
            ctx->pc = 0x1E4D9Cu;
            goto label_1e4d9c;
        }
    }
    ctx->pc = 0x1E4D34u;
label_1e4d34:
    // 0x1e4d34: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1e4d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e4d38:
    // 0x1e4d38: 0x92082b  sltu        $at, $a0, $s2
    ctx->pc = 0x1e4d38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1e4d3c:
    // 0x1e4d3c: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_1e4d40:
    if (ctx->pc == 0x1E4D40u) {
        ctx->pc = 0x1E4D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D3Cu;
        // 0x1e4d40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4D44u;
        goto label_1e4d44;
    }
    ctx->pc = 0x1E4D3Cu;
    {
        const bool branch_taken_0x1e4d3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D3Cu;
        // 0x1e4d40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d3c) {
            ctx->pc = 0x1E4D94u;
            goto label_1e4d94;
        }
    }
    ctx->pc = 0x1E4D44u;
label_1e4d44:
    // 0x1e4d44: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e4d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e4d48:
    // 0x1e4d48: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x1e4d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1e4d4c:
    // 0x1e4d4c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e4d50:
    if (ctx->pc == 0x1E4D50u) {
        ctx->pc = 0x1E4D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D4Cu;
        // 0x1e4d50: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4D54u;
        goto label_1e4d54;
    }
    ctx->pc = 0x1E4D4Cu;
    {
        const bool branch_taken_0x1e4d4c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E4D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D4Cu;
        // 0x1e4d50: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d4c) {
            ctx->pc = 0x1E4D5Cu;
            goto label_1e4d5c;
        }
    }
    ctx->pc = 0x1E4D54u;
label_1e4d54:
    // 0x1e4d54: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e4d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e4d58:
    // 0x1e4d58: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1e4d58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1e4d5c:
    // 0x1e4d5c: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1e4d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1e4d60:
    // 0x1e4d60: 0xc07fdfe  jal         func_1FF7F8
label_1e4d64:
    if (ctx->pc == 0x1E4D64u) {
        ctx->pc = 0x1E4D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D60u;
        // 0x1e4d64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4D68u;
        goto label_1e4d68;
    }
    ctx->pc = 0x1E4D60u;
    SET_GPR_U32(ctx, 31, 0x1E4D68u);
    ctx->pc = 0x1E4D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4D60u;
    // 0x1e4d64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1E4D60u, 0x1E4D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4D68u;
label_1e4d68:
    // 0x1e4d68: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e4d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e4d6c:
    // 0x1e4d6c: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x1e4d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1e4d70:
    // 0x1e4d70: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e4d74:
    if (ctx->pc == 0x1E4D74u) {
        ctx->pc = 0x1E4D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D70u;
        // 0x1e4d74: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4D78u;
        goto label_1e4d78;
    }
    ctx->pc = 0x1E4D70u;
    {
        const bool branch_taken_0x1e4d70 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E4D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D70u;
        // 0x1e4d74: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d70) {
            ctx->pc = 0x1E4D80u;
            goto label_1e4d80;
        }
    }
    ctx->pc = 0x1E4D78u;
label_1e4d78:
    // 0x1e4d78: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e4d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e4d7c:
    // 0x1e4d7c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1e4d7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1e4d80:
    // 0x1e4d80: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1e4d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1e4d84:
    // 0x1e4d84: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e4d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e4d88:
    // 0x1e4d88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4d8c:
    // 0x1e4d8c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1e4d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_1e4d90:
    // 0x1e4d90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e4d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e4d94:
    // 0x1e4d94: 0x10000026  b           . + 4 + (0x26 << 2)
label_1e4d98:
    if (ctx->pc == 0x1E4D98u) {
        ctx->pc = 0x1E4D9Cu;
        goto label_1e4d9c;
    }
    ctx->pc = 0x1E4D94u;
    {
        const bool branch_taken_0x1e4d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4d94) {
            ctx->pc = 0x1E4E30u;
            goto label_1e4e30;
        }
    }
    ctx->pc = 0x1E4D9Cu;
label_1e4d9c:
    // 0x1e4d9c: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1e4d9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_1e4da0:
    // 0x1e4da0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e4da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e4da4:
    // 0x1e4da4: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x1e4da4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e4da8:
    // 0x1e4da8: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_1e4dac:
    if (ctx->pc == 0x1E4DACu) {
        ctx->pc = 0x1E4DB0u;
        goto label_1e4db0;
    }
    ctx->pc = 0x1E4DA8u;
    {
        const bool branch_taken_0x1e4da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4da8) {
            ctx->pc = 0x1E4D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4d18;
        }
    }
    ctx->pc = 0x1E4DB0u;
label_1e4db0:
    // 0x1e4db0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e4db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e4db4:
    // 0x1e4db4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1e4db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4db8:
    // 0x1e4db8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e4dbc:
    if (ctx->pc == 0x1E4DBCu) {
        ctx->pc = 0x1E4DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DB8u;
        // 0x1e4dbc: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4DC0u;
        goto label_1e4dc0;
    }
    ctx->pc = 0x1E4DB8u;
    {
        const bool branch_taken_0x1e4db8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E4DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DB8u;
        // 0x1e4dbc: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4db8) {
            ctx->pc = 0x1E4DC8u;
            goto label_1e4dc8;
        }
    }
    ctx->pc = 0x1E4DC0u;
label_1e4dc0:
    // 0x1e4dc0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e4dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e4dc4:
    // 0x1e4dc4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1e4dc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1e4dc8:
    // 0x1e4dc8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e4dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e4dcc:
    // 0x1e4dcc: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1e4dccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1e4dd0:
    // 0x1e4dd0: 0x2001027  not         $v0, $s0
    ctx->pc = 0x1e4dd0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
label_1e4dd4:
    // 0x1e4dd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e4dd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4dd8:
    // 0x1e4dd8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e4dd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e4ddc:
    // 0x1e4ddc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e4ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e4de0:
    // 0x1e4de0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e4de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e4de4:
    // 0x1e4de4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1e4de8:
    if (ctx->pc == 0x1E4DE8u) {
        ctx->pc = 0x1E4DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DE4u;
        // 0x1e4de8: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4DECu;
        goto label_1e4dec;
    }
    ctx->pc = 0x1E4DE4u;
    {
        const bool branch_taken_0x1e4de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DE4u;
        // 0x1e4de8: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4de4) {
            ctx->pc = 0x1E4E0Cu;
            goto label_1e4e0c;
        }
    }
    ctx->pc = 0x1E4DECu;
label_1e4dec:
    // 0x1e4dec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4df0:
    // 0x1e4df0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e4df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e4df4:
    // 0x1e4df4: 0xc079804  jal         func_1E6010
label_1e4df8:
    if (ctx->pc == 0x1E4DF8u) {
        ctx->pc = 0x1E4DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DF4u;
        // 0x1e4df8: 0x3206ffff  andi        $a2, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4DFCu;
        goto label_1e4dfc;
    }
    ctx->pc = 0x1E4DF4u;
    SET_GPR_U32(ctx, 31, 0x1E4DFCu);
    ctx->pc = 0x1E4DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4DF4u;
    // 0x1e4df8: 0x3206ffff  andi        $a2, $s0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6010u, 0x1E4DF4u, 0x1E4DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4DFCu;
label_1e4dfc:
    // 0x1e4dfc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e4dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e4e00:
    // 0x1e4e00: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e4e04:
    if (ctx->pc == 0x1E4E04u) {
        ctx->pc = 0x1E4E08u;
        goto label_1e4e08;
    }
    ctx->pc = 0x1E4E00u;
    {
        const bool branch_taken_0x1e4e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e4e00) {
            ctx->pc = 0x1E4E0Cu;
            goto label_1e4e0c;
        }
    }
    ctx->pc = 0x1E4E08u;
label_1e4e08:
    // 0x1e4e08: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x1e4e08u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1e4e0c:
    // 0x1e4e0c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_1e4e10:
    if (ctx->pc == 0x1E4E10u) {
        ctx->pc = 0x1E4E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E0Cu;
        // 0x1e4e10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4E14u;
        goto label_1e4e14;
    }
    ctx->pc = 0x1E4E0Cu;
    {
        const bool branch_taken_0x1e4e0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E0Cu;
        // 0x1e4e10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e0c) {
            ctx->pc = 0x1E4E1Cu;
            goto label_1e4e1c;
        }
    }
    ctx->pc = 0x1E4E14u;
label_1e4e14:
    // 0x1e4e14: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e4e18:
    if (ctx->pc == 0x1E4E18u) {
        ctx->pc = 0x1E4E1Cu;
        goto label_1e4e1c;
    }
    ctx->pc = 0x1E4E14u;
    {
        const bool branch_taken_0x1e4e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4e14) {
            ctx->pc = 0x1E4E30u;
            goto label_1e4e30;
        }
    }
    ctx->pc = 0x1E4E1Cu;
label_1e4e1c:
    // 0x1e4e1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e4e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e4e20:
    // 0x1e4e20: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
label_1e4e24:
    if (ctx->pc == 0x1E4E24u) {
        ctx->pc = 0x1E4E28u;
        goto label_1e4e28;
    }
    ctx->pc = 0x1E4E20u;
    {
        const bool branch_taken_0x1e4e20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e4e20) {
            ctx->pc = 0x1E4E2Cu;
            goto label_1e4e2c;
        }
    }
    ctx->pc = 0x1E4E28u;
label_1e4e28:
    // 0x1e4e28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e4e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4e2c:
    // 0x1e4e2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e4e2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4e30:
    // 0x1e4e30: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e4e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_1e4e34:
    // 0x1e4e34: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e4e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e4e38:
    // 0x1e4e38: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1e4e38u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e4e3c:
    // 0x1e4e3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e4e3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e4e40:
    // 0x1e4e40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e4e40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4e44:
    // 0x1e4e44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4e44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4e48:
    // 0x1e4e48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4e4c:
    // 0x1e4e4c: 0x3e00008  jr          $ra
label_1e4e50:
    if (ctx->pc == 0x1E4E50u) {
        ctx->pc = 0x1E4E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E4Cu;
        // 0x1e4e50: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4E54u;
        goto label_fallthrough_0x1e4e4c;
    }
    ctx->pc = 0x1E4E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E4Cu;
        // 0x1e4e50: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e4e4c:
    ctx->pc = 0x1E4E54u;
}
