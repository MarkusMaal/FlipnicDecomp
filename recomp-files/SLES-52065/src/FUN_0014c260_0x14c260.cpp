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

// Function: FUN_0014c260
// Address: 0x14c260 - 0x14c28c
void FUN_0014c260_0x14c260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014c260_0x14c260");
#endif

    switch (ctx->pc) {
        case 0x14c270u: goto label_14c270;
        case 0x14c280u: goto label_14c280;
        default: break;
    }

    ctx->pc = 0x14c260u;

    // 0x14c260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14c260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14c264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c268: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14C268u;
    SET_GPR_U32(ctx, 31, 0x14C270u);
    ctx->pc = 0x14C26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C268u;
    // 0x14c26c: 0x24040110  addiu       $a0, $zero, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14C268u, 0x14C270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C270u;
label_14c270:
    // 0x14c270: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C270u;
    {
        const bool branch_taken_0x14c270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C270u;
        // 0x14c274: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c270) {
            ctx->pc = 0x14C280u;
            goto label_14c280;
        }
    }
    ctx->pc = 0x14C278u;
    // 0x14c278: 0xc052f90  jal         func_14BE40
    ctx->pc = 0x14C278u;
    SET_GPR_U32(ctx, 31, 0x14C280u);
    ctx->pc = 0x14BE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BE40u, 0x14C278u, 0x14C280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C280u;
label_14c280:
    // 0x14c280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c284: 0x3e00008  jr          $ra
    ctx->pc = 0x14C284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C284u;
        // 0x14c288: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C28Cu;
}
