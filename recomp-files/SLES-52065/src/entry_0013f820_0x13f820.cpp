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

// Function: entry_0013f820
// Address: 0x13f820 - 0x13f858
void entry_0013f820_0x13f820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f820_0x13f820");
#endif

    ctx->pc = 0x13f820u;

    // 0x13f820: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x13f820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13f824: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13f824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13f828: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x13f828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x13f82c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x13f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13f830: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x13f830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13f834: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x13f834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x13f838: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13f838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13f83c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f840: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x13f840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x13f844: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13f844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13f848: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13f848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13f84c: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13F84Cu;
    {
        const bool branch_taken_0x13f84c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x13f84c) {
            ctx->pc = 0x13F858u;
            return;
        }
    }
    ctx->pc = 0x13F854u;
    // 0x13f854: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x13f854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x13f858u;
}
