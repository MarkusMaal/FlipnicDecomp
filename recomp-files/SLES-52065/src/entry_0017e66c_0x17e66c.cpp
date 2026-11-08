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

// Function: entry_0017e66c
// Address: 0x17e66c - 0x17e674
void entry_0017e66c_0x17e66c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e66c_0x17e66c");
#endif

    ctx->pc = 0x17e66cu;

    // 0x17e66c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x17E66Cu;
    {
        const bool branch_taken_0x17e66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e66c) {
            ctx->pc = 0x17E6DCu;
            return;
        }
    }
    ctx->pc = 0x17E674u;
}
