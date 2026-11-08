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

// Function: FUN_001dd0c8
// Address: 0x1dd0c8 - 0x1dd100
void FUN_001dd0c8_0x1dd0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dd0c8_0x1dd0c8");
#endif

    ctx->pc = 0x1dd0c8u;

    // 0x1dd0c8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1dd0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1dd0cc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1dd0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1dd0d0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1dd0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd0d4: 0x24427330  addiu       $v0, $v0, 0x7330
    ctx->pc = 0x1dd0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29488));
    // 0x1dd0d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd0dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dd0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd0e0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1dd0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dd0e4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1dd0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dd0e8: 0xac850048  sw          $a1, 0x48($a0)
    ctx->pc = 0x1dd0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
    // 0x1dd0ec: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1dd0ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd0f4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1dd0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1dd0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0F8u;
        // 0x1dd0fc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD100u;
}
