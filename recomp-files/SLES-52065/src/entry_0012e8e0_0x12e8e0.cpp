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

// Function: entry_0012e8e0
// Address: 0x12e8e0 - 0x12e8e8
void entry_0012e8e0_0x12e8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e8e0_0x12e8e0");
#endif

    ctx->pc = 0x12e8e0u;

    // 0x12e8e0: 0x126000af  beqz        $s3, . + 4 + (0xAF << 2)
    ctx->pc = 0x12E8E0u;
    {
        const bool branch_taken_0x12e8e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e8e0) {
            ctx->pc = 0x12EBA0u;
            return;
        }
    }
    ctx->pc = 0x12E8E8u;
}
