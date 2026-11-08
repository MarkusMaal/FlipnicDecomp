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

// Function: FUN_001b4f70
// Address: 0x1b4f70 - 0x1b4fb0
void FUN_001b4f70_0x1b4f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4f70_0x1b4f70");
#endif

    switch (ctx->pc) {
        case 0x1b4f80u: goto label_1b4f80;
        case 0x1b4f8cu: goto label_1b4f8c;
        case 0x1b4f98u: goto label_1b4f98;
        case 0x1b4fa4u: goto label_1b4fa4;
        default: break;
    }

    ctx->pc = 0x1b4f70u;

    // 0x1b4f70: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b4f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b4f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4f78: 0xc06d4e0  jal         func_1B5380
    ctx->pc = 0x1B4F78u;
    SET_GPR_U32(ctx, 31, 0x1B4F80u);
    ctx->pc = 0x1B4F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F78u;
    // 0x1b4f7c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5380u, 0x1B4F78u, 0x1B4F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F80u;
label_1b4f80:
    // 0x1b4f80: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b4f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b4f84: 0xc06d554  jal         func_1B5550
    ctx->pc = 0x1B4F84u;
    SET_GPR_U32(ctx, 31, 0x1B4F8Cu);
    ctx->pc = 0x1B4F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F84u;
    // 0x1b4f88: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5550u, 0x1B4F84u, 0x1B4F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F8Cu;
label_1b4f8c:
    // 0x1b4f8c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b4f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b4f90: 0xc054660  jal         func_151980
    ctx->pc = 0x1B4F90u;
    SET_GPR_U32(ctx, 31, 0x1B4F98u);
    ctx->pc = 0x1B4F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F90u;
    // 0x1b4f94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x1B4F90u, 0x1B4F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F98u;
label_1b4f98:
    // 0x1b4f98: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b4f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b4f9c: 0xc06d508  jal         func_1B5420
    ctx->pc = 0x1B4F9Cu;
    SET_GPR_U32(ctx, 31, 0x1B4FA4u);
    ctx->pc = 0x1B4FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F9Cu;
    // 0x1b4fa0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5420u, 0x1B4F9Cu, 0x1B4FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FA4u;
label_1b4fa4:
    // 0x1b4fa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FA8u;
        // 0x1b4fac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4FB0u;
}
