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

// Function: entry_00192c0c
// Address: 0x192c0c - 0x192c10
void entry_00192c0c_0x192c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192c0c_0x192c0c");
#endif

    ctx->pc = 0x192c0cu;

    // 0x192c0c: 0x0  nop
    ctx->pc = 0x192c0cu;
    // NOP
    ctx->pc = 0x192c10u;
}
