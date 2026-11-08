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

// Function: entry_001d3f98
// Address: 0x1d3f98 - 0x1d3fa4
void entry_001d3f98_0x1d3f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3f98_0x1d3f98");
#endif

    ctx->pc = 0x1d3f98u;

    // 0x1d3f98: 0x2e020030  sltiu       $v0, $s0, 0x30
    ctx->pc = 0x1d3f98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1d3f9c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1D3F9Cu;
    {
        const bool branch_taken_0x1d3f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F9Cu;
        // 0x1d3fa0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f9c) {
            ctx->pc = 0x1D3F68u;
            return;
        }
    }
    ctx->pc = 0x1D3FA4u;
}
