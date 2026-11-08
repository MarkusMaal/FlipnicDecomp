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

// Function: thunk_FUN_00132c00
// Address: 0x132bf0 - 0x132bf8
void thunk_FUN_00132c00_0x132bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("thunk_FUN_00132c00_0x132bf0");
#endif

    ctx->pc = 0x132bf0u;

    // 0x132bf0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x132BF0u;
    {
        const bool branch_taken_0x132bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132bf0) {
            ctx->pc = 0x132C00u;
            return;
        }
    }
    ctx->pc = 0x132BF8u;
}
