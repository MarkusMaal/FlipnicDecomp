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
// Address: 0x1943d4 - 0x1943e0
void caseD_0_0x1943d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1943d4");
#endif

    ctx->pc = 0x1943d4u;

    // 0x1943d4: 0x0  nop
    ctx->pc = 0x1943d4u;
    // NOP
    // 0x1943d8: 0x10000666  b           . + 4 + (0x666 << 2)
    ctx->pc = 0x1943D8u;
    {
        const bool branch_taken_0x1943d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1943DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943D8u;
        // 0x1943dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1943d8) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x1943E0u;
}
