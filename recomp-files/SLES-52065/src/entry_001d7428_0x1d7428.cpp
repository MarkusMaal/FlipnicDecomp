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

// Function: entry_001d7428
// Address: 0x1d7428 - 0x1d7440
void entry_001d7428_0x1d7428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7428_0x1d7428");
#endif

    ctx->pc = 0x1d7428u;

    // 0x1d7428: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7428u;
    {
        const bool branch_taken_0x1d7428 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7428u;
        // 0x1d742c: 0x3ae40001  xori        $a0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7428) {
            ctx->pc = 0x1D7440u;
            return;
        }
    }
    ctx->pc = 0x1D7430u;
    // 0x1d7430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7434: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7434u;
    {
        const bool branch_taken_0x1d7434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7434u;
        // 0x1d7438: 0x2822804  sllv        $a1, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7434) {
            ctx->pc = 0x1D744Cu;
            return;
        }
    }
    ctx->pc = 0x1D743Cu;
    // 0x1d743c: 0x0  nop
    ctx->pc = 0x1d743cu;
    // NOP
    ctx->pc = 0x1d7440u;
}
