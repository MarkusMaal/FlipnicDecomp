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

// Function: entry_00129b84
// Address: 0x129b84 - 0x129c2c
void entry_00129b84_0x129b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129b84_0x129b84");
#endif

    switch (ctx->pc) {
        case 0x129bb4u: goto label_129bb4;
        case 0x129bbcu: goto label_129bbc;
        case 0x129be8u: goto label_129be8;
        case 0x129bf8u: goto label_129bf8;
        case 0x129c08u: goto label_129c08;
        case 0x129c18u: goto label_129c18;
        default: break;
    }

    ctx->pc = 0x129b84u;

label_129b84:
    // 0x129b84: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x129b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_129b88:
    // 0x129b88: 0x24630df0  addiu       $v1, $v1, 0xDF0
    ctx->pc = 0x129b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3568));
label_129b8c:
    // 0x129b8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x129b8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129b90:
    // 0x129b90: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x129b90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_129b94:
    // 0x129b94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x129b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_129b98:
    // 0x129b98: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x129b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129b9c:
    // 0x129b9c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x129b9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129ba0:
    // 0x129ba0: 0x0  nop
    ctx->pc = 0x129ba0u;
    // NOP
label_129ba4:
    // 0x129ba4: 0x45010021  bc1t        . + 4 + (0x21 << 2)
label_129ba8:
    if (ctx->pc == 0x129BA8u) {
        ctx->pc = 0x129BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BA4u;
        // 0x129ba8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129BACu;
        goto label_129bac;
    }
    ctx->pc = 0x129BA4u;
    {
        const bool branch_taken_0x129ba4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x129BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BA4u;
        // 0x129ba8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ba4) {
            ctx->pc = 0x129C2Cu;
            return;
        }
    }
    ctx->pc = 0x129BACu;
label_129bac:
    // 0x129bac: 0xc07d3ac  jal         func_1F4EB0
label_129bb0:
    if (ctx->pc == 0x129BB0u) {
        ctx->pc = 0x129BB4u;
        goto label_129bb4;
    }
    ctx->pc = 0x129BACu;
    SET_GPR_U32(ctx, 31, 0x129BB4u);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x129BACu, 0x129BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129BB4u;
label_129bb4:
    // 0x129bb4: 0xc07d3ac  jal         func_1F4EB0
label_129bb8:
    if (ctx->pc == 0x129BB8u) {
        ctx->pc = 0x129BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BB4u;
        // 0x129bb8: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129BBCu;
        goto label_129bbc;
    }
    ctx->pc = 0x129BB4u;
    SET_GPR_U32(ctx, 31, 0x129BBCu);
    ctx->pc = 0x129BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129BB4u;
    // 0x129bb8: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x129BB4u, 0x129BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129BBCu;
label_129bbc:
    // 0x129bbc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x129bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_129bc0:
    // 0x129bc0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x129bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_129bc4:
    // 0x129bc4: 0x24420df0  addiu       $v0, $v0, 0xDF0
    ctx->pc = 0x129bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3568));
label_129bc8:
    // 0x129bc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x129bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_129bcc:
    // 0x129bcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x129bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_129bd0:
    // 0x129bd0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x129bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_129bd4:
    // 0x129bd4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x129bd4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_129bd8:
    // 0x129bd8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x129bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_129bdc:
    // 0x129bdc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x129bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_129be0:
    // 0x129be0: 0xc04c6d8  jal         func_131B60
label_129be4:
    if (ctx->pc == 0x129BE4u) {
        ctx->pc = 0x129BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BE0u;
        // 0x129be4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129BE8u;
        goto label_129be8;
    }
    ctx->pc = 0x129BE0u;
    SET_GPR_U32(ctx, 31, 0x129BE8u);
    ctx->pc = 0x129BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129BE0u;
    // 0x129be4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B60u, 0x129BE0u, 0x129BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129BE8u;
label_129be8:
    // 0x129be8: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x129be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_129bec:
    // 0x129bec: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x129becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_129bf0:
    // 0x129bf0: 0xc07d428  jal         func_1F50A0
label_129bf4:
    if (ctx->pc == 0x129BF4u) {
        ctx->pc = 0x129BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BF0u;
        // 0x129bf4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129BF8u;
        goto label_129bf8;
    }
    ctx->pc = 0x129BF0u;
    SET_GPR_U32(ctx, 31, 0x129BF8u);
    ctx->pc = 0x129BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129BF0u;
    // 0x129bf4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x129BF0u, 0x129BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129BF8u;
label_129bf8:
    // 0x129bf8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x129bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_129bfc:
    // 0x129bfc: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x129bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_129c00:
    // 0x129c00: 0xc07d2ee  jal         func_1F4BB8
label_129c04:
    if (ctx->pc == 0x129C04u) {
        ctx->pc = 0x129C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C00u;
        // 0x129c04: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129C08u;
        goto label_129c08;
    }
    ctx->pc = 0x129C00u;
    SET_GPR_U32(ctx, 31, 0x129C08u);
    ctx->pc = 0x129C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129C00u;
    // 0x129c04: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x129C00u, 0x129C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129C08u;
label_129c08:
    // 0x129c08: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x129c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_129c0c:
    // 0x129c0c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x129c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_129c10:
    // 0x129c10: 0xc07d2ee  jal         func_1F4BB8
label_129c14:
    if (ctx->pc == 0x129C14u) {
        ctx->pc = 0x129C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C10u;
        // 0x129c14: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129C18u;
        goto label_129c18;
    }
    ctx->pc = 0x129C10u;
    SET_GPR_U32(ctx, 31, 0x129C18u);
    ctx->pc = 0x129C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129C10u;
    // 0x129c14: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x129C10u, 0x129C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129C18u;
label_129c18:
    // 0x129c18: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x129c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_129c1c:
    // 0x129c1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x129c1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_129c20:
    // 0x129c20: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x129c20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_129c24:
    // 0x129c24: 0x320f809  jalr        $t9
label_129c28:
    if (ctx->pc == 0x129C28u) {
        ctx->pc = 0x129C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C24u;
        // 0x129c28: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129C2Cu;
        goto label_fallthrough_0x129c24;
    }
    ctx->pc = 0x129C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x129C2Cu);
        ctx->pc = 0x129C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C24u;
        // 0x129c28: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129C24u, 0x129C2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x129c24:
    ctx->pc = 0x129C2Cu;
}
