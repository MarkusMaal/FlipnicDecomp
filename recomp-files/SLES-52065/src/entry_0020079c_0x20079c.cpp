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

// Function: entry_0020079c
// Address: 0x20079c - 0x2007a8
void entry_0020079c_0x20079c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020079c_0x20079c");
#endif

    ctx->pc = 0x20079cu;

    // 0x20079c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x20079cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2007a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2007A0u;
    {
        const bool branch_taken_0x2007a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2007A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007A0u;
        // 0x2007a4: 0x2238825  or          $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2007a0) {
            ctx->pc = 0x2007C0u;
            return;
        }
    }
    ctx->pc = 0x2007A8u;
}
