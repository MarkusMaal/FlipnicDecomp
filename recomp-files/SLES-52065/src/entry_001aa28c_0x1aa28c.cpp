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

// Function: entry_001aa28c
// Address: 0x1aa28c - 0x1aa2f0
void entry_001aa28c_0x1aa28c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa28c_0x1aa28c");
#endif

    switch (ctx->pc) {
        case 0x1aa2b8u: goto label_1aa2b8;
        case 0x1aa2e0u: goto label_1aa2e0;
        default: break;
    }

    ctx->pc = 0x1aa28cu;

label_1aa28c:
    // 0x1aa28c: 0x2911821  addu        $v1, $s4, $s1
    ctx->pc = 0x1aa28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1aa290:
    // 0x1aa290: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1aa290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1aa294:
    // 0x1aa294: 0x247206b8  addiu       $s2, $v1, 0x6B8
    ctx->pc = 0x1aa294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1720));
label_1aa298:
    // 0x1aa298: 0x8c6306b8  lw          $v1, 0x6B8($v1)
    ctx->pc = 0x1aa298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1720)));
label_1aa29c:
    // 0x1aa29c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1aa29cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1aa2a0:
    // 0x1aa2a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aa2a4:
    // 0x1aa2a4: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1aa2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1aa2a8:
    // 0x1aa2a8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1aa2a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1aa2ac:
    // 0x1aa2ac: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1aa2acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1aa2b0:
    // 0x1aa2b0: 0x320f809  jalr        $t9
label_1aa2b4:
    if (ctx->pc == 0x1AA2B4u) {
        ctx->pc = 0x1AA2B8u;
        goto label_1aa2b8;
    }
    ctx->pc = 0x1AA2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AA2B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA2B0u, 0x1AA2B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA2B8u;
label_1aa2b8:
    // 0x1aa2b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1aa2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1aa2bc:
    // 0x1aa2bc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1aa2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1aa2c0:
    // 0x1aa2c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1aa2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1aa2c4:
    // 0x1aa2c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aa2c8:
    // 0x1aa2c8: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1aa2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1aa2cc:
    // 0x1aa2cc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1aa2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1aa2d0:
    // 0x1aa2d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1aa2d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aa2d4:
    // 0x1aa2d4: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x1aa2d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_1aa2d8:
    // 0x1aa2d8: 0x320f809  jalr        $t9
label_1aa2dc:
    if (ctx->pc == 0x1AA2DCu) {
        ctx->pc = 0x1AA2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2D8u;
        // 0x1aa2dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA2E0u;
        goto label_1aa2e0;
    }
    ctx->pc = 0x1AA2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AA2E0u);
        ctx->pc = 0x1AA2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2D8u;
        // 0x1aa2dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA2D8u, 0x1AA2E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA2E0u;
label_1aa2e0:
    // 0x1aa2e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1aa2e4:
    // 0x1aa2e4: 0x213182a  slt         $v1, $s0, $s3
    ctx->pc = 0x1aa2e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1aa2e8:
    // 0x1aa2e8: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_1aa2ec:
    if (ctx->pc == 0x1AA2ECu) {
        ctx->pc = 0x1AA2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2E8u;
        // 0x1aa2ec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA2F0u;
        goto label_fallthrough_0x1aa2e8;
    }
    ctx->pc = 0x1AA2E8u;
    {
        const bool branch_taken_0x1aa2e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2E8u;
        // 0x1aa2ec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa2e8) {
            ctx->pc = 0x1AA28Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa28c;
        }
    }
label_fallthrough_0x1aa2e8:
    ctx->pc = 0x1AA2F0u;
}
