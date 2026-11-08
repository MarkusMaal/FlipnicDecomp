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

// Function: caseD_7
// Address: 0x1108d8 - 0x1108e4
void caseD_7_0x1108d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1108d8");
#endif

    ctx->pc = 0x1108d8u;

    // 0x1108d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1108d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1108dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1108DCu;
    {
        const bool branch_taken_0x1108dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1108E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1108DCu;
        // 0x1108e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1108dc) {
            ctx->pc = 0x11090Cu;
            return;
        }
    }
    ctx->pc = 0x1108E4u;
}
