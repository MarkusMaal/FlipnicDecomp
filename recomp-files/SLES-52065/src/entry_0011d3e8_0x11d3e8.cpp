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

// Function: entry_0011d3e8
// Address: 0x11d3e8 - 0x11d3f0
void entry_0011d3e8_0x11d3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d3e8_0x11d3e8");
#endif

    ctx->pc = 0x11d3e8u;

    // 0x11d3e8: 0x12800036  beqz        $s4, . + 4 + (0x36 << 2)
    ctx->pc = 0x11D3E8u;
    {
        const bool branch_taken_0x11d3e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d3e8) {
            ctx->pc = 0x11D4C4u;
            return;
        }
    }
    ctx->pc = 0x11D3F0u;
}
