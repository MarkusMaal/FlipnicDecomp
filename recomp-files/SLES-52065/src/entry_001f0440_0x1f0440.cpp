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

// Function: entry_001f0440
// Address: 0x1f0440 - 0x1f0448
void entry_001f0440_0x1f0440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0440_0x1f0440");
#endif

    ctx->pc = 0x1f0440u;

    // 0x1f0440: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0444: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f0444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1f0448u;
}
