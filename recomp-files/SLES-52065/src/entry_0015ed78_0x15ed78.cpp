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

// Function: entry_0015ed78
// Address: 0x15ed78 - 0x15ee10
void entry_0015ed78_0x15ed78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ed78_0x15ed78");
#endif

    switch (ctx->pc) {
        case 0x15edd4u: goto label_15edd4;
        default: break;
    }

    ctx->pc = 0x15ed78u;

    // 0x15ed78: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x15ed78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15ed7c: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x15ed7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15ed80: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x15ed80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15ed84: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x15ed84u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15ed88: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x15ed88u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15ed8c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x15ed8cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x15ed90: 0xf8840030  sqc2        $vf4, 0x30($a0)
    ctx->pc = 0x15ed90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15ed94: 0xf8850020  sqc2        $vf5, 0x20($a0)
    ctx->pc = 0x15ed94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15ed98: 0xf8860010  sqc2        $vf6, 0x10($a0)
    ctx->pc = 0x15ed98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15ed9c: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x15ed9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x15eda0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x15eda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x15eda4: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x15eda4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15eda8: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x15eda8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15edac: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x15edacu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15edb0: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x15edb0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15edb4: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x15edb4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x15edb8: 0xf8a40030  sqc2        $vf4, 0x30($a1)
    ctx->pc = 0x15edb8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15edbc: 0xf8a50020  sqc2        $vf5, 0x20($a1)
    ctx->pc = 0x15edbcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15edc0: 0xf8a60010  sqc2        $vf6, 0x10($a1)
    ctx->pc = 0x15edc0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15edc4: 0xf8a70000  sqc2        $vf7, 0x0($a1)
    ctx->pc = 0x15edc4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x15edc8: 0xc4c002a0  lwc1        $f0, 0x2A0($a2)
    ctx->pc = 0x15edc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15edcc: 0xc07d3fe  jal         func_1F4FF8
    ctx->pc = 0x15EDCCu;
    SET_GPR_U32(ctx, 31, 0x15EDD4u);
    ctx->pc = 0x15EDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDCCu;
    // 0x15edd0: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4FF8u, 0x15EDCCu, 0x15EDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EDD4u;
label_15edd4:
    // 0x15edd4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x15edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x15edd8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x15edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x15eddc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15ede0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x15ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x15ede4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15ede8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x15edec: 0xc44c02a8  lwc1        $f12, 0x2A8($v0)
    ctx->pc = 0x15edecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15edf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15edf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15edf4: 0x0  nop
    ctx->pc = 0x15edf4u;
    // NOP
    // 0x15edf8: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x15edf8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15edfc: 0x0  nop
    ctx->pc = 0x15edfcu;
    // NOP
    // 0x15ee00: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x15EE00u;
    {
        const bool branch_taken_0x15ee00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE00u;
        // 0x15ee04: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ee00) {
            ctx->pc = 0x15EE10u;
            return;
        }
    }
    ctx->pc = 0x15EE08u;
    // 0x15ee08: 0xc07d3d4  jal         func_1F4F50
    ctx->pc = 0x15EE08u;
    SET_GPR_U32(ctx, 31, 0x15EE10u);
    ctx->pc = 0x15EE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EE08u;
    // 0x15ee0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F50u, 0x15EE08u, 0x15EE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EE10u;
}
