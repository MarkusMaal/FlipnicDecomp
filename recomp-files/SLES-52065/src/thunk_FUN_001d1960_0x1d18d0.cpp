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

// Function: thunk_FUN_001d1960
// Address: 0x1d18d0 - 0x1d18d8
void thunk_FUN_001d1960_0x1d18d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("thunk_FUN_001d1960_0x1d18d0");
#endif

    ctx->pc = 0x1d18d0u;

    // 0x1d18d0: 0x8074658  j           func_1D1960
    ctx->pc = 0x1D18D0u;
    ctx->pc = 0x1D1960u;
    FUN_001d1960_0x1d1960(rdram, ctx, runtime); return;
    ctx->pc = 0x1D18D8u;
}
