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

// Function: entry_0014113c
// Address: 0x14113c - 0x141180
void entry_0014113c_0x14113c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014113c_0x14113c");
#endif

    ctx->pc = 0x14113cu;

    // 0x14113c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14113cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x141140: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x141140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x141144: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x141144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x141148: 0x8fa301a4  lw          $v1, 0x1A4($sp)
    ctx->pc = 0x141148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x14114c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14114cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x141150: 0xafa301a4  sw          $v1, 0x1A4($sp)
    ctx->pc = 0x141150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 3));
    // 0x141154: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x141154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x141158: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x141158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14115c: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x14115cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x141160: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x141160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x141164: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x141164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x141168: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x141168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x14116c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14116cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x141170: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x141170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x141174: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x141174u;
    {
        const bool branch_taken_0x141174 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x141174) {
            ctx->pc = 0x141180u;
            return;
        }
    }
    ctx->pc = 0x14117Cu;
    // 0x14117c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x14117cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x141180u;
}
