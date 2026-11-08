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

// Function: entry_001c8ee4
// Address: 0x1c8ee4 - 0x1c8eec
void entry_001c8ee4_0x1c8ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8ee4_0x1c8ee4");
#endif

    ctx->pc = 0x1c8ee4u;

    // 0x1c8ee4: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c8ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1c8ee8: 0xa040282c  sb          $zero, 0x282C($v0)
    ctx->pc = 0x1c8ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10284), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1c8eecu;
}
