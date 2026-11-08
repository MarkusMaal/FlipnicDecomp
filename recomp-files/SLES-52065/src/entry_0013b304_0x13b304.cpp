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

// Function: entry_0013b304
// Address: 0x13b304 - 0x13b314
void entry_0013b304_0x13b304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b304_0x13b304");
#endif

    ctx->pc = 0x13b304u;

    // 0x13b304: 0x0  nop
    ctx->pc = 0x13b304u;
    // NOP
    // 0x13b308: 0x284082b  sltu        $at, $s4, $a0
    ctx->pc = 0x13b308u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13b30c: 0x1020005e  beqz        $at, . + 4 + (0x5E << 2)
    ctx->pc = 0x13B30Cu;
    {
        const bool branch_taken_0x13b30c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B30Cu;
        // 0x13b310: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b30c) {
            ctx->pc = 0x13B488u;
            return;
        }
    }
    ctx->pc = 0x13B314u;
}
