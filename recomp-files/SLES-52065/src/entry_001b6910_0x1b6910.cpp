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

// Function: entry_001b6910
// Address: 0x1b6910 - 0x1b6918
void entry_001b6910_0x1b6910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6910_0x1b6910");
#endif

    ctx->pc = 0x1b6910u;

    // 0x1b6910: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x1b6910u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1b6914: 0x0  nop
    ctx->pc = 0x1b6914u;
    // NOP
    ctx->pc = 0x1b6918u;
}
