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

// Function: entry_0013eeb0
// Address: 0x13eeb0 - 0x13eeb8
void entry_0013eeb0_0x13eeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eeb0_0x13eeb0");
#endif

    ctx->pc = 0x13eeb0u;

    // 0x13eeb0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x13EEB0u;
    {
        const bool branch_taken_0x13eeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eeb0) {
            ctx->pc = 0x13EF24u;
            return;
        }
    }
    ctx->pc = 0x13EEB8u;
}
