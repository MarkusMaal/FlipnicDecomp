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

// Function: caseD_26
// Address: 0x1c2784 - 0x1c279c
void caseD_26_0x1c2784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_26_0x1c2784");
#endif

    ctx->pc = 0x1c2784u;

    // 0x1c2784: 0x8e2301e8  lw          $v1, 0x1E8($s1)
    ctx->pc = 0x1c2784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x1c2788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c278c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C278Cu;
    {
        const bool branch_taken_0x1c278c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C278Cu;
        // 0x1c2790: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c278c) {
            ctx->pc = 0x1C279Cu;
            return;
        }
    }
    ctx->pc = 0x1C2794u;
    // 0x1c2794: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x1C2794u;
    {
        const bool branch_taken_0x1c2794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2794u;
        // 0x1c2798: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2794) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C279Cu;
}
