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

// Function: FUN_001e3930
// Address: 0x1e3930 - 0x1e3d7c
void FUN_001e3930_0x1e3930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e3930_0x1e3930");
#endif

    switch (ctx->pc) {
        case 0x1e3930u: goto label_1e3930;
        case 0x1e3934u: goto label_1e3934;
        case 0x1e3938u: goto label_1e3938;
        case 0x1e393cu: goto label_1e393c;
        case 0x1e3940u: goto label_1e3940;
        case 0x1e3944u: goto label_1e3944;
        case 0x1e3948u: goto label_1e3948;
        case 0x1e394cu: goto label_1e394c;
        case 0x1e3950u: goto label_1e3950;
        case 0x1e3954u: goto label_1e3954;
        case 0x1e3958u: goto label_1e3958;
        case 0x1e395cu: goto label_1e395c;
        case 0x1e3960u: goto label_1e3960;
        case 0x1e3964u: goto label_1e3964;
        case 0x1e3968u: goto label_1e3968;
        case 0x1e396cu: goto label_1e396c;
        case 0x1e3970u: goto label_1e3970;
        case 0x1e3974u: goto label_1e3974;
        case 0x1e3978u: goto label_1e3978;
        case 0x1e397cu: goto label_1e397c;
        case 0x1e3980u: goto label_1e3980;
        case 0x1e3984u: goto label_1e3984;
        case 0x1e3988u: goto label_1e3988;
        case 0x1e398cu: goto label_1e398c;
        case 0x1e3990u: goto label_1e3990;
        case 0x1e3994u: goto label_1e3994;
        case 0x1e3998u: goto label_1e3998;
        case 0x1e399cu: goto label_1e399c;
        case 0x1e39a0u: goto label_1e39a0;
        case 0x1e39a4u: goto label_1e39a4;
        case 0x1e39a8u: goto label_1e39a8;
        case 0x1e39acu: goto label_1e39ac;
        case 0x1e39b0u: goto label_1e39b0;
        case 0x1e39b4u: goto label_1e39b4;
        case 0x1e39b8u: goto label_1e39b8;
        case 0x1e39bcu: goto label_1e39bc;
        case 0x1e39c0u: goto label_1e39c0;
        case 0x1e39c4u: goto label_1e39c4;
        case 0x1e39c8u: goto label_1e39c8;
        case 0x1e39ccu: goto label_1e39cc;
        case 0x1e39d0u: goto label_1e39d0;
        case 0x1e39d4u: goto label_1e39d4;
        case 0x1e39d8u: goto label_1e39d8;
        case 0x1e39dcu: goto label_1e39dc;
        case 0x1e39e0u: goto label_1e39e0;
        case 0x1e39e4u: goto label_1e39e4;
        case 0x1e39e8u: goto label_1e39e8;
        case 0x1e39ecu: goto label_1e39ec;
        case 0x1e39f0u: goto label_1e39f0;
        case 0x1e39f4u: goto label_1e39f4;
        case 0x1e39f8u: goto label_1e39f8;
        case 0x1e39fcu: goto label_1e39fc;
        case 0x1e3a00u: goto label_1e3a00;
        case 0x1e3a04u: goto label_1e3a04;
        case 0x1e3a08u: goto label_1e3a08;
        case 0x1e3a0cu: goto label_1e3a0c;
        case 0x1e3a10u: goto label_1e3a10;
        case 0x1e3a14u: goto label_1e3a14;
        case 0x1e3a18u: goto label_1e3a18;
        case 0x1e3a1cu: goto label_1e3a1c;
        case 0x1e3a20u: goto label_1e3a20;
        case 0x1e3a24u: goto label_1e3a24;
        case 0x1e3a28u: goto label_1e3a28;
        case 0x1e3a2cu: goto label_1e3a2c;
        case 0x1e3a30u: goto label_1e3a30;
        case 0x1e3a34u: goto label_1e3a34;
        case 0x1e3a38u: goto label_1e3a38;
        case 0x1e3a3cu: goto label_1e3a3c;
        case 0x1e3a40u: goto label_1e3a40;
        case 0x1e3a44u: goto label_1e3a44;
        case 0x1e3a48u: goto label_1e3a48;
        case 0x1e3a4cu: goto label_1e3a4c;
        case 0x1e3a50u: goto label_1e3a50;
        case 0x1e3a54u: goto label_1e3a54;
        case 0x1e3a58u: goto label_1e3a58;
        case 0x1e3a5cu: goto label_1e3a5c;
        case 0x1e3a60u: goto label_1e3a60;
        case 0x1e3a64u: goto label_1e3a64;
        case 0x1e3a68u: goto label_1e3a68;
        case 0x1e3a6cu: goto label_1e3a6c;
        case 0x1e3a70u: goto label_1e3a70;
        case 0x1e3a74u: goto label_1e3a74;
        case 0x1e3a78u: goto label_1e3a78;
        case 0x1e3a7cu: goto label_1e3a7c;
        case 0x1e3a80u: goto label_1e3a80;
        case 0x1e3a84u: goto label_1e3a84;
        case 0x1e3a88u: goto label_1e3a88;
        case 0x1e3a8cu: goto label_1e3a8c;
        case 0x1e3a90u: goto label_1e3a90;
        case 0x1e3a94u: goto label_1e3a94;
        case 0x1e3a98u: goto label_1e3a98;
        case 0x1e3a9cu: goto label_1e3a9c;
        case 0x1e3aa0u: goto label_1e3aa0;
        case 0x1e3aa4u: goto label_1e3aa4;
        case 0x1e3aa8u: goto label_1e3aa8;
        case 0x1e3aacu: goto label_1e3aac;
        case 0x1e3ab0u: goto label_1e3ab0;
        case 0x1e3ab4u: goto label_1e3ab4;
        case 0x1e3ab8u: goto label_1e3ab8;
        case 0x1e3abcu: goto label_1e3abc;
        case 0x1e3ac0u: goto label_1e3ac0;
        case 0x1e3ac4u: goto label_1e3ac4;
        case 0x1e3ac8u: goto label_1e3ac8;
        case 0x1e3accu: goto label_1e3acc;
        case 0x1e3ad0u: goto label_1e3ad0;
        case 0x1e3ad4u: goto label_1e3ad4;
        case 0x1e3ad8u: goto label_1e3ad8;
        case 0x1e3adcu: goto label_1e3adc;
        case 0x1e3ae0u: goto label_1e3ae0;
        case 0x1e3ae4u: goto label_1e3ae4;
        case 0x1e3ae8u: goto label_1e3ae8;
        case 0x1e3aecu: goto label_1e3aec;
        case 0x1e3af0u: goto label_1e3af0;
        case 0x1e3af4u: goto label_1e3af4;
        case 0x1e3af8u: goto label_1e3af8;
        case 0x1e3afcu: goto label_1e3afc;
        case 0x1e3b00u: goto label_1e3b00;
        case 0x1e3b04u: goto label_1e3b04;
        case 0x1e3b08u: goto label_1e3b08;
        case 0x1e3b0cu: goto label_1e3b0c;
        case 0x1e3b10u: goto label_1e3b10;
        case 0x1e3b14u: goto label_1e3b14;
        case 0x1e3b18u: goto label_1e3b18;
        case 0x1e3b1cu: goto label_1e3b1c;
        case 0x1e3b20u: goto label_1e3b20;
        case 0x1e3b24u: goto label_1e3b24;
        case 0x1e3b28u: goto label_1e3b28;
        case 0x1e3b2cu: goto label_1e3b2c;
        case 0x1e3b30u: goto label_1e3b30;
        case 0x1e3b34u: goto label_1e3b34;
        case 0x1e3b38u: goto label_1e3b38;
        case 0x1e3b3cu: goto label_1e3b3c;
        case 0x1e3b40u: goto label_1e3b40;
        case 0x1e3b44u: goto label_1e3b44;
        case 0x1e3b48u: goto label_1e3b48;
        case 0x1e3b4cu: goto label_1e3b4c;
        case 0x1e3b50u: goto label_1e3b50;
        case 0x1e3b54u: goto label_1e3b54;
        case 0x1e3b58u: goto label_1e3b58;
        case 0x1e3b5cu: goto label_1e3b5c;
        case 0x1e3b60u: goto label_1e3b60;
        case 0x1e3b64u: goto label_1e3b64;
        case 0x1e3b68u: goto label_1e3b68;
        case 0x1e3b6cu: goto label_1e3b6c;
        case 0x1e3b70u: goto label_1e3b70;
        case 0x1e3b74u: goto label_1e3b74;
        case 0x1e3b78u: goto label_1e3b78;
        case 0x1e3b7cu: goto label_1e3b7c;
        case 0x1e3b80u: goto label_1e3b80;
        case 0x1e3b84u: goto label_1e3b84;
        case 0x1e3b88u: goto label_1e3b88;
        case 0x1e3b8cu: goto label_1e3b8c;
        case 0x1e3b90u: goto label_1e3b90;
        case 0x1e3b94u: goto label_1e3b94;
        case 0x1e3b98u: goto label_1e3b98;
        case 0x1e3b9cu: goto label_1e3b9c;
        case 0x1e3ba0u: goto label_1e3ba0;
        case 0x1e3ba4u: goto label_1e3ba4;
        case 0x1e3ba8u: goto label_1e3ba8;
        case 0x1e3bacu: goto label_1e3bac;
        case 0x1e3bb0u: goto label_1e3bb0;
        case 0x1e3bb4u: goto label_1e3bb4;
        case 0x1e3bb8u: goto label_1e3bb8;
        case 0x1e3bbcu: goto label_1e3bbc;
        case 0x1e3bc0u: goto label_1e3bc0;
        case 0x1e3bc4u: goto label_1e3bc4;
        case 0x1e3bc8u: goto label_1e3bc8;
        case 0x1e3bccu: goto label_1e3bcc;
        case 0x1e3bd0u: goto label_1e3bd0;
        case 0x1e3bd4u: goto label_1e3bd4;
        case 0x1e3bd8u: goto label_1e3bd8;
        case 0x1e3bdcu: goto label_1e3bdc;
        case 0x1e3be0u: goto label_1e3be0;
        case 0x1e3be4u: goto label_1e3be4;
        case 0x1e3be8u: goto label_1e3be8;
        case 0x1e3becu: goto label_1e3bec;
        case 0x1e3bf0u: goto label_1e3bf0;
        case 0x1e3bf4u: goto label_1e3bf4;
        case 0x1e3bf8u: goto label_1e3bf8;
        case 0x1e3bfcu: goto label_1e3bfc;
        case 0x1e3c00u: goto label_1e3c00;
        case 0x1e3c04u: goto label_1e3c04;
        case 0x1e3c08u: goto label_1e3c08;
        case 0x1e3c0cu: goto label_1e3c0c;
        case 0x1e3c10u: goto label_1e3c10;
        case 0x1e3c14u: goto label_1e3c14;
        case 0x1e3c18u: goto label_1e3c18;
        case 0x1e3c1cu: goto label_1e3c1c;
        case 0x1e3c20u: goto label_1e3c20;
        case 0x1e3c24u: goto label_1e3c24;
        case 0x1e3c28u: goto label_1e3c28;
        case 0x1e3c2cu: goto label_1e3c2c;
        case 0x1e3c30u: goto label_1e3c30;
        case 0x1e3c34u: goto label_1e3c34;
        case 0x1e3c38u: goto label_1e3c38;
        case 0x1e3c3cu: goto label_1e3c3c;
        case 0x1e3c40u: goto label_1e3c40;
        case 0x1e3c44u: goto label_1e3c44;
        case 0x1e3c48u: goto label_1e3c48;
        case 0x1e3c4cu: goto label_1e3c4c;
        case 0x1e3c50u: goto label_1e3c50;
        case 0x1e3c54u: goto label_1e3c54;
        case 0x1e3c58u: goto label_1e3c58;
        case 0x1e3c5cu: goto label_1e3c5c;
        case 0x1e3c60u: goto label_1e3c60;
        case 0x1e3c64u: goto label_1e3c64;
        case 0x1e3c68u: goto label_1e3c68;
        case 0x1e3c6cu: goto label_1e3c6c;
        case 0x1e3c70u: goto label_1e3c70;
        case 0x1e3c74u: goto label_1e3c74;
        case 0x1e3c78u: goto label_1e3c78;
        case 0x1e3c7cu: goto label_1e3c7c;
        case 0x1e3c80u: goto label_1e3c80;
        case 0x1e3c84u: goto label_1e3c84;
        case 0x1e3c88u: goto label_1e3c88;
        case 0x1e3c8cu: goto label_1e3c8c;
        case 0x1e3c90u: goto label_1e3c90;
        case 0x1e3c94u: goto label_1e3c94;
        case 0x1e3c98u: goto label_1e3c98;
        case 0x1e3c9cu: goto label_1e3c9c;
        case 0x1e3ca0u: goto label_1e3ca0;
        case 0x1e3ca4u: goto label_1e3ca4;
        case 0x1e3ca8u: goto label_1e3ca8;
        case 0x1e3cacu: goto label_1e3cac;
        case 0x1e3cb0u: goto label_1e3cb0;
        case 0x1e3cb4u: goto label_1e3cb4;
        case 0x1e3cb8u: goto label_1e3cb8;
        case 0x1e3cbcu: goto label_1e3cbc;
        case 0x1e3cc0u: goto label_1e3cc0;
        case 0x1e3cc4u: goto label_1e3cc4;
        case 0x1e3cc8u: goto label_1e3cc8;
        case 0x1e3cccu: goto label_1e3ccc;
        case 0x1e3cd0u: goto label_1e3cd0;
        case 0x1e3cd4u: goto label_1e3cd4;
        case 0x1e3cd8u: goto label_1e3cd8;
        case 0x1e3cdcu: goto label_1e3cdc;
        case 0x1e3ce0u: goto label_1e3ce0;
        case 0x1e3ce4u: goto label_1e3ce4;
        case 0x1e3ce8u: goto label_1e3ce8;
        case 0x1e3cecu: goto label_1e3cec;
        case 0x1e3cf0u: goto label_1e3cf0;
        case 0x1e3cf4u: goto label_1e3cf4;
        case 0x1e3cf8u: goto label_1e3cf8;
        case 0x1e3cfcu: goto label_1e3cfc;
        case 0x1e3d00u: goto label_1e3d00;
        case 0x1e3d04u: goto label_1e3d04;
        case 0x1e3d08u: goto label_1e3d08;
        case 0x1e3d0cu: goto label_1e3d0c;
        case 0x1e3d10u: goto label_1e3d10;
        case 0x1e3d14u: goto label_1e3d14;
        case 0x1e3d18u: goto label_1e3d18;
        case 0x1e3d1cu: goto label_1e3d1c;
        case 0x1e3d20u: goto label_1e3d20;
        case 0x1e3d24u: goto label_1e3d24;
        case 0x1e3d28u: goto label_1e3d28;
        case 0x1e3d2cu: goto label_1e3d2c;
        case 0x1e3d30u: goto label_1e3d30;
        case 0x1e3d34u: goto label_1e3d34;
        case 0x1e3d38u: goto label_1e3d38;
        case 0x1e3d3cu: goto label_1e3d3c;
        case 0x1e3d40u: goto label_1e3d40;
        case 0x1e3d44u: goto label_1e3d44;
        case 0x1e3d48u: goto label_1e3d48;
        case 0x1e3d4cu: goto label_1e3d4c;
        case 0x1e3d50u: goto label_1e3d50;
        case 0x1e3d54u: goto label_1e3d54;
        case 0x1e3d58u: goto label_1e3d58;
        case 0x1e3d5cu: goto label_1e3d5c;
        case 0x1e3d60u: goto label_1e3d60;
        case 0x1e3d64u: goto label_1e3d64;
        case 0x1e3d68u: goto label_1e3d68;
        case 0x1e3d6cu: goto label_1e3d6c;
        case 0x1e3d70u: goto label_1e3d70;
        case 0x1e3d74u: goto label_1e3d74;
        case 0x1e3d78u: goto label_1e3d78;
        default: break;
    }

    ctx->pc = 0x1e3930u;

label_1e3930:
    // 0x1e3930: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e3930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1e3934:
    // 0x1e3934: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e3934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e3938:
    // 0x1e3938: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1e3938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_1e393c:
    // 0x1e393c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e393cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e3940:
    // 0x1e3940: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x1e3940u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
label_1e3944:
    // 0x1e3944: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e3944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e3948:
    // 0x1e3948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e3948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e394c:
    // 0x1e394c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e394cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e3950:
    // 0x1e3950: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e3950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e3954:
    // 0x1e3954: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1e3954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1e3958:
    // 0x1e3958: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e395c:
    if (ctx->pc == 0x1E395Cu) {
        ctx->pc = 0x1E395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3958u;
        // 0x1e395c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3960u;
        goto label_1e3960;
    }
    ctx->pc = 0x1E3958u;
    {
        const bool branch_taken_0x1e3958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3958u;
        // 0x1e395c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3958) {
            ctx->pc = 0x1E3968u;
            goto label_1e3968;
        }
    }
    ctx->pc = 0x1E3960u;
label_1e3960:
    // 0x1e3960: 0x100000fd  b           . + 4 + (0xFD << 2)
label_1e3964:
    if (ctx->pc == 0x1E3964u) {
        ctx->pc = 0x1E3964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3960u;
        // 0x1e3964: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3968u;
        goto label_1e3968;
    }
    ctx->pc = 0x1E3960u;
    {
        const bool branch_taken_0x1e3960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3960u;
        // 0x1e3964: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3960) {
            ctx->pc = 0x1E3D58u;
            goto label_1e3d58;
        }
    }
    ctx->pc = 0x1E3968u;
label_1e3968:
    // 0x1e3968: 0x92220042  lbu         $v0, 0x42($s1)
    ctx->pc = 0x1e3968u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 66)));
label_1e396c:
    // 0x1e396c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1e3970:
    if (ctx->pc == 0x1E3970u) {
        ctx->pc = 0x1E3970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E396Cu;
        // 0x1e3970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3974u;
        goto label_1e3974;
    }
    ctx->pc = 0x1E396Cu;
    {
        const bool branch_taken_0x1e396c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E396Cu;
        // 0x1e3970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e396c) {
            ctx->pc = 0x1E39E8u;
            goto label_1e39e8;
        }
    }
    ctx->pc = 0x1E3974u;
label_1e3974:
    // 0x1e3974: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e3974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e3978:
    // 0x1e3978: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1e397c:
    if (ctx->pc == 0x1E397Cu) {
        ctx->pc = 0x1E3980u;
        goto label_1e3980;
    }
    ctx->pc = 0x1E3978u;
    {
        const bool branch_taken_0x1e3978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3978) {
            ctx->pc = 0x1E39E4u;
            goto label_1e39e4;
        }
    }
    ctx->pc = 0x1E3980u;
label_1e3980:
    // 0x1e3980: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e3980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e3984:
    // 0x1e3984: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e3984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e3988:
    // 0x1e3988: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1e3988u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e398c:
    // 0x1e398c: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_1e3990:
    if (ctx->pc == 0x1E3990u) {
        ctx->pc = 0x1E3990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E398Cu;
        // 0x1e3990: 0x26230030  addiu       $v1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3994u;
        goto label_1e3994;
    }
    ctx->pc = 0x1E398Cu;
    {
        const bool branch_taken_0x1e398c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E398Cu;
        // 0x1e3990: 0x26230030  addiu       $v1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e398c) {
            ctx->pc = 0x1E39D4u;
            goto label_1e39d4;
        }
    }
    ctx->pc = 0x1E3994u;
label_1e3994:
    // 0x1e3994: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1e3994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e3998:
    // 0x1e3998: 0x27c40060  addiu       $a0, $fp, 0x60
    ctx->pc = 0x1e3998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
label_1e399c:
    // 0x1e399c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e399cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e39a0:
    // 0x1e39a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e39a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e39a4:
    // 0x1e39a4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1e39a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e39a8:
    // 0x1e39a8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1e39a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1e39ac:
    // 0x1e39ac: 0x320f809  jalr        $t9
label_1e39b0:
    if (ctx->pc == 0x1E39B0u) {
        ctx->pc = 0x1E39B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39ACu;
        // 0x1e39b0: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E39B4u;
        goto label_1e39b4;
    }
    ctx->pc = 0x1E39ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E39B4u);
        ctx->pc = 0x1E39B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39ACu;
        // 0x1e39b0: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E39ACu, 0x1E39B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E39B4u;
label_1e39b4:
    // 0x1e39b4: 0x27c30060  addiu       $v1, $fp, 0x60
    ctx->pc = 0x1e39b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
label_1e39b8:
    // 0x1e39b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e39bc:
    // 0x1e39bc: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x1e39bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1e39c0:
    // 0x1e39c0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1e39c4:
    if (ctx->pc == 0x1E39C4u) {
        ctx->pc = 0x1E39C8u;
        goto label_1e39c8;
    }
    ctx->pc = 0x1E39C0u;
    {
        const bool branch_taken_0x1e39c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e39c0) {
            ctx->pc = 0x1E39D0u;
            goto label_1e39d0;
        }
    }
    ctx->pc = 0x1E39C8u;
label_1e39c8:
    // 0x1e39c8: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_1e39cc:
    if (ctx->pc == 0x1E39CCu) {
        ctx->pc = 0x1E39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39C8u;
        // 0x1e39cc: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E39D0u;
        goto label_1e39d0;
    }
    ctx->pc = 0x1E39C8u;
    {
        const bool branch_taken_0x1e39c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39C8u;
        // 0x1e39cc: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e39c8) {
            ctx->pc = 0x1E3D5Cu;
            goto label_1e3d5c;
        }
    }
    ctx->pc = 0x1E39D0u;
label_1e39d0:
    // 0x1e39d0: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x1e39d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1e39d4:
    // 0x1e39d4: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x1e39d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1e39d8:
    // 0x1e39d8: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x1e39d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_1e39dc:
    // 0x1e39dc: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x1e39dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_1e39e0:
    // 0x1e39e0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1e39e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_1e39e4:
    // 0x1e39e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e39e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e39e8:
    // 0x1e39e8: 0xa2220040  sb          $v0, 0x40($s1)
    ctx->pc = 0x1e39e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 2));
label_1e39ec:
    // 0x1e39ec: 0x92220041  lbu         $v0, 0x41($s1)
    ctx->pc = 0x1e39ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 65)));
label_1e39f0:
    // 0x1e39f0: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
label_1e39f4:
    if (ctx->pc == 0x1E39F4u) {
        ctx->pc = 0x1E39F8u;
        goto label_1e39f8;
    }
    ctx->pc = 0x1E39F0u;
    {
        const bool branch_taken_0x1e39f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e39f0) {
            ctx->pc = 0x1E3C28u;
            goto label_1e3c28;
        }
    }
    ctx->pc = 0x1E39F8u;
label_1e39f8:
    // 0x1e39f8: 0x10000047  b           . + 4 + (0x47 << 2)
label_1e39fc:
    if (ctx->pc == 0x1E39FCu) {
        ctx->pc = 0x1E39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39F8u;
        // 0x1e39fc: 0x8e320010  lw          $s2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3A00u;
        goto label_1e3a00;
    }
    ctx->pc = 0x1E39F8u;
    {
        const bool branch_taken_0x1e39f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39F8u;
        // 0x1e39fc: 0x8e320010  lw          $s2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e39f8) {
            ctx->pc = 0x1E3B18u;
            goto label_1e3b18;
        }
    }
    ctx->pc = 0x1E3A00u;
label_1e3a00:
    // 0x1e3a00: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1e3a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e3a04:
    // 0x1e3a04: 0x82530000  lb          $s3, 0x0($s2)
    ctx->pc = 0x1e3a04u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1e3a08:
    // 0x1e3a08: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e3a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1e3a0c:
    // 0x1e3a0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e3a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e3a10:
    // 0x1e3a10: 0x441001d  bgez        $v0, . + 4 + (0x1D << 2)
label_1e3a14:
    if (ctx->pc == 0x1E3A14u) {
        ctx->pc = 0x1E3A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A10u;
        // 0x1e3a14: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3A18u;
        goto label_1e3a18;
    }
    ctx->pc = 0x1E3A10u;
    {
        const bool branch_taken_0x1e3a10 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E3A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A10u;
        // 0x1e3a14: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3a10) {
            ctx->pc = 0x1E3A88u;
            goto label_1e3a88;
        }
    }
    ctx->pc = 0x1E3A18u;
label_1e3a18:
    // 0x1e3a18: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1e3a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e3a1c:
    // 0x1e3a1c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e3a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1e3a20:
    // 0x1e3a20: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1e3a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1e3a24:
    // 0x1e3a24: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e3a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e3a28:
    // 0x1e3a28: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e3a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e3a2c:
    // 0x1e3a2c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1e3a30:
    if (ctx->pc == 0x1E3A30u) {
        ctx->pc = 0x1E3A34u;
        goto label_1e3a34;
    }
    ctx->pc = 0x1E3A2Cu;
    {
        const bool branch_taken_0x1e3a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3a2c) {
            ctx->pc = 0x1E3A70u;
            goto label_1e3a70;
        }
    }
    ctx->pc = 0x1E3A34u;
label_1e3a34:
    // 0x1e3a34: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e3a38:
    // 0x1e3a38: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e3a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e3a3c:
    // 0x1e3a3c: 0xa0530000  sb          $s3, 0x0($v0)
    ctx->pc = 0x1e3a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 19));
label_1e3a40:
    // 0x1e3a40: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1e3a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e3a44:
    // 0x1e3a44: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e3a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e3a48:
    // 0x1e3a48: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e3a48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e3a4c:
    // 0x1e3a4c: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
label_1e3a50:
    if (ctx->pc == 0x1E3A50u) {
        ctx->pc = 0x1E3A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A4Cu;
        // 0x1e3a50: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3A54u;
        goto label_1e3a54;
    }
    ctx->pc = 0x1E3A4Cu;
    {
        const bool branch_taken_0x1e3a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E3A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A4Cu;
        // 0x1e3a50: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3a4c) {
            ctx->pc = 0x1E3A60u;
            goto label_1e3a60;
        }
    }
    ctx->pc = 0x1E3A54u;
label_1e3a54:
    // 0x1e3a54: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e3a54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1e3a58:
    // 0x1e3a58: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e3a5c:
    if (ctx->pc == 0x1E3A5Cu) {
        ctx->pc = 0x1E3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A58u;
        // 0x1e3a5c: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3A60u;
        goto label_1e3a60;
    }
    ctx->pc = 0x1E3A58u;
    {
        const bool branch_taken_0x1e3a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A58u;
        // 0x1e3a5c: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3a58) {
            ctx->pc = 0x1E3A68u;
            goto label_1e3a68;
        }
    }
    ctx->pc = 0x1E3A60u;
label_1e3a60:
    // 0x1e3a60: 0xc0817ae  jal         func_205EB8
label_1e3a64:
    if (ctx->pc == 0x1E3A64u) {
        ctx->pc = 0x1E3A68u;
        goto label_1e3a68;
    }
    ctx->pc = 0x1E3A60u;
    SET_GPR_U32(ctx, 31, 0x1E3A68u);
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E3A60u, 0x1E3A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3A68u;
label_1e3a68:
    // 0x1e3a68: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e3a6c:
    if (ctx->pc == 0x1E3A6Cu) {
        ctx->pc = 0x1E3A70u;
        goto label_1e3a70;
    }
    ctx->pc = 0x1E3A68u;
    {
        const bool branch_taken_0x1e3a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3a68) {
            ctx->pc = 0x1E3A7Cu;
            goto label_1e3a7c;
        }
    }
    ctx->pc = 0x1E3A70u;
label_1e3a70:
    // 0x1e3a70: 0x13263c  dsll32      $a0, $s3, 24
    ctx->pc = 0x1e3a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 24));
label_1e3a74:
    // 0x1e3a74: 0xc0817ae  jal         func_205EB8
label_1e3a78:
    if (ctx->pc == 0x1E3A78u) {
        ctx->pc = 0x1E3A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A74u;
        // 0x1e3a78: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3A7Cu;
        goto label_1e3a7c;
    }
    ctx->pc = 0x1E3A74u;
    SET_GPR_U32(ctx, 31, 0x1E3A7Cu);
    ctx->pc = 0x1E3A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3A74u;
    // 0x1e3a78: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E3A74u, 0x1E3A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3A7Cu;
label_1e3a7c:
    // 0x1e3a7c: 0x0  nop
    ctx->pc = 0x1e3a7cu;
    // NOP
label_1e3a80:
    // 0x1e3a80: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e3a84:
    if (ctx->pc == 0x1E3A84u) {
        ctx->pc = 0x1E3A88u;
        goto label_1e3a88;
    }
    ctx->pc = 0x1E3A80u;
    {
        const bool branch_taken_0x1e3a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3a80) {
            ctx->pc = 0x1E3AACu;
            goto label_1e3aac;
        }
    }
    ctx->pc = 0x1E3A88u;
label_1e3a88:
    // 0x1e3a88: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e3a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e3a8c:
    // 0x1e3a8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e3a90:
    // 0x1e3a90: 0xa0530000  sb          $s3, 0x0($v0)
    ctx->pc = 0x1e3a90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 19));
label_1e3a94:
    // 0x1e3a94: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1e3a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e3a98:
    // 0x1e3a98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e3a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e3a9c:
    // 0x1e3a9c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e3a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e3aa0:
    // 0x1e3aa0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e3aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1e3aa4:
    // 0x1e3aa4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e3aa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e3aa8:
    // 0x1e3aa8: 0x0  nop
    ctx->pc = 0x1e3aa8u;
    // NOP
label_1e3aac:
    // 0x1e3aac: 0x0  nop
    ctx->pc = 0x1e3aacu;
    // NOP
label_1e3ab0:
    // 0x1e3ab0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e3ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e3ab4:
    // 0x1e3ab4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e3ab8:
    if (ctx->pc == 0x1E3AB8u) {
        ctx->pc = 0x1E3ABCu;
        goto label_1e3abc;
    }
    ctx->pc = 0x1E3AB4u;
    {
        const bool branch_taken_0x1e3ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e3ab4) {
            ctx->pc = 0x1E3AC4u;
            goto label_1e3ac4;
        }
    }
    ctx->pc = 0x1E3ABCu;
label_1e3abc:
    // 0x1e3abc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e3ac0:
    if (ctx->pc == 0x1E3AC0u) {
        ctx->pc = 0x1E3AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3ABCu;
        // 0x1e3ac0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3AC4u;
        goto label_1e3ac4;
    }
    ctx->pc = 0x1E3ABCu;
    {
        const bool branch_taken_0x1e3abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3ABCu;
        // 0x1e3ac0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3abc) {
            ctx->pc = 0x1E3ACCu;
            goto label_1e3acc;
        }
    }
    ctx->pc = 0x1E3AC4u;
label_1e3ac4:
    // 0x1e3ac4: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x1e3ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_1e3ac8:
    // 0x1e3ac8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e3acc:
    // 0x1e3acc: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_1e3ad0:
    if (ctx->pc == 0x1E3AD0u) {
        ctx->pc = 0x1E3AD4u;
        goto label_1e3ad4;
    }
    ctx->pc = 0x1E3ACCu;
    {
        const bool branch_taken_0x1e3acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e3acc) {
            ctx->pc = 0x1E3B14u;
            goto label_1e3b14;
        }
    }
    ctx->pc = 0x1E3AD4u;
label_1e3ad4:
    // 0x1e3ad4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1e3ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e3ad8:
    // 0x1e3ad8: 0x92082b  sltu        $at, $a0, $s2
    ctx->pc = 0x1e3ad8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1e3adc:
    // 0x1e3adc: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_1e3ae0:
    if (ctx->pc == 0x1E3AE0u) {
        ctx->pc = 0x1E3AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3ADCu;
        // 0x1e3ae0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3AE4u;
        goto label_1e3ae4;
    }
    ctx->pc = 0x1E3ADCu;
    {
        const bool branch_taken_0x1e3adc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3ADCu;
        // 0x1e3ae0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3adc) {
            ctx->pc = 0x1E3B0Cu;
            goto label_1e3b0c;
        }
    }
    ctx->pc = 0x1E3AE4u;
label_1e3ae4:
    // 0x1e3ae4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e3ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e3ae8:
    // 0x1e3ae8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e3ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e3aec:
    // 0x1e3aec: 0xc07fdfe  jal         func_1FF7F8
label_1e3af0:
    if (ctx->pc == 0x1E3AF0u) {
        ctx->pc = 0x1E3AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3AECu;
        // 0x1e3af0: 0x523023  subu        $a2, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3AF4u;
        goto label_1e3af4;
    }
    ctx->pc = 0x1E3AECu;
    SET_GPR_U32(ctx, 31, 0x1E3AF4u);
    ctx->pc = 0x1E3AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3AECu;
    // 0x1e3af0: 0x523023  subu        $a2, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1E3AECu, 0x1E3AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3AF4u;
label_1e3af4:
    // 0x1e3af4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1e3af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e3af8:
    // 0x1e3af8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e3af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e3afc:
    // 0x1e3afc: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x1e3afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1e3b00:
    // 0x1e3b00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e3b04:
    // 0x1e3b04: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1e3b04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_1e3b08:
    // 0x1e3b08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e3b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e3b0c:
    // 0x1e3b0c: 0x10000092  b           . + 4 + (0x92 << 2)
label_1e3b10:
    if (ctx->pc == 0x1E3B10u) {
        ctx->pc = 0x1E3B14u;
        goto label_1e3b14;
    }
    ctx->pc = 0x1E3B0Cu;
    {
        const bool branch_taken_0x1e3b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3b0c) {
            ctx->pc = 0x1E3D58u;
            goto label_1e3d58;
        }
    }
    ctx->pc = 0x1E3B14u;
label_1e3b14:
    // 0x1e3b14: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e3b14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e3b18:
    // 0x1e3b18: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x1e3b18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e3b1c:
    // 0x1e3b1c: 0x246102b  sltu        $v0, $s2, $a2
    ctx->pc = 0x1e3b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1e3b20:
    // 0x1e3b20: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
label_1e3b24:
    if (ctx->pc == 0x1E3B24u) {
        ctx->pc = 0x1E3B28u;
        goto label_1e3b28;
    }
    ctx->pc = 0x1E3B20u;
    {
        const bool branch_taken_0x1e3b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3b20) {
            ctx->pc = 0x1E3A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3a00;
        }
    }
    ctx->pc = 0x1E3B28u;
label_1e3b28:
    // 0x1e3b28: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1e3b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e3b2c:
    // 0x1e3b2c: 0x2001027  not         $v0, $s0
    ctx->pc = 0x1e3b2cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
label_1e3b30:
    // 0x1e3b30: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e3b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e3b34:
    // 0x1e3b34: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e3b34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e3b38:
    // 0x1e3b38: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e3b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e3b3c:
    // 0x1e3b3c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1e3b3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e3b40:
    // 0x1e3b40: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x1e3b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1e3b44:
    // 0x1e3b44: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e3b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e3b48:
    // 0x1e3b48: 0x10a00033  beqz        $a1, . + 4 + (0x33 << 2)
label_1e3b4c:
    if (ctx->pc == 0x1E3B4Cu) {
        ctx->pc = 0x1E3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B48u;
        // 0x1e3b4c: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3B50u;
        goto label_1e3b50;
    }
    ctx->pc = 0x1E3B48u;
    {
        const bool branch_taken_0x1e3b48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B48u;
        // 0x1e3b4c: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b48) {
            ctx->pc = 0x1E3C18u;
            goto label_1e3c18;
        }
    }
    ctx->pc = 0x1E3B50u;
label_1e3b50:
    // 0x1e3b50: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1e3b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e3b54:
    // 0x1e3b54: 0x10963c  dsll32      $s2, $s0, 24
    ctx->pc = 0x1e3b54u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) << (32 + 24));
label_1e3b58:
    // 0x1e3b58: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x1e3b58u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
label_1e3b5c:
    // 0x1e3b5c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e3b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1e3b60:
    // 0x1e3b60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e3b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e3b64:
    // 0x1e3b64: 0x441001b  bgez        $v0, . + 4 + (0x1B << 2)
label_1e3b68:
    if (ctx->pc == 0x1E3B68u) {
        ctx->pc = 0x1E3B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B64u;
        // 0x1e3b68: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3B6Cu;
        goto label_1e3b6c;
    }
    ctx->pc = 0x1E3B64u;
    {
        const bool branch_taken_0x1e3b64 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E3B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B64u;
        // 0x1e3b68: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b64) {
            ctx->pc = 0x1E3BD4u;
            goto label_1e3bd4;
        }
    }
    ctx->pc = 0x1E3B6Cu;
label_1e3b6c:
    // 0x1e3b6c: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1e3b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e3b70:
    // 0x1e3b70: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e3b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1e3b74:
    // 0x1e3b74: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1e3b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1e3b78:
    // 0x1e3b78: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e3b78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e3b7c:
    // 0x1e3b7c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e3b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e3b80:
    // 0x1e3b80: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1e3b84:
    if (ctx->pc == 0x1E3B84u) {
        ctx->pc = 0x1E3B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B80u;
        // 0x1e3b84: 0x12263c  dsll32      $a0, $s2, 24 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3B88u;
        goto label_1e3b88;
    }
    ctx->pc = 0x1E3B80u;
    {
        const bool branch_taken_0x1e3b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B80u;
        // 0x1e3b84: 0x12263c  dsll32      $a0, $s2, 24 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b80) {
            ctx->pc = 0x1E3BC4u;
            goto label_1e3bc4;
        }
    }
    ctx->pc = 0x1E3B88u;
label_1e3b88:
    // 0x1e3b88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e3b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e3b8c:
    // 0x1e3b8c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e3b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e3b90:
    // 0x1e3b90: 0xa0520000  sb          $s2, 0x0($v0)
    ctx->pc = 0x1e3b90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 18));
label_1e3b94:
    // 0x1e3b94: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1e3b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e3b98:
    // 0x1e3b98: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e3b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e3b9c:
    // 0x1e3b9c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e3b9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e3ba0:
    // 0x1e3ba0: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
label_1e3ba4:
    if (ctx->pc == 0x1E3BA4u) {
        ctx->pc = 0x1E3BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3BA0u;
        // 0x1e3ba4: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3BA8u;
        goto label_1e3ba8;
    }
    ctx->pc = 0x1E3BA0u;
    {
        const bool branch_taken_0x1e3ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E3BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3BA0u;
        // 0x1e3ba4: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ba0) {
            ctx->pc = 0x1E3BB4u;
            goto label_1e3bb4;
        }
    }
    ctx->pc = 0x1E3BA8u;
label_1e3ba8:
    // 0x1e3ba8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e3ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1e3bac:
    // 0x1e3bac: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e3bb0:
    if (ctx->pc == 0x1E3BB0u) {
        ctx->pc = 0x1E3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3BACu;
        // 0x1e3bb0: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3BB4u;
        goto label_1e3bb4;
    }
    ctx->pc = 0x1E3BACu;
    {
        const bool branch_taken_0x1e3bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3BACu;
        // 0x1e3bb0: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3bac) {
            ctx->pc = 0x1E3BBCu;
            goto label_1e3bbc;
        }
    }
    ctx->pc = 0x1E3BB4u;
label_1e3bb4:
    // 0x1e3bb4: 0xc0817ae  jal         func_205EB8
label_1e3bb8:
    if (ctx->pc == 0x1E3BB8u) {
        ctx->pc = 0x1E3BBCu;
        goto label_1e3bbc;
    }
    ctx->pc = 0x1E3BB4u;
    SET_GPR_U32(ctx, 31, 0x1E3BBCu);
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E3BB4u, 0x1E3BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3BBCu;
label_1e3bbc:
    // 0x1e3bbc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e3bc0:
    if (ctx->pc == 0x1E3BC0u) {
        ctx->pc = 0x1E3BC4u;
        goto label_1e3bc4;
    }
    ctx->pc = 0x1E3BBCu;
    {
        const bool branch_taken_0x1e3bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3bbc) {
            ctx->pc = 0x1E3BCCu;
            goto label_1e3bcc;
        }
    }
    ctx->pc = 0x1E3BC4u;
label_1e3bc4:
    // 0x1e3bc4: 0xc0817ae  jal         func_205EB8
label_1e3bc8:
    if (ctx->pc == 0x1E3BC8u) {
        ctx->pc = 0x1E3BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3BC4u;
        // 0x1e3bc8: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3BCCu;
        goto label_1e3bcc;
    }
    ctx->pc = 0x1E3BC4u;
    SET_GPR_U32(ctx, 31, 0x1E3BCCu);
    ctx->pc = 0x1E3BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3BC4u;
    // 0x1e3bc8: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E3BC4u, 0x1E3BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3BCCu;
label_1e3bcc:
    // 0x1e3bcc: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e3bd0:
    if (ctx->pc == 0x1E3BD0u) {
        ctx->pc = 0x1E3BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3BCCu;
        // 0x1e3bd0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3BD4u;
        goto label_1e3bd4;
    }
    ctx->pc = 0x1E3BCCu;
    {
        const bool branch_taken_0x1e3bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3BCCu;
        // 0x1e3bd0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3bcc) {
            ctx->pc = 0x1E3BFCu;
            goto label_1e3bfc;
        }
    }
    ctx->pc = 0x1E3BD4u;
label_1e3bd4:
    // 0x1e3bd4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e3bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e3bd8:
    // 0x1e3bd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e3bdc:
    // 0x1e3bdc: 0xa0520000  sb          $s2, 0x0($v0)
    ctx->pc = 0x1e3bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 18));
label_1e3be0:
    // 0x1e3be0: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1e3be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e3be4:
    // 0x1e3be4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e3be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e3be8:
    // 0x1e3be8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e3bec:
    // 0x1e3bec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e3becu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1e3bf0:
    // 0x1e3bf0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e3bf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e3bf4:
    // 0x1e3bf4: 0x0  nop
    ctx->pc = 0x1e3bf4u;
    // NOP
label_1e3bf8:
    // 0x1e3bf8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e3bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e3bfc:
    // 0x1e3bfc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e3c00:
    if (ctx->pc == 0x1E3C00u) {
        ctx->pc = 0x1E3C04u;
        goto label_1e3c04;
    }
    ctx->pc = 0x1E3BFCu;
    {
        const bool branch_taken_0x1e3bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e3bfc) {
            ctx->pc = 0x1E3C0Cu;
            goto label_1e3c0c;
        }
    }
    ctx->pc = 0x1E3C04u;
label_1e3c04:
    // 0x1e3c04: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e3c08:
    if (ctx->pc == 0x1E3C08u) {
        ctx->pc = 0x1E3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C04u;
        // 0x1e3c08: 0x601027  not         $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3C0Cu;
        goto label_1e3c0c;
    }
    ctx->pc = 0x1E3C04u;
    {
        const bool branch_taken_0x1e3c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C04u;
        // 0x1e3c08: 0x601027  not         $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c04) {
            ctx->pc = 0x1E3C14u;
            goto label_1e3c14;
        }
    }
    ctx->pc = 0x1E3C0Cu;
label_1e3c0c:
    // 0x1e3c0c: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x1e3c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_1e3c10:
    // 0x1e3c10: 0x601027  not         $v0, $v1
    ctx->pc = 0x1e3c10u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_1e3c14:
    // 0x1e3c14: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1e3c14u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e3c18:
    // 0x1e3c18: 0x10a0004b  beqz        $a1, . + 4 + (0x4B << 2)
label_1e3c1c:
    if (ctx->pc == 0x1E3C1Cu) {
        ctx->pc = 0x1E3C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C18u;
        // 0x1e3c1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3C20u;
        goto label_1e3c20;
    }
    ctx->pc = 0x1E3C18u;
    {
        const bool branch_taken_0x1e3c18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C18u;
        // 0x1e3c1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c18) {
            ctx->pc = 0x1E3D48u;
            goto label_1e3d48;
        }
    }
    ctx->pc = 0x1E3C20u;
label_1e3c20:
    // 0x1e3c20: 0x1000004d  b           . + 4 + (0x4D << 2)
label_1e3c24:
    if (ctx->pc == 0x1E3C24u) {
        ctx->pc = 0x1E3C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C20u;
        // 0x1e3c24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3C28u;
        goto label_1e3c28;
    }
    ctx->pc = 0x1E3C20u;
    {
        const bool branch_taken_0x1e3c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C20u;
        // 0x1e3c24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c20) {
            ctx->pc = 0x1E3D58u;
            goto label_1e3d58;
        }
    }
    ctx->pc = 0x1E3C28u;
label_1e3c28:
    // 0x1e3c28: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1e3c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1e3c2c:
    // 0x1e3c2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e3c2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e3c30:
    // 0x1e3c30: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e3c30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e3c34:
    // 0x1e3c34: 0x320f809  jalr        $t9
label_1e3c38:
    if (ctx->pc == 0x1E3C38u) {
        ctx->pc = 0x1E3C3Cu;
        goto label_1e3c3c;
    }
    ctx->pc = 0x1E3C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E3C3Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3C34u, 0x1E3C3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3C3Cu;
label_1e3c3c:
    // 0x1e3c3c: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e3c40:
    if (ctx->pc == 0x1E3C40u) {
        ctx->pc = 0x1E3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C3Cu;
        // 0x1e3c40: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3C44u;
        goto label_1e3c44;
    }
    ctx->pc = 0x1E3C3Cu;
    {
        const bool branch_taken_0x1e3c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C3Cu;
        // 0x1e3c40: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c3c) {
            ctx->pc = 0x1E3C6Cu;
            goto label_1e3c6c;
        }
    }
    ctx->pc = 0x1E3C44u;
label_1e3c44:
    // 0x1e3c44: 0xc07a704  jal         func_1E9C10
label_1e3c48:
    if (ctx->pc == 0x1E3C48u) {
        ctx->pc = 0x1E3C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C44u;
        // 0x1e3c48: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3C4Cu;
        goto label_1e3c4c;
    }
    ctx->pc = 0x1E3C44u;
    SET_GPR_U32(ctx, 31, 0x1E3C4Cu);
    ctx->pc = 0x1E3C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3C44u;
    // 0x1e3c48: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E3C44u, 0x1E3C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3C4Cu;
label_1e3c4c:
    // 0x1e3c4c: 0x0  nop
    ctx->pc = 0x1e3c4cu;
    // NOP
label_1e3c50:
    // 0x1e3c50: 0x0  nop
    ctx->pc = 0x1e3c50u;
    // NOP
label_1e3c54:
    // 0x1e3c54: 0x0  nop
    ctx->pc = 0x1e3c54u;
    // NOP
label_1e3c58:
    // 0x1e3c58: 0x0  nop
    ctx->pc = 0x1e3c58u;
    // NOP
label_1e3c5c:
    // 0x1e3c5c: 0x0  nop
    ctx->pc = 0x1e3c5cu;
    // NOP
label_1e3c60:
    // 0x1e3c60: 0x0  nop
    ctx->pc = 0x1e3c60u;
    // NOP
label_1e3c64:
    // 0x1e3c64: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e3c68:
    if (ctx->pc == 0x1E3C68u) {
        ctx->pc = 0x1E3C6Cu;
        goto label_1e3c6c;
    }
    ctx->pc = 0x1E3C64u;
    {
        const bool branch_taken_0x1e3c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3c64) {
            ctx->pc = 0x1E3C4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3c4c;
        }
    }
    ctx->pc = 0x1E3C6Cu;
label_1e3c6c:
    // 0x1e3c6c: 0x0  nop
    ctx->pc = 0x1e3c6cu;
    // NOP
label_1e3c70:
    // 0x1e3c70: 0x10000019  b           . + 4 + (0x19 << 2)
label_1e3c74:
    if (ctx->pc == 0x1E3C74u) {
        ctx->pc = 0x1E3C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C70u;
        // 0x1e3c74: 0x8e320010  lw          $s2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3C78u;
        goto label_1e3c78;
    }
    ctx->pc = 0x1E3C70u;
    {
        const bool branch_taken_0x1e3c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C70u;
        // 0x1e3c74: 0x8e320010  lw          $s2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c70) {
            ctx->pc = 0x1E3CD8u;
            goto label_1e3cd8;
        }
    }
    ctx->pc = 0x1E3C78u;
label_1e3c78:
    // 0x1e3c78: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x1e3c78u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1e3c7c:
    // 0x1e3c7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e3c80:
    // 0x1e3c80: 0xc0796dc  jal         func_1E5B70
label_1e3c84:
    if (ctx->pc == 0x1E3C84u) {
        ctx->pc = 0x1E3C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C80u;
        // 0x1e3c84: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3C88u;
        goto label_1e3c88;
    }
    ctx->pc = 0x1E3C80u;
    SET_GPR_U32(ctx, 31, 0x1E3C88u);
    ctx->pc = 0x1E3C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3C80u;
    // 0x1e3c84: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5B70u, 0x1E3C80u, 0x1E3C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3C88u;
label_1e3c88:
    // 0x1e3c88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e3c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e3c8c:
    // 0x1e3c8c: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
label_1e3c90:
    if (ctx->pc == 0x1E3C90u) {
        ctx->pc = 0x1E3C94u;
        goto label_1e3c94;
    }
    ctx->pc = 0x1E3C8Cu;
    {
        const bool branch_taken_0x1e3c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e3c8c) {
            ctx->pc = 0x1E3CD4u;
            goto label_1e3cd4;
        }
    }
    ctx->pc = 0x1E3C94u;
label_1e3c94:
    // 0x1e3c94: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1e3c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e3c98:
    // 0x1e3c98: 0x92082b  sltu        $at, $a0, $s2
    ctx->pc = 0x1e3c98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1e3c9c:
    // 0x1e3c9c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_1e3ca0:
    if (ctx->pc == 0x1E3CA0u) {
        ctx->pc = 0x1E3CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C9Cu;
        // 0x1e3ca0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3CA4u;
        goto label_1e3ca4;
    }
    ctx->pc = 0x1E3C9Cu;
    {
        const bool branch_taken_0x1e3c9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C9Cu;
        // 0x1e3ca0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c9c) {
            ctx->pc = 0x1E3CCCu;
            goto label_1e3ccc;
        }
    }
    ctx->pc = 0x1E3CA4u;
label_1e3ca4:
    // 0x1e3ca4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e3ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e3ca8:
    // 0x1e3ca8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e3ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e3cac:
    // 0x1e3cac: 0xc07fdfe  jal         func_1FF7F8
label_1e3cb0:
    if (ctx->pc == 0x1E3CB0u) {
        ctx->pc = 0x1E3CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3CACu;
        // 0x1e3cb0: 0x523023  subu        $a2, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3CB4u;
        goto label_1e3cb4;
    }
    ctx->pc = 0x1E3CACu;
    SET_GPR_U32(ctx, 31, 0x1E3CB4u);
    ctx->pc = 0x1E3CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3CACu;
    // 0x1e3cb0: 0x523023  subu        $a2, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1E3CACu, 0x1E3CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3CB4u;
label_1e3cb4:
    // 0x1e3cb4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1e3cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e3cb8:
    // 0x1e3cb8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e3cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e3cbc:
    // 0x1e3cbc: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x1e3cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1e3cc0:
    // 0x1e3cc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e3cc4:
    // 0x1e3cc4: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1e3cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_1e3cc8:
    // 0x1e3cc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e3cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e3ccc:
    // 0x1e3ccc: 0x10000022  b           . + 4 + (0x22 << 2)
label_1e3cd0:
    if (ctx->pc == 0x1E3CD0u) {
        ctx->pc = 0x1E3CD4u;
        goto label_1e3cd4;
    }
    ctx->pc = 0x1E3CCCu;
    {
        const bool branch_taken_0x1e3ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3ccc) {
            ctx->pc = 0x1E3D58u;
            goto label_1e3d58;
        }
    }
    ctx->pc = 0x1E3CD4u;
label_1e3cd4:
    // 0x1e3cd4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e3cd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e3cd8:
    // 0x1e3cd8: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x1e3cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e3cdc:
    // 0x1e3cdc: 0x245102b  sltu        $v0, $s2, $a1
    ctx->pc = 0x1e3cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1e3ce0:
    // 0x1e3ce0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_1e3ce4:
    if (ctx->pc == 0x1E3CE4u) {
        ctx->pc = 0x1E3CE8u;
        goto label_1e3ce8;
    }
    ctx->pc = 0x1E3CE0u;
    {
        const bool branch_taken_0x1e3ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3ce0) {
            ctx->pc = 0x1E3C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3c78;
        }
    }
    ctx->pc = 0x1E3CE8u;
label_1e3ce8:
    // 0x1e3ce8: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1e3ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e3cec:
    // 0x1e3cec: 0x2001027  not         $v0, $s0
    ctx->pc = 0x1e3cecu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
label_1e3cf0:
    // 0x1e3cf0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e3cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e3cf4:
    // 0x1e3cf4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e3cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e3cf8:
    // 0x1e3cf8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e3cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e3cfc:
    // 0x1e3cfc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e3cfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3d00:
    // 0x1e3d00: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1e3d00u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1e3d04:
    // 0x1e3d04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e3d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e3d08:
    // 0x1e3d08: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1e3d0c:
    if (ctx->pc == 0x1E3D0Cu) {
        ctx->pc = 0x1E3D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D08u;
        // 0x1e3d0c: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3D10u;
        goto label_1e3d10;
    }
    ctx->pc = 0x1E3D08u;
    {
        const bool branch_taken_0x1e3d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D08u;
        // 0x1e3d0c: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d08) {
            ctx->pc = 0x1E3D34u;
            goto label_1e3d34;
        }
    }
    ctx->pc = 0x1E3D10u;
label_1e3d10:
    // 0x1e3d10: 0x10363c  dsll32      $a2, $s0, 24
    ctx->pc = 0x1e3d10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 24));
label_1e3d14:
    // 0x1e3d14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e3d18:
    // 0x1e3d18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e3d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e3d1c:
    // 0x1e3d1c: 0xc0796dc  jal         func_1E5B70
label_1e3d20:
    if (ctx->pc == 0x1E3D20u) {
        ctx->pc = 0x1E3D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D1Cu;
        // 0x1e3d20: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3D24u;
        goto label_1e3d24;
    }
    ctx->pc = 0x1E3D1Cu;
    SET_GPR_U32(ctx, 31, 0x1E3D24u);
    ctx->pc = 0x1E3D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3D1Cu;
    // 0x1e3d20: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5B70u, 0x1E3D1Cu, 0x1E3D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3D24u;
label_1e3d24:
    // 0x1e3d24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e3d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e3d28:
    // 0x1e3d28: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e3d2c:
    if (ctx->pc == 0x1E3D2Cu) {
        ctx->pc = 0x1E3D30u;
        goto label_1e3d30;
    }
    ctx->pc = 0x1E3D28u;
    {
        const bool branch_taken_0x1e3d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e3d28) {
            ctx->pc = 0x1E3D34u;
            goto label_1e3d34;
        }
    }
    ctx->pc = 0x1E3D30u;
label_1e3d30:
    // 0x1e3d30: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x1e3d30u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1e3d34:
    // 0x1e3d34: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_1e3d38:
    if (ctx->pc == 0x1E3D38u) {
        ctx->pc = 0x1E3D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D34u;
        // 0x1e3d38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3D3Cu;
        goto label_1e3d3c;
    }
    ctx->pc = 0x1E3D34u;
    {
        const bool branch_taken_0x1e3d34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D34u;
        // 0x1e3d38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d34) {
            ctx->pc = 0x1E3D44u;
            goto label_1e3d44;
        }
    }
    ctx->pc = 0x1E3D3Cu;
label_1e3d3c:
    // 0x1e3d3c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e3d40:
    if (ctx->pc == 0x1E3D40u) {
        ctx->pc = 0x1E3D44u;
        goto label_1e3d44;
    }
    ctx->pc = 0x1E3D3Cu;
    {
        const bool branch_taken_0x1e3d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3d3c) {
            ctx->pc = 0x1E3D58u;
            goto label_1e3d58;
        }
    }
    ctx->pc = 0x1E3D44u;
label_1e3d44:
    // 0x1e3d44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e3d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e3d48:
    // 0x1e3d48: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
label_1e3d4c:
    if (ctx->pc == 0x1E3D4Cu) {
        ctx->pc = 0x1E3D50u;
        goto label_1e3d50;
    }
    ctx->pc = 0x1E3D48u;
    {
        const bool branch_taken_0x1e3d48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e3d48) {
            ctx->pc = 0x1E3D54u;
            goto label_1e3d54;
        }
    }
    ctx->pc = 0x1E3D50u;
label_1e3d50:
    // 0x1e3d50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e3d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3d54:
    // 0x1e3d54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e3d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3d58:
    // 0x1e3d58: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e3d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_1e3d5c:
    // 0x1e3d5c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e3d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e3d60:
    // 0x1e3d60: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1e3d60u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e3d64:
    // 0x1e3d64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e3d64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e3d68:
    // 0x1e3d68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e3d68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e3d6c:
    // 0x1e3d6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e3d6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3d70:
    // 0x1e3d70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3d74:
    // 0x1e3d74: 0x3e00008  jr          $ra
label_1e3d78:
    if (ctx->pc == 0x1E3D78u) {
        ctx->pc = 0x1E3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D74u;
        // 0x1e3d78: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3D7Cu;
        goto label_fallthrough_0x1e3d74;
    }
    ctx->pc = 0x1E3D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D74u;
        // 0x1e3d78: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e3d74:
    ctx->pc = 0x1E3D7Cu;
}
