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

// Function: entry_0019f6d0
// Address: 0x19f6d0 - 0x19f6e0
void entry_0019f6d0_0x19f6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f6d0_0x19f6d0");
#endif

    switch (ctx->pc) {
        case 0x19f6d8u: goto label_19f6d8;
        default: break;
    }

    ctx->pc = 0x19f6d0u;

    // 0x19f6d0: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19F6D0u;
    SET_GPR_U32(ctx, 31, 0x19F6D8u);
    ctx->pc = 0x19F6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F6D0u;
    // 0x19f6d4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F6D0u, 0x19F6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F6D8u;
label_19f6d8:
    // 0x19f6d8: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x19F6D8u;
    {
        const bool branch_taken_0x19f6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f6d8) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F6E0u;
}
