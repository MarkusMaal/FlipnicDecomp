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

// Function: entry_0016fa04
// Address: 0x16fa04 - 0x16fab4
void entry_0016fa04_0x16fa04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fa04_0x16fa04");
#endif

    switch (ctx->pc) {
        case 0x16fa90u: goto label_16fa90;
        default: break;
    }

    ctx->pc = 0x16fa04u;

    // 0x16fa04: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x16fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x16fa08: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16fa08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fa0c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x16fa0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16fa10: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x16fa10u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x16fa14: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x16fa14u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x16fa18: 0xda280000  lqc2        $vf8, 0x0($s1)
    ctx->pc = 0x16fa18u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16fa1c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x16fa1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16fa20: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x16fa20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16fa24: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x16fa24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16fa28: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x16fa28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x16fa2c: 0xf8690000  sqc2        $vf9, 0x0($v1)
    ctx->pc = 0x16fa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x16fa30: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x16fa30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x16fa34: 0xc7b40124  lwc1        $f20, 0x124($sp)
    ctx->pc = 0x16fa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16fa38: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x16fa38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16fa3c: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x16fa3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16fa40: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x16fa40u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fa44: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x16fa44u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fa48: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x16fa48u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x16fa4c: 0xf8840030  sqc2        $vf4, 0x30($a0)
    ctx->pc = 0x16fa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16fa50: 0xf8850020  sqc2        $vf5, 0x20($a0)
    ctx->pc = 0x16fa50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16fa54: 0xf8860010  sqc2        $vf6, 0x10($a0)
    ctx->pc = 0x16fa54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16fa58: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x16fa58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x16fa5c: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x16fa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x16fa60: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x16fa60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16fa64: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x16fa64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16fa68: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x16fa68u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fa6c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x16fa6cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fa70: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x16fa70u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x16fa74: 0xf8a40030  sqc2        $vf4, 0x30($a1)
    ctx->pc = 0x16fa74u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16fa78: 0xf8a50020  sqc2        $vf5, 0x20($a1)
    ctx->pc = 0x16fa78u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16fa7c: 0xf8a60010  sqc2        $vf6, 0x10($a1)
    ctx->pc = 0x16fa7cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16fa80: 0xf8a70000  sqc2        $vf7, 0x0($a1)
    ctx->pc = 0x16fa80u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x16fa84: 0xc6000260  lwc1        $f0, 0x260($s0)
    ctx->pc = 0x16fa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16fa88: 0xc07d3fe  jal         func_1F4FF8
    ctx->pc = 0x16FA88u;
    SET_GPR_U32(ctx, 31, 0x16FA90u);
    ctx->pc = 0x16FA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FA88u;
    // 0x16fa8c: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4FF8u, 0x16FA88u, 0x16FA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FA90u;
label_16fa90:
    // 0x16fa90: 0xc60c0268  lwc1        $f12, 0x268($s0)
    ctx->pc = 0x16fa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16fa94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16fa94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16fa98: 0x0  nop
    ctx->pc = 0x16fa98u;
    // NOP
    // 0x16fa9c: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x16fa9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16faa0: 0x0  nop
    ctx->pc = 0x16faa0u;
    // NOP
    // 0x16faa4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16FAA4u;
    {
        const bool branch_taken_0x16faa4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAA4u;
        // 0x16faa8: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16faa4) {
            ctx->pc = 0x16FAB4u;
            return;
        }
    }
    ctx->pc = 0x16FAACu;
    // 0x16faac: 0xc07d3d4  jal         func_1F4F50
    ctx->pc = 0x16FAACu;
    SET_GPR_U32(ctx, 31, 0x16FAB4u);
    ctx->pc = 0x16FAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FAACu;
    // 0x16fab0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F50u, 0x16FAACu, 0x16FAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FAB4u;
}
