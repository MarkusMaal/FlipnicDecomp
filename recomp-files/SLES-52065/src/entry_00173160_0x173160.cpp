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

// Function: entry_00173160
// Address: 0x173160 - 0x1731e4
void entry_00173160_0x173160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173160_0x173160");
#endif

    ctx->pc = 0x173160u;

    // 0x173160: 0x26231480  addiu       $v1, $s1, 0x1480
    ctx->pc = 0x173160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5248));
    // 0x173164: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x173164u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173168: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x173168u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17316c: 0x4bc4292c  vsub.xyz    $vf4, $vf5, $vf4
    ctx->pc = 0x17316cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x173170: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x173170u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x173174: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x173174u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x173178: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x173178u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17317c: 0x4a0503bd  .word       0x4A0503BD                   # vsqrt       $Q, $vf5x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17317cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x173180: 0x4a0003bf  vwaitq
    ctx->pc = 0x173180u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x173184: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x173184u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x173188: 0x4a0002ff  vnop
    ctx->pc = 0x173188u;
    // NOP operation, no action needed for VU0
    // 0x17318c: 0x4a0002ff  vnop
    ctx->pc = 0x17318cu;
    // NOP operation, no action needed for VU0
    // 0x173190: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x173190u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x173194: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x173194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x173198: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x173198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x17319c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17319cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1731a0: 0x0  nop
    ctx->pc = 0x1731a0u;
    // NOP
    // 0x1731a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1731a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1731a8: 0x0  nop
    ctx->pc = 0x1731a8u;
    // NOP
    // 0x1731ac: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x1731ACu;
    {
        const bool branch_taken_0x1731ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1731ac) {
            ctx->pc = 0x173244u;
            return;
        }
    }
    ctx->pc = 0x1731B4u;
    // 0x1731b4: 0x8e226014  lw          $v0, 0x6014($s1)
    ctx->pc = 0x1731b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24596)));
    // 0x1731b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1731b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1731bc: 0x14450021  bne         $v0, $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1731BCu;
    {
        const bool branch_taken_0x1731bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1731bc) {
            ctx->pc = 0x173244u;
            return;
        }
    }
    ctx->pc = 0x1731C4u;
    // 0x1731c4: 0x8e236018  lw          $v1, 0x6018($s1)
    ctx->pc = 0x1731c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24600)));
    // 0x1731c8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1731c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1731cc: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1731CCu;
    {
        const bool branch_taken_0x1731cc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1731D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731CCu;
        // 0x1731d0: 0xae226018  sw          $v0, 0x6018($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1731cc) {
            ctx->pc = 0x1731E4u;
            return;
        }
    }
    ctx->pc = 0x1731D4u;
    // 0x1731d4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1731d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1731d8: 0xae226018  sw          $v0, 0x6018($s1)
    ctx->pc = 0x1731d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24600), GPR_U32(ctx, 2));
    // 0x1731dc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1731DCu;
    {
        const bool branch_taken_0x1731dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1731E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731DCu;
        // 0x1731e0: 0xa2256032  sb          $a1, 0x6032($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 24626), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1731dc) {
            ctx->pc = 0x173244u;
            return;
        }
    }
    ctx->pc = 0x1731E4u;
}
