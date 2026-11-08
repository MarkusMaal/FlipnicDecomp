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

// Function: FUN_001cc4d0
// Address: 0x1cc4d0 - 0x1cc53c
void FUN_001cc4d0_0x1cc4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc4d0_0x1cc4d0");
#endif

    ctx->pc = 0x1cc4d0u;

    // 0x1cc4d0: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cc4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cc4d4: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1cc4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1cc4d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cc4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cc4dc: 0x244510c8  addiu       $a1, $v0, 0x10C8
    ctx->pc = 0x1cc4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4296));
    // 0x1cc4e0: 0x8c23f950  lw          $v1, -0x6B0($at)
    ctx->pc = 0x1cc4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F950u));
    // 0x1cc4e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1cc4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cc4e8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1cc4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cc4ec: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1cc4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1cc4f0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1cc4f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1cc4f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC4F4u;
    {
        const bool branch_taken_0x1cc4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4F4u;
        // 0x1cc4f8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4f4) {
            ctx->pc = 0x1CC508u;
            goto label_1cc508;
        }
    }
    ctx->pc = 0x1CC4FCu;
    // 0x1cc4fc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1cc4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1cc500: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CC500u;
    {
        const bool branch_taken_0x1cc500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC500u;
        // 0x1cc504: 0x244229f8  addiu       $v0, $v0, 0x29F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc500) {
            ctx->pc = 0x1CC534u;
            goto label_1cc534;
        }
    }
    ctx->pc = 0x1CC508u;
label_1cc508:
    // 0x1cc508: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cc508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cc50c: 0x8c24c6f4  lw          $a0, -0x390C($at)
    ctx->pc = 0x1cc50cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x22C6F4u));
    // 0x1cc510: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1cc510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x1cc514: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1cc514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cc518: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cc518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cc51c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1cc51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1cc520: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cc520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cc524: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1cc524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cc528: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cc528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cc52c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1cc52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1cc530: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cc530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cc534:
    // 0x1cc534: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC53Cu;
}
