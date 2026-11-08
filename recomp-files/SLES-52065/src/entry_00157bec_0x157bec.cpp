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

// Function: entry_00157bec
// Address: 0x157bec - 0x157cc4
void entry_00157bec_0x157bec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157bec_0x157bec");
#endif

    switch (ctx->pc) {
        case 0x157c78u: goto label_157c78;
        case 0x157c8cu: goto label_157c8c;
        case 0x157cb0u: goto label_157cb0;
        default: break;
    }

    ctx->pc = 0x157becu;

    // 0x157bec: 0x0  nop
    ctx->pc = 0x157becu;
    // NOP
    // 0x157bf0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x157bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x157bf4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x157BF4u;
    {
        const bool branch_taken_0x157bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BF4u;
        // 0x157bf8: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bf4) {
            ctx->pc = 0x157BE0u;
            return;
        }
    }
    ctx->pc = 0x157BFCu;
    // 0x157bfc: 0x26020300  addiu       $v0, $s0, 0x300
    ctx->pc = 0x157bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x157c00: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x157c00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157c04: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x157c04u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157c08: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x157c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x157c0c: 0xae0002f0  sw          $zero, 0x2F0($s0)
    ctx->pc = 0x157c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 0));
    // 0x157c10: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x157c10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157c14: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x157c14u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157c18: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x157c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x157c1c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x157c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x157c20: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x157c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x157c24: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x157c24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157c28: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x157c28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157c2c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x157c2cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157c30: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x157c30u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157c34: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x157c34u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x157c38: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x157c38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157c3c: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x157c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x157c40: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x157c40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x157c44: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x157c44u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x157c48: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x157c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x157c4c: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x157c4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157c50: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x157c50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157c54: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x157c54u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157c58: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x157c58u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157c5c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x157c5cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x157c60: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x157c60u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157c64: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x157c64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x157c68: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x157c68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x157c6c: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x157c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x157c70: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x157C70u;
    SET_GPR_U32(ctx, 31, 0x157C78u);
    ctx->pc = 0x157C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C70u;
    // 0x157c74: 0xc60c0260  lwc1        $f12, 0x260($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x157C70u, 0x157C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C78u;
label_157c78:
    // 0x157c78: 0xe6000260  swc1        $f0, 0x260($s0)
    ctx->pc = 0x157c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x157c7c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x157c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x157c80: 0xc60c0260  lwc1        $f12, 0x260($s0)
    ctx->pc = 0x157c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x157c84: 0xc07d3fe  jal         func_1F4FF8
    ctx->pc = 0x157C84u;
    SET_GPR_U32(ctx, 31, 0x157C8Cu);
    ctx->pc = 0x157C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C84u;
    // 0x157c88: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4FF8u, 0x157C84u, 0x157C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C8Cu;
label_157c8c:
    // 0x157c8c: 0xc60c0268  lwc1        $f12, 0x268($s0)
    ctx->pc = 0x157c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x157c90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157c90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157c94: 0x0  nop
    ctx->pc = 0x157c94u;
    // NOP
    // 0x157c98: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x157c98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157c9c: 0x0  nop
    ctx->pc = 0x157c9cu;
    // NOP
    // 0x157ca0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x157CA0u;
    {
        const bool branch_taken_0x157ca0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x157ca0) {
            ctx->pc = 0x157CC4u;
            return;
        }
    }
    ctx->pc = 0x157CA8u;
    // 0x157ca8: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x157CA8u;
    SET_GPR_U32(ctx, 31, 0x157CB0u);
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x157CA8u, 0x157CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CB0u;
label_157cb0:
    // 0x157cb0: 0xe6000268  swc1        $f0, 0x268($s0)
    ctx->pc = 0x157cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    // 0x157cb4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x157cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x157cb8: 0xc60c0268  lwc1        $f12, 0x268($s0)
    ctx->pc = 0x157cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x157cbc: 0xc07d3d4  jal         func_1F4F50
    ctx->pc = 0x157CBCu;
    SET_GPR_U32(ctx, 31, 0x157CC4u);
    ctx->pc = 0x157CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157CBCu;
    // 0x157cc0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F50u, 0x157CBCu, 0x157CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CC4u;
}
