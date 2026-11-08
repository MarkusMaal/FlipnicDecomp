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

// Function: entry_00189c9c
// Address: 0x189c9c - 0x189ca4
void entry_00189c9c_0x189c9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189c9c_0x189c9c");
#endif

    ctx->pc = 0x189c9cu;

    // 0x189c9c: 0x0  nop
    ctx->pc = 0x189c9cu;
    // NOP
    // 0x189ca0: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x189ca0u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->pc = 0x189ca4u;
}
