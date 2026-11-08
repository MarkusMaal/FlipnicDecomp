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

// Function: caseD_c
// Address: 0x19563c - 0x195668
void caseD_c_0x19563c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x19563c");
#endif

    ctx->pc = 0x19563cu;

    // 0x19563c: 0x0  nop
    ctx->pc = 0x19563cu;
    // NOP
    // 0x195640: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x195640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x195644: 0x8f8685f4  lw          $a2, -0x7A0C($gp)
    ctx->pc = 0x195644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x195648: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x195648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19564c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x19564cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x195650: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x195650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x195654: 0x8cc42c1c  lw          $a0, 0x2C1C($a2)
    ctx->pc = 0x195654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11292)));
    // 0x195658: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x195658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19565c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19565cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x195660: 0x100001c0  b           . + 4 + (0x1C0 << 2)
    ctx->pc = 0x195660u;
    {
        const bool branch_taken_0x195660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195660u;
        // 0x195664: 0xa0650041  sb          $a1, 0x41($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 65), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195660) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195668u;
}
