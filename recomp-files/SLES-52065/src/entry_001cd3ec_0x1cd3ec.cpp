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

// Function: entry_001cd3ec
// Address: 0x1cd3ec - 0x1cd408
void entry_001cd3ec_0x1cd3ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd3ec_0x1cd3ec");
#endif

    switch (ctx->pc) {
        case 0x1cd3f4u: goto label_1cd3f4;
        default: break;
    }

    ctx->pc = 0x1cd3ecu;

    // 0x1cd3ec: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1CD3ECu;
    SET_GPR_U32(ctx, 31, 0x1CD3F4u);
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1CD3ECu, 0x1CD3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD3F4u;
label_1cd3f4:
    // 0x1cd3f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cd3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd3f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cd3f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd3fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cd3fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd400: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD400u;
        // 0x1cd404: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD408u;
}
