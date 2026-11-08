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

// Function: entry_001d9378
// Address: 0x1d9378 - 0x1d9388
void entry_001d9378_0x1d9378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9378_0x1d9378");
#endif

    ctx->pc = 0x1d9378u;

    // 0x1d9378: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9378u;
    {
        const bool branch_taken_0x1d9378 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9378u;
        // 0x1d937c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9378) {
            ctx->pc = 0x1D938Cu;
            return;
        }
    }
    ctx->pc = 0x1D9380u;
    // 0x1d9380: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D9380u;
    SET_GPR_U32(ctx, 31, 0x1D9388u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D9380u, 0x1D9388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9388u;
}
