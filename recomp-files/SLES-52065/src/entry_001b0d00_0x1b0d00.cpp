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

// Function: entry_001b0d00
// Address: 0x1b0d00 - 0x1b0d08
void entry_001b0d00_0x1b0d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0d00_0x1b0d00");
#endif

    ctx->pc = 0x1b0d00u;

    // 0x1b0d00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b0d00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b0d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b0d08u;
}
