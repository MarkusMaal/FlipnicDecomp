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

// Function: entry_00135590
// Address: 0x135590 - 0x1355ac
void entry_00135590_0x135590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135590_0x135590");
#endif

    switch (ctx->pc) {
        case 0x13559cu: goto label_13559c;
        default: break;
    }

    ctx->pc = 0x135590u;

    // 0x135590: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x135590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x135594: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x135594u;
    SET_GPR_U32(ctx, 31, 0x13559Cu);
    ctx->pc = 0x135598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135594u;
    // 0x135598: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x135594u, 0x13559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13559Cu;
label_13559c:
    // 0x13559c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13559Cu;
    {
        const bool branch_taken_0x13559c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13559c) {
            ctx->pc = 0x1355ACu;
            return;
        }
    }
    ctx->pc = 0x1355A4u;
    // 0x1355a4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1355A4u;
    {
        const bool branch_taken_0x1355a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1355A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1355A4u;
        // 0x1355a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1355a4) {
            ctx->pc = 0x13565Cu;
            return;
        }
    }
    ctx->pc = 0x1355ACu;
}
