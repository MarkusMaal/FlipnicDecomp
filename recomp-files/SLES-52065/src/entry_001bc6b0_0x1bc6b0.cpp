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

// Function: entry_001bc6b0
// Address: 0x1bc6b0 - 0x1bc6c8
void entry_001bc6b0_0x1bc6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc6b0_0x1bc6b0");
#endif

    switch (ctx->pc) {
        case 0x1bc6b8u: goto label_1bc6b8;
        default: break;
    }

    ctx->pc = 0x1bc6b0u;

    // 0x1bc6b0: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1BC6B0u;
    SET_GPR_U32(ctx, 31, 0x1BC6B8u);
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1BC6B0u, 0x1BC6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC6B8u;
label_1bc6b8:
    // 0x1bc6b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc6bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bc6bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC6C0u;
        // 0x1bc6c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC6C8u;
}
