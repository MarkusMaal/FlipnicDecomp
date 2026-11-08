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

// Function: entry_001addb0
// Address: 0x1addb0 - 0x1addd0
void entry_001addb0_0x1addb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001addb0_0x1addb0");
#endif

    ctx->pc = 0x1addb0u;

    // 0x1addb0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ADDB0u;
    {
        const bool branch_taken_0x1addb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1addb0) {
            ctx->pc = 0x1ADDDCu;
            return;
        }
    }
    ctx->pc = 0x1ADDB8u;
    // 0x1addb8: 0x84830088  lh          $v1, 0x88($a0)
    ctx->pc = 0x1addb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1addbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1addbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1addc0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADDC0u;
    {
        const bool branch_taken_0x1addc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1addc0) {
            ctx->pc = 0x1ADDD0u;
            return;
        }
    }
    ctx->pc = 0x1ADDC8u;
    // 0x1addc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ADDC8u;
    {
        const bool branch_taken_0x1addc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1addc8) {
            ctx->pc = 0x1ADDD4u;
            return;
        }
    }
    ctx->pc = 0x1ADDD0u;
}
