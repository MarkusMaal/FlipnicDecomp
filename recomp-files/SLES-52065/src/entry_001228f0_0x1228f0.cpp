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

// Function: entry_001228f0
// Address: 0x1228f0 - 0x122910
void entry_001228f0_0x1228f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001228f0_0x1228f0");
#endif

    ctx->pc = 0x1228f0u;

    // 0x1228f0: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x1228f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1228f4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1228f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1228f8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1228f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1228fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1228fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x122900: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x122900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x122904: 0x14a2fff9  bne         $a1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x122904u;
    {
        const bool branch_taken_0x122904 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x122904) {
            ctx->pc = 0x1228ECu;
            return;
        }
    }
    ctx->pc = 0x12290Cu;
    // 0x12290c: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x12290cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    ctx->pc = 0x122910u;
}
