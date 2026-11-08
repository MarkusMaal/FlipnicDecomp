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

// Function: entry_0018ff84
// Address: 0x18ff84 - 0x18ff90
void entry_0018ff84_0x18ff84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ff84_0x18ff84");
#endif

    ctx->pc = 0x18ff84u;

    // 0x18ff84: 0x0  nop
    ctx->pc = 0x18ff84u;
    // NOP
    // 0x18ff88: 0x1600ffaf  bnez        $s0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x18FF88u;
    {
        const bool branch_taken_0x18ff88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ff88) {
            ctx->pc = 0x18FE48u;
            return;
        }
    }
    ctx->pc = 0x18FF90u;
}
