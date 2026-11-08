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

// Function: entry_0019c294
// Address: 0x19c294 - 0x19c2b8
void entry_0019c294_0x19c294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c294_0x19c294");
#endif

    switch (ctx->pc) {
        case 0x19c29cu: goto label_19c29c;
        case 0x19c2b0u: goto label_19c2b0;
        default: break;
    }

    ctx->pc = 0x19c294u;

    // 0x19c294: 0xc06977c  jal         func_1A5DF0
    ctx->pc = 0x19C294u;
    SET_GPR_U32(ctx, 31, 0x19C29Cu);
    ctx->pc = 0x1A5DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5DF0u, 0x19C294u, 0x19C29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C29Cu;
label_19c29c:
    // 0x19c29c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x19C29Cu;
    {
        const bool branch_taken_0x19c29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c29c) {
            ctx->pc = 0x19C328u;
            return;
        }
    }
    ctx->pc = 0x19C2A4u;
    // 0x19c2a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c2a8: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19C2A8u;
    SET_GPR_U32(ctx, 31, 0x19C2B0u);
    ctx->pc = 0x19C2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C2A8u;
    // 0x19c2ac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19C2A8u, 0x19C2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C2B0u;
label_19c2b0:
    // 0x19c2b0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19C2B0u;
    {
        const bool branch_taken_0x19c2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c2b0) {
            ctx->pc = 0x19C328u;
            return;
        }
    }
    ctx->pc = 0x19C2B8u;
}
