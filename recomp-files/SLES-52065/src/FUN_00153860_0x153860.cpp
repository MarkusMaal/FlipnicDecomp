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

// Function: FUN_00153860
// Address: 0x153860 - 0x1539dc
void FUN_00153860_0x153860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00153860_0x153860");
#endif

    ctx->pc = 0x153860u;

    // 0x153860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x153860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x153864: 0x27a20000  addiu       $v0, $sp, 0x0
    ctx->pc = 0x153864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x153868: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x153868u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15386c: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x15386cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x153870: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x153870u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153874: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x153874u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153878: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x153878u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15387c: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x15387cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x153880: 0x4bc521aa  vmul.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x153880u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153884: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x153884u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153888: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x153888u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15388c: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x15388cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153894: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x153894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x153898: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x153898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x15389c: 0x0  nop
    ctx->pc = 0x15389cu;
    // NOP
    // 0x1538a0: 0x46002142  mul.s       $f5, $f4, $f0
    ctx->pc = 0x1538a0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1538a4: 0x4bc529aa  vmul.xyz    $vf6, $vf5, $vf5
    ctx->pc = 0x1538a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1538a8: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x1538a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1538ac: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x1538acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1538b0: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x1538b0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1538b4: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x1538b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1538b8: 0x4bc421aa  vmul.xyz    $vf6, $vf4, $vf4
    ctx->pc = 0x1538b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1538bc: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x1538bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1538c0: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x1538c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1538c4: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x1538c4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1538c8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1538c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1538cc: 0x460d60c0  add.s       $f3, $f12, $f13
    ctx->pc = 0x1538ccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x1538d0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1538d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1538d4: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x1538d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1538d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1538d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1538dc: 0x0  nop
    ctx->pc = 0x1538dcu;
    // NOP
    // 0x1538e0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1538e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1538e4: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x1538e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x1538e8: 0x4605281a  mula.s      $f5, $f5
    ctx->pc = 0x1538e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x1538ec: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1538ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1538f0: 0x460101dd  msub.s      $f7, $f0, $f1
    ctx->pc = 0x1538f0u;
    ctx->f[7] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x1538f4: 0x46023834  c.lt.s      $f7, $f2
    ctx->pc = 0x1538f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1538f8: 0x0  nop
    ctx->pc = 0x1538f8u;
    // NOP
    // 0x1538fc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1538FCu;
    {
        const bool branch_taken_0x1538fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1538FCu;
        // 0x153900: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1538fc) {
            ctx->pc = 0x153910u;
            goto label_153910;
        }
    }
    ctx->pc = 0x153904u;
    // 0x153904: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153908: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x153908u;
    {
        const bool branch_taken_0x153908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153908u;
        // 0x15390c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153908) {
            ctx->pc = 0x1539D4u;
            goto label_1539d4;
        }
    }
    ctx->pc = 0x153910u;
label_153910:
    // 0x153910: 0x0  nop
    ctx->pc = 0x153910u;
    // NOP
    // 0x153914: 0x0  nop
    ctx->pc = 0x153914u;
    // NOP
    // 0x153918: 0x0  nop
    ctx->pc = 0x153918u;
    // NOP
    // 0x15391c: 0x460701c4  c1          0x701C4
    ctx->pc = 0x15391cu;
    ctx->f[7] = FPU_SQRT_S(ctx->f[0]);
    // 0x153920: 0x0  nop
    ctx->pc = 0x153920u;
    // NOP
    // 0x153924: 0x0  nop
    ctx->pc = 0x153924u;
    // NOP
    // 0x153928: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x153928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15392c: 0x0  nop
    ctx->pc = 0x15392cu;
    // NOP
    // 0x153930: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x153930u;
    {
        const bool branch_taken_0x153930 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153930u;
        // 0x153934: 0x46002847  neg.s       $f1, $f5 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153930) {
            ctx->pc = 0x153984u;
            goto label_153984;
        }
    }
    ctx->pc = 0x153938u;
    // 0x153938: 0x46002847  neg.s       $f1, $f5
    ctx->pc = 0x153938u;
    ctx->f[1] = FPU_NEG_S(ctx->f[5]);
    // 0x15393c: 0x46062002  mul.s       $f0, $f4, $f6
    ctx->pc = 0x15393cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x153940: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x153940u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x153944: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x153944u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x153948: 0x0  nop
    ctx->pc = 0x153948u;
    // NOP
    // 0x15394c: 0x0  nop
    ctx->pc = 0x15394cu;
    // NOP
    // 0x153950: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x153950u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153954: 0x0  nop
    ctx->pc = 0x153954u;
    // NOP
    // 0x153958: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x153958u;
    {
        const bool branch_taken_0x153958 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153958u;
        // 0x15395c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153958) {
            ctx->pc = 0x1539CCu;
            goto label_1539cc;
        }
    }
    ctx->pc = 0x153960u;
    // 0x153960: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x153960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x153964: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153968: 0x0  nop
    ctx->pc = 0x153968u;
    // NOP
    // 0x15396c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15396cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153970: 0x0  nop
    ctx->pc = 0x153970u;
    // NOP
    // 0x153974: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x153974u;
    {
        const bool branch_taken_0x153974 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153974) {
            ctx->pc = 0x1539C8u;
            goto label_1539c8;
        }
    }
    ctx->pc = 0x15397Cu;
    // 0x15397c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15397Cu;
    {
        const bool branch_taken_0x15397c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15397c) {
            ctx->pc = 0x1539D0u;
            goto label_1539d0;
        }
    }
    ctx->pc = 0x153984u;
label_153984:
    // 0x153984: 0x46062002  mul.s       $f0, $f4, $f6
    ctx->pc = 0x153984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x153988: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x153988u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x15398c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x15398cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x153990: 0x0  nop
    ctx->pc = 0x153990u;
    // NOP
    // 0x153994: 0x0  nop
    ctx->pc = 0x153994u;
    // NOP
    // 0x153998: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x153998u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15399c: 0x0  nop
    ctx->pc = 0x15399cu;
    // NOP
    // 0x1539a0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1539A0u;
    {
        const bool branch_taken_0x1539a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1539A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1539A0u;
        // 0x1539a4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1539a0) {
            ctx->pc = 0x1539C8u;
            goto label_1539c8;
        }
    }
    ctx->pc = 0x1539A8u;
    // 0x1539a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1539a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1539ac: 0x0  nop
    ctx->pc = 0x1539acu;
    // NOP
    // 0x1539b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1539b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1539b4: 0x0  nop
    ctx->pc = 0x1539b4u;
    // NOP
    // 0x1539b8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1539B8u;
    {
        const bool branch_taken_0x1539b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1539b8) {
            ctx->pc = 0x1539C8u;
            goto label_1539c8;
        }
    }
    ctx->pc = 0x1539C0u;
    // 0x1539c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1539C0u;
    {
        const bool branch_taken_0x1539c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1539c0) {
            ctx->pc = 0x1539D0u;
            goto label_1539d0;
        }
    }
    ctx->pc = 0x1539C8u;
label_1539c8:
    // 0x1539c8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1539c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1539cc:
    // 0x1539cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1539ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1539d0:
    // 0x1539d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1539d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1539d4:
    // 0x1539d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1539D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1539D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1539DCu;
}
