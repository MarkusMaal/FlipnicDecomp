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

// Function: FUN_00153720
// Address: 0x153720 - 0x153858
void FUN_00153720_0x153720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00153720_0x153720");
#endif

    ctx->pc = 0x153720u;

    // 0x153720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x153720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x153724: 0x27a20000  addiu       $v0, $sp, 0x0
    ctx->pc = 0x153724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x153728: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x153728u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15372c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x15372cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153730: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x153730u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153734: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x153734u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153738: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x153738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15373c: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x15373cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x153740: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x153740u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x153744: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x153744u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153748: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x153748u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15374c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15374cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153750: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x153750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x153754: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x153754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x153758: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x153758u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15375c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x15375cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x153760: 0x4bc521aa  vmul.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x153760u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153764: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x153764u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153768: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x153768u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15376c: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x15376cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153774: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x153774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x153778: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15377c: 0x0  nop
    ctx->pc = 0x15377cu;
    // NOP
    // 0x153780: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x153780u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x153784: 0x4bc529aa  vmul.xyz    $vf6, $vf5, $vf5
    ctx->pc = 0x153784u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153788: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x153788u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15378c: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x15378cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153790: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x153790u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153794: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x153794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x153798: 0x4bc421aa  vmul.xyz    $vf6, $vf4, $vf4
    ctx->pc = 0x153798u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15379c: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x15379cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1537a0: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x1537a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1537a4: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x1537a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1537a8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1537a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1537ac: 0x460d6000  add.s       $f0, $f12, $f13
    ctx->pc = 0x1537acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x1537b0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1537b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1537b4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1537b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1537b8: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x1537b8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1537bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1537bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1537c0: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x1537c0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x1537c4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1537c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1537c8: 0x4604011d  msub.s      $f4, $f0, $f4
    ctx->pc = 0x1537c8u;
    ctx->f[4] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[4]));
    // 0x1537cc: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x1537ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1537d0: 0x0  nop
    ctx->pc = 0x1537d0u;
    // NOP
    // 0x1537d4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1537D4u;
    {
        const bool branch_taken_0x1537d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1537D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1537D4u;
        // 0x1537d8: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1537d4) {
            ctx->pc = 0x1537E8u;
            goto label_1537e8;
        }
    }
    ctx->pc = 0x1537DCu;
    // 0x1537dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1537dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1537e0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1537E0u;
    {
        const bool branch_taken_0x1537e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1537E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1537E0u;
        // 0x1537e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1537e0) {
            ctx->pc = 0x153850u;
            goto label_153850;
        }
    }
    ctx->pc = 0x1537E8u;
label_1537e8:
    // 0x1537e8: 0x0  nop
    ctx->pc = 0x1537e8u;
    // NOP
    // 0x1537ec: 0x0  nop
    ctx->pc = 0x1537ecu;
    // NOP
    // 0x1537f0: 0x0  nop
    ctx->pc = 0x1537f0u;
    // NOP
    // 0x1537f4: 0x46040104  c1          0x40104
    ctx->pc = 0x1537f4u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x1537f8: 0x46050802  mul.s       $f0, $f1, $f5
    ctx->pc = 0x1537f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1537fc: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1537fcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x153800: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x153800u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x153804: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x153804u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x153808: 0x0  nop
    ctx->pc = 0x153808u;
    // NOP
    // 0x15380c: 0x0  nop
    ctx->pc = 0x15380cu;
    // NOP
    // 0x153810: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x153810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153814: 0x0  nop
    ctx->pc = 0x153814u;
    // NOP
    // 0x153818: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x153818u;
    {
        const bool branch_taken_0x153818 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153818u;
        // 0x15381c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153818) {
            ctx->pc = 0x153848u;
            goto label_153848;
        }
    }
    ctx->pc = 0x153820u;
    // 0x153820: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x153820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x153824: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153828: 0x0  nop
    ctx->pc = 0x153828u;
    // NOP
    // 0x15382c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15382cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153830: 0x0  nop
    ctx->pc = 0x153830u;
    // NOP
    // 0x153834: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x153834u;
    {
        const bool branch_taken_0x153834 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153834) {
            ctx->pc = 0x153844u;
            goto label_153844;
        }
    }
    ctx->pc = 0x15383Cu;
    // 0x15383c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15383Cu;
    {
        const bool branch_taken_0x15383c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15383c) {
            ctx->pc = 0x15384Cu;
            goto label_15384c;
        }
    }
    ctx->pc = 0x153844u;
label_153844:
    // 0x153844: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x153844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_153848:
    // 0x153848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15384c:
    // 0x15384c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15384cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_153850:
    // 0x153850: 0x3e00008  jr          $ra
    ctx->pc = 0x153850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153858u;
}
