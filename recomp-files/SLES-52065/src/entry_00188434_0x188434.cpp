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

// Function: entry_00188434
// Address: 0x188434 - 0x188450
void entry_00188434_0x188434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188434_0x188434");
#endif

    switch (ctx->pc) {
        case 0x188444u: goto label_188444;
        default: break;
    }

    ctx->pc = 0x188434u;

    // 0x188434: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x188434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188438: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x188438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18843c: 0xc061fc0  jal         func_187F00
    ctx->pc = 0x18843Cu;
    SET_GPR_U32(ctx, 31, 0x188444u);
    ctx->pc = 0x188440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18843Cu;
    // 0x188440: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187F00u, 0x18843Cu, 0x188444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188444u;
label_188444:
    // 0x188444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188448: 0x3e00008  jr          $ra
    ctx->pc = 0x188448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188448u;
        // 0x18844c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188450u;
}
