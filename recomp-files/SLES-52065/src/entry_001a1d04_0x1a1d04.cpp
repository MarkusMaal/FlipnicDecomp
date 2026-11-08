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

// Function: entry_001a1d04
// Address: 0x1a1d04 - 0x1a1d0c
void entry_001a1d04_0x1a1d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1d04_0x1a1d04");
#endif

    ctx->pc = 0x1a1d04u;

    // 0x1a1d04: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a1d04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1d08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a1d0cu;
}
