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

// Function: FUN_00117260
// Address: 0x117260 - 0x11728c
void FUN_00117260_0x117260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00117260_0x117260");
#endif

    ctx->pc = 0x117260u;

    // 0x117260: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x117260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x117264: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x117264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x117268: 0x244285f0  addiu       $v0, $v0, -0x7A10
    ctx->pc = 0x117268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936048));
    // 0x11726c: 0x24638590  addiu       $v1, $v1, -0x7A70
    ctx->pc = 0x11726cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935952));
    // 0x117270: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x117270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x117274: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x117274u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x117278: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x117278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11727c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x11727cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x117280: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x117280u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x117284: 0x3e00008  jr          $ra
    ctx->pc = 0x117284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117284u;
        // 0x117288: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11728Cu;
}
