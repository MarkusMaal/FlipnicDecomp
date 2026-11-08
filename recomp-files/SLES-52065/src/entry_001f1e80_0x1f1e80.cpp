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

// Function: entry_001f1e80
// Address: 0x1f1e80 - 0x1f1e88
void entry_001f1e80_0x1f1e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1e80_0x1f1e80");
#endif

    ctx->pc = 0x1f1e80u;

    // 0x1f1e80: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f1e80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f1e84: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f1e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x1f1e88u;
}
