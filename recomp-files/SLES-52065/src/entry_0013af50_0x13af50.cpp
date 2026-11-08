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

// Function: entry_0013af50
// Address: 0x13af50 - 0x13af70
void entry_0013af50_0x13af50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013af50_0x13af50");
#endif

    ctx->pc = 0x13af50u;

    // 0x13af50: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x13af50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13af54: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x13af54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x13af58: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x13af58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13af5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x13af5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13af60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13af60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13af64: 0x14a2fff9  bne         $a1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13AF64u;
    {
        const bool branch_taken_0x13af64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x13af64) {
            ctx->pc = 0x13AF4Cu;
            return;
        }
    }
    ctx->pc = 0x13AF6Cu;
    // 0x13af6c: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x13af6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    ctx->pc = 0x13af70u;
}
