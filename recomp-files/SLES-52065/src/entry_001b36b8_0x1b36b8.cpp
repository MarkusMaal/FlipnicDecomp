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

// Function: entry_001b36b8
// Address: 0x1b36b8 - 0x1b36d4
void entry_001b36b8_0x1b36b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b36b8_0x1b36b8");
#endif

    switch (ctx->pc) {
        case 0x1b36c0u: goto label_1b36c0;
        default: break;
    }

    ctx->pc = 0x1b36b8u;

    // 0x1b36b8: 0xc06d118  jal         func_1B4460
    ctx->pc = 0x1B36B8u;
    SET_GPR_U32(ctx, 31, 0x1B36C0u);
    ctx->pc = 0x1B4460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4460u, 0x1B36B8u, 0x1B36C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B36C0u;
label_1b36c0:
    // 0x1b36c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b36c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b36c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b36c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b36c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b36c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b36cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B36CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B36D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B36CCu;
        // 0x1b36d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B36CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B36D4u;
}
