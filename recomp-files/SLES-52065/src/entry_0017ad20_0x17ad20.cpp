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

// Function: entry_0017ad20
// Address: 0x17ad20 - 0x17ad84
void entry_0017ad20_0x17ad20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ad20_0x17ad20");
#endif

    switch (ctx->pc) {
        case 0x17ad28u: goto label_17ad28;
        case 0x17ad30u: goto label_17ad30;
        case 0x17ad38u: goto label_17ad38;
        default: break;
    }

    ctx->pc = 0x17ad20u;

    // 0x17ad20: 0xc055d98  jal         func_157660
    ctx->pc = 0x17AD20u;
    SET_GPR_U32(ctx, 31, 0x17AD28u);
    ctx->pc = 0x157660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157660u, 0x17AD20u, 0x17AD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD28u;
label_17ad28:
    // 0x17ad28: 0xc055dd8  jal         func_157760
    ctx->pc = 0x17AD28u;
    SET_GPR_U32(ctx, 31, 0x17AD30u);
    ctx->pc = 0x17AD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD28u;
    // 0x17ad2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157760u, 0x17AD28u, 0x17AD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD30u;
label_17ad30:
    // 0x17ad30: 0xc055ac0  jal         func_156B00
    ctx->pc = 0x17AD30u;
    SET_GPR_U32(ctx, 31, 0x17AD38u);
    ctx->pc = 0x17AD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD30u;
    // 0x17ad34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156B00u, 0x17AD30u, 0x17AD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD38u;
label_17ad38:
    // 0x17ad38: 0x260203e0  addiu       $v0, $s0, 0x3E0
    ctx->pc = 0x17ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 992));
    // 0x17ad3c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17ad3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ad40: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x17ad40u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17ad44: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x17ad44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17ad48: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x17ad48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17ad4c: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x17ad4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17ad50: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x17ad50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17ad54: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x17ad54u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17ad58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17ad58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17ad5c: 0x3c0245c8  lui         $v0, 0x45C8
    ctx->pc = 0x17ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17864 << 16));
    // 0x17ad60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ad60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ad64: 0x0  nop
    ctx->pc = 0x17ad64u;
    // NOP
    // 0x17ad68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17ad68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ad6c: 0x0  nop
    ctx->pc = 0x17ad6cu;
    // NOP
    // 0x17ad70: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x17AD70u;
    {
        const bool branch_taken_0x17ad70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD70u;
        // 0x17ad74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ad70) {
            ctx->pc = 0x17AD84u;
            return;
        }
    }
    ctx->pc = 0x17AD78u;
    // 0x17ad78: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x17ad78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17ad7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17ad80: 0xae0303d0  sw          $v1, 0x3D0($s0)
    ctx->pc = 0x17ad80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 976), GPR_U32(ctx, 3));
    ctx->pc = 0x17ad84u;
}
