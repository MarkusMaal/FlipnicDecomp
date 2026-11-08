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

// Function: entry_0016934c
// Address: 0x16934c - 0x1694bc
void entry_0016934c_0x16934c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016934c_0x16934c");
#endif

    ctx->pc = 0x16934cu;

    // 0x16934c: 0x0  nop
    ctx->pc = 0x16934cu;
    // NOP
    // 0x169350: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x169350u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x169354: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x169354u;
    {
        const bool branch_taken_0x169354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x169358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169354u;
        // 0x169358: 0x24e60001  addiu       $a2, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169354) {
            ctx->pc = 0x1692D0u;
            return;
        }
    }
    ctx->pc = 0x16935Cu;
    // 0x16935c: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x16935cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x169360: 0xd0001a  div         $zero, $a2, $s0
    ctx->pc = 0x169360u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x169364: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x169364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x169368: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x169368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x16936c: 0x24e40002  addiu       $a0, $a3, 0x2
    ctx->pc = 0x16936cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x169370: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x169370u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x169374: 0x26470210  addiu       $a3, $s2, 0x210
    ctx->pc = 0x169374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
    // 0x169378: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x169378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16937c: 0x26480220  addiu       $t0, $s2, 0x220
    ctx->pc = 0x16937cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    // 0x169380: 0x1810  mfhi        $v1
    ctx->pc = 0x169380u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x169384: 0xd0001a  div         $zero, $a2, $s0
    ctx->pc = 0x169384u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x169388: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x169388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16938c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x16938cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x169390: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x169390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169394: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x169394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x169398: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x169398u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16939c: 0xe6400210  swc1        $f0, 0x210($s2)
    ctx->pc = 0x16939cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 528), bits); }
    // 0x1693a0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1693a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1693a4: 0x1810  mfhi        $v1
    ctx->pc = 0x1693a4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1693a8: 0xd0001a  div         $zero, $a2, $s0
    ctx->pc = 0x1693a8u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1693ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1693acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1693b0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1693b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1693b4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1693b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1693b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1693b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1693bc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1693bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1693c0: 0xe6400214  swc1        $f0, 0x214($s2)
    ctx->pc = 0x1693c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 532), bits); }
    // 0x1693c4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1693c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1693c8: 0x1810  mfhi        $v1
    ctx->pc = 0x1693c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1693cc: 0x90001a  div         $zero, $a0, $s0
    ctx->pc = 0x1693ccu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1693d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1693d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1693d4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1693d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1693d8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1693d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1693dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1693dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1693e0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1693e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1693e4: 0xe6400218  swc1        $f0, 0x218($s2)
    ctx->pc = 0x1693e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 536), bits); }
    // 0x1693e8: 0x1810  mfhi        $v1
    ctx->pc = 0x1693e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1693ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1693ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1693f0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1693f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1693f4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1693f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1693f8: 0xd8e50000  lqc2        $vf5, 0x0($a3)
    ctx->pc = 0x1693f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1693fc: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1693fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x169400: 0xf9060000  sqc2        $vf6, 0x0($t0)
    ctx->pc = 0x169400u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x169404: 0xd9040000  lqc2        $vf4, 0x0($t0)
    ctx->pc = 0x169404u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x169408: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x169408u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16940c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16940cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169410: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x169410u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169414: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x169414u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x169418: 0x4a0003bf  vwaitq
    ctx->pc = 0x169418u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16941c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16941cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169420: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x169420u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x169424: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x169424u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x169428: 0x4a0003bf  vwaitq
    ctx->pc = 0x169428u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16942c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16942cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x169430: 0xf9060000  sqc2        $vf6, 0x0($t0)
    ctx->pc = 0x169430u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x169434: 0x90001a  div         $zero, $a0, $s0
    ctx->pc = 0x169434u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x169438: 0xc6400210  lwc1        $f0, 0x210($s2)
    ctx->pc = 0x169438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16943c: 0x0  nop
    ctx->pc = 0x16943cu;
    // NOP
    // 0x169440: 0x1810  mfhi        $v1
    ctx->pc = 0x169440u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x169444: 0x90001a  div         $zero, $a0, $s0
    ctx->pc = 0x169444u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x169448: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x169448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16944c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x16944cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x169450: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x169450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169454: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x169454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x169458: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x169458u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16945c: 0xe6400210  swc1        $f0, 0x210($s2)
    ctx->pc = 0x16945cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 528), bits); }
    // 0x169460: 0xc6400214  lwc1        $f0, 0x214($s2)
    ctx->pc = 0x169460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169464: 0x1810  mfhi        $v1
    ctx->pc = 0x169464u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x169468: 0x90001a  div         $zero, $a0, $s0
    ctx->pc = 0x169468u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x16946c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16946cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x169470: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x169470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x169474: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x169474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169478: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x169478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16947c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16947cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x169480: 0xe6400214  swc1        $f0, 0x214($s2)
    ctx->pc = 0x169480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 532), bits); }
    // 0x169484: 0xc6400218  lwc1        $f0, 0x218($s2)
    ctx->pc = 0x169484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169488: 0x1810  mfhi        $v1
    ctx->pc = 0x169488u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x16948c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16948cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x169490: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x169490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x169494: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x169494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169498: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x169498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16949c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16949cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1694a0: 0xe6400218  swc1        $f0, 0x218($s2)
    ctx->pc = 0x1694a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 536), bits); }
    // 0x1694a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1694a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1694a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1694a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1694ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1694acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1694b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1694b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1694b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1694B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1694B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694B4u;
        // 0x1694b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1694B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1694BCu;
}
