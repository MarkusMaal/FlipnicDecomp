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

// Function: entry_0019f6bc
// Address: 0x19f6bc - 0x19f6d0
void entry_0019f6bc_0x19f6bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f6bc_0x19f6bc");
#endif

    switch (ctx->pc) {
        case 0x19f6c4u: goto label_19f6c4;
        default: break;
    }

    ctx->pc = 0x19f6bcu;

    // 0x19f6bc: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19F6BCu;
    SET_GPR_U32(ctx, 31, 0x19F6C4u);
    ctx->pc = 0x19F6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F6BCu;
    // 0x19f6c0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F6BCu, 0x19F6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F6C4u;
label_19f6c4:
    // 0x19f6c4: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x19F6C4u;
    {
        const bool branch_taken_0x19f6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f6c4) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F6CCu;
    // 0x19f6cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f6d0u;
}
