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

// Function: caseD_8
// Address: 0x1c2754 - 0x1c2770
void caseD_8_0x1c2754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1c2754");
#endif

    ctx->pc = 0x1c2754u;

    // 0x1c2754: 0x8e2301e4  lw          $v1, 0x1E4($s1)
    ctx->pc = 0x1c2754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x1c2758: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c275c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C275Cu;
    {
        const bool branch_taken_0x1c275c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C275Cu;
        // 0x1c2760: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c275c) {
            ctx->pc = 0x1C2770u;
            return;
        }
    }
    ctx->pc = 0x1C2764u;
    // 0x1c2764: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x1c2764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1c2768: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x1C2768u;
    {
        const bool branch_taken_0x1c2768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2768u;
        // 0x1c276c: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2768) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2770u;
}
