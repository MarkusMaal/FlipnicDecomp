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

// Function: entry_001fcac0
// Address: 0x1fcac0 - 0x1fcac4
void entry_001fcac0_0x1fcac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcac0_0x1fcac0");
#endif

    ctx->pc = 0x1fcac0u;

    // 0x1fcac0: 0x2e0b02d  daddu       $s6, $s7, $zero
    ctx->pc = 0x1fcac0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1fcac4u;
}
