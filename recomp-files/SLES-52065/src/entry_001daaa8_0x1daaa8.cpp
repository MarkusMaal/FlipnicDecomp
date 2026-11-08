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

// Function: entry_001daaa8
// Address: 0x1daaa8 - 0x1daac0
void entry_001daaa8_0x1daaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001daaa8_0x1daaa8");
#endif

    ctx->pc = 0x1daaa8u;

    // 0x1daaa8: 0x148200b7  bne         $a0, $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x1DAAA8u;
    {
        const bool branch_taken_0x1daaa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1daaa8) {
            ctx->pc = 0x1DAD88u;
            return;
        }
    }
    ctx->pc = 0x1DAAB0u;
    // 0x1daab0: 0x2410002f  addiu       $s0, $zero, 0x2F
    ctx->pc = 0x1daab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1daab4: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x1DAAB4u;
    {
        const bool branch_taken_0x1daab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAAB4u;
        // 0x1daab8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daab4) {
            ctx->pc = 0x1DAD88u;
            return;
        }
    }
    ctx->pc = 0x1DAABCu;
    // 0x1daabc: 0x0  nop
    ctx->pc = 0x1daabcu;
    // NOP
    ctx->pc = 0x1daac0u;
}
