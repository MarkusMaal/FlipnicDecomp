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

// Function: entry_001fe08c
// Address: 0x1fe08c - 0x1fe090
void entry_001fe08c_0x1fe08c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe08c_0x1fe08c");
#endif

    ctx->pc = 0x1fe08cu;

    // 0x1fe08c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1fe08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x1fe090u;
}
