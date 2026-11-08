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

// Function: caseD_2
// Address: 0x190ec8 - 0x190ed8
void caseD_2_0x190ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x190ec8");
#endif

    ctx->pc = 0x190ec8u;

    // 0x190ec8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x190EC8u;
    {
        const bool branch_taken_0x190ec8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x190ec8) {
            ctx->pc = 0x190ED8u;
            return;
        }
    }
    ctx->pc = 0x190ED0u;
    // 0x190ed0: 0x100001f2  b           . + 4 + (0x1F2 << 2)
    ctx->pc = 0x190ED0u;
    {
        const bool branch_taken_0x190ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190ED0u;
        // 0x190ed4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ed0) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x190ED8u;
}
