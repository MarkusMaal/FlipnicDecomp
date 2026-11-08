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

// Function: entry_001064b0
// Address: 0x1064b0 - 0x1064c0
void entry_001064b0_0x1064b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001064b0_0x1064b0");
#endif

    ctx->pc = 0x1064b0u;

    // 0x1064b0: 0x80564a8  j           func_1592A0
    ctx->pc = 0x1064B0u;
    ctx->pc = 0x1592A0u;
    FUN_001592a0_0x1592a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1064B8u;
    // 0x1064b8: 0x0  nop
    ctx->pc = 0x1064b8u;
    // NOP
    // 0x1064bc: 0x0  nop
    ctx->pc = 0x1064bcu;
    // NOP
    ctx->pc = 0x1064c0u;
}
