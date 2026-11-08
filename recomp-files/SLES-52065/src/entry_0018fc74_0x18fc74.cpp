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

// Function: entry_0018fc74
// Address: 0x18fc74 - 0x18fc94
void entry_0018fc74_0x18fc74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fc74_0x18fc74");
#endif

    ctx->pc = 0x18fc74u;

    // 0x18fc74: 0x0  nop
    ctx->pc = 0x18fc74u;
    // NOP
    // 0x18fc78: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18fc7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18fc80: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x18fc80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x18fc84: 0xac40fff4  sw          $zero, -0xC($v0)
    ctx->pc = 0x18fc84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 0));
    // 0x18fc88: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x18fc88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x18FC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC8Cu;
        // 0x18fc90: 0xac800230  sw          $zero, 0x230($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FC94u;
}
