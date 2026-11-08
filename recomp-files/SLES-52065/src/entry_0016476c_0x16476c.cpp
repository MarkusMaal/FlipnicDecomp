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

// Function: entry_0016476c
// Address: 0x16476c - 0x164788
void entry_0016476c_0x16476c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016476c_0x16476c");
#endif

    ctx->pc = 0x16476cu;

    // 0x16476c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16476cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164770: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164774: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x164774u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x164778: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164778u;
    {
        const bool branch_taken_0x164778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x164778) {
            ctx->pc = 0x164788u;
            return;
        }
    }
    ctx->pc = 0x164780u;
    // 0x164780: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x164780u;
    {
        const bool branch_taken_0x164780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164780) {
            ctx->pc = 0x16478Cu;
            return;
        }
    }
    ctx->pc = 0x164788u;
}
