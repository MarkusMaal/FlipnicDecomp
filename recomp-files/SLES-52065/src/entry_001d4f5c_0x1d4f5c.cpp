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

// Function: entry_001d4f5c
// Address: 0x1d4f5c - 0x1d4f6c
void entry_001d4f5c_0x1d4f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4f5c_0x1d4f5c");
#endif

    switch (ctx->pc) {
        case 0x1d4f64u: goto label_1d4f64;
        default: break;
    }

    ctx->pc = 0x1d4f5cu;

    // 0x1d4f5c: 0xc077818  jal         func_1DE060
    ctx->pc = 0x1D4F5Cu;
    SET_GPR_U32(ctx, 31, 0x1D4F64u);
    ctx->pc = 0x1D4F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4F5Cu;
    // 0x1d4f60: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE060u, 0x1D4F5Cu, 0x1D4F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F64u;
label_1d4f64:
    // 0x1d4f64: 0x603fff6  bgezl       $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D4F64u;
    {
        const bool branch_taken_0x1d4f64 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d4f64) {
            ctx->pc = 0x1D4F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4F64u;
            // 0x1d4f68: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4F40u;
            return;
        }
    }
    ctx->pc = 0x1D4F6Cu;
}
