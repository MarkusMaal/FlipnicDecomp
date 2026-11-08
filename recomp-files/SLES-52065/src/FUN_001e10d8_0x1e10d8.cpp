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

// Function: FUN_001e10d8
// Address: 0x1e10d8 - 0x1e111c
void FUN_001e10d8_0x1e10d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e10d8_0x1e10d8");
#endif

    ctx->pc = 0x1e10d8u;

    // 0x1e10d8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1e10d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e10dc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1e10dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1e10e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e10e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e10e4: 0x2463b340  addiu       $v1, $v1, -0x4CC0
    ctx->pc = 0x1e10e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947648));
    // 0x1e10e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e10e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e10ec: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1e10ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e10f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e10f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e10f4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1e10f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1e10f8: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1e10f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e10fc: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x1e10fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e1100: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x1e1100u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e1104: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1e1104u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1108: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1e1108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e110c: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x1e110cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x1e1110: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1e1110u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1e1114: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1114u;
        // 0x1e1118: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E111Cu;
}
