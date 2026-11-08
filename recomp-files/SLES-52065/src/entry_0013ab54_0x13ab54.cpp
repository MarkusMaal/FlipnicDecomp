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

// Function: entry_0013ab54
// Address: 0x13ab54 - 0x13ab7c
void entry_0013ab54_0x13ab54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ab54_0x13ab54");
#endif

    ctx->pc = 0x13ab54u;

    // 0x13ab54: 0x0  nop
    ctx->pc = 0x13ab54u;
    // NOP
    // 0x13ab58: 0x28e30004  slti        $v1, $a3, 0x4
    ctx->pc = 0x13ab58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x13ab5c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13AB5Cu;
    {
        const bool branch_taken_0x13ab5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB5Cu;
        // 0x13ab60: 0x73040  sll         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab5c) {
            ctx->pc = 0x13AB3Cu;
            return;
        }
    }
    ctx->pc = 0x13AB64u;
    // 0x13ab64: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x13ab64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x13ab68: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x13ab68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13ab6c: 0x4be5213e  vitof12.xyzw $vf5, $vf4
    ctx->pc = 0x13ab6cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(0.000244140625f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x13ab70: 0xf8a50000  sqc2        $vf5, 0x0($a1)
    ctx->pc = 0x13ab70u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x13ab74: 0x3e00008  jr          $ra
    ctx->pc = 0x13AB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB74u;
        // 0x13ab78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AB7Cu;
}
