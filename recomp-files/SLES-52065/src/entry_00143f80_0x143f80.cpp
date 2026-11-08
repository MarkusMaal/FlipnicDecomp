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

// Function: entry_00143f80
// Address: 0x143f80 - 0x143f88
void entry_00143f80_0x143f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143f80_0x143f80");
#endif

    ctx->pc = 0x143f80u;

    // 0x143f80: 0x126000bf  beqz        $s3, . + 4 + (0xBF << 2)
    ctx->pc = 0x143F80u;
    {
        const bool branch_taken_0x143f80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x143f80) {
            ctx->pc = 0x144280u;
            return;
        }
    }
    ctx->pc = 0x143F88u;
}
