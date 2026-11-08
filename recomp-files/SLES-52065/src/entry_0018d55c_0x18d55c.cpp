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

// Function: entry_0018d55c
// Address: 0x18d55c - 0x18d574
void entry_0018d55c_0x18d55c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d55c_0x18d55c");
#endif

    switch (ctx->pc) {
        case 0x18d56cu: goto label_18d56c;
        default: break;
    }

    ctx->pc = 0x18d55cu;

    // 0x18d55c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18d55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d564: 0xc06333c  jal         func_18CCF0
    ctx->pc = 0x18D564u;
    SET_GPR_U32(ctx, 31, 0x18D56Cu);
    ctx->pc = 0x18D568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D564u;
    // 0x18d568: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCF0u, 0x18D564u, 0x18D56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D56Cu;
label_18d56c:
    // 0x18d56c: 0x10000378  b           . + 4 + (0x378 << 2)
    ctx->pc = 0x18D56Cu;
    {
        const bool branch_taken_0x18d56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d56c) {
            ctx->pc = 0x18E350u;
            return;
        }
    }
    ctx->pc = 0x18D574u;
}
