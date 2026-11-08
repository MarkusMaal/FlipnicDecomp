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

// Function: entry_001541e8
// Address: 0x1541e8 - 0x154248
void entry_001541e8_0x1541e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001541e8_0x1541e8");
#endif

    ctx->pc = 0x1541e8u;

    // 0x1541e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1541e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1541ec: 0x0  nop
    ctx->pc = 0x1541ecu;
    // NOP
    // 0x1541f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1541f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1541f4: 0x0  nop
    ctx->pc = 0x1541f4u;
    // NOP
    // 0x1541f8: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x1541F8u;
    {
        const bool branch_taken_0x1541f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1541FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1541F8u;
        // 0x1541fc: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1541f8) {
            ctx->pc = 0x1542B4u;
            return;
        }
    }
    ctx->pc = 0x154200u;
    // 0x154200: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x154200u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x154204: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x154204u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x154208: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x154208u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15420c: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x15420cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154210: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x154210u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154214: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x154214u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154218: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x154218u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15421c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x15421cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154220: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x154220u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x154224: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x154224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x154228: 0x460d6040  add.s       $f1, $f12, $f13
    ctx->pc = 0x154228u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x15422c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x15422cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x154230: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x154230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154234: 0x0  nop
    ctx->pc = 0x154234u;
    // NOP
    // 0x154238: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x154238u;
    {
        const bool branch_taken_0x154238 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x154238) {
            ctx->pc = 0x154248u;
            return;
        }
    }
    ctx->pc = 0x154240u;
    // 0x154240: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x154240u;
    {
        const bool branch_taken_0x154240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154240u;
        // 0x154244: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154240) {
            ctx->pc = 0x15424Cu;
            return;
        }
    }
    ctx->pc = 0x154248u;
}
