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

// Function: FUN_001dd3e0
// Address: 0x1dd3e0 - 0x1dd418
void FUN_001dd3e0_0x1dd3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dd3e0_0x1dd3e0");
#endif

    ctx->pc = 0x1dd3e0u;

    // 0x1dd3e0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1dd3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1dd3e4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1dd3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1dd3e8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1dd3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd3ec: 0x24427330  addiu       $v0, $v0, 0x7330
    ctx->pc = 0x1dd3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29488));
    // 0x1dd3f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd3f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dd3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd3f8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1dd3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dd3fc: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1dd3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dd400: 0xac850034  sw          $a1, 0x34($a0)
    ctx->pc = 0x1dd400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
    // 0x1dd404: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1dd404u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd408: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd40c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1dd40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1dd410: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD410u;
        // 0x1dd414: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD418u;
}
