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

// Function: FUN_0018a6f0
// Address: 0x18a6f0 - 0x18a728
void FUN_0018a6f0_0x18a6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018a6f0_0x18a6f0");
#endif

    switch (ctx->pc) {
        case 0x18a708u: goto label_18a708;
        case 0x18a710u: goto label_18a710;
        default: break;
    }

    ctx->pc = 0x18a6f0u;

    // 0x18a6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18a6f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18a6f8: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A6F8u;
    {
        const bool branch_taken_0x18a6f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x18A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A6F8u;
        // 0x18a6fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a6f8) {
            ctx->pc = 0x18A710u;
            goto label_18a710;
        }
    }
    ctx->pc = 0x18A700u;
    // 0x18a700: 0xc07ad60  jal         func_1EB580
    ctx->pc = 0x18A700u;
    SET_GPR_U32(ctx, 31, 0x18A708u);
    ctx->pc = 0x18A704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A700u;
    // 0x18a704: 0x8f8486e8  lw          $a0, -0x7918($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB580u, 0x18A700u, 0x18A708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A708u;
label_18a708:
    // 0x18a708: 0xc07b134  jal         func_1EC4D0
    ctx->pc = 0x18A708u;
    SET_GPR_U32(ctx, 31, 0x18A710u);
    ctx->pc = 0x18A70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A708u;
    // 0x18a70c: 0x8f8486e8  lw          $a0, -0x7918($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC4D0u, 0x18A708u, 0x18A710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A710u;
label_18a710:
    // 0x18a710: 0xf  sync
    ctx->pc = 0x18a710u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x18a714: 0x42000038  ei
    ctx->pc = 0x18a714u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x18a718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a71c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a720: 0x3e00008  jr          $ra
    ctx->pc = 0x18A720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A720u;
        // 0x18a724: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A728u;
}
