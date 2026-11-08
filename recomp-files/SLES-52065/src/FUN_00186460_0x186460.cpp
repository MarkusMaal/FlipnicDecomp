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

// Function: FUN_00186460
// Address: 0x186460 - 0x1864b0
void FUN_00186460_0x186460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00186460_0x186460");
#endif

    switch (ctx->pc) {
        case 0x18647cu: goto label_18647c;
        case 0x186494u: goto label_186494;
        default: break;
    }

    ctx->pc = 0x186460u;

    // 0x186460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186468: 0x838286dc  lb          $v0, -0x7924($gp)
    ctx->pc = 0x186468u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936284)));
    // 0x18646c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18646Cu;
    {
        const bool branch_taken_0x18646c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18646Cu;
        // 0x186470: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18646c) {
            ctx->pc = 0x18649Cu;
            goto label_18649c;
        }
    }
    ctx->pc = 0x186474u;
    // 0x186474: 0xc06192c  jal         func_1864B0
    ctx->pc = 0x186474u;
    SET_GPR_U32(ctx, 31, 0x18647Cu);
    ctx->pc = 0x186478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186474u;
    // 0x186478: 0x24849300  addiu       $a0, $a0, -0x6D00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1864B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1864B0u, 0x186474u, 0x18647Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18647Cu;
label_18647c:
    // 0x18647c: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x18647cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x186480: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x186480u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x186484: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x186484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186488: 0x24a56550  addiu       $a1, $a1, 0x6550
    ctx->pc = 0x186488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25936));
    // 0x18648c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x18648Cu;
    SET_GPR_U32(ctx, 31, 0x186494u);
    ctx->pc = 0x186490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18648Cu;
    // 0x186490: 0x24c692f0  addiu       $a2, $a2, -0x6D10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x18648Cu, 0x186494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186494u;
label_186494:
    // 0x186494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186498: 0xa38286dc  sb          $v0, -0x7924($gp)
    ctx->pc = 0x186498u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936284), (uint8_t)GPR_U32(ctx, 2));
label_18649c:
    // 0x18649c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18649cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1864a0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1864a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1864a4: 0x24429300  addiu       $v0, $v0, -0x6D00
    ctx->pc = 0x1864a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939392));
    // 0x1864a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1864A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1864ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1864A8u;
        // 0x1864ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1864A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1864B0u;
}
