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

// Function: entry_001395e0
// Address: 0x1395e0 - 0x1395e8
void entry_001395e0_0x1395e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001395e0_0x1395e0");
#endif

    ctx->pc = 0x1395e0u;

    // 0x1395e0: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x1395e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1395e4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1395e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    ctx->pc = 0x1395e8u;
}
