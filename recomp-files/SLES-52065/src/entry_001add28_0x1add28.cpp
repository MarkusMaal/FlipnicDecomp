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

// Function: entry_001add28
// Address: 0x1add28 - 0x1add48
void entry_001add28_0x1add28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001add28_0x1add28");
#endif

    ctx->pc = 0x1add28u;

    // 0x1add28: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1ADD28u;
    {
        const bool branch_taken_0x1add28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1add28) {
            ctx->pc = 0x1ADD54u;
            return;
        }
    }
    ctx->pc = 0x1ADD30u;
    // 0x1add30: 0x84630088  lh          $v1, 0x88($v1)
    ctx->pc = 0x1add30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x1add34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1add34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1add38: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADD38u;
    {
        const bool branch_taken_0x1add38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1add38) {
            ctx->pc = 0x1ADD48u;
            return;
        }
    }
    ctx->pc = 0x1ADD40u;
    // 0x1add40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ADD40u;
    {
        const bool branch_taken_0x1add40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1add40) {
            ctx->pc = 0x1ADD4Cu;
            return;
        }
    }
    ctx->pc = 0x1ADD48u;
}
