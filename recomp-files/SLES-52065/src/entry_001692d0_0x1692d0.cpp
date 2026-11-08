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

// Function: entry_001692d0
// Address: 0x1692d0 - 0x169344
void entry_001692d0_0x1692d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001692d0_0x1692d0");
#endif

    ctx->pc = 0x1692d0u;

    // 0x1692d0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1692d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1692d4: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1692d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1692d8: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1692d8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1692dc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1692dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1692e0: 0x0  nop
    ctx->pc = 0x1692e0u;
    // NOP
    // 0x1692e4: 0x1010  mfhi        $v0
    ctx->pc = 0x1692e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1692e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1692e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1692ec: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1692ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1692f0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1692f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1692f4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1692f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1692f8: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1692f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1692fc: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x1692fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169300: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x169300u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169304: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x169304u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169308: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x169308u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16930c: 0x4a0003bf  vwaitq
    ctx->pc = 0x16930cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x169310: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x169310u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169314: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169314u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16931c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x16931cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x169320: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x169320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x169324: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x169324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x169328: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x169328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16932c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16932cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169330: 0x0  nop
    ctx->pc = 0x169330u;
    // NOP
    // 0x169334: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x169334u;
    {
        const bool branch_taken_0x169334 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x169334) {
            ctx->pc = 0x169344u;
            return;
        }
    }
    ctx->pc = 0x16933Cu;
    // 0x16933c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x16933cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x169340: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x169340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169344u;
}
