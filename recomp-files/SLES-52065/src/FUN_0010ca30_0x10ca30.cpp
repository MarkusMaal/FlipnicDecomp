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

// Function: FUN_0010ca30
// Address: 0x10ca30 - 0x10cbc0
void FUN_0010ca30_0x10ca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010ca30_0x10ca30");
#endif

    switch (ctx->pc) {
        case 0x10ca30u: goto label_10ca30;
        case 0x10ca34u: goto label_10ca34;
        case 0x10ca38u: goto label_10ca38;
        case 0x10ca3cu: goto label_10ca3c;
        case 0x10ca40u: goto label_10ca40;
        case 0x10ca44u: goto label_10ca44;
        case 0x10ca48u: goto label_10ca48;
        case 0x10ca4cu: goto label_10ca4c;
        case 0x10ca50u: goto label_10ca50;
        case 0x10ca54u: goto label_10ca54;
        case 0x10ca58u: goto label_10ca58;
        case 0x10ca5cu: goto label_10ca5c;
        case 0x10ca60u: goto label_10ca60;
        case 0x10ca64u: goto label_10ca64;
        case 0x10ca68u: goto label_10ca68;
        case 0x10ca6cu: goto label_10ca6c;
        case 0x10ca70u: goto label_10ca70;
        case 0x10ca74u: goto label_10ca74;
        case 0x10ca78u: goto label_10ca78;
        case 0x10ca7cu: goto label_10ca7c;
        case 0x10ca80u: goto label_10ca80;
        case 0x10ca84u: goto label_10ca84;
        case 0x10ca88u: goto label_10ca88;
        case 0x10ca8cu: goto label_10ca8c;
        case 0x10ca90u: goto label_10ca90;
        case 0x10ca94u: goto label_10ca94;
        case 0x10ca98u: goto label_10ca98;
        case 0x10ca9cu: goto label_10ca9c;
        case 0x10caa0u: goto label_10caa0;
        case 0x10caa4u: goto label_10caa4;
        case 0x10caa8u: goto label_10caa8;
        case 0x10caacu: goto label_10caac;
        case 0x10cab0u: goto label_10cab0;
        case 0x10cab4u: goto label_10cab4;
        case 0x10cab8u: goto label_10cab8;
        case 0x10cabcu: goto label_10cabc;
        case 0x10cac0u: goto label_10cac0;
        case 0x10cac4u: goto label_10cac4;
        case 0x10cac8u: goto label_10cac8;
        case 0x10caccu: goto label_10cacc;
        case 0x10cad0u: goto label_10cad0;
        case 0x10cad4u: goto label_10cad4;
        case 0x10cad8u: goto label_10cad8;
        case 0x10cadcu: goto label_10cadc;
        case 0x10cae0u: goto label_10cae0;
        case 0x10cae4u: goto label_10cae4;
        case 0x10cae8u: goto label_10cae8;
        case 0x10caecu: goto label_10caec;
        case 0x10caf0u: goto label_10caf0;
        case 0x10caf4u: goto label_10caf4;
        case 0x10caf8u: goto label_10caf8;
        case 0x10cafcu: goto label_10cafc;
        case 0x10cb00u: goto label_10cb00;
        case 0x10cb04u: goto label_10cb04;
        case 0x10cb08u: goto label_10cb08;
        case 0x10cb0cu: goto label_10cb0c;
        case 0x10cb10u: goto label_10cb10;
        case 0x10cb14u: goto label_10cb14;
        case 0x10cb18u: goto label_10cb18;
        case 0x10cb1cu: goto label_10cb1c;
        case 0x10cb20u: goto label_10cb20;
        case 0x10cb24u: goto label_10cb24;
        case 0x10cb28u: goto label_10cb28;
        case 0x10cb2cu: goto label_10cb2c;
        case 0x10cb30u: goto label_10cb30;
        case 0x10cb34u: goto label_10cb34;
        case 0x10cb38u: goto label_10cb38;
        case 0x10cb3cu: goto label_10cb3c;
        case 0x10cb40u: goto label_10cb40;
        case 0x10cb44u: goto label_10cb44;
        case 0x10cb48u: goto label_10cb48;
        case 0x10cb4cu: goto label_10cb4c;
        case 0x10cb50u: goto label_10cb50;
        case 0x10cb54u: goto label_10cb54;
        case 0x10cb58u: goto label_10cb58;
        case 0x10cb5cu: goto label_10cb5c;
        case 0x10cb60u: goto label_10cb60;
        case 0x10cb64u: goto label_10cb64;
        case 0x10cb68u: goto label_10cb68;
        case 0x10cb6cu: goto label_10cb6c;
        case 0x10cb70u: goto label_10cb70;
        case 0x10cb74u: goto label_10cb74;
        case 0x10cb78u: goto label_10cb78;
        case 0x10cb7cu: goto label_10cb7c;
        case 0x10cb80u: goto label_10cb80;
        case 0x10cb84u: goto label_10cb84;
        case 0x10cb88u: goto label_10cb88;
        case 0x10cb8cu: goto label_10cb8c;
        case 0x10cb90u: goto label_10cb90;
        case 0x10cb94u: goto label_10cb94;
        case 0x10cb98u: goto label_10cb98;
        case 0x10cb9cu: goto label_10cb9c;
        case 0x10cba0u: goto label_10cba0;
        case 0x10cba4u: goto label_10cba4;
        case 0x10cba8u: goto label_10cba8;
        case 0x10cbacu: goto label_10cbac;
        case 0x10cbb0u: goto label_10cbb0;
        case 0x10cbb4u: goto label_10cbb4;
        case 0x10cbb8u: goto label_10cbb8;
        case 0x10cbbcu: goto label_10cbbc;
        default: break;
    }

    ctx->pc = 0x10ca30u;

label_10ca30:
    // 0x10ca30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ca30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_10ca34:
    // 0x10ca34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10ca34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_10ca38:
    // 0x10ca38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10ca38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10ca3c:
    // 0x10ca3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10ca3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10ca40:
    // 0x10ca40: 0xc0563cc  jal         func_158F30
label_10ca44:
    if (ctx->pc == 0x10CA44u) {
        ctx->pc = 0x10CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA40u;
        // 0x10ca44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CA48u;
        goto label_10ca48;
    }
    ctx->pc = 0x10CA40u;
    SET_GPR_U32(ctx, 31, 0x10CA48u);
    ctx->pc = 0x10CA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CA40u;
    // 0x10ca44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x10CA40u, 0x10CA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CA48u;
label_10ca48:
    // 0x10ca48: 0xa20001d0  sb          $zero, 0x1D0($s0)
    ctx->pc = 0x10ca48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 464), (uint8_t)GPR_U32(ctx, 0));
label_10ca4c:
    // 0x10ca4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ca4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ca50:
    // 0x10ca50: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10ca50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10ca54:
    // 0x10ca54: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10ca54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10ca58:
    // 0x10ca58: 0x320f809  jalr        $t9
label_10ca5c:
    if (ctx->pc == 0x10CA5Cu) {
        ctx->pc = 0x10CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA58u;
        // 0x10ca5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CA60u;
        goto label_10ca60;
    }
    ctx->pc = 0x10CA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10CA60u);
        ctx->pc = 0x10CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA58u;
        // 0x10ca5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CA58u, 0x10CA60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10CA60u;
label_10ca60:
    // 0x10ca60: 0xa600024e  sh          $zero, 0x24E($s0)
    ctx->pc = 0x10ca60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 590), (uint16_t)GPR_U32(ctx, 0));
label_10ca64:
    // 0x10ca64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10ca68:
    // 0x10ca68: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x10ca68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
label_10ca6c:
    // 0x10ca6c: 0xa2000078  sb          $zero, 0x78($s0)
    ctx->pc = 0x10ca6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 0));
label_10ca70:
    // 0x10ca70: 0xa202007a  sb          $v0, 0x7A($s0)
    ctx->pc = 0x10ca70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 122), (uint8_t)GPR_U32(ctx, 2));
label_10ca74:
    // 0x10ca74: 0x86020254  lh          $v0, 0x254($s0)
    ctx->pc = 0x10ca74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 596)));
label_10ca78:
    // 0x10ca78: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
label_10ca7c:
    if (ctx->pc == 0x10CA7Cu) {
        ctx->pc = 0x10CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA78u;
        // 0x10ca7c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CA80u;
        goto label_10ca80;
    }
    ctx->pc = 0x10CA78u;
    {
        const bool branch_taken_0x10ca78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA78u;
        // 0x10ca7c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ca78) {
            ctx->pc = 0x10CAACu;
            goto label_10caac;
        }
    }
    ctx->pc = 0x10CA80u;
label_10ca80:
    // 0x10ca80: 0x86030256  lh          $v1, 0x256($s0)
    ctx->pc = 0x10ca80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 598)));
label_10ca84:
    // 0x10ca84: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10ca88:
    // 0x10ca88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10ca88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10ca8c:
    // 0x10ca8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_10ca90:
    // 0x10ca90: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x10ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10ca94:
    // 0x10ca94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10ca98:
    // 0x10ca98: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10ca98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10ca9c:
    // 0x10ca9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10ca9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10caa0:
    // 0x10caa0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x10caa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_10caa4:
    // 0x10caa4: 0x320f809  jalr        $t9
label_10caa8:
    if (ctx->pc == 0x10CAA8u) {
        ctx->pc = 0x10CAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CAA4u;
        // 0x10caa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CAACu;
        goto label_10caac;
    }
    ctx->pc = 0x10CAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10CAACu);
        ctx->pc = 0x10CAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CAA4u;
        // 0x10caa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CAA4u, 0x10CAACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10CAACu;
label_10caac:
    // 0x10caac: 0xc05fe4c  jal         func_17F930
label_10cab0:
    if (ctx->pc == 0x10CAB0u) {
        ctx->pc = 0x10CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CAACu;
        // 0x10cab0: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CAB4u;
        goto label_10cab4;
    }
    ctx->pc = 0x10CAACu;
    SET_GPR_U32(ctx, 31, 0x10CAB4u);
    ctx->pc = 0x10CAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CAACu;
    // 0x10cab0: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x10CAACu, 0x10CAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CAB4u;
label_10cab4:
    // 0x10cab4: 0x86250030  lh          $a1, 0x30($s1)
    ctx->pc = 0x10cab4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
label_10cab8:
    // 0x10cab8: 0xc05fec0  jal         func_17FB00
label_10cabc:
    if (ctx->pc == 0x10CABCu) {
        ctx->pc = 0x10CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CAB8u;
        // 0x10cabc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CAC0u;
        goto label_10cac0;
    }
    ctx->pc = 0x10CAB8u;
    SET_GPR_U32(ctx, 31, 0x10CAC0u);
    ctx->pc = 0x10CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CAB8u;
    // 0x10cabc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB00u, 0x10CAB8u, 0x10CAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CAC0u;
label_10cac0:
    // 0x10cac0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10cac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10cac4:
    // 0x10cac4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10cac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10cac8:
    // 0x10cac8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10cac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10cacc:
    // 0x10cacc: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x10caccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_10cad0:
    // 0x10cad0: 0x320f809  jalr        $t9
label_10cad4:
    if (ctx->pc == 0x10CAD4u) {
        ctx->pc = 0x10CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CAD0u;
        // 0x10cad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CAD8u;
        goto label_10cad8;
    }
    ctx->pc = 0x10CAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10CAD8u);
        ctx->pc = 0x10CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CAD0u;
        // 0x10cad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CAD0u, 0x10CAD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10CAD8u;
label_10cad8:
    // 0x10cad8: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10cad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10cadc:
    // 0x10cadc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10cae0:
    // 0x10cae0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10cae0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10cae4:
    // 0x10cae4: 0x320f809  jalr        $t9
label_10cae8:
    if (ctx->pc == 0x10CAE8u) {
        ctx->pc = 0x10CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CAE4u;
        // 0x10cae8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CAECu;
        goto label_10caec;
    }
    ctx->pc = 0x10CAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10CAECu);
        ctx->pc = 0x10CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CAE4u;
        // 0x10cae8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CAE4u, 0x10CAECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10CAECu;
label_10caec:
    // 0x10caec: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x10caecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_10caf0:
    // 0x10caf0: 0xae022300  sw          $v0, 0x2300($s0)
    ctx->pc = 0x10caf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8960), GPR_U32(ctx, 2));
label_10caf4:
    // 0x10caf4: 0x86220020  lh          $v0, 0x20($s1)
    ctx->pc = 0x10caf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
label_10caf8:
    // 0x10caf8: 0xa60201f4  sh          $v0, 0x1F4($s0)
    ctx->pc = 0x10caf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 500), (uint16_t)GPR_U32(ctx, 2));
label_10cafc:
    // 0x10cafc: 0x860301f4  lh          $v1, 0x1F4($s0)
    ctx->pc = 0x10cafcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 500)));
label_10cb00:
    // 0x10cb00: 0x8e022300  lw          $v0, 0x2300($s0)
    ctx->pc = 0x10cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8960)));
label_10cb04:
    // 0x10cb04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_10cb08:
    // 0x10cb08: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10cb08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10cb0c:
    // 0x10cb0c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x10cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10cb10:
    // 0x10cb10: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x10cb10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_10cb14:
    // 0x10cb14: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x10cb14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_10cb18:
    // 0x10cb18: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x10cb18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_10cb1c:
    // 0x10cb1c: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x10cb1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_10cb20:
    // 0x10cb20: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x10cb20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_10cb24:
    // 0x10cb24: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x10cb24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_10cb28:
    // 0x10cb28: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x10cb28u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_10cb2c:
    // 0x10cb2c: 0x4a0003bf  vwaitq
    ctx->pc = 0x10cb2cu;
    // VWAITQ (Q already resolved in this runtime)
label_10cb30:
    // 0x10cb30: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x10cb30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_10cb34:
    // 0x10cb34: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10cb34u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_10cb38:
    // 0x10cb38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10cb38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10cb3c:
    // 0x10cb3c: 0xae022304  sw          $v0, 0x2304($s0)
    ctx->pc = 0x10cb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8964), GPR_U32(ctx, 2));
label_10cb40:
    // 0x10cb40: 0xa200007a  sb          $zero, 0x7A($s0)
    ctx->pc = 0x10cb40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 122), (uint8_t)GPR_U32(ctx, 0));
label_10cb44:
    // 0x10cb44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10cb44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10cb48:
    // 0x10cb48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10cb4c:
    // 0x10cb4c: 0xa2020078  sb          $v0, 0x78($s0)
    ctx->pc = 0x10cb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 2));
label_10cb50:
    // 0x10cb50: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x10cb50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
label_10cb54:
    // 0x10cb54: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x10cb54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
label_10cb58:
    // 0x10cb58: 0x10000009  b           . + 4 + (0x9 << 2)
label_10cb5c:
    if (ctx->pc == 0x10CB5Cu) {
        ctx->pc = 0x10CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB58u;
        // 0x10cb5c: 0xae000268  sw          $zero, 0x268($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CB60u;
        goto label_10cb60;
    }
    ctx->pc = 0x10CB58u;
    {
        const bool branch_taken_0x10cb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB58u;
        // 0x10cb5c: 0xae000268  sw          $zero, 0x268($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cb58) {
            ctx->pc = 0x10CB80u;
            goto label_10cb80;
        }
    }
    ctx->pc = 0x10CB60u;
label_10cb60:
    // 0x10cb60: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_10cb64:
    // 0x10cb64: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10cb68:
    // 0x10cb68: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_10cb6c:
    // 0x10cb6c: 0x8c59068c  lw          $t9, 0x68C($v0)
    ctx->pc = 0x10cb6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1676)));
label_10cb70:
    // 0x10cb70: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x10cb70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_10cb74:
    // 0x10cb74: 0x320f809  jalr        $t9
label_10cb78:
    if (ctx->pc == 0x10CB78u) {
        ctx->pc = 0x10CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB74u;
        // 0x10cb78: 0x24440280  addiu       $a0, $v0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CB7Cu;
        goto label_10cb7c;
    }
    ctx->pc = 0x10CB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10CB7Cu);
        ctx->pc = 0x10CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB74u;
        // 0x10cb78: 0x24440280  addiu       $a0, $v0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CB74u, 0x10CB7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10CB7Cu;
label_10cb7c:
    // 0x10cb7c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10cb7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10cb80:
    // 0x10cb80: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x10cb80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_10cb84:
    // 0x10cb84: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_10cb88:
    if (ctx->pc == 0x10CB88u) {
        ctx->pc = 0x10CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB84u;
        // 0x10cb88: 0x111180  sll         $v0, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CB8Cu;
        goto label_10cb8c;
    }
    ctx->pc = 0x10CB84u;
    {
        const bool branch_taken_0x10cb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB84u;
        // 0x10cb88: 0x111180  sll         $v0, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cb84) {
            ctx->pc = 0x10CB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10cb60;
        }
    }
    ctx->pc = 0x10CB8Cu;
label_10cb8c:
    // 0x10cb8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_10cb90:
    // 0x10cb90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10cb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10cb94:
    // 0x10cb94: 0xae02230c  sw          $v0, 0x230C($s0)
    ctx->pc = 0x10cb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8972), GPR_U32(ctx, 2));
label_10cb98:
    // 0x10cb98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10cb9c:
    // 0x10cb9c: 0xae022310  sw          $v0, 0x2310($s0)
    ctx->pc = 0x10cb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8976), GPR_U32(ctx, 2));
label_10cba0:
    // 0x10cba0: 0xae052308  sw          $a1, 0x2308($s0)
    ctx->pc = 0x10cba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8968), GPR_U32(ctx, 5));
label_10cba4:
    // 0x10cba4: 0xc042570  jal         func_1095C0
label_10cba8:
    if (ctx->pc == 0x10CBA8u) {
        ctx->pc = 0x10CBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CBA4u;
        // 0x10cba8: 0xa20501d3  sb          $a1, 0x1D3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CBACu;
        goto label_10cbac;
    }
    ctx->pc = 0x10CBA4u;
    SET_GPR_U32(ctx, 31, 0x10CBACu);
    ctx->pc = 0x10CBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CBA4u;
    // 0x10cba8: 0xa20501d3  sb          $a1, 0x1D3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x10CBA4u, 0x10CBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBACu;
label_10cbac:
    // 0x10cbac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10cbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10cbb0:
    // 0x10cbb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10cbb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10cbb4:
    // 0x10cbb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10cbb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10cbb8:
    // 0x10cbb8: 0x3e00008  jr          $ra
label_10cbbc:
    if (ctx->pc == 0x10CBBCu) {
        ctx->pc = 0x10CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CBB8u;
        // 0x10cbbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CBC0u;
        goto label_fallthrough_0x10cbb8;
    }
    ctx->pc = 0x10CBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CBB8u;
        // 0x10cbbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10cbb8:
    ctx->pc = 0x10CBC0u;
}
