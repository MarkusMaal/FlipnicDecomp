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

// Function: caseD_13
// Address: 0x1c281c - 0x1c2838
void caseD_13_0x1c281c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_13_0x1c281c");
#endif

    ctx->pc = 0x1c281cu;

    // 0x1c281c: 0x8e2301e8  lw          $v1, 0x1E8($s1)
    ctx->pc = 0x1c281cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x1c2820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2824: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2824u;
    {
        const bool branch_taken_0x1c2824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2824u;
        // 0x1c2828: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2824) {
            ctx->pc = 0x1C2838u;
            return;
        }
    }
    ctx->pc = 0x1C282Cu;
    // 0x1c282c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1c282cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c2830: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x1C2830u;
    {
        const bool branch_taken_0x1c2830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2830u;
        // 0x1c2834: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2830) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2838u;
}
