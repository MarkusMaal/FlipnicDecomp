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

// Function: FUN_001b4f30
// Address: 0x1b4f30 - 0x1b4f70
void FUN_001b4f30_0x1b4f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4f30_0x1b4f30");
#endif

    switch (ctx->pc) {
        case 0x1b4f40u: goto label_1b4f40;
        case 0x1b4f4cu: goto label_1b4f4c;
        case 0x1b4f58u: goto label_1b4f58;
        case 0x1b4f64u: goto label_1b4f64;
        default: break;
    }

    ctx->pc = 0x1b4f30u;

    // 0x1b4f30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b4f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b4f34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4f38: 0xc06d4e0  jal         func_1B5380
    ctx->pc = 0x1B4F38u;
    SET_GPR_U32(ctx, 31, 0x1B4F40u);
    ctx->pc = 0x1B4F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F38u;
    // 0x1b4f3c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5380u, 0x1B4F38u, 0x1B4F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F40u;
label_1b4f40:
    // 0x1b4f40: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b4f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b4f44: 0xc06d554  jal         func_1B5550
    ctx->pc = 0x1B4F44u;
    SET_GPR_U32(ctx, 31, 0x1B4F4Cu);
    ctx->pc = 0x1B4F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F44u;
    // 0x1b4f48: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5550u, 0x1B4F44u, 0x1B4F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F4Cu;
label_1b4f4c:
    // 0x1b4f4c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b4f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b4f50: 0xc054660  jal         func_151980
    ctx->pc = 0x1B4F50u;
    SET_GPR_U32(ctx, 31, 0x1B4F58u);
    ctx->pc = 0x1B4F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F50u;
    // 0x1b4f54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x1B4F50u, 0x1B4F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F58u;
label_1b4f58:
    // 0x1b4f58: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b4f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b4f5c: 0xc06d508  jal         func_1B5420
    ctx->pc = 0x1B4F5Cu;
    SET_GPR_U32(ctx, 31, 0x1B4F64u);
    ctx->pc = 0x1B4F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F5Cu;
    // 0x1b4f60: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5420u, 0x1B4F5Cu, 0x1B4F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F64u;
label_1b4f64:
    // 0x1b4f64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4f68: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F68u;
        // 0x1b4f6c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4F70u;
}
