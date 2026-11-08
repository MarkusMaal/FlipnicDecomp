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

// Function: FUN_001e0e28
// Address: 0x1e0e28 - 0x1e0e64
void FUN_001e0e28_0x1e0e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e0e28_0x1e0e28");
#endif

    ctx->pc = 0x1e0e28u;

    // 0x1e0e28: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1e0e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e0e2c: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x1e0e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x1e0e30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e0e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e0e34: 0x24e7b340  addiu       $a3, $a3, -0x4CC0
    ctx->pc = 0x1e0e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947648));
    // 0x1e0e38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e0e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e0e3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0e3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e40: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1e0e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e0e44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e0e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e0e48: 0xe34021  addu        $t0, $a3, $v1
    ctx->pc = 0x1e0e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1e0e4c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1e0e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1e0e50: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x1e0e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1e0e54: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1e0e54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1e0e58: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1e0e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E5Cu;
        // 0x1e0e60: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0E64u;
}
