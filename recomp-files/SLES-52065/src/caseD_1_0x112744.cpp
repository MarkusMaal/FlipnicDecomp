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
// Address: 0x112744 - 0x112750
void caseD_1_0x112744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x112744");
#endif

    ctx->pc = 0x112744u;

    // 0x112744: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x112744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112748: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x112748u;
    {
        const bool branch_taken_0x112748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112748u;
        // 0x11274c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112748) {
            ctx->pc = 0x112778u;
            return;
        }
    }
    ctx->pc = 0x112750u;
}
