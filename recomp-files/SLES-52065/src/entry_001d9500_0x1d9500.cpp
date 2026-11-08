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

// Function: entry_001d9500
// Address: 0x1d9500 - 0x1d9510
void entry_001d9500_0x1d9500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9500_0x1d9500");
#endif

    ctx->pc = 0x1d9500u;

    // 0x1d9500: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9500u;
    {
        const bool branch_taken_0x1d9500 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9500u;
        // 0x1d9504: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9500) {
            ctx->pc = 0x1D9510u;
            return;
        }
    }
    ctx->pc = 0x1D9508u;
    // 0x1d9508: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D9508u;
    SET_GPR_U32(ctx, 31, 0x1D9510u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D9508u, 0x1D9510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9510u;
}
