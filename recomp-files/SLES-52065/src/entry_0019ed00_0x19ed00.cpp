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

// Function: entry_0019ed00
// Address: 0x19ed00 - 0x19ed04
void entry_0019ed00_0x19ed00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ed00_0x19ed00");
#endif

    ctx->pc = 0x19ed00u;

    // 0x19ed00: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    ctx->pc = 0x19ed04u;
}
