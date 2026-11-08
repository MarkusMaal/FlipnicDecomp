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

// Function: entry_0011c4b0
// Address: 0x11c4b0 - 0x11c4b4
void entry_0011c4b0_0x11c4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c4b0_0x11c4b0");
#endif

    ctx->pc = 0x11c4b0u;

    // 0x11c4b0: 0x240503ff  addiu       $a1, $zero, 0x3FF
    ctx->pc = 0x11c4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->pc = 0x11c4b4u;
}
