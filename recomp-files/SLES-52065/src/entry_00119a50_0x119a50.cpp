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

// Function: entry_00119a50
// Address: 0x119a50 - 0x119ac0
void entry_00119a50_0x119a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119a50_0x119a50");
#endif

    switch (ctx->pc) {
        case 0x119a58u: goto label_119a58;
        case 0x119a7cu: goto label_119a7c;
        case 0x119a98u: goto label_119a98;
        default: break;
    }

    ctx->pc = 0x119a50u;

label_119a50:
    // 0x119a50: 0xc046594  jal         func_119650
label_119a54:
    if (ctx->pc == 0x119A54u) {
        ctx->pc = 0x119A58u;
        goto label_119a58;
    }
    ctx->pc = 0x119A50u;
    SET_GPR_U32(ctx, 31, 0x119A58u);
    ctx->pc = 0x119650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119650u, 0x119A50u, 0x119A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119A58u;
label_119a58:
    // 0x119a58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x119a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119a5c:
    // 0x119a5c: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x119a5cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_119a60:
    // 0x119a60: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x119a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_119a64:
    // 0x119a64: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x119a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_119a68:
    // 0x119a68: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119a6c:
    // 0x119a6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119a6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119a70:
    // 0x119a70: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x119a70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_119a74:
    // 0x119a74: 0x320f809  jalr        $t9
label_119a78:
    if (ctx->pc == 0x119A78u) {
        ctx->pc = 0x119A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A74u;
        // 0x119a78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119A7Cu;
        goto label_119a7c;
    }
    ctx->pc = 0x119A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119A7Cu);
        ctx->pc = 0x119A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A74u;
        // 0x119a78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119A74u, 0x119A7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119A7Cu;
label_119a7c:
    // 0x119a7c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x119a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_119a80:
    // 0x119a80: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x119a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_119a84:
    // 0x119a84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119a88:
    // 0x119a88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119a88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119a8c:
    // 0x119a8c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x119a8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_119a90:
    // 0x119a90: 0x320f809  jalr        $t9
label_119a94:
    if (ctx->pc == 0x119A94u) {
        ctx->pc = 0x119A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A90u;
        // 0x119a94: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119A98u;
        goto label_119a98;
    }
    ctx->pc = 0x119A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119A98u);
        ctx->pc = 0x119A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A90u;
        // 0x119a94: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119A90u, 0x119A98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119A98u;
label_119a98:
    // 0x119a98: 0x6400009  bltz        $s2, . + 4 + (0x9 << 2)
label_119a9c:
    if (ctx->pc == 0x119A9Cu) {
        ctx->pc = 0x119AA0u;
        goto label_119aa0;
    }
    ctx->pc = 0x119A98u;
    {
        const bool branch_taken_0x119a98 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x119a98) {
            ctx->pc = 0x119AC0u;
            return;
        }
    }
    ctx->pc = 0x119AA0u;
label_119aa0:
    // 0x119aa0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x119aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_119aa4:
    // 0x119aa4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x119aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_119aa8:
    // 0x119aa8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x119aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_119aac:
    // 0x119aac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119ab0:
    // 0x119ab0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119ab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119ab4:
    // 0x119ab4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x119ab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_119ab8:
    // 0x119ab8: 0x320f809  jalr        $t9
label_119abc:
    if (ctx->pc == 0x119ABCu) {
        ctx->pc = 0x119ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119AB8u;
        // 0x119abc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119AC0u;
        goto label_fallthrough_0x119ab8;
    }
    ctx->pc = 0x119AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119AC0u);
        ctx->pc = 0x119ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119AB8u;
        // 0x119abc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119AB8u, 0x119AC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x119ab8:
    ctx->pc = 0x119AC0u;
}
