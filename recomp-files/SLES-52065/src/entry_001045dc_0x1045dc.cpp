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

// Function: entry_001045dc
// Address: 0x1045dc - 0x1045e8
void entry_001045dc_0x1045dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001045dc_0x1045dc");
#endif

    ctx->pc = 0x1045dcu;

    // 0x1045dc: 0x1000030e  b           . + 4 + (0x30E << 2)
    ctx->pc = 0x1045DCu;
    {
        const bool branch_taken_0x1045dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1045E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045DCu;
        // 0x1045e0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1045dc) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x1045E4u;
    // 0x1045e4: 0x24040250  addiu       $a0, $zero, 0x250
    ctx->pc = 0x1045e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    ctx->pc = 0x1045e8u;
}
