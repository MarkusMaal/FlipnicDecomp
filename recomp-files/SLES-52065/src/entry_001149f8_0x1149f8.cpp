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

// Function: entry_001149f8
// Address: 0x1149f8 - 0x114a8c
void entry_001149f8_0x1149f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001149f8_0x1149f8");
#endif

    switch (ctx->pc) {
        case 0x114a20u: goto label_114a20;
        case 0x114a44u: goto label_114a44;
        default: break;
    }

    ctx->pc = 0x1149f8u;

label_1149f8:
    // 0x1149f8: 0x10400461  beqz        $v0, . + 4 + (0x461 << 2)
label_1149fc:
    if (ctx->pc == 0x1149FCu) {
        ctx->pc = 0x114A00u;
        goto label_114a00;
    }
    ctx->pc = 0x1149F8u;
    {
        const bool branch_taken_0x1149f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1149f8) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x114A00u;
label_114a00:
    // 0x114a00: 0x8e480278  lw          $t0, 0x278($s2)
    ctx->pc = 0x114a00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_114a04:
    // 0x114a04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_114a08:
    // 0x114a08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114a0c:
    // 0x114a0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x114a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114a10:
    // 0x114a10: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x114a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_114a14:
    // 0x114a14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x114a14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114a18:
    // 0x114a18: 0xc045700  jal         func_115C00
label_114a1c:
    if (ctx->pc == 0x114A1Cu) {
        ctx->pc = 0x114A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A18u;
        // 0x114a1c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114A20u;
        goto label_114a20;
    }
    ctx->pc = 0x114A18u;
    SET_GPR_U32(ctx, 31, 0x114A20u);
    ctx->pc = 0x114A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A18u;
    // 0x114a1c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C00u, 0x114A18u, 0x114A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114A20u;
label_114a20:
    // 0x114a20: 0x8e450278  lw          $a1, 0x278($s2)
    ctx->pc = 0x114a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_114a24:
    // 0x114a24: 0x27a300f4  addiu       $v1, $sp, 0xF4
    ctx->pc = 0x114a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_114a28:
    // 0x114a28: 0x93828268  lbu         $v0, -0x7D98($gp)
    ctx->pc = 0x114a28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935144)));
label_114a2c:
    // 0x114a2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114a30:
    // 0x114a30: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114a30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114a34:
    // 0x114a34: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114a34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114a38:
    // 0x114a38: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x114a38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_114a3c:
    // 0x114a3c: 0x320f809  jalr        $t9
label_114a40:
    if (ctx->pc == 0x114A40u) {
        ctx->pc = 0x114A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A3Cu;
        // 0x114a40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114A44u;
        goto label_114a44;
    }
    ctx->pc = 0x114A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114A44u);
        ctx->pc = 0x114A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A3Cu;
        // 0x114a40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114A3Cu, 0x114A44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114A44u;
label_114a44:
    // 0x114a44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x114a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114a48:
    // 0x114a48: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x114a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_114a4c:
    // 0x114a4c: 0xae450264  sw          $a1, 0x264($s2)
    ctx->pc = 0x114a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 612), GPR_U32(ctx, 5));
label_114a50:
    // 0x114a50: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x114a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_114a54:
    // 0x114a54: 0x8c24e4f8  lw          $a0, -0x1B08($at)
    ctx->pc = 0x114a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960376)));
label_114a58:
    // 0x114a58: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x114a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_114a5c:
    // 0x114a5c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x114a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_114a60:
    // 0x114a60: 0xae440268  sw          $a0, 0x268($s2)
    ctx->pc = 0x114a60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 4));
label_114a64:
    // 0x114a64: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x114a64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_114a68:
    // 0x114a68: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x114a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_114a6c:
    // 0x114a6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x114a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_114a70:
    // 0x114a70: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x114a70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
label_114a74:
    // 0x114a74: 0xae40026c  sw          $zero, 0x26C($s2)
    ctx->pc = 0x114a74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 620), GPR_U32(ctx, 0));
label_114a78:
    // 0x114a78: 0xa2450284  sb          $a1, 0x284($s2)
    ctx->pc = 0x114a78u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 644), (uint8_t)GPR_U32(ctx, 5));
label_114a7c:
    // 0x114a7c: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x114a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_114a80:
    // 0x114a80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_114a84:
    // 0x114a84: 0x1000043e  b           . + 4 + (0x43E << 2)
label_114a88:
    if (ctx->pc == 0x114A88u) {
        ctx->pc = 0x114A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A84u;
        // 0x114a88: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114A8Cu;
        goto label_fallthrough_0x114a84;
    }
    ctx->pc = 0x114A84u;
    {
        const bool branch_taken_0x114a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A84u;
        // 0x114a88: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114a84) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
label_fallthrough_0x114a84:
    ctx->pc = 0x114A8Cu;
}
