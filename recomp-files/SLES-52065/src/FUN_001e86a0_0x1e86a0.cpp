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

// Function: FUN_001e86a0
// Address: 0x1e86a0 - 0x1e86f0
void FUN_001e86a0_0x1e86a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e86a0_0x1e86a0");
#endif

    switch (ctx->pc) {
        case 0x1e86c4u: goto label_1e86c4;
        default: break;
    }

    ctx->pc = 0x1e86a0u;

    // 0x1e86a0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1e86a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e86a4: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1e86a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e86a8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1e86a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1e86ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e86acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e86b0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1e86b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e86b4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1e86b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1e86b8: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x1e86b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e86bc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E86BCu;
    {
        const bool branch_taken_0x1e86bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e86bc) {
            ctx->pc = 0x1E86E4u;
            goto label_1e86e4;
        }
    }
    ctx->pc = 0x1E86C4u;
label_1e86c4:
    // 0x1e86c4: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x1e86c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x1e86c8: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x1e86c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e86cc: 0x0  nop
    ctx->pc = 0x1e86ccu;
    // NOP
    // 0x1e86d0: 0x0  nop
    ctx->pc = 0x1e86d0u;
    // NOP
    // 0x1e86d4: 0x0  nop
    ctx->pc = 0x1e86d4u;
    // NOP
    // 0x1e86d8: 0x0  nop
    ctx->pc = 0x1e86d8u;
    // NOP
    // 0x1e86dc: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E86DCu;
    {
        const bool branch_taken_0x1e86dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e86dc) {
            ctx->pc = 0x1E86C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e86c4;
        }
    }
    ctx->pc = 0x1E86E4u;
label_1e86e4:
    // 0x1e86e4: 0x0  nop
    ctx->pc = 0x1e86e4u;
    // NOP
    // 0x1e86e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E86E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E86ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E86E8u;
        // 0x1e86ec: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E86E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E86F0u;
}
