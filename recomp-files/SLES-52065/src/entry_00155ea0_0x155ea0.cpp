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

// Function: entry_00155ea0
// Address: 0x155ea0 - 0x155ea8
void entry_00155ea0_0x155ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155ea0_0x155ea0");
#endif

    ctx->pc = 0x155ea0u;

    // 0x155ea0: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x155EA0u;
    {
        const bool branch_taken_0x155ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155ea0) {
            ctx->pc = 0x1562C0u;
            return;
        }
    }
    ctx->pc = 0x155EA8u;
}
