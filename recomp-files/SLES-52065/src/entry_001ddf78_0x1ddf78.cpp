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

// Function: entry_001ddf78
// Address: 0x1ddf78 - 0x1ddf7c
void entry_001ddf78_0x1ddf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddf78_0x1ddf78");
#endif

    ctx->pc = 0x1ddf78u;

    // 0x1ddf78: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x1ddf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    ctx->pc = 0x1ddf7cu;
}
