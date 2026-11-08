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

// Function: entry_0015a838
// Address: 0x15a838 - 0x15a908
void entry_0015a838_0x15a838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a838_0x15a838");
#endif

    ctx->pc = 0x15a838u;

    // 0x15a838: 0xa62001e8  sh          $zero, 0x1E8($s1)
    ctx->pc = 0x15a838u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 488), (uint16_t)GPR_U32(ctx, 0));
    // 0x15a83c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15a840: 0xc62201c0  lwc1        $f2, 0x1C0($s1)
    ctx->pc = 0x15a840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a844: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x15a844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15a848: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x15a848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a84c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x15a84cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x15a850: 0x46001881  sub.s       $f2, $f3, $f0
    ctx->pc = 0x15a850u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x15a854: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x15a854u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x15a858: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x15a858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x15a85c: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x15a85cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a860: 0x0  nop
    ctx->pc = 0x15a860u;
    // NOP
    // 0x15a864: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x15A864u;
    {
        const bool branch_taken_0x15a864 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A864u;
        // 0x15a868: 0xe62002e8  swc1        $f0, 0x2E8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a864) {
            ctx->pc = 0x15A968u;
            return;
        }
    }
    ctx->pc = 0x15A86Cu;
    // 0x15a86c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15a86cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15a870: 0x0  nop
    ctx->pc = 0x15a870u;
    // NOP
    // 0x15a874: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x15a874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a878: 0x0  nop
    ctx->pc = 0x15a878u;
    // NOP
    // 0x15a87c: 0x4501003a  bc1t        . + 4 + (0x3A << 2)
    ctx->pc = 0x15A87Cu;
    {
        const bool branch_taken_0x15a87c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A87Cu;
        // 0x15a880: 0x26230300  addiu       $v1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a87c) {
            ctx->pc = 0x15A968u;
            return;
        }
    }
    ctx->pc = 0x15A884u;
    // 0x15a884: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x15a884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15a888: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15a888u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15a88c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x15a88cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15a890: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x15a890u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15a894: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x15a894u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15a898: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x15a898u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15a89c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15a89cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15a8a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x15a8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15a8a4: 0xc62102f0  lwc1        $f1, 0x2F0($s1)
    ctx->pc = 0x15a8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a8a8: 0xc78080b4  lwc1        $f0, -0x7F4C($gp)
    ctx->pc = 0x15a8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a8ac: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x15a8acu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x15a8b0: 0x0  nop
    ctx->pc = 0x15a8b0u;
    // NOP
    // 0x15a8b4: 0x0  nop
    ctx->pc = 0x15a8b4u;
    // NOP
    // 0x15a8b8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x15a8b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a8bc: 0x0  nop
    ctx->pc = 0x15a8bcu;
    // NOP
    // 0x15a8c0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x15A8C0u;
    {
        const bool branch_taken_0x15a8c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A8C0u;
        // 0x15a8c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a8c0) {
            ctx->pc = 0x15A90Cu;
            return;
        }
    }
    ctx->pc = 0x15A8C8u;
    // 0x15a8c8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x15a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15a8cc: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x15a8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a8d0: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x15a8d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a8d4: 0x0  nop
    ctx->pc = 0x15a8d4u;
    // NOP
    // 0x15a8d8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x15A8D8u;
    {
        const bool branch_taken_0x15a8d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a8d8) {
            ctx->pc = 0x15A908u;
            return;
        }
    }
    ctx->pc = 0x15A8E0u;
    // 0x15a8e0: 0xc7828020  lwc1        $f2, -0x7FE0($gp)
    ctx->pc = 0x15a8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a8e4: 0xc78080bc  lwc1        $f0, -0x7F44($gp)
    ctx->pc = 0x15a8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a8e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x15a8e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x15a8ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15a8ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a8f0: 0x0  nop
    ctx->pc = 0x15a8f0u;
    // NOP
    // 0x15a8f4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x15A8F4u;
    {
        const bool branch_taken_0x15a8f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a8f4) {
            ctx->pc = 0x15A908u;
            return;
        }
    }
    ctx->pc = 0x15A8FCu;
    // 0x15a8fc: 0x862201f8  lh          $v0, 0x1F8($s1)
    ctx->pc = 0x15a8fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 504)));
    // 0x15a900: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15A900u;
    {
        const bool branch_taken_0x15a900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a900) {
            ctx->pc = 0x15A928u;
            return;
        }
    }
    ctx->pc = 0x15A908u;
}
