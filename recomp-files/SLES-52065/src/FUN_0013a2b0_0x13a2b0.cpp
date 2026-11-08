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

// Function: FUN_0013a2b0
// Address: 0x13a2b0 - 0x13a3cc
void FUN_0013a2b0_0x13a2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013a2b0_0x13a2b0");
#endif

    switch (ctx->pc) {
        case 0x13a2d0u: goto label_13a2d0;
        case 0x13a2dcu: goto label_13a2dc;
        case 0x13a2e8u: goto label_13a2e8;
        case 0x13a2f4u: goto label_13a2f4;
        case 0x13a300u: goto label_13a300;
        case 0x13a3b0u: goto label_13a3b0;
        default: break;
    }

    ctx->pc = 0x13a2b0u;

    // 0x13a2b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13a2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13a2b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13a2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13a2b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13a2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13a2bc: 0x8f848580  lw          $a0, -0x7A80($gp)
    ctx->pc = 0x13a2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935936)));
    // 0x13a2c0: 0x1080003e  beqz        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x13A2C0u;
    {
        const bool branch_taken_0x13a2c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a2c0) {
            ctx->pc = 0x13A3BCu;
            goto label_13a3bc;
        }
    }
    ctx->pc = 0x13A2C8u;
    // 0x13a2c8: 0xc04e8fc  jal         func_13A3F0
    ctx->pc = 0x13A2C8u;
    SET_GPR_U32(ctx, 31, 0x13A2D0u);
    ctx->pc = 0x13A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A3F0u, 0x13A2C8u, 0x13A2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A2D0u;
label_13a2d0:
    // 0x13a2d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x13a2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a2d4: 0xc04e8f8  jal         func_13A3E0
    ctx->pc = 0x13A2D4u;
    SET_GPR_U32(ctx, 31, 0x13A2DCu);
    ctx->pc = 0x13A2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A2D4u;
    // 0x13a2d8: 0x27a40028  addiu       $a0, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A3E0u, 0x13A2D4u, 0x13A2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A2DCu;
label_13a2dc:
    // 0x13a2dc: 0x8fb00028  lw          $s0, 0x28($sp)
    ctx->pc = 0x13a2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13a2e0: 0xc04e8f4  jal         func_13A3D0
    ctx->pc = 0x13A2E0u;
    SET_GPR_U32(ctx, 31, 0x13A2E8u);
    ctx->pc = 0x13A2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A2E0u;
    // 0x13a2e4: 0x8f848580  lw          $a0, -0x7A80($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935936)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A3D0u, 0x13A2E0u, 0x13A2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A2E8u;
label_13a2e8:
    // 0x13a2e8: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x13a2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x13a2ec: 0xc04e8f8  jal         func_13A3E0
    ctx->pc = 0x13A2ECu;
    SET_GPR_U32(ctx, 31, 0x13A2F4u);
    ctx->pc = 0x13A2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A2ECu;
    // 0x13a2f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A3E0u, 0x13A2ECu, 0x13A2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A2F4u;
label_13a2f4:
    // 0x13a2f4: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x13a2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    // 0x13a2f8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x13A2F8u;
    {
        const bool branch_taken_0x13a2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A2F8u;
        // 0x13a2fc: 0x8fb0002c  lw          $s0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a2f8) {
            ctx->pc = 0x13A3B0u;
            goto label_13a3b0;
        }
    }
    ctx->pc = 0x13A300u;
label_13a300:
    // 0x13a300: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x13a300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x13a304: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13a304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13a308: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x13a308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13a30c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x13a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13a310: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x13a310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a314: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x13a314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x13a318: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x13a318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a31c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13a31cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13a320: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x13a320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x13a324: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x13a324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13a328: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x13a328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13a32c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x13a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13a330: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x13a330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a334: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x13a334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x13a338: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x13a338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a33c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13a33cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13a340: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x13a340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x13a344: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x13a344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13a348: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x13a348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13a34c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x13a34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a350: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x13a350u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a354: 0x0  nop
    ctx->pc = 0x13a354u;
    // NOP
    // 0x13a358: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x13A358u;
    {
        const bool branch_taken_0x13a358 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A358u;
        // 0x13a35c: 0x24430010  addiu       $v1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a358) {
            ctx->pc = 0x13A370u;
            goto label_13a370;
        }
    }
    ctx->pc = 0x13A360u;
    // 0x13a360: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13a360u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13a364: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13a364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13a368: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13a368u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13a36c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x13a36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_13a370:
    // 0x13a370: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x13a370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13a374: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13a374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13a378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a37c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x13a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x13a380: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x13a380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a384: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13a384u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a388: 0x0  nop
    ctx->pc = 0x13a388u;
    // NOP
    // 0x13a38c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x13A38Cu;
    {
        const bool branch_taken_0x13a38c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A38Cu;
        // 0x13a390: 0x24430010  addiu       $v1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a38c) {
            ctx->pc = 0x13A3A4u;
            goto label_13a3a4;
        }
    }
    ctx->pc = 0x13A394u;
    // 0x13a394: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13a394u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13a398: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13a398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13a39c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13a39cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13a3a0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x13a3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_13a3a4:
    // 0x13a3a4: 0x0  nop
    ctx->pc = 0x13a3a4u;
    // NOP
    // 0x13a3a8: 0xc048974  jal         func_1225D0
    ctx->pc = 0x13A3A8u;
    SET_GPR_U32(ctx, 31, 0x13A3B0u);
    ctx->pc = 0x13A3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A3A8u;
    // 0x13a3ac: 0x27a40024  addiu       $a0, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x13A3A8u, 0x13A3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A3B0u;
label_13a3b0:
    // 0x13a3b0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x13a3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13a3b4: 0x1470ffd2  bne         $v1, $s0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x13A3B4u;
    {
        const bool branch_taken_0x13a3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x13a3b4) {
            ctx->pc = 0x13A300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a300;
        }
    }
    ctx->pc = 0x13A3BCu;
label_13a3bc:
    // 0x13a3bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13a3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a3c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13a3c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x13A3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A3C4u;
        // 0x13a3c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A3CCu;
}
