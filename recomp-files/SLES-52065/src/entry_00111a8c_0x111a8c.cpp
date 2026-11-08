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

// Function: entry_00111a8c
// Address: 0x111a8c - 0x111ad0
void entry_00111a8c_0x111a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111a8c_0x111a8c");
#endif

    switch (ctx->pc) {
        case 0x111ac0u: goto label_111ac0;
        default: break;
    }

    ctx->pc = 0x111a8cu;

label_111a8c:
    // 0x111a8c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x111a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_111a90:
    // 0x111a90: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x111a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_111a94:
    // 0x111a94: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x111a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_111a98:
    // 0x111a98: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x111a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_111a9c:
    // 0x111a9c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x111a9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_111aa0:
    // 0x111aa0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_111aa4:
    // 0x111aa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_111aa8:
    // 0x111aa8: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x111aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_111aac:
    // 0x111aac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x111aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_111ab0:
    // 0x111ab0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x111ab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_111ab4:
    // 0x111ab4: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x111ab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_111ab8:
    // 0x111ab8: 0x320f809  jalr        $t9
label_111abc:
    if (ctx->pc == 0x111ABCu) {
        ctx->pc = 0x111ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AB8u;
        // 0x111abc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111AC0u;
        goto label_111ac0;
    }
    ctx->pc = 0x111AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x111AC0u);
        ctx->pc = 0x111ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AB8u;
        // 0x111abc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111AB8u, 0x111AC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111AC0u;
label_111ac0:
    // 0x111ac0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x111ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_111ac4:
    // 0x111ac4: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x111ac4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_111ac8:
    // 0x111ac8: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_111acc:
    if (ctx->pc == 0x111ACCu) {
        ctx->pc = 0x111ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AC8u;
        // 0x111acc: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111AD0u;
        goto label_fallthrough_0x111ac8;
    }
    ctx->pc = 0x111AC8u;
    {
        const bool branch_taken_0x111ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x111ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AC8u;
        // 0x111acc: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ac8) {
            ctx->pc = 0x111A8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111a8c;
        }
    }
label_fallthrough_0x111ac8:
    ctx->pc = 0x111AD0u;
}
