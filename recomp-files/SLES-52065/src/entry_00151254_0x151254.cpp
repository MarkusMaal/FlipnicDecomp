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

// Function: entry_00151254
// Address: 0x151254 - 0x151258
void entry_00151254_0x151254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151254_0x151254");
#endif

    ctx->pc = 0x151254u;

    // 0x151254: 0x0  nop
    ctx->pc = 0x151254u;
    // NOP
    ctx->pc = 0x151258u;
}
