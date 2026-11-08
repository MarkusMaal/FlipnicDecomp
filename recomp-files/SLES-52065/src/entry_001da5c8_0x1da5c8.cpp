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

// Function: entry_001da5c8
// Address: 0x1da5c8 - 0x1da5f0
void entry_001da5c8_0x1da5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da5c8_0x1da5c8");
#endif

    ctx->pc = 0x1da5c8u;

    // 0x1da5c8: 0x24a571d0  addiu       $a1, $a1, 0x71D0
    ctx->pc = 0x1da5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29136));
    // 0x1da5cc: 0x248370d0  addiu       $v1, $a0, 0x70D0
    ctx->pc = 0x1da5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28880));
    // 0x1da5d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1da5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da5d4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1da5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da5d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da5dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1da5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da5e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da5e4: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x1da5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x1da5e8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1da5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1da5ec: 0xa0690000  sb          $t1, 0x0($v1)
    ctx->pc = 0x1da5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 9));
    ctx->pc = 0x1da5f0u;
}
