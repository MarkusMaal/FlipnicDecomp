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

// Function: entry_001b09d0
// Address: 0x1b09d0 - 0x1b0a88
void entry_001b09d0_0x1b09d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b09d0_0x1b09d0");
#endif

    switch (ctx->pc) {
        case 0x1b09f0u: goto label_1b09f0;
        case 0x1b09fcu: goto label_1b09fc;
        case 0x1b0a20u: goto label_1b0a20;
        case 0x1b0a34u: goto label_1b0a34;
        case 0x1b0a48u: goto label_1b0a48;
        case 0x1b0a6cu: goto label_1b0a6c;
        case 0x1b0a80u: goto label_1b0a80;
        default: break;
    }

    ctx->pc = 0x1b09d0u;

label_1b09d0:
    // 0x1b09d0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1b09d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b09d4:
    // 0x1b09d4: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
label_1b09d8:
    if (ctx->pc == 0x1B09D8u) {
        ctx->pc = 0x1B09D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09D4u;
        // 0x1b09d8: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B09DCu;
        goto label_1b09dc;
    }
    ctx->pc = 0x1B09D4u;
    {
        const bool branch_taken_0x1b09d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B09D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09D4u;
        // 0x1b09d8: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b09d4) {
            ctx->pc = 0x1B0858u;
            return;
        }
    }
    ctx->pc = 0x1B09DCu;
label_1b09dc:
    // 0x1b09dc: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1b09dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1b09e0:
    // 0x1b09e0: 0x1440ff9c  bnez        $v0, . + 4 + (-0x64 << 2)
label_1b09e4:
    if (ctx->pc == 0x1B09E4u) {
        ctx->pc = 0x1B09E8u;
        goto label_1b09e8;
    }
    ctx->pc = 0x1B09E0u;
    {
        const bool branch_taken_0x1b09e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b09e0) {
            ctx->pc = 0x1B0854u;
            return;
        }
    }
    ctx->pc = 0x1B09E8u;
label_1b09e8:
    // 0x1b09e8: 0xc067f08  jal         func_19FC20
label_1b09ec:
    if (ctx->pc == 0x1B09ECu) {
        ctx->pc = 0x1B09F0u;
        goto label_1b09f0;
    }
    ctx->pc = 0x1B09E8u;
    SET_GPR_U32(ctx, 31, 0x1B09F0u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x1B09E8u, 0x1B09F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B09F0u;
label_1b09f0:
    // 0x1b09f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b09f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b09f4:
    // 0x1b09f4: 0xc067f0c  jal         func_19FC30
label_1b09f8:
    if (ctx->pc == 0x1B09F8u) {
        ctx->pc = 0x1B09F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09F4u;
        // 0x1b09f8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B09FCu;
        goto label_1b09fc;
    }
    ctx->pc = 0x1B09F4u;
    SET_GPR_U32(ctx, 31, 0x1B09FCu);
    ctx->pc = 0x1B09F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B09F4u;
    // 0x1b09f8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC30u, 0x1B09F4u, 0x1B09FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B09FCu;
label_1b09fc:
    // 0x1b09fc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b09fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b0a00:
    // 0x1b0a00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b0a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b0a04:
    // 0x1b0a04: 0xa28202f1  sb          $v0, 0x2F1($s4)
    ctx->pc = 0x1b0a04u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 753), (uint8_t)GPR_U32(ctx, 2));
label_1b0a08:
    // 0x1b0a08: 0x24057a00  addiu       $a1, $zero, 0x7A00
    ctx->pc = 0x1b0a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31232));
label_1b0a0c:
    // 0x1b0a0c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1b0a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1b0a10:
    // 0x1b0a10: 0x24067340  addiu       $a2, $zero, 0x7340
    ctx->pc = 0x1b0a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29504));
label_1b0a14:
    // 0x1b0a14: 0x8c4728e4  lw          $a3, 0x28E4($v0)
    ctx->pc = 0x1b0a14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10468)));
label_1b0a18:
    // 0x1b0a18: 0xc06bfc4  jal         func_1AFF10
label_1b0a1c:
    if (ctx->pc == 0x1B0A1Cu) {
        ctx->pc = 0x1B0A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A18u;
        // 0x1b0a1c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A20u;
        goto label_1b0a20;
    }
    ctx->pc = 0x1B0A18u;
    SET_GPR_U32(ctx, 31, 0x1B0A20u);
    ctx->pc = 0x1B0A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0A18u;
    // 0x1b0a1c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF10u, 0x1B0A18u, 0x1B0A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0A20u;
label_1b0a20:
    // 0x1b0a20: 0x8e840100  lw          $a0, 0x100($s4)
    ctx->pc = 0x1b0a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_1b0a24:
    // 0x1b0a24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b0a24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b0a28:
    // 0x1b0a28: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b0a28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b0a2c:
    // 0x1b0a2c: 0x320f809  jalr        $t9
label_1b0a30:
    if (ctx->pc == 0x1B0A30u) {
        ctx->pc = 0x1B0A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A2Cu;
        // 0x1b0a30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A34u;
        goto label_1b0a34;
    }
    ctx->pc = 0x1B0A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B0A34u);
        ctx->pc = 0x1B0A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A2Cu;
        // 0x1b0a30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0A2Cu, 0x1B0A34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0A34u;
label_1b0a34:
    // 0x1b0a34: 0x8e840108  lw          $a0, 0x108($s4)
    ctx->pc = 0x1b0a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 264)));
label_1b0a38:
    // 0x1b0a38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b0a38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b0a3c:
    // 0x1b0a3c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b0a3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b0a40:
    // 0x1b0a40: 0x320f809  jalr        $t9
label_1b0a44:
    if (ctx->pc == 0x1B0A44u) {
        ctx->pc = 0x1B0A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A40u;
        // 0x1b0a44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A48u;
        goto label_1b0a48;
    }
    ctx->pc = 0x1B0A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B0A48u);
        ctx->pc = 0x1B0A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A40u;
        // 0x1b0a44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0A40u, 0x1B0A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0A48u;
label_1b0a48:
    // 0x1b0a48: 0x928202ee  lbu         $v0, 0x2EE($s4)
    ctx->pc = 0x1b0a48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 750)));
label_1b0a4c:
    // 0x1b0a4c: 0x10400188  beqz        $v0, . + 4 + (0x188 << 2)
label_1b0a50:
    if (ctx->pc == 0x1B0A50u) {
        ctx->pc = 0x1B0A54u;
        goto label_1b0a54;
    }
    ctx->pc = 0x1B0A4Cu;
    {
        const bool branch_taken_0x1b0a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0a4c) {
            ctx->pc = 0x1B1070u;
            return;
        }
    }
    ctx->pc = 0x1B0A54u;
label_1b0a54:
    // 0x1b0a54: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1b0a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1b0a58:
    // 0x1b0a58: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b0a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1b0a5c:
    // 0x1b0a5c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b0a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1b0a60:
    // 0x1b0a60: 0xdc462818  ld          $a2, 0x2818($v0)
    ctx->pc = 0x1b0a60u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 10264)));
label_1b0a64:
    // 0x1b0a64: 0xc061fa8  jal         func_187EA0
label_1b0a68:
    if (ctx->pc == 0x1B0A68u) {
        ctx->pc = 0x1B0A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A64u;
        // 0x1b0a68: 0x24a50c68  addiu       $a1, $a1, 0xC68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A6Cu;
        goto label_1b0a6c;
    }
    ctx->pc = 0x1B0A64u;
    SET_GPR_U32(ctx, 31, 0x1B0A6Cu);
    ctx->pc = 0x1B0A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0A64u;
    // 0x1b0a68: 0x24a50c68  addiu       $a1, $a1, 0xC68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EA0u, 0x1B0A64u, 0x1B0A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0A6Cu;
label_1b0a6c:
    // 0x1b0a6c: 0x8e920118  lw          $s2, 0x118($s4)
    ctx->pc = 0x1b0a6cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_1b0a70:
    // 0x1b0a70: 0x24117100  addiu       $s1, $zero, 0x7100
    ctx->pc = 0x1b0a70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28928));
label_1b0a74:
    // 0x1b0a74: 0x8e95011c  lw          $s5, 0x11C($s4)
    ctx->pc = 0x1b0a74u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_1b0a78:
    // 0x1b0a78: 0xc04b7b4  jal         func_12DED0
label_1b0a7c:
    if (ctx->pc == 0x1B0A7Cu) {
        ctx->pc = 0x1B0A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A78u;
        // 0x1b0a7c: 0x27b000d0  addiu       $s0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A80u;
        goto label_1b0a80;
    }
    ctx->pc = 0x1B0A78u;
    SET_GPR_U32(ctx, 31, 0x1B0A80u);
    ctx->pc = 0x1B0A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0A78u;
    // 0x1b0a7c: 0x27b000d0  addiu       $s0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x1B0A78u, 0x1B0A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0A80u;
label_1b0a80:
    // 0x1b0a80: 0x1000005e  b           . + 4 + (0x5E << 2)
label_1b0a84:
    if (ctx->pc == 0x1B0A84u) {
        ctx->pc = 0x1B0A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A80u;
        // 0x1b0a84: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A88u;
        goto label_fallthrough_0x1b0a80;
    }
    ctx->pc = 0x1B0A80u;
    {
        const bool branch_taken_0x1b0a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A80u;
        // 0x1b0a84: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a80) {
            ctx->pc = 0x1B0BFCu;
            return;
        }
    }
label_fallthrough_0x1b0a80:
    ctx->pc = 0x1B0A88u;
}
