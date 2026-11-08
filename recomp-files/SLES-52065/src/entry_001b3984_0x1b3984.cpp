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

// Function: entry_001b3984
// Address: 0x1b3984 - 0x1b3994
void entry_001b3984_0x1b3984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3984_0x1b3984");
#endif

    ctx->pc = 0x1b3984u;

    // 0x1b3984: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b3984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3988: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b3988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b398c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1B398Cu;
    {
        const bool branch_taken_0x1b398c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b398c) {
            ctx->pc = 0x1B3A20u;
            return;
        }
    }
    ctx->pc = 0x1B3994u;
}
