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

// Function: entry_00155e98
// Address: 0x155e98 - 0x155ea0
void entry_00155e98_0x155e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155e98_0x155e98");
#endif

    ctx->pc = 0x155e98u;

    // 0x155e98: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x155E98u;
    {
        const bool branch_taken_0x155e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155e98) {
            ctx->pc = 0x1562C0u;
            return;
        }
    }
    ctx->pc = 0x155EA0u;
}
