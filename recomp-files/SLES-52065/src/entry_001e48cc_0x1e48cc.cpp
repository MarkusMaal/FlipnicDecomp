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

// Function: entry_001e48cc
// Address: 0x1e48cc - 0x1e48dc
void entry_001e48cc_0x1e48cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e48cc_0x1e48cc");
#endif

    ctx->pc = 0x1e48ccu;

    // 0x1e48cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1e48ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e48d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1e48d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1e48d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E48D4u;
    {
        const bool branch_taken_0x1e48d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E48D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48D4u;
        // 0x1e48d8: 0x222882f  dsubu       $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48d4) {
            ctx->pc = 0x1E48F4u;
            return;
        }
    }
    ctx->pc = 0x1E48DCu;
}
