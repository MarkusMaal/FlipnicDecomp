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

// Function: entry_00177058
// Address: 0x177058 - 0x177188
void entry_00177058_0x177058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177058_0x177058");
#endif

    switch (ctx->pc) {
        case 0x177114u: goto label_177114;
        default: break;
    }

    ctx->pc = 0x177058u;

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
    ctx->pc = 0x177188u;
}
