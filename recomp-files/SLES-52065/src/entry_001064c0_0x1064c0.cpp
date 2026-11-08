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

// Function: entry_001064c0
// Address: 0x1064c0 - 0x1064d0
void entry_001064c0_0x1064c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001064c0_0x1064c0");
#endif

    ctx->pc = 0x1064c0u;

    // 0x1064c0: 0x80564b0  j           func_1592C0
    ctx->pc = 0x1064C0u;
    ctx->pc = 0x1592C0u;
    FUN_001592c0_0x1592c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1064C8u;
    // 0x1064c8: 0x0  nop
    ctx->pc = 0x1064c8u;
    // NOP
    // 0x1064cc: 0x0  nop
    ctx->pc = 0x1064ccu;
    // NOP
    ctx->pc = 0x1064d0u;
}
