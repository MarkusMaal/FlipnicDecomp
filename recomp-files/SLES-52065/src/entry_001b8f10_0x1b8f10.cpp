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

// Function: entry_001b8f10
// Address: 0x1b8f10 - 0x1b8f20
void entry_001b8f10_0x1b8f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8f10_0x1b8f10");
#endif

    ctx->pc = 0x1b8f10u;

    // 0x1b8f10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8F10u;
    {
        const bool branch_taken_0x1b8f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8f10) {
            ctx->pc = 0x1B8F20u;
            return;
        }
    }
    ctx->pc = 0x1B8F18u;
    // 0x1b8f18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8F18u;
    {
        const bool branch_taken_0x1b8f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F18u;
        // 0x1b8f1c: 0x8e850010  lw          $a1, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f18) {
            ctx->pc = 0x1B8F28u;
            return;
        }
    }
    ctx->pc = 0x1B8F20u;
}
