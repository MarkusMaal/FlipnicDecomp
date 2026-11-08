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

// Function: entry_00205378
// Address: 0x205378 - 0x205380
void entry_00205378_0x205378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205378_0x205378");
#endif

    ctx->pc = 0x205378u;

    // 0x205378: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x205378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20537c: 0x0  nop
    ctx->pc = 0x20537cu;
    // NOP
    ctx->pc = 0x205380u;
}
