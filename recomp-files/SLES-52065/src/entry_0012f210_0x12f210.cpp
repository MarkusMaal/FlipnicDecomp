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

// Function: entry_0012f210
// Address: 0x12f210 - 0x12f230
void entry_0012f210_0x12f210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f210_0x12f210");
#endif

    ctx->pc = 0x12f210u;

    // 0x12f210: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12f210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12f214: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12f214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f218: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x12f218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12f21c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x12f21cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x12f220: 0x3e00008  jr          $ra
    ctx->pc = 0x12F220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F220u;
        // 0x12f224: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F228u;
    // 0x12f228: 0x0  nop
    ctx->pc = 0x12f228u;
    // NOP
    // 0x12f22c: 0x0  nop
    ctx->pc = 0x12f22cu;
    // NOP
    ctx->pc = 0x12f230u;
}
