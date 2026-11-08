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

// Function: entry_001adcf8
// Address: 0x1adcf8 - 0x1add24
void entry_001adcf8_0x1adcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adcf8_0x1adcf8");
#endif

    ctx->pc = 0x1adcf8u;

    // 0x1adcf8: 0x8f84838c  lw          $a0, -0x7C74($gp)
    ctx->pc = 0x1adcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x1adcfc: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x1adcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x1add00: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1add00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1add04: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1add04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1add08: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1add08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1add0c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1add0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1add10: 0x84620010  lh          $v0, 0x10($v1)
    ctx->pc = 0x1add10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1add14: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADD14u;
    {
        const bool branch_taken_0x1add14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1add14) {
            ctx->pc = 0x1ADD24u;
            return;
        }
    }
    ctx->pc = 0x1ADD1Cu;
    // 0x1add1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ADD1Cu;
    {
        const bool branch_taken_0x1add1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1add1c) {
            ctx->pc = 0x1ADD28u;
            return;
        }
    }
    ctx->pc = 0x1ADD24u;
}
