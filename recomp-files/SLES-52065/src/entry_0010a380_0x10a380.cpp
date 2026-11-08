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

// Function: entry_0010a380
// Address: 0x10a380 - 0x10a388
void entry_0010a380_0x10a380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a380_0x10a380");
#endif

    ctx->pc = 0x10a380u;

    // 0x10a380: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x10A380u;
    {
        const bool branch_taken_0x10a380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a380) {
            ctx->pc = 0x10A3C0u;
            return;
        }
    }
    ctx->pc = 0x10A388u;
}
