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

// Function: entry_001f206c
// Address: 0x1f206c - 0x1f207c
void entry_001f206c_0x1f206c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f206c_0x1f206c");
#endif

    switch (ctx->pc) {
        case 0x1f2074u: goto label_1f2074;
        default: break;
    }

    ctx->pc = 0x1f206cu;

    // 0x1f206c: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F206Cu;
    SET_GPR_U32(ctx, 31, 0x1F2074u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F206Cu, 0x1F2074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2074u;
label_1f2074:
    // 0x1f2074: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1F2074u;
    {
        const bool branch_taken_0x1f2074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2074u;
        // 0x1f2078: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2074) {
            ctx->pc = 0x1F21A0u;
            return;
        }
    }
    ctx->pc = 0x1F207Cu;
}
