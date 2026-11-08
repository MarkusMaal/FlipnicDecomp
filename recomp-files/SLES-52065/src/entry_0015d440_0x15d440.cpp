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

// Function: entry_0015d440
// Address: 0x15d440 - 0x15d454
void entry_0015d440_0x15d440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d440_0x15d440");
#endif

    ctx->pc = 0x15d440u;

    // 0x15d440: 0x8ed13dd8  lw          $s1, 0x3DD8($s6)
    ctx->pc = 0x15d440u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 15832)));
    // 0x15d444: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x15d444u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15d448: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x15D448u;
    {
        const bool branch_taken_0x15d448 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D448u;
        // 0x15d44c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d448) {
            ctx->pc = 0x15D4E8u;
            return;
        }
    }
    ctx->pc = 0x15D450u;
    // 0x15d450: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15d450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15d454u;
}
