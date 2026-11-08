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

// Function: entry_001577f8
// Address: 0x1577f8 - 0x157800
void entry_001577f8_0x1577f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001577f8_0x1577f8");
#endif

    ctx->pc = 0x1577f8u;

    // 0x1577f8: 0x8055e60  j           func_157980
    ctx->pc = 0x1577F8u;
    ctx->pc = 0x157980u;
    FUN_00157980_0x157980(rdram, ctx, runtime); return;
    ctx->pc = 0x157800u;
}
