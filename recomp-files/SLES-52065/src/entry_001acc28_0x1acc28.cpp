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

// Function: entry_001acc28
// Address: 0x1acc28 - 0x1acc4c
void entry_001acc28_0x1acc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acc28_0x1acc28");
#endif

    ctx->pc = 0x1acc28u;

    // 0x1acc28: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1acc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1acc2c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1ACC2Cu;
    {
        const bool branch_taken_0x1acc2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acc2c) {
            ctx->pc = 0x1ACC80u;
            return;
        }
    }
    ctx->pc = 0x1ACC34u;
    // 0x1acc34: 0x84830010  lh          $v1, 0x10($a0)
    ctx->pc = 0x1acc34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1acc38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acc3c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACC3Cu;
    {
        const bool branch_taken_0x1acc3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1acc3c) {
            ctx->pc = 0x1ACC4Cu;
            return;
        }
    }
    ctx->pc = 0x1ACC44u;
    // 0x1acc44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACC44u;
    {
        const bool branch_taken_0x1acc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acc44) {
            ctx->pc = 0x1ACC50u;
            return;
        }
    }
    ctx->pc = 0x1ACC4Cu;
}
