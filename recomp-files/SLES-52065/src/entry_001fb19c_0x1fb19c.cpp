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

// Function: entry_001fb19c
// Address: 0x1fb19c - 0x1fb1a0
void entry_001fb19c_0x1fb19c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb19c_0x1fb19c");
#endif

    ctx->pc = 0x1fb19cu;

    // 0x1fb19c: 0x3c023f2c  lui         $v0, 0x3F2C
    ctx->pc = 0x1fb19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
    ctx->pc = 0x1fb1a0u;
}
