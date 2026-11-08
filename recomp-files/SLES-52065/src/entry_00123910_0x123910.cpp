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

// Function: entry_00123910
// Address: 0x123910 - 0x123928
void entry_00123910_0x123910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123910_0x123910");
#endif

    ctx->pc = 0x123910u;

    // 0x123910: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x123910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x123914: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x123914u;
    {
        const bool branch_taken_0x123914 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x123914) {
            ctx->pc = 0x123928u;
            return;
        }
    }
    ctx->pc = 0x12391Cu;
    // 0x12391c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12391cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123920: 0xc048e98  jal         func_123A60
    ctx->pc = 0x123920u;
    SET_GPR_U32(ctx, 31, 0x123928u);
    ctx->pc = 0x123924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123920u;
    // 0x123924: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123A60u, 0x123920u, 0x123928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123928u;
}
