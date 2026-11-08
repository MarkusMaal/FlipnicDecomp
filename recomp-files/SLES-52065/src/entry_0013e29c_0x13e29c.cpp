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

// Function: entry_0013e29c
// Address: 0x13e29c - 0x13e2a4
void entry_0013e29c_0x13e29c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e29c_0x13e29c");
#endif

    ctx->pc = 0x13e29cu;

    // 0x13e29c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x13e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x13e2a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x13e2a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x13e2a4u;
}
