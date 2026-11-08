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

// Function: entry_001a9a00
// Address: 0x1a9a00 - 0x1a9a5c
void entry_001a9a00_0x1a9a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9a00_0x1a9a00");
#endif

    switch (ctx->pc) {
        case 0x1a9a28u: goto label_1a9a28;
        default: break;
    }

    ctx->pc = 0x1a9a00u;

label_1a9a00:
    // 0x1a9a00: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x1a9a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1a9a04:
    // 0x1a9a04: 0x8c430680  lw          $v1, 0x680($v0)
    ctx->pc = 0x1a9a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1664)));
label_1a9a08:
    // 0x1a9a08: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a9a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a9a0c:
    // 0x1a9a0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a9a10:
    // 0x1a9a10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9a14:
    // 0x1a9a14: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a9a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a9a18:
    // 0x1a9a18: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a9a18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a9a1c:
    // 0x1a9a1c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1a9a1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1a9a20:
    // 0x1a9a20: 0x320f809  jalr        $t9
label_1a9a24:
    if (ctx->pc == 0x1A9A24u) {
        ctx->pc = 0x1A9A28u;
        goto label_1a9a28;
    }
    ctx->pc = 0x1A9A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A9A28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9A20u, 0x1A9A28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9A28u;
label_1a9a28:
    // 0x1a9a28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a9a28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a9a2c:
    // 0x1a9a2c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1a9a2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_1a9a30:
    // 0x1a9a30: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1a9a34:
    if (ctx->pc == 0x1A9A34u) {
        ctx->pc = 0x1A9A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A30u;
        // 0x1a9a34: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9A38u;
        goto label_1a9a38;
    }
    ctx->pc = 0x1A9A30u;
    {
        const bool branch_taken_0x1a9a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A30u;
        // 0x1a9a34: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a30) {
            ctx->pc = 0x1A9A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9a00;
        }
    }
    ctx->pc = 0x1A9A38u;
label_1a9a38:
    // 0x1a9a38: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a9a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a9a3c:
    // 0x1a9a3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a9a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a9a40:
    // 0x1a9a40: 0xae820690  sw          $v0, 0x690($s4)
    ctx->pc = 0x1a9a40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1680), GPR_U32(ctx, 2));
label_1a9a44:
    // 0x1a9a44: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1a9a44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1a9a48:
    // 0x1a9a48: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_1a9a4c:
    if (ctx->pc == 0x1A9A4Cu) {
        ctx->pc = 0x1A9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A48u;
        // 0x1a9a4c: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9A50u;
        goto label_1a9a50;
    }
    ctx->pc = 0x1A9A48u;
    {
        const bool branch_taken_0x1a9a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A48u;
        // 0x1a9a4c: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a48) {
            ctx->pc = 0x1A9990u;
            return;
        }
    }
    ctx->pc = 0x1A9A50u;
label_1a9a50:
    // 0x1a9a50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a9a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9a54:
    // 0x1a9a54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a9a54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9a58:
    // 0x1a9a58: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a9a58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a9a5cu;
}
