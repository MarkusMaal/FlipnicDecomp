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

// Function: entry_001a821c
// Address: 0x1a821c - 0x1a8224
void entry_001a821c_0x1a821c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a821c_0x1a821c");
#endif

    ctx->pc = 0x1a821cu;

    // 0x1a821c: 0x0  nop
    ctx->pc = 0x1a821cu;
    // NOP
    // 0x1a8220: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a8220u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a8224u;
}
