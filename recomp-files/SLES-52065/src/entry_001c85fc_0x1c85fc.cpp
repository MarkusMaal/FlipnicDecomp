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

// Function: entry_001c85fc
// Address: 0x1c85fc - 0x1c8618
void entry_001c85fc_0x1c85fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c85fc_0x1c85fc");
#endif

    switch (ctx->pc) {
        case 0x1c8604u: goto label_1c8604;
        default: break;
    }

    ctx->pc = 0x1c85fcu;

    // 0x1c85fc: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1C85FCu;
    SET_GPR_U32(ctx, 31, 0x1C8604u);
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1C85FCu, 0x1C8604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8604u;
label_1c8604:
    // 0x1c8604: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c8604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8608: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c8608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c860c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c860cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8610: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8610u;
        // 0x1c8614: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8618u;
}
