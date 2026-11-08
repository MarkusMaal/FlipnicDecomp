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

// Function: FUN_001ce510
// Address: 0x1ce510 - 0x1ce568
void FUN_001ce510_0x1ce510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ce510_0x1ce510");
#endif

    switch (ctx->pc) {
        case 0x1ce530u: goto label_1ce530;
        case 0x1ce544u: goto label_1ce544;
        case 0x1ce558u: goto label_1ce558;
        default: break;
    }

    ctx->pc = 0x1ce510u;

    // 0x1ce510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ce510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ce514: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ce514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ce518: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ce518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ce51c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ce51cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce520: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ce520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ce524: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x1ce524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ce528: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1CE528u;
    SET_GPR_U32(ctx, 31, 0x1CE530u);
    ctx->pc = 0x1CE52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE528u;
    // 0x1ce52c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1CE528u, 0x1CE530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE530u;
label_1ce530:
    // 0x1ce530: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ce530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ce534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce538: 0x24a58da0  addiu       $a1, $a1, -0x7260
    ctx->pc = 0x1ce538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938016));
    // 0x1ce53c: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CE53Cu;
    SET_GPR_U32(ctx, 31, 0x1CE544u);
    ctx->pc = 0x1CE540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE53Cu;
    // 0x1ce540: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CE53Cu, 0x1CE544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE544u;
label_1ce544:
    // 0x1ce544: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ce544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ce548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce54c: 0x24a58ef0  addiu       $a1, $a1, -0x7110
    ctx->pc = 0x1ce54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938352));
    // 0x1ce550: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CE550u;
    SET_GPR_U32(ctx, 31, 0x1CE558u);
    ctx->pc = 0x1CE554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE550u;
    // 0x1ce554: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CE550u, 0x1CE558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE558u;
label_1ce558:
    // 0x1ce558: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ce558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce55c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ce55cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce560: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE560u;
        // 0x1ce564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE568u;
}
