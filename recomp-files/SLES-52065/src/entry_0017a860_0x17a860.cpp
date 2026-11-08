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

// Function: entry_0017a860
// Address: 0x17a860 - 0x17a910
void entry_0017a860_0x17a860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a860_0x17a860");
#endif

    switch (ctx->pc) {
        case 0x17a894u: goto label_17a894;
        case 0x17a8a8u: goto label_17a8a8;
        case 0x17a8bcu: goto label_17a8bc;
        default: break;
    }

    ctx->pc = 0x17a860u;

label_17a860:
    // 0x17a860: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x17a860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_17a864:
    // 0x17a864: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x17a864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_17a868:
    // 0x17a868: 0x244276d0  addiu       $v0, $v0, 0x76D0
    ctx->pc = 0x17a868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30416));
label_17a86c:
    // 0x17a86c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x17a86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_17a870:
    // 0x17a870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17a874:
    // 0x17a874: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x17a874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_17a878:
    // 0x17a878: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17a878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17a87c:
    // 0x17a87c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17a880:
    // 0x17a880: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17a880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_17a884:
    // 0x17a884: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x17a884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_17a888:
    // 0x17a888: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x17a888u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17a88c:
    // 0x17a88c: 0xc04c6d8  jal         func_131B60
label_17a890:
    if (ctx->pc == 0x17A890u) {
        ctx->pc = 0x17A890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A88Cu;
        // 0x17a890: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A894u;
        goto label_17a894;
    }
    ctx->pc = 0x17A88Cu;
    SET_GPR_U32(ctx, 31, 0x17A894u);
    ctx->pc = 0x17A890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A88Cu;
    // 0x17a890: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B60u, 0x17A88Cu, 0x17A894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A894u;
label_17a894:
    // 0x17a894: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x17a894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_17a898:
    // 0x17a898: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x17a898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_17a89c:
    // 0x17a89c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_17a8a0:
    // 0x17a8a0: 0xc05c550  jal         func_171540
label_17a8a4:
    if (ctx->pc == 0x17A8A4u) {
        ctx->pc = 0x17A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A8A0u;
        // 0x17a8a4: 0x24450220  addiu       $a1, $v0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A8A8u;
        goto label_17a8a8;
    }
    ctx->pc = 0x17A8A0u;
    SET_GPR_U32(ctx, 31, 0x17A8A8u);
    ctx->pc = 0x17A8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A8A0u;
    // 0x17a8a4: 0x24450220  addiu       $a1, $v0, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x17A8A0u, 0x17A8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A8A8u;
label_17a8a8:
    // 0x17a8a8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x17a8a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17a8ac:
    // 0x17a8ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17a8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17a8b0:
    // 0x17a8b0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x17a8b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_17a8b4:
    // 0x17a8b4: 0x320f809  jalr        $t9
label_17a8b8:
    if (ctx->pc == 0x17A8B8u) {
        ctx->pc = 0x17A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A8B4u;
        // 0x17a8b8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A8BCu;
        goto label_17a8bc;
    }
    ctx->pc = 0x17A8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17A8BCu);
        ctx->pc = 0x17A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A8B4u;
        // 0x17a8b8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A8B4u, 0x17A8BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A8BCu;
label_17a8bc:
    // 0x17a8bc: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x17a8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_17a8c0:
    // 0x17a8c0: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x17a8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_17a8c4:
    // 0x17a8c4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x17a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_17a8c8:
    // 0x17a8c8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x17a8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_17a8cc:
    // 0x17a8cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17a8ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17a8d0:
    // 0x17a8d0: 0xc7838020  lwc1        $f3, -0x7FE0($gp)
    ctx->pc = 0x17a8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_17a8d4:
    // 0x17a8d4: 0xc482022c  lwc1        $f2, 0x22C($a0)
    ctx->pc = 0x17a8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17a8d8:
    // 0x17a8d8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x17a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_17a8dc:
    // 0x17a8dc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x17a8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_17a8e0:
    // 0x17a8e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17a8e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17a8e4:
    // 0x17a8e4: 0x0  nop
    ctx->pc = 0x17a8e4u;
    // NOP
label_17a8e8:
    // 0x17a8e8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x17a8e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_17a8ec:
    // 0x17a8ec: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x17a8ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_17a8f0:
    // 0x17a8f0: 0xe481022c  swc1        $f1, 0x22C($a0)
    ctx->pc = 0x17a8f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 556), bits); }
label_17a8f4:
    // 0x17a8f4: 0x46000846  mov.s       $f1, $f1
    ctx->pc = 0x17a8f4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[1]);
label_17a8f8:
    // 0x17a8f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17a8f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17a8fc:
    // 0x17a8fc: 0x0  nop
    ctx->pc = 0x17a8fcu;
    // NOP
label_17a900:
    // 0x17a900: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_17a904:
    if (ctx->pc == 0x17A904u) {
        ctx->pc = 0x17A908u;
        goto label_17a908;
    }
    ctx->pc = 0x17A900u;
    {
        const bool branch_taken_0x17a900 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17a900) {
            ctx->pc = 0x17A910u;
            return;
        }
    }
    ctx->pc = 0x17A908u;
label_17a908:
    // 0x17a908: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17a908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_17a90c:
    // 0x17a90c: 0xe480022c  swc1        $f0, 0x22C($a0)
    ctx->pc = 0x17a90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 556), bits); }
    ctx->pc = 0x17a910u;
}
