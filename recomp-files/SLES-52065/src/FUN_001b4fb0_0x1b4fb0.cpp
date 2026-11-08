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

// Function: FUN_001b4fb0
// Address: 0x1b4fb0 - 0x1b4ff4
void FUN_001b4fb0_0x1b4fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4fb0_0x1b4fb0");
#endif

    switch (ctx->pc) {
        case 0x1b4fc0u: goto label_1b4fc0;
        case 0x1b4fc8u: goto label_1b4fc8;
        case 0x1b4fd4u: goto label_1b4fd4;
        case 0x1b4fdcu: goto label_1b4fdc;
        case 0x1b4fe8u: goto label_1b4fe8;
        default: break;
    }

    ctx->pc = 0x1b4fb0u;

    // 0x1b4fb0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b4fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b4fb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4fb8: 0xc0740f0  jal         func_1D03C0
    ctx->pc = 0x1B4FB8u;
    SET_GPR_U32(ctx, 31, 0x1B4FC0u);
    ctx->pc = 0x1B4FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4FB8u;
    // 0x1b4fbc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D03C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D03C0u, 0x1B4FB8u, 0x1B4FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FC0u;
label_1b4fc0:
    // 0x1b4fc0: 0xc07418c  jal         func_1D0630
    ctx->pc = 0x1B4FC0u;
    SET_GPR_U32(ctx, 31, 0x1B4FC8u);
    ctx->pc = 0x1B4FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4FC0u;
    // 0x1b4fc4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0630u, 0x1B4FC0u, 0x1B4FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FC8u;
label_1b4fc8:
    // 0x1b4fc8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b4fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b4fcc: 0xc054660  jal         func_151980
    ctx->pc = 0x1B4FCCu;
    SET_GPR_U32(ctx, 31, 0x1B4FD4u);
    ctx->pc = 0x1B4FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4FCCu;
    // 0x1b4fd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x1B4FCCu, 0x1B4FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FD4u;
label_1b4fd4:
    // 0x1b4fd4: 0xc074190  jal         func_1D0640
    ctx->pc = 0x1B4FD4u;
    SET_GPR_U32(ctx, 31, 0x1B4FDCu);
    ctx->pc = 0x1B4FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4FD4u;
    // 0x1b4fd8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0640u, 0x1B4FD4u, 0x1B4FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FDCu;
label_1b4fdc:
    // 0x1b4fdc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b4fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b4fe0: 0xc074160  jal         func_1D0580
    ctx->pc = 0x1B4FE0u;
    SET_GPR_U32(ctx, 31, 0x1B4FE8u);
    ctx->pc = 0x1B4FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4FE0u;
    // 0x1b4fe4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0580u, 0x1B4FE0u, 0x1B4FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FE8u;
label_1b4fe8:
    // 0x1b4fe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4fec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FECu;
        // 0x1b4ff0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4FF4u;
}
