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

// Function: entry_0019f310
// Address: 0x19f310 - 0x19f334
void entry_0019f310_0x19f310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f310_0x19f310");
#endif

    ctx->pc = 0x19f310u;

    // 0x19f310: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19f310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19f314: 0x8c4228e4  lw          $v0, 0x28E4($v0)
    ctx->pc = 0x19f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10468)));
    // 0x19f318: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19f318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19f31c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F31Cu;
    {
        const bool branch_taken_0x19f31c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F31Cu;
        // 0x19f320: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f31c) {
            ctx->pc = 0x19F334u;
            return;
        }
    }
    ctx->pc = 0x19F324u;
    // 0x19f324: 0x8e820694  lw          $v0, 0x694($s4)
    ctx->pc = 0x19f324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1684)));
    // 0x19f328: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19F328u;
    {
        const bool branch_taken_0x19f328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f328) {
            ctx->pc = 0x19F378u;
            return;
        }
    }
    ctx->pc = 0x19F330u;
    // 0x19f330: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19f330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x19f334u;
}
