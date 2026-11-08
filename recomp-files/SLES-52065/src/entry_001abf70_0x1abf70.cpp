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

// Function: entry_001abf70
// Address: 0x1abf70 - 0x1abfa0
void entry_001abf70_0x1abf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abf70_0x1abf70");
#endif

    ctx->pc = 0x1abf70u;

    // 0x1abf70: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1abf70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1abf74: 0x2442b6f0  addiu       $v0, $v0, -0x4910
    ctx->pc = 0x1abf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948592));
    // 0x1abf78: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x1abf78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x1abf7c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1abf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1abf80: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1abf80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf84: 0xa080001c  sb          $zero, 0x1C($a0)
    ctx->pc = 0x1abf84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1abf88: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1abf88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1abf8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF8Cu;
        // 0x1abf90: 0xa0800024  sb          $zero, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABF94u;
    // 0x1abf94: 0x0  nop
    ctx->pc = 0x1abf94u;
    // NOP
    // 0x1abf98: 0x0  nop
    ctx->pc = 0x1abf98u;
    // NOP
    // 0x1abf9c: 0x0  nop
    ctx->pc = 0x1abf9cu;
    // NOP
    ctx->pc = 0x1abfa0u;
}
