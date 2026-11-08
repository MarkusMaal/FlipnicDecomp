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

// Function: entry_0013ba38
// Address: 0x13ba38 - 0x13ba50
void entry_0013ba38_0x13ba38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ba38_0x13ba38");
#endif

    switch (ctx->pc) {
        case 0x13ba4cu: goto label_13ba4c;
        default: break;
    }

    ctx->pc = 0x13ba38u;

    // 0x13ba38: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x13ba38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13ba3c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13BA3Cu;
    {
        const bool branch_taken_0x13ba3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA3Cu;
        // 0x13ba40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba3c) {
            ctx->pc = 0x13BA50u;
            return;
        }
    }
    ctx->pc = 0x13BA44u;
    // 0x13ba44: 0xc04ee7c  jal         func_13B9F0
    ctx->pc = 0x13BA44u;
    SET_GPR_U32(ctx, 31, 0x13BA4Cu);
    ctx->pc = 0x13BA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BA44u;
    // 0x13ba48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B9F0u, 0x13BA44u, 0x13BA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA4Cu;
label_13ba4c:
    // 0x13ba4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ba4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13ba50u;
}
