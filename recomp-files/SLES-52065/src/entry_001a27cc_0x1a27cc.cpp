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

// Function: entry_001a27cc
// Address: 0x1a27cc - 0x1a27d4
void entry_001a27cc_0x1a27cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a27cc_0x1a27cc");
#endif

    ctx->pc = 0x1a27ccu;

    // 0x1a27cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a27ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a27d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a27d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a27d4u;
}
