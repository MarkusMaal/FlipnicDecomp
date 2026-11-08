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

// Function: FUN_001b7700
// Address: 0x1b7700 - 0x1b7734
void FUN_001b7700_0x1b7700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7700_0x1b7700");
#endif

    switch (ctx->pc) {
        case 0x1b7714u: goto label_1b7714;
        case 0x1b7724u: goto label_1b7724;
        default: break;
    }

    ctx->pc = 0x1b7700u;

    // 0x1b7700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b7704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b7708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b770c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1B770Cu;
    SET_GPR_U32(ctx, 31, 0x1B7714u);
    ctx->pc = 0x1B7710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B770Cu;
    // 0x1b7710: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1B770Cu, 0x1B7714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7714u;
label_1b7714:
    // 0x1b7714: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b7714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7718: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b7718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b771c: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1B771Cu;
    SET_GPR_U32(ctx, 31, 0x1B7724u);
    ctx->pc = 0x1B7720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B771Cu;
    // 0x1b7720: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1B771Cu, 0x1B7724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7724u;
label_1b7724:
    // 0x1b7724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b772c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B772Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B772Cu;
        // 0x1b7730: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B772Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7734u;
}
