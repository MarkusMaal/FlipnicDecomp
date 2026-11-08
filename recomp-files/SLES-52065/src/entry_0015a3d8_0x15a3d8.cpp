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

// Function: entry_0015a3d8
// Address: 0x15a3d8 - 0x15a4a4
void entry_0015a3d8_0x15a3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a3d8_0x15a3d8");
#endif

    switch (ctx->pc) {
        case 0x15a444u: goto label_15a444;
        default: break;
    }

    ctx->pc = 0x15a3d8u;

    // 0x15a3d8: 0x266301e0  addiu       $v1, $s3, 0x1E0
    ctx->pc = 0x15a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
    // 0x15a3dc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x15a3e0: 0x24460210  addiu       $a2, $v0, 0x210
    ctx->pc = 0x15a3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x15a3e4: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x15a3e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15a3e8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x15a3e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15a3ec: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x15a3ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15a3f0: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x15a3f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15a3f4: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x15a3f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15a3f8: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x15a3f8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15a3fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a3fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a400: 0x0  nop
    ctx->pc = 0x15a400u;
    // NOP
    // 0x15a404: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x15a404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a408: 0x0  nop
    ctx->pc = 0x15a408u;
    // NOP
    // 0x15a40c: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x15A40Cu;
    {
        const bool branch_taken_0x15a40c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a40c) {
            ctx->pc = 0x15A4A4u;
            return;
        }
    }
    ctx->pc = 0x15A414u;
    // 0x15a414: 0x866301f4  lh          $v1, 0x1F4($s3)
    ctx->pc = 0x15a414u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 500)));
    // 0x15a418: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x15a418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x15a41c: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x15a41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x15a420: 0x8e6401f0  lw          $a0, 0x1F0($s3)
    ctx->pc = 0x15a420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 496)));
    // 0x15a424: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x15a424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x15a428: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x15a428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15a42c: 0x0  nop
    ctx->pc = 0x15a42cu;
    // NOP
    // 0x15a430: 0x0  nop
    ctx->pc = 0x15a430u;
    // NOP
    // 0x15a434: 0x1010  mfhi        $v0
    ctx->pc = 0x15a434u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x15a438: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15a438u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15a43c: 0xc0549ac  jal         func_1526B0
    ctx->pc = 0x15A43Cu;
    SET_GPR_U32(ctx, 31, 0x15A444u);
    ctx->pc = 0x15A440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A43Cu;
    // 0x15a440: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1526B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1526B0u, 0x15A43Cu, 0x15A444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A444u;
label_15a444:
    // 0x15a444: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x15A444u;
    {
        const bool branch_taken_0x15a444 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15a444) {
            ctx->pc = 0x15A4A4u;
            return;
        }
    }
    ctx->pc = 0x15A44Cu;
    // 0x15a44c: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x15a44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a450: 0xc6600064  lwc1        $f0, 0x64($s3)
    ctx->pc = 0x15a450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a454: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x15a454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a458: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x15a458u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x15a45c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15a45cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a460: 0x0  nop
    ctx->pc = 0x15a460u;
    // NOP
    // 0x15a464: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x15A464u;
    {
        const bool branch_taken_0x15a464 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A464u;
        // 0x15a468: 0x111900  sll         $v1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a464) {
            ctx->pc = 0x15A4A4u;
            return;
        }
    }
    ctx->pc = 0x15A46Cu;
    // 0x15a46c: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x15a46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x15a470: 0xc4800214  lwc1        $f0, 0x214($a0)
    ctx->pc = 0x15a470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a474: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15a474u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a478: 0x0  nop
    ctx->pc = 0x15a478u;
    // NOP
    // 0x15a47c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x15A47Cu;
    {
        const bool branch_taken_0x15a47c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a47c) {
            ctx->pc = 0x15A4A4u;
            return;
        }
    }
    ctx->pc = 0x15A484u;
    // 0x15a484: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x15a484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
    // 0x15a488: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x15a488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a48c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x15a48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x15a490: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15a490u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a494: 0x0  nop
    ctx->pc = 0x15a494u;
    // NOP
    // 0x15a498: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15a498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15a49c: 0xe4800214  swc1        $f0, 0x214($a0)
    ctx->pc = 0x15a49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 532), bits); }
    // 0x15a4a0: 0xae420204  sw          $v0, 0x204($s2)
    ctx->pc = 0x15a4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 516), GPR_U32(ctx, 2));
    ctx->pc = 0x15a4a4u;
}
