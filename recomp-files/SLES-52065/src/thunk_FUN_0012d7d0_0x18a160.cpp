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

// Function: thunk_FUN_0012d7d0
// Address: 0x18a160 - 0x18a168
void thunk_FUN_0012d7d0_0x18a160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("thunk_FUN_0012d7d0_0x18a160");
#endif

    ctx->pc = 0x18a160u;

    // 0x18a160: 0x804b5f4  j           func_12D7D0
    ctx->pc = 0x18A160u;
    ctx->pc = 0x12D7D0u;
    FUN_0012d7d0_0x12d7d0(rdram, ctx, runtime); return;
    ctx->pc = 0x18A168u;
}
