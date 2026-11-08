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

// Function: entry_001b11cc
// Address: 0x1b11cc - 0x1b11dc
void entry_001b11cc_0x1b11cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b11cc_0x1b11cc");
#endif

    ctx->pc = 0x1b11ccu;

    // 0x1b11cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B11CCu;
    {
        const bool branch_taken_0x1b11cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b11cc) {
            ctx->pc = 0x1B11DCu;
            return;
        }
    }
    ctx->pc = 0x1B11D4u;
    // 0x1b11d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B11D4u;
    {
        const bool branch_taken_0x1b11d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B11D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11D4u;
        // 0x1b11d8: 0x8c850020  lw          $a1, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11d4) {
            ctx->pc = 0x1B11E4u;
            return;
        }
    }
    ctx->pc = 0x1B11DCu;
}
