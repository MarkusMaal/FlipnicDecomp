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

// Function: caseD_11
// Address: 0x1c285c - 0x1c2878
void caseD_11_0x1c285c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_11_0x1c285c");
#endif

    ctx->pc = 0x1c285cu;

    // 0x1c285c: 0x8e2301e8  lw          $v1, 0x1E8($s1)
    ctx->pc = 0x1c285cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x1c2860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2864: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2864u;
    {
        const bool branch_taken_0x1c2864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2864u;
        // 0x1c2868: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2864) {
            ctx->pc = 0x1C2878u;
            return;
        }
    }
    ctx->pc = 0x1C286Cu;
    // 0x1c286c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c286cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c2870: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x1C2870u;
    {
        const bool branch_taken_0x1c2870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2870u;
        // 0x1c2874: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2870) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2878u;
}
