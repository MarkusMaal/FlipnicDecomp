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

// Function: entry_00202848
// Address: 0x202848 - 0x202860
void entry_00202848_0x202848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202848_0x202848");
#endif

    ctx->pc = 0x202848u;

    // 0x202848: 0x1200008e  beqz        $s0, . + 4 + (0x8E << 2)
    ctx->pc = 0x202848u;
    {
        const bool branch_taken_0x202848 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202848u;
        // 0x20284c: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202848) {
            ctx->pc = 0x202A84u;
            return;
        }
    }
    ctx->pc = 0x202850u;
    // 0x202850: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x202850u;
    {
        const bool branch_taken_0x202850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202850u;
        // 0x202854: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202850) {
            ctx->pc = 0x20289Cu;
            return;
        }
    }
    ctx->pc = 0x202858u;
    // 0x202858: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x202858u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x20285c: 0x0  nop
    ctx->pc = 0x20285cu;
    // NOP
    ctx->pc = 0x202860u;
}
