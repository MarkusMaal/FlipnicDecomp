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

// Function: entry_00132074
// Address: 0x132074 - 0x132090
void entry_00132074_0x132074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132074_0x132074");
#endif

    ctx->pc = 0x132074u;

    // 0x132074: 0x0  nop
    ctx->pc = 0x132074u;
    // NOP
    // 0x132078: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x132078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13207c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x13207cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x132080: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x132080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x132084: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x132084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x132088: 0x1470ffca  bne         $v1, $s0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x132088u;
    {
        const bool branch_taken_0x132088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x132088) {
            ctx->pc = 0x131FB4u;
            return;
        }
    }
    ctx->pc = 0x132090u;
}
