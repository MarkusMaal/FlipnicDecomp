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

// Function: entry_00171034
// Address: 0x171034 - 0x171044
void entry_00171034_0x171034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171034_0x171034");
#endif

    ctx->pc = 0x171034u;

    // 0x171034: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x171034u;
    {
        const bool branch_taken_0x171034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x171034) {
            ctx->pc = 0x171044u;
            return;
        }
    }
    ctx->pc = 0x17103Cu;
    // 0x17103c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x17103Cu;
    {
        const bool branch_taken_0x17103c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17103Cu;
        // 0x171040: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17103c) {
            ctx->pc = 0x1710C0u;
            return;
        }
    }
    ctx->pc = 0x171044u;
}
