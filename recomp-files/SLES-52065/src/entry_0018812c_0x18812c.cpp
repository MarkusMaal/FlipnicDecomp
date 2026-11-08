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

// Function: entry_0018812c
// Address: 0x18812c - 0x188130
void entry_0018812c_0x18812c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018812c_0x18812c");
#endif

    ctx->pc = 0x18812cu;

    // 0x18812c: 0x0  nop
    ctx->pc = 0x18812cu;
    // NOP
    ctx->pc = 0x188130u;
}
