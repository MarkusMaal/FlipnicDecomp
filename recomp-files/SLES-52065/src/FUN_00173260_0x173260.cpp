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

// Function: FUN_00173260
// Address: 0x173260 - 0x1732ac
void FUN_00173260_0x173260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00173260_0x173260");
#endif

    switch (ctx->pc) {
        case 0x17326cu: goto label_17326c;
        default: break;
    }

    ctx->pc = 0x173260u;

    // 0x173260: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x173260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173264: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x173264u;
    {
        const bool branch_taken_0x173264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173264u;
        // 0x173268: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173264) {
            ctx->pc = 0x173298u;
            goto label_173298;
        }
    }
    ctx->pc = 0x17326Cu;
label_17326c:
    // 0x17326c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x17326cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x173270: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x173270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x173274: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x173274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x173278: 0x24670060  addiu       $a3, $v1, 0x60
    ctx->pc = 0x173278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x17327c: 0x24680070  addiu       $t0, $v1, 0x70
    ctx->pc = 0x17327cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x173280: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x173280u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x173284: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x173284u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x173288: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x173288u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17328c: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x17328cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x173290: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x173290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x173294: 0xac6500a0  sw          $a1, 0xA0($v1)
    ctx->pc = 0x173294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 5));
label_173298:
    // 0x173298: 0x28c30040  slti        $v1, $a2, 0x40
    ctx->pc = 0x173298u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x17329c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x17329Cu;
    {
        const bool branch_taken_0x17329c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1732A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17329Cu;
        // 0x1732a0: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17329c) {
            ctx->pc = 0x17326Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17326c;
        }
    }
    ctx->pc = 0x1732A4u;
    // 0x1732a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1732A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1732A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1732ACu;
}
