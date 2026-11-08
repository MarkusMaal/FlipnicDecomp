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

// Function: entry_00151590
// Address: 0x151590 - 0x1515a0
void entry_00151590_0x151590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151590_0x151590");
#endif

    ctx->pc = 0x151590u;

    // 0x151590: 0x804e0a8  j           func_1382A0
    ctx->pc = 0x151590u;
    ctx->pc = 0x1382A0u;
    FUN_001382a0_0x1382a0(rdram, ctx, runtime); return;
    ctx->pc = 0x151598u;
    // 0x151598: 0x0  nop
    ctx->pc = 0x151598u;
    // NOP
    // 0x15159c: 0x0  nop
    ctx->pc = 0x15159cu;
    // NOP
    ctx->pc = 0x1515a0u;
}
