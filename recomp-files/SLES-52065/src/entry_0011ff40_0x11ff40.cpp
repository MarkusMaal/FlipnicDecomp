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

// Function: entry_0011ff40
// Address: 0x11ff40 - 0x11ff44
void entry_0011ff40_0x11ff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ff40_0x11ff40");
#endif

    ctx->pc = 0x11ff40u;

    // 0x11ff40: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x11ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x11ff44u;
}
