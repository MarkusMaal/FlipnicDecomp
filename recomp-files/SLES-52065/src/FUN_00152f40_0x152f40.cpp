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

// Function: FUN_00152f40
// Address: 0x152f40 - 0x1530b8
void FUN_00152f40_0x152f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152f40_0x152f40");
#endif

    switch (ctx->pc) {
        case 0x152f98u: goto label_152f98;
        case 0x152fb0u: goto label_152fb0;
        default: break;
    }

    ctx->pc = 0x152f40u;

    // 0x152f40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x152f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x152f44: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x152f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x152f48: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x152f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x152f4c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x152f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x152f50: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x152f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x152f54: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x152f54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f58: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x152f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x152f5c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x152f5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f60: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x152f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x152f64: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x152f64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x152f68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x152f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x152f6c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x152f6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x152f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x152f74: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x152f74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x152f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x152f7c: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x152f7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f80: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x152f80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x152f84: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x152f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x152f88: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x152f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x152f8c: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x152F8Cu;
    {
        const bool branch_taken_0x152f8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x152F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F8Cu;
        // 0x152f90: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f8c) {
            ctx->pc = 0x153070u;
            goto label_153070;
        }
    }
    ctx->pc = 0x152F94u;
    // 0x152f94: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x152f94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_152f98:
    // 0x152f98: 0x26c70010  addiu       $a3, $s6, 0x10
    ctx->pc = 0x152f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x152f9c: 0x26c60020  addiu       $a2, $s6, 0x20
    ctx->pc = 0x152f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x152fa0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x152fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152fa4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x152fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152fa8: 0xc055254  jal         func_154950
    ctx->pc = 0x152FA8u;
    SET_GPR_U32(ctx, 31, 0x152FB0u);
    ctx->pc = 0x152FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152FA8u;
    // 0x152fac: 0x26d60030  addiu       $s6, $s6, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154950u, 0x152FA8u, 0x152FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152FB0u;
label_152fb0:
    // 0x152fb0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x152fb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152fb4: 0x0  nop
    ctx->pc = 0x152fb4u;
    // NOP
    // 0x152fb8: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x152FB8u;
    {
        const bool branch_taken_0x152fb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x152fb8) {
            ctx->pc = 0x15305Cu;
            goto label_15305c;
        }
    }
    ctx->pc = 0x152FC0u;
    // 0x152fc0: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x152fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152fc4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x152fc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152fc8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x152fc8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x152fcc: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x152fccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152fd0: 0x0  nop
    ctx->pc = 0x152fd0u;
    // NOP
    // 0x152fd4: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x152FD4u;
    {
        const bool branch_taken_0x152fd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x152fd4) {
            ctx->pc = 0x15305Cu;
            goto label_15305c;
        }
    }
    ctx->pc = 0x152FDCu;
    // 0x152fdc: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x152fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152fe0: 0x3c02bdb8  lui         $v0, 0xBDB8
    ctx->pc = 0x152fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48568 << 16));
    // 0x152fe4: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x152fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x152fe8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x152fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x152fec: 0x0  nop
    ctx->pc = 0x152fecu;
    // NOP
    // 0x152ff0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x152ff0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152ff4: 0x0  nop
    ctx->pc = 0x152ff4u;
    // NOP
    // 0x152ff8: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x152FF8u;
    {
        const bool branch_taken_0x152ff8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x152FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FF8u;
        // 0x152ffc: 0x3c023f8b  lui         $v0, 0x3F8B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16267 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ff8) {
            ctx->pc = 0x15305Cu;
            goto label_15305c;
        }
    }
    ctx->pc = 0x153000u;
    // 0x153000: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x153000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x153004: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x153004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x153008: 0x0  nop
    ctx->pc = 0x153008u;
    // NOP
    // 0x15300c: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x15300cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153010: 0x0  nop
    ctx->pc = 0x153010u;
    // NOP
    // 0x153014: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x153014u;
    {
        const bool branch_taken_0x153014 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153014) {
            ctx->pc = 0x15305Cu;
            goto label_15305c;
        }
    }
    ctx->pc = 0x15301Cu;
    // 0x15301c: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x15301cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x153020: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x153020u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153024: 0x0  nop
    ctx->pc = 0x153024u;
    // NOP
    // 0x153028: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x153028u;
    {
        const bool branch_taken_0x153028 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153028) {
            ctx->pc = 0x15305Cu;
            goto label_15305c;
        }
    }
    ctx->pc = 0x153030u;
    // 0x153030: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x153030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153034: 0x0  nop
    ctx->pc = 0x153034u;
    // NOP
    // 0x153038: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x153038u;
    {
        const bool branch_taken_0x153038 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153038) {
            ctx->pc = 0x15305Cu;
            goto label_15305c;
        }
    }
    ctx->pc = 0x153040u;
    // 0x153040: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x153040u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x153044: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x153044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153048: 0x0  nop
    ctx->pc = 0x153048u;
    // NOP
    // 0x15304c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15304Cu;
    {
        const bool branch_taken_0x15304c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15304c) {
            ctx->pc = 0x15305Cu;
            goto label_15305c;
        }
    }
    ctx->pc = 0x153054u;
    // 0x153054: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x153054u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x153058: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x153058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15305c:
    // 0x15305c: 0x0  nop
    ctx->pc = 0x15305cu;
    // NOP
    // 0x153060: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x153060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x153064: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x153064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x153068: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x153068u;
    {
        const bool branch_taken_0x153068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153068u;
        // 0x15306c: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153068) {
            ctx->pc = 0x152F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152f98;
        }
    }
    ctx->pc = 0x153070u;
label_153070:
    // 0x153070: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x153070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153074: 0x0  nop
    ctx->pc = 0x153074u;
    // NOP
    // 0x153078: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x153078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15307c: 0x0  nop
    ctx->pc = 0x15307cu;
    // NOP
    // 0x153080: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x153080u;
    {
        const bool branch_taken_0x153080 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x153084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153080u;
        // 0x153084: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153080) {
            ctx->pc = 0x15308Cu;
            goto label_15308c;
        }
    }
    ctx->pc = 0x153088u;
    // 0x153088: 0xe6740000  swc1        $f20, 0x0($s3)
    ctx->pc = 0x153088u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_15308c:
    // 0x15308c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x15308cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x153090: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x153090u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x153094: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x153094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x153098: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x153098u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15309c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x15309cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1530a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1530a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1530a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1530a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1530a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1530a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1530ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1530acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1530b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1530B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1530B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1530B0u;
        // 0x1530b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1530B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1530B8u;
}
