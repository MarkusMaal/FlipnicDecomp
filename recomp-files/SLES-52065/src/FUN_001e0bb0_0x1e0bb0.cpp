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

// Function: FUN_001e0bb0
// Address: 0x1e0bb0 - 0x1e0bdc
void FUN_001e0bb0_0x1e0bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e0bb0_0x1e0bb0");
#endif

    switch (ctx->pc) {
        case 0x1e0bccu: goto label_1e0bcc;
        default: break;
    }

    ctx->pc = 0x1e0bb0u;

    // 0x1e0bb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0bb4: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x1e0bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1e0bb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e0bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0bbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0bbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0bc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0bc4: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1E0BC4u;
    SET_GPR_U32(ctx, 31, 0x1E0BCCu);
    ctx->pc = 0x1E0BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0BC4u;
    // 0x1e0bc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1E0BC4u, 0x1E0BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0BCCu;
label_1e0bcc:
    // 0x1e0bcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0bccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0bd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BD4u;
        // 0x1e0bd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0BDCu;
}
