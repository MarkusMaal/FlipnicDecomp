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

// Function: entry_001c1a78
// Address: 0x1c1a78 - 0x1c1a94
void entry_001c1a78_0x1c1a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1a78_0x1c1a78");
#endif

    switch (ctx->pc) {
        case 0x1c1a80u: goto label_1c1a80;
        default: break;
    }

    ctx->pc = 0x1c1a78u;

    // 0x1c1a78: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1C1A78u;
    SET_GPR_U32(ctx, 31, 0x1C1A80u);
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1C1A78u, 0x1C1A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A80u;
label_1c1a80:
    // 0x1c1a80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c1a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1a84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1a84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1a88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A8Cu;
        // 0x1c1a90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1A94u;
}
