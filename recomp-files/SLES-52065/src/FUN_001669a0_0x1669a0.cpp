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

// Function: FUN_001669a0
// Address: 0x1669a0 - 0x166a54
void FUN_001669a0_0x1669a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001669a0_0x1669a0");
#endif

    switch (ctx->pc) {
        case 0x166a48u: goto label_166a48;
        default: break;
    }

    ctx->pc = 0x1669a0u;

    // 0x1669a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1669a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1669a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1669a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1669a8: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1669a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1669ac: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x1669acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1669b0: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x1669b0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1669b4: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x1669b4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1669b8: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x1669b8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1669bc: 0xf8a40030  sqc2        $vf4, 0x30($a1)
    ctx->pc = 0x1669bcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1669c0: 0xf8a50020  sqc2        $vf5, 0x20($a1)
    ctx->pc = 0x1669c0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1669c4: 0xf8a60010  sqc2        $vf6, 0x10($a1)
    ctx->pc = 0x1669c4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1669c8: 0xf8a70000  sqc2        $vf7, 0x0($a1)
    ctx->pc = 0x1669c8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1669cc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1669ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1669d0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1669d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1669d4: 0x0  nop
    ctx->pc = 0x1669d4u;
    // NOP
    // 0x1669d8: 0x460c1881  sub.s       $f2, $f3, $f12
    ctx->pc = 0x1669d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[12]);
    // 0x1669dc: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x1669dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1669e0: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x1669e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1669e4: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x1669e4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x1669e8: 0x4600601c  madd.s      $f0, $f12, $f0
    ctx->pc = 0x1669e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[12], ctx->f[0]));
    // 0x1669ec: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x1669ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x1669f0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1669f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1669f4: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x1669f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1669f8: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x1669f8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x1669fc: 0x4600601c  madd.s      $f0, $f12, $f0
    ctx->pc = 0x1669fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[12], ctx->f[0]));
    // 0x166a00: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x166a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x166a04: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x166a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166a08: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x166a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166a0c: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x166a0cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x166a10: 0x4600601c  madd.s      $f0, $f12, $f0
    ctx->pc = 0x166a10u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[12], ctx->f[0]));
    // 0x166a14: 0xe4a00038  swc1        $f0, 0x38($a1)
    ctx->pc = 0x166a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x166a18: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x166a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166a1c: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x166a1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166a20: 0x0  nop
    ctx->pc = 0x166a20u;
    // NOP
    // 0x166a24: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x166A24u;
    {
        const bool branch_taken_0x166a24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x166a24) {
            ctx->pc = 0x166A48u;
            goto label_166a48;
        }
    }
    ctx->pc = 0x166A2Cu;
    // 0x166a2c: 0x0  nop
    ctx->pc = 0x166a2cu;
    // NOP
    // 0x166a30: 0x0  nop
    ctx->pc = 0x166a30u;
    // NOP
    // 0x166a34: 0x46001b03  div.s       $f12, $f3, $f0
    ctx->pc = 0x166a34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x166a38: 0x0  nop
    ctx->pc = 0x166a38u;
    // NOP
    // 0x166a3c: 0x0  nop
    ctx->pc = 0x166a3cu;
    // NOP
    // 0x166a40: 0xc0548c8  jal         func_152320
    ctx->pc = 0x166A40u;
    SET_GPR_U32(ctx, 31, 0x166A48u);
    ctx->pc = 0x166A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166A40u;
    // 0x166a44: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152320u, 0x166A40u, 0x166A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166A48u;
label_166a48:
    // 0x166a48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x166A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A4Cu;
        // 0x166a50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166A54u;
}
