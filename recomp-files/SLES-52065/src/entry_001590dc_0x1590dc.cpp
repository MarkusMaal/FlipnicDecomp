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

// Function: entry_001590dc
// Address: 0x1590dc - 0x159170
void entry_001590dc_0x1590dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001590dc_0x1590dc");
#endif

    ctx->pc = 0x1590dcu;

    // 0x1590dc: 0x0  nop
    ctx->pc = 0x1590dcu;
    // NOP
    // 0x1590e0: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x1590e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1590e4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1590E4u;
    {
        const bool branch_taken_0x1590e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1590E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1590E4u;
        // 0x1590e8: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1590e4) {
            ctx->pc = 0x1590C4u;
            return;
        }
    }
    ctx->pc = 0x1590ECu;
    // 0x1590ec: 0xc62001e0  lwc1        $f0, 0x1E0($s1)
    ctx->pc = 0x1590ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1590f0: 0x3c023e00  lui         $v0, 0x3E00
    ctx->pc = 0x1590f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15872 << 16));
    // 0x1590f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1590f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1590f8: 0x262701e0  addiu       $a3, $s1, 0x1E0
    ctx->pc = 0x1590f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x1590fc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1590fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x159100: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x159100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x159104: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x159104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x159108: 0xe62001e0  swc1        $f0, 0x1E0($s1)
    ctx->pc = 0x159108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
    // 0x15910c: 0xc62001e4  lwc1        $f0, 0x1E4($s1)
    ctx->pc = 0x15910cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159110: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x159110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x159114: 0xe62001e4  swc1        $f0, 0x1E4($s1)
    ctx->pc = 0x159114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 484), bits); }
    // 0x159118: 0xc62001e8  lwc1        $f0, 0x1E8($s1)
    ctx->pc = 0x159118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15911c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15911cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x159120: 0xe62001e8  swc1        $f0, 0x1E8($s1)
    ctx->pc = 0x159120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 488), bits); }
    // 0x159124: 0xae2001ec  sw          $zero, 0x1EC($s1)
    ctx->pc = 0x159124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 492), GPR_U32(ctx, 0));
    // 0x159128: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x159128u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15912c: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x15912cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x159130: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x159130u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159134: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x159134u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x159138: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x159138u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15913c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x15913cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159140: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x159140u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159144: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x159144u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159148: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x159148u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x15914c: 0x4a0003bf  vwaitq
    ctx->pc = 0x15914cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x159150: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x159150u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159154: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x159154u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x159158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15915c: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x15915cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
    // 0x159160: 0x8e2601f0  lw          $a2, 0x1F0($s1)
    ctx->pc = 0x159160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x159164: 0x862401f4  lh          $a0, 0x1F4($s1)
    ctx->pc = 0x159164u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 500)));
    // 0x159168: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x159168u;
    {
        const bool branch_taken_0x159168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159168u;
        // 0x15916c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159168) {
            ctx->pc = 0x1591B0u;
            return;
        }
    }
    ctx->pc = 0x159170u;
}
