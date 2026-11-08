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

// Function: entry_00130644
// Address: 0x130644 - 0x130664
void entry_00130644_0x130644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130644_0x130644");
#endif

    switch (ctx->pc) {
        case 0x130654u: goto label_130654;
        default: break;
    }

    ctx->pc = 0x130644u;

    // 0x130644: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x130644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x130648: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x130648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13064c: 0xc04c19c  jal         func_130670
    ctx->pc = 0x13064Cu;
    SET_GPR_U32(ctx, 31, 0x130654u);
    ctx->pc = 0x130650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13064Cu;
    // 0x130650: 0x24846280  addiu       $a0, $a0, 0x6280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130670u, 0x13064Cu, 0x130654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130654u;
label_130654:
    // 0x130654: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13065c: 0x3e00008  jr          $ra
    ctx->pc = 0x13065Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13065Cu;
        // 0x130660: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13065Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130664u;
}
