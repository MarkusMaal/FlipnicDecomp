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

// Function: entry_001f8e58
// Address: 0x1f8e58 - 0x1f8e5c
void entry_001f8e58_0x1f8e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8e58_0x1f8e58");
#endif

    ctx->pc = 0x1f8e58u;

    // 0x1f8e58: 0x8e022bc0  lw          $v0, 0x2BC0($s0)
    ctx->pc = 0x1f8e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11200)));
    ctx->pc = 0x1f8e5cu;
}
