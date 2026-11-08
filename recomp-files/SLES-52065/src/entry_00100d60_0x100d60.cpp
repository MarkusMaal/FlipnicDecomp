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

// Function: entry_00100d60
// Address: 0x100d60 - 0x100d80
void entry_00100d60_0x100d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100d60_0x100d60");
#endif

    switch (ctx->pc) {
        case 0x100d68u: goto label_100d68;
        default: break;
    }

    ctx->pc = 0x100d60u;

    // 0x100d60: 0xc054790  jal         func_151E40
    ctx->pc = 0x100D60u;
    SET_GPR_U32(ctx, 31, 0x100D68u);
    ctx->pc = 0x100D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100D60u;
    // 0x100d64: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151E40u, 0x100D60u, 0x100D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D68u;
label_100d68:
    // 0x100d68: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x100d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100d6c: 0x8c832c04  lw          $v1, 0x2C04($a0)
    ctx->pc = 0x100d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11268)));
    // 0x100d70: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x100D70u;
    {
        const bool branch_taken_0x100d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x100d70) {
            ctx->pc = 0x100D80u;
            return;
        }
    }
    ctx->pc = 0x100D78u;
    // 0x100d78: 0xc0574d8  jal         func_15D360
    ctx->pc = 0x100D78u;
    SET_GPR_U32(ctx, 31, 0x100D80u);
    ctx->pc = 0x15D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D360u, 0x100D78u, 0x100D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D80u;
}
