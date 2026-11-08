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

// Function: entry_0017e798
// Address: 0x17e798 - 0x17e7a0
void entry_0017e798_0x17e798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e798_0x17e798");
#endif

    ctx->pc = 0x17e798u;

    // 0x17e798: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x17E798u;
    {
        const bool branch_taken_0x17e798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e798) {
            ctx->pc = 0x17E7E8u;
            return;
        }
    }
    ctx->pc = 0x17E7A0u;
}
