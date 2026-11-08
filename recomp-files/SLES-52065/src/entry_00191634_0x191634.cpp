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

// Function: entry_00191634
// Address: 0x191634 - 0x191650
void entry_00191634_0x191634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191634_0x191634");
#endif

    ctx->pc = 0x191634u;

    // 0x191634: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x191634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x191638: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x191638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x19163c: 0x8c632c10  lw          $v1, 0x2C10($v1)
    ctx->pc = 0x19163cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11280)));
    // 0x191640: 0x10430015  beq         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x191640u;
    {
        const bool branch_taken_0x191640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x191640) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x191648u;
    // 0x191648: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x191648u;
    {
        const bool branch_taken_0x191648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191648u;
        // 0x19164c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191648) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x191650u;
}
