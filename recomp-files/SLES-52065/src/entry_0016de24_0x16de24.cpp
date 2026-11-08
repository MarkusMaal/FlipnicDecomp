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

// Function: entry_0016de24
// Address: 0x16de24 - 0x16df00
void entry_0016de24_0x16de24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016de24_0x16de24");
#endif

    switch (ctx->pc) {
        case 0x16de78u: goto label_16de78;
        case 0x16de8cu: goto label_16de8c;
        case 0x16de9cu: goto label_16de9c;
        case 0x16dea8u: goto label_16dea8;
        case 0x16debcu: goto label_16debc;
        case 0x16deccu: goto label_16decc;
        case 0x16def0u: goto label_16def0;
        default: break;
    }

    ctx->pc = 0x16de24u;

label_16de24:
    // 0x16de24: 0x0  nop
    ctx->pc = 0x16de24u;
    // NOP
label_16de28:
    // 0x16de28: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x16de28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_16de2c:
    // 0x16de2c: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x16de2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_16de30:
    // 0x16de30: 0x8f838608  lw          $v1, -0x79F8($gp)
    ctx->pc = 0x16de30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
label_16de34:
    // 0x16de34: 0x8e670210  lw          $a3, 0x210($s3)
    ctx->pc = 0x16de34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
label_16de38:
    // 0x16de38: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16de38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16de3c:
    // 0x16de3c: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x16de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_16de40:
    // 0x16de40: 0x86250030  lh          $a1, 0x30($s1)
    ctx->pc = 0x16de40u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
label_16de44:
    // 0x16de44: 0x86260032  lh          $a2, 0x32($s1)
    ctx->pc = 0x16de44u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_16de48:
    // 0x16de48: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16de48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_16de4c:
    // 0x16de4c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x16de4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_16de50:
    // 0x16de50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16de50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16de54:
    // 0x16de54: 0x84840080  lh          $a0, 0x80($a0)
    ctx->pc = 0x16de54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 128)));
label_16de58:
    // 0x16de58: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16de58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16de5c:
    // 0x16de5c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16de5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16de60:
    // 0x16de60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16de60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16de64:
    // 0x16de64: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x16de64u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16de68:
    // 0x16de68: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x16de68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_16de6c:
    // 0x16de6c: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x16de6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_16de70:
    // 0x16de70: 0x320f809  jalr        $t9
label_16de74:
    if (ctx->pc == 0x16DE74u) {
        ctx->pc = 0x16DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE70u;
        // 0x16de74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DE78u;
        goto label_16de78;
    }
    ctx->pc = 0x16DE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16DE78u);
        ctx->pc = 0x16DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE70u;
        // 0x16de74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DE70u, 0x16DE78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16DE78u;
label_16de78:
    // 0x16de78: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x16de78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_16de7c:
    // 0x16de7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16de7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16de80:
    // 0x16de80: 0x8f3900ac  lw          $t9, 0xAC($t9)
    ctx->pc = 0x16de80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 172)));
label_16de84:
    // 0x16de84: 0x320f809  jalr        $t9
label_16de88:
    if (ctx->pc == 0x16DE88u) {
        ctx->pc = 0x16DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE84u;
        // 0x16de88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DE8Cu;
        goto label_16de8c;
    }
    ctx->pc = 0x16DE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16DE8Cu);
        ctx->pc = 0x16DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE84u;
        // 0x16de88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DE84u, 0x16DE8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16DE8Cu;
label_16de8c:
    // 0x16de8c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x16de8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_16de90:
    // 0x16de90: 0x8f3900ec  lw          $t9, 0xEC($t9)
    ctx->pc = 0x16de90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 236)));
label_16de94:
    // 0x16de94: 0x320f809  jalr        $t9
label_16de98:
    if (ctx->pc == 0x16DE98u) {
        ctx->pc = 0x16DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE94u;
        // 0x16de98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DE9Cu;
        goto label_16de9c;
    }
    ctx->pc = 0x16DE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16DE9Cu);
        ctx->pc = 0x16DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE94u;
        // 0x16de98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DE94u, 0x16DE9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16DE9Cu;
label_16de9c:
    // 0x16de9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16de9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16dea0:
    // 0x16dea0: 0xc04c6dc  jal         func_131B70
label_16dea4:
    if (ctx->pc == 0x16DEA4u) {
        ctx->pc = 0x16DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEA0u;
        // 0x16dea4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DEA8u;
        goto label_16dea8;
    }
    ctx->pc = 0x16DEA0u;
    SET_GPR_U32(ctx, 31, 0x16DEA8u);
    ctx->pc = 0x16DEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DEA0u;
    // 0x16dea4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x16DEA0u, 0x16DEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DEA8u;
label_16dea8:
    // 0x16dea8: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x16dea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_16deac:
    // 0x16deac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16deacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16deb0:
    // 0x16deb0: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x16deb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_16deb4:
    // 0x16deb4: 0x320f809  jalr        $t9
label_16deb8:
    if (ctx->pc == 0x16DEB8u) {
        ctx->pc = 0x16DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEB4u;
        // 0x16deb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DEBCu;
        goto label_16debc;
    }
    ctx->pc = 0x16DEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16DEBCu);
        ctx->pc = 0x16DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEB4u;
        // 0x16deb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DEB4u, 0x16DEBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16DEBCu;
label_16debc:
    // 0x16debc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16debcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16dec0:
    // 0x16dec0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16dec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16dec4:
    // 0x16dec4: 0xc04c72c  jal         func_131CB0
label_16dec8:
    if (ctx->pc == 0x16DEC8u) {
        ctx->pc = 0x16DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEC4u;
        // 0x16dec8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DECCu;
        goto label_16decc;
    }
    ctx->pc = 0x16DEC4u;
    SET_GPR_U32(ctx, 31, 0x16DECCu);
    ctx->pc = 0x16DEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DEC4u;
    // 0x16dec8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x16DEC4u, 0x16DECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DECCu;
label_16decc:
    // 0x16decc: 0x12400047  beqz        $s2, . + 4 + (0x47 << 2)
label_16ded0:
    if (ctx->pc == 0x16DED0u) {
        ctx->pc = 0x16DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DECCu;
        // 0x16ded0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DED4u;
        goto label_16ded4;
    }
    ctx->pc = 0x16DECCu;
    {
        const bool branch_taken_0x16decc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DECCu;
        // 0x16ded0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16decc) {
            ctx->pc = 0x16DFECu;
            return;
        }
    }
    ctx->pc = 0x16DED4u;
label_16ded4:
    // 0x16ded4: 0x1642000a  bne         $s2, $v0, . + 4 + (0xA << 2)
label_16ded8:
    if (ctx->pc == 0x16DED8u) {
        ctx->pc = 0x16DEDCu;
        goto label_16dedc;
    }
    ctx->pc = 0x16DED4u;
    {
        const bool branch_taken_0x16ded4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ded4) {
            ctx->pc = 0x16DF00u;
            return;
        }
    }
    ctx->pc = 0x16DEDCu;
label_16dedc:
    // 0x16dedc: 0xc66d021c  lwc1        $f13, 0x21C($s3)
    ctx->pc = 0x16dedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_16dee0:
    // 0x16dee0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x16dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_16dee4:
    // 0x16dee4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16dee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16dee8:
    // 0x16dee8: 0xc05be24  jal         func_16F890
label_16deec:
    if (ctx->pc == 0x16DEECu) {
        ctx->pc = 0x16DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEE8u;
        // 0x16deec: 0x460da382  mul.s       $f14, $f20, $f13 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DEF0u;
        goto label_16def0;
    }
    ctx->pc = 0x16DEE8u;
    SET_GPR_U32(ctx, 31, 0x16DEF0u);
    ctx->pc = 0x16DEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DEE8u;
    // 0x16deec: 0x460da382  mul.s       $f14, $f20, $f13 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F890u, 0x16DEE8u, 0x16DEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DEF0u;
label_16def0:
    // 0x16def0: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x16def0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16def4:
    // 0x16def4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16def4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_16def8:
    // 0x16def8: 0x1000003c  b           . + 4 + (0x3C << 2)
label_16defc:
    if (ctx->pc == 0x16DEFCu) {
        ctx->pc = 0x16DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEF8u;
        // 0x16defc: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DF00u;
        goto label_fallthrough_0x16def8;
    }
    ctx->pc = 0x16DEF8u;
    {
        const bool branch_taken_0x16def8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEF8u;
        // 0x16defc: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16def8) {
            ctx->pc = 0x16DFECu;
            return;
        }
    }
label_fallthrough_0x16def8:
    ctx->pc = 0x16DF00u;
}
