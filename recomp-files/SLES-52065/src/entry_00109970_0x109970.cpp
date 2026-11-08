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

// Function: entry_00109970
// Address: 0x109970 - 0x1099f4
void entry_00109970_0x109970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109970_0x109970");
#endif

    switch (ctx->pc) {
        case 0x1099f0u: goto label_1099f0;
        default: break;
    }

    ctx->pc = 0x109970u;

    // 0x109970: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x109970u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x109974: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x109974u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x109978: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x109978u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10997c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x10997cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x109980: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x109980u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x109984: 0xf8a40030  sqc2        $vf4, 0x30($a1)
    ctx->pc = 0x109984u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x109988: 0xf8a50020  sqc2        $vf5, 0x20($a1)
    ctx->pc = 0x109988u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10998c: 0xf8a60010  sqc2        $vf6, 0x10($a1)
    ctx->pc = 0x10998cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x109990: 0xf8a70000  sqc2        $vf7, 0x0($a1)
    ctx->pc = 0x109990u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x109994: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x109994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x109998: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x109998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10999c: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x10999cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1099a0: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1099a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x1099a4: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x1099a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1099a8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1099a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1099ac: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1099acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1099b0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1099b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1099b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1099b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1099b8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1099b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1099bc: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x1099bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1099c0: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x1099c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1099c4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1099c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1099c8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1099c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1099cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1099ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1099d0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1099d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1099d4: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x1099d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1099d8: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x1099d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1099dc: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1099dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1099e0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1099e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1099e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1099e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1099e8: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x1099E8u;
    SET_GPR_U32(ctx, 31, 0x1099F0u);
    ctx->pc = 0x1099ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1099E8u;
    // 0x1099ec: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x1099E8u, 0x1099F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1099F0u;
label_1099f0:
    // 0x1099f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1099f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1099f4u;
}
