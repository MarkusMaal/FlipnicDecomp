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

// Function: entry_001aba90
// Address: 0x1aba90 - 0x1abab0
void entry_001aba90_0x1aba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aba90_0x1aba90");
#endif

    ctx->pc = 0x1aba90u;

    // 0x1aba90: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ABA90u;
    {
        const bool branch_taken_0x1aba90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aba90) {
            ctx->pc = 0x1ABABCu;
            return;
        }
    }
    ctx->pc = 0x1ABA98u;
    // 0x1aba98: 0x84830088  lh          $v1, 0x88($a0)
    ctx->pc = 0x1aba98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1aba9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abaa0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABAA0u;
    {
        const bool branch_taken_0x1abaa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1abaa0) {
            ctx->pc = 0x1ABAB0u;
            return;
        }
    }
    ctx->pc = 0x1ABAA8u;
    // 0x1abaa8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ABAA8u;
    {
        const bool branch_taken_0x1abaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abaa8) {
            ctx->pc = 0x1ABAB4u;
            return;
        }
    }
    ctx->pc = 0x1ABAB0u;
}
