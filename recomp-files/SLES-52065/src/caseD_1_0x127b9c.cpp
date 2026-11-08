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

// Function: caseD_1
// Address: 0x127b9c - 0x127bb0
void caseD_1_0x127b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x127b9c");
#endif

    ctx->pc = 0x127b9cu;

    // 0x127b9c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x127b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x127ba0: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x127BA0u;
    {
        const bool branch_taken_0x127ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x127ba0) {
            ctx->pc = 0x127C14u;
            return;
        }
    }
    ctx->pc = 0x127BA8u;
    // 0x127ba8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x127BA8u;
    {
        const bool branch_taken_0x127ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BA8u;
        // 0x127bac: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ba8) {
            ctx->pc = 0x127C14u;
            return;
        }
    }
    ctx->pc = 0x127BB0u;
}
