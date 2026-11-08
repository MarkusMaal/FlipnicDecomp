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

// Function: entry_0010a704
// Address: 0x10a704 - 0x10a870
void entry_0010a704_0x10a704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a704_0x10a704");
#endif

    switch (ctx->pc) {
        case 0x10a7a4u: goto label_10a7a4;
        case 0x10a7ecu: goto label_10a7ec;
        case 0x10a82cu: goto label_10a82c;
        default: break;
    }

    ctx->pc = 0x10a704u;

    // 0x10a704: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x10a704u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10a708: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x10a708u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10a70c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x10a70cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a710: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x10a710u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x10a714: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x10a714u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x10a718: 0xf8a40030  sqc2        $vf4, 0x30($a1)
    ctx->pc = 0x10a718u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10a71c: 0xf8a50020  sqc2        $vf5, 0x20($a1)
    ctx->pc = 0x10a71cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a720: 0xf8a60010  sqc2        $vf6, 0x10($a1)
    ctx->pc = 0x10a720u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x10a724: 0xf8a70000  sqc2        $vf7, 0x0($a1)
    ctx->pc = 0x10a724u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x10a728: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x10a728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x10a72c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x10a72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x10a730: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x10a730u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10a734: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x10a734u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a738: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x10a738u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x10a73c: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x10a73cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x10a740: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10a740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x10a744: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x10a744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x10a748: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x10a748u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10a74c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x10a74cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a750: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x10a750u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a754: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x10a754u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a758: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x10a758u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x10a75c: 0x4a0003bf  vwaitq
    ctx->pc = 0x10a75cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x10a760: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x10a760u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a764: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10a764u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a768: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x10a768u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x10a76c: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x10a76cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x10a770: 0x4a0003bf  vwaitq
    ctx->pc = 0x10a770u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x10a774: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x10a774u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x10a778: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x10a778u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x10a77c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10a77cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10a780: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10a780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10a784: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x10a784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x10a788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a78c: 0x0  nop
    ctx->pc = 0x10a78cu;
    // NOP
    // 0x10a790: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x10a790u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x10a794: 0x0  nop
    ctx->pc = 0x10a794u;
    // NOP
    // 0x10a798: 0x0  nop
    ctx->pc = 0x10a798u;
    // NOP
    // 0x10a79c: 0xc054924  jal         func_152490
    ctx->pc = 0x10A79Cu;
    SET_GPR_U32(ctx, 31, 0x10A7A4u);
    ctx->pc = 0x152490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152490u, 0x10A79Cu, 0x10A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7A4u;
label_10a7a4:
    // 0x10a7a4: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x10a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x10a7a8: 0x7a260030  lq          $a2, 0x30($s1)
    ctx->pc = 0x10a7a8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x10a7ac: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x10a7acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x10a7b0: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x10a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x10a7b4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x10a7b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a7b8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x10a7b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x10a7bc: 0x0  nop
    ctx->pc = 0x10a7bcu;
    // NOP
    // 0x10a7c0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x10a7c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x10a7c4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x10a7c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10a7c8: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x10a7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10a7cc: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x10a7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x10a7d0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x10a7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10a7d4: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x10a7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x10a7d8: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10a7dc: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x10a7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x10a7e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10a7e4: 0xc0466e4  jal         func_119B90
    ctx->pc = 0x10A7E4u;
    SET_GPR_U32(ctx, 31, 0x10A7ECu);
    ctx->pc = 0x10A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A7E4u;
    // 0x10a7e8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119B90u, 0x10A7E4u, 0x10A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7ECu;
label_10a7ec:
    // 0x10a7ec: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x10a7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x10a7f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a7f4: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x10A7F4u;
    {
        const bool branch_taken_0x10a7f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10a7f4) {
            ctx->pc = 0x10A908u;
            return;
        }
    }
    ctx->pc = 0x10A7FCu;
    // 0x10a7fc: 0x1600001c  bnez        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x10A7FCu;
    {
        const bool branch_taken_0x10a7fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a7fc) {
            ctx->pc = 0x10A870u;
            return;
        }
    }
    ctx->pc = 0x10A804u;
    // 0x10a804: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x10a804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10a808: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x10a808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x10a80c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a80cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a810: 0x0  nop
    ctx->pc = 0x10a810u;
    // NOP
    // 0x10a814: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x10a814u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10a818: 0x0  nop
    ctx->pc = 0x10a818u;
    // NOP
    // 0x10a81c: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
    ctx->pc = 0x10A81Cu;
    {
        const bool branch_taken_0x10a81c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10a81c) {
            ctx->pc = 0x10A8CCu;
            return;
        }
    }
    ctx->pc = 0x10A824u;
    // 0x10a824: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x10A824u;
    SET_GPR_U32(ctx, 31, 0x10A82Cu);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10A824u, 0x10A82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A82Cu;
label_10a82c:
    // 0x10a82c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10a82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10a830: 0x0  nop
    ctx->pc = 0x10a830u;
    // NOP
    // 0x10a834: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10a834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10a838: 0x3c0242ca  lui         $v0, 0x42CA
    ctx->pc = 0x10a838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17098 << 16));
    // 0x10a83c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a840: 0x0  nop
    ctx->pc = 0x10a840u;
    // NOP
    // 0x10a844: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x10a844u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10a848: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x10a848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x10a84c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a84cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a850: 0x0  nop
    ctx->pc = 0x10a850u;
    // NOP
    // 0x10a854: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10a854u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x10a858: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10a858u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x10a85c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10a85cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10a860: 0x0  nop
    ctx->pc = 0x10a860u;
    // NOP
    // 0x10a864: 0x2841005b  slti        $at, $v0, 0x5B
    ctx->pc = 0x10a864u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)91) ? 1 : 0);
    // 0x10a868: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x10A868u;
    {
        const bool branch_taken_0x10a868 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a868) {
            ctx->pc = 0x10A8CCu;
            return;
        }
    }
    ctx->pc = 0x10A870u;
}
