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

// Function: entry_001c0248
// Address: 0x1c0248 - 0x1c0258
void entry_001c0248_0x1c0248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0248_0x1c0248");
#endif

    switch (ctx->pc) {
        case 0x1c0250u: goto label_1c0250;
        default: break;
    }

    ctx->pc = 0x1c0248u;

    // 0x1c0248: 0xc07307c  jal         func_1CC1F0
    ctx->pc = 0x1C0248u;
    SET_GPR_U32(ctx, 31, 0x1C0250u);
    ctx->pc = 0x1CC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC1F0u, 0x1C0248u, 0x1C0250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0250u;
label_1c0250:
    // 0x1c0250: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0250u;
    {
        const bool branch_taken_0x1c0250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0250u;
        // 0x1c0254: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0250) {
            ctx->pc = 0x1C025Cu;
            return;
        }
    }
    ctx->pc = 0x1C0258u;
}
