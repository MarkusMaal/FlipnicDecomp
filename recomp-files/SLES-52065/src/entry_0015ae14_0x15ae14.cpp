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

// Function: entry_0015ae14
// Address: 0x15ae14 - 0x15aeec
void entry_0015ae14_0x15ae14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ae14_0x15ae14");
#endif

    ctx->pc = 0x15ae14u;

    // 0x15ae14: 0xa62001e8  sh          $zero, 0x1E8($s1)
    ctx->pc = 0x15ae14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 488), (uint16_t)GPR_U32(ctx, 0));
    // 0x15ae18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15ae1c: 0xc62201c0  lwc1        $f2, 0x1C0($s1)
    ctx->pc = 0x15ae1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ae20: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x15ae20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15ae24: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x15ae24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ae28: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x15ae28u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x15ae2c: 0x46001881  sub.s       $f2, $f3, $f0
    ctx->pc = 0x15ae2cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x15ae30: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x15ae30u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x15ae34: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x15ae34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x15ae38: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x15ae38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ae3c: 0x0  nop
    ctx->pc = 0x15ae3cu;
    // NOP
    // 0x15ae40: 0x4500004f  bc1f        . + 4 + (0x4F << 2)
    ctx->pc = 0x15AE40u;
    {
        const bool branch_taken_0x15ae40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE40u;
        // 0x15ae44: 0xe62002e8  swc1        $f0, 0x2E8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae40) {
            ctx->pc = 0x15AF80u;
            return;
        }
    }
    ctx->pc = 0x15AE48u;
    // 0x15ae48: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15ae48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15ae4c: 0x0  nop
    ctx->pc = 0x15ae4cu;
    // NOP
    // 0x15ae50: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x15ae50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ae54: 0x0  nop
    ctx->pc = 0x15ae54u;
    // NOP
    // 0x15ae58: 0x45010049  bc1t        . + 4 + (0x49 << 2)
    ctx->pc = 0x15AE58u;
    {
        const bool branch_taken_0x15ae58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE58u;
        // 0x15ae5c: 0x26230300  addiu       $v1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae58) {
            ctx->pc = 0x15AF80u;
            return;
        }
    }
    ctx->pc = 0x15AE60u;
    // 0x15ae60: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x15ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15ae64: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15ae64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15ae68: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x15ae68u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ae6c: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x15ae6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15ae70: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x15ae70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15ae74: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x15ae74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15ae78: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15ae78u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15ae7c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x15ae7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15ae80: 0xc62102f0  lwc1        $f1, 0x2F0($s1)
    ctx->pc = 0x15ae80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ae84: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x15ae84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ae88: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x15ae88u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x15ae8c: 0x0  nop
    ctx->pc = 0x15ae8cu;
    // NOP
    // 0x15ae90: 0x0  nop
    ctx->pc = 0x15ae90u;
    // NOP
    // 0x15ae94: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x15ae94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ae98: 0x0  nop
    ctx->pc = 0x15ae98u;
    // NOP
    // 0x15ae9c: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x15AE9Cu;
    {
        const bool branch_taken_0x15ae9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ae9c) {
            ctx->pc = 0x15AEECu;
            return;
        }
    }
    ctx->pc = 0x15AEA4u;
    // 0x15aea4: 0xc7838020  lwc1        $f3, -0x7FE0($gp)
    ctx->pc = 0x15aea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15aea8: 0xc78080b8  lwc1        $f0, -0x7F48($gp)
    ctx->pc = 0x15aea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15aeac: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x15aeacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x15aeb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15aeb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15aeb4: 0x0  nop
    ctx->pc = 0x15aeb4u;
    // NOP
    // 0x15aeb8: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x15AEB8u;
    {
        const bool branch_taken_0x15aeb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15aeb8) {
            ctx->pc = 0x15AEECu;
            return;
        }
    }
    ctx->pc = 0x15AEC0u;
    // 0x15aec0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x15aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15aec4: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x15aec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15aec8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x15aec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15aecc: 0x0  nop
    ctx->pc = 0x15aeccu;
    // NOP
    // 0x15aed0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x15AED0u;
    {
        const bool branch_taken_0x15aed0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15aed0) {
            ctx->pc = 0x15AEECu;
            return;
        }
    }
    ctx->pc = 0x15AED8u;
    // 0x15aed8: 0x8e23033c  lw          $v1, 0x33C($s1)
    ctx->pc = 0x15aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 828)));
    // 0x15aedc: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x15aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x15aee0: 0x9063000f  lbu         $v1, 0xF($v1)
    ctx->pc = 0x15aee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
    // 0x15aee4: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x15AEE4u;
    {
        const bool branch_taken_0x15aee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15aee4) {
            ctx->pc = 0x15AF30u;
            return;
        }
    }
    ctx->pc = 0x15AEECu;
}
