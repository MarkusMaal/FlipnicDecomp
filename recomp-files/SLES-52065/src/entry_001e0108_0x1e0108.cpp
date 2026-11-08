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

// Function: entry_001e0108
// Address: 0x1e0108 - 0x1e010c
void entry_001e0108_0x1e0108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0108_0x1e0108");
#endif

    ctx->pc = 0x1e0108u;

    // 0x1e0108: 0x3c160022  lui         $s6, 0x22
    ctx->pc = 0x1e0108u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
    ctx->pc = 0x1e010cu;
}
