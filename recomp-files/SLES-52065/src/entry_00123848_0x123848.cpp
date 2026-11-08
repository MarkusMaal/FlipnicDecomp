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

// Function: entry_00123848
// Address: 0x123848 - 0x123860
void entry_00123848_0x123848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123848_0x123848");
#endif

    ctx->pc = 0x123848u;

    // 0x123848: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x123848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12384c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12384Cu;
    {
        const bool branch_taken_0x12384c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x12384c) {
            ctx->pc = 0x123860u;
            return;
        }
    }
    ctx->pc = 0x123854u;
    // 0x123854: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x123854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123858: 0xc048e74  jal         func_1239D0
    ctx->pc = 0x123858u;
    SET_GPR_U32(ctx, 31, 0x123860u);
    ctx->pc = 0x12385Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123858u;
    // 0x12385c: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1239D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1239D0u, 0x123858u, 0x123860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123860u;
}
