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

// Function: entry_0011e34c
// Address: 0x11e34c - 0x11e368
void entry_0011e34c_0x11e34c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e34c_0x11e34c");
#endif

    switch (ctx->pc) {
        case 0x11e354u: goto label_11e354;
        default: break;
    }

    ctx->pc = 0x11e34cu;

    // 0x11e34c: 0xc040150  jal         func_100540
    ctx->pc = 0x11E34Cu;
    SET_GPR_U32(ctx, 31, 0x11E354u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E34Cu, 0x11E354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E354u;
label_11e354:
    // 0x11e354: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11e354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e358: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11e358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e35c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11e35cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e360: 0x3e00008  jr          $ra
    ctx->pc = 0x11E360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E360u;
        // 0x11e364: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E368u;
}
