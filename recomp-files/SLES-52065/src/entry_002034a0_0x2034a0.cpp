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

// Function: entry_002034a0
// Address: 0x2034a0 - 0x2034b0
void entry_002034a0_0x2034a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002034a0_0x2034a0");
#endif

    ctx->pc = 0x2034a0u;

    // 0x2034a0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2034A0u;
    {
        const bool branch_taken_0x2034a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2034A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034A0u;
        // 0x2034a4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034a0) {
            ctx->pc = 0x2034B0u;
            return;
        }
    }
    ctx->pc = 0x2034A8u;
    // 0x2034a8: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2034A8u;
    {
        const bool branch_taken_0x2034a8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2034a8) {
            ctx->pc = 0x2034DCu;
            return;
        }
    }
    ctx->pc = 0x2034B0u;
}
