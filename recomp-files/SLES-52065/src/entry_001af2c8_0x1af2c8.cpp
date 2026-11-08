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

// Function: entry_001af2c8
// Address: 0x1af2c8 - 0x1af2ec
void entry_001af2c8_0x1af2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af2c8_0x1af2c8");
#endif

    ctx->pc = 0x1af2c8u;

    // 0x1af2c8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1af2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1af2cc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1AF2CCu;
    {
        const bool branch_taken_0x1af2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af2cc) {
            ctx->pc = 0x1AF320u;
            return;
        }
    }
    ctx->pc = 0x1AF2D4u;
    // 0x1af2d4: 0x84830010  lh          $v1, 0x10($a0)
    ctx->pc = 0x1af2d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1af2d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af2dc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF2DCu;
    {
        const bool branch_taken_0x1af2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1af2dc) {
            ctx->pc = 0x1AF2ECu;
            return;
        }
    }
    ctx->pc = 0x1AF2E4u;
    // 0x1af2e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF2E4u;
    {
        const bool branch_taken_0x1af2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af2e4) {
            ctx->pc = 0x1AF2F0u;
            return;
        }
    }
    ctx->pc = 0x1AF2ECu;
}
