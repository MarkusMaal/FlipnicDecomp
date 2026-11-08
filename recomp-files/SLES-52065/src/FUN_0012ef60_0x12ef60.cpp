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

// Function: FUN_0012ef60
// Address: 0x12ef60 - 0x12ef80
void FUN_0012ef60_0x12ef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012ef60_0x12ef60");
#endif

    ctx->pc = 0x12ef60u;

    // 0x12ef60: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12ef60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12ef64: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x12ef64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12ef68: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x12ef68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12ef6c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12ef6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef70: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x12ef70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ef74: 0xa0850008  sb          $a1, 0x8($a0)
    ctx->pc = 0x12ef74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x12ef78: 0x3e00008  jr          $ra
    ctx->pc = 0x12EF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF78u;
        // 0x12ef7c: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EF80u;
}
