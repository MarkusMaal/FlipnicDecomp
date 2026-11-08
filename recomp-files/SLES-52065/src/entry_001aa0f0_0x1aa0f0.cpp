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

// Function: entry_001aa0f0
// Address: 0x1aa0f0 - 0x1aa100
void entry_001aa0f0_0x1aa0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa0f0_0x1aa0f0");
#endif

    ctx->pc = 0x1aa0f0u;

    // 0x1aa0f0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1AA0F0u;
    {
        const bool branch_taken_0x1aa0f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa0f0) {
            ctx->pc = 0x1AA11Cu;
            return;
        }
    }
    ctx->pc = 0x1AA0F8u;
    // 0x1aa0f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aa0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa0fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1aa0fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1aa100u;
}
