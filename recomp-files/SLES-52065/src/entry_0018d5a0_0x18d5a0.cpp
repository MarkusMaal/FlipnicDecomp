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

// Function: entry_0018d5a0
// Address: 0x18d5a0 - 0x18d5b8
void entry_0018d5a0_0x18d5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d5a0_0x18d5a0");
#endif

    switch (ctx->pc) {
        case 0x18d5b0u: goto label_18d5b0;
        default: break;
    }

    ctx->pc = 0x18d5a0u;

    // 0x18d5a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18d5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d5a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d5a8: 0xc06333c  jal         func_18CCF0
    ctx->pc = 0x18D5A8u;
    SET_GPR_U32(ctx, 31, 0x18D5B0u);
    ctx->pc = 0x18D5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5A8u;
    // 0x18d5ac: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCF0u, 0x18D5A8u, 0x18D5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5B0u;
label_18d5b0:
    // 0x18d5b0: 0x10000367  b           . + 4 + (0x367 << 2)
    ctx->pc = 0x18D5B0u;
    {
        const bool branch_taken_0x18d5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d5b0) {
            ctx->pc = 0x18E350u;
            return;
        }
    }
    ctx->pc = 0x18D5B8u;
}
