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

// Function: entry_001c5f7c
// Address: 0x1c5f7c - 0x1c5f90
void entry_001c5f7c_0x1c5f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5f7c_0x1c5f7c");
#endif

    switch (ctx->pc) {
        case 0x1c5f84u: goto label_1c5f84;
        default: break;
    }

    ctx->pc = 0x1c5f7cu;

    // 0x1c5f7c: 0xc06d328  jal         func_1B4CA0
    ctx->pc = 0x1C5F7Cu;
    SET_GPR_U32(ctx, 31, 0x1C5F84u);
    ctx->pc = 0x1B4CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4CA0u, 0x1C5F7Cu, 0x1C5F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5F84u;
label_1c5f84:
    // 0x1c5f84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5f88: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1C5F88u;
    {
        const bool branch_taken_0x1c5f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F88u;
        // 0x1c5f8c: 0xae420050  sw          $v0, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f88) {
            ctx->pc = 0x1C5FE8u;
            return;
        }
    }
    ctx->pc = 0x1C5F90u;
}
