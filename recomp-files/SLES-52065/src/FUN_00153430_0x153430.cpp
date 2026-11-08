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

// Function: FUN_00153430
// Address: 0x153430 - 0x1535d8
void FUN_00153430_0x153430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00153430_0x153430");
#endif

    ctx->pc = 0x153430u;

    // 0x153430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x153430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x153434: 0x27a20000  addiu       $v0, $sp, 0x0
    ctx->pc = 0x153434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x153438: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x153438u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15343c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x15343cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153440: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x153440u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153444: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x153444u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153448: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x153448u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15344c: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x15344cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x153450: 0x4bc521aa  vmul.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x153450u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153454: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x153454u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153458: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x153458u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15345c: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x15345cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153464: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x153464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x153468: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15346c: 0x0  nop
    ctx->pc = 0x15346cu;
    // NOP
    // 0x153470: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x153470u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x153474: 0x4bc529aa  vmul.xyz    $vf6, $vf5, $vf5
    ctx->pc = 0x153474u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153478: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x153478u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15347c: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x15347cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153480: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x153480u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153484: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x153484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x153488: 0x4bc421aa  vmul.xyz    $vf6, $vf4, $vf4
    ctx->pc = 0x153488u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15348c: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x15348cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153490: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x153490u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153494: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x153494u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153498: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x153498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15349c: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x15349cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1534a0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1534a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1534a4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1534a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1534a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1534a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1534ac: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x1534acu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x1534b0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1534b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1534b4: 0x4602015d  msub.s      $f5, $f0, $f2
    ctx->pc = 0x1534b4u;
    ctx->f[5] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[2]));
    // 0x1534b8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1534b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1534bc: 0x0  nop
    ctx->pc = 0x1534bcu;
    // NOP
    // 0x1534c0: 0x46022834  c.lt.s      $f5, $f2
    ctx->pc = 0x1534c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1534c4: 0x0  nop
    ctx->pc = 0x1534c4u;
    // NOP
    // 0x1534c8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1534C8u;
    {
        const bool branch_taken_0x1534c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1534CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534C8u;
        // 0x1534cc: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1534c8) {
            ctx->pc = 0x1534DCu;
            goto label_1534dc;
        }
    }
    ctx->pc = 0x1534D0u;
    // 0x1534d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1534d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1534d4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1534D4u;
    {
        const bool branch_taken_0x1534d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1534D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534D4u;
        // 0x1534d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1534d4) {
            ctx->pc = 0x1535D0u;
            goto label_1535d0;
        }
    }
    ctx->pc = 0x1534DCu;
label_1534dc:
    // 0x1534dc: 0x0  nop
    ctx->pc = 0x1534dcu;
    // NOP
    // 0x1534e0: 0x0  nop
    ctx->pc = 0x1534e0u;
    // NOP
    // 0x1534e4: 0x0  nop
    ctx->pc = 0x1534e4u;
    // NOP
    // 0x1534e8: 0x46050144  c1          0x50144
    ctx->pc = 0x1534e8u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x1534ec: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x1534ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1534f0: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1534f0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x1534f4: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x1534f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x1534f8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1534f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1534fc: 0x0  nop
    ctx->pc = 0x1534fcu;
    // NOP
    // 0x153500: 0x0  nop
    ctx->pc = 0x153500u;
    // NOP
    // 0x153504: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x153504u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153508: 0x0  nop
    ctx->pc = 0x153508u;
    // NOP
    // 0x15350c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x15350Cu;
    {
        const bool branch_taken_0x15350c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15350Cu;
        // 0x153510: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15350c) {
            ctx->pc = 0x15353Cu;
            goto label_15353c;
        }
    }
    ctx->pc = 0x153514u;
    // 0x153514: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x153514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x153518: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15351c: 0x0  nop
    ctx->pc = 0x15351cu;
    // NOP
    // 0x153520: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x153520u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153524: 0x0  nop
    ctx->pc = 0x153524u;
    // NOP
    // 0x153528: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x153528u;
    {
        const bool branch_taken_0x153528 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153528) {
            ctx->pc = 0x153538u;
            goto label_153538;
        }
    }
    ctx->pc = 0x153530u;
    // 0x153530: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x153530u;
    {
        const bool branch_taken_0x153530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153530) {
            ctx->pc = 0x1535CCu;
            goto label_1535cc;
        }
    }
    ctx->pc = 0x153538u;
label_153538:
    // 0x153538: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x153538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_15353c:
    // 0x15353c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x15353cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153540: 0x0  nop
    ctx->pc = 0x153540u;
    // NOP
    // 0x153544: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x153544u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x153548: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x153548u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x15354c: 0x460508c0  add.s       $f3, $f1, $f5
    ctx->pc = 0x15354cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x153550: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x153550u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x153554: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x153554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153558: 0x0  nop
    ctx->pc = 0x153558u;
    // NOP
    // 0x15355c: 0x0  nop
    ctx->pc = 0x15355cu;
    // NOP
    // 0x153560: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x153560u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153564: 0x0  nop
    ctx->pc = 0x153564u;
    // NOP
    // 0x153568: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x153568u;
    {
        const bool branch_taken_0x153568 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153568u;
        // 0x15356c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153568) {
            ctx->pc = 0x153590u;
            goto label_153590;
        }
    }
    ctx->pc = 0x153570u;
    // 0x153570: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153574: 0x0  nop
    ctx->pc = 0x153574u;
    // NOP
    // 0x153578: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x153578u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15357c: 0x0  nop
    ctx->pc = 0x15357cu;
    // NOP
    // 0x153580: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x153580u;
    {
        const bool branch_taken_0x153580 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153580) {
            ctx->pc = 0x153590u;
            goto label_153590;
        }
    }
    ctx->pc = 0x153588u;
    // 0x153588: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x153588u;
    {
        const bool branch_taken_0x153588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153588u;
        // 0x15358c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153588) {
            ctx->pc = 0x1535CCu;
            goto label_1535cc;
        }
    }
    ctx->pc = 0x153590u;
label_153590:
    // 0x153590: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x153590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153594: 0x0  nop
    ctx->pc = 0x153594u;
    // NOP
    // 0x153598: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x153598u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15359c: 0x0  nop
    ctx->pc = 0x15359cu;
    // NOP
    // 0x1535a0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1535A0u;
    {
        const bool branch_taken_0x1535a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1535A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535A0u;
        // 0x1535a4: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535a0) {
            ctx->pc = 0x1535C8u;
            goto label_1535c8;
        }
    }
    ctx->pc = 0x1535A8u;
    // 0x1535a8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1535a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1535ac: 0x0  nop
    ctx->pc = 0x1535acu;
    // NOP
    // 0x1535b0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1535B0u;
    {
        const bool branch_taken_0x1535b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1535B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535B0u;
        // 0x1535b4: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535b0) {
            ctx->pc = 0x1535C4u;
            goto label_1535c4;
        }
    }
    ctx->pc = 0x1535B8u;
    // 0x1535b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1535b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1535bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1535BCu;
    {
        const bool branch_taken_0x1535bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1535bc) {
            ctx->pc = 0x1535CCu;
            goto label_1535cc;
        }
    }
    ctx->pc = 0x1535C4u;
label_1535c4:
    // 0x1535c4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1535c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1535c8:
    // 0x1535c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1535c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1535cc:
    // 0x1535cc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1535ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1535d0:
    // 0x1535d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1535D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1535D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1535D8u;
}
