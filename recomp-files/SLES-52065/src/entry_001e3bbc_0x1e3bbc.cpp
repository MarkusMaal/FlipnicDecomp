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

// Function: entry_001e3bbc
// Address: 0x1e3bbc - 0x1e3bc4
void entry_001e3bbc_0x1e3bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3bbc_0x1e3bbc");
#endif

    ctx->pc = 0x1e3bbcu;

    // 0x1e3bbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3BBCu;
    {
        const bool branch_taken_0x1e3bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3bbc) {
            ctx->pc = 0x1E3BCCu;
            return;
        }
    }
    ctx->pc = 0x1E3BC4u;
}
