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

// Function: entry_001b23e8
// Address: 0x1b23e8 - 0x1b23f0
void entry_001b23e8_0x1b23e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b23e8_0x1b23e8");
#endif

    ctx->pc = 0x1b23e8u;

    // 0x1b23e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b23e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b23ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b23f0u;
}
