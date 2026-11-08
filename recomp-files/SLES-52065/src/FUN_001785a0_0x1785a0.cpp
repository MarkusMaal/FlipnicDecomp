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

// Function: FUN_001785a0
// Address: 0x1785a0 - 0x1786f4
void FUN_001785a0_0x1785a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001785a0_0x1785a0");
#endif

    switch (ctx->pc) {
        case 0x1785c8u: goto label_1785c8;
        case 0x1785d8u: goto label_1785d8;
        case 0x1785f0u: goto label_1785f0;
        case 0x178610u: goto label_178610;
        case 0x178634u: goto label_178634;
        case 0x1786a8u: goto label_1786a8;
        default: break;
    }

    ctx->pc = 0x1785a0u;

    // 0x1785a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1785a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1785a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1785a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1785a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1785a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1785ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1785acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1785b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1785b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1785b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1785b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1785b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1785b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1785bc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1785bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1785c0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1785C0u;
    {
        const bool branch_taken_0x1785c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1785C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1785C0u;
        // 0x1785c4: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1785c0) {
            ctx->pc = 0x178614u;
            goto label_178614;
        }
    }
    ctx->pc = 0x1785C8u;
label_1785c8:
    // 0x1785c8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1785c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1785cc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1785ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1785d0: 0xc05e22c  jal         func_1788B0
    ctx->pc = 0x1785D0u;
    SET_GPR_U32(ctx, 31, 0x1785D8u);
    ctx->pc = 0x1785D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1785D0u;
    // 0x1785d4: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788B0u, 0x1785D0u, 0x1785D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1785D8u;
label_1785d8:
    // 0x1785d8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1785d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1785dc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1785dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1785e0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1785e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1785e4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1785e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1785e8: 0xc05e22c  jal         func_1788B0
    ctx->pc = 0x1785E8u;
    SET_GPR_U32(ctx, 31, 0x1785F0u);
    ctx->pc = 0x1785ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1785E8u;
    // 0x1785ec: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788B0u, 0x1785E8u, 0x1785F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1785F0u;
label_1785f0:
    // 0x1785f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1785f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1785f4: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x1785f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1785f8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1785f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1785fc: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1785fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x178600: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x178600u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x178604: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x178604u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x178608: 0xc05ccf8  jal         func_1733E0
    ctx->pc = 0x178608u;
    SET_GPR_U32(ctx, 31, 0x178610u);
    ctx->pc = 0x17860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178608u;
    // 0x17860c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1733E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733E0u, 0x178608u, 0x178610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178610u;
label_178610:
    // 0x178610: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x178610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_178614:
    // 0x178614: 0x0  nop
    ctx->pc = 0x178614u;
    // NOP
    // 0x178618: 0x2a02000b  slti        $v0, $s0, 0xB
    ctx->pc = 0x178618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x17861c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x17861Cu;
    {
        const bool branch_taken_0x17861c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17861Cu;
        // 0x178620: 0x101140  sll         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17861c) {
            ctx->pc = 0x1785C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1785c8;
        }
    }
    ctx->pc = 0x178624u;
    // 0x178624: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x178624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x178628: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x178628u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17862c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x17862Cu;
    {
        const bool branch_taken_0x17862c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17862Cu;
        // 0x178630: 0x8fb0007c  lw          $s0, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17862c) {
            ctx->pc = 0x1786C4u;
            goto label_1786c4;
        }
    }
    ctx->pc = 0x178634u;
label_178634:
    // 0x178634: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x178634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x178638: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x178638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17863c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17863cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x178640: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x178640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x178644: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x178644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x178648: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x178648u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17864c: 0x0  nop
    ctx->pc = 0x17864cu;
    // NOP
    // 0x178650: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x178650u;
    {
        const bool branch_taken_0x178650 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x178654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178650u;
        // 0x178654: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178650) {
            ctx->pc = 0x1786A0u;
            goto label_1786a0;
        }
    }
    ctx->pc = 0x178658u;
    // 0x178658: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x178658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17865c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17865cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178660: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x178660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178664: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x178664u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x178668: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x178668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x17866c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x17866cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x178670: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x178670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178674: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x178674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178678: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x178678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x17867c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x17867cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x178680: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x178680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x178684: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x178684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178688: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x178688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17868c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x17868cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x178690: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x178690u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x178694: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x178694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x178698: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x178698u;
    {
        const bool branch_taken_0x178698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178698u;
        // 0x17869c: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178698) {
            ctx->pc = 0x1786A8u;
            goto label_1786a8;
        }
    }
    ctx->pc = 0x1786A0u;
label_1786a0:
    // 0x1786a0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1786A0u;
    SET_GPR_U32(ctx, 31, 0x1786A8u);
    ctx->pc = 0x1786A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1786A0u;
    // 0x1786a4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1786A0u, 0x1786A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1786A8u;
label_1786a8:
    // 0x1786a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1786a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1786ac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1786acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1786b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1786b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1786b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1786b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1786b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1786b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1786bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1786bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1786c0: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1786c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_1786c4:
    // 0x1786c4: 0x0  nop
    ctx->pc = 0x1786c4u;
    // NOP
    // 0x1786c8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1786c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1786cc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1786ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1786d0: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1786D0u;
    {
        const bool branch_taken_0x1786d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1786d0) {
            ctx->pc = 0x178634u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178634;
        }
    }
    ctx->pc = 0x1786D8u;
    // 0x1786d8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1786d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1786dc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1786dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1786e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1786e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1786e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1786e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1786e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1786e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1786ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1786ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1786F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786ECu;
        // 0x1786f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1786ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1786F4u;
}
