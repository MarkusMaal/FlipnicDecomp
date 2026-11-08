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

// Function: thunk_FUN_0012d9e0
// Address: 0x18a3c0 - 0x18a3c8
void thunk_FUN_0012d9e0_0x18a3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("thunk_FUN_0012d9e0_0x18a3c0");
#endif

    ctx->pc = 0x18a3c0u;

    // 0x18a3c0: 0x804b678  j           func_12D9E0
    ctx->pc = 0x18A3C0u;
    ctx->pc = 0x12D9E0u;
    FUN_0012d9e0_0x12d9e0(rdram, ctx, runtime); return;
    ctx->pc = 0x18A3C8u;
}
