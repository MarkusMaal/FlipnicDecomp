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

// Function: entry_001eb09c
// Address: 0x1eb09c - 0x1eb0a8
void entry_001eb09c_0x1eb09c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eb09c_0x1eb09c");
#endif

    ctx->pc = 0x1eb09cu;

    // 0x1eb09c: 0x0  nop
    ctx->pc = 0x1eb09cu;
    // NOP
    // 0x1eb0a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EB0A0u;
    {
        const bool branch_taken_0x1eb0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB0A0u;
        // 0x1eb0a4: 0x86900  sll         $t5, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb0a0) {
            ctx->pc = 0x1EB0C0u;
            return;
        }
    }
    ctx->pc = 0x1EB0A8u;
}
