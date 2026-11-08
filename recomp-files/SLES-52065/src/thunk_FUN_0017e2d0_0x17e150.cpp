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

// Function: thunk_FUN_0017e2d0
// Address: 0x17e150 - 0x17e158
void thunk_FUN_0017e2d0_0x17e150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("thunk_FUN_0017e2d0_0x17e150");
#endif

    ctx->pc = 0x17e150u;

    // 0x17e150: 0x805f8b4  j           func_17E2D0
    ctx->pc = 0x17E150u;
    ctx->pc = 0x17E2D0u;
    FUN_0017e2d0_0x17e2d0(rdram, ctx, runtime); return;
    ctx->pc = 0x17E158u;
}
