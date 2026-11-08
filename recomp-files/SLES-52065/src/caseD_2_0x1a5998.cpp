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

// Function: caseD_2
// Address: 0x1a5998 - 0x1a59a0
void caseD_2_0x1a5998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1a5998");
#endif

    ctx->pc = 0x1a5998u;

    // 0x1a5998: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A5998u;
    {
        const bool branch_taken_0x1a5998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5998u;
        // 0x1a599c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5998) {
            ctx->pc = 0x1A59C4u;
            return;
        }
    }
    ctx->pc = 0x1A59A0u;
}
