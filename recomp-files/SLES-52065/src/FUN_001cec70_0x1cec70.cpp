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

// Function: FUN_001cec70
// Address: 0x1cec70 - 0x1ceccc
void FUN_001cec70_0x1cec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cec70_0x1cec70");
#endif

    switch (ctx->pc) {
        case 0x1cec80u: goto label_1cec80;
        case 0x1cec94u: goto label_1cec94;
        case 0x1cecc0u: goto label_1cecc0;
        default: break;
    }

    ctx->pc = 0x1cec70u;

    // 0x1cec70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cec74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cec74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cec78: 0xc045f20  jal         func_117C80
    ctx->pc = 0x1CEC78u;
    SET_GPR_U32(ctx, 31, 0x1CEC80u);
    ctx->pc = 0x1CEC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEC78u;
    // 0x1cec7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C80u, 0x1CEC78u, 0x1CEC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC80u;
label_1cec80:
    // 0x1cec80: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cec80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cec84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cec84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec88: 0x24a59460  addiu       $a1, $a1, -0x6BA0
    ctx->pc = 0x1cec88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939744));
    // 0x1cec8c: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1CEC8Cu;
    SET_GPR_U32(ctx, 31, 0x1CEC94u);
    ctx->pc = 0x1CEC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEC8Cu;
    // 0x1cec90: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1CEC8Cu, 0x1CEC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC94u;
label_1cec94:
    // 0x1cec94: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cec94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cec98: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1cec98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1cec9c: 0x8c23fb40  lw          $v1, -0x4C0($at)
    ctx->pc = 0x1cec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FB40u));
    // 0x1ceca0: 0x24422fc0  addiu       $v0, $v0, 0x2FC0
    ctx->pc = 0x1ceca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12224));
    // 0x1ceca4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ceca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ceca8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ceca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cecac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cecacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cecb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cecb4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cecb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cecb8: 0xc060020  jal         func_180080
    ctx->pc = 0x1CECB8u;
    SET_GPR_U32(ctx, 31, 0x1CECC0u);
    ctx->pc = 0x1CECBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CECB8u;
    // 0x1cecbc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180080u, 0x1CECB8u, 0x1CECC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CECC0u;
label_1cecc0:
    // 0x1cecc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cecc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cecc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CECC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CECC4u;
        // 0x1cecc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CECC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CECCCu;
}
