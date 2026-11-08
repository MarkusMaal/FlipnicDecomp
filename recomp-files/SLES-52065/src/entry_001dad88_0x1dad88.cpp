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

// Function: entry_001dad88
// Address: 0x1dad88 - 0x1dadd8
void entry_001dad88_0x1dad88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dad88_0x1dad88");
#endif

    switch (ctx->pc) {
        case 0x1dad90u: goto label_1dad90;
        default: break;
    }

    ctx->pc = 0x1dad88u;

    // 0x1dad88: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1DAD88u;
    SET_GPR_U32(ctx, 31, 0x1DAD90u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1DAD88u, 0x1DAD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAD90u;
label_1dad90:
    // 0x1dad90: 0x200c82d  daddu       $t9, $s0, $zero
    ctx->pc = 0x1dad90u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad94: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1dad94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1dad98: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1dad98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1dad9c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DAD9Cu;
    {
        const bool branch_taken_0x1dad9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD9Cu;
        // 0x1dada0: 0x8fa80004  lw          $t0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad9c) {
            ctx->pc = 0x1DAE00u;
            return;
        }
    }
    ctx->pc = 0x1DADA4u;
    // 0x1dada4: 0x1910c0  sll         $v0, $t9, 3
    ctx->pc = 0x1dada4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
    // 0x1dada8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dada8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dadac: 0x591023  subu        $v0, $v0, $t9
    ctx->pc = 0x1dadacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x1dadb0: 0x24687330  addiu       $t0, $v1, 0x7330
    ctx->pc = 0x1dadb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1dadb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dadb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dadb8: 0x25170004  addiu       $s7, $t0, 0x4
    ctx->pc = 0x1dadb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1dadbc: 0x591021  addu        $v0, $v0, $t9
    ctx->pc = 0x1dadbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x1dadc0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dadc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dadc4: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x1dadc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1dadc8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1dadc8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dadcc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1dadccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1dadd0: 0x60c02d  daddu       $t8, $v1, $zero
    ctx->pc = 0x1dadd0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dadd4: 0x0  nop
    ctx->pc = 0x1dadd4u;
    // NOP
    ctx->pc = 0x1dadd8u;
}
