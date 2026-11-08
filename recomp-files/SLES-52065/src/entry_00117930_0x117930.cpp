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

// Function: entry_00117930
// Address: 0x117930 - 0x117954
void entry_00117930_0x117930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117930_0x117930");
#endif

    switch (ctx->pc) {
        case 0x117938u: goto label_117938;
        default: break;
    }

    ctx->pc = 0x117930u;

    // 0x117930: 0xc082ae4  jal         func_20AB90
    ctx->pc = 0x117930u;
    SET_GPR_U32(ctx, 31, 0x117938u);
    ctx->pc = 0x20AB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AB90u, 0x117930u, 0x117938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117938u;
label_117938:
    // 0x117938: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x117938u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11793c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x11793cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x117940: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x117940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x117944: 0xaf838340  sw          $v1, -0x7CC0($gp)
    ctx->pc = 0x117944u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935360), GPR_U32(ctx, 3));
    // 0x117948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11794c: 0x3e00008  jr          $ra
    ctx->pc = 0x11794Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11794Cu;
        // 0x117950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11794Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117954u;
}
