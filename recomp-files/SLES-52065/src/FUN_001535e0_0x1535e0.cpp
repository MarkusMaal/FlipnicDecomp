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

// Function: FUN_001535e0
// Address: 0x1535e0 - 0x153714
void FUN_001535e0_0x1535e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001535e0_0x1535e0");
#endif

    ctx->pc = 0x1535e0u;

    // 0x1535e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1535e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1535e4: 0x27a20000  addiu       $v0, $sp, 0x0
    ctx->pc = 0x1535e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x1535e8: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1535e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1535ec: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1535ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1535f0: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1535f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1535f4: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x1535f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1535f8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1535f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1535fc: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1535fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x153600: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x153600u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x153604: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x153604u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153608: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x153608u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15360c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x15360cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153610: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x153610u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x153614: 0x4bc521aa  vmul.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x153614u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153618: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x153618u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15361c: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x15361cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153620: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x153620u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153624: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153628: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x153628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x15362c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15362cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153630: 0x0  nop
    ctx->pc = 0x153630u;
    // NOP
    // 0x153634: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x153634u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x153638: 0x4bc529aa  vmul.xyz    $vf6, $vf5, $vf5
    ctx->pc = 0x153638u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15363c: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x15363cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153640: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x153640u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153644: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x153644u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153648: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x153648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x15364c: 0x4bc421aa  vmul.xyz    $vf6, $vf4, $vf4
    ctx->pc = 0x15364cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153650: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x153650u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153654: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x153654u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153658: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x153658u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15365c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x15365cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153660: 0x460d6000  add.s       $f0, $f12, $f13
    ctx->pc = 0x153660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x153664: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x153664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x153668: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x153668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x15366c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x15366cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x153670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153674: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x153674u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x153678: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x153678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x15367c: 0x4602015d  msub.s      $f5, $f0, $f2
    ctx->pc = 0x15367cu;
    ctx->f[5] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[2]));
    // 0x153680: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x153680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153684: 0x0  nop
    ctx->pc = 0x153684u;
    // NOP
    // 0x153688: 0x46022834  c.lt.s      $f5, $f2
    ctx->pc = 0x153688u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15368c: 0x0  nop
    ctx->pc = 0x15368cu;
    // NOP
    // 0x153690: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x153690u;
    {
        const bool branch_taken_0x153690 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153690u;
        // 0x153694: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153690) {
            ctx->pc = 0x1536A4u;
            goto label_1536a4;
        }
    }
    ctx->pc = 0x153698u;
    // 0x153698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15369c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x15369Cu;
    {
        const bool branch_taken_0x15369c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1536A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15369Cu;
        // 0x1536a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15369c) {
            ctx->pc = 0x15370Cu;
            goto label_15370c;
        }
    }
    ctx->pc = 0x1536A4u;
label_1536a4:
    // 0x1536a4: 0x0  nop
    ctx->pc = 0x1536a4u;
    // NOP
    // 0x1536a8: 0x0  nop
    ctx->pc = 0x1536a8u;
    // NOP
    // 0x1536ac: 0x0  nop
    ctx->pc = 0x1536acu;
    // NOP
    // 0x1536b0: 0x46050144  c1          0x50144
    ctx->pc = 0x1536b0u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x1536b4: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x1536b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1536b8: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1536b8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x1536bc: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x1536bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x1536c0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1536c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1536c4: 0x0  nop
    ctx->pc = 0x1536c4u;
    // NOP
    // 0x1536c8: 0x0  nop
    ctx->pc = 0x1536c8u;
    // NOP
    // 0x1536cc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1536ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1536d0: 0x0  nop
    ctx->pc = 0x1536d0u;
    // NOP
    // 0x1536d4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1536D4u;
    {
        const bool branch_taken_0x1536d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1536D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1536D4u;
        // 0x1536d8: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1536d4) {
            ctx->pc = 0x153704u;
            goto label_153704;
        }
    }
    ctx->pc = 0x1536DCu;
    // 0x1536dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1536dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1536e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1536e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1536e4: 0x0  nop
    ctx->pc = 0x1536e4u;
    // NOP
    // 0x1536e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1536e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1536ec: 0x0  nop
    ctx->pc = 0x1536ecu;
    // NOP
    // 0x1536f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1536F0u;
    {
        const bool branch_taken_0x1536f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1536f0) {
            ctx->pc = 0x153700u;
            goto label_153700;
        }
    }
    ctx->pc = 0x1536F8u;
    // 0x1536f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1536F8u;
    {
        const bool branch_taken_0x1536f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1536f8) {
            ctx->pc = 0x153708u;
            goto label_153708;
        }
    }
    ctx->pc = 0x153700u;
label_153700:
    // 0x153700: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x153700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_153704:
    // 0x153704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153708:
    // 0x153708: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x153708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_15370c:
    // 0x15370c: 0x3e00008  jr          $ra
    ctx->pc = 0x15370Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15370Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153714u;
}
