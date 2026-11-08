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

// Function: entry_0011a5b0
// Address: 0x11a5b0 - 0x11a5b4
void entry_0011a5b0_0x11a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a5b0_0x11a5b0");
#endif

    ctx->pc = 0x11a5b0u;

    // 0x11a5b0: 0x0  nop
    ctx->pc = 0x11a5b0u;
    // NOP
    ctx->pc = 0x11a5b4u;
}
