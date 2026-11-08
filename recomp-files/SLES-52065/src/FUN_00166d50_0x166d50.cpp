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

// Function: FUN_00166d50
// Address: 0x166d50 - 0x166f74
void FUN_00166d50_0x166d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00166d50_0x166d50");
#endif

    switch (ctx->pc) {
        case 0x166d84u: goto label_166d84;
        case 0x166edcu: goto label_166edc;
        case 0x166f00u: goto label_166f00;
        case 0x166f14u: goto label_166f14;
        case 0x166f34u: goto label_166f34;
        case 0x166f4cu: goto label_166f4c;
        default: break;
    }

    ctx->pc = 0x166d50u;

    // 0x166d50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x166d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x166d54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x166d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x166d58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x166d5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166d60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x166d60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d64: 0xc4ac01c0  lwc1        $f12, 0x1C0($a1)
    ctx->pc = 0x166d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x166d68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x166d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d6c: 0xc62d0200  lwc1        $f13, 0x200($s1)
    ctx->pc = 0x166d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x166d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d74: 0x26060310  addiu       $a2, $s0, 0x310
    ctx->pc = 0x166d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x166d78: 0x26070290  addiu       $a3, $s0, 0x290
    ctx->pc = 0x166d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x166d7c: 0xc0550f8  jal         func_1543E0
    ctx->pc = 0x166D7Cu;
    SET_GPR_U32(ctx, 31, 0x166D84u);
    ctx->pc = 0x166D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D7Cu;
    // 0x166d80: 0x26050300  addiu       $a1, $s0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1543E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1543E0u, 0x166D7Cu, 0x166D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D84u;
label_166d84:
    // 0x166d84: 0x822201d0  lb          $v0, 0x1D0($s1)
    ctx->pc = 0x166d84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x166d88: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166D88u;
    {
        const bool branch_taken_0x166d88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x166d88) {
            ctx->pc = 0x166D98u;
            goto label_166d98;
        }
    }
    ctx->pc = 0x166D90u;
    // 0x166d90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x166d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x166d94: 0xa22201d0  sb          $v0, 0x1D0($s1)
    ctx->pc = 0x166d94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 464), (uint8_t)GPR_U32(ctx, 2));
label_166d98:
    // 0x166d98: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x166d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x166d9c: 0x0  nop
    ctx->pc = 0x166d9cu;
    // NOP
    // 0x166da0: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x166da0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166da4: 0x0  nop
    ctx->pc = 0x166da4u;
    // NOP
    // 0x166da8: 0x4501006d  bc1t        . + 4 + (0x6D << 2)
    ctx->pc = 0x166DA8u;
    {
        const bool branch_taken_0x166da8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x166DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166DA8u;
        // 0x166dac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166da8) {
            ctx->pc = 0x166F60u;
            goto label_166f60;
        }
    }
    ctx->pc = 0x166DB0u;
    // 0x166db0: 0x26030300  addiu       $v1, $s0, 0x300
    ctx->pc = 0x166db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x166db4: 0x26020320  addiu       $v0, $s0, 0x320
    ctx->pc = 0x166db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x166db8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x166db8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166dbc: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x166dbcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166dc0: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x166dc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166dc4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x166dc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166dc8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x166dc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166dcc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x166dccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x166dd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x166dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x166dd4: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x166dd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166dd8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x166dd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166ddc: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x166ddcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166de0: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x166de0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x166de4: 0x4a0003bf  vwaitq
    ctx->pc = 0x166de4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x166de8: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x166de8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166dec: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x166decu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x166df0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x166df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x166df4: 0x0  nop
    ctx->pc = 0x166df4u;
    // NOP
    // 0x166df8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x166df8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x166dfc: 0x0  nop
    ctx->pc = 0x166dfcu;
    // NOP
    // 0x166e00: 0x0  nop
    ctx->pc = 0x166e00u;
    // NOP
    // 0x166e04: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x166e04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166e08: 0x0  nop
    ctx->pc = 0x166e08u;
    // NOP
    // 0x166e0c: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x166E0Cu;
    {
        const bool branch_taken_0x166e0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x166e0c) {
            ctx->pc = 0x166EA8u;
            goto label_166ea8;
        }
    }
    ctx->pc = 0x166E14u;
    // 0x166e14: 0xc6030320  lwc1        $f3, 0x320($s0)
    ctx->pc = 0x166e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166e18: 0x26020290  addiu       $v0, $s0, 0x290
    ctx->pc = 0x166e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x166e1c: 0xc6020310  lwc1        $f2, 0x310($s0)
    ctx->pc = 0x166e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166e20: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x166e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166e24: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x166e24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x166e28: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x166e28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x166e2c: 0xe6010290  swc1        $f1, 0x290($s0)
    ctx->pc = 0x166e2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
    // 0x166e30: 0xc6030324  lwc1        $f3, 0x324($s0)
    ctx->pc = 0x166e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166e34: 0xc6020314  lwc1        $f2, 0x314($s0)
    ctx->pc = 0x166e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166e38: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x166e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166e3c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x166e3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x166e40: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x166e40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x166e44: 0xe6010294  swc1        $f1, 0x294($s0)
    ctx->pc = 0x166e44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 660), bits); }
    // 0x166e48: 0xc6030328  lwc1        $f3, 0x328($s0)
    ctx->pc = 0x166e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166e4c: 0xc6020318  lwc1        $f2, 0x318($s0)
    ctx->pc = 0x166e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166e50: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x166e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166e54: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x166e54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x166e58: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x166e58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x166e5c: 0xe6010298  swc1        $f1, 0x298($s0)
    ctx->pc = 0x166e5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 664), bits); }
    // 0x166e60: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x166e60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166e64: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x166e64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166e68: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x166e68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166e6c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x166e6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166e70: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x166e70u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x166e74: 0x4a0003bf  vwaitq
    ctx->pc = 0x166e74u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x166e78: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x166e78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166e7c: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x166e7cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x166e80: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x166e80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x166e84: 0x4a0003bf  vwaitq
    ctx->pc = 0x166e84u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x166e88: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x166e88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x166e8c: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x166e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x166e90: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x166e90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166e94: 0x44082000  mfc1        $t0, $f4
    ctx->pc = 0x166e94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x166e98: 0x0  nop
    ctx->pc = 0x166e98u;
    // NOP
    // 0x166e9c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x166e9cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x166ea0: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x166ea0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x166ea4: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x166ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_166ea8:
    // 0x166ea8: 0xe60002e8  swc1        $f0, 0x2E8($s0)
    ctx->pc = 0x166ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
    // 0x166eac: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x166eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x166eb0: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x166eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x166eb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166eb8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x166eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x166ebc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166ec0: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x166ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x166ec4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x166ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x166ec8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x166ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166ecc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x166eccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166ed0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x166ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x166ed4: 0xc0425d4  jal         func_109750
    ctx->pc = 0x166ED4u;
    SET_GPR_U32(ctx, 31, 0x166EDCu);
    ctx->pc = 0x166ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166ED4u;
    // 0x166ed8: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109750u, 0x166ED4u, 0x166EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166EDCu;
label_166edc:
    // 0x166edc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x166edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x166ee0: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x166ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x166ee4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x166ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x166ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166eec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166ef0: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x166ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166ef4: 0xc46c004c  lwc1        $f12, 0x4C($v1)
    ctx->pc = 0x166ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x166ef8: 0xc056194  jal         func_158650
    ctx->pc = 0x166EF8u;
    SET_GPR_U32(ctx, 31, 0x166F00u);
    ctx->pc = 0x166EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166EF8u;
    // 0x166efc: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x166EF8u, 0x166F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F00u;
label_166f00:
    // 0x166f00: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x166f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x166f04: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x166f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x166f08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x166f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x166f0c: 0xc055dac  jal         func_1576B0
    ctx->pc = 0x166F0Cu;
    SET_GPR_U32(ctx, 31, 0x166F14u);
    ctx->pc = 0x166F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F0Cu;
    // 0x166f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x166F0Cu, 0x166F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F14u;
label_166f14:
    // 0x166f14: 0x822201d1  lb          $v0, 0x1D1($s1)
    ctx->pc = 0x166f14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 465)));
    // 0x166f18: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x166F18u;
    {
        const bool branch_taken_0x166f18 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x166F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F18u;
        // 0x166f1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f18) {
            ctx->pc = 0x166F60u;
            goto label_166f60;
        }
    }
    ctx->pc = 0x166F20u;
    // 0x166f20: 0x822201d0  lb          $v0, 0x1D0($s1)
    ctx->pc = 0x166f20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x166f24: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x166F24u;
    {
        const bool branch_taken_0x166f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F24u;
        // 0x166f28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f24) {
            ctx->pc = 0x166F5Cu;
            goto label_166f5c;
        }
    }
    ctx->pc = 0x166F2Cu;
    // 0x166f2c: 0xc042118  jal         func_108460
    ctx->pc = 0x166F2Cu;
    SET_GPR_U32(ctx, 31, 0x166F34u);
    ctx->pc = 0x166F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F2Cu;
    // 0x166f30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x166F2Cu, 0x166F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F34u;
label_166f34:
    // 0x166f34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x166f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x166f38: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x166f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x166f3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x166f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x166f40: 0x8065002b  lb          $a1, 0x2B($v1)
    ctx->pc = 0x166f40u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    // 0x166f44: 0xc0425a4  jal         func_109690
    ctx->pc = 0x166F44u;
    SET_GPR_U32(ctx, 31, 0x166F4Cu);
    ctx->pc = 0x166F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F44u;
    // 0x166f48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x166F44u, 0x166F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F4Cu;
label_166f4c:
    // 0x166f4c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x166f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x166f50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166f54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x166F54u;
    {
        const bool branch_taken_0x166f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F54u;
        // 0x166f58: 0xa22301d0  sb          $v1, 0x1D0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 464), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f54) {
            ctx->pc = 0x166F60u;
            goto label_166f60;
        }
    }
    ctx->pc = 0x166F5Cu;
label_166f5c:
    // 0x166f5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x166f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_166f60:
    // 0x166f60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x166f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166f64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x166f64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166f68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166f68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x166F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F6Cu;
        // 0x166f70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166F74u;
}
