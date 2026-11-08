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

// Function: FUN_00157100
// Address: 0x157100 - 0x157138
void FUN_00157100_0x157100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00157100_0x157100");
#endif

    switch (ctx->pc) {
        case 0x157108u: goto label_157108;
        default: break;
    }

    ctx->pc = 0x157100u;

    // 0x157100: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x157100u;
    {
        const bool branch_taken_0x157100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157100u;
        // 0x157104: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157100) {
            ctx->pc = 0x157114u;
            goto label_157114;
        }
    }
    ctx->pc = 0x157108u;
label_157108:
    // 0x157108: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x157108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15710c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15710cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x157110: 0xac600280  sw          $zero, 0x280($v1)
    ctx->pc = 0x157110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 640), GPR_U32(ctx, 0));
label_157114:
    // 0x157114: 0x0  nop
    ctx->pc = 0x157114u;
    // NOP
    // 0x157118: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x157118u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15711c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15711Cu;
    {
        const bool branch_taken_0x15711c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15711Cu;
        // 0x157120: 0x51940  sll         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15711c) {
            ctx->pc = 0x157108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157108;
        }
    }
    ctx->pc = 0x157124u;
    // 0x157124: 0x24830300  addiu       $v1, $a0, 0x300
    ctx->pc = 0x157124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    // 0x157128: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x157128u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15712c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15712cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157130: 0x3e00008  jr          $ra
    ctx->pc = 0x157130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157130u;
        // 0x157134: 0xac8002f0  sw          $zero, 0x2F0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 752), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157138u;
}
