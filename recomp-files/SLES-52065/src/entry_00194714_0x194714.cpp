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

// Function: entry_00194714
// Address: 0x194714 - 0x194758
void entry_00194714_0x194714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194714_0x194714");
#endif

    switch (ctx->pc) {
        case 0x194730u: goto label_194730;
        default: break;
    }

    ctx->pc = 0x194714u;

    // 0x194714: 0x0  nop
    ctx->pc = 0x194714u;
    // NOP
    // 0x194718: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x194718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19471c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x19471cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x194720: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x194720u;
    {
        const bool branch_taken_0x194720 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x194724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194720u;
        // 0x194724: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194720) {
            ctx->pc = 0x194758u;
            return;
        }
    }
    ctx->pc = 0x194728u;
    // 0x194728: 0xc063f7c  jal         func_18FDF0
    ctx->pc = 0x194728u;
    SET_GPR_U32(ctx, 31, 0x194730u);
    ctx->pc = 0x19472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194728u;
    // 0x19472c: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x194728u, 0x194730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194730u;
label_194730:
    // 0x194730: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x194730u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x194734: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x194734u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x194738: 0x706210a8  pceqw       $v0, $v1, $v0
    ctx->pc = 0x194738u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x19473c: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x19473cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x194740: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x194740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x194744: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x194744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x194748: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x194748u;
    {
        const bool branch_taken_0x194748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194748) {
            ctx->pc = 0x194758u;
            return;
        }
    }
    ctx->pc = 0x194750u;
    // 0x194750: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x194750u;
    {
        const bool branch_taken_0x194750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194750) {
            ctx->pc = 0x194778u;
            return;
        }
    }
    ctx->pc = 0x194758u;
}
