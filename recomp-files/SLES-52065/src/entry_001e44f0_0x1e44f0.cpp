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

// Function: entry_001e44f0
// Address: 0x1e44f0 - 0x1e44fc
void entry_001e44f0_0x1e44f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e44f0_0x1e44f0");
#endif

    ctx->pc = 0x1e44f0u;

    // 0x1e44f0: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E44F0u;
    {
        const bool branch_taken_0x1e44f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e44f0) {
            ctx->pc = 0x1E44FCu;
            return;
        }
    }
    ctx->pc = 0x1E44F8u;
    // 0x1e44f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e44f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e44fcu;
}
