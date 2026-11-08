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

// Function: entry_0016a228
// Address: 0x16a228 - 0x16a230
void entry_0016a228_0x16a228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a228_0x16a228");
#endif

    ctx->pc = 0x16a228u;

    // 0x16a228: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x16A228u;
    {
        const bool branch_taken_0x16a228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a228) {
            ctx->pc = 0x16A35Cu;
            return;
        }
    }
    ctx->pc = 0x16A230u;
}
