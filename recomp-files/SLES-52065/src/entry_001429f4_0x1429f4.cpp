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

// Function: entry_001429f4
// Address: 0x1429f4 - 0x142af8
void entry_001429f4_0x1429f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001429f4_0x1429f4");
#endif

    switch (ctx->pc) {
        case 0x142a00u: goto label_142a00;
        case 0x142a44u: goto label_142a44;
        case 0x142a58u: goto label_142a58;
        case 0x142a9cu: goto label_142a9c;
        case 0x142ab4u: goto label_142ab4;
        case 0x142ac0u: goto label_142ac0;
        case 0x142ad0u: goto label_142ad0;
        case 0x142ae8u: goto label_142ae8;
        default: break;
    }

    ctx->pc = 0x1429f4u;

    // 0x1429f4: 0xc7d40010  lwc1        $f20, 0x10($fp)
    ctx->pc = 0x1429f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1429f8: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x1429F8u;
    SET_GPR_U32(ctx, 31, 0x142A00u);
    ctx->pc = 0x1429FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1429F8u;
    // 0x1429fc: 0x27c4003c  addiu       $a0, $fp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x1429F8u, 0x142A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142A00u;
label_142a00:
    // 0x142a00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x142a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142a04: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x142a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x142a08: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x142a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x142a0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x142a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x142a10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x142a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x142a14: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x142a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x142a18: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x142a18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142a1c: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x142a1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x142a20: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x142a20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x142a24: 0x10400092  beqz        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x142A24u;
    {
        const bool branch_taken_0x142a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142a24) {
            ctx->pc = 0x142C70u;
            return;
        }
    }
    ctx->pc = 0x142A2Cu;
    // 0x142a2c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x142a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142a30: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x142a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x142a34: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x142A34u;
    {
        const bool branch_taken_0x142a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142A34u;
        // 0x142a38: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a34) {
            ctx->pc = 0x142AF8u;
            return;
        }
    }
    ctx->pc = 0x142A3Cu;
    // 0x142a3c: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x142A3Cu;
    SET_GPR_U32(ctx, 31, 0x142A44u);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x142A3Cu, 0x142A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142A44u;
label_142a44:
    // 0x142a44: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x142a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x142a48: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x142a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x142a4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x142a4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x142a50: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x142A50u;
    SET_GPR_U32(ctx, 31, 0x142A58u);
    ctx->pc = 0x142A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142A50u;
    // 0x142a54: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x142A50u, 0x142A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142A58u;
label_142a58:
    // 0x142a58: 0xc7a10200  lwc1        $f1, 0x200($sp)
    ctx->pc = 0x142a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142a5c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x142a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x142a60: 0xc7a20204  lwc1        $f2, 0x204($sp)
    ctx->pc = 0x142a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x142a64: 0xc7a30208  lwc1        $f3, 0x208($sp)
    ctx->pc = 0x142a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x142a68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142a6c: 0x0  nop
    ctx->pc = 0x142a6cu;
    // NOP
    // 0x142a70: 0xe7a101c0  swc1        $f1, 0x1C0($sp)
    ctx->pc = 0x142a70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x142a74: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x142a74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x142a78: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x142a78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x142a7c: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x142a7cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x142a80: 0xe7a201d4  swc1        $f2, 0x1D4($sp)
    ctx->pc = 0x142a80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
    // 0x142a84: 0xe7a301e8  swc1        $f3, 0x1E8($sp)
    ctx->pc = 0x142a84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x142a88: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x142a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x142a8c: 0x0  nop
    ctx->pc = 0x142a8cu;
    // NOP
    // 0x142a90: 0x0  nop
    ctx->pc = 0x142a90u;
    // NOP
    // 0x142a94: 0xc04c730  jal         func_131CC0
    ctx->pc = 0x142A94u;
    SET_GPR_U32(ctx, 31, 0x142A9Cu);
    ctx->pc = 0x131CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CC0u, 0x142A94u, 0x142A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142A9Cu;
label_142a9c:
    // 0x142a9c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x142a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x142aa0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x142aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x142aa4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x142aa4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x142aa8: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x142aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x142aac: 0xc061ad0  jal         func_186B40
    ctx->pc = 0x142AACu;
    SET_GPR_U32(ctx, 31, 0x142AB4u);
    ctx->pc = 0x142AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142AACu;
    // 0x142ab0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186B40u, 0x142AACu, 0x142AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142AB4u;
label_142ab4:
    // 0x142ab4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x142ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x142ab8: 0xc061d70  jal         func_1875C0
    ctx->pc = 0x142AB8u;
    SET_GPR_U32(ctx, 31, 0x142AC0u);
    ctx->pc = 0x142ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142AB8u;
    // 0x142abc: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1875C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1875C0u, 0x142AB8u, 0x142AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142AC0u;
label_142ac0:
    // 0x142ac0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x142ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x142ac4: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x142ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x142ac8: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x142AC8u;
    SET_GPR_U32(ctx, 31, 0x142AD0u);
    ctx->pc = 0x142ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142AC8u;
    // 0x142acc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x142AC8u, 0x142AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142AD0u;
label_142ad0:
    // 0x142ad0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x142ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x142ad4: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x142ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x142ad8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x142ad8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x142adc: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x142adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x142ae0: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x142AE0u;
    SET_GPR_U32(ctx, 31, 0x142AE8u);
    ctx->pc = 0x142AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142AE0u;
    // 0x142ae4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x142AE0u, 0x142AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142AE8u;
label_142ae8:
    // 0x142ae8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x142ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x142aec: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x142aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x142af0: 0xc07d382  jal         func_1F4E08
    ctx->pc = 0x142AF0u;
    SET_GPR_U32(ctx, 31, 0x142AF8u);
    ctx->pc = 0x142AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142AF0u;
    // 0x142af4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E08u, 0x142AF0u, 0x142AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142AF8u;
}
