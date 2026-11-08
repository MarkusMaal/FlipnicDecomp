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

// Function: entry_001d3088
// Address: 0x1d3088 - 0x1d309c
void entry_001d3088_0x1d3088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3088_0x1d3088");
#endif

    switch (ctx->pc) {
        case 0x1d3098u: goto label_1d3098;
        default: break;
    }

    ctx->pc = 0x1d3088u;

    // 0x1d3088: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3088u;
    {
        const bool branch_taken_0x1d3088 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3088u;
        // 0x1d308c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3088) {
            ctx->pc = 0x1D309Cu;
            return;
        }
    }
    ctx->pc = 0x1D3090u;
    // 0x1d3090: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D3090u;
    SET_GPR_U32(ctx, 31, 0x1D3098u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D3090u, 0x1D3098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3098u;
label_1d3098:
    // 0x1d3098: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d3098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d309cu;
}
