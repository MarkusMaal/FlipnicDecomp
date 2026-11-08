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

// Function: entry_0013b71c
// Address: 0x13b71c - 0x13b738
void entry_0013b71c_0x13b71c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b71c_0x13b71c");
#endif

    switch (ctx->pc) {
        case 0x13b724u: goto label_13b724;
        default: break;
    }

    ctx->pc = 0x13b71cu;

    // 0x13b71c: 0xc04ee00  jal         func_13B800
    ctx->pc = 0x13B71Cu;
    SET_GPR_U32(ctx, 31, 0x13B724u);
    ctx->pc = 0x13B720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B71Cu;
    // 0x13b720: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B800u, 0x13B71Cu, 0x13B724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B724u;
label_13b724:
    // 0x13b724: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x13b724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x13b728: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B728u;
    {
        const bool branch_taken_0x13b728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b728) {
            ctx->pc = 0x13B738u;
            return;
        }
    }
    ctx->pc = 0x13B730u;
    // 0x13b730: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13B730u;
    SET_GPR_U32(ctx, 31, 0x13B738u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13B730u, 0x13B738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B738u;
}
