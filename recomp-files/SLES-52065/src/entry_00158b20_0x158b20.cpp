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

// Function: entry_00158b20
// Address: 0x158b20 - 0x158b38
void entry_00158b20_0x158b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158b20_0x158b20");
#endif

    ctx->pc = 0x158b20u;

    // 0x158b20: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x158b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x158b24: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x158b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x158b28: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x158b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158b2c: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x158B2Cu;
    {
        const bool branch_taken_0x158b2c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x158b2c) {
            ctx->pc = 0x158B38u;
            return;
        }
    }
    ctx->pc = 0x158B34u;
    // 0x158b34: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x158b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    ctx->pc = 0x158b38u;
}
