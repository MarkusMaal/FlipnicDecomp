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

// Function: entry_001be720
// Address: 0x1be720 - 0x1be738
void entry_001be720_0x1be720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be720_0x1be720");
#endif

    switch (ctx->pc) {
        case 0x1be734u: goto label_1be734;
        default: break;
    }

    ctx->pc = 0x1be720u;

    // 0x1be720: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1be720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1be724: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE724u;
    {
        const bool branch_taken_0x1be724 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE724u;
        // 0x1be728: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be724) {
            ctx->pc = 0x1BE738u;
            return;
        }
    }
    ctx->pc = 0x1BE72Cu;
    // 0x1be72c: 0xc06f92c  jal         func_1BE4B0
    ctx->pc = 0x1BE72Cu;
    SET_GPR_U32(ctx, 31, 0x1BE734u);
    ctx->pc = 0x1BE730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE72Cu;
    // 0x1be730: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE4B0u, 0x1BE72Cu, 0x1BE734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE734u;
label_1be734:
    // 0x1be734: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1be738u;
}
