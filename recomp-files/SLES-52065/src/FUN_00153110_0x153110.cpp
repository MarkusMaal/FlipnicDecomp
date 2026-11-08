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

// Function: FUN_00153110
// Address: 0x153110 - 0x153210
void FUN_00153110_0x153110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00153110_0x153110");
#endif

    ctx->pc = 0x153110u;

    // 0x153110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x153110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x153114: 0x27a20000  addiu       $v0, $sp, 0x0
    ctx->pc = 0x153114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x153118: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x153118u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15311c: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x15311cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x153120: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x153120u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153124: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x153124u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153128: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x153128u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15312c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x15312cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153130: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x153130u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153134: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x153134u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153138: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x153138u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15313c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15313cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x153140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153144: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x153144u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x153148: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x153148u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15314c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x15314cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153150: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x153150u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153154: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x153154u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x153158: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15315c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x15315cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153160: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x153160u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153164: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x153164u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153168: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x153168u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15316c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x15316cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153170: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x153170u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x153174: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x153174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x153178: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x153178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15317c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15317cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x153180: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x153180u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x153184: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153188: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153188u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15318c: 0x0  nop
    ctx->pc = 0x15318cu;
    // NOP
    // 0x153190: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x153190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153194: 0x0  nop
    ctx->pc = 0x153194u;
    // NOP
    // 0x153198: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x153198u;
    {
        const bool branch_taken_0x153198 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x153198) {
            ctx->pc = 0x153208u;
            goto label_153208;
        }
    }
    ctx->pc = 0x1531A0u;
    // 0x1531a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1531a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1531a4: 0x0  nop
    ctx->pc = 0x1531a4u;
    // NOP
    // 0x1531a8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1531a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1531ac: 0x0  nop
    ctx->pc = 0x1531acu;
    // NOP
    // 0x1531b0: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x1531B0u;
    {
        const bool branch_taken_0x1531b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1531b0) {
            ctx->pc = 0x153208u;
            goto label_153208;
        }
    }
    ctx->pc = 0x1531B8u;
    // 0x1531b8: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1531b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1531bc: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1531bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1531c0: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1531c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1531c4: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x1531c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1531c8: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x1531c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1531cc: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x1531ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1531d0: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x1531d0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1531d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1531d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1531d8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1531d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1531dc: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x1531dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1531e0: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1531e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1531e4: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x1531e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1531e8: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x1531e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1531ec: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x1531ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1531f0: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x1531f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1531f4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1531f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1531f8: 0x0  nop
    ctx->pc = 0x1531f8u;
    // NOP
    // 0x1531fc: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x1531fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x153200: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x153200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x153204: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x153204u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_153208:
    // 0x153208: 0x3e00008  jr          $ra
    ctx->pc = 0x153208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153208u;
        // 0x15320c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153210u;
}
