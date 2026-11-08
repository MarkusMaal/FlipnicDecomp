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

// Function: entry_0010afec
// Address: 0x10afec - 0x10b028
void entry_0010afec_0x10afec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010afec_0x10afec");
#endif

    switch (ctx->pc) {
        case 0x10b000u: goto label_10b000;
        default: break;
    }

    ctx->pc = 0x10afecu;

label_10afec:
    // 0x10afec: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x10afecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_10aff0:
    // 0x10aff0: 0x8c59042c  lw          $t9, 0x42C($v0)
    ctx->pc = 0x10aff0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1068)));
label_10aff4:
    // 0x10aff4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x10aff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_10aff8:
    // 0x10aff8: 0x320f809  jalr        $t9
label_10affc:
    if (ctx->pc == 0x10AFFCu) {
        ctx->pc = 0x10AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AFF8u;
        // 0x10affc: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B000u;
        goto label_10b000;
    }
    ctx->pc = 0x10AFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B000u);
        ctx->pc = 0x10AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AFF8u;
        // 0x10affc: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AFF8u, 0x10B000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B000u;
label_10b000:
    // 0x10b000: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10b000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10b004:
    // 0x10b004: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x10b004u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_10b008:
    // 0x10b008: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_10b00c:
    if (ctx->pc == 0x10B00Cu) {
        ctx->pc = 0x10B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B008u;
        // 0x10b00c: 0x26310410  addiu       $s1, $s1, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B010u;
        goto label_10b010;
    }
    ctx->pc = 0x10B008u;
    {
        const bool branch_taken_0x10b008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B008u;
        // 0x10b00c: 0x26310410  addiu       $s1, $s1, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b008) {
            ctx->pc = 0x10AFECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10afec;
        }
    }
    ctx->pc = 0x10B010u;
label_10b010:
    // 0x10b010: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10b010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10b014:
    // 0x10b014: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10b014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10b018:
    // 0x10b018: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10b018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10b01c:
    // 0x10b01c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10b01cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10b020:
    // 0x10b020: 0x3e00008  jr          $ra
label_10b024:
    if (ctx->pc == 0x10B024u) {
        ctx->pc = 0x10B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B020u;
        // 0x10b024: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B028u;
        goto label_fallthrough_0x10b020;
    }
    ctx->pc = 0x10B020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B020u;
        // 0x10b024: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10b020:
    ctx->pc = 0x10B028u;
}
