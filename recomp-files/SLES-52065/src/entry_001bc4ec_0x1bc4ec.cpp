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

// Function: entry_001bc4ec
// Address: 0x1bc4ec - 0x1bc504
void entry_001bc4ec_0x1bc4ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc4ec_0x1bc4ec");
#endif

    switch (ctx->pc) {
        case 0x1bc4f4u: goto label_1bc4f4;
        default: break;
    }

    ctx->pc = 0x1bc4ecu;

    // 0x1bc4ec: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1BC4ECu;
    SET_GPR_U32(ctx, 31, 0x1BC4F4u);
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1BC4ECu, 0x1BC4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC4F4u;
label_1bc4f4:
    // 0x1bc4f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc4f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bc4f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC4FCu;
        // 0x1bc500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC504u;
}
