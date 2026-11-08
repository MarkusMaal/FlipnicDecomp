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

// Function: caseD_1
// Address: 0x190e10 - 0x190e20
void caseD_1_0x190e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x190e10");
#endif

    ctx->pc = 0x190e10u;

    // 0x190e10: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x190E10u;
    {
        const bool branch_taken_0x190e10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x190e10) {
            ctx->pc = 0x190E20u;
            return;
        }
    }
    ctx->pc = 0x190E18u;
    // 0x190e18: 0x10000220  b           . + 4 + (0x220 << 2)
    ctx->pc = 0x190E18u;
    {
        const bool branch_taken_0x190e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E18u;
        // 0x190e1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e18) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x190E20u;
}
