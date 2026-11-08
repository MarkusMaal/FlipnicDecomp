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

// Function: entry_001b0838
// Address: 0x1b0838 - 0x1b0854
void entry_001b0838_0x1b0838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0838_0x1b0838");
#endif

    switch (ctx->pc) {
        case 0x1b084cu: goto label_1b084c;
        default: break;
    }

    ctx->pc = 0x1b0838u;

    // 0x1b0838: 0x8e920118  lw          $s2, 0x118($s4)
    ctx->pc = 0x1b0838u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x1b083c: 0x24117100  addiu       $s1, $zero, 0x7100
    ctx->pc = 0x1b083cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28928));
    // 0x1b0840: 0x8e96011c  lw          $s6, 0x11C($s4)
    ctx->pc = 0x1b0840u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x1b0844: 0xc04b7b4  jal         func_12DED0
    ctx->pc = 0x1B0844u;
    SET_GPR_U32(ctx, 31, 0x1B084Cu);
    ctx->pc = 0x1B0848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0844u;
    // 0x1b0848: 0x27b000d0  addiu       $s0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x1B0844u, 0x1B084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B084Cu;
label_1b084c:
    // 0x1b084c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1B084Cu;
    {
        const bool branch_taken_0x1b084c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B084Cu;
        // 0x1b0850: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b084c) {
            ctx->pc = 0x1B09D0u;
            return;
        }
    }
    ctx->pc = 0x1B0854u;
}
