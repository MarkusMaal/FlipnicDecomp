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

// Function: entry_00196b68
// Address: 0x196b68 - 0x196b9c
void entry_00196b68_0x196b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196b68_0x196b68");
#endif

    ctx->pc = 0x196b68u;

    // 0x196b68: 0x8ea3067c  lw          $v1, 0x67C($s5)
    ctx->pc = 0x196b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1660)));
    // 0x196b6c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x196B6Cu;
    {
        const bool branch_taken_0x196b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x196b6c) {
            ctx->pc = 0x196BA0u;
            return;
        }
    }
    ctx->pc = 0x196B74u;
    // 0x196b74: 0x8c640320  lw          $a0, 0x320($v1)
    ctx->pc = 0x196b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
    // 0x196b78: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x196b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196b7c: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x196B7Cu;
    {
        const bool branch_taken_0x196b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x196b7c) {
            ctx->pc = 0x196B9Cu;
            return;
        }
    }
    ctx->pc = 0x196B84u;
    // 0x196b84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x196b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196b88: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x196B88u;
    {
        const bool branch_taken_0x196b88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x196b88) {
            ctx->pc = 0x196B9Cu;
            return;
        }
    }
    ctx->pc = 0x196B90u;
    // 0x196b90: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x196b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196b94: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x196B94u;
    {
        const bool branch_taken_0x196b94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x196b94) {
            ctx->pc = 0x196BA0u;
            return;
        }
    }
    ctx->pc = 0x196B9Cu;
}
