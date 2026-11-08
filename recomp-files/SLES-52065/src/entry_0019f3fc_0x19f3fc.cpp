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

// Function: entry_0019f3fc
// Address: 0x19f3fc - 0x19f40c
void entry_0019f3fc_0x19f3fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f3fc_0x19f3fc");
#endif

    switch (ctx->pc) {
        case 0x19f404u: goto label_19f404;
        default: break;
    }

    ctx->pc = 0x19f3fcu;

    // 0x19f3fc: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19F3FCu;
    SET_GPR_U32(ctx, 31, 0x19F404u);
    ctx->pc = 0x19F400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F3FCu;
    // 0x19f400: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F3FCu, 0x19F404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F404u;
label_19f404:
    // 0x19f404: 0x1000016f  b           . + 4 + (0x16F << 2)
    ctx->pc = 0x19F404u;
    {
        const bool branch_taken_0x19f404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f404) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F40Cu;
}
