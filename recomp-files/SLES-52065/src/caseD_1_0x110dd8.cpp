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
// Address: 0x110dd8 - 0x110de4
void caseD_1_0x110dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x110dd8");
#endif

    ctx->pc = 0x110dd8u;

    // 0x110dd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x110dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ddc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x110DDCu;
    {
        const bool branch_taken_0x110ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DDCu;
        // 0x110de0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ddc) {
            ctx->pc = 0x110E0Cu;
            return;
        }
    }
    ctx->pc = 0x110DE4u;
}
