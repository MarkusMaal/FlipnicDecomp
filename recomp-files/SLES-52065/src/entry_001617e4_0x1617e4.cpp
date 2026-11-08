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

// Function: entry_001617e4
// Address: 0x1617e4 - 0x161844
void entry_001617e4_0x1617e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001617e4_0x1617e4");
#endif

    switch (ctx->pc) {
        case 0x161834u: goto label_161834;
        default: break;
    }

    ctx->pc = 0x1617e4u;

    // 0x1617e4: 0x0  nop
    ctx->pc = 0x1617e4u;
    // NOP
    // 0x1617e8: 0x73102a  slt         $v0, $v1, $s3
    ctx->pc = 0x1617e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1617ec: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1617ECu;
    {
        const bool branch_taken_0x1617ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1617ec) {
            ctx->pc = 0x1617B0u;
            return;
        }
    }
    ctx->pc = 0x1617F4u;
    // 0x1617f4: 0xc60c0214  lwc1        $f12, 0x214($s0)
    ctx->pc = 0x1617f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1617f8: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x1617f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617fc: 0x861301f4  lh          $s3, 0x1F4($s0)
    ctx->pc = 0x1617fcu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x161800: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x161800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x161804: 0x8e1401f0  lw          $s4, 0x1F0($s0)
    ctx->pc = 0x161804u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x161808: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x161808u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16180c: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x16180cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x161810: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x161810u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x161814: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x161814u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x161818: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x161818u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x16181c: 0xf8840030  sqc2        $vf4, 0x30($a0)
    ctx->pc = 0x16181cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x161820: 0xf8850020  sqc2        $vf5, 0x20($a0)
    ctx->pc = 0x161820u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x161824: 0xf8860010  sqc2        $vf6, 0x10($a0)
    ctx->pc = 0x161824u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x161828: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x161828u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x16182c: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x16182Cu;
    SET_GPR_U32(ctx, 31, 0x161834u);
    ctx->pc = 0x161830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16182Cu;
    // 0x161830: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x16182Cu, 0x161834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161834u;
label_161834:
    // 0x161834: 0xafa0016c  sw          $zero, 0x16C($sp)
    ctx->pc = 0x161834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
    // 0x161838: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x161838u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16183c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x16183Cu;
    {
        const bool branch_taken_0x16183c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16183Cu;
        // 0x161840: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16183c) {
            ctx->pc = 0x161878u;
            return;
        }
    }
    ctx->pc = 0x161844u;
}
