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

// Function: entry_001995d8
// Address: 0x1995d8 - 0x1995e8
void entry_001995d8_0x1995d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001995d8_0x1995d8");
#endif

    switch (ctx->pc) {
        case 0x1995e0u: goto label_1995e0;
        default: break;
    }

    ctx->pc = 0x1995d8u;

    // 0x1995d8: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1995D8u;
    SET_GPR_U32(ctx, 31, 0x1995E0u);
    ctx->pc = 0x1995DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1995D8u;
    // 0x1995dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1995D8u, 0x1995E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1995E0u;
label_1995e0:
    // 0x1995e0: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x1995E0u;
    {
        const bool branch_taken_0x1995e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1995e0) {
            ctx->pc = 0x19993Cu;
            return;
        }
    }
    ctx->pc = 0x1995E8u;
}
