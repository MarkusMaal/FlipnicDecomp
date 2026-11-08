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

// Function: entry_001f853c
// Address: 0x1f853c - 0x1f854c
void entry_001f853c_0x1f853c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f853c_0x1f853c");
#endif

    switch (ctx->pc) {
        case 0x1f8544u: goto label_1f8544;
        default: break;
    }

    ctx->pc = 0x1f853cu;

    // 0x1f853c: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F853Cu;
    SET_GPR_U32(ctx, 31, 0x1F8544u);
    ctx->pc = 0x1F8540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F853Cu;
    // 0x1f8540: 0x8e44d6bc  lw          $a0, -0x2944($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F853Cu, 0x1F8544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8544u;
label_1f8544:
    // 0x1f8544: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1F8544u;
    {
        const bool branch_taken_0x1f8544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8544u;
        // 0x1f8548: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8544) {
            ctx->pc = 0x1F85C4u;
            return;
        }
    }
    ctx->pc = 0x1F854Cu;
}
