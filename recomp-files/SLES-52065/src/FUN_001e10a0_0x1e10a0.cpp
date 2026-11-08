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

// Function: FUN_001e10a0
// Address: 0x1e10a0 - 0x1e10d8
void FUN_001e10a0_0x1e10a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e10a0_0x1e10a0");
#endif

    ctx->pc = 0x1e10a0u;

    // 0x1e10a0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1e10a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e10a4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1e10a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1e10a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e10a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e10ac: 0x2463b340  addiu       $v1, $v1, -0x4CC0
    ctx->pc = 0x1e10acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947648));
    // 0x1e10b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e10b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e10b4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1e10b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e10b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e10b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e10bc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e10bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e10c0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1e10c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e10c4: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1e10c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e10c8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1e10c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e10cc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1e10ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1e10d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E10D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E10D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E10D0u;
        // 0x1e10d4: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E10D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E10D8u;
}
