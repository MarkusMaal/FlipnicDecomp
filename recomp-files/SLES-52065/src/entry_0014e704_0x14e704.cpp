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

// Function: entry_0014e704
// Address: 0x14e704 - 0x14e72c
void entry_0014e704_0x14e704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e704_0x14e704");
#endif

    ctx->pc = 0x14e704u;

    // 0x14e704: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x14e704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14e708: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x14e708u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e70c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x14e70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x14e710: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14e710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14e714: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14e714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14e718: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x14e718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14e71c: 0x211082b  sltu        $at, $s0, $s1
    ctx->pc = 0x14e71cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14e720: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x14E720u;
    {
        const bool branch_taken_0x14e720 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e720) {
            ctx->pc = 0x14E74Cu;
            return;
        }
    }
    ctx->pc = 0x14E728u;
    // 0x14e728: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x14e728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->pc = 0x14e72cu;
}
