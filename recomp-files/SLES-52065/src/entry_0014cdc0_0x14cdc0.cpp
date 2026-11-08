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

// Function: entry_0014cdc0
// Address: 0x14cdc0 - 0x14ce34
void entry_0014cdc0_0x14cdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cdc0_0x14cdc0");
#endif

    switch (ctx->pc) {
        case 0x14cde8u: goto label_14cde8;
        case 0x14ce14u: goto label_14ce14;
        case 0x14ce28u: goto label_14ce28;
        default: break;
    }

    ctx->pc = 0x14cdc0u;

label_14cdc0:
    // 0x14cdc0: 0x8e2500dc  lw          $a1, 0xDC($s1)
    ctx->pc = 0x14cdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_14cdc4:
    // 0x14cdc4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14cdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_14cdc8:
    // 0x14cdc8: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x14cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_14cdcc:
    // 0x14cdcc: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x14cdccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_14cdd0:
    // 0x14cdd0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14cdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_14cdd4:
    // 0x14cdd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14cdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14cdd8:
    // 0x14cdd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14cddc:
    // 0x14cddc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x14cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_14cde0:
    // 0x14cde0: 0xc07d38e  jal         func_1F4E38
label_14cde4:
    if (ctx->pc == 0x14CDE4u) {
        ctx->pc = 0x14CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CDE0u;
        // 0x14cde4: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CDE8u;
        goto label_14cde8;
    }
    ctx->pc = 0x14CDE0u;
    SET_GPR_U32(ctx, 31, 0x14CDE8u);
    ctx->pc = 0x14CDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CDE0u;
    // 0x14cde4: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x14CDE0u, 0x14CDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDE8u;
label_14cde8:
    // 0x14cde8: 0x8e2600dc  lw          $a2, 0xDC($s1)
    ctx->pc = 0x14cde8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_14cdec:
    // 0x14cdec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x14cdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_14cdf0:
    // 0x14cdf0: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x14cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_14cdf4:
    // 0x14cdf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14cdf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14cdf8:
    // 0x14cdf8: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x14cdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_14cdfc:
    // 0x14cdfc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_14ce00:
    // 0x14ce00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14ce04:
    // 0x14ce04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14ce08:
    // 0x14ce08: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x14ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_14ce0c:
    // 0x14ce0c: 0xc07d376  jal         func_1F4DD8
label_14ce10:
    if (ctx->pc == 0x14CE10u) {
        ctx->pc = 0x14CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE0Cu;
        // 0x14ce10: 0x533021  addu        $a2, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CE14u;
        goto label_14ce14;
    }
    ctx->pc = 0x14CE0Cu;
    SET_GPR_U32(ctx, 31, 0x14CE14u);
    ctx->pc = 0x14CE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CE0Cu;
    // 0x14ce10: 0x533021  addu        $a2, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DD8u, 0x14CE0Cu, 0x14CE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE14u;
label_14ce14:
    // 0x14ce14: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x14ce14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_14ce18:
    // 0x14ce18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14ce18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14ce1c:
    // 0x14ce1c: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x14ce1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_14ce20:
    // 0x14ce20: 0x320f809  jalr        $t9
label_14ce24:
    if (ctx->pc == 0x14CE24u) {
        ctx->pc = 0x14CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE20u;
        // 0x14ce24: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CE28u;
        goto label_14ce28;
    }
    ctx->pc = 0x14CE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14CE28u);
        ctx->pc = 0x14CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE20u;
        // 0x14ce24: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CE20u, 0x14CE28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CE28u;
label_14ce28:
    // 0x14ce28: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x14ce28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_14ce2c:
    // 0x14ce2c: 0x1692ffe4  bne         $s4, $s2, . + 4 + (-0x1C << 2)
label_14ce30:
    if (ctx->pc == 0x14CE30u) {
        ctx->pc = 0x14CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE2Cu;
        // 0x14ce30: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CE34u;
        goto label_fallthrough_0x14ce2c;
    }
    ctx->pc = 0x14CE2Cu;
    {
        const bool branch_taken_0x14ce2c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 18));
        ctx->pc = 0x14CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE2Cu;
        // 0x14ce30: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ce2c) {
            ctx->pc = 0x14CDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14cdc0;
        }
    }
label_fallthrough_0x14ce2c:
    ctx->pc = 0x14CE34u;
}
