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

// Function: entry_001f2e0c
// Address: 0x1f2e0c - 0x1f2e20
void entry_001f2e0c_0x1f2e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2e0c_0x1f2e0c");
#endif

    switch (ctx->pc) {
        case 0x1f2e18u: goto label_1f2e18;
        default: break;
    }

    ctx->pc = 0x1f2e0cu;

    // 0x1f2e0c: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x1f2e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x1f2e10: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1F2E10u;
    SET_GPR_U32(ctx, 31, 0x1F2E18u);
    ctx->pc = 0x1F2E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2E10u;
    // 0x1f2e14: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1F2E10u, 0x1F2E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E18u;
label_1f2e18:
    // 0x1f2e18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F2E18u;
    {
        const bool branch_taken_0x1f2e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E18u;
        // 0x1f2e1c: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2e18) {
            ctx->pc = 0x1F2E24u;
            return;
        }
    }
    ctx->pc = 0x1F2E20u;
}
