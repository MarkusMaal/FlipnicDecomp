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

// Function: entry_001bc9e4
// Address: 0x1bc9e4 - 0x1bca00
void entry_001bc9e4_0x1bc9e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc9e4_0x1bc9e4");
#endif

    switch (ctx->pc) {
        case 0x1bc9ecu: goto label_1bc9ec;
        default: break;
    }

    ctx->pc = 0x1bc9e4u;

    // 0x1bc9e4: 0xc06f460  jal         func_1BD180
    ctx->pc = 0x1BC9E4u;
    SET_GPR_U32(ctx, 31, 0x1BC9ECu);
    ctx->pc = 0x1BD180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD180u, 0x1BC9E4u, 0x1BC9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC9ECu;
label_1bc9ec:
    // 0x1bc9ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bc9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc9f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bc9f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc9f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bc9f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9F8u;
        // 0x1bc9fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCA00u;
}
