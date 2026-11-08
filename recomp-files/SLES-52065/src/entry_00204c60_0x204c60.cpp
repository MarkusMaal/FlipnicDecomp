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

// Function: entry_00204c60
// Address: 0x204c60 - 0x204cbc
void entry_00204c60_0x204c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204c60_0x204c60");
#endif

    switch (ctx->pc) {
        case 0x204cb4u: goto label_204cb4;
        default: break;
    }

    ctx->pc = 0x204c60u;

    // 0x204c60: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x204c60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x204c64: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x204c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x204c68: 0xa3a201c1  sb          $v0, 0x1C1($sp)
    ctx->pc = 0x204c68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 2));
    // 0x204c6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x204c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204c70: 0xa3a401c0  sb          $a0, 0x1C0($sp)
    ctx->pc = 0x204c70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 4));
    // 0x204c74: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x204c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x204c78: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x204c78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x204c7c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x204c7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x204c80: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x204c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x204c84: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204c88: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x204c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204c8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x204c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204c90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204c94: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x204c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x204c98: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204c98u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204c9c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x204c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204ca0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204CA0u;
    {
        const bool branch_taken_0x204ca0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CA0u;
        // 0x204ca4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ca0) {
            ctx->pc = 0x204CBCu;
            return;
        }
    }
    ctx->pc = 0x204CA8u;
    // 0x204ca8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204cac: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204CACu;
    SET_GPR_U32(ctx, 31, 0x204CB4u);
    ctx->pc = 0x204CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204CACu;
    // 0x204cb0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204CACu, 0x204CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204CB4u;
label_204cb4:
    // 0x204cb4: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x204CB4u;
    {
        const bool branch_taken_0x204cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CB4u;
        // 0x204cb8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204cb4) {
            ctx->pc = 0x204F78u;
            return;
        }
    }
    ctx->pc = 0x204CBCu;
}
