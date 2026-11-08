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

// Function: entry_00203c80
// Address: 0x203c80 - 0x203ca8
void entry_00203c80_0x203c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203c80_0x203c80");
#endif

    ctx->pc = 0x203c80u;

label_203c80:
    // 0x203c80: 0x26e3ffe0  addiu       $v1, $s7, -0x20
    ctx->pc = 0x203c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967264));
label_203c84:
    // 0x203c84: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x203c84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
label_203c88:
    // 0x203c88: 0x104001b6  beqz        $v0, . + 4 + (0x1B6 << 2)
label_203c8c:
    if (ctx->pc == 0x203C8Cu) {
        ctx->pc = 0x203C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C88u;
        // 0x203c8c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C90u;
        goto label_203c90;
    }
    ctx->pc = 0x203C88u;
    {
        const bool branch_taken_0x203c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C88u;
        // 0x203c8c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c88) {
            ctx->pc = 0x204364u;
            return;
        }
    }
    ctx->pc = 0x203C90u;
label_203c90:
    // 0x203c90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x203c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_203c94:
    // 0x203c94: 0x24425220  addiu       $v0, $v0, 0x5220
    ctx->pc = 0x203c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21024));
label_203c98:
    // 0x203c98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x203c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_203c9c:
    // 0x203c9c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x203c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_203ca0:
    // 0x203ca0: 0x800008  jr          $a0
label_203ca4:
    if (ctx->pc == 0x203CA4u) {
        ctx->pc = 0x203CA8u;
        goto label_fallthrough_0x203ca0;
    }
    ctx->pc = 0x203CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203CA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x203ca0:
    ctx->pc = 0x203CA8u;
}
