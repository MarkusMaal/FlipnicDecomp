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

// Function: caseD_4
// Address: 0x190fa0 - 0x190fb0
void caseD_4_0x190fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x190fa0");
#endif

    ctx->pc = 0x190fa0u;

    // 0x190fa0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x190FA0u;
    {
        const bool branch_taken_0x190fa0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x190fa0) {
            ctx->pc = 0x190FB0u;
            return;
        }
    }
    ctx->pc = 0x190FA8u;
    // 0x190fa8: 0x100001bc  b           . + 4 + (0x1BC << 2)
    ctx->pc = 0x190FA8u;
    {
        const bool branch_taken_0x190fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FA8u;
        // 0x190fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190fa8) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x190FB0u;
}
