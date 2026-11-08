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

// Function: caseD_30
// Address: 0x205b9c - 0x205ba8
void caseD_30_0x205b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_30_0x205b9c");
#endif

    ctx->pc = 0x205b9cu;

    // 0x205b9c: 0x2402ff3f  addiu       $v0, $zero, -0xC1
    ctx->pc = 0x205b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x205ba0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x205BA0u;
    {
        const bool branch_taken_0x205ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BA0u;
        // 0x205ba4: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ba0) {
            ctx->pc = 0x205BE8u;
            return;
        }
    }
    ctx->pc = 0x205BA8u;
}
