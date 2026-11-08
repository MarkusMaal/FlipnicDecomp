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

// Function: entry_001a86d8
// Address: 0x1a86d8 - 0x1a86e0
void entry_001a86d8_0x1a86d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a86d8_0x1a86d8");
#endif

    ctx->pc = 0x1a86d8u;

    // 0x1a86d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a86d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a86dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a86dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a86e0u;
}
