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

// Function: entry_001ef834
// Address: 0x1ef834 - 0x1ef858
void entry_001ef834_0x1ef834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef834_0x1ef834");
#endif

    switch (ctx->pc) {
        case 0x1ef83cu: goto label_1ef83c;
        case 0x1ef84cu: goto label_1ef84c;
        default: break;
    }

    ctx->pc = 0x1ef834u;

    // 0x1ef834: 0xc07bdbe  jal         func_1EF6F8
    ctx->pc = 0x1EF834u;
    SET_GPR_U32(ctx, 31, 0x1EF83Cu);
    ctx->pc = 0x1EF6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF6F8u, 0x1EF834u, 0x1EF83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF83Cu;
label_1ef83c:
    // 0x1ef83c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF83Cu;
    {
        const bool branch_taken_0x1ef83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef83c) {
            ctx->pc = 0x1EF858u;
            return;
        }
    }
    ctx->pc = 0x1EF844u;
    // 0x1ef844: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EF844u;
    SET_GPR_U32(ctx, 31, 0x1EF84Cu);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EF844u, 0x1EF84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF84Cu;
label_1ef84c:
    // 0x1ef84c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ef84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1ef850: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1EF850u;
    {
        const bool branch_taken_0x1ef850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF850u;
        // 0x1ef854: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef850) {
            ctx->pc = 0x1EFA14u;
            return;
        }
    }
    ctx->pc = 0x1EF858u;
}
