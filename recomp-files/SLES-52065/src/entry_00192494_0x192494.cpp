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

// Function: entry_00192494
// Address: 0x192494 - 0x1924a4
void entry_00192494_0x192494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192494_0x192494");
#endif

    ctx->pc = 0x192494u;

    // 0x192494: 0x0  nop
    ctx->pc = 0x192494u;
    // NOP
    // 0x192498: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x192498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x19249c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x19249Cu;
    {
        const bool branch_taken_0x19249c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1924A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19249Cu;
        // 0x1924a0: 0xa61821  addu        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19249c) {
            ctx->pc = 0x192478u;
            return;
        }
    }
    ctx->pc = 0x1924A4u;
}
