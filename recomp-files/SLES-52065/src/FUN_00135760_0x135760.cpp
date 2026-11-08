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

// Function: FUN_00135760
// Address: 0x135760 - 0x135794
void FUN_00135760_0x135760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00135760_0x135760");
#endif

    switch (ctx->pc) {
        case 0x135784u: goto label_135784;
        default: break;
    }

    ctx->pc = 0x135760u;

    // 0x135760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x135760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x135764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x135764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x135768: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x135768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x13576c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13576Cu;
    {
        const bool branch_taken_0x13576c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x135770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13576Cu;
        // 0x135770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13576c) {
            ctx->pc = 0x13577Cu;
            goto label_13577c;
        }
    }
    ctx->pc = 0x135774u;
    // 0x135774: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x135774u;
    {
        const bool branch_taken_0x135774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135774u;
        // 0x135778: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135774) {
            ctx->pc = 0x13578Cu;
            goto label_13578c;
        }
    }
    ctx->pc = 0x13577Cu;
label_13577c:
    // 0x13577c: 0xc04e71c  jal         func_139C70
    ctx->pc = 0x13577Cu;
    SET_GPR_U32(ctx, 31, 0x135784u);
    ctx->pc = 0x139C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C70u, 0x13577Cu, 0x135784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135784u;
label_135784:
    // 0x135784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x135788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13578c:
    // 0x13578c: 0x3e00008  jr          $ra
    ctx->pc = 0x13578Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13578Cu;
        // 0x135790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13578Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135794u;
}
