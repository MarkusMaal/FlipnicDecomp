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

// Function: FUN_00159ae0
// Address: 0x159ae0 - 0x159e64
void FUN_00159ae0_0x159ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00159ae0_0x159ae0");
#endif

    switch (ctx->pc) {
        case 0x159cc0u: goto label_159cc0;
        case 0x159cccu: goto label_159ccc;
        case 0x159ce4u: goto label_159ce4;
        case 0x159d14u: goto label_159d14;
        case 0x159d20u: goto label_159d20;
        case 0x159d48u: goto label_159d48;
        case 0x159d60u: goto label_159d60;
        case 0x159d6cu: goto label_159d6c;
        case 0x159d90u: goto label_159d90;
        case 0x159d9cu: goto label_159d9c;
        case 0x159db4u: goto label_159db4;
        case 0x159dd0u: goto label_159dd0;
        case 0x159dfcu: goto label_159dfc;
        case 0x159e30u: goto label_159e30;
        case 0x159e48u: goto label_159e48;
        default: break;
    }

    ctx->pc = 0x159ae0u;

    // 0x159ae0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x159ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x159ae4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x159ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x159ae8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x159ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159aec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x159aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x159af0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x159af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x159af4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x159af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159af8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x159af8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x159afc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x159afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159b00: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x159b00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x159b04: 0x26030300  addiu       $v1, $s0, 0x300
    ctx->pc = 0x159b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x159b08: 0x8ca802e8  lw          $t0, 0x2E8($a1)
    ctx->pc = 0x159b08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 744)));
    // 0x159b0c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x159b0cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x159b10: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x159b10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x159b14: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x159b14u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x159b18: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x159b18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x159b1c: 0x0  nop
    ctx->pc = 0x159b1cu;
    // NOP
    // 0x159b20: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x159b20u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x159b24: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x159b24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159b28: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x159b28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159b2c: 0xf8450000  sqc2        $vf5, 0x0($v0)
    ctx->pc = 0x159b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x159b30: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x159b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x159b34: 0x8ca2033c  lw          $v0, 0x33C($a1)
    ctx->pc = 0x159b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 828)));
    // 0x159b38: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x159b38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159b3c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x159b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x159b40: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x159b40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159b44: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x159b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x159b48: 0xd9060000  lqc2        $vf6, 0x0($t0)
    ctx->pc = 0x159b48u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x159b4c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x159b4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159b50: 0xd8e50000  lqc2        $vf5, 0x0($a3)
    ctx->pc = 0x159b50u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x159b54: 0x4bc4296c  vsub.xyz    $vf5, $vf5, $vf4
    ctx->pc = 0x159b54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159b58: 0x4bc6212c  vsub.xyz    $vf4, $vf4, $vf6
    ctx->pc = 0x159b58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x159b5c: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x159b5cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x159b60: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x159b60u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159b64: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x159b64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159b68: 0xf8c60000  sqc2        $vf6, 0x0($a2)
    ctx->pc = 0x159b68u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x159b6c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x159b6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x159b70: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x159b70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159b74: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x159b74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159b78: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x159b78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159b7c: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x159b7cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x159b80: 0x4a0003bf  vwaitq
    ctx->pc = 0x159b80u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x159b84: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x159b84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159b88: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x159b88u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x159b8c: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x159b8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159b90: 0x4a0003bf  vwaitq
    ctx->pc = 0x159b90u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x159b94: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x159b94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159b98: 0xf8c60000  sqc2        $vf6, 0x0($a2)
    ctx->pc = 0x159b98u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x159b9c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x159b9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x159ba0: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x159ba0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x159ba4: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x159ba4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159ba8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x159ba8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159bac: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x159bacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159bb0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x159bb0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x159bb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159bb8: 0x4be7233c  vmove.xyzw  $vf7, $vf4
    ctx->pc = 0x159bb8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[4], _mm_castsi128_ps(mask)); }
    // 0x159bbc: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x159bbcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x159bc0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x159bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x159bc4: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x159bc4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x159bc8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x159bc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x159bcc: 0x0  nop
    ctx->pc = 0x159bccu;
    // NOP
    // 0x159bd0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x159bd0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x159bd4: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x159bd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159bd8: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x159bd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159bdc: 0xf8450000  sqc2        $vf5, 0x0($v0)
    ctx->pc = 0x159bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x159be0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x159be0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159be4: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x159be4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159be8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x159be8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159bec: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x159becu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159bf0: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x159bf0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x159bf4: 0x4a0003bf  vwaitq
    ctx->pc = 0x159bf4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x159bf8: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x159bf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159bfc: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x159bfcu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x159c00: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x159c00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159c04: 0x4a0003bf  vwaitq
    ctx->pc = 0x159c04u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x159c08: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x159c08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159c0c: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x159c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x159c10: 0x26070290  addiu       $a3, $s0, 0x290
    ctx->pc = 0x159c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x159c14: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x159c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x159c18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159c1c: 0x0  nop
    ctx->pc = 0x159c1cu;
    // NOP
    // 0x159c20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x159c20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x159c24: 0xd8670000  lqc2        $vf7, 0x0($v1)
    ctx->pc = 0x159c24u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x159c28: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x159c28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x159c2c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x159c2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x159c30: 0x0  nop
    ctx->pc = 0x159c30u;
    // NOP
    // 0x159c34: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x159c34u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x159c38: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x159c38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159c3c: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x159c3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159c40: 0xf8e50000  sqc2        $vf5, 0x0($a3)
    ctx->pc = 0x159c40u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x159c44: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x159c44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x159c48: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x159c48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159c4c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x159c4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159c50: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x159c50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159c54: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x159c54u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x159c58: 0x4a0003bf  vwaitq
    ctx->pc = 0x159c58u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x159c5c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x159c5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159c60: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x159c60u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x159c64: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x159c64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159c68: 0x4a0003bf  vwaitq
    ctx->pc = 0x159c68u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x159c6c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x159c6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159c70: 0xf8e60000  sqc2        $vf6, 0x0($a3)
    ctx->pc = 0x159c70u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x159c74: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x159c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x159c78: 0x8ca3033c  lw          $v1, 0x33C($a1)
    ctx->pc = 0x159c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 828)));
    // 0x159c7c: 0x9063000f  lbu         $v1, 0xF($v1)
    ctx->pc = 0x159c7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
    // 0x159c80: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x159C80u;
    {
        const bool branch_taken_0x159c80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x159C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C80u;
        // 0x159c84: 0x240200cc  addiu       $v0, $zero, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c80) {
            ctx->pc = 0x159CECu;
            goto label_159cec;
        }
    }
    ctx->pc = 0x159C88u;
    // 0x159c88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159c88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159c8c: 0x0  nop
    ctx->pc = 0x159c8cu;
    // NOP
    // 0x159c90: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x159c90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159c94: 0x0  nop
    ctx->pc = 0x159c94u;
    // NOP
    // 0x159c98: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x159C98u;
    {
        const bool branch_taken_0x159c98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C98u;
        // 0x159c9c: 0x3c023e99  lui         $v0, 0x3E99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c98) {
            ctx->pc = 0x159CA8u;
            goto label_159ca8;
        }
    }
    ctx->pc = 0x159CA0u;
    // 0x159ca0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x159ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x159ca4: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x159ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_159ca8:
    // 0x159ca8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x159ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x159cac: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x159cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x159cb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x159cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x159cb4: 0x8065002b  lb          $a1, 0x2B($v1)
    ctx->pc = 0x159cb4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    // 0x159cb8: 0xc0425a4  jal         func_109690
    ctx->pc = 0x159CB8u;
    SET_GPR_U32(ctx, 31, 0x159CC0u);
    ctx->pc = 0x159CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159CB8u;
    // 0x159cbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x159CB8u, 0x159CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159CC0u;
label_159cc0:
    // 0x159cc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159cc4: 0xc042118  jal         func_108460
    ctx->pc = 0x159CC4u;
    SET_GPR_U32(ctx, 31, 0x159CCCu);
    ctx->pc = 0x159CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159CC4u;
    // 0x159cc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x159CC4u, 0x159CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159CCCu;
label_159ccc:
    // 0x159ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159cd0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x159cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159cd4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x159cd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x159cd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x159cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159cdc: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x159CDCu;
    SET_GPR_U32(ctx, 31, 0x159CE4u);
    ctx->pc = 0x159CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159CDCu;
    // 0x159ce0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x159CDCu, 0x159CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159CE4u;
label_159ce4:
    // 0x159ce4: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x159CE4u;
    {
        const bool branch_taken_0x159ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CE4u;
        // 0x159ce8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ce4) {
            ctx->pc = 0x159E4Cu;
            goto label_159e4c;
        }
    }
    ctx->pc = 0x159CECu;
label_159cec:
    // 0x159cec: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x159CECu;
    {
        const bool branch_taken_0x159cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x159cec) {
            ctx->pc = 0x159D28u;
            goto label_159d28;
        }
    }
    ctx->pc = 0x159CF4u;
    // 0x159cf4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x159cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x159cf8: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x159cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x159cfc: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x159cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x159d00: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x159d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x159d04: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x159d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x159d08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x159d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x159d0c: 0xc0425a4  jal         func_109690
    ctx->pc = 0x159D0Cu;
    SET_GPR_U32(ctx, 31, 0x159D14u);
    ctx->pc = 0x159D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D0Cu;
    // 0x159d10: 0x80a5002b  lb          $a1, 0x2B($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 43)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x159D0Cu, 0x159D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D14u;
label_159d14:
    // 0x159d14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d18: 0xc042118  jal         func_108460
    ctx->pc = 0x159D18u;
    SET_GPR_U32(ctx, 31, 0x159D20u);
    ctx->pc = 0x159D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D18u;
    // 0x159d1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x159D18u, 0x159D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D20u;
label_159d20:
    // 0x159d20: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x159D20u;
    {
        const bool branch_taken_0x159d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D20u;
        // 0x159d24: 0x8e03033c  lw          $v1, 0x33C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159d20) {
            ctx->pc = 0x159E00u;
            goto label_159e00;
        }
    }
    ctx->pc = 0x159D28u;
label_159d28:
    // 0x159d28: 0x24020099  addiu       $v0, $zero, 0x99
    ctx->pc = 0x159d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x159d2c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x159D2Cu;
    {
        const bool branch_taken_0x159d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x159D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D2Cu;
        // 0x159d30: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159d2c) {
            ctx->pc = 0x159D74u;
            goto label_159d74;
        }
    }
    ctx->pc = 0x159D34u;
    // 0x159d34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159d38: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x159d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d3c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x159d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x159d40: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x159D40u;
    SET_GPR_U32(ctx, 31, 0x159D48u);
    ctx->pc = 0x159D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D40u;
    // 0x159d44: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x159D40u, 0x159D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D48u;
label_159d48:
    // 0x159d48: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x159d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x159d4c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x159d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x159d50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x159d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x159d54: 0x8065002b  lb          $a1, 0x2B($v1)
    ctx->pc = 0x159d54u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    // 0x159d58: 0xc0425a4  jal         func_109690
    ctx->pc = 0x159D58u;
    SET_GPR_U32(ctx, 31, 0x159D60u);
    ctx->pc = 0x159D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D58u;
    // 0x159d5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x159D58u, 0x159D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D60u;
label_159d60:
    // 0x159d60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d64: 0xc042118  jal         func_108460
    ctx->pc = 0x159D64u;
    SET_GPR_U32(ctx, 31, 0x159D6Cu);
    ctx->pc = 0x159D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D64u;
    // 0x159d68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x159D64u, 0x159D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D6Cu;
label_159d6c:
    // 0x159d6c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x159D6Cu;
    {
        const bool branch_taken_0x159d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159d6c) {
            ctx->pc = 0x159DFCu;
            goto label_159dfc;
        }
    }
    ctx->pc = 0x159D74u;
label_159d74:
    // 0x159d74: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x159D74u;
    {
        const bool branch_taken_0x159d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x159d74) {
            ctx->pc = 0x159DBCu;
            goto label_159dbc;
        }
    }
    ctx->pc = 0x159D7Cu;
    // 0x159d7c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x159d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x159d80: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x159d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x159d84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x159d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x159d88: 0xc0425a4  jal         func_109690
    ctx->pc = 0x159D88u;
    SET_GPR_U32(ctx, 31, 0x159D90u);
    ctx->pc = 0x159D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D88u;
    // 0x159d8c: 0x8065002b  lb          $a1, 0x2B($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x159D88u, 0x159D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D90u;
label_159d90:
    // 0x159d90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d94: 0xc042118  jal         func_108460
    ctx->pc = 0x159D94u;
    SET_GPR_U32(ctx, 31, 0x159D9Cu);
    ctx->pc = 0x159D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D94u;
    // 0x159d98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x159D94u, 0x159D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D9Cu;
label_159d9c:
    // 0x159d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159da0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x159da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159da4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x159da4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x159da8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x159da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159dac: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x159DACu;
    SET_GPR_U32(ctx, 31, 0x159DB4u);
    ctx->pc = 0x159DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159DACu;
    // 0x159db0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x159DACu, 0x159DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159DB4u;
label_159db4:
    // 0x159db4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x159DB4u;
    {
        const bool branch_taken_0x159db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159db4) {
            ctx->pc = 0x159E48u;
            goto label_159e48;
        }
    }
    ctx->pc = 0x159DBCu;
label_159dbc:
    // 0x159dbc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x159dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x159dc0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x159dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x159dc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x159dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x159dc8: 0xc0425a4  jal         func_109690
    ctx->pc = 0x159DC8u;
    SET_GPR_U32(ctx, 31, 0x159DD0u);
    ctx->pc = 0x159DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159DC8u;
    // 0x159dcc: 0x8065002b  lb          $a1, 0x2B($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x159DC8u, 0x159DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159DD0u;
label_159dd0:
    // 0x159dd0: 0xc60102f0  lwc1        $f1, 0x2F0($s0)
    ctx->pc = 0x159dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159dd4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x159dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x159dd8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x159dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x159ddc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159de0: 0x0  nop
    ctx->pc = 0x159de0u;
    // NOP
    // 0x159de4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x159de4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159de8: 0x0  nop
    ctx->pc = 0x159de8u;
    // NOP
    // 0x159dec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x159DECu;
    {
        const bool branch_taken_0x159dec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159DECu;
        // 0x159df0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159dec) {
            ctx->pc = 0x159DFCu;
            goto label_159dfc;
        }
    }
    ctx->pc = 0x159DF4u;
    // 0x159df4: 0xc042118  jal         func_108460
    ctx->pc = 0x159DF4u;
    SET_GPR_U32(ctx, 31, 0x159DFCu);
    ctx->pc = 0x159DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159DF4u;
    // 0x159df8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x159DF4u, 0x159DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159DFCu;
label_159dfc:
    // 0x159dfc: 0x8e03033c  lw          $v1, 0x33C($s0)
    ctx->pc = 0x159dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 828)));
label_159e00:
    // 0x159e00: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x159e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x159e04: 0x24a60020  addiu       $a2, $a1, 0x20
    ctx->pc = 0x159e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x159e08: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x159e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x159e0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e10: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x159e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159e14: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x159e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x159e18: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x159e18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159e1c: 0x9068000e  lbu         $t0, 0xE($v1)
    ctx->pc = 0x159e1cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x159e20: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x159e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x159e24: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x159e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x159e28: 0xc0425d4  jal         func_109750
    ctx->pc = 0x159E28u;
    SET_GPR_U32(ctx, 31, 0x159E30u);
    ctx->pc = 0x159E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159E28u;
    // 0x159e2c: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109750u, 0x159E28u, 0x159E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159E30u;
label_159e30:
    // 0x159e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e34: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x159e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159e38: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x159e38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x159e3c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x159e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x159e40: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x159E40u;
    SET_GPR_U32(ctx, 31, 0x159E48u);
    ctx->pc = 0x159E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159E40u;
    // 0x159e44: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x159E40u, 0x159E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159E48u;
label_159e48:
    // 0x159e48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x159e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_159e4c:
    // 0x159e4c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x159e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x159e50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x159e50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159e54: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x159e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x159e58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x159e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x159E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E5Cu;
        // 0x159e60: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159E64u;
}
