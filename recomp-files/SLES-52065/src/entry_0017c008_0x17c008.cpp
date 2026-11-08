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

// Function: entry_0017c008
// Address: 0x17c008 - 0x17c020
void entry_0017c008_0x17c008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c008_0x17c008");
#endif

    switch (ctx->pc) {
        case 0x17c010u: goto label_17c010;
        default: break;
    }

    ctx->pc = 0x17c008u;

    // 0x17c008: 0xc05852c  jal         func_1614B0
    ctx->pc = 0x17C008u;
    SET_GPR_U32(ctx, 31, 0x17C010u);
    ctx->pc = 0x17C00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C008u;
    // 0x17c00c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1614B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1614B0u, 0x17C008u, 0x17C010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C010u;
label_17c010:
    // 0x17c010: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17c014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c018: 0x3e00008  jr          $ra
    ctx->pc = 0x17C018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C018u;
        // 0x17c01c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C020u;
}
