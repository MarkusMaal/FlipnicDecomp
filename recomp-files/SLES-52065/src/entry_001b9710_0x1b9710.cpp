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

// Function: entry_001b9710
// Address: 0x1b9710 - 0x1b9734
void entry_001b9710_0x1b9710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9710_0x1b9710");
#endif

    switch (ctx->pc) {
        case 0x1b9718u: goto label_1b9718;
        default: break;
    }

    ctx->pc = 0x1b9710u;

    // 0x1b9710: 0xc06e0f8  jal         func_1B83E0
    ctx->pc = 0x1B9710u;
    SET_GPR_U32(ctx, 31, 0x1B9718u);
    ctx->pc = 0x1B9714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9710u;
    // 0x1b9714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E0u, 0x1B9710u, 0x1B9718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9718u;
label_1b9718:
    // 0x1b9718: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1b9718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b971c: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B971Cu;
    {
        const bool branch_taken_0x1b971c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b971c) {
            ctx->pc = 0x1B9700u;
            return;
        }
    }
    ctx->pc = 0x1B9724u;
    // 0x1b9724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b9728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b972c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B972Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B972Cu;
        // 0x1b9730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B972Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9734u;
}
