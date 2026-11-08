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

// Function: thunk_FUN_001f3db0
// Address: 0x1f4910 - 0x1f4918
void thunk_FUN_001f3db0_0x1f4910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("thunk_FUN_001f3db0_0x1f4910");
#endif

    ctx->pc = 0x1f4910u;

    // 0x1f4910: 0x807cf6c  j           func_1F3DB0
    ctx->pc = 0x1F4910u;
    ctx->pc = 0x1F3DB0u;
    FUN_001f3db0_0x1f3db0(rdram, ctx, runtime); return;
    ctx->pc = 0x1F4918u;
}
