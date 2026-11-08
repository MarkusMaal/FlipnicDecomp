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

// Function: entry_001bb548
// Address: 0x1bb548 - 0x1bb560
void entry_001bb548_0x1bb548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb548_0x1bb548");
#endif

    switch (ctx->pc) {
        case 0x1bb55cu: goto label_1bb55c;
        default: break;
    }

    ctx->pc = 0x1bb548u;

    // 0x1bb548: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1bb548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1bb54c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB54Cu;
    {
        const bool branch_taken_0x1bb54c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB54Cu;
        // 0x1bb550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb54c) {
            ctx->pc = 0x1BB560u;
            return;
        }
    }
    ctx->pc = 0x1BB554u;
    // 0x1bb554: 0xc06ed40  jal         func_1BB500
    ctx->pc = 0x1BB554u;
    SET_GPR_U32(ctx, 31, 0x1BB55Cu);
    ctx->pc = 0x1BB558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB554u;
    // 0x1bb558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB500u, 0x1BB554u, 0x1BB55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB55Cu;
label_1bb55c:
    // 0x1bb55c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bb55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bb560u;
}
