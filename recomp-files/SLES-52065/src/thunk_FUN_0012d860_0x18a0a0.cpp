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

// Function: thunk_FUN_0012d860
// Address: 0x18a0a0 - 0x18a0a8
void thunk_FUN_0012d860_0x18a0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("thunk_FUN_0012d860_0x18a0a0");
#endif

    ctx->pc = 0x18a0a0u;

    // 0x18a0a0: 0x804b618  j           func_12D860
    ctx->pc = 0x18A0A0u;
    ctx->pc = 0x12D860u;
    FUN_0012d860_0x12d860(rdram, ctx, runtime); return;
    ctx->pc = 0x18A0A8u;
}
