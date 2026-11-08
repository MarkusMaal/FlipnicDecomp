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

// Function: entry_001aba68
// Address: 0x1aba68 - 0x1aba8c
void entry_001aba68_0x1aba68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aba68_0x1aba68");
#endif

    ctx->pc = 0x1aba68u;

    // 0x1aba68: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1aba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1aba6c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1ABA6Cu;
    {
        const bool branch_taken_0x1aba6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aba6c) {
            ctx->pc = 0x1ABAC0u;
            return;
        }
    }
    ctx->pc = 0x1ABA74u;
    // 0x1aba74: 0x84830010  lh          $v1, 0x10($a0)
    ctx->pc = 0x1aba74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1aba78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aba78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aba7c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABA7Cu;
    {
        const bool branch_taken_0x1aba7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aba7c) {
            ctx->pc = 0x1ABA8Cu;
            return;
        }
    }
    ctx->pc = 0x1ABA84u;
    // 0x1aba84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ABA84u;
    {
        const bool branch_taken_0x1aba84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aba84) {
            ctx->pc = 0x1ABA90u;
            return;
        }
    }
    ctx->pc = 0x1ABA8Cu;
}
