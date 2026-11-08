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

// Function: entry_001dec0c
// Address: 0x1dec0c - 0x1dec24
void entry_001dec0c_0x1dec0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dec0c_0x1dec0c");
#endif

    switch (ctx->pc) {
        case 0x1dec20u: goto label_1dec20;
        default: break;
    }

    ctx->pc = 0x1dec0cu;

    // 0x1dec0c: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x1dec0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dec10: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DEC10u;
    {
        const bool branch_taken_0x1dec10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC10u;
        // 0x1dec14: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec10) {
            ctx->pc = 0x1DEC24u;
            return;
        }
    }
    ctx->pc = 0x1DEC18u;
    // 0x1dec18: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1DEC18u;
    SET_GPR_U32(ctx, 31, 0x1DEC20u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1DEC18u, 0x1DEC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEC20u;
label_1dec20:
    // 0x1dec20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1dec20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1dec24u;
}
