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

// Function: FUN_001b5000
// Address: 0x1b5000 - 0x1b5034
void FUN_001b5000_0x1b5000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b5000_0x1b5000");
#endif

    switch (ctx->pc) {
        case 0x1b5010u: goto label_1b5010;
        case 0x1b5018u: goto label_1b5018;
        case 0x1b5020u: goto label_1b5020;
        case 0x1b5028u: goto label_1b5028;
        default: break;
    }

    ctx->pc = 0x1b5000u;

    // 0x1b5000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b5004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5008: 0xc06d410  jal         func_1B5040
    ctx->pc = 0x1B5008u;
    SET_GPR_U32(ctx, 31, 0x1B5010u);
    ctx->pc = 0x1B5040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5040u, 0x1B5008u, 0x1B5010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5010u;
label_1b5010:
    // 0x1b5010: 0xc06d458  jal         func_1B5160
    ctx->pc = 0x1B5010u;
    SET_GPR_U32(ctx, 31, 0x1B5018u);
    ctx->pc = 0x1B5160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5160u, 0x1B5010u, 0x1B5018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5018u;
label_1b5018:
    // 0x1b5018: 0xc06d49c  jal         func_1B5270
    ctx->pc = 0x1B5018u;
    SET_GPR_U32(ctx, 31, 0x1B5020u);
    ctx->pc = 0x1B5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5270u, 0x1B5018u, 0x1B5020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5020u;
label_1b5020:
    // 0x1b5020: 0xc04d988  jal         func_136620
    ctx->pc = 0x1B5020u;
    SET_GPR_U32(ctx, 31, 0x1B5028u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x1B5020u, 0x1B5028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5028u;
label_1b5028:
    // 0x1b5028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b502c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B502Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B502Cu;
        // 0x1b5030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B502Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5034u;
}
