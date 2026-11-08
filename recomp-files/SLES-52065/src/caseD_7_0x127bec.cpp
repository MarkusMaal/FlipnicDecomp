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
// Address: 0x127bec - 0x127bf8
void caseD_7_0x127bec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x127bec");
#endif

    ctx->pc = 0x127becu;

    // 0x127bec: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x127becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x127bf0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x127BF0u;
    {
        const bool branch_taken_0x127bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BF0u;
        // 0x127bf4: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127bf0) {
            ctx->pc = 0x127C14u;
            return;
        }
    }
    ctx->pc = 0x127BF8u;
}
