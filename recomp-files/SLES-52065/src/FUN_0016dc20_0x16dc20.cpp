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

// Function: FUN_0016dc20
// Address: 0x16dc20 - 0x16dccc
void FUN_0016dc20_0x16dc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016dc20_0x16dc20");
#endif

    switch (ctx->pc) {
        case 0x16dc34u: goto label_16dc34;
        case 0x16dc40u: goto label_16dc40;
        case 0x16dc64u: goto label_16dc64;
        default: break;
    }

    ctx->pc = 0x16dc20u;

    // 0x16dc20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16dc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16dc24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16dc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16dc28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16dc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16dc2c: 0xc05fe4c  jal         func_17F930
    ctx->pc = 0x16DC2Cu;
    SET_GPR_U32(ctx, 31, 0x16DC34u);
    ctx->pc = 0x16DC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DC2Cu;
    // 0x16dc30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x16DC2Cu, 0x16DC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC34u;
label_16dc34:
    // 0x16dc34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16dc34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc38: 0xc05fec0  jal         func_17FB00
    ctx->pc = 0x16DC38u;
    SET_GPR_U32(ctx, 31, 0x16DC40u);
    ctx->pc = 0x16DC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DC38u;
    // 0x16dc3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB00u, 0x16DC38u, 0x16DC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC40u;
label_16dc40:
    // 0x16dc40: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x16dc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16dc44: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x16dc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x16dc48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16dc48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16dc4c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16dc4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc50: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x16dc50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16dc54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16dc58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16dc58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16dc5c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16DC5Cu;
    {
        const bool branch_taken_0x16dc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC5Cu;
        // 0x16dc60: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc5c) {
            ctx->pc = 0x16DC9Cu;
            goto label_16dc9c;
        }
    }
    ctx->pc = 0x16DC64u;
label_16dc64:
    // 0x16dc64: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x16dc64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16dc68: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x16dc68u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16dc6c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16dc6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16dc70: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x16dc70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16dc74: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16dc74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16dc78: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16dc78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16dc7c: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16dc7cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16dc80: 0x4a0003bf  vwaitq
    ctx->pc = 0x16dc80u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16dc84: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16dc84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16dc88: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16dc88u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16dc8c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16dc8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16dc90: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x16dc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x16dc94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16dc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16dc98: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x16dc98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_16dc9c:
    // 0x16dc9c: 0x0  nop
    ctx->pc = 0x16dc9cu;
    // NOP
    // 0x16dca0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x16dca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16dca4: 0x0  nop
    ctx->pc = 0x16dca4u;
    // NOP
    // 0x16dca8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x16dca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16dcac: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x16dcacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16dcb0: 0x0  nop
    ctx->pc = 0x16dcb0u;
    // NOP
    // 0x16dcb4: 0x4501ffeb  bc1t        . + 4 + (-0x15 << 2)
    ctx->pc = 0x16DCB4u;
    {
        const bool branch_taken_0x16dcb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCB4u;
        // 0x16dcb8: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dcb4) {
            ctx->pc = 0x16DC64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16dc64;
        }
    }
    ctx->pc = 0x16DCBCu;
    // 0x16dcbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16dcbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16dcc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16dcc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16dcc4: 0x3e00008  jr          $ra
    ctx->pc = 0x16DCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCC4u;
        // 0x16dcc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DCCCu;
}
