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

// Function: entry_00127380
// Address: 0x127380 - 0x127390
void entry_00127380_0x127380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127380_0x127380");
#endif

    ctx->pc = 0x127380u;

    // 0x127380: 0x8049730  j           func_125CC0
    ctx->pc = 0x127380u;
    ctx->pc = 0x125CC0u;
    FUN_00125cc0_0x125cc0(rdram, ctx, runtime); return;
    ctx->pc = 0x127388u;
    // 0x127388: 0x0  nop
    ctx->pc = 0x127388u;
    // NOP
    // 0x12738c: 0x0  nop
    ctx->pc = 0x12738cu;
    // NOP
    ctx->pc = 0x127390u;
}
