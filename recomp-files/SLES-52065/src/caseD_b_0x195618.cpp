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

// Function: caseD_b
// Address: 0x195618 - 0x19563c
void caseD_b_0x195618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x195618");
#endif

    ctx->pc = 0x195618u;

    // 0x195618: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x195618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x19561c: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x19561cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x195620: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x195620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x195624: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x195624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x195628: 0x8ca42c1c  lw          $a0, 0x2C1C($a1)
    ctx->pc = 0x195628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11292)));
    // 0x19562c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19562cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x195630: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x195630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x195634: 0x100001cb  b           . + 4 + (0x1CB << 2)
    ctx->pc = 0x195634u;
    {
        const bool branch_taken_0x195634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195634u;
        // 0x195638: 0xa0600041  sb          $zero, 0x41($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 65), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195634) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x19563Cu;
}
