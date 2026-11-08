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

// Function: caseD_0
// Address: 0x110cc4 - 0x110cd0
void caseD_0_0x110cc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x110cc4");
#endif

    ctx->pc = 0x110cc4u;

    // 0x110cc4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x110cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110cc8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x110CC8u;
    {
        const bool branch_taken_0x110cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CC8u;
        // 0x110ccc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110cc8) {
            ctx->pc = 0x110D28u;
            return;
        }
    }
    ctx->pc = 0x110CD0u;
}
