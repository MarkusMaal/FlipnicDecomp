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

// Function: entry_001d3b6c
// Address: 0x1d3b6c - 0x1d3b84
void entry_001d3b6c_0x1d3b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3b6c_0x1d3b6c");
#endif

    ctx->pc = 0x1d3b6cu;

    // 0x1d3b6c: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x1d3b6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d3b70: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D3B70u;
    {
        const bool branch_taken_0x1d3b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B70u;
        // 0x1d3b74: 0x1380c0  sll         $s0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b70) {
            ctx->pc = 0x1D3B30u;
            return;
        }
    }
    ctx->pc = 0x1D3B78u;
    // 0x1d3b78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d3b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3b7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d3b7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b80: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1d3b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1d3b84u;
}
