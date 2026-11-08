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

// Function: FUN_00171730
// Address: 0x171730 - 0x17187c
void FUN_00171730_0x171730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00171730_0x171730");
#endif

    ctx->pc = 0x171730u;

    // 0x171730: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x171730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x171734: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x171734u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x171738: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x171738u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17173c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x17173cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x171740: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x171740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x171744: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x171744u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x171748: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x171748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x17174c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x17174cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x171750: 0x4ae42158  vmulx.yzw   $vf5, $vf4, $vf4x
    ctx->pc = 0x171750u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171754: 0x4a642199  vmuly.zw    $vf6, $vf4, $vf4y
    ctx->pc = 0x171754u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x171758: 0x4a2421da  vmulz.w     $vf7, $vf4, $vf4z
    ctx->pc = 0x171758u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x17175c: 0x4be4222a  vmul.xyzw   $vf8, $vf4, $vf4
    ctx->pc = 0x17175cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x171760: 0xf8650000  sqc2        $vf5, 0x0($v1)
    ctx->pc = 0x171760u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x171764: 0xf8e60000  sqc2        $vf6, 0x0($a3)
    ctx->pc = 0x171764u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x171768: 0xf9070000  sqc2        $vf7, 0x0($t0)
    ctx->pc = 0x171768u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x17176c: 0xf9280000  sqc2        $vf8, 0x0($t1)
    ctx->pc = 0x17176cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x171770: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x171770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x171774: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x171774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x171778: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x171778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17177c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x17177cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171780: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x171780u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x171784: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x171784u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x171788: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x171788u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x17178c: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x17178cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x171790: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x171790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x171794: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x171794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171798: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x171798u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x17179c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x17179cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1717a0: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1717a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1717a4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1717a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1717a8: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1717a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1717ac: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1717acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1717b0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1717b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1717b4: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x1717b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1717b8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1717b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1717bc: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1717bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1717c0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1717c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1717c4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1717c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1717c8: 0xe4c10010  swc1        $f1, 0x10($a2)
    ctx->pc = 0x1717c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x1717cc: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x1717ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1717d0: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x1717d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1717d4: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1717d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1717d8: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1717d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1717dc: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x1717dcu;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x1717e0: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x1717e0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1717e4: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1717e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1717e8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1717e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1717ec: 0xe4c10014  swc1        $f1, 0x14($a2)
    ctx->pc = 0x1717ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x1717f0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1717f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1717f4: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x1717f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1717f8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1717f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1717fc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1717fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x171800: 0xe4c10018  swc1        $f1, 0x18($a2)
    ctx->pc = 0x171800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x171804: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x171804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x171808: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x171808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17180c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x17180cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x171810: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x171810u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x171814: 0xe4c10020  swc1        $f1, 0x20($a2)
    ctx->pc = 0x171814u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x171818: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x171818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17181c: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x17181cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171820: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x171820u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x171824: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x171824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x171828: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x171828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x17182c: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x17182cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x171830: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x171830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x171834: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x171834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171838: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x171838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17183c: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x17183cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x171840: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x171840u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x171844: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x171844u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x171848: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x171848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17184c: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x17184cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x171850: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x171850u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
    // 0x171854: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x171854u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x171858: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x171858u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x17185c: 0x78c80000  lq          $t0, 0x0($a2)
    ctx->pc = 0x17185cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x171860: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x171860u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x171864: 0x78c80010  lq          $t0, 0x10($a2)
    ctx->pc = 0x171864u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x171868: 0x7c880010  sq          $t0, 0x10($a0)
    ctx->pc = 0x171868u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 8));
    // 0x17186c: 0x78c80020  lq          $t0, 0x20($a2)
    ctx->pc = 0x17186cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x171870: 0x7c880020  sq          $t0, 0x20($a0)
    ctx->pc = 0x171870u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 8));
    // 0x171874: 0x3e00008  jr          $ra
    ctx->pc = 0x171874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171874u;
        // 0x171878: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17187Cu;
}
