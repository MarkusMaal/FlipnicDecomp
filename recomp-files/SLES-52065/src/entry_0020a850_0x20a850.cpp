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

// Function: entry_0020a850
// Address: 0x20a850 - 0x20a864
void entry_0020a850_0x20a850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a850_0x20a850");
#endif

    switch (ctx->pc) {
        case 0x20a85cu: goto label_20a85c;
        default: break;
    }

    ctx->pc = 0x20a850u;

    // 0x20a850: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20a850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20a854: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20A854u;
    SET_GPR_U32(ctx, 31, 0x20A85Cu);
    ctx->pc = 0x20A858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A854u;
    // 0x20a858: 0x24845cb8  addiu       $a0, $a0, 0x5CB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20A854u, 0x20A85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A85Cu;
label_20a85c:
    // 0x20a85c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20A85Cu;
    {
        const bool branch_taken_0x20a85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A85Cu;
        // 0x20a860: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a85c) {
            ctx->pc = 0x20A88Cu;
            return;
        }
    }
    ctx->pc = 0x20A864u;
}
