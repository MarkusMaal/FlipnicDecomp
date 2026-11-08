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

// Function: entry_0012fb04
// Address: 0x12fb04 - 0x12fb20
void entry_0012fb04_0x12fb04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fb04_0x12fb04");
#endif

    ctx->pc = 0x12fb04u;

    // 0x12fb04: 0x0  nop
    ctx->pc = 0x12fb04u;
    // NOP
    // 0x12fb08: 0x2062021  addu        $a0, $s0, $a2
    ctx->pc = 0x12fb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x12fb0c: 0x84870000  lh          $a3, 0x0($a0)
    ctx->pc = 0x12fb0cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12fb10: 0x10e30003  beq         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FB10u;
    {
        const bool branch_taken_0x12fb10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fb10) {
            ctx->pc = 0x12FB20u;
            return;
        }
    }
    ctx->pc = 0x12FB18u;
    // 0x12fb18: 0x14e2fff4  bne         $a3, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x12FB18u;
    {
        const bool branch_taken_0x12fb18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x12fb18) {
            ctx->pc = 0x12FAECu;
            return;
        }
    }
    ctx->pc = 0x12FB20u;
}
