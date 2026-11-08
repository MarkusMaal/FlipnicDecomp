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

// Function: entry_00162ecc
// Address: 0x162ecc - 0x162f4c
void entry_00162ecc_0x162ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162ecc_0x162ecc");
#endif

    ctx->pc = 0x162eccu;

    // 0x162ecc: 0x8e2301f0  lw          $v1, 0x1F0($s1)
    ctx->pc = 0x162eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x162ed0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x162ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x162ed4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x162ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x162ed8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x162ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x162edc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x162edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x162ee0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x162ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x162ee4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x162ee4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162ee8: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x162ee8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x162eec: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x162eecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x162ef0: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x162ef0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162ef4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x162ef4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162ef8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x162ef8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162efc: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x162efcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x162f00: 0x4a0003bf  vwaitq
    ctx->pc = 0x162f00u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x162f04: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x162f04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162f08: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x162f08u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x162f0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162f10: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x162f10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x162f14: 0x8e23021c  lw          $v1, 0x21C($s1)
    ctx->pc = 0x162f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x162f18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x162f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x162f1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x162f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x162f20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x162f20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x162f24: 0x8e230220  lw          $v1, 0x220($s1)
    ctx->pc = 0x162f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x162f28: 0xc6200228  lwc1        $f0, 0x228($s1)
    ctx->pc = 0x162f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162f2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x162f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x162f30: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x162f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x162f34: 0x8e23021c  lw          $v1, 0x21C($s1)
    ctx->pc = 0x162f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x162f38: 0xc6200228  lwc1        $f0, 0x228($s1)
    ctx->pc = 0x162f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162f3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x162f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x162f40: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x162f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162f44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x162f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x162f48: 0xe6200228  swc1        $f0, 0x228($s1)
    ctx->pc = 0x162f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 552), bits); }
    ctx->pc = 0x162f4cu;
}
