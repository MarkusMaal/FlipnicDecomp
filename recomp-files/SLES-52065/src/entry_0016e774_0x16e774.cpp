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

// Function: entry_0016e774
// Address: 0x16e774 - 0x16e7fc
void entry_0016e774_0x16e774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e774_0x16e774");
#endif

    switch (ctx->pc) {
        case 0x16e78cu: goto label_16e78c;
        default: break;
    }

    ctx->pc = 0x16e774u;

    // 0x16e774: 0xc62101c0  lwc1        $f1, 0x1C0($s1)
    ctx->pc = 0x16e774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e778: 0x264401e0  addiu       $a0, $s2, 0x1E0
    ctx->pc = 0x16e778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
    // 0x16e77c: 0xc6400200  lwc1        $f0, 0x200($s2)
    ctx->pc = 0x16e77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e780: 0x26260300  addiu       $a2, $s1, 0x300
    ctx->pc = 0x16e780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x16e784: 0xc054d0c  jal         func_153430
    ctx->pc = 0x16E784u;
    SET_GPR_U32(ctx, 31, 0x16E78Cu);
    ctx->pc = 0x16E788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E784u;
    // 0x16e788: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153430u, 0x16E784u, 0x16E78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E78Cu;
label_16e78c:
    // 0x16e78c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16e78cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16e790: 0x0  nop
    ctx->pc = 0x16e790u;
    // NOP
    // 0x16e794: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16e794u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e798: 0x0  nop
    ctx->pc = 0x16e798u;
    // NOP
    // 0x16e79c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x16E79Cu;
    {
        const bool branch_taken_0x16e79c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E79Cu;
        // 0x16e7a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e79c) {
            ctx->pc = 0x16E808u;
            return;
        }
    }
    ctx->pc = 0x16E7A4u;
    // 0x16e7a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16e7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e7a8: 0x16050015  bne         $s0, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x16E7A8u;
    {
        const bool branch_taken_0x16e7a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x16E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E7A8u;
        // 0x16e7ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e7a8) {
            ctx->pc = 0x16E800u;
            return;
        }
    }
    ctx->pc = 0x16E7B0u;
    // 0x16e7b0: 0x8e420210  lw          $v0, 0x210($s2)
    ctx->pc = 0x16e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
    // 0x16e7b4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16e7b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e7b8: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x16e7b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16e7bc: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16e7bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16e7c0: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x16e7c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16e7c4: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x16e7c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16e7c8: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x16e7c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16e7cc: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x16e7ccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16e7d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16e7d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16e7d4: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x16e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x16e7d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16e7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e7dc: 0x0  nop
    ctx->pc = 0x16e7dcu;
    // NOP
    // 0x16e7e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16e7e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e7e4: 0x0  nop
    ctx->pc = 0x16e7e4u;
    // NOP
    // 0x16e7e8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x16E7E8u;
    {
        const bool branch_taken_0x16e7e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e7e8) {
            ctx->pc = 0x16E7FCu;
            return;
        }
    }
    ctx->pc = 0x16E7F0u;
    // 0x16e7f0: 0xc64c021c  lwc1        $f12, 0x21C($s2)
    ctx->pc = 0x16e7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16e7f4: 0xc0561f4  jal         func_1587D0
    ctx->pc = 0x16E7F4u;
    SET_GPR_U32(ctx, 31, 0x16E7FCu);
    ctx->pc = 0x16E7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E7F4u;
    // 0x16e7f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1587D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1587D0u, 0x16E7F4u, 0x16E7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E7FCu;
}
