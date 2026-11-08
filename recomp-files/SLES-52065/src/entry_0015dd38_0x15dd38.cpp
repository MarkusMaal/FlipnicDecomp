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

// Function: entry_0015dd38
// Address: 0x15dd38 - 0x15dd64
void entry_0015dd38_0x15dd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015dd38_0x15dd38");
#endif

    ctx->pc = 0x15dd38u;

    // 0x15dd38: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x15dd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x15dd3c: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x15dd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x15dd40: 0xafa30170  sw          $v1, 0x170($sp)
    ctx->pc = 0x15dd40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 3));
    // 0x15dd44: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x15dd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x15dd48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15dd4c: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x15dd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x15dd50: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x15dd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x15dd54: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x15dd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x15dd58: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x15dd58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15dd5c: 0x1460fefb  bnez        $v1, . + 4 + (-0x105 << 2)
    ctx->pc = 0x15DD5Cu;
    {
        const bool branch_taken_0x15dd5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15dd5c) {
            ctx->pc = 0x15D94Cu;
            return;
        }
    }
    ctx->pc = 0x15DD64u;
}
