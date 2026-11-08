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

// Function: entry_001e5080
// Address: 0x1e5080 - 0x1e50a0
void entry_001e5080_0x1e5080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5080_0x1e5080");
#endif

    switch (ctx->pc) {
        case 0x1e5098u: goto label_1e5098;
        default: break;
    }

    ctx->pc = 0x1e5080u;

    // 0x1e5080: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5080u;
    {
        const bool branch_taken_0x1e5080 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E5084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5080u;
        // 0x1e5084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5080) {
            ctx->pc = 0x1E50A0u;
            return;
        }
    }
    ctx->pc = 0x1E5088u;
    // 0x1e5088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e508c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e508cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5090: 0xc0798e4  jal         func_1E6390
    ctx->pc = 0x1E5090u;
    SET_GPR_U32(ctx, 31, 0x1E5098u);
    ctx->pc = 0x1E5094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5090u;
    // 0x1e5094: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6390u, 0x1E5090u, 0x1E5098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5098u;
label_1e5098:
    // 0x1e5098: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5098u;
    {
        const bool branch_taken_0x1e5098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5098) {
            ctx->pc = 0x1E50A8u;
            return;
        }
    }
    ctx->pc = 0x1E50A0u;
}
