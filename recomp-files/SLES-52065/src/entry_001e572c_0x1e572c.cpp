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

// Function: entry_001e572c
// Address: 0x1e572c - 0x1e5730
void entry_001e572c_0x1e572c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e572c_0x1e572c");
#endif

    ctx->pc = 0x1e572cu;

    // 0x1e572c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1e572cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->pc = 0x1e5730u;
}
