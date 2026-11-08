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

// Function: FUN_00186cf0
// Address: 0x186cf0 - 0x186d40
void FUN_00186cf0_0x186cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00186cf0_0x186cf0");
#endif

    switch (ctx->pc) {
        case 0x186d10u: goto label_186d10;
        default: break;
    }

    ctx->pc = 0x186cf0u;

    // 0x186cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186cf4: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x186cf4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x186cf8: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x186cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x186cfc: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x186cfcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x186d00: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x186d00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x186d04: 0xd8e50000  lqc2        $vf5, 0x0($a3)
    ctx->pc = 0x186d04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x186d08: 0xd8660000  lqc2        $vf6, 0x0($v1)
    ctx->pc = 0x186d08u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186d0c: 0x0  nop
    ctx->pc = 0x186d0cu;
    // NOP
label_186d10:
    // 0x186d10: 0x4be621bc  vmulax.xyzw $ACC, $vf4, $vf6x
    ctx->pc = 0x186d10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186d14: 0x4be629c9  vmaddy.xyzw $vf7, $vf5, $vf6y
    ctx->pc = 0x186d14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x186d18: 0x20c60010  addi        $a2, $a2, 0x10
    ctx->pc = 0x186d18u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x186d1c: 0x20e70010  addi        $a3, $a3, 0x10
    ctx->pc = 0x186d1cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x186d20: 0x2084ffff  addi        $a0, $a0, -0x1
    ctx->pc = 0x186d20u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x186d24: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x186d24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x186d28: 0xd8e50000  lqc2        $vf5, 0x0($a3)
    ctx->pc = 0x186d28u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x186d2c: 0xf8a70000  sqc2        $vf7, 0x0($a1)
    ctx->pc = 0x186d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x186d30: 0x1404fff7  bne         $zero, $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x186D30u;
    {
        const bool branch_taken_0x186d30 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 4));
        ctx->pc = 0x186D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D30u;
        // 0x186d34: 0x20a50010  addi        $a1, $a1, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d30) {
            ctx->pc = 0x186D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186d10;
        }
    }
    ctx->pc = 0x186D38u;
    // 0x186d38: 0x3e00008  jr          $ra
    ctx->pc = 0x186D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D38u;
        // 0x186d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186D40u;
}
