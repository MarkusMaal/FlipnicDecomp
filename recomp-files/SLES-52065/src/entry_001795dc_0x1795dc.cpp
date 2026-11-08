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

// Function: entry_001795dc
// Address: 0x1795dc - 0x179634
void entry_001795dc_0x1795dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001795dc_0x1795dc");
#endif

    ctx->pc = 0x1795dcu;

    // 0x1795dc: 0x0  nop
    ctx->pc = 0x1795dcu;
    // NOP
    // 0x1795e0: 0x29670003  slti        $a3, $t3, 0x3
    ctx->pc = 0x1795e0u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1795e4: 0x14e0ffcc  bnez        $a3, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1795E4u;
    {
        const bool branch_taken_0x1795e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1795E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795E4u;
        // 0x1795e8: 0x23940  sll         $a3, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1795e4) {
            ctx->pc = 0x179518u;
            return;
        }
    }
    ctx->pc = 0x1795ECu;
    // 0x1795ec: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x1795ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1795f0: 0x24e80020  addiu       $t0, $a3, 0x20
    ctx->pc = 0x1795f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1795f4: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x1795f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1795f8: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1795f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1795fc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1795fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179600: 0x4bc1086a  vmul.xyz    $vf1, $vf1, $vf1
    ctx->pc = 0x179600u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179604: 0x4b010841  vaddy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x179604u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179608: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x179608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17960c: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x17960cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x179610: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x179610u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x179614: 0xc4e20024  lwc1        $f2, 0x24($a3)
    ctx->pc = 0x179614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x179618: 0xc4810828  lwc1        $f1, 0x828($a0)
    ctx->pc = 0x179618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17961c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x17961cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x179620: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x179620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179624: 0x0  nop
    ctx->pc = 0x179624u;
    // NOP
    // 0x179628: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x179628u;
    {
        const bool branch_taken_0x179628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x179628) {
            ctx->pc = 0x179634u;
            return;
        }
    }
    ctx->pc = 0x179630u;
    // 0x179630: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x179630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x179634u;
}
