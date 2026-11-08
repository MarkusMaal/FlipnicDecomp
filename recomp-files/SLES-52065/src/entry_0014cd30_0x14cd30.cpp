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

// Function: entry_0014cd30
// Address: 0x14cd30 - 0x14cd7c
void entry_0014cd30_0x14cd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cd30_0x14cd30");
#endif

    switch (ctx->pc) {
        case 0x14cd5cu: goto label_14cd5c;
        case 0x14cd70u: goto label_14cd70;
        default: break;
    }

    ctx->pc = 0x14cd30u;

label_14cd30:
    // 0x14cd30: 0x8e2600d8  lw          $a2, 0xD8($s1)
    ctx->pc = 0x14cd30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_14cd34:
    // 0x14cd34: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x14cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_14cd38:
    // 0x14cd38: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x14cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_14cd3c:
    // 0x14cd3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14cd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14cd40:
    // 0x14cd40: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x14cd40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_14cd44:
    // 0x14cd44: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14cd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_14cd48:
    // 0x14cd48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14cd4c:
    // 0x14cd4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14cd50:
    // 0x14cd50: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x14cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_14cd54:
    // 0x14cd54: 0xc07d376  jal         func_1F4DD8
label_14cd58:
    if (ctx->pc == 0x14CD58u) {
        ctx->pc = 0x14CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD54u;
        // 0x14cd58: 0x533021  addu        $a2, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CD5Cu;
        goto label_14cd5c;
    }
    ctx->pc = 0x14CD54u;
    SET_GPR_U32(ctx, 31, 0x14CD5Cu);
    ctx->pc = 0x14CD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CD54u;
    // 0x14cd58: 0x533021  addu        $a2, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DD8u, 0x14CD54u, 0x14CD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD5Cu;
label_14cd5c:
    // 0x14cd5c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x14cd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_14cd60:
    // 0x14cd60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14cd60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14cd64:
    // 0x14cd64: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x14cd64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_14cd68:
    // 0x14cd68: 0x320f809  jalr        $t9
label_14cd6c:
    if (ctx->pc == 0x14CD6Cu) {
        ctx->pc = 0x14CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD68u;
        // 0x14cd6c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CD70u;
        goto label_14cd70;
    }
    ctx->pc = 0x14CD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14CD70u);
        ctx->pc = 0x14CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD68u;
        // 0x14cd6c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CD68u, 0x14CD70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CD70u;
label_14cd70:
    // 0x14cd70: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x14cd70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_14cd74:
    // 0x14cd74: 0x1692ffee  bne         $s4, $s2, . + 4 + (-0x12 << 2)
label_14cd78:
    if (ctx->pc == 0x14CD78u) {
        ctx->pc = 0x14CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD74u;
        // 0x14cd78: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CD7Cu;
        goto label_fallthrough_0x14cd74;
    }
    ctx->pc = 0x14CD74u;
    {
        const bool branch_taken_0x14cd74 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 18));
        ctx->pc = 0x14CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD74u;
        // 0x14cd78: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cd74) {
            ctx->pc = 0x14CD30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14cd30;
        }
    }
label_fallthrough_0x14cd74:
    ctx->pc = 0x14CD7Cu;
}
