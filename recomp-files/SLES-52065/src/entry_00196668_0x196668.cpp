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

// Function: entry_00196668
// Address: 0x196668 - 0x196680
void entry_00196668_0x196668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196668_0x196668");
#endif

    ctx->pc = 0x196668u;

    // 0x196668: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x196668u;
    {
        const bool branch_taken_0x196668 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196668u;
        // 0x19666c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196668) {
            ctx->pc = 0x196680u;
            return;
        }
    }
    ctx->pc = 0x196670u;
    // 0x196670: 0x8e630320  lw          $v1, 0x320($s3)
    ctx->pc = 0x196670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 800)));
    // 0x196674: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x196674u;
    {
        const bool branch_taken_0x196674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x196674) {
            ctx->pc = 0x196688u;
            return;
        }
    }
    ctx->pc = 0x19667Cu;
    // 0x19667c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19667cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x196680u;
}
