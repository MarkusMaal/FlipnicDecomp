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

// Function: entry_00107934
// Address: 0x107934 - 0x107988
void entry_00107934_0x107934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107934_0x107934");
#endif

    ctx->pc = 0x107934u;

    // 0x107934: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x107934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x107938: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x107938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x10793c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x10793cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107940: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x107940u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107944: 0x4bc4296c  vsub.xyz    $vf5, $vf5, $vf4
    ctx->pc = 0x107944u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x107948: 0x4bc5292a  vmul.xyz    $vf4, $vf5, $vf5
    ctx->pc = 0x107948u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10794c: 0x4b85233d  vmr32.xy    $vf5, $vf4
    ctx->pc = 0x10794cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x107950: 0x4b062b3d  vmr32.x     $vf6, $vf5
    ctx->pc = 0x107950u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x107954: 0x4b0521e8  vadd.x      $vf7, $vf4, $vf5
    ctx->pc = 0x107954u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x107958: 0x4b073168  vadd.x      $vf5, $vf6, $vf7
    ctx->pc = 0x107958u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10795c: 0x4a0503bd  .word       0x4A0503BD                   # vsqrt       $Q, $vf5x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x10795cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x107960: 0x4a0003bf  vwaitq
    ctx->pc = 0x107960u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x107964: 0x4842b000  cfc2.ni     $v0, $vi22
    ctx->pc = 0x107964u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x107968: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x107968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10796c: 0x0  nop
    ctx->pc = 0x10796cu;
    // NOP
    // 0x107970: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x107970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107974: 0x0  nop
    ctx->pc = 0x107974u;
    // NOP
    // 0x107978: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x107978u;
    {
        const bool branch_taken_0x107978 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107978u;
        // 0x10797c: 0x2411007f  addiu       $s1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107978) {
            ctx->pc = 0x107988u;
            return;
        }
    }
    ctx->pc = 0x107980u;
    // 0x107980: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x107980u;
    {
        const bool branch_taken_0x107980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107980u;
        // 0x107984: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107980) {
            ctx->pc = 0x1079CCu;
            return;
        }
    }
    ctx->pc = 0x107988u;
}
