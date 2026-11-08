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

// Function: entry_001b8f7c
// Address: 0x1b8f7c - 0x1b8f8c
void entry_001b8f7c_0x1b8f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8f7c_0x1b8f7c");
#endif

    ctx->pc = 0x1b8f7cu;

    // 0x1b8f7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8F7Cu;
    {
        const bool branch_taken_0x1b8f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8f7c) {
            ctx->pc = 0x1B8F8Cu;
            return;
        }
    }
    ctx->pc = 0x1B8F84u;
    // 0x1b8f84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8F84u;
    {
        const bool branch_taken_0x1b8f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F84u;
        // 0x1b8f88: 0x8e850010  lw          $a1, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f84) {
            ctx->pc = 0x1B8F94u;
            return;
        }
    }
    ctx->pc = 0x1B8F8Cu;
}
