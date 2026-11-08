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

// Function: FUN_0011e8f0
// Address: 0x11e8f0 - 0x11e940
void FUN_0011e8f0_0x11e8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011e8f0_0x11e8f0");
#endif

    switch (ctx->pc) {
        case 0x11e90cu: goto label_11e90c;
        case 0x11e924u: goto label_11e924;
        default: break;
    }

    ctx->pc = 0x11e8f0u;

    // 0x11e8f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11e8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11e8f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11e8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11e8f8: 0x838283f8  lb          $v0, -0x7C08($gp)
    ctx->pc = 0x11e8f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935544)));
    // 0x11e8fc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11E8FCu;
    {
        const bool branch_taken_0x11e8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E8FCu;
        // 0x11e900: 0x3c04002b  lui         $a0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e8fc) {
            ctx->pc = 0x11E92Cu;
            goto label_11e92c;
        }
    }
    ctx->pc = 0x11E904u;
    // 0x11e904: 0xc04698c  jal         func_11A630
    ctx->pc = 0x11E904u;
    SET_GPR_U32(ctx, 31, 0x11E90Cu);
    ctx->pc = 0x11E908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E904u;
    // 0x11e908: 0x2484fc50  addiu       $a0, $a0, -0x3B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A630u, 0x11E904u, 0x11E90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E90Cu;
label_11e90c:
    // 0x11e90c: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x11e90cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x11e910: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x11e910u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x11e914: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e918: 0x24a5a8a0  addiu       $a1, $a1, -0x5760
    ctx->pc = 0x11e918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944928));
    // 0x11e91c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x11E91Cu;
    SET_GPR_U32(ctx, 31, 0x11E924u);
    ctx->pc = 0x11E920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E91Cu;
    // 0x11e920: 0x24c6fc40  addiu       $a2, $a2, -0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x11E91Cu, 0x11E924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E924u;
label_11e924:
    // 0x11e924: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e928: 0xa38283f8  sb          $v0, -0x7C08($gp)
    ctx->pc = 0x11e928u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935544), (uint8_t)GPR_U32(ctx, 2));
label_11e92c:
    // 0x11e92c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e930: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x11e930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x11e934: 0x2442fc50  addiu       $v0, $v0, -0x3B0
    ctx->pc = 0x11e934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966352));
    // 0x11e938: 0x3e00008  jr          $ra
    ctx->pc = 0x11E938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E938u;
        // 0x11e93c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E940u;
}
