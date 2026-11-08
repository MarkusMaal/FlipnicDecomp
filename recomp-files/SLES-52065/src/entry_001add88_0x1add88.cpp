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

// Function: entry_001add88
// Address: 0x1add88 - 0x1addac
void entry_001add88_0x1add88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001add88_0x1add88");
#endif

    ctx->pc = 0x1add88u;

    // 0x1add88: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1add88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1add8c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1ADD8Cu;
    {
        const bool branch_taken_0x1add8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1add8c) {
            ctx->pc = 0x1ADDE0u;
            return;
        }
    }
    ctx->pc = 0x1ADD94u;
    // 0x1add94: 0x84830010  lh          $v1, 0x10($a0)
    ctx->pc = 0x1add94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1add98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1add98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1add9c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADD9Cu;
    {
        const bool branch_taken_0x1add9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1add9c) {
            ctx->pc = 0x1ADDACu;
            return;
        }
    }
    ctx->pc = 0x1ADDA4u;
    // 0x1adda4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ADDA4u;
    {
        const bool branch_taken_0x1adda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adda4) {
            ctx->pc = 0x1ADDB0u;
            return;
        }
    }
    ctx->pc = 0x1ADDACu;
}
