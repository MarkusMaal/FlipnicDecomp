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

// Function: entry_0013effc
// Address: 0x13effc - 0x13f028
void entry_0013effc_0x13effc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013effc_0x13effc");
#endif

    ctx->pc = 0x13effcu;

    // 0x13effc: 0x0  nop
    ctx->pc = 0x13effcu;
    // NOP
    // 0x13f000: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13f000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13f004: 0xa060018c  sb          $zero, 0x18C($v1)
    ctx->pc = 0x13f004u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 396), (uint8_t)GPR_U32(ctx, 0));
    // 0x13f008: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x13f008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x13f00c: 0x8f8385c8  lw          $v1, -0x7A38($gp)
    ctx->pc = 0x13f00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936008)));
    // 0x13f010: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x13f010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x13f014: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x13f014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x13f018: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13f018u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13f01c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13f01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13f020: 0x1603ffe3  bne         $s0, $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x13F020u;
    {
        const bool branch_taken_0x13f020 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x13f020) {
            ctx->pc = 0x13EFB0u;
            return;
        }
    }
    ctx->pc = 0x13F028u;
}
