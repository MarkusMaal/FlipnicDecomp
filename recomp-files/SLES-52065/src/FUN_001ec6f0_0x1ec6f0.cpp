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

// Function: FUN_001ec6f0
// Address: 0x1ec6f0 - 0x1ec720
void FUN_001ec6f0_0x1ec6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec6f0_0x1ec6f0");
#endif

    switch (ctx->pc) {
        case 0x1ec714u: goto label_1ec714;
        default: break;
    }

    ctx->pc = 0x1ec6f0u;

    // 0x1ec6f0: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1ec6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1ec6f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec6f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec6f8: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x1ec6f8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x1ec6fc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1ec6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1ec700: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1ec700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1ec704: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ec704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ec708: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ec708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ec70c: 0xc07ae94  jal         func_1EBA50
    ctx->pc = 0x1EC70Cu;
    SET_GPR_U32(ctx, 31, 0x1EC714u);
    ctx->pc = 0x1EC710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC70Cu;
    // 0x1ec710: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA50u, 0x1EC70Cu, 0x1EC714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC714u;
label_1ec714:
    // 0x1ec714: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec718: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC718u;
        // 0x1ec71c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC720u;
}
