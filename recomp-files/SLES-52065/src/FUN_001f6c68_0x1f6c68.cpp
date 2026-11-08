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

// Function: FUN_001f6c68
// Address: 0x1f6c68 - 0x1f6c8c
void FUN_001f6c68_0x1f6c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f6c68_0x1f6c68");
#endif

    switch (ctx->pc) {
        case 0x1f6c78u: goto label_1f6c78;
        default: break;
    }

    ctx->pc = 0x1f6c68u;

    // 0x1f6c68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f6c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f6c6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6c70: 0xc07ad94  jal         func_1EB650
    ctx->pc = 0x1F6C70u;
    SET_GPR_U32(ctx, 31, 0x1F6C78u);
    ctx->pc = 0x1F6C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6C70u;
    // 0x1f6c74: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB650u, 0x1F6C70u, 0x1F6C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6C78u;
label_1f6c78:
    // 0x1f6c78: 0xf  sync
    ctx->pc = 0x1f6c78u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1f6c7c: 0x42000038  ei
    ctx->pc = 0x1f6c7cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1f6c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6c84: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C84u;
        // 0x1f6c88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6C8Cu;
}
