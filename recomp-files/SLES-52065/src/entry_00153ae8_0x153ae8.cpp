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

// Function: entry_00153ae8
// Address: 0x153ae8 - 0x153b2c
void entry_00153ae8_0x153ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153ae8_0x153ae8");
#endif

    ctx->pc = 0x153ae8u;

    // 0x153ae8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x153ae8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153aec: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x153aecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x153af0: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x153af0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153af4: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x153af4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153af8: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x153af8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153afc: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x153afcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153b00: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x153b00u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153b04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153b08: 0x460d6000  add.s       $f0, $f12, $f13
    ctx->pc = 0x153b08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x153b0c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x153b0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x153b10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x153b10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153b14: 0x0  nop
    ctx->pc = 0x153b14u;
    // NOP
    // 0x153b18: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x153B18u;
    {
        const bool branch_taken_0x153b18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x153B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B18u;
        // 0x153b1c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b18) {
            ctx->pc = 0x153B2Cu;
            return;
        }
    }
    ctx->pc = 0x153B20u;
    // 0x153b20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x153b20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153b24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x153B24u;
    {
        const bool branch_taken_0x153b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153b24) {
            ctx->pc = 0x153B30u;
            return;
        }
    }
    ctx->pc = 0x153B2Cu;
}
