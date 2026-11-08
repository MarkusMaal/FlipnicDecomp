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

// Function: entry_001aba08
// Address: 0x1aba08 - 0x1aba28
void entry_001aba08_0x1aba08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aba08_0x1aba08");
#endif

    ctx->pc = 0x1aba08u;

    // 0x1aba08: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1ABA08u;
    {
        const bool branch_taken_0x1aba08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aba08) {
            ctx->pc = 0x1ABA34u;
            return;
        }
    }
    ctx->pc = 0x1ABA10u;
    // 0x1aba10: 0x84630088  lh          $v1, 0x88($v1)
    ctx->pc = 0x1aba10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x1aba14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aba14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aba18: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABA18u;
    {
        const bool branch_taken_0x1aba18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aba18) {
            ctx->pc = 0x1ABA28u;
            return;
        }
    }
    ctx->pc = 0x1ABA20u;
    // 0x1aba20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ABA20u;
    {
        const bool branch_taken_0x1aba20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aba20) {
            ctx->pc = 0x1ABA2Cu;
            return;
        }
    }
    ctx->pc = 0x1ABA28u;
}
