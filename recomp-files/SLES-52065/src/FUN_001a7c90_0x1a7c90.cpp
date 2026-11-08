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

// Function: FUN_001a7c90
// Address: 0x1a7c90 - 0x1a7d60
void FUN_001a7c90_0x1a7c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7c90_0x1a7c90");
#endif

    switch (ctx->pc) {
        case 0x1a7c90u: goto label_1a7c90;
        case 0x1a7c94u: goto label_1a7c94;
        case 0x1a7c98u: goto label_1a7c98;
        case 0x1a7c9cu: goto label_1a7c9c;
        case 0x1a7ca0u: goto label_1a7ca0;
        case 0x1a7ca4u: goto label_1a7ca4;
        case 0x1a7ca8u: goto label_1a7ca8;
        case 0x1a7cacu: goto label_1a7cac;
        case 0x1a7cb0u: goto label_1a7cb0;
        case 0x1a7cb4u: goto label_1a7cb4;
        case 0x1a7cb8u: goto label_1a7cb8;
        case 0x1a7cbcu: goto label_1a7cbc;
        case 0x1a7cc0u: goto label_1a7cc0;
        case 0x1a7cc4u: goto label_1a7cc4;
        case 0x1a7cc8u: goto label_1a7cc8;
        case 0x1a7cccu: goto label_1a7ccc;
        case 0x1a7cd0u: goto label_1a7cd0;
        case 0x1a7cd4u: goto label_1a7cd4;
        case 0x1a7cd8u: goto label_1a7cd8;
        case 0x1a7cdcu: goto label_1a7cdc;
        case 0x1a7ce0u: goto label_1a7ce0;
        case 0x1a7ce4u: goto label_1a7ce4;
        case 0x1a7ce8u: goto label_1a7ce8;
        case 0x1a7cecu: goto label_1a7cec;
        case 0x1a7cf0u: goto label_1a7cf0;
        case 0x1a7cf4u: goto label_1a7cf4;
        case 0x1a7cf8u: goto label_1a7cf8;
        case 0x1a7cfcu: goto label_1a7cfc;
        case 0x1a7d00u: goto label_1a7d00;
        case 0x1a7d04u: goto label_1a7d04;
        case 0x1a7d08u: goto label_1a7d08;
        case 0x1a7d0cu: goto label_1a7d0c;
        case 0x1a7d10u: goto label_1a7d10;
        case 0x1a7d14u: goto label_1a7d14;
        case 0x1a7d18u: goto label_1a7d18;
        case 0x1a7d1cu: goto label_1a7d1c;
        case 0x1a7d20u: goto label_1a7d20;
        case 0x1a7d24u: goto label_1a7d24;
        case 0x1a7d28u: goto label_1a7d28;
        case 0x1a7d2cu: goto label_1a7d2c;
        case 0x1a7d30u: goto label_1a7d30;
        case 0x1a7d34u: goto label_1a7d34;
        case 0x1a7d38u: goto label_1a7d38;
        case 0x1a7d3cu: goto label_1a7d3c;
        case 0x1a7d40u: goto label_1a7d40;
        case 0x1a7d44u: goto label_1a7d44;
        case 0x1a7d48u: goto label_1a7d48;
        case 0x1a7d4cu: goto label_1a7d4c;
        case 0x1a7d50u: goto label_1a7d50;
        case 0x1a7d54u: goto label_1a7d54;
        case 0x1a7d58u: goto label_1a7d58;
        case 0x1a7d5cu: goto label_1a7d5c;
        default: break;
    }

    ctx->pc = 0x1a7c90u;

label_1a7c90:
    // 0x1a7c90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a7c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a7c94:
    // 0x1a7c94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a7c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a7c98:
    // 0x1a7c98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a7c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a7c9c:
    // 0x1a7c9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a7c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a7ca0:
    // 0x1a7ca0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a7ca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a7ca4:
    // 0x1a7ca4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a7ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a7ca8:
    // 0x1a7ca8: 0x8c820664  lw          $v0, 0x664($a0)
    ctx->pc = 0x1a7ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1636)));
label_1a7cac:
    // 0x1a7cac: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x1a7cacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1a7cb0:
    // 0x1a7cb0: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1a7cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1a7cb4:
    // 0x1a7cb4: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1a7cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a7cb8:
    // 0x1a7cb8: 0xc057040  jal         func_15C100
label_1a7cbc:
    if (ctx->pc == 0x1A7CBCu) {
        ctx->pc = 0x1A7CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CB8u;
        // 0x1a7cbc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7CC0u;
        goto label_1a7cc0;
    }
    ctx->pc = 0x1A7CB8u;
    SET_GPR_U32(ctx, 31, 0x1A7CC0u);
    ctx->pc = 0x1A7CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7CB8u;
    // 0x1a7cbc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A7CB8u, 0x1A7CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7CC0u;
label_1a7cc0:
    // 0x1a7cc0: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x1a7cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a7cc4:
    // 0x1a7cc4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a7cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a7cc8:
    // 0x1a7cc8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a7cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1a7ccc:
    // 0x1a7ccc: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a7cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a7cd0:
    // 0x1a7cd0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a7cd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a7cd4:
    // 0x1a7cd4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1a7cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1a7cd8:
    // 0x1a7cd8: 0x320f809  jalr        $t9
label_1a7cdc:
    if (ctx->pc == 0x1A7CDCu) {
        ctx->pc = 0x1A7CE0u;
        goto label_1a7ce0;
    }
    ctx->pc = 0x1A7CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A7CE0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7CD8u, 0x1A7CE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7CE0u;
label_1a7ce0:
    // 0x1a7ce0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a7ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a7ce4:
    // 0x1a7ce4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a7ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1a7ce8:
    // 0x1a7ce8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a7ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a7cec:
    // 0x1a7cec: 0xc042570  jal         func_1095C0
label_1a7cf0:
    if (ctx->pc == 0x1A7CF0u) {
        ctx->pc = 0x1A7CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CECu;
        // 0x1a7cf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7CF4u;
        goto label_1a7cf4;
    }
    ctx->pc = 0x1A7CECu;
    SET_GPR_U32(ctx, 31, 0x1A7CF4u);
    ctx->pc = 0x1A7CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7CECu;
    // 0x1a7cf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1A7CECu, 0x1A7CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7CF4u;
label_1a7cf4:
    // 0x1a7cf4: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1a7cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a7cf8:
    // 0x1a7cf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a7cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7cfc:
    // 0x1a7cfc: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1a7cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1a7d00:
    // 0x1a7d00: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1a7d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a7d04:
    // 0x1a7d04: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1a7d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1a7d08:
    // 0x1a7d08: 0x8c842cd8  lw          $a0, 0x2CD8($a0)
    ctx->pc = 0x1a7d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
label_1a7d0c:
    // 0x1a7d0c: 0xa08501d3  sb          $a1, 0x1D3($a0)
    ctx->pc = 0x1a7d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 467), (uint8_t)GPR_U32(ctx, 5));
label_1a7d10:
    // 0x1a7d10: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1a7d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a7d14:
    // 0x1a7d14: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1a7d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1a7d18:
    // 0x1a7d18: 0x8c842cd8  lw          $a0, 0x2CD8($a0)
    ctx->pc = 0x1a7d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
label_1a7d1c:
    // 0x1a7d1c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1a7d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a7d20:
    // 0x1a7d20: 0xa0850028  sb          $a1, 0x28($a0)
    ctx->pc = 0x1a7d20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 5));
label_1a7d24:
    // 0x1a7d24: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a7d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7d28:
    // 0x1a7d28: 0x1083ffe1  beq         $a0, $v1, . + 4 + (-0x1F << 2)
label_1a7d2c:
    if (ctx->pc == 0x1A7D2Cu) {
        ctx->pc = 0x1A7D30u;
        goto label_1a7d30;
    }
    ctx->pc = 0x1A7D28u;
    {
        const bool branch_taken_0x1a7d28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a7d28) {
            ctx->pc = 0x1A7CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7cb0;
        }
    }
    ctx->pc = 0x1A7D30u;
label_1a7d30:
    // 0x1a7d30: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_1a7d34:
    if (ctx->pc == 0x1A7D34u) {
        ctx->pc = 0x1A7D38u;
        goto label_1a7d38;
    }
    ctx->pc = 0x1A7D30u;
    {
        const bool branch_taken_0x1a7d30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7d30) {
            ctx->pc = 0x1A7D48u;
            goto label_1a7d48;
        }
    }
    ctx->pc = 0x1A7D38u;
label_1a7d38:
    // 0x1a7d38: 0x8e59031c  lw          $t9, 0x31C($s2)
    ctx->pc = 0x1a7d38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 796)));
label_1a7d3c:
    // 0x1a7d3c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a7d3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a7d40:
    // 0x1a7d40: 0x320f809  jalr        $t9
label_1a7d44:
    if (ctx->pc == 0x1A7D44u) {
        ctx->pc = 0x1A7D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D40u;
        // 0x1a7d44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7D48u;
        goto label_1a7d48;
    }
    ctx->pc = 0x1A7D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A7D48u);
        ctx->pc = 0x1A7D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D40u;
        // 0x1a7d44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7D40u, 0x1A7D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7D48u;
label_1a7d48:
    // 0x1a7d48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a7d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a7d4c:
    // 0x1a7d4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a7d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a7d50:
    // 0x1a7d50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a7d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a7d54:
    // 0x1a7d54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7d58:
    // 0x1a7d58: 0x3e00008  jr          $ra
label_1a7d5c:
    if (ctx->pc == 0x1A7D5Cu) {
        ctx->pc = 0x1A7D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D58u;
        // 0x1a7d5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7D60u;
        goto label_fallthrough_0x1a7d58;
    }
    ctx->pc = 0x1A7D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D58u;
        // 0x1a7d5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a7d58:
    ctx->pc = 0x1A7D60u;
}
