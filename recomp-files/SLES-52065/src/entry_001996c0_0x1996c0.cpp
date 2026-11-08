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

// Function: entry_001996c0
// Address: 0x1996c0 - 0x1996d0
void entry_001996c0_0x1996c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001996c0_0x1996c0");
#endif

    switch (ctx->pc) {
        case 0x1996c8u: goto label_1996c8;
        default: break;
    }

    ctx->pc = 0x1996c0u;

    // 0x1996c0: 0xc063de0  jal         func_18F780
    ctx->pc = 0x1996C0u;
    SET_GPR_U32(ctx, 31, 0x1996C8u);
    ctx->pc = 0x1996C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1996C0u;
    // 0x1996c4: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x1996C0u, 0x1996C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1996C8u;
label_1996c8:
    // 0x1996c8: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x1996C8u;
    {
        const bool branch_taken_0x1996c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1996c8) {
            ctx->pc = 0x19993Cu;
            return;
        }
    }
    ctx->pc = 0x1996D0u;
}
