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

// Function: entry_001b8004
// Address: 0x1b8004 - 0x1b8008
void entry_001b8004_0x1b8004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8004_0x1b8004");
#endif

    ctx->pc = 0x1b8004u;

    // 0x1b8004: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1b8004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->pc = 0x1b8008u;
}
