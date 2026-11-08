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

// Function: entry_001a9e38
// Address: 0x1a9e38 - 0x1a9ea8
void entry_001a9e38_0x1a9e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9e38_0x1a9e38");
#endif

    switch (ctx->pc) {
        case 0x1a9e60u: goto label_1a9e60;
        case 0x1a9e84u: goto label_1a9e84;
        case 0x1a9ea0u: goto label_1a9ea0;
        default: break;
    }

    ctx->pc = 0x1a9e38u;

label_1a9e38:
    // 0x1a9e38: 0x2b3a021  addu        $s4, $s5, $s3
    ctx->pc = 0x1a9e38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_1a9e3c:
    // 0x1a9e3c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a9e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a9e40:
    // 0x1a9e40: 0x8e830678  lw          $v1, 0x678($s4)
    ctx->pc = 0x1a9e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
label_1a9e44:
    // 0x1a9e44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a9e48:
    // 0x1a9e48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9e4c:
    // 0x1a9e4c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a9e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a9e50:
    // 0x1a9e50: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a9e50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a9e54:
    // 0x1a9e54: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1a9e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1a9e58:
    // 0x1a9e58: 0x320f809  jalr        $t9
label_1a9e5c:
    if (ctx->pc == 0x1A9E5Cu) {
        ctx->pc = 0x1A9E60u;
        goto label_1a9e60;
    }
    ctx->pc = 0x1A9E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A9E60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9E58u, 0x1A9E60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9E60u;
label_1a9e60:
    // 0x1a9e60: 0x8e83067c  lw          $v1, 0x67C($s4)
    ctx->pc = 0x1a9e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1660)));
label_1a9e64:
    // 0x1a9e64: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a9e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a9e68:
    // 0x1a9e68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a9e6c:
    // 0x1a9e6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9e70:
    // 0x1a9e70: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a9e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a9e74:
    // 0x1a9e74: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a9e74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a9e78:
    // 0x1a9e78: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1a9e78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1a9e7c:
    // 0x1a9e7c: 0x320f809  jalr        $t9
label_1a9e80:
    if (ctx->pc == 0x1A9E80u) {
        ctx->pc = 0x1A9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E7Cu;
        // 0x1a9e80: 0x2691067c  addiu       $s1, $s4, 0x67C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 1660));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9E84u;
        goto label_1a9e84;
    }
    ctx->pc = 0x1A9E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A9E84u);
        ctx->pc = 0x1A9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E7Cu;
        // 0x1a9e80: 0x2691067c  addiu       $s1, $s4, 0x67C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 1660));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9E7Cu, 0x1A9E84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9E84u;
label_1a9e84:
    // 0x1a9e84: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a9e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a9e88:
    // 0x1a9e88: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a9e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a9e8c:
    // 0x1a9e8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a9e90:
    // 0x1a9e90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9e94:
    // 0x1a9e94: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a9e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a9e98:
    // 0x1a9e98: 0xc042570  jal         func_1095C0
label_1a9e9c:
    if (ctx->pc == 0x1A9E9Cu) {
        ctx->pc = 0x1A9E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E98u;
        // 0x1a9e9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9EA0u;
        goto label_1a9ea0;
    }
    ctx->pc = 0x1A9E98u;
    SET_GPR_U32(ctx, 31, 0x1A9EA0u);
    ctx->pc = 0x1A9E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9E98u;
    // 0x1a9e9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1A9E98u, 0x1A9EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9EA0u;
label_1a9ea0:
    // 0x1a9ea0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a9ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ea4:
    // 0x1a9ea4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a9ea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a9ea8u;
}
