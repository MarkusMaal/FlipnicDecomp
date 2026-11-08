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

// Function: entry_0011b310
// Address: 0x11b310 - 0x11b328
void entry_0011b310_0x11b310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b310_0x11b310");
#endif

    switch (ctx->pc) {
        case 0x11b318u: goto label_11b318;
        default: break;
    }

    ctx->pc = 0x11b310u;

    // 0x11b310: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x11B310u;
    SET_GPR_U32(ctx, 31, 0x11B318u);
    ctx->pc = 0x11B314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B310u;
    // 0x11b314: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x11B310u, 0x11B318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B318u;
label_11b318:
    // 0x11b318: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B318u;
    {
        const bool branch_taken_0x11b318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b318) {
            ctx->pc = 0x11B328u;
            return;
        }
    }
    ctx->pc = 0x11B320u;
    // 0x11b320: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11B320u;
    {
        const bool branch_taken_0x11b320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B320u;
        // 0x11b324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b320) {
            ctx->pc = 0x11B330u;
            return;
        }
    }
    ctx->pc = 0x11B328u;
}
