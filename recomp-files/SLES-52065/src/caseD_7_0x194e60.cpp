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
// Address: 0x194e60 - 0x194e68
void caseD_7_0x194e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x194e60");
#endif

    ctx->pc = 0x194e60u;

    // 0x194e60: 0x100003c4  b           . + 4 + (0x3C4 << 2)
    ctx->pc = 0x194E60u;
    {
        const bool branch_taken_0x194e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E60u;
        // 0x194e64: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e60) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x194E68u;
}
