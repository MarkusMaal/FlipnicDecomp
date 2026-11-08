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

// Function: entry_0019823c
// Address: 0x19823c - 0x19824c
void entry_0019823c_0x19823c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019823c_0x19823c");
#endif

    ctx->pc = 0x19823cu;

    // 0x19823c: 0x0  nop
    ctx->pc = 0x19823cu;
    // NOP
    // 0x198240: 0xa7182a  slt         $v1, $a1, $a3
    ctx->pc = 0x198240u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x198244: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x198244u;
    {
        const bool branch_taken_0x198244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x198248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198244u;
        // 0x198248: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198244) {
            ctx->pc = 0x198204u;
            return;
        }
    }
    ctx->pc = 0x19824Cu;
}
