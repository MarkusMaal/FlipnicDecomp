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

// Function: entry_001bc870
// Address: 0x1bc870 - 0x1bc888
void entry_001bc870_0x1bc870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc870_0x1bc870");
#endif

    ctx->pc = 0x1bc870u;

    // 0x1bc870: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1bc870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1bc874: 0xa0400040  sb          $zero, 0x40($v0)
    ctx->pc = 0x1bc874u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc878: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1bc878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1bc87c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1bc87cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1bc880: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1bc880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1bc884: 0x0  nop
    ctx->pc = 0x1bc884u;
    // NOP
    ctx->pc = 0x1bc888u;
}
