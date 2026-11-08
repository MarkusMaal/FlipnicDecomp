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

// Function: FUN_00157f20
// Address: 0x157f20 - 0x157f5c
void FUN_00157f20_0x157f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00157f20_0x157f20");
#endif

    switch (ctx->pc) {
        case 0x157f2cu: goto label_157f2c;
        default: break;
    }

    ctx->pc = 0x157f20u;

    // 0x157f20: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x157f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x157f24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x157F24u;
    {
        const bool branch_taken_0x157f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F24u;
        // 0x157f28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f24) {
            ctx->pc = 0x157F44u;
            goto label_157f44;
        }
    }
    ctx->pc = 0x157F2Cu;
label_157f2c:
    // 0x157f2c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x157f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x157f30: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x157f30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157f34: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x157f34u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x157f38: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x157f38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157f3c: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x157f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x157f40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x157f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_157f44:
    // 0x157f44: 0x0  nop
    ctx->pc = 0x157f44u;
    // NOP
    // 0x157f48: 0x87182a  slt         $v1, $a0, $a3
    ctx->pc = 0x157f48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x157f4c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x157F4Cu;
    {
        const bool branch_taken_0x157f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F4Cu;
        // 0x157f50: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f4c) {
            ctx->pc = 0x157F2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157f2c;
        }
    }
    ctx->pc = 0x157F54u;
    // 0x157f54: 0x3e00008  jr          $ra
    ctx->pc = 0x157F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157F5Cu;
}
