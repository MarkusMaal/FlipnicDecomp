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

// Function: entry_001b8a54
// Address: 0x1b8a54 - 0x1b8a74
void entry_001b8a54_0x1b8a54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8a54_0x1b8a54");
#endif

    switch (ctx->pc) {
        case 0x1b8a5cu: goto label_1b8a5c;
        default: break;
    }

    ctx->pc = 0x1b8a54u;

    // 0x1b8a54: 0xc06eb30  jal         func_1BACC0
    ctx->pc = 0x1B8A54u;
    SET_GPR_U32(ctx, 31, 0x1B8A5Cu);
    ctx->pc = 0x1B8A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8A54u;
    // 0x1b8a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BACC0u, 0x1B8A54u, 0x1B8A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8A5Cu;
label_1b8a5c:
    // 0x1b8a5c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1b8a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1b8a60: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x1b8a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x1b8a64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8a68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b8a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A6Cu;
        // 0x1b8a70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8A74u;
}
