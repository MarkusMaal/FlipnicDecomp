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

// Function: entry_0013e96c
// Address: 0x13e96c - 0x13e974
void entry_0013e96c_0x13e96c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e96c_0x13e96c");
#endif

    ctx->pc = 0x13e96cu;

    // 0x13e96c: 0xa220018b  sb          $zero, 0x18B($s1)
    ctx->pc = 0x13e96cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 395), (uint8_t)GPR_U32(ctx, 0));
    // 0x13e970: 0x8e230124  lw          $v1, 0x124($s1)
    ctx->pc = 0x13e970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    ctx->pc = 0x13e974u;
}
