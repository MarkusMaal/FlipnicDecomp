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

// Function: FUN_001fbb78
// Address: 0x1fbb78 - 0x1fbc00
void FUN_001fbb78_0x1fbb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fbb78_0x1fbb78");
#endif

    switch (ctx->pc) {
        case 0x1fbbd4u: goto label_1fbbd4;
        case 0x1fbbf4u: goto label_1fbbf4;
        default: break;
    }

    ctx->pc = 0x1fbb78u;

    // 0x1fbb78: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x1fbb78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fbb7c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fbb7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fbb80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fbb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb84: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1fbb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1fbb88: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fbb88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fbb8c: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x1fbb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x1fbb90: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1fbb90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fbb94: 0x34420fda  ori         $v0, $v0, 0xFDA
    ctx->pc = 0x1fbb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4058);
    // 0x1fbb98: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1fbb98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fbb9c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBB9Cu;
    {
        const bool branch_taken_0x1fbb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB9Cu;
        // 0x1fbba0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb9c) {
            ctx->pc = 0x1FBBB0u;
            goto label_1fbbb0;
        }
    }
    ctx->pc = 0x1FBBA4u;
    // 0x1fbba4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fbba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1fbba8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FBBA8u;
    {
        const bool branch_taken_0x1fbba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBBA8u;
        // 0x1fbbac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbba8) {
            ctx->pc = 0x1FBBECu;
            goto label_1fbbec;
        }
    }
    ctx->pc = 0x1FBBB0u;
label_1fbbb0:
    // 0x1fbbb0: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1fbbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x1fbbb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fbbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fbbb8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1fbbb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fbbbc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBBBCu;
    {
        const bool branch_taken_0x1fbbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbbbc) {
            ctx->pc = 0x1FBBCCu;
            goto label_1fbbcc;
        }
    }
    ctx->pc = 0x1FBBC4u;
    // 0x1fbbc4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FBBC4u;
    {
        const bool branch_taken_0x1fbbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBBC4u;
        // 0x1fbbc8: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbbc4) {
            ctx->pc = 0x1FBBF4u;
            goto label_1fbbf4;
        }
    }
    ctx->pc = 0x1FBBCCu;
label_1fbbcc:
    // 0x1fbbcc: 0xc07e80c  jal         func_1FA030
    ctx->pc = 0x1FBBCCu;
    SET_GPR_U32(ctx, 31, 0x1FBBD4u);
    ctx->pc = 0x1FBBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBBCCu;
    // 0x1fbbd0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA030u, 0x1FBBCCu, 0x1FBBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBBD4u;
label_1fbbd4:
    // 0x1fbbd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fbbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fbbd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fbbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbbdc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1fbbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1fbbe0: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1fbbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fbbe4: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x1fbbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fbbe8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1fbbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1fbbec:
    // 0x1fbbec: 0xc07ec3e  jal         func_1FB0F8
    ctx->pc = 0x1FBBECu;
    SET_GPR_U32(ctx, 31, 0x1FBBF4u);
    ctx->pc = 0x1FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB0F8u, 0x1FBBECu, 0x1FBBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBBF4u;
label_1fbbf4:
    // 0x1fbbf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fbbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBBF8u;
        // 0x1fbbfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBC00u;
}
