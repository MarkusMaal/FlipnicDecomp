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

// Function: caseD_63
// Address: 0x2054cc - 0x2054d8
void caseD_63_0x2054cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_63_0x2054cc");
#endif

    ctx->pc = 0x2054ccu;

    // 0x2054cc: 0x36730020  ori         $s3, $s3, 0x20
    ctx->pc = 0x2054ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
    // 0x2054d0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2054D0u;
    {
        const bool branch_taken_0x2054d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2054D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054D0u;
        // 0x2054d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054d0) {
            ctx->pc = 0x205584u;
            return;
        }
    }
    ctx->pc = 0x2054D8u;
}
