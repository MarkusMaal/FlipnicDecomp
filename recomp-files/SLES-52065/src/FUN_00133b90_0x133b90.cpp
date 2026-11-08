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

// Function: FUN_00133b90
// Address: 0x133b90 - 0x133ee4
void FUN_00133b90_0x133b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00133b90_0x133b90");
#endif

    switch (ctx->pc) {
        case 0x133b90u: goto label_133b90;
        case 0x133b94u: goto label_133b94;
        case 0x133b98u: goto label_133b98;
        case 0x133b9cu: goto label_133b9c;
        case 0x133ba0u: goto label_133ba0;
        case 0x133ba4u: goto label_133ba4;
        case 0x133ba8u: goto label_133ba8;
        case 0x133bacu: goto label_133bac;
        case 0x133bb0u: goto label_133bb0;
        case 0x133bb4u: goto label_133bb4;
        case 0x133bb8u: goto label_133bb8;
        case 0x133bbcu: goto label_133bbc;
        case 0x133bc0u: goto label_133bc0;
        case 0x133bc4u: goto label_133bc4;
        case 0x133bc8u: goto label_133bc8;
        case 0x133bccu: goto label_133bcc;
        case 0x133bd0u: goto label_133bd0;
        case 0x133bd4u: goto label_133bd4;
        case 0x133bd8u: goto label_133bd8;
        case 0x133bdcu: goto label_133bdc;
        case 0x133be0u: goto label_133be0;
        case 0x133be4u: goto label_133be4;
        case 0x133be8u: goto label_133be8;
        case 0x133becu: goto label_133bec;
        case 0x133bf0u: goto label_133bf0;
        case 0x133bf4u: goto label_133bf4;
        case 0x133bf8u: goto label_133bf8;
        case 0x133bfcu: goto label_133bfc;
        case 0x133c00u: goto label_133c00;
        case 0x133c04u: goto label_133c04;
        case 0x133c08u: goto label_133c08;
        case 0x133c0cu: goto label_133c0c;
        case 0x133c10u: goto label_133c10;
        case 0x133c14u: goto label_133c14;
        case 0x133c18u: goto label_133c18;
        case 0x133c1cu: goto label_133c1c;
        case 0x133c20u: goto label_133c20;
        case 0x133c24u: goto label_133c24;
        case 0x133c28u: goto label_133c28;
        case 0x133c2cu: goto label_133c2c;
        case 0x133c30u: goto label_133c30;
        case 0x133c34u: goto label_133c34;
        case 0x133c38u: goto label_133c38;
        case 0x133c3cu: goto label_133c3c;
        case 0x133c40u: goto label_133c40;
        case 0x133c44u: goto label_133c44;
        case 0x133c48u: goto label_133c48;
        case 0x133c4cu: goto label_133c4c;
        case 0x133c50u: goto label_133c50;
        case 0x133c54u: goto label_133c54;
        case 0x133c58u: goto label_133c58;
        case 0x133c5cu: goto label_133c5c;
        case 0x133c60u: goto label_133c60;
        case 0x133c64u: goto label_133c64;
        case 0x133c68u: goto label_133c68;
        case 0x133c6cu: goto label_133c6c;
        case 0x133c70u: goto label_133c70;
        case 0x133c74u: goto label_133c74;
        case 0x133c78u: goto label_133c78;
        case 0x133c7cu: goto label_133c7c;
        case 0x133c80u: goto label_133c80;
        case 0x133c84u: goto label_133c84;
        case 0x133c88u: goto label_133c88;
        case 0x133c8cu: goto label_133c8c;
        case 0x133c90u: goto label_133c90;
        case 0x133c94u: goto label_133c94;
        case 0x133c98u: goto label_133c98;
        case 0x133c9cu: goto label_133c9c;
        case 0x133ca0u: goto label_133ca0;
        case 0x133ca4u: goto label_133ca4;
        case 0x133ca8u: goto label_133ca8;
        case 0x133cacu: goto label_133cac;
        case 0x133cb0u: goto label_133cb0;
        case 0x133cb4u: goto label_133cb4;
        case 0x133cb8u: goto label_133cb8;
        case 0x133cbcu: goto label_133cbc;
        case 0x133cc0u: goto label_133cc0;
        case 0x133cc4u: goto label_133cc4;
        case 0x133cc8u: goto label_133cc8;
        case 0x133cccu: goto label_133ccc;
        case 0x133cd0u: goto label_133cd0;
        case 0x133cd4u: goto label_133cd4;
        case 0x133cd8u: goto label_133cd8;
        case 0x133cdcu: goto label_133cdc;
        case 0x133ce0u: goto label_133ce0;
        case 0x133ce4u: goto label_133ce4;
        case 0x133ce8u: goto label_133ce8;
        case 0x133cecu: goto label_133cec;
        case 0x133cf0u: goto label_133cf0;
        case 0x133cf4u: goto label_133cf4;
        case 0x133cf8u: goto label_133cf8;
        case 0x133cfcu: goto label_133cfc;
        case 0x133d00u: goto label_133d00;
        case 0x133d04u: goto label_133d04;
        case 0x133d08u: goto label_133d08;
        case 0x133d0cu: goto label_133d0c;
        case 0x133d10u: goto label_133d10;
        case 0x133d14u: goto label_133d14;
        case 0x133d18u: goto label_133d18;
        case 0x133d1cu: goto label_133d1c;
        case 0x133d20u: goto label_133d20;
        case 0x133d24u: goto label_133d24;
        case 0x133d28u: goto label_133d28;
        case 0x133d2cu: goto label_133d2c;
        case 0x133d30u: goto label_133d30;
        case 0x133d34u: goto label_133d34;
        case 0x133d38u: goto label_133d38;
        case 0x133d3cu: goto label_133d3c;
        case 0x133d40u: goto label_133d40;
        case 0x133d44u: goto label_133d44;
        case 0x133d48u: goto label_133d48;
        case 0x133d4cu: goto label_133d4c;
        case 0x133d50u: goto label_133d50;
        case 0x133d54u: goto label_133d54;
        case 0x133d58u: goto label_133d58;
        case 0x133d5cu: goto label_133d5c;
        case 0x133d60u: goto label_133d60;
        case 0x133d64u: goto label_133d64;
        case 0x133d68u: goto label_133d68;
        case 0x133d6cu: goto label_133d6c;
        case 0x133d70u: goto label_133d70;
        case 0x133d74u: goto label_133d74;
        case 0x133d78u: goto label_133d78;
        case 0x133d7cu: goto label_133d7c;
        case 0x133d80u: goto label_133d80;
        case 0x133d84u: goto label_133d84;
        case 0x133d88u: goto label_133d88;
        case 0x133d8cu: goto label_133d8c;
        case 0x133d90u: goto label_133d90;
        case 0x133d94u: goto label_133d94;
        case 0x133d98u: goto label_133d98;
        case 0x133d9cu: goto label_133d9c;
        case 0x133da0u: goto label_133da0;
        case 0x133da4u: goto label_133da4;
        case 0x133da8u: goto label_133da8;
        case 0x133dacu: goto label_133dac;
        case 0x133db0u: goto label_133db0;
        case 0x133db4u: goto label_133db4;
        case 0x133db8u: goto label_133db8;
        case 0x133dbcu: goto label_133dbc;
        case 0x133dc0u: goto label_133dc0;
        case 0x133dc4u: goto label_133dc4;
        case 0x133dc8u: goto label_133dc8;
        case 0x133dccu: goto label_133dcc;
        case 0x133dd0u: goto label_133dd0;
        case 0x133dd4u: goto label_133dd4;
        case 0x133dd8u: goto label_133dd8;
        case 0x133ddcu: goto label_133ddc;
        case 0x133de0u: goto label_133de0;
        case 0x133de4u: goto label_133de4;
        case 0x133de8u: goto label_133de8;
        case 0x133decu: goto label_133dec;
        case 0x133df0u: goto label_133df0;
        case 0x133df4u: goto label_133df4;
        case 0x133df8u: goto label_133df8;
        case 0x133dfcu: goto label_133dfc;
        case 0x133e00u: goto label_133e00;
        case 0x133e04u: goto label_133e04;
        case 0x133e08u: goto label_133e08;
        case 0x133e0cu: goto label_133e0c;
        case 0x133e10u: goto label_133e10;
        case 0x133e14u: goto label_133e14;
        case 0x133e18u: goto label_133e18;
        case 0x133e1cu: goto label_133e1c;
        case 0x133e20u: goto label_133e20;
        case 0x133e24u: goto label_133e24;
        case 0x133e28u: goto label_133e28;
        case 0x133e2cu: goto label_133e2c;
        case 0x133e30u: goto label_133e30;
        case 0x133e34u: goto label_133e34;
        case 0x133e38u: goto label_133e38;
        case 0x133e3cu: goto label_133e3c;
        case 0x133e40u: goto label_133e40;
        case 0x133e44u: goto label_133e44;
        case 0x133e48u: goto label_133e48;
        case 0x133e4cu: goto label_133e4c;
        case 0x133e50u: goto label_133e50;
        case 0x133e54u: goto label_133e54;
        case 0x133e58u: goto label_133e58;
        case 0x133e5cu: goto label_133e5c;
        case 0x133e60u: goto label_133e60;
        case 0x133e64u: goto label_133e64;
        case 0x133e68u: goto label_133e68;
        case 0x133e6cu: goto label_133e6c;
        case 0x133e70u: goto label_133e70;
        case 0x133e74u: goto label_133e74;
        case 0x133e78u: goto label_133e78;
        case 0x133e7cu: goto label_133e7c;
        case 0x133e80u: goto label_133e80;
        case 0x133e84u: goto label_133e84;
        case 0x133e88u: goto label_133e88;
        case 0x133e8cu: goto label_133e8c;
        case 0x133e90u: goto label_133e90;
        case 0x133e94u: goto label_133e94;
        case 0x133e98u: goto label_133e98;
        case 0x133e9cu: goto label_133e9c;
        case 0x133ea0u: goto label_133ea0;
        case 0x133ea4u: goto label_133ea4;
        case 0x133ea8u: goto label_133ea8;
        case 0x133eacu: goto label_133eac;
        case 0x133eb0u: goto label_133eb0;
        case 0x133eb4u: goto label_133eb4;
        case 0x133eb8u: goto label_133eb8;
        case 0x133ebcu: goto label_133ebc;
        case 0x133ec0u: goto label_133ec0;
        case 0x133ec4u: goto label_133ec4;
        case 0x133ec8u: goto label_133ec8;
        case 0x133eccu: goto label_133ecc;
        case 0x133ed0u: goto label_133ed0;
        case 0x133ed4u: goto label_133ed4;
        case 0x133ed8u: goto label_133ed8;
        case 0x133edcu: goto label_133edc;
        case 0x133ee0u: goto label_133ee0;
        default: break;
    }

    ctx->pc = 0x133b90u;

label_133b90:
    // 0x133b90: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x133b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
label_133b94:
    // 0x133b94: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x133b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_133b98:
    // 0x133b98: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x133b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_133b9c:
    // 0x133b9c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x133b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_133ba0:
    // 0x133ba0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x133ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_133ba4:
    // 0x133ba4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x133ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_133ba8:
    // 0x133ba8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x133ba8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_133bac:
    // 0x133bac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x133bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_133bb0:
    // 0x133bb0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x133bb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_133bb4:
    // 0x133bb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x133bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_133bb8:
    // 0x133bb8: 0x27a402f4  addiu       $a0, $sp, 0x2F4
    ctx->pc = 0x133bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 756));
label_133bbc:
    // 0x133bbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_133bc0:
    // 0x133bc0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x133bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133bc4:
    // 0x133bc4: 0xc07fdfe  jal         func_1FF7F8
label_133bc8:
    if (ctx->pc == 0x133BC8u) {
        ctx->pc = 0x133BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BC4u;
        // 0x133bc8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133BCCu;
        goto label_133bcc;
    }
    ctx->pc = 0x133BC4u;
    SET_GPR_U32(ctx, 31, 0x133BCCu);
    ctx->pc = 0x133BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133BC4u;
    // 0x133bc8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x133BC4u, 0x133BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133BCCu;
label_133bcc:
    // 0x133bcc: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x133bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_133bd0:
    // 0x133bd0: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x133bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_133bd4:
    // 0x133bd4: 0xc07fdfe  jal         func_1FF7F8
label_133bd8:
    if (ctx->pc == 0x133BD8u) {
        ctx->pc = 0x133BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BD4u;
        // 0x133bd8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133BDCu;
        goto label_133bdc;
    }
    ctx->pc = 0x133BD4u;
    SET_GPR_U32(ctx, 31, 0x133BDCu);
    ctx->pc = 0x133BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133BD4u;
    // 0x133bd8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x133BD4u, 0x133BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133BDCu;
label_133bdc:
    // 0x133bdc: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x133bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_133be0:
    // 0x133be0: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x133be0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_133be4:
    // 0x133be4: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x133be4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
label_133be8:
    // 0x133be8: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x133be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_133bec:
    // 0x133bec: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_133bf0:
    if (ctx->pc == 0x133BF0u) {
        ctx->pc = 0x133BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BECu;
        // 0x133bf0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133BF4u;
        goto label_133bf4;
    }
    ctx->pc = 0x133BECu;
    {
        const bool branch_taken_0x133bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BECu;
        // 0x133bf0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133bec) {
            ctx->pc = 0x133C38u;
            goto label_133c38;
        }
    }
    ctx->pc = 0x133BF4u;
label_133bf4:
    // 0x133bf4: 0xc0401bc  jal         func_1006F0
label_133bf8:
    if (ctx->pc == 0x133BF8u) {
        ctx->pc = 0x133BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BF4u;
        // 0x133bf8: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133BFCu;
        goto label_133bfc;
    }
    ctx->pc = 0x133BF4u;
    SET_GPR_U32(ctx, 31, 0x133BFCu);
    ctx->pc = 0x133BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133BF4u;
    // 0x133bf8: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x133BF4u, 0x133BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133BFCu;
label_133bfc:
    // 0x133bfc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x133bfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133c00:
    // 0x133c00: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_133c04:
    if (ctx->pc == 0x133C04u) {
        ctx->pc = 0x133C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C00u;
        // 0x133c04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133C08u;
        goto label_133c08;
    }
    ctx->pc = 0x133C00u;
    {
        const bool branch_taken_0x133c00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x133C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C00u;
        // 0x133c04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c00) {
            ctx->pc = 0x133C14u;
            goto label_133c14;
        }
    }
    ctx->pc = 0x133C08u;
label_133c08:
    // 0x133c08: 0xc05063c  jal         func_1418F0
label_133c0c:
    if (ctx->pc == 0x133C0Cu) {
        ctx->pc = 0x133C10u;
        goto label_133c10;
    }
    ctx->pc = 0x133C08u;
    SET_GPR_U32(ctx, 31, 0x133C10u);
    ctx->pc = 0x1418F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1418F0u, 0x133C08u, 0x133C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C10u;
label_133c10:
    // 0x133c10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x133c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133c14:
    // 0x133c14: 0x8fa602f0  lw          $a2, 0x2F0($sp)
    ctx->pc = 0x133c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_133c18:
    // 0x133c18: 0x2702821  addu        $a1, $s3, $s0
    ctx->pc = 0x133c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_133c1c:
    // 0x133c1c: 0xc0507d0  jal         func_141F40
label_133c20:
    if (ctx->pc == 0x133C20u) {
        ctx->pc = 0x133C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C1Cu;
        // 0x133c20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133C24u;
        goto label_133c24;
    }
    ctx->pc = 0x133C1Cu;
    SET_GPR_U32(ctx, 31, 0x133C24u);
    ctx->pc = 0x133C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C1Cu;
    // 0x133c20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141F40u, 0x133C1Cu, 0x133C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C24u;
label_133c24:
    // 0x133c24: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x133c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_133c28:
    // 0x133c28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x133c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_133c2c:
    // 0x133c2c: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x133c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_133c30:
    // 0x133c30: 0xc050784  jal         func_141E10
label_133c34:
    if (ctx->pc == 0x133C34u) {
        ctx->pc = 0x133C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C30u;
        // 0x133c34: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133C38u;
        goto label_133c38;
    }
    ctx->pc = 0x133C30u;
    SET_GPR_U32(ctx, 31, 0x133C38u);
    ctx->pc = 0x133C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C30u;
    // 0x133c34: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141E10u, 0x133C30u, 0x133C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C38u;
label_133c38:
    // 0x133c38: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x133c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_133c3c:
    // 0x133c3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_133c40:
    if (ctx->pc == 0x133C40u) {
        ctx->pc = 0x133C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C3Cu;
        // 0x133c40: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133C44u;
        goto label_133c44;
    }
    ctx->pc = 0x133C3Cu;
    {
        const bool branch_taken_0x133c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C3Cu;
        // 0x133c40: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c3c) {
            ctx->pc = 0x133C4Cu;
            goto label_133c4c;
        }
    }
    ctx->pc = 0x133C44u;
label_133c44:
    // 0x133c44: 0xc07d3ac  jal         func_1F4EB0
label_133c48:
    if (ctx->pc == 0x133C48u) {
        ctx->pc = 0x133C4Cu;
        goto label_133c4c;
    }
    ctx->pc = 0x133C44u;
    SET_GPR_U32(ctx, 31, 0x133C4Cu);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x133C44u, 0x133C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C4Cu;
label_133c4c:
    // 0x133c4c: 0x8e850050  lw          $a1, 0x50($s4)
    ctx->pc = 0x133c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_133c50:
    // 0x133c50: 0xc080702  jal         func_201C08
label_133c54:
    if (ctx->pc == 0x133C54u) {
        ctx->pc = 0x133C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C50u;
        // 0x133c54: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133C58u;
        goto label_133c58;
    }
    ctx->pc = 0x133C50u;
    SET_GPR_U32(ctx, 31, 0x133C58u);
    ctx->pc = 0x133C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C50u;
    // 0x133c54: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x133C50u, 0x133C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C58u;
label_133c58:
    // 0x133c58: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x133c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_133c5c:
    // 0x133c5c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x133c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_133c60:
    // 0x133c60: 0xc080874  jal         func_2021D0
label_133c64:
    if (ctx->pc == 0x133C64u) {
        ctx->pc = 0x133C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C60u;
        // 0x133c64: 0x24a5ee38  addiu       $a1, $a1, -0x11C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133C68u;
        goto label_133c68;
    }
    ctx->pc = 0x133C60u;
    SET_GPR_U32(ctx, 31, 0x133C68u);
    ctx->pc = 0x133C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C60u;
    // 0x133c64: 0x24a5ee38  addiu       $a1, $a1, -0x11C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x133C60u, 0x133C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C68u;
label_133c68:
    // 0x133c68: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_133c6c:
    if (ctx->pc == 0x133C6Cu) {
        ctx->pc = 0x133C70u;
        goto label_133c70;
    }
    ctx->pc = 0x133C68u;
    {
        const bool branch_taken_0x133c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133c68) {
            ctx->pc = 0x133D78u;
            goto label_133d78;
        }
    }
    ctx->pc = 0x133C70u;
label_133c70:
    // 0x133c70: 0x8f838538  lw          $v1, -0x7AC8($gp)
    ctx->pc = 0x133c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935864)));
label_133c74:
    // 0x133c74: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x133c74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
label_133c78:
    // 0x133c78: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x133c78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_133c7c:
    // 0x133c7c: 0x24c6ee40  addiu       $a2, $a2, -0x11C0
    ctx->pc = 0x133c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962752));
label_133c80:
    // 0x133c80: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_133c84:
    if (ctx->pc == 0x133C84u) {
        ctx->pc = 0x133C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C80u;
        // 0x133c84: 0x24a5ee48  addiu       $a1, $a1, -0x11B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133C88u;
        goto label_133c88;
    }
    ctx->pc = 0x133C80u;
    {
        const bool branch_taken_0x133c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x133C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C80u;
        // 0x133c84: 0x24a5ee48  addiu       $a1, $a1, -0x11B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c80) {
            ctx->pc = 0x133C98u;
            goto label_133c98;
        }
    }
    ctx->pc = 0x133C88u;
label_133c88:
    // 0x133c88: 0xc080702  jal         func_201C08
label_133c8c:
    if (ctx->pc == 0x133C8Cu) {
        ctx->pc = 0x133C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C88u;
        // 0x133c8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133C90u;
        goto label_133c90;
    }
    ctx->pc = 0x133C88u;
    SET_GPR_U32(ctx, 31, 0x133C90u);
    ctx->pc = 0x133C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C88u;
    // 0x133c8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x133C88u, 0x133C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C90u;
label_133c90:
    // 0x133c90: 0x10000005  b           . + 4 + (0x5 << 2)
label_133c94:
    if (ctx->pc == 0x133C94u) {
        ctx->pc = 0x133C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C90u;
        // 0x133c94: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133C98u;
        goto label_133c98;
    }
    ctx->pc = 0x133C90u;
    {
        const bool branch_taken_0x133c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C90u;
        // 0x133c94: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c90) {
            ctx->pc = 0x133CA8u;
            goto label_133ca8;
        }
    }
    ctx->pc = 0x133C98u;
label_133c98:
    // 0x133c98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133c9c:
    // 0x133c9c: 0xc080702  jal         func_201C08
label_133ca0:
    if (ctx->pc == 0x133CA0u) {
        ctx->pc = 0x133CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C9Cu;
        // 0x133ca0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133CA4u;
        goto label_133ca4;
    }
    ctx->pc = 0x133C9Cu;
    SET_GPR_U32(ctx, 31, 0x133CA4u);
    ctx->pc = 0x133CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C9Cu;
    // 0x133ca0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x133C9Cu, 0x133CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CA4u;
label_133ca4:
    // 0x133ca4: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x133ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_133ca8:
    // 0x133ca8: 0xc080702  jal         func_201C08
label_133cac:
    if (ctx->pc == 0x133CACu) {
        ctx->pc = 0x133CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133CA8u;
        // 0x133cac: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133CB0u;
        goto label_133cb0;
    }
    ctx->pc = 0x133CA8u;
    SET_GPR_U32(ctx, 31, 0x133CB0u);
    ctx->pc = 0x133CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133CA8u;
    // 0x133cac: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x133CA8u, 0x133CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CB0u;
label_133cb0:
    // 0x133cb0: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x133cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_133cb4:
    // 0x133cb4: 0xc080702  jal         func_201C08
label_133cb8:
    if (ctx->pc == 0x133CB8u) {
        ctx->pc = 0x133CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133CB4u;
        // 0x133cb8: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133CBCu;
        goto label_133cbc;
    }
    ctx->pc = 0x133CB4u;
    SET_GPR_U32(ctx, 31, 0x133CBCu);
    ctx->pc = 0x133CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133CB4u;
    // 0x133cb8: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x133CB4u, 0x133CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CBCu;
label_133cbc:
    // 0x133cbc: 0xc04c0e0  jal         func_130380
label_133cc0:
    if (ctx->pc == 0x133CC0u) {
        ctx->pc = 0x133CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133CBCu;
        // 0x133cc0: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133CC4u;
        goto label_133cc4;
    }
    ctx->pc = 0x133CBCu;
    SET_GPR_U32(ctx, 31, 0x133CC4u);
    ctx->pc = 0x133CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133CBCu;
    // 0x133cc0: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x133CBCu, 0x133CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CC4u;
label_133cc4:
    // 0x133cc4: 0xafa202f8  sw          $v0, 0x2F8($sp)
    ctx->pc = 0x133cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 760), GPR_U32(ctx, 2));
label_133cc8:
    // 0x133cc8: 0x8fa502f8  lw          $a1, 0x2F8($sp)
    ctx->pc = 0x133cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
label_133ccc:
    // 0x133ccc: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
label_133cd0:
    if (ctx->pc == 0x133CD0u) {
        ctx->pc = 0x133CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133CCCu;
        // 0x133cd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133CD4u;
        goto label_133cd4;
    }
    ctx->pc = 0x133CCCu;
    {
        const bool branch_taken_0x133ccc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x133CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133CCCu;
        // 0x133cd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133ccc) {
            ctx->pc = 0x133D70u;
            goto label_133d70;
        }
    }
    ctx->pc = 0x133CD4u;
label_133cd4:
    // 0x133cd4: 0xc04c558  jal         func_131560
label_133cd8:
    if (ctx->pc == 0x133CD8u) {
        ctx->pc = 0x133CDCu;
        goto label_133cdc;
    }
    ctx->pc = 0x133CD4u;
    SET_GPR_U32(ctx, 31, 0x133CDCu);
    ctx->pc = 0x131560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131560u, 0x133CD4u, 0x133CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CDCu;
label_133cdc:
    // 0x133cdc: 0x8e840050  lw          $a0, 0x50($s4)
    ctx->pc = 0x133cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_133ce0:
    // 0x133ce0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x133ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_133ce4:
    // 0x133ce4: 0x8fa302f8  lw          $v1, 0x2F8($sp)
    ctx->pc = 0x133ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
label_133ce8:
    // 0x133ce8: 0x2442ee50  addiu       $v0, $v0, -0x11B0
    ctx->pc = 0x133ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962768));
label_133cec:
    // 0x133cec: 0xac640050  sw          $a0, 0x50($v1)
    ctx->pc = 0x133cecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 4));
label_133cf0:
    // 0x133cf0: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x133cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
label_133cf4:
    // 0x133cf4: 0x8e830084  lw          $v1, 0x84($s4)
    ctx->pc = 0x133cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_133cf8:
    // 0x133cf8: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x133cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_133cfc:
    // 0x133cfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_133d00:
    // 0x133d00: 0xac6200e4  sw          $v0, 0xE4($v1)
    ctx->pc = 0x133d00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 228), GPR_U32(ctx, 2));
label_133d04:
    // 0x133d04: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x133d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_133d08:
    // 0x133d08: 0x245100e8  addiu       $s1, $v0, 0xE8
    ctx->pc = 0x133d08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
label_133d0c:
    // 0x133d0c: 0xc049ed0  jal         func_127B40
label_133d10:
    if (ctx->pc == 0x133D10u) {
        ctx->pc = 0x133D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D0Cu;
        // 0x133d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D14u;
        goto label_133d14;
    }
    ctx->pc = 0x133D0Cu;
    SET_GPR_U32(ctx, 31, 0x133D14u);
    ctx->pc = 0x133D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133D0Cu;
    // 0x133d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x133D0Cu, 0x133D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133D14u;
label_133d14:
    // 0x133d14: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x133d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_133d18:
    // 0x133d18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133d1c:
    // 0x133d1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x133d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_133d20:
    // 0x133d20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x133d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_133d24:
    // 0x133d24: 0x27a702f8  addiu       $a3, $sp, 0x2F8
    ctx->pc = 0x133d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 760));
label_133d28:
    // 0x133d28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x133d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_133d2c:
    // 0x133d2c: 0xc0484ec  jal         func_1213B0
label_133d30:
    if (ctx->pc == 0x133D30u) {
        ctx->pc = 0x133D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D2Cu;
        // 0x133d30: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D34u;
        goto label_133d34;
    }
    ctx->pc = 0x133D2Cu;
    SET_GPR_U32(ctx, 31, 0x133D34u);
    ctx->pc = 0x133D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133D2Cu;
    // 0x133d30: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x133D2Cu, 0x133D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133D34u;
label_133d34:
    // 0x133d34: 0x8fa302f8  lw          $v1, 0x2F8($sp)
    ctx->pc = 0x133d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
label_133d38:
    // 0x133d38: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x133d38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_133d3c:
    // 0x133d3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_133d40:
    // 0x133d40: 0xae830088  sw          $v1, 0x88($s4)
    ctx->pc = 0x133d40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 3));
label_133d44:
    // 0x133d44: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x133d44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
label_133d48:
    // 0x133d48: 0x8e840050  lw          $a0, 0x50($s4)
    ctx->pc = 0x133d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_133d4c:
    // 0x133d4c: 0xc080874  jal         func_2021D0
label_133d50:
    if (ctx->pc == 0x133D50u) {
        ctx->pc = 0x133D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D4Cu;
        // 0x133d50: 0x24a5ee58  addiu       $a1, $a1, -0x11A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D54u;
        goto label_133d54;
    }
    ctx->pc = 0x133D4Cu;
    SET_GPR_U32(ctx, 31, 0x133D54u);
    ctx->pc = 0x133D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133D4Cu;
    // 0x133d50: 0x24a5ee58  addiu       $a1, $a1, -0x11A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x133D4Cu, 0x133D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133D54u;
label_133d54:
    // 0x133d54: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_133d58:
    if (ctx->pc == 0x133D58u) {
        ctx->pc = 0x133D5Cu;
        goto label_133d5c;
    }
    ctx->pc = 0x133D54u;
    {
        const bool branch_taken_0x133d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133d54) {
            ctx->pc = 0x133D70u;
            goto label_133d70;
        }
    }
    ctx->pc = 0x133D5Cu;
label_133d5c:
    // 0x133d5c: 0x8e840064  lw          $a0, 0x64($s4)
    ctx->pc = 0x133d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_133d60:
    // 0x133d60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x133d60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_133d64:
    // 0x133d64: 0x8f390088  lw          $t9, 0x88($t9)
    ctx->pc = 0x133d64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 136)));
label_133d68:
    // 0x133d68: 0x320f809  jalr        $t9
label_133d6c:
    if (ctx->pc == 0x133D6Cu) {
        ctx->pc = 0x133D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D68u;
        // 0x133d6c: 0x8fa502f8  lw          $a1, 0x2F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D70u;
        goto label_133d70;
    }
    ctx->pc = 0x133D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x133D70u);
        ctx->pc = 0x133D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D68u;
        // 0x133d6c: 0x8fa502f8  lw          $a1, 0x2F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133D68u, 0x133D70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x133D70u;
label_133d70:
    // 0x133d70: 0x8fb102f8  lw          $s1, 0x2F8($sp)
    ctx->pc = 0x133d70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
label_133d74:
    // 0x133d74: 0x0  nop
    ctx->pc = 0x133d74u;
    // NOP
label_133d78:
    // 0x133d78: 0x8e850050  lw          $a1, 0x50($s4)
    ctx->pc = 0x133d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_133d7c:
    // 0x133d7c: 0xc080702  jal         func_201C08
label_133d80:
    if (ctx->pc == 0x133D80u) {
        ctx->pc = 0x133D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D7Cu;
        // 0x133d80: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D84u;
        goto label_133d84;
    }
    ctx->pc = 0x133D7Cu;
    SET_GPR_U32(ctx, 31, 0x133D84u);
    ctx->pc = 0x133D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133D7Cu;
    // 0x133d80: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x133D7Cu, 0x133D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133D84u;
label_133d84:
    // 0x133d84: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x133d84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_133d88:
    // 0x133d88: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x133d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_133d8c:
    // 0x133d8c: 0xc0806b0  jal         func_201AC0
label_133d90:
    if (ctx->pc == 0x133D90u) {
        ctx->pc = 0x133D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D8Cu;
        // 0x133d90: 0x24a5ee60  addiu       $a1, $a1, -0x11A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D94u;
        goto label_133d94;
    }
    ctx->pc = 0x133D8Cu;
    SET_GPR_U32(ctx, 31, 0x133D94u);
    ctx->pc = 0x133D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133D8Cu;
    // 0x133d90: 0x24a5ee60  addiu       $a1, $a1, -0x11A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x133D8Cu, 0x133D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133D94u;
label_133d94:
    // 0x133d94: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_133d98:
    if (ctx->pc == 0x133D98u) {
        ctx->pc = 0x133D9Cu;
        goto label_133d9c;
    }
    ctx->pc = 0x133D94u;
    {
        const bool branch_taken_0x133d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133d94) {
            ctx->pc = 0x133E14u;
            goto label_133e14;
        }
    }
    ctx->pc = 0x133D9Cu;
label_133d9c:
    // 0x133d9c: 0xc053098  jal         func_14C260
label_133da0:
    if (ctx->pc == 0x133DA0u) {
        ctx->pc = 0x133DA4u;
        goto label_133da4;
    }
    ctx->pc = 0x133D9Cu;
    SET_GPR_U32(ctx, 31, 0x133DA4u);
    ctx->pc = 0x14C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C260u, 0x133D9Cu, 0x133DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133DA4u;
label_133da4:
    // 0x133da4: 0xafa202fc  sw          $v0, 0x2FC($sp)
    ctx->pc = 0x133da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 764), GPR_U32(ctx, 2));
label_133da8:
    // 0x133da8: 0x8fa502fc  lw          $a1, 0x2FC($sp)
    ctx->pc = 0x133da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 764)));
label_133dac:
    // 0x133dac: 0xc04c558  jal         func_131560
label_133db0:
    if (ctx->pc == 0x133DB0u) {
        ctx->pc = 0x133DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133DACu;
        // 0x133db0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133DB4u;
        goto label_133db4;
    }
    ctx->pc = 0x133DACu;
    SET_GPR_U32(ctx, 31, 0x133DB4u);
    ctx->pc = 0x133DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133DACu;
    // 0x133db0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131560u, 0x133DACu, 0x133DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133DB4u;
label_133db4:
    // 0x133db4: 0x8e840050  lw          $a0, 0x50($s4)
    ctx->pc = 0x133db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_133db8:
    // 0x133db8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x133db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_133dbc:
    // 0x133dbc: 0x8fa302fc  lw          $v1, 0x2FC($sp)
    ctx->pc = 0x133dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 764)));
label_133dc0:
    // 0x133dc0: 0x2442ee50  addiu       $v0, $v0, -0x11B0
    ctx->pc = 0x133dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962768));
label_133dc4:
    // 0x133dc4: 0xac640050  sw          $a0, 0x50($v1)
    ctx->pc = 0x133dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 4));
label_133dc8:
    // 0x133dc8: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x133dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
label_133dcc:
    // 0x133dcc: 0x8e830084  lw          $v1, 0x84($s4)
    ctx->pc = 0x133dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_133dd0:
    // 0x133dd0: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x133dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_133dd4:
    // 0x133dd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_133dd8:
    // 0x133dd8: 0xac6200e4  sw          $v0, 0xE4($v1)
    ctx->pc = 0x133dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 228), GPR_U32(ctx, 2));
label_133ddc:
    // 0x133ddc: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x133ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_133de0:
    // 0x133de0: 0x245500e8  addiu       $s5, $v0, 0xE8
    ctx->pc = 0x133de0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
label_133de4:
    // 0x133de4: 0xc049ed0  jal         func_127B40
label_133de8:
    if (ctx->pc == 0x133DE8u) {
        ctx->pc = 0x133DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133DE4u;
        // 0x133de8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133DECu;
        goto label_133dec;
    }
    ctx->pc = 0x133DE4u;
    SET_GPR_U32(ctx, 31, 0x133DECu);
    ctx->pc = 0x133DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133DE4u;
    // 0x133de8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x133DE4u, 0x133DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133DECu;
label_133dec:
    // 0x133dec: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x133decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_133df0:
    // 0x133df0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x133df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_133df4:
    // 0x133df4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x133df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_133df8:
    // 0x133df8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x133df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_133dfc:
    // 0x133dfc: 0x27a702fc  addiu       $a3, $sp, 0x2FC
    ctx->pc = 0x133dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 764));
label_133e00:
    // 0x133e00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x133e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_133e04:
    // 0x133e04: 0xc0484ec  jal         func_1213B0
label_133e08:
    if (ctx->pc == 0x133E08u) {
        ctx->pc = 0x133E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E04u;
        // 0x133e08: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E0Cu;
        goto label_133e0c;
    }
    ctx->pc = 0x133E04u;
    SET_GPR_U32(ctx, 31, 0x133E0Cu);
    ctx->pc = 0x133E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E04u;
    // 0x133e08: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x133E04u, 0x133E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E0Cu;
label_133e0c:
    // 0x133e0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_133e10:
    // 0x133e10: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x133e10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
label_133e14:
    // 0x133e14: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x133e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_133e18:
    // 0x133e18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_133e1c:
    if (ctx->pc == 0x133E1Cu) {
        ctx->pc = 0x133E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E18u;
        // 0x133e1c: 0x26830010  addiu       $v1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E20u;
        goto label_133e20;
    }
    ctx->pc = 0x133E18u;
    {
        const bool branch_taken_0x133e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E18u;
        // 0x133e1c: 0x26830010  addiu       $v1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133e18) {
            ctx->pc = 0x133E30u;
            goto label_133e30;
        }
    }
    ctx->pc = 0x133E20u;
label_133e20:
    // 0x133e20: 0x26820054  addiu       $v0, $s4, 0x54
    ctx->pc = 0x133e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 84));
label_133e24:
    // 0x133e24: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x133e24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_133e28:
    // 0x133e28: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x133e28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_133e2c:
    // 0x133e2c: 0xae54001c  sw          $s4, 0x1C($s2)
    ctx->pc = 0x133e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 20));
label_133e30:
    // 0x133e30: 0x1000001e  b           . + 4 + (0x1E << 2)
label_133e34:
    if (ctx->pc == 0x133E34u) {
        ctx->pc = 0x133E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E30u;
        // 0x133e34: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E38u;
        goto label_133e38;
    }
    ctx->pc = 0x133E30u;
    {
        const bool branch_taken_0x133e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E30u;
        // 0x133e34: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133e30) {
            ctx->pc = 0x133EACu;
            goto label_133eac;
        }
    }
    ctx->pc = 0x133E38u;
label_133e38:
    // 0x133e38: 0xc0401bc  jal         func_1006F0
label_133e3c:
    if (ctx->pc == 0x133E3Cu) {
        ctx->pc = 0x133E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E38u;
        // 0x133e3c: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E40u;
        goto label_133e40;
    }
    ctx->pc = 0x133E38u;
    SET_GPR_U32(ctx, 31, 0x133E40u);
    ctx->pc = 0x133E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E38u;
    // 0x133e3c: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x133E38u, 0x133E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E40u;
label_133e40:
    // 0x133e40: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_133e44:
    if (ctx->pc == 0x133E44u) {
        ctx->pc = 0x133E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E40u;
        // 0x133e44: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E48u;
        goto label_133e48;
    }
    ctx->pc = 0x133E40u;
    {
        const bool branch_taken_0x133e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E40u;
        // 0x133e44: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133e40) {
            ctx->pc = 0x133E68u;
            goto label_133e68;
        }
    }
    ctx->pc = 0x133E48u;
label_133e48:
    // 0x133e48: 0xc04c4c0  jal         func_131300
label_133e4c:
    if (ctx->pc == 0x133E4Cu) {
        ctx->pc = 0x133E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E48u;
        // 0x133e4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E50u;
        goto label_133e50;
    }
    ctx->pc = 0x133E48u;
    SET_GPR_U32(ctx, 31, 0x133E50u);
    ctx->pc = 0x133E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E48u;
    // 0x133e4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131300u, 0x133E48u, 0x133E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E50u;
label_133e50:
    // 0x133e50: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x133e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_133e54:
    // 0x133e54: 0x24428cd0  addiu       $v0, $v0, -0x7330
    ctx->pc = 0x133e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937808));
label_133e58:
    // 0x133e58: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x133e58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_133e5c:
    // 0x133e5c: 0xaea00080  sw          $zero, 0x80($s5)
    ctx->pc = 0x133e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 0));
label_133e60:
    // 0x133e60: 0xaea00084  sw          $zero, 0x84($s5)
    ctx->pc = 0x133e60u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 0));
label_133e64:
    // 0x133e64: 0xaea00088  sw          $zero, 0x88($s5)
    ctx->pc = 0x133e64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 136), GPR_U32(ctx, 0));
label_133e68:
    // 0x133e68: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x133e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_133e6c:
    // 0x133e6c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_133e70:
    if (ctx->pc == 0x133E70u) {
        ctx->pc = 0x133E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E6Cu;
        // 0x133e70: 0xaea20084  sw          $v0, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E74u;
        goto label_133e74;
    }
    ctx->pc = 0x133E6Cu;
    {
        const bool branch_taken_0x133e6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x133E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E6Cu;
        // 0x133e70: 0xaea20084  sw          $v0, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133e6c) {
            ctx->pc = 0x133E88u;
            goto label_133e88;
        }
    }
    ctx->pc = 0x133E74u;
label_133e74:
    // 0x133e74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133e78:
    // 0x133e78: 0xc04c558  jal         func_131560
label_133e7c:
    if (ctx->pc == 0x133E7Cu) {
        ctx->pc = 0x133E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E78u;
        // 0x133e7c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E80u;
        goto label_133e80;
    }
    ctx->pc = 0x133E78u;
    SET_GPR_U32(ctx, 31, 0x133E80u);
    ctx->pc = 0x133E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E78u;
    // 0x133e7c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131560u, 0x133E78u, 0x133E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E80u;
label_133e80:
    // 0x133e80: 0x10000004  b           . + 4 + (0x4 << 2)
label_133e84:
    if (ctx->pc == 0x133E84u) {
        ctx->pc = 0x133E88u;
        goto label_133e88;
    }
    ctx->pc = 0x133E80u;
    {
        const bool branch_taken_0x133e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133e80) {
            ctx->pc = 0x133E94u;
            goto label_133e94;
        }
    }
    ctx->pc = 0x133E88u;
label_133e88:
    // 0x133e88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x133e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_133e8c:
    // 0x133e8c: 0xc04c558  jal         func_131560
label_133e90:
    if (ctx->pc == 0x133E90u) {
        ctx->pc = 0x133E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E8Cu;
        // 0x133e90: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E94u;
        goto label_133e94;
    }
    ctx->pc = 0x133E8Cu;
    SET_GPR_U32(ctx, 31, 0x133E94u);
    ctx->pc = 0x133E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E8Cu;
    // 0x133e90: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131560u, 0x133E8Cu, 0x133E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E94u;
label_133e94:
    // 0x133e94: 0x0  nop
    ctx->pc = 0x133e94u;
    // NOP
label_133e98:
    // 0x133e98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x133e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_133e9c:
    // 0x133e9c: 0xc04cee4  jal         func_133B90
label_133ea0:
    if (ctx->pc == 0x133EA0u) {
        ctx->pc = 0x133EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E9Cu;
        // 0x133ea0: 0x2702821  addu        $a1, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133EA4u;
        goto label_133ea4;
    }
    ctx->pc = 0x133E9Cu;
    SET_GPR_U32(ctx, 31, 0x133EA4u);
    ctx->pc = 0x133EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E9Cu;
    // 0x133ea0: 0x2702821  addu        $a1, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133B90u;
    goto label_133b90;
    ctx->pc = 0x133EA4u;
label_133ea4:
    // 0x133ea4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x133ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_133ea8:
    // 0x133ea8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x133ea8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_133eac:
    // 0x133eac: 0x0  nop
    ctx->pc = 0x133eacu;
    // NOP
label_133eb0:
    // 0x133eb0: 0x8fa202f4  lw          $v0, 0x2F4($sp)
    ctx->pc = 0x133eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
label_133eb4:
    // 0x133eb4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x133eb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_133eb8:
    // 0x133eb8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_133ebc:
    if (ctx->pc == 0x133EBCu) {
        ctx->pc = 0x133EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EB8u;
        // 0x133ebc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133EC0u;
        goto label_133ec0;
    }
    ctx->pc = 0x133EB8u;
    {
        const bool branch_taken_0x133eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EB8u;
        // 0x133ebc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133eb8) {
            ctx->pc = 0x133E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133e38;
        }
    }
    ctx->pc = 0x133EC0u;
label_133ec0:
    // 0x133ec0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x133ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_133ec4:
    // 0x133ec4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x133ec4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_133ec8:
    // 0x133ec8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x133ec8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_133ecc:
    // 0x133ecc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x133eccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_133ed0:
    // 0x133ed0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x133ed0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_133ed4:
    // 0x133ed4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x133ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_133ed8:
    // 0x133ed8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133ed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_133edc:
    // 0x133edc: 0x3e00008  jr          $ra
label_133ee0:
    if (ctx->pc == 0x133EE0u) {
        ctx->pc = 0x133EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EDCu;
        // 0x133ee0: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133EE4u;
        goto label_fallthrough_0x133edc;
    }
    ctx->pc = 0x133EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EDCu;
        // 0x133ee0: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x133edc:
    ctx->pc = 0x133EE4u;
}
