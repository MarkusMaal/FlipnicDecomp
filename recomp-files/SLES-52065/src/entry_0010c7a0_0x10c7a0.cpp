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

// Function: entry_0010c7a0
// Address: 0x10c7a0 - 0x10c820
void entry_0010c7a0_0x10c7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c7a0_0x10c7a0");
#endif

    switch (ctx->pc) {
        case 0x10c818u: goto label_10c818;
        default: break;
    }

    ctx->pc = 0x10c7a0u;

    // 0x10c7a0: 0x8e280244  lw          $t0, 0x244($s1)
    ctx->pc = 0x10c7a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x10c7a4: 0x26240230  addiu       $a0, $s1, 0x230
    ctx->pc = 0x10c7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x10c7a8: 0x26230220  addiu       $v1, $s1, 0x220
    ctx->pc = 0x10c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x10c7ac: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x10c7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x10c7b0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x10c7b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10c7b4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x10c7b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10c7b8: 0x0  nop
    ctx->pc = 0x10c7b8u;
    // NOP
    // 0x10c7bc: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x10c7bcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x10c7c0: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x10c7c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x10c7c4: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x10c7c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x10c7c8: 0x4be621bc  vmulax.xyzw $ACC, $vf4, $vf6x
    ctx->pc = 0x10c7c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x10c7cc: 0x4be82a48  vmaddx.xyzw $vf9, $vf5, $vf8x
    ctx->pc = 0x10c7ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x10c7d0: 0xf8a90000  sqc2        $vf9, 0x0($a1)
    ctx->pc = 0x10c7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x10c7d4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x10c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x10c7d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x10c7d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10c7dc: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x10c7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x10c7e0: 0xc6200244  lwc1        $f0, 0x244($s1)
    ctx->pc = 0x10c7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10c7e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10c7e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c7e8: 0x0  nop
    ctx->pc = 0x10c7e8u;
    // NOP
    // 0x10c7ec: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x10C7ECu;
    {
        const bool branch_taken_0x10c7ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C7ECu;
        // 0x10c7f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c7ec) {
            ctx->pc = 0x10C82Cu;
            return;
        }
    }
    ctx->pc = 0x10C7F4u;
    // 0x10c7f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c7f8: 0xa225007a  sb          $a1, 0x7A($s1)
    ctx->pc = 0x10c7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 122), (uint8_t)GPR_U32(ctx, 5));
    // 0x10c7fc: 0xa2200078  sb          $zero, 0x78($s1)
    ctx->pc = 0x10c7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 0));
    // 0x10c800: 0xa623024e  sh          $v1, 0x24E($s1)
    ctx->pc = 0x10c800u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 590), (uint16_t)GPR_U32(ctx, 3));
    // 0x10c804: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x10c804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x10c808: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x10C808u;
    {
        const bool branch_taken_0x10c808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C808u;
        // 0x10c80c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c808) {
            ctx->pc = 0x10C82Cu;
            return;
        }
    }
    ctx->pc = 0x10C810u;
    // 0x10c810: 0xc042570  jal         func_1095C0
    ctx->pc = 0x10C810u;
    SET_GPR_U32(ctx, 31, 0x10C818u);
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x10C810u, 0x10C818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C818u;
label_10c818:
    // 0x10c818: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10C818u;
    {
        const bool branch_taken_0x10c818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C818u;
        // 0x10c81c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c818) {
            ctx->pc = 0x10C830u;
            return;
        }
    }
    ctx->pc = 0x10C820u;
}
