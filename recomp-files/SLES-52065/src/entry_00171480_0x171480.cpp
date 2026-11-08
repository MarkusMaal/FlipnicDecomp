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

// Function: entry_00171480
// Address: 0x171480 - 0x171498
void entry_00171480_0x171480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171480_0x171480");
#endif

    switch (ctx->pc) {
        case 0x171490u: goto label_171490;
        default: break;
    }

    ctx->pc = 0x171480u;

    // 0x171480: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x171480u;
    {
        const bool branch_taken_0x171480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x171480) {
            ctx->pc = 0x171498u;
            return;
        }
    }
    ctx->pc = 0x171488u;
    // 0x171488: 0xc059990  jal         func_166640
    ctx->pc = 0x171488u;
    SET_GPR_U32(ctx, 31, 0x171490u);
    ctx->pc = 0x166640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166640u, 0x171488u, 0x171490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171490u;
label_171490:
    // 0x171490: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x171490u;
    {
        const bool branch_taken_0x171490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171490u;
        // 0x171494: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171490) {
            ctx->pc = 0x1714A8u;
            return;
        }
    }
    ctx->pc = 0x171498u;
}
