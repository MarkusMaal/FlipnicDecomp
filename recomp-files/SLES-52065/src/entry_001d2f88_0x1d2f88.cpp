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

// Function: entry_001d2f88
// Address: 0x1d2f88 - 0x1d2f9c
void entry_001d2f88_0x1d2f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2f88_0x1d2f88");
#endif

    switch (ctx->pc) {
        case 0x1d2f98u: goto label_1d2f98;
        default: break;
    }

    ctx->pc = 0x1d2f88u;

    // 0x1d2f88: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2F88u;
    {
        const bool branch_taken_0x1d2f88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F88u;
        // 0x1d2f8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f88) {
            ctx->pc = 0x1D2F9Cu;
            return;
        }
    }
    ctx->pc = 0x1D2F90u;
    // 0x1d2f90: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D2F90u;
    SET_GPR_U32(ctx, 31, 0x1D2F98u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D2F90u, 0x1D2F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2F98u;
label_1d2f98:
    // 0x1d2f98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d2f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d2f9cu;
}
