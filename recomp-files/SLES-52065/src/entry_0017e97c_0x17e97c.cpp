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

// Function: entry_0017e97c
// Address: 0x17e97c - 0x17e984
void entry_0017e97c_0x17e97c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e97c_0x17e97c");
#endif

    ctx->pc = 0x17e97cu;

    // 0x17e97c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17E97Cu;
    {
        const bool branch_taken_0x17e97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e97c) {
            ctx->pc = 0x17E9A0u;
            return;
        }
    }
    ctx->pc = 0x17E984u;
}
