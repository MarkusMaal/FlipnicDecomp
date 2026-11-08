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

// Function: entry_001690c4
// Address: 0x1690c4 - 0x169114
void entry_001690c4_0x1690c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001690c4_0x1690c4");
#endif

    ctx->pc = 0x1690c4u;

    // 0x1690c4: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1690c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1690c8: 0x4b002103  vaddw.x     $vf4, $vf4, $vf0w
    ctx->pc = 0x1690c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1690cc: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1690ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1690d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1690d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1690d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1690d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1690d8: 0xc44d0054  lwc1        $f13, 0x54($v0)
    ctx->pc = 0x1690d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1690dc: 0x460d0032  c.eq.s      $f0, $f13
    ctx->pc = 0x1690dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1690e0: 0x0  nop
    ctx->pc = 0x1690e0u;
    // NOP
    // 0x1690e4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1690E4u;
    {
        const bool branch_taken_0x1690e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1690e4) {
            ctx->pc = 0x169114u;
            return;
        }
    }
    ctx->pc = 0x1690ECu;
    // 0x1690ec: 0xc6000240  lwc1        $f0, 0x240($s0)
    ctx->pc = 0x1690ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1690f0: 0x0  nop
    ctx->pc = 0x1690f0u;
    // NOP
    // 0x1690f4: 0x0  nop
    ctx->pc = 0x1690f4u;
    // NOP
    // 0x1690f8: 0x0  nop
    ctx->pc = 0x1690f8u;
    // NOP
    // 0x1690fc: 0x46000044  c1          0x44
    ctx->pc = 0x1690fcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x169100: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x169100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x169104: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x169104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x169108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16910c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16910Cu;
    {
        const bool branch_taken_0x16910c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16910Cu;
        // 0x169110: 0x46010342  mul.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16910c) {
            ctx->pc = 0x16912Cu;
            return;
        }
    }
    ctx->pc = 0x169114u;
}
