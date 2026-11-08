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

// Function: entry_001eaf00
// Address: 0x1eaf00 - 0x1eaf18
void entry_001eaf00_0x1eaf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eaf00_0x1eaf00");
#endif

    switch (ctx->pc) {
        case 0x1eaf10u: goto label_1eaf10;
        default: break;
    }

    ctx->pc = 0x1eaf00u;

    // 0x1eaf00: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EAF00u;
    {
        const bool branch_taken_0x1eaf00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF00u;
        // 0x1eaf04: 0x26250234  addiu       $a1, $s1, 0x234 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 564));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaf00) {
            ctx->pc = 0x1EAF18u;
            return;
        }
    }
    ctx->pc = 0x1EAF08u;
    // 0x1eaf08: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EAF08u;
    SET_GPR_U32(ctx, 31, 0x1EAF10u);
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EAF08u, 0x1EAF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAF10u;
label_1eaf10:
    // 0x1eaf10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EAF10u;
    {
        const bool branch_taken_0x1eaf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF10u;
        // 0x1eaf14: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaf10) {
            ctx->pc = 0x1EAF20u;
            return;
        }
    }
    ctx->pc = 0x1EAF18u;
}
