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

// Function: entry_0018c0cc
// Address: 0x18c0cc - 0x18c0e8
void entry_0018c0cc_0x18c0cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c0cc_0x18c0cc");
#endif

    switch (ctx->pc) {
        case 0x18c0d4u: goto label_18c0d4;
        default: break;
    }

    ctx->pc = 0x18c0ccu;

    // 0x18c0cc: 0xc052f7c  jal         func_14BDF0
    ctx->pc = 0x18C0CCu;
    SET_GPR_U32(ctx, 31, 0x18C0D4u);
    ctx->pc = 0x18C0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C0CCu;
    // 0x18c0d0: 0x262505c0  addiu       $a1, $s1, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BDF0u, 0x18C0CCu, 0x18C0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C0D4u;
label_18c0d4:
    // 0x18c0d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18c0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c0d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18c0d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c0dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c0dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x18C0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0E0u;
        // 0x18c0e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C0E8u;
}
