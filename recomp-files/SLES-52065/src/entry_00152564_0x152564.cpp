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

// Function: entry_00152564
// Address: 0x152564 - 0x1525b4
void entry_00152564_0x152564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152564_0x152564");
#endif

    switch (ctx->pc) {
        case 0x1525b0u: goto label_1525b0;
        default: break;
    }

    ctx->pc = 0x152564u;

    // 0x152564: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x152564u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x152568: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x152568u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15256c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x15256cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x152570: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x152570u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x152574: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x152574u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x152578: 0xfa040030  sqc2        $vf4, 0x30($s0)
    ctx->pc = 0x152578u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15257c: 0xfa050020  sqc2        $vf5, 0x20($s0)
    ctx->pc = 0x15257cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x152580: 0xfa060010  sqc2        $vf6, 0x10($s0)
    ctx->pc = 0x152580u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x152584: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x152584u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x152588: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152588u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15258c: 0x0  nop
    ctx->pc = 0x15258cu;
    // NOP
    // 0x152590: 0x46190032  c.eq.s      $f0, $f25
    ctx->pc = 0x152590u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152594: 0x0  nop
    ctx->pc = 0x152594u;
    // NOP
    // 0x152598: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x152598u;
    {
        const bool branch_taken_0x152598 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152598u;
        // 0x15259c: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x152598) {
            ctx->pc = 0x1525B4u;
            return;
        }
    }
    ctx->pc = 0x1525A0u;
    // 0x1525a0: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x1525a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x1525a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1525a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1525a8: 0xc07d3d4  jal         func_1F4F50
    ctx->pc = 0x1525A8u;
    SET_GPR_U32(ctx, 31, 0x1525B0u);
    ctx->pc = 0x1525ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1525A8u;
    // 0x1525ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F50u, 0x1525A8u, 0x1525B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1525B0u;
label_1525b0:
    // 0x1525b0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1525b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->pc = 0x1525b4u;
}
