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

// Function: entry_0010493c
// Address: 0x10493c - 0x104948
void entry_0010493c_0x10493c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010493c_0x10493c");
#endif

    ctx->pc = 0x10493cu;

    // 0x10493c: 0x10000236  b           . + 4 + (0x236 << 2)
    ctx->pc = 0x10493Cu;
    {
        const bool branch_taken_0x10493c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10493Cu;
        // 0x104940: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10493c) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x104944u;
    // 0x104944: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x104944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    ctx->pc = 0x104948u;
}
