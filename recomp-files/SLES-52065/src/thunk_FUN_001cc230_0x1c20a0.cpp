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

// Function: thunk_FUN_001cc230
// Address: 0x1c20a0 - 0x1c20a8
void thunk_FUN_001cc230_0x1c20a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("thunk_FUN_001cc230_0x1c20a0");
#endif

    ctx->pc = 0x1c20a0u;

    // 0x1c20a0: 0x807308c  j           func_1CC230
    ctx->pc = 0x1C20A0u;
    ctx->pc = 0x1CC230u;
    FUN_001cc230_0x1cc230(rdram, ctx, runtime); return;
    ctx->pc = 0x1C20A8u;
}
