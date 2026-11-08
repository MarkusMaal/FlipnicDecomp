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

// Function: caseD_68
// Address: 0x2053f0 - 0x2053f8
void caseD_68_0x2053f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_68_0x2053f0");
#endif

    ctx->pc = 0x2053f0u;

    // 0x2053f0: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x2053F0u;
    {
        const bool branch_taken_0x2053f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2053F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053F0u;
        // 0x2053f4: 0x36730004  ori         $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2053f0) {
            ctx->pc = 0x205348u;
            return;
        }
    }
    ctx->pc = 0x2053F8u;
}
