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

// Function: FUN_00158670
// Address: 0x158670 - 0x158744
void FUN_00158670_0x158670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00158670_0x158670");
#endif

    switch (ctx->pc) {
        case 0x158710u: goto label_158710;
        case 0x158724u: goto label_158724;
        default: break;
    }

    ctx->pc = 0x158670u;

    // 0x158670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x158670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x158674: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x158674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x158678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15867c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15867cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158680: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x158680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x158684: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x158684u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x158688: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x158688u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15868c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x15868cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158690: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x158690u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x158694: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x158694u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x158698: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x158698u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15869c: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x15869cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1586a0: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x1586a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1586a4: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x1586a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1586a8: 0x78860020  lq          $a2, 0x20($a0)
    ctx->pc = 0x1586a8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1586ac: 0x78870030  lq          $a3, 0x30($a0)
    ctx->pc = 0x1586acu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1586b0: 0x78880040  lq          $t0, 0x40($a0)
    ctx->pc = 0x1586b0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1586b4: 0x78890050  lq          $t1, 0x50($a0)
    ctx->pc = 0x1586b4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1586b8: 0x7c860070  sq          $a2, 0x70($a0)
    ctx->pc = 0x1586b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 6));
    // 0x1586bc: 0x7c870080  sq          $a3, 0x80($a0)
    ctx->pc = 0x1586bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 7));
    // 0x1586c0: 0x7c880090  sq          $t0, 0x90($a0)
    ctx->pc = 0x1586c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 8));
    // 0x1586c4: 0x7c8900a0  sq          $t1, 0xA0($a0)
    ctx->pc = 0x1586c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 9));
    // 0x1586c8: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1586c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1586cc: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x1586ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1586d0: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1586d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1586d4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1586d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1586d8: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1586d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1586dc: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1586dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1586e0: 0x260301b0  addiu       $v1, $s0, 0x1B0
    ctx->pc = 0x1586e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x1586e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1586e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1586e8: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x1586e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x1586ec: 0xac820060  sw          $v0, 0x60($a0)
    ctx->pc = 0x1586ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
    // 0x1586f0: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1586f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1586f4: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x1586f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1586f8: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1586f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1586fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1586fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x158700: 0x0  nop
    ctx->pc = 0x158700u;
    // NOP
    // 0x158704: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x158704u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x158708: 0xc056270  jal         func_1589C0
    ctx->pc = 0x158708u;
    SET_GPR_U32(ctx, 31, 0x158710u);
    ctx->pc = 0x15870Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158708u;
    // 0x15870c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1589C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1589C0u, 0x158708u, 0x158710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158710u;
label_158710:
    // 0x158710: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x158710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x158714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158718: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x158718u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x15871c: 0xc056294  jal         func_158A50
    ctx->pc = 0x15871Cu;
    SET_GPR_U32(ctx, 31, 0x158724u);
    ctx->pc = 0x158720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15871Cu;
    // 0x158720: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158A50u, 0x15871Cu, 0x158724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158724u;
label_158724:
    // 0x158724: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x158724u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x158728: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x158728u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
    // 0x15872c: 0xa200006a  sb          $zero, 0x6A($s0)
    ctx->pc = 0x15872cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 0));
    // 0x158730: 0xa200006b  sb          $zero, 0x6B($s0)
    ctx->pc = 0x158730u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 107), (uint8_t)GPR_U32(ctx, 0));
    // 0x158734: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x158734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15873c: 0x3e00008  jr          $ra
    ctx->pc = 0x15873Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15873Cu;
        // 0x158740: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15873Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158744u;
}
