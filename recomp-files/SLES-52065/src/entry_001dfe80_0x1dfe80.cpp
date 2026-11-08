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

// Function: entry_001dfe80
// Address: 0x1dfe80 - 0x1dfe94
void entry_001dfe80_0x1dfe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfe80_0x1dfe80");
#endif

    switch (ctx->pc) {
        case 0x1dfe90u: goto label_1dfe90;
        default: break;
    }

    ctx->pc = 0x1dfe80u;

    // 0x1dfe80: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DFE80u;
    {
        const bool branch_taken_0x1dfe80 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE80u;
        // 0x1dfe84: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe80) {
            ctx->pc = 0x1DFE94u;
            return;
        }
    }
    ctx->pc = 0x1DFE88u;
    // 0x1dfe88: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1DFE88u;
    SET_GPR_U32(ctx, 31, 0x1DFE90u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1DFE88u, 0x1DFE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFE90u;
label_1dfe90:
    // 0x1dfe90: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1dfe90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1dfe94u;
}
