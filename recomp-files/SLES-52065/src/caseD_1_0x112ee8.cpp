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
// Address: 0x112ee8 - 0x112ef4
void caseD_1_0x112ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x112ee8");
#endif

    ctx->pc = 0x112ee8u;

    // 0x112ee8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x112ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112eec: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x112EECu;
    {
        const bool branch_taken_0x112eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112EECu;
        // 0x112ef0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112eec) {
            ctx->pc = 0x112F24u;
            return;
        }
    }
    ctx->pc = 0x112EF4u;
}
