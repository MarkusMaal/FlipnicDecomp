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

// Function: FUN_001f6c90
// Address: 0x1f6c90 - 0x1f6cf8
void FUN_001f6c90_0x1f6c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f6c90_0x1f6c90");
#endif

    switch (ctx->pc) {
        case 0x1f6cbcu: goto label_1f6cbc;
        case 0x1f6cd4u: goto label_1f6cd4;
        case 0x1f6cdcu: goto label_1f6cdc;
        case 0x1f6ce4u: goto label_1f6ce4;
        default: break;
    }

    ctx->pc = 0x1f6c90u;

    // 0x1f6c90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f6c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f6c94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f6c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6c98: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1f6c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1f6c9c: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x1f6c9cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1f6ca0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1f6ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1f6ca4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1f6ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1f6ca8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1f6ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1f6cac: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1f6cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1f6cb0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f6cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f6cb4: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F6CB4u;
    SET_GPR_U32(ctx, 31, 0x1F6CBCu);
    ctx->pc = 0x1F6CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6CB4u;
    // 0x1f6cb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F6CB4u, 0x1F6CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6CBCu;
label_1f6cbc:
    // 0x1f6cbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f6cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6cc0: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x1f6cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x1f6cc4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f6cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6cc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f6cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ccc: 0xc07ace8  jal         func_1EB3A0
    ctx->pc = 0x1F6CCCu;
    SET_GPR_U32(ctx, 31, 0x1F6CD4u);
    ctx->pc = 0x1F6CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6CCCu;
    // 0x1f6cd0: 0x24a56c68  addiu       $a1, $a1, 0x6C68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB3A0u, 0x1F6CCCu, 0x1F6CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6CD4u;
label_1f6cd4:
    // 0x1f6cd4: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F6CD4u;
    SET_GPR_U32(ctx, 31, 0x1F6CDCu);
    ctx->pc = 0x1F6CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6CD4u;
    // 0x1f6cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F6CD4u, 0x1F6CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6CDCu;
label_1f6cdc:
    // 0x1f6cdc: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F6CDCu;
    SET_GPR_U32(ctx, 31, 0x1F6CE4u);
    ctx->pc = 0x1F6CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6CDCu;
    // 0x1f6ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F6CDCu, 0x1F6CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6CE4u;
label_1f6ce4:
    // 0x1f6ce4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f6ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f6ce8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1f6ce8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6cec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1f6cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6CF0u;
        // 0x1f6cf4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6CF8u;
}
