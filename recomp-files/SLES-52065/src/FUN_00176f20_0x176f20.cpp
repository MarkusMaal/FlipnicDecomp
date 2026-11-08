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

// Function: FUN_00176f20
// Address: 0x176f20 - 0x1772f4
void FUN_00176f20_0x176f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00176f20_0x176f20");
#endif

    switch (ctx->pc) {
        case 0x176f4cu: goto label_176f4c;
        case 0x176f70u: goto label_176f70;
        case 0x176fe4u: goto label_176fe4;
        case 0x17701cu: goto label_17701c;
        case 0x177058u: goto label_177058;
        case 0x177114u: goto label_177114;
        case 0x1771acu: goto label_1771ac;
        case 0x1771f4u: goto label_1771f4;
        case 0x177200u: goto label_177200;
        default: break;
    }

    ctx->pc = 0x176f20u;

    // 0x176f20: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x176f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x176f24: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x176f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x176f28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x176f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x176f2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x176f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x176f30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x176f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x176f34: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x176f34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x176f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x176f3c: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x176f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x176f40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x176f44: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x176f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x176f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_176f4c:
    // 0x176f4c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x176f4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x176f50: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x176f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x176f54: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x176f54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x176f58: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x176f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x176f5c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x176f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x176f60: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x176F60u;
    {
        const bool branch_taken_0x176f60 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x176f60) {
            ctx->pc = 0x176F4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176f4c;
        }
    }
    ctx->pc = 0x176F68u;
    // 0x176f68: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x176F68u;
    {
        const bool branch_taken_0x176f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F68u;
        // 0x176f6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f68) {
            ctx->pc = 0x176F90u;
            goto label_176f90;
        }
    }
    ctx->pc = 0x176F70u;
label_176f70:
    // 0x176f70: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x176f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x176f74: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x176f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x176f78: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x176f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x176f7c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x176f7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x176f80: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x176f80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176f84: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x176f84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x176f88: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x176f88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x176f8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x176f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_176f90:
    // 0x176f90: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x176f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x176f94: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x176F94u;
    {
        const bool branch_taken_0x176f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F94u;
        // 0x176f98: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f94) {
            ctx->pc = 0x176F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176f70;
        }
    }
    ctx->pc = 0x176F9Cu;
    // 0x176f9c: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x176f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176fa0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x176fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x176fa4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x176fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x176fa8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x176fa8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176fac: 0xc6800134  lwc1        $f0, 0x134($s4)
    ctx->pc = 0x176facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176fb0: 0x26840130  addiu       $a0, $s4, 0x130
    ctx->pc = 0x176fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 304));
    // 0x176fb4: 0x3c02bf7a  lui         $v0, 0xBF7A
    ctx->pc = 0x176fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49018 << 16));
    // 0x176fb8: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x176fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x176fbc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x176fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x176fc0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x176fc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x176fc4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x176fc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x176fc8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x176fc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x176fcc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x176fccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x176fd0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x176fd0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x176fd4: 0x0  nop
    ctx->pc = 0x176fd4u;
    // NOP
    // 0x176fd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x176fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x176fdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x176FDCu;
    {
        const bool branch_taken_0x176fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FDCu;
        // 0x176fe0: 0xe6800134  swc1        $f0, 0x134($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x176fdc) {
            ctx->pc = 0x177000u;
            goto label_177000;
        }
    }
    ctx->pc = 0x176FE4u;
label_176fe4:
    // 0x176fe4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x176fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x176fe8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x176fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x176fec: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x176fecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176ff0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x176ff0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x176ff4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x176ff4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x176ff8: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x176ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x176ffc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x176ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_177000:
    // 0x177000: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x177000u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x177004: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x177004u;
    {
        const bool branch_taken_0x177004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177004u;
        // 0x177008: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177004) {
            ctx->pc = 0x176FE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176fe4;
        }
    }
    ctx->pc = 0x17700Cu;
    // 0x17700c: 0x26820130  addiu       $v0, $s4, 0x130
    ctx->pc = 0x17700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 304));
    // 0x177010: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x177010u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x177014: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x177014u;
    {
        const bool branch_taken_0x177014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177014u;
        // 0x177018: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177014) {
            ctx->pc = 0x177198u;
            goto label_177198;
        }
    }
    ctx->pc = 0x17701Cu;
label_17701c:
    // 0x17701c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17701cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177020: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x177020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x177024: 0xc7a20160  lwc1        $f2, 0x160($sp)
    ctx->pc = 0x177024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x177028: 0x46010044  c1          0x10044
    ctx->pc = 0x177028u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x17702c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x17702cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x177030: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x177030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177034: 0x0  nop
    ctx->pc = 0x177034u;
    // NOP
    // 0x177038: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x177038u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x17703c: 0x46000004  c1          0x4
    ctx->pc = 0x17703cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x177040: 0xe7a20180  swc1        $f2, 0x180($sp)
    ctx->pc = 0x177040u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x177044: 0xe7a10184  swc1        $f1, 0x184($sp)
    ctx->pc = 0x177044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x177048: 0x0  nop
    ctx->pc = 0x177048u;
    // NOP
    // 0x17704c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17704cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x177050: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x177050u;
    {
        const bool branch_taken_0x177050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177050u;
        // 0x177054: 0xe7a00188  swc1        $f0, 0x188($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x177050) {
            ctx->pc = 0x177188u;
            goto label_177188;
        }
    }
    ctx->pc = 0x177058u;
label_177058:
    // 0x177058: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x177058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x17705c: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x17705cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x177060: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x177060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x177064: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x177064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x177068: 0x24421710  addiu       $v0, $v0, 0x1710
    ctx->pc = 0x177068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5904));
    // 0x17706c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x17706cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x177070: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x177070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x177074: 0x90720000  lbu         $s2, 0x0($v1)
    ctx->pc = 0x177074u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x177078: 0x24421711  addiu       $v0, $v0, 0x1711
    ctx->pc = 0x177078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5905));
    // 0x17707c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17707cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x177080: 0x90510000  lbu         $s1, 0x0($v0)
    ctx->pc = 0x177080u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177084: 0x121140  sll         $v0, $s2, 5
    ctx->pc = 0x177084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x177088: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x177088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x17708c: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x17708cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x177090: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x177090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x177094: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x177094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x177098: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x177098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x17709c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x17709cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1770a0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1770a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1770a4: 0x4bc4292c  vsub.xyz    $vf4, $vf5, $vf4
    ctx->pc = 0x1770a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1770a8: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1770a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1770ac: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1770acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1770b0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1770b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1770b4: 0x4a0503bd  .word       0x4A0503BD                   # vsqrt       $Q, $vf5x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1770b4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1770b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1770b8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1770bc: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1770bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1770c0: 0x4a0002ff  vnop
    ctx->pc = 0x1770c0u;
    // NOP operation, no action needed for VU0
    // 0x1770c4: 0x4a0002ff  vnop
    ctx->pc = 0x1770c4u;
    // NOP operation, no action needed for VU0
    // 0x1770c8: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1770c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1770cc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1770ccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1770d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1770d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1770d4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1770d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1770d8: 0x24421712  addiu       $v0, $v0, 0x1712
    ctx->pc = 0x1770d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5906));
    // 0x1770dc: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1770dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1770e0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1770e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1770e4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1770e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1770e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1770e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1770ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1770ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1770f0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1770f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1770f4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1770f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1770f8: 0xc44c0180  lwc1        $f12, 0x180($v0)
    ctx->pc = 0x1770f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1770fc: 0x46016041  sub.s       $f1, $f12, $f1
    ctx->pc = 0x1770fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x177100: 0x460c0843  div.s       $f1, $f1, $f12
    ctx->pc = 0x177100u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
    // 0x177104: 0x0  nop
    ctx->pc = 0x177104u;
    // NOP
    // 0x177108: 0x0  nop
    ctx->pc = 0x177108u;
    // NOP
    // 0x17710c: 0xc07d5c8  jal         func_1F5720
    ctx->pc = 0x17710Cu;
    SET_GPR_U32(ctx, 31, 0x177114u);
    ctx->pc = 0x177110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17710Cu;
    // 0x177110: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5720u, 0x17710Cu, 0x177114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177114u;
label_177114:
    // 0x177114: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x177114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x177118: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x177118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x17711c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x17711cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x177120: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x177120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x177124: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x177124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177128: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x177128u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17712c: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x17712cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177130: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x177130u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x177134: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x177134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x177138: 0xc4610064  lwc1        $f1, 0x64($v1)
    ctx->pc = 0x177138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17713c: 0xc7a00174  lwc1        $f0, 0x174($sp)
    ctx->pc = 0x17713cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177140: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x177140u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x177144: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x177144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x177148: 0xc4610068  lwc1        $f1, 0x68($v1)
    ctx->pc = 0x177148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17714c: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x17714cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177150: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x177150u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x177154: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x177154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x177158: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x177158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17715c: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x17715cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177160: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x177160u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x177164: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x177164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x177168: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x177168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17716c: 0xc7a00174  lwc1        $f0, 0x174($sp)
    ctx->pc = 0x17716cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177170: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x177170u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x177174: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x177174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x177178: 0xc4410068  lwc1        $f1, 0x68($v0)
    ctx->pc = 0x177178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17717c: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x17717cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177180: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x177180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x177184: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x177184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
label_177188:
    // 0x177188: 0x2e62001c  sltiu       $v0, $s3, 0x1C
    ctx->pc = 0x177188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x17718c: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x17718Cu;
    {
        const bool branch_taken_0x17718c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17718c) {
            ctx->pc = 0x177058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177058;
        }
    }
    ctx->pc = 0x177194u;
    // 0x177194: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x177194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_177198:
    // 0x177198: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x177198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x17719c: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x17719Cu;
    {
        const bool branch_taken_0x17719c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1771A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17719Cu;
        // 0x1771a0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17719c) {
            ctx->pc = 0x17701Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17701c;
        }
    }
    ctx->pc = 0x1771A4u;
    // 0x1771a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1771A4u;
    {
        const bool branch_taken_0x1771a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1771A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771A4u;
        // 0x1771a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1771a4) {
            ctx->pc = 0x1771D8u;
            goto label_1771d8;
        }
    }
    ctx->pc = 0x1771ACu;
label_1771ac:
    // 0x1771ac: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x1771acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1771b0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1771b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1771b4: 0x24650060  addiu       $a1, $v1, 0x60
    ctx->pc = 0x1771b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x1771b8: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x1771b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1771bc: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1771bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1771c0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1771c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1771c4: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1771c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1771c8: 0x4bc1106c  vsub.xyz    $vf1, $vf2, $vf1
    ctx->pc = 0x1771c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1771cc: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1771ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1771d0: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1771d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1771d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1771d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1771d8:
    // 0x1771d8: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x1771d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1771dc: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1771DCu;
    {
        const bool branch_taken_0x1771dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1771E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771DCu;
        // 0x1771e0: 0x41140  sll         $v0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1771dc) {
            ctx->pc = 0x1771ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1771ac;
        }
    }
    ctx->pc = 0x1771E4u;
    // 0x1771e4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1771e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1771e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1771e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1771ec: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1771ECu;
    {
        const bool branch_taken_0x1771ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1771F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771ECu;
        // 0x1771f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1771ec) {
            ctx->pc = 0x177298u;
            goto label_177298;
        }
    }
    ctx->pc = 0x1771F4u;
label_1771f4:
    // 0x1771f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1771f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1771f8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1771F8u;
    {
        const bool branch_taken_0x1771f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1771FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771F8u;
        // 0x1771fc: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1771f8) {
            ctx->pc = 0x177284u;
            goto label_177284;
        }
    }
    ctx->pc = 0x177200u;
label_177200:
    // 0x177200: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x177200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x177204: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x177204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x177208: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x177208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x17720c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x17720cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x177210: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x177210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177214: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x177214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177218: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x177218u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17721c: 0x0  nop
    ctx->pc = 0x17721cu;
    // NOP
    // 0x177220: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x177220u;
    {
        const bool branch_taken_0x177220 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x177220) {
            ctx->pc = 0x177240u;
            goto label_177240;
        }
    }
    ctx->pc = 0x177228u;
    // 0x177228: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x177228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17722c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17722cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x177230: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x177230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x177234: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x177234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177238: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x177238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x17723c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x17723cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_177240:
    // 0x177240: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x177240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x177244: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x177244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x177248: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x177248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x17724c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x17724cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x177250: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x177250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177254: 0xc4400144  lwc1        $f0, 0x144($v0)
    ctx->pc = 0x177254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177258: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x177258u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17725c: 0x0  nop
    ctx->pc = 0x17725cu;
    // NOP
    // 0x177260: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x177260u;
    {
        const bool branch_taken_0x177260 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x177260) {
            ctx->pc = 0x177280u;
            goto label_177280;
        }
    }
    ctx->pc = 0x177268u;
    // 0x177268: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x177268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17726c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17726cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x177270: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x177270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x177274: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x177274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177278: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x177278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x17727c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x17727cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_177280:
    // 0x177280: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x177280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_177284:
    // 0x177284: 0x0  nop
    ctx->pc = 0x177284u;
    // NOP
    // 0x177288: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x177288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17728c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x17728Cu;
    {
        const bool branch_taken_0x17728c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17728c) {
            ctx->pc = 0x177200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177200;
        }
    }
    ctx->pc = 0x177294u;
    // 0x177294: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x177294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_177298:
    // 0x177298: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x177298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x17729c: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x17729Cu;
    {
        const bool branch_taken_0x17729c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1772A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17729Cu;
        // 0x1772a0: 0x51140  sll         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17729c) {
            ctx->pc = 0x1771F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1771f4;
        }
    }
    ctx->pc = 0x1772A4u;
    // 0x1772a4: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1772a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1772a8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1772a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1772ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1772acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1772b0: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1772b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1772b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1772b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1772b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1772b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1772bc: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x1772bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x1772c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1772c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1772c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1772c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1772c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1772c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1772cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1772ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1772d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1772d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1772d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1772d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1772d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1772d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1772dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1772dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1772e0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1772e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1772e4: 0x0  nop
    ctx->pc = 0x1772e4u;
    // NOP
    // 0x1772e8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1772e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1772ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1772ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1772F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772ECu;
        // 0x1772f0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1772ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1772F4u;
}
