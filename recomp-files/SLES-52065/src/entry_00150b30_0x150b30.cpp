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

// Function: entry_00150b30
// Address: 0x150b30 - 0x150b38
void entry_00150b30_0x150b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150b30_0x150b30");
#endif

    ctx->pc = 0x150b30u;

    // 0x150b30: 0x1650fff5  bne         $s2, $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x150B30u;
    {
        const bool branch_taken_0x150b30 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x150b30) {
            ctx->pc = 0x150B08u;
            return;
        }
    }
    ctx->pc = 0x150B38u;
}
