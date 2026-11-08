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

// Function: entry_001f0188
// Address: 0x1f0188 - 0x1f0190
void entry_001f0188_0x1f0188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0188_0x1f0188");
#endif

    ctx->pc = 0x1f0188u;

    // 0x1f0188: 0x3c1e0039  lui         $fp, 0x39
    ctx->pc = 0x1f0188u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)57 << 16));
    // 0x1f018c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f018cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x1f0190u;
}
