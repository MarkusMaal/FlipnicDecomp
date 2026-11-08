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

// Function: caseD_5
// Address: 0x127bc8 - 0x127bd4
void caseD_5_0x127bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x127bc8");
#endif

    ctx->pc = 0x127bc8u;

    // 0x127bc8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x127bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x127bcc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x127BCCu;
    {
        const bool branch_taken_0x127bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BCCu;
        // 0x127bd0: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127bcc) {
            ctx->pc = 0x127C14u;
            return;
        }
    }
    ctx->pc = 0x127BD4u;
}
