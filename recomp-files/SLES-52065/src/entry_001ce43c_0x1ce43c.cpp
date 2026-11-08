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

// Function: entry_001ce43c
// Address: 0x1ce43c - 0x1ce454
void entry_001ce43c_0x1ce43c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce43c_0x1ce43c");
#endif

    ctx->pc = 0x1ce43cu;

    // 0x1ce43c: 0x8ea30064  lw          $v1, 0x64($s5)
    ctx->pc = 0x1ce43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x1ce440: 0x8ea20068  lw          $v0, 0x68($s5)
    ctx->pc = 0x1ce440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x1ce444: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE444u;
    {
        const bool branch_taken_0x1ce444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE444u;
        // 0x1ce448: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce444) {
            ctx->pc = 0x1CE454u;
            return;
        }
    }
    ctx->pc = 0x1CE44Cu;
    // 0x1ce44c: 0xc07395c  jal         func_1CE570
    ctx->pc = 0x1CE44Cu;
    SET_GPR_U32(ctx, 31, 0x1CE454u);
    ctx->pc = 0x1CE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE570u, 0x1CE44Cu, 0x1CE454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE454u;
}
