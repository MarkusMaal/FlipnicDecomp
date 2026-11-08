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

// Function: FUN_001571e0
// Address: 0x1571e0 - 0x15726c
void FUN_001571e0_0x1571e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001571e0_0x1571e0");
#endif

    switch (ctx->pc) {
        case 0x1571ecu: goto label_1571ec;
        default: break;
    }

    ctx->pc = 0x1571e0u;

    // 0x1571e0: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x1571e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1571e4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1571E4u;
    {
        const bool branch_taken_0x1571e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1571E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1571E4u;
        // 0x1571e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1571e4) {
            ctx->pc = 0x157254u;
            goto label_157254;
        }
    }
    ctx->pc = 0x1571ECu;
label_1571ec:
    // 0x1571ec: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x1571ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1571f0: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1571f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1571f4: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x1571f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1571f8: 0x4c10002  bgez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1571F8u;
    {
        const bool branch_taken_0x1571f8 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1571f8) {
            ctx->pc = 0x157204u;
            goto label_157204;
        }
    }
    ctx->pc = 0x157200u;
    // 0x157200: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x157200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_157204:
    // 0x157204: 0x0  nop
    ctx->pc = 0x157204u;
    // NOP
    // 0x157208: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x157208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x15720c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x15720cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x157210: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x157210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x157214: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x157214u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157218: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x157218u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15721c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x15721cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157220: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x157220u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157224: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x157224u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157228: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x157228u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15722c: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x15722cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x157230: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157234: 0x0  nop
    ctx->pc = 0x157234u;
    // NOP
    // 0x157238: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x157238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15723c: 0x0  nop
    ctx->pc = 0x15723cu;
    // NOP
    // 0x157240: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x157240u;
    {
        const bool branch_taken_0x157240 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x157244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157240u;
        // 0x157244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157240) {
            ctx->pc = 0x157250u;
            goto label_157250;
        }
    }
    ctx->pc = 0x157248u;
    // 0x157248: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x157248u;
    {
        const bool branch_taken_0x157248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157248) {
            ctx->pc = 0x157264u;
            goto label_157264;
        }
    }
    ctx->pc = 0x157250u;
label_157250:
    // 0x157250: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x157250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_157254:
    // 0x157254: 0x0  nop
    ctx->pc = 0x157254u;
    // NOP
    // 0x157258: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x157258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x15725c: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x15725Cu;
    {
        const bool branch_taken_0x15725c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15725Cu;
        // 0x157260: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15725c) {
            ctx->pc = 0x1571ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1571ec;
        }
    }
    ctx->pc = 0x157264u;
label_157264:
    // 0x157264: 0x3e00008  jr          $ra
    ctx->pc = 0x157264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15726Cu;
}
