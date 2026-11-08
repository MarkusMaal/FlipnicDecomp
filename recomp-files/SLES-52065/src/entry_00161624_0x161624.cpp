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

// Function: entry_00161624
// Address: 0x161624 - 0x1616b0
void entry_00161624_0x161624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161624_0x161624");
#endif

    switch (ctx->pc) {
        case 0x161630u: goto label_161630;
        case 0x161640u: goto label_161640;
        case 0x161650u: goto label_161650;
        case 0x1616a0u: goto label_1616a0;
        default: break;
    }

    ctx->pc = 0x161624u;

    // 0x161624: 0x860201f4  lh          $v0, 0x1F4($s0)
    ctx->pc = 0x161624u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x161628: 0xc040168  jal         func_1005A0
    ctx->pc = 0x161628u;
    SET_GPR_U32(ctx, 31, 0x161630u);
    ctx->pc = 0x16162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161628u;
    // 0x16162c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x161628u, 0x161630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161630u;
label_161630:
    // 0x161630: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x161630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161634: 0x860201f4  lh          $v0, 0x1F4($s0)
    ctx->pc = 0x161634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x161638: 0xc040168  jal         func_1005A0
    ctx->pc = 0x161638u;
    SET_GPR_U32(ctx, 31, 0x161640u);
    ctx->pc = 0x16163Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161638u;
    // 0x16163c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x161638u, 0x161640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161640u;
label_161640:
    // 0x161640: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x161640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161644: 0x860201f4  lh          $v0, 0x1F4($s0)
    ctx->pc = 0x161644u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x161648: 0xc040168  jal         func_1005A0
    ctx->pc = 0x161648u;
    SET_GPR_U32(ctx, 31, 0x161650u);
    ctx->pc = 0x16164Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161648u;
    // 0x16164c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x161648u, 0x161650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161650u;
label_161650:
    // 0x161650: 0xc6000214  lwc1        $f0, 0x214($s0)
    ctx->pc = 0x161650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161654: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x161654u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161658: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x161658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16165c: 0x861301f4  lh          $s3, 0x1F4($s0)
    ctx->pc = 0x16165cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x161660: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x161660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x161664: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x161664u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161668: 0x8e1401f0  lw          $s4, 0x1F0($s0)
    ctx->pc = 0x161668u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x16166c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16166cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x161670: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x161670u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x161674: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x161674u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x161678: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x161678u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16167c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x16167cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x161680: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x161680u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x161684: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x161684u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x161688: 0xf8840030  sqc2        $vf4, 0x30($a0)
    ctx->pc = 0x161688u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16168c: 0xf8850020  sqc2        $vf5, 0x20($a0)
    ctx->pc = 0x16168cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x161690: 0xf8860010  sqc2        $vf6, 0x10($a0)
    ctx->pc = 0x161690u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x161694: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x161694u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x161698: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x161698u;
    SET_GPR_U32(ctx, 31, 0x1616A0u);
    ctx->pc = 0x16169Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161698u;
    // 0x16169c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x161698u, 0x1616A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1616A0u;
label_1616a0:
    // 0x1616a0: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x1616a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x1616a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1616a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1616a8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1616A8u;
    {
        const bool branch_taken_0x1616a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1616ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1616A8u;
        // 0x1616ac: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1616a8) {
            ctx->pc = 0x1616E4u;
            return;
        }
    }
    ctx->pc = 0x1616B0u;
}
