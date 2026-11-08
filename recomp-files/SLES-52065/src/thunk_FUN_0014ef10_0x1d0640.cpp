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

// Function: thunk_FUN_0014ef10
// Address: 0x1d0640 - 0x1d0648
void thunk_FUN_0014ef10_0x1d0640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("thunk_FUN_0014ef10_0x1d0640");
#endif

    ctx->pc = 0x1d0640u;

    // 0x1d0640: 0x8053bc4  j           func_14EF10
    ctx->pc = 0x1D0640u;
    ctx->pc = 0x14EF10u;
    FUN_0014ef10_0x14ef10(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0648u;
}
