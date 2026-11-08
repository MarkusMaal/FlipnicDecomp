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

// Function: entry_001add54
// Address: 0x1add54 - 0x1add5c
void entry_001add54_0x1add54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001add54_0x1add54");
#endif

    ctx->pc = 0x1add54u;

    // 0x1add54: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1ADD54u;
    {
        const bool branch_taken_0x1add54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD54u;
        // 0x1add58: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add54) {
            ctx->pc = 0x1ADE98u;
            return;
        }
    }
    ctx->pc = 0x1ADD5Cu;
}
