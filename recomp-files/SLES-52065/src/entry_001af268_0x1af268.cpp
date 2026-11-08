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

// Function: entry_001af268
// Address: 0x1af268 - 0x1af288
void entry_001af268_0x1af268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af268_0x1af268");
#endif

    ctx->pc = 0x1af268u;

    // 0x1af268: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1AF268u;
    {
        const bool branch_taken_0x1af268 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af268) {
            ctx->pc = 0x1AF294u;
            return;
        }
    }
    ctx->pc = 0x1AF270u;
    // 0x1af270: 0x84630088  lh          $v1, 0x88($v1)
    ctx->pc = 0x1af270u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x1af274: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af278: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF278u;
    {
        const bool branch_taken_0x1af278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1af278) {
            ctx->pc = 0x1AF288u;
            return;
        }
    }
    ctx->pc = 0x1AF280u;
    // 0x1af280: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF280u;
    {
        const bool branch_taken_0x1af280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af280) {
            ctx->pc = 0x1AF28Cu;
            return;
        }
    }
    ctx->pc = 0x1AF288u;
}
