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

// Function: entry_001d557c
// Address: 0x1d557c - 0x1d558c
void entry_001d557c_0x1d557c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d557c_0x1d557c");
#endif

    ctx->pc = 0x1d557cu;

    // 0x1d557c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1d557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1d5580: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1d5580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1d5584: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1d5584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x1d5588: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d5588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    ctx->pc = 0x1d558cu;
}
