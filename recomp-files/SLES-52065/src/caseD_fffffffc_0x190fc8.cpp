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

// Function: caseD_fffffffc
// Address: 0x190fc8 - 0x190fd8
void caseD_fffffffc_0x190fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_fffffffc_0x190fc8");
#endif

    ctx->pc = 0x190fc8u;

    // 0x190fc8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x190FC8u;
    {
        const bool branch_taken_0x190fc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x190fc8) {
            ctx->pc = 0x190FD8u;
            return;
        }
    }
    ctx->pc = 0x190FD0u;
    // 0x190fd0: 0x100001b2  b           . + 4 + (0x1B2 << 2)
    ctx->pc = 0x190FD0u;
    {
        const bool branch_taken_0x190fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FD0u;
        // 0x190fd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190fd0) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x190FD8u;
}
