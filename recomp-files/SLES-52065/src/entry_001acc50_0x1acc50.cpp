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

// Function: entry_001acc50
// Address: 0x1acc50 - 0x1acc70
void entry_001acc50_0x1acc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acc50_0x1acc50");
#endif

    ctx->pc = 0x1acc50u;

    // 0x1acc50: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ACC50u;
    {
        const bool branch_taken_0x1acc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acc50) {
            ctx->pc = 0x1ACC7Cu;
            return;
        }
    }
    ctx->pc = 0x1ACC58u;
    // 0x1acc58: 0x84830088  lh          $v1, 0x88($a0)
    ctx->pc = 0x1acc58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1acc5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acc60: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACC60u;
    {
        const bool branch_taken_0x1acc60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1acc60) {
            ctx->pc = 0x1ACC70u;
            return;
        }
    }
    ctx->pc = 0x1ACC68u;
    // 0x1acc68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACC68u;
    {
        const bool branch_taken_0x1acc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acc68) {
            ctx->pc = 0x1ACC74u;
            return;
        }
    }
    ctx->pc = 0x1ACC70u;
}
