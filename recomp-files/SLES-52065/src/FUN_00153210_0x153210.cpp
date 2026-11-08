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

// Function: FUN_00153210
// Address: 0x153210 - 0x1533b4
void FUN_00153210_0x153210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00153210_0x153210");
#endif

    ctx->pc = 0x153210u;

    // 0x153210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x153210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x153214: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x153214u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153218: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x153218u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15321c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x15321cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153220: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x153220u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153224: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x153224u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153228: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x153228u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15322c: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x15322cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153230: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x153230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x153234: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x153234u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x153238: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x153238u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15323c: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x15323cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153240: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x153240u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153244: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x153244u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153248: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x153248u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15324c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15324cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153250: 0x0  nop
    ctx->pc = 0x153250u;
    // NOP
    // 0x153254: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x153254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153258: 0x0  nop
    ctx->pc = 0x153258u;
    // NOP
    // 0x15325c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15325Cu;
    {
        const bool branch_taken_0x15325c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15325c) {
            ctx->pc = 0x15326Cu;
            goto label_15326c;
        }
    }
    ctx->pc = 0x153264u;
    // 0x153264: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x153264u;
    {
        const bool branch_taken_0x153264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153264) {
            ctx->pc = 0x153270u;
            goto label_153270;
        }
    }
    ctx->pc = 0x15326Cu;
label_15326c:
    // 0x15326c: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x15326cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_153270:
    // 0x153270: 0x460c1836  c.le.s      $f3, $f12
    ctx->pc = 0x153270u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153274: 0x0  nop
    ctx->pc = 0x153274u;
    // NOP
    // 0x153278: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x153278u;
    {
        const bool branch_taken_0x153278 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153278u;
        // 0x15327c: 0x27a20000  addiu       $v0, $sp, 0x0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153278) {
            ctx->pc = 0x153288u;
            goto label_153288;
        }
    }
    ctx->pc = 0x153280u;
    // 0x153280: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x153280u;
    {
        const bool branch_taken_0x153280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153280u;
        // 0x153284: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153280) {
            ctx->pc = 0x1533ACu;
            goto label_1533ac;
        }
    }
    ctx->pc = 0x153288u;
label_153288:
    // 0x153288: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x153288u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15328c: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x15328cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x153290: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x153290u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153294: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x153294u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153298: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x153298u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15329c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x15329cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1532a0: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x1532a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1532a4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1532a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1532a8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1532a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1532ac: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1532acu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1532b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1532b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1532b4: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x1532b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1532b8: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x1532b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1532bc: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1532bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1532c0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1532c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1532c4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1532c4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1532c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1532c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1532cc: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1532ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1532d0: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1532d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1532d4: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1532d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1532d8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1532d8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1532dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1532dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1532e0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1532e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1532e4: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1532e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x1532e8: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1532e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1532ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1532ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1532f0: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x1532f0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1532f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1532f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1532f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1532f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1532fc: 0x0  nop
    ctx->pc = 0x1532fcu;
    // NOP
    // 0x153300: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x153300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153304: 0x0  nop
    ctx->pc = 0x153304u;
    // NOP
    // 0x153308: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x153308u;
    {
        const bool branch_taken_0x153308 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x153308) {
            ctx->pc = 0x153374u;
            goto label_153374;
        }
    }
    ctx->pc = 0x153310u;
    // 0x153310: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x153310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153314: 0x0  nop
    ctx->pc = 0x153314u;
    // NOP
    // 0x153318: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x153318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15331c: 0x0  nop
    ctx->pc = 0x15331cu;
    // NOP
    // 0x153320: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x153320u;
    {
        const bool branch_taken_0x153320 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x153320) {
            ctx->pc = 0x153374u;
            goto label_153374;
        }
    }
    ctx->pc = 0x153328u;
    // 0x153328: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x153328u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15332c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x15332cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153330: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x153330u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153334: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x153334u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153338: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x153338u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15333c: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x15333cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153340: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x153340u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153344: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153348: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x153348u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15334c: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x15334cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x153350: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x153350u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153354: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x153354u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153358: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x153358u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15335c: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x15335cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153360: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x153360u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153364: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x153364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x153368: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x153368u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x15336c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x15336cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x153370: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x153370u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_153374:
    // 0x153374: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x153374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153378: 0x0  nop
    ctx->pc = 0x153378u;
    // NOP
    // 0x15337c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15337Cu;
    {
        const bool branch_taken_0x15337c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15337c) {
            ctx->pc = 0x15338Cu;
            goto label_15338c;
        }
    }
    ctx->pc = 0x153384u;
    // 0x153384: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x153384u;
    {
        const bool branch_taken_0x153384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153384u;
        // 0x153388: 0x460d6000  add.s       $f0, $f12, $f13 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153384) {
            ctx->pc = 0x153394u;
            goto label_153394;
        }
    }
    ctx->pc = 0x15338Cu;
label_15338c:
    // 0x15338c: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x15338cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x153390: 0x460d6000  add.s       $f0, $f12, $f13
    ctx->pc = 0x153390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
label_153394:
    // 0x153394: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x153394u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x153398: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x153398u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15339c: 0x0  nop
    ctx->pc = 0x15339cu;
    // NOP
    // 0x1533a0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1533A0u;
    {
        const bool branch_taken_0x1533a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1533A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1533A0u;
        // 0x1533a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1533a0) {
            ctx->pc = 0x1533ACu;
            goto label_1533ac;
        }
    }
    ctx->pc = 0x1533A8u;
    // 0x1533a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1533a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1533ac:
    // 0x1533ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1533ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1533B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1533ACu;
        // 0x1533b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1533ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1533B4u;
}
