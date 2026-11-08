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

// Function: entry_0011f1dc
// Address: 0x11f1dc - 0x11f1f0
void entry_0011f1dc_0x11f1dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f1dc_0x11f1dc");
#endif

    ctx->pc = 0x11f1dcu;

    // 0x11f1dc: 0x0  nop
    ctx->pc = 0x11f1dcu;
    // NOP
    // 0x11f1e0: 0x16a20003  bne         $s5, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F1E0u;
    {
        const bool branch_taken_0x11f1e0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x11f1e0) {
            ctx->pc = 0x11F1F0u;
            return;
        }
    }
    ctx->pc = 0x11F1E8u;
    // 0x11f1e8: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F1E8u;
    {
        const bool branch_taken_0x11f1e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f1e8) {
            ctx->pc = 0x11F1F8u;
            return;
        }
    }
    ctx->pc = 0x11F1F0u;
}
