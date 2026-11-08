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
// Address: 0x127b90 - 0x127b9c
void caseD_0_0x127b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x127b90");
#endif

    ctx->pc = 0x127b90u;

    // 0x127b90: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x127b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x127b94: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x127B94u;
    {
        const bool branch_taken_0x127b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B94u;
        // 0x127b98: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b94) {
            ctx->pc = 0x127C14u;
            return;
        }
    }
    ctx->pc = 0x127B9Cu;
}
