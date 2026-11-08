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

// Function: entry_0011c144
// Address: 0x11c144 - 0x11c164
void entry_0011c144_0x11c144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c144_0x11c144");
#endif

    switch (ctx->pc) {
        case 0x11c14cu: goto label_11c14c;
        default: break;
    }

    ctx->pc = 0x11c144u;

    // 0x11c144: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x11C144u;
    SET_GPR_U32(ctx, 31, 0x11C14Cu);
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x11C144u, 0x11C14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C14Cu;
label_11c14c:
    // 0x11c14c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11c14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c150: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x11c150u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c154: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11c154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c158: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11c158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c15c: 0x3e00008  jr          $ra
    ctx->pc = 0x11C15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C15Cu;
        // 0x11c160: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C164u;
}
