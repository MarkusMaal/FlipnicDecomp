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

// Function: entry_0016173c
// Address: 0x16173c - 0x1617b0
void entry_0016173c_0x16173c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016173c_0x16173c");
#endif

    switch (ctx->pc) {
        case 0x1617a0u: goto label_1617a0;
        default: break;
    }

    ctx->pc = 0x16173cu;

    // 0x16173c: 0x0  nop
    ctx->pc = 0x16173cu;
    // NOP
    // 0x161740: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x161740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x161744: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x161744u;
    {
        const bool branch_taken_0x161744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161744u;
        // 0x161748: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161744) {
            ctx->pc = 0x16171Cu;
            return;
        }
    }
    ctx->pc = 0x16174Cu;
    // 0x16174c: 0xae0001ec  sw          $zero, 0x1EC($s0)
    ctx->pc = 0x16174cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 0));
    // 0x161750: 0x3c02bd4c  lui         $v0, 0xBD4C
    ctx->pc = 0x161750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
    // 0x161754: 0xc6000214  lwc1        $f0, 0x214($s0)
    ctx->pc = 0x161754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161758: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x161758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x16175c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16175cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x161760: 0x861301f4  lh          $s3, 0x1F4($s0)
    ctx->pc = 0x161760u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x161764: 0x8e1401f0  lw          $s4, 0x1F0($s0)
    ctx->pc = 0x161764u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x161768: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x161768u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16176c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x16176cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x161770: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x161770u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x161774: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x161774u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x161778: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x161778u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16177c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x16177cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x161780: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x161780u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x161784: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x161784u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x161788: 0xf8840030  sqc2        $vf4, 0x30($a0)
    ctx->pc = 0x161788u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16178c: 0xf8850020  sqc2        $vf5, 0x20($a0)
    ctx->pc = 0x16178cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x161790: 0xf8860010  sqc2        $vf6, 0x10($a0)
    ctx->pc = 0x161790u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x161794: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x161794u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x161798: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x161798u;
    SET_GPR_U32(ctx, 31, 0x1617A0u);
    ctx->pc = 0x16179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161798u;
    // 0x16179c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x161798u, 0x1617A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1617A0u;
label_1617a0:
    // 0x1617a0: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x1617a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
    // 0x1617a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1617a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617a8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1617A8u;
    {
        const bool branch_taken_0x1617a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1617ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1617A8u;
        // 0x1617ac: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1617a8) {
            ctx->pc = 0x1617E4u;
            return;
        }
    }
    ctx->pc = 0x1617B0u;
}
