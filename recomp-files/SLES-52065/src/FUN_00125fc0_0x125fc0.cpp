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

// Function: FUN_00125fc0
// Address: 0x125fc0 - 0x126180
void FUN_00125fc0_0x125fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00125fc0_0x125fc0");
#endif

    switch (ctx->pc) {
        case 0x126004u: goto label_126004;
        case 0x12600cu: goto label_12600c;
        case 0x12601cu: goto label_12601c;
        case 0x12607cu: goto label_12607c;
        case 0x126088u: goto label_126088;
        case 0x126098u: goto label_126098;
        case 0x1260a4u: goto label_1260a4;
        case 0x1260c4u: goto label_1260c4;
        case 0x1260fcu: goto label_1260fc;
        case 0x12611cu: goto label_12611c;
        case 0x12612cu: goto label_12612c;
        case 0x12613cu: goto label_12613c;
        case 0x12614cu: goto label_12614c;
        case 0x126158u: goto label_126158;
        case 0x126164u: goto label_126164;
        default: break;
    }

    ctx->pc = 0x125fc0u;

    // 0x125fc0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x125fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x125fc4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x125fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x125fc8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x125fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x125fcc: 0x24420b70  addiu       $v0, $v0, 0xB70
    ctx->pc = 0x125fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2928));
    // 0x125fd0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x125fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x125fd4: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x125fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x125fd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x125fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x125fdc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x125fdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125fe0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x125fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x125fe4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x125fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125fe8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x125fe8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x125fec: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x125fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x125ff0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x125ff0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x210B70u));
    // 0x125ff4: 0x26450080  addiu       $a1, $s2, 0x80
    ctx->pc = 0x125ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x125ff8: 0x26460070  addiu       $a2, $s2, 0x70
    ctx->pc = 0x125ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x125ffc: 0xc07d370  jal         func_1F4DC0
    ctx->pc = 0x125FFCu;
    SET_GPR_U32(ctx, 31, 0x126004u);
    ctx->pc = 0x126000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125FFCu;
    // 0x126000: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x125FFCu, 0x126004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126004u;
label_126004:
    // 0x126004: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x126004u;
    SET_GPR_U32(ctx, 31, 0x12600Cu);
    ctx->pc = 0x126008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126004u;
    // 0x126008: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x126004u, 0x12600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12600Cu;
label_12600c:
    // 0x12600c: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x12600cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x126010: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x126010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x126014: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x126014u;
    SET_GPR_U32(ctx, 31, 0x12601Cu);
    ctx->pc = 0x126018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126014u;
    // 0x126018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x126014u, 0x12601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12601Cu;
label_12601c:
    // 0x12601c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x12601cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126020: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x126020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x126024: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x126024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x126028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x126028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12602c: 0x0  nop
    ctx->pc = 0x12602cu;
    // NOP
    // 0x126030: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x126030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126034: 0x0  nop
    ctx->pc = 0x126034u;
    // NOP
    // 0x126038: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x126038u;
    {
        const bool branch_taken_0x126038 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126038u;
        // 0x12603c: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126038) {
            ctx->pc = 0x126064u;
            goto label_126064;
        }
    }
    ctx->pc = 0x126040u;
    // 0x126040: 0x3c02bf7d  lui         $v0, 0xBF7D
    ctx->pc = 0x126040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49021 << 16));
    // 0x126044: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x126044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x126048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x126048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12604c: 0x0  nop
    ctx->pc = 0x12604cu;
    // NOP
    // 0x126050: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x126050u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126054: 0x0  nop
    ctx->pc = 0x126054u;
    // NOP
    // 0x126058: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x126058u;
    {
        const bool branch_taken_0x126058 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126058u;
        // 0x12605c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126058) {
            ctx->pc = 0x126070u;
            goto label_126070;
        }
    }
    ctx->pc = 0x126060u;
    // 0x126060: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x126060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_126064:
    // 0x126064: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x126064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x126068: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x126068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x12606c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x12606cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_126070:
    // 0x126070: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x126070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x126074: 0xc07d300  jal         func_1F4C00
    ctx->pc = 0x126074u;
    SET_GPR_U32(ctx, 31, 0x12607Cu);
    ctx->pc = 0x126078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126074u;
    // 0x126078: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C00u, 0x126074u, 0x12607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12607Cu;
label_12607c:
    // 0x12607c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12607cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x126080: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x126080u;
    SET_GPR_U32(ctx, 31, 0x126088u);
    ctx->pc = 0x126084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126080u;
    // 0x126084: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x126080u, 0x126088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126088u;
label_126088:
    // 0x126088: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x126088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12608c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x12608cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x126090: 0xc07d300  jal         func_1F4C00
    ctx->pc = 0x126090u;
    SET_GPR_U32(ctx, 31, 0x126098u);
    ctx->pc = 0x126094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126090u;
    // 0x126094: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C00u, 0x126090u, 0x126098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126098u;
label_126098:
    // 0x126098: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x126098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12609c: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x12609Cu;
    SET_GPR_U32(ctx, 31, 0x1260A4u);
    ctx->pc = 0x1260A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12609Cu;
    // 0x1260a0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x12609Cu, 0x1260A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1260A4u;
label_1260a4:
    // 0x1260a4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1260a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1260a8: 0x34430fd8  ori         $v1, $v0, 0xFD8
    ctx->pc = 0x1260a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x1260ac: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1260acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1260b0: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x1260b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x1260b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1260b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1260b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1260b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1260bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1260BCu;
    {
        const bool branch_taken_0x1260bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1260C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260BCu;
        // 0x1260c0: 0xc6540090  lwc1        $f20, 0x90($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1260bc) {
            ctx->pc = 0x1260C8u;
            goto label_1260c8;
        }
    }
    ctx->pc = 0x1260C4u;
label_1260c4:
    // 0x1260c4: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x1260c4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_1260c8:
    // 0x1260c8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1260c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1260cc: 0x0  nop
    ctx->pc = 0x1260ccu;
    // NOP
    // 0x1260d0: 0x0  nop
    ctx->pc = 0x1260d0u;
    // NOP
    // 0x1260d4: 0x4501fffb  bc1t        . + 4 + (-0x5 << 2)
    ctx->pc = 0x1260D4u;
    {
        const bool branch_taken_0x1260d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1260d4) {
            ctx->pc = 0x1260C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1260c4;
        }
    }
    ctx->pc = 0x1260DCu;
    // 0x1260dc: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1260dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1260e0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1260e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1260e4: 0x34630fd8  ori         $v1, $v1, 0xFD8
    ctx->pc = 0x1260e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4056);
    // 0x1260e8: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x1260e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x1260ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1260ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1260f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1260f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1260f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1260F4u;
    {
        const bool branch_taken_0x1260f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1260f4) {
            ctx->pc = 0x126100u;
            goto label_126100;
        }
    }
    ctx->pc = 0x1260FCu;
label_1260fc:
    // 0x1260fc: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x1260fcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_126100:
    // 0x126100: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x126100u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126104: 0x0  nop
    ctx->pc = 0x126104u;
    // NOP
    // 0x126108: 0x0  nop
    ctx->pc = 0x126108u;
    // NOP
    // 0x12610c: 0x4500fffb  bc1f        . + 4 + (-0x5 << 2)
    ctx->pc = 0x12610Cu;
    {
        const bool branch_taken_0x12610c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12610c) {
            ctx->pc = 0x1260FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1260fc;
        }
    }
    ctx->pc = 0x126114u;
    // 0x126114: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x126114u;
    SET_GPR_U32(ctx, 31, 0x12611Cu);
    ctx->pc = 0x126118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126114u;
    // 0x126118: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x126114u, 0x12611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12611Cu;
label_12611c:
    // 0x12611c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x12611cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x126120: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x126120u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x126124: 0xc07d3d4  jal         func_1F4F50
    ctx->pc = 0x126124u;
    SET_GPR_U32(ctx, 31, 0x12612Cu);
    ctx->pc = 0x126128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126124u;
    // 0x126128: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F50u, 0x126124u, 0x12612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12612Cu;
label_12612c:
    // 0x12612c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12612cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x126130: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x126130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x126134: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x126134u;
    SET_GPR_U32(ctx, 31, 0x12613Cu);
    ctx->pc = 0x126138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126134u;
    // 0x126138: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x126134u, 0x12613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12613Cu;
label_12613c:
    // 0x12613c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12613cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x126140: 0x26460070  addiu       $a2, $s2, 0x70
    ctx->pc = 0x126140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x126144: 0xc07d382  jal         func_1F4E08
    ctx->pc = 0x126144u;
    SET_GPR_U32(ctx, 31, 0x12614Cu);
    ctx->pc = 0x126148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126144u;
    // 0x126148: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E08u, 0x126144u, 0x12614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12614Cu;
label_12614c:
    // 0x12614c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x12614cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x126150: 0xc07d334  jal         func_1F4CD0
    ctx->pc = 0x126150u;
    SET_GPR_U32(ctx, 31, 0x126158u);
    ctx->pc = 0x126154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126150u;
    // 0x126154: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4CD0u, 0x126150u, 0x126158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126158u;
label_126158:
    // 0x126158: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12615c: 0xc049730  jal         func_125CC0
    ctx->pc = 0x12615Cu;
    SET_GPR_U32(ctx, 31, 0x126164u);
    ctx->pc = 0x126160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12615Cu;
    // 0x126160: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125CC0u, 0x12615Cu, 0x126164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126164u;
label_126164:
    // 0x126164: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x126164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x126168: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x126168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12616c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x12616cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126170: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x126170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126174: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x126174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126178: 0x3e00008  jr          $ra
    ctx->pc = 0x126178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126178u;
        // 0x12617c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126180u;
}
