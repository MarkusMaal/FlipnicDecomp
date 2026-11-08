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

// Function: entry_001eec70
// Address: 0x1eec70 - 0x1eec90
void entry_001eec70_0x1eec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eec70_0x1eec70");
#endif

    switch (ctx->pc) {
        case 0x1eec78u: goto label_1eec78;
        default: break;
    }

    ctx->pc = 0x1eec70u;

    // 0x1eec70: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1EEC70u;
    SET_GPR_U32(ctx, 31, 0x1EEC78u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1EEC70u, 0x1EEC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEC78u;
label_1eec78:
    // 0x1eec78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1eec78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eec7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eec7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eec80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1eec80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eec84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eec84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eec88: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC88u;
        // 0x1eec8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEC90u;
}
