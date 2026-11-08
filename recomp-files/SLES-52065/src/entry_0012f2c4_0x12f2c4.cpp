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

// Function: entry_0012f2c4
// Address: 0x12f2c4 - 0x12f2ec
void entry_0012f2c4_0x12f2c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f2c4_0x12f2c4");
#endif

    ctx->pc = 0x12f2c4u;

    // 0x12f2c4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f2c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12f2cc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x12f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x12f2d0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12f2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f2d4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x12f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12f2d8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F2D8u;
    {
        const bool branch_taken_0x12f2d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12f2d8) {
            ctx->pc = 0x12F2ECu;
            return;
        }
    }
    ctx->pc = 0x12F2E0u;
    // 0x12f2e0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x12f2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x12f2e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12f2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f2e8: 0x0  nop
    ctx->pc = 0x12f2e8u;
    // NOP
    ctx->pc = 0x12f2ecu;
}
