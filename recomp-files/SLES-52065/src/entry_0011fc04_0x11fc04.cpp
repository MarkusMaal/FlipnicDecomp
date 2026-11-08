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

// Function: entry_0011fc04
// Address: 0x11fc04 - 0x11fc10
void entry_0011fc04_0x11fc04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fc04_0x11fc04");
#endif

    ctx->pc = 0x11fc04u;

    // 0x11fc04: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x11fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x11fc08: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x11FC08u;
    {
        const bool branch_taken_0x11fc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC08u;
        // 0x11fc0c: 0xac820088  sw          $v0, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc08) {
            ctx->pc = 0x11FCA4u;
            return;
        }
    }
    ctx->pc = 0x11FC10u;
}
