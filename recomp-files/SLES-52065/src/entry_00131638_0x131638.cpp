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

// Function: entry_00131638
// Address: 0x131638 - 0x131644
void entry_00131638_0x131638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131638_0x131638");
#endif

    ctx->pc = 0x131638u;

    // 0x131638: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x131638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13163c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13163cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x131640: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x131640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    ctx->pc = 0x131644u;
}
