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

// Function: entry_001e4ae8
// Address: 0x1e4ae8 - 0x1e4af0
void entry_001e4ae8_0x1e4ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4ae8_0x1e4ae8");
#endif

    ctx->pc = 0x1e4ae8u;

    // 0x1e4ae8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E4AE8u;
    {
        const bool branch_taken_0x1e4ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4ae8) {
            ctx->pc = 0x1E4B14u;
            return;
        }
    }
    ctx->pc = 0x1E4AF0u;
}
