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

// Function: entry_001b72a8
// Address: 0x1b72a8 - 0x1b72ac
void entry_001b72a8_0x1b72a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b72a8_0x1b72a8");
#endif

    ctx->pc = 0x1b72a8u;

    // 0x1b72a8: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x1b72a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    ctx->pc = 0x1b72acu;
}
