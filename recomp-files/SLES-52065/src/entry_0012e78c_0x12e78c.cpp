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

// Function: entry_0012e78c
// Address: 0x12e78c - 0x12e79c
void entry_0012e78c_0x12e78c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e78c_0x12e78c");
#endif

    ctx->pc = 0x12e78cu;

    // 0x12e78c: 0x0  nop
    ctx->pc = 0x12e78cu;
    // NOP
    // 0x12e790: 0x290082b  sltu        $at, $s4, $s0
    ctx->pc = 0x12e790u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12e794: 0x10200052  beqz        $at, . + 4 + (0x52 << 2)
    ctx->pc = 0x12E794u;
    {
        const bool branch_taken_0x12e794 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E794u;
        // 0x12e798: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e794) {
            ctx->pc = 0x12E8E0u;
            return;
        }
    }
    ctx->pc = 0x12E79Cu;
}
