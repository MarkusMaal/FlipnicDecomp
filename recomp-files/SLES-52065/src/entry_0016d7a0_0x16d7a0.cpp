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

// Function: entry_0016d7a0
// Address: 0x16d7a0 - 0x16d7a4
void entry_0016d7a0_0x16d7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d7a0_0x16d7a0");
#endif

    ctx->pc = 0x16d7a0u;

    // 0x16d7a0: 0x2a010000  slti        $at, $s0, 0x0
    ctx->pc = 0x16d7a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    ctx->pc = 0x16d7a4u;
}
