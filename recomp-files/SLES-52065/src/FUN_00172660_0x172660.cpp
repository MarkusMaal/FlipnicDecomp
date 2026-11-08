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

// Function: FUN_00172660
// Address: 0x172660 - 0x172684
void FUN_00172660_0x172660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00172660_0x172660");
#endif

    ctx->pc = 0x172660u;

    // 0x172660: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x172660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x172664: 0x2442acb0  addiu       $v0, $v0, -0x5350
    ctx->pc = 0x172664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945968));
    // 0x172668: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x172668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x17266c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17266cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x172670: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x172670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172674: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x172674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x172678: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x172678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x17267c: 0x3e00008  jr          $ra
    ctx->pc = 0x17267Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17267Cu;
        // 0x172680: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17267Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172684u;
}
