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

// Function: entry_001a4784
// Address: 0x1a4784 - 0x1a4794
void entry_001a4784_0x1a4784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4784_0x1a4784");
#endif

    ctx->pc = 0x1a4784u;

    // 0x1a4784: 0x0  nop
    ctx->pc = 0x1a4784u;
    // NOP
    // 0x1a4788: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x1a4788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1a478c: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1A478Cu;
    {
        const bool branch_taken_0x1a478c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A478Cu;
        // 0x1a4790: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a478c) {
            ctx->pc = 0x1A46ECu;
            return;
        }
    }
    ctx->pc = 0x1A4794u;
}
