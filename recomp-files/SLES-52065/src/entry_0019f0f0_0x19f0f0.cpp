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

// Function: entry_0019f0f0
// Address: 0x19f0f0 - 0x19f124
void entry_0019f0f0_0x19f0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f0f0_0x19f0f0");
#endif

    ctx->pc = 0x19f0f0u;

    // 0x19f0f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f0f4: 0xae820320  sw          $v0, 0x320($s4)
    ctx->pc = 0x19f0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 800), GPR_U32(ctx, 2));
    // 0x19f0f8: 0x8e830678  lw          $v1, 0x678($s4)
    ctx->pc = 0x19f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
    // 0x19f0fc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x19F0FCu;
    {
        const bool branch_taken_0x19f0fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f0fc) {
            ctx->pc = 0x19F128u;
            return;
        }
    }
    ctx->pc = 0x19F104u;
    // 0x19f104: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19f104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19f108: 0x8c4228e4  lw          $v0, 0x28E4($v0)
    ctx->pc = 0x19f108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10468)));
    // 0x19f10c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19f110: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F110u;
    {
        const bool branch_taken_0x19f110 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x19f110) {
            ctx->pc = 0x19F124u;
            return;
        }
    }
    ctx->pc = 0x19F118u;
    // 0x19f118: 0x8e820694  lw          $v0, 0x694($s4)
    ctx->pc = 0x19f118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1684)));
    // 0x19f11c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F11Cu;
    {
        const bool branch_taken_0x19f11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f11c) {
            ctx->pc = 0x19F128u;
            return;
        }
    }
    ctx->pc = 0x19F124u;
}
