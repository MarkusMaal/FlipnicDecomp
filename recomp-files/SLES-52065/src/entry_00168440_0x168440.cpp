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

// Function: entry_00168440
// Address: 0x168440 - 0x168450
void entry_00168440_0x168440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168440_0x168440");
#endif

    ctx->pc = 0x168440u;

    // 0x168440: 0x80597d8  j           func_165F60
    ctx->pc = 0x168440u;
    ctx->pc = 0x165F60u;
    FUN_00165f60_0x165f60(rdram, ctx, runtime); return;
    ctx->pc = 0x168448u;
    // 0x168448: 0x0  nop
    ctx->pc = 0x168448u;
    // NOP
    // 0x16844c: 0x0  nop
    ctx->pc = 0x16844cu;
    // NOP
    ctx->pc = 0x168450u;
}
