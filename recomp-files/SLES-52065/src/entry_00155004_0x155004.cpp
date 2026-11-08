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

// Function: entry_00155004
// Address: 0x155004 - 0x155044
void entry_00155004_0x155004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155004_0x155004");
#endif

    ctx->pc = 0x155004u;

    // 0x155004: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x155004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x155008: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x155008u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x15500c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x15500cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155010: 0x0  nop
    ctx->pc = 0x155010u;
    // NOP
    // 0x155014: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x155014u;
    {
        const bool branch_taken_0x155014 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x155018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155014u;
        // 0x155018: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155014) {
            ctx->pc = 0x155044u;
            return;
        }
    }
    ctx->pc = 0x15501Cu;
    // 0x15501c: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x15501cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155020: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x155020u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x155024: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x155024u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x155028: 0x0  nop
    ctx->pc = 0x155028u;
    // NOP
    // 0x15502c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x15502cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x155030: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x155030u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155034: 0x4be6396c  vsub.xyzw   $vf5, $vf7, $vf6
    ctx->pc = 0x155034u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155038: 0xfa450000  sqc2        $vf5, 0x0($s2)
    ctx->pc = 0x155038u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15503c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15503Cu;
    {
        const bool branch_taken_0x15503c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15503Cu;
        // 0x155040: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15503c) {
            ctx->pc = 0x155050u;
            return;
        }
    }
    ctx->pc = 0x155044u;
}
