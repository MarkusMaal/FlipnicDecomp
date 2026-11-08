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

// Function: entry_001e8c80
// Address: 0x1e8c80 - 0x1e8ca0
void entry_001e8c80_0x1e8c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8c80_0x1e8c80");
#endif

    ctx->pc = 0x1e8c80u;

    // 0x1e8c80: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1e8c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e8c84: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1e8c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1e8c88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e8c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C8Cu;
        // 0x1e8c90: 0x80420000  lb          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8C94u;
    // 0x1e8c94: 0x0  nop
    ctx->pc = 0x1e8c94u;
    // NOP
    // 0x1e8c98: 0x0  nop
    ctx->pc = 0x1e8c98u;
    // NOP
    // 0x1e8c9c: 0x0  nop
    ctx->pc = 0x1e8c9cu;
    // NOP
    ctx->pc = 0x1e8ca0u;
}
