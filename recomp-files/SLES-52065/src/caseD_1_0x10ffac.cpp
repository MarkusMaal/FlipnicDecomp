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
// Address: 0x10ffac - 0x10ffb8
void caseD_1_0x10ffac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x10ffac");
#endif

    ctx->pc = 0x10ffacu;

    // 0x10ffac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10ffacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ffb0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10FFB0u;
    {
        const bool branch_taken_0x10ffb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFB0u;
        // 0x10ffb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ffb0) {
            ctx->pc = 0x10FFE0u;
            return;
        }
    }
    ctx->pc = 0x10FFB8u;
}
