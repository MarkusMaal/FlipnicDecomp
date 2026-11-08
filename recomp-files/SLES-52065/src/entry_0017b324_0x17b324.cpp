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

// Function: entry_0017b324
// Address: 0x17b324 - 0x17b38c
void entry_0017b324_0x17b324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b324_0x17b324");
#endif

    switch (ctx->pc) {
        case 0x17b350u: goto label_17b350;
        case 0x17b360u: goto label_17b360;
        default: break;
    }

    ctx->pc = 0x17b324u;

    // 0x17b324: 0x260203f0  addiu       $v0, $s0, 0x3F0
    ctx->pc = 0x17b324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
    // 0x17b328: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17b328u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b32c: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x17b32cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17b330: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x17b330u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17b334: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x17b334u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17b338: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x17b338u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17b33c: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x17b33cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17b340: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x17b340u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17b344: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17b344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17b348: 0xc082520  jal         func_209480
    ctx->pc = 0x17B348u;
    SET_GPR_U32(ctx, 31, 0x17B350u);
    ctx->pc = 0x209480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209480u, 0x17B348u, 0x17B350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B350u;
label_17b350:
    // 0x17b350: 0x3c034062  lui         $v1, 0x4062
    ctx->pc = 0x17b350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16482 << 16));
    // 0x17b354: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17b354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b358: 0xc0400f4  jal         func_1003D0
    ctx->pc = 0x17B358u;
    SET_GPR_U32(ctx, 31, 0x17B360u);
    ctx->pc = 0x17B35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B358u;
    // 0x17b35c: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003D0u, 0x17B358u, 0x17B360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B360u;
label_17b360:
    // 0x17b360: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17B360u;
    {
        const bool branch_taken_0x17b360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b360) {
            ctx->pc = 0x17B38Cu;
            return;
        }
    }
    ctx->pc = 0x17B368u;
    // 0x17b368: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x17b368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b36c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17b370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b374: 0xc60203f4  lwc1        $f2, 0x3F4($s0)
    ctx->pc = 0x17b374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17b378: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17b378u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17b37c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x17b37cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17b380: 0x0  nop
    ctx->pc = 0x17b380u;
    // NOP
    // 0x17b384: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x17B384u;
    {
        const bool branch_taken_0x17b384 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B384u;
        // 0x17b388: 0x260203f0  addiu       $v0, $s0, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b384) {
            ctx->pc = 0x17B3FCu;
            return;
        }
    }
    ctx->pc = 0x17B38Cu;
}
