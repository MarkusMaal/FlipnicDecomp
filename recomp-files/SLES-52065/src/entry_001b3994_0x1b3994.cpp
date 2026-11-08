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

// Function: entry_001b3994
// Address: 0x1b3994 - 0x1b39a0
void entry_001b3994_0x1b3994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3994_0x1b3994");
#endif

    ctx->pc = 0x1b3994u;

    // 0x1b3994: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b3994u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3998: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1B3998u;
    {
        const bool branch_taken_0x1b3998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3998) {
            ctx->pc = 0x1B3A0Cu;
            return;
        }
    }
    ctx->pc = 0x1B39A0u;
}
