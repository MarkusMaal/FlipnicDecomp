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

// Function: entry_0013d860
// Address: 0x13d860 - 0x13d880
void entry_0013d860_0x13d860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d860_0x13d860");
#endif

    ctx->pc = 0x13d860u;

    // 0x13d860: 0x8c8400d4  lw          $a0, 0xD4($a0)
    ctx->pc = 0x13d860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x13d864: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x13d864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13d868: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13d868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13d86c: 0x3e00008  jr          $ra
    ctx->pc = 0x13D86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D86Cu;
        // 0x13d870: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D874u;
    // 0x13d874: 0x0  nop
    ctx->pc = 0x13d874u;
    // NOP
    // 0x13d878: 0x0  nop
    ctx->pc = 0x13d878u;
    // NOP
    // 0x13d87c: 0x0  nop
    ctx->pc = 0x13d87cu;
    // NOP
    ctx->pc = 0x13d880u;
}
