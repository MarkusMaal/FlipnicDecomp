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

// Function: entry_001db634
// Address: 0x1db634 - 0x1db64c
void entry_001db634_0x1db634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db634_0x1db634");
#endif

    switch (ctx->pc) {
        case 0x1db648u: goto label_1db648;
        default: break;
    }

    ctx->pc = 0x1db634u;

    // 0x1db634: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1db634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db638: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB638u;
    {
        const bool branch_taken_0x1db638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db638) {
            ctx->pc = 0x1DB63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB638u;
            // 0x1db63c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB64Cu;
            return;
        }
    }
    ctx->pc = 0x1DB640u;
    // 0x1db640: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1DB640u;
    SET_GPR_U32(ctx, 31, 0x1DB648u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1DB640u, 0x1DB648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB648u;
label_1db648:
    // 0x1db648: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1db648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1db64cu;
}
