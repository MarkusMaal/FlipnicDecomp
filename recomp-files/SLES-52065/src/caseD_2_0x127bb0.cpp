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
// Address: 0x127bb0 - 0x127bbc
void caseD_2_0x127bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x127bb0");
#endif

    ctx->pc = 0x127bb0u;

    // 0x127bb0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x127bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x127bb4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x127BB4u;
    {
        const bool branch_taken_0x127bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BB4u;
        // 0x127bb8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127bb4) {
            ctx->pc = 0x127C14u;
            return;
        }
    }
    ctx->pc = 0x127BBCu;
}
