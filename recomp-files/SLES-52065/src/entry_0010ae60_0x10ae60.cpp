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

// Function: entry_0010ae60
// Address: 0x10ae60 - 0x10af14
void entry_0010ae60_0x10ae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ae60_0x10ae60");
#endif

    switch (ctx->pc) {
        case 0x10ae78u: goto label_10ae78;
        case 0x10ae88u: goto label_10ae88;
        case 0x10ae90u: goto label_10ae90;
        case 0x10af04u: goto label_10af04;
        default: break;
    }

    ctx->pc = 0x10ae60u;

label_10ae60:
    // 0x10ae60: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10ae60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10ae64:
    // 0x10ae64: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x10ae64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10ae68:
    // 0x10ae68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10ae68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10ae6c:
    // 0x10ae6c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x10ae6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_10ae70:
    // 0x10ae70: 0x320f809  jalr        $t9
label_10ae74:
    if (ctx->pc == 0x10AE74u) {
        ctx->pc = 0x10AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE70u;
        // 0x10ae74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AE78u;
        goto label_10ae78;
    }
    ctx->pc = 0x10AE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10AE78u);
        ctx->pc = 0x10AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE70u;
        // 0x10ae74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AE70u, 0x10AE78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10AE78u;
label_10ae78:
    // 0x10ae78: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x10ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_10ae7c:
    // 0x10ae7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ae7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ae80:
    // 0x10ae80: 0xc0430e8  jal         func_10C3A0
label_10ae84:
    if (ctx->pc == 0x10AE84u) {
        ctx->pc = 0x10AE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE80u;
        // 0x10ae84: 0xa60243f0  sh          $v0, 0x43F0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 17392), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AE88u;
        goto label_10ae88;
    }
    ctx->pc = 0x10AE80u;
    SET_GPR_U32(ctx, 31, 0x10AE88u);
    ctx->pc = 0x10AE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE80u;
    // 0x10ae84: 0xa60243f0  sh          $v0, 0x43F0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 17392), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C3A0u, 0x10AE80u, 0x10AE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE88u;
label_10ae88:
    // 0x10ae88: 0xc043114  jal         func_10C450
label_10ae8c:
    if (ctx->pc == 0x10AE8Cu) {
        ctx->pc = 0x10AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE88u;
        // 0x10ae8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AE90u;
        goto label_10ae90;
    }
    ctx->pc = 0x10AE88u;
    SET_GPR_U32(ctx, 31, 0x10AE90u);
    ctx->pc = 0x10AE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE88u;
    // 0x10ae8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C450u, 0x10AE88u, 0x10AE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE90u;
label_10ae90:
    // 0x10ae90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_10ae94:
    // 0x10ae94: 0xa20043f2  sb          $zero, 0x43F2($s0)
    ctx->pc = 0x10ae94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17394), (uint8_t)GPR_U32(ctx, 0));
label_10ae98:
    // 0x10ae98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10ae98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10ae9c:
    // 0x10ae9c: 0x8e0343e4  lw          $v1, 0x43E4($s0)
    ctx->pc = 0x10ae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17380)));
label_10aea0:
    // 0x10aea0: 0x8e0243d0  lw          $v0, 0x43D0($s0)
    ctx->pc = 0x10aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17360)));
label_10aea4:
    // 0x10aea4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10aea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10aea8:
    // 0x10aea8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10aeac:
    // 0x10aeac: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x10aeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10aeb0:
    // 0x10aeb0: 0xe6000258  swc1        $f0, 0x258($s0)
    ctx->pc = 0x10aeb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
label_10aeb4:
    // 0x10aeb4: 0x8603230c  lh          $v1, 0x230C($s0)
    ctx->pc = 0x10aeb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8972)));
label_10aeb8:
    // 0x10aeb8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10aebc:
    // 0x10aebc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10aec0:
    // 0x10aec0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10aec4:
    // 0x10aec4: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x10aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10aec8:
    // 0x10aec8: 0xe4400258  swc1        $f0, 0x258($v0)
    ctx->pc = 0x10aec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 600), bits); }
label_10aecc:
    // 0x10aecc: 0x8603230e  lh          $v1, 0x230E($s0)
    ctx->pc = 0x10aeccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8974)));
label_10aed0:
    // 0x10aed0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10aed4:
    // 0x10aed4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10aed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10aed8:
    // 0x10aed8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10aedc:
    // 0x10aedc: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x10aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10aee0:
    // 0x10aee0: 0xe4400258  swc1        $f0, 0x258($v0)
    ctx->pc = 0x10aee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 600), bits); }
label_10aee4:
    // 0x10aee4: 0x86032310  lh          $v1, 0x2310($s0)
    ctx->pc = 0x10aee4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8976)));
label_10aee8:
    // 0x10aee8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10aeec:
    // 0x10aeec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10aeecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10aef0:
    // 0x10aef0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10aef4:
    // 0x10aef4: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x10aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10aef8:
    // 0x10aef8: 0xe4400258  swc1        $f0, 0x258($v0)
    ctx->pc = 0x10aef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 600), bits); }
label_10aefc:
    // 0x10aefc: 0xc04c72c  jal         func_131CB0
label_10af00:
    if (ctx->pc == 0x10AF00u) {
        ctx->pc = 0x10AF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AEFCu;
        // 0x10af00: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AF04u;
        goto label_10af04;
    }
    ctx->pc = 0x10AEFCu;
    SET_GPR_U32(ctx, 31, 0x10AF04u);
    ctx->pc = 0x10AF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AEFCu;
    // 0x10af00: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x10AEFCu, 0x10AF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF04u;
label_10af04:
    // 0x10af04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10af04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10af08:
    // 0x10af08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10af08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10af0c:
    // 0x10af0c: 0x3e00008  jr          $ra
label_10af10:
    if (ctx->pc == 0x10AF10u) {
        ctx->pc = 0x10AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF0Cu;
        // 0x10af10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AF14u;
        goto label_fallthrough_0x10af0c;
    }
    ctx->pc = 0x10AF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF0Cu;
        // 0x10af10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10af0c:
    ctx->pc = 0x10AF14u;
}
