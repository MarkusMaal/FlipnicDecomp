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

// Function: FUN_00154580
// Address: 0x154580 - 0x15494c
void FUN_00154580_0x154580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00154580_0x154580");
#endif

    switch (ctx->pc) {
        case 0x1548c0u: goto label_1548c0;
        case 0x154930u: goto label_154930;
        default: break;
    }

    ctx->pc = 0x154580u;

    // 0x154580: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x154580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x154584: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x154584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x154588: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x154588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x15458c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15458cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x154590: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x154590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x154594: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x154594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154598: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x154598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15459c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x15459cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1545a0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1545a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1545a4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1545a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1545a8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1545a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1545ac: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x1545acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1545b0: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1545b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1545b4: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x1545b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1545b8: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x1545b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1545bc: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1545bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1545c0: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x1545c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1545c4: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1545c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1545c8: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x1545c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1545cc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1545ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1545d0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1545d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1545d4: 0x4bc521aa  vmul.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x1545d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1545d8: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x1545d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1545dc: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x1545dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1545e0: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x1545e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1545e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1545e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1545e8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1545e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1545ec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1545ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1545f0: 0x0  nop
    ctx->pc = 0x1545f0u;
    // NOP
    // 0x1545f4: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x1545f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1545f8: 0x4bc529aa  vmul.xyz    $vf6, $vf5, $vf5
    ctx->pc = 0x1545f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1545fc: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x1545fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154600: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x154600u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154604: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x154604u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154608: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x154608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x15460c: 0x4bc421aa  vmul.xyz    $vf6, $vf4, $vf4
    ctx->pc = 0x15460cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154610: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x154610u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154614: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x154614u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154618: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x154618u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15461c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x15461cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x154620: 0x460d6040  add.s       $f1, $f12, $f13
    ctx->pc = 0x154620u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x154624: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x154624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x154628: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x154628u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x15462c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15462cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154630: 0x0  nop
    ctx->pc = 0x154630u;
    // NOP
    // 0x154634: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x154634u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x154638: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x154638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x15463c: 0x4604201a  mula.s      $f4, $f4
    ctx->pc = 0x15463cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x154640: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x154640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x154644: 0x4601019d  msub.s      $f6, $f0, $f1
    ctx->pc = 0x154644u;
    ctx->f[6] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x154648: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x154648u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15464c: 0x0  nop
    ctx->pc = 0x15464cu;
    // NOP
    // 0x154650: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x154650u;
    {
        const bool branch_taken_0x154650 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x154654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154650u;
        // 0x154654: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154650) {
            ctx->pc = 0x154664u;
            goto label_154664;
        }
    }
    ctx->pc = 0x154658u;
    // 0x154658: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x154658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x15465c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x15465Cu;
    {
        const bool branch_taken_0x15465c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15465c) {
            ctx->pc = 0x1546C8u;
            goto label_1546c8;
        }
    }
    ctx->pc = 0x154664u;
label_154664:
    // 0x154664: 0x0  nop
    ctx->pc = 0x154664u;
    // NOP
    // 0x154668: 0x0  nop
    ctx->pc = 0x154668u;
    // NOP
    // 0x15466c: 0x0  nop
    ctx->pc = 0x15466cu;
    // NOP
    // 0x154670: 0x46060184  c1          0x60184
    ctx->pc = 0x154670u;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
    // 0x154674: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x154674u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x154678: 0x46051802  mul.s       $f0, $f3, $f5
    ctx->pc = 0x154678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x15467c: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x15467cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x154680: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x154680u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x154684: 0x0  nop
    ctx->pc = 0x154684u;
    // NOP
    // 0x154688: 0x0  nop
    ctx->pc = 0x154688u;
    // NOP
    // 0x15468c: 0x46141036  c.le.s      $f2, $f20
    ctx->pc = 0x15468cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154690: 0x0  nop
    ctx->pc = 0x154690u;
    // NOP
    // 0x154694: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x154694u;
    {
        const bool branch_taken_0x154694 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x154698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154694u;
        // 0x154698: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154694) {
            ctx->pc = 0x1546C4u;
            goto label_1546c4;
        }
    }
    ctx->pc = 0x15469Cu;
    // 0x15469c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15469cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1546a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1546a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1546a4: 0x0  nop
    ctx->pc = 0x1546a4u;
    // NOP
    // 0x1546a8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1546a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1546ac: 0x0  nop
    ctx->pc = 0x1546acu;
    // NOP
    // 0x1546b0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1546B0u;
    {
        const bool branch_taken_0x1546b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1546b0) {
            ctx->pc = 0x1546C0u;
            goto label_1546c0;
        }
    }
    ctx->pc = 0x1546B8u;
    // 0x1546b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1546B8u;
    {
        const bool branch_taken_0x1546b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1546b8) {
            ctx->pc = 0x1546C8u;
            goto label_1546c8;
        }
    }
    ctx->pc = 0x1546C0u;
label_1546c0:
    // 0x1546c0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1546c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1546c4:
    // 0x1546c4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1546c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1546c8:
    // 0x1546c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1546c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1546cc: 0x0  nop
    ctx->pc = 0x1546ccu;
    // NOP
    // 0x1546d0: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1546d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1546d4: 0x0  nop
    ctx->pc = 0x1546d4u;
    // NOP
    // 0x1546d8: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x1546D8u;
    {
        const bool branch_taken_0x1546d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1546DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546D8u;
        // 0x1546dc: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546d8) {
            ctx->pc = 0x1547D0u;
            goto label_1547d0;
        }
    }
    ctx->pc = 0x1546E0u;
    // 0x1546e0: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x1546e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1546e4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1546e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1546e8: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x1546e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1546ec: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1546ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1546f0: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x1546f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1546f4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1546f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1546f8: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1546f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1546fc: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1546fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154700: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x154700u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154704: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x154704u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x154708: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x154708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15470c: 0x460d6000  add.s       $f0, $f12, $f13
    ctx->pc = 0x15470cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x154710: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x154710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x154714: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x154714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154718: 0x0  nop
    ctx->pc = 0x154718u;
    // NOP
    // 0x15471c: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x15471Cu;
    {
        const bool branch_taken_0x15471c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15471c) {
            ctx->pc = 0x1547C0u;
            goto label_1547c0;
        }
    }
    ctx->pc = 0x154724u;
    // 0x154724: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x154724u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154728: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x154728u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15472c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x15472cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154730: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x154730u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x154734: 0x4a0003bf  vwaitq
    ctx->pc = 0x154734u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x154738: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x154738u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15473c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15473cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x154740: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x154740u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x154744: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x154744u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154748: 0x4a0003bf  vwaitq
    ctx->pc = 0x154748u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15474c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x15474cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154750: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x154750u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154758: 0x0  nop
    ctx->pc = 0x154758u;
    // NOP
    // 0x15475c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15475cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154760: 0x0  nop
    ctx->pc = 0x154760u;
    // NOP
    // 0x154764: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x154764u;
    {
        const bool branch_taken_0x154764 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x154768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154764u;
        // 0x154768: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154764) {
            ctx->pc = 0x154770u;
            goto label_154770;
        }
    }
    ctx->pc = 0x15476Cu;
    // 0x15476c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x15476cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_154770:
    // 0x154770: 0x0  nop
    ctx->pc = 0x154770u;
    // NOP
    // 0x154774: 0x0  nop
    ctx->pc = 0x154774u;
    // NOP
    // 0x154778: 0x0  nop
    ctx->pc = 0x154778u;
    // NOP
    // 0x15477c: 0x46020044  c1          0x20044
    ctx->pc = 0x15477cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x154780: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x154780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x154784: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x154784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x154788: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x154788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x15478c: 0x460d6000  add.s       $f0, $f12, $f13
    ctx->pc = 0x15478cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x154790: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x154790u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x154794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154798: 0x0  nop
    ctx->pc = 0x154798u;
    // NOP
    // 0x15479c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15479cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1547a0: 0xda270000  lqc2        $vf7, 0x0($s1)
    ctx->pc = 0x1547a0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1547a4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1547a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1547a8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1547a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1547ac: 0x0  nop
    ctx->pc = 0x1547acu;
    // NOP
    // 0x1547b0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1547b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1547b4: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x1547b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1547b8: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x1547b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1547bc: 0xfa250000  sqc2        $vf5, 0x0($s1)
    ctx->pc = 0x1547bcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[5]));
label_1547c0:
    // 0x1547c0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1547c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1547c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1547c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1547c8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1547C8u;
    {
        const bool branch_taken_0x1547c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1547CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547C8u;
        // 0x1547cc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1547c8) {
            ctx->pc = 0x154938u;
            goto label_154938;
        }
    }
    ctx->pc = 0x1547D0u;
label_1547d0:
    // 0x1547d0: 0xd8c70000  lqc2        $vf7, 0x0($a2)
    ctx->pc = 0x1547d0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1547d4: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1547d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1547d8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1547d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1547dc: 0x0  nop
    ctx->pc = 0x1547dcu;
    // NOP
    // 0x1547e0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1547e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1547e4: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x1547e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1547e8: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x1547e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1547ec: 0xf8450000  sqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1547ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1547f0: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1547f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1547f4: 0xda270000  lqc2        $vf7, 0x0($s1)
    ctx->pc = 0x1547f4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1547f8: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1547f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1547fc: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1547fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x154800: 0x0  nop
    ctx->pc = 0x154800u;
    // NOP
    // 0x154804: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x154804u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x154808: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x154808u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15480c: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x15480cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154810: 0xf8650000  sqc2        $vf5, 0x0($v1)
    ctx->pc = 0x154810u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x154814: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x154814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x154818: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x154818u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15481c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x15481cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154820: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x154820u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154824: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x154824u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154828: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x154828u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15482c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x15482cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154830: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x154830u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154834: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x154834u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154838: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x154838u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x15483c: 0x4a0003bf  vwaitq
    ctx->pc = 0x15483cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x154840: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x154840u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154844: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x154844u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x154848: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x154848u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15484c: 0x4a0003bf  vwaitq
    ctx->pc = 0x15484cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x154850: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x154850u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154854: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x154854u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154858: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x154858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15485c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x15485cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154860: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x154860u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x154864: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x154864u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x154868: 0xc7a50040  lwc1        $f5, 0x40($sp)
    ctx->pc = 0x154868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15486c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x15486cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x154870: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x154870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x154874: 0xc7a60068  lwc1        $f6, 0x68($sp)
    ctx->pc = 0x154874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x154878: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x154878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15487c: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x15487cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x154880: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x154880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x154884: 0x46042800  add.s       $f0, $f5, $f4
    ctx->pc = 0x154884u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x154888: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x154888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x15488c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x15488cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x154890: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x154890u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x154894: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x154894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x154898: 0x46040801  sub.s       $f0, $f1, $f4
    ctx->pc = 0x154898u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x15489c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x15489cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1548a0: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x1548a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1548a4: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1548a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1548a8: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x1548a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1548ac: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x1548acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1548b0: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x1548b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x1548b4: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1548b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1548b8: 0xc0552e8  jal         func_154BA0
    ctx->pc = 0x1548B8u;
    SET_GPR_U32(ctx, 31, 0x1548C0u);
    ctx->pc = 0x1548BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1548B8u;
    // 0x1548bc: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x154BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154BA0u, 0x1548B8u, 0x1548C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1548C0u;
label_1548c0:
    // 0x1548c0: 0xc7a50050  lwc1        $f5, 0x50($sp)
    ctx->pc = 0x1548c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1548c4: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1548c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1548c8: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x1548c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1548cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1548ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1548d0: 0xc7a60068  lwc1        $f6, 0x68($sp)
    ctx->pc = 0x1548d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1548d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1548d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1548d8: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1548d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1548dc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1548dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1548e0: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x1548e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1548e4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1548e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1548e8: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x1548e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1548ec: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x1548ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1548f0: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x1548f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1548f4: 0x46042800  add.s       $f0, $f5, $f4
    ctx->pc = 0x1548f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x1548f8: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x1548f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x1548fc: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1548fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x154900: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x154900u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x154904: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x154904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x154908: 0x46040801  sub.s       $f0, $f1, $f4
    ctx->pc = 0x154908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x15490c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x15490cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x154910: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x154910u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x154914: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x154914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x154918: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x154918u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x15491c: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x15491cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x154920: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x154920u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x154924: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x154924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x154928: 0xc0552e8  jal         func_154BA0
    ctx->pc = 0x154928u;
    SET_GPR_U32(ctx, 31, 0x154930u);
    ctx->pc = 0x15492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154928u;
    // 0x15492c: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x154BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154BA0u, 0x154928u, 0x154930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154930u;
label_154930:
    // 0x154930: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x154930u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x154934: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x154934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_154938:
    // 0x154938: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x154938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15493c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15493cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154940: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x154940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154944: 0x3e00008  jr          $ra
    ctx->pc = 0x154944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154944u;
        // 0x154948: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15494Cu;
}
