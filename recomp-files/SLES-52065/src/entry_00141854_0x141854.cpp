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

// Function: entry_00141854
// Address: 0x141854 - 0x141874
void entry_00141854_0x141854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141854_0x141854");
#endif

    ctx->pc = 0x141854u;

    // 0x141854: 0x0  nop
    ctx->pc = 0x141854u;
    // NOP
    // 0x141858: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x141858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x14185c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14185Cu;
    {
        const bool branch_taken_0x14185c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14185c) {
            ctx->pc = 0x141874u;
            return;
        }
    }
    ctx->pc = 0x141864u;
    // 0x141864: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x141864u;
    {
        const bool branch_taken_0x141864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x141868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141864u;
        // 0x141868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141864) {
            ctx->pc = 0x141874u;
            return;
        }
    }
    ctx->pc = 0x14186Cu;
    // 0x14186c: 0xc050ec4  jal         func_143B10
    ctx->pc = 0x14186Cu;
    SET_GPR_U32(ctx, 31, 0x141874u);
    ctx->pc = 0x143B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B10u, 0x14186Cu, 0x141874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141874u;
}
