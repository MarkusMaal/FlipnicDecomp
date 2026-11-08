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

// Function: entry_001029cc
// Address: 0x1029cc - 0x1029d0
void entry_001029cc_0x1029cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001029cc_0x1029cc");
#endif

    ctx->pc = 0x1029ccu;

    // 0x1029cc: 0x0  nop
    ctx->pc = 0x1029ccu;
    // NOP
    ctx->pc = 0x1029d0u;
}
