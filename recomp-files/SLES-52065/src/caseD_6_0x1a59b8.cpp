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

// Function: caseD_6
// Address: 0x1a59b8 - 0x1a59c0
void caseD_6_0x1a59b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1a59b8");
#endif

    ctx->pc = 0x1a59b8u;

    // 0x1a59b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A59B8u;
    {
        const bool branch_taken_0x1a59b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A59BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59B8u;
        // 0x1a59bc: 0x24130005  addiu       $s3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a59b8) {
            ctx->pc = 0x1A59C4u;
            return;
        }
    }
    ctx->pc = 0x1A59C0u;
}
