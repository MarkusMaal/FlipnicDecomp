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

// Function: entry_0015c4e0
// Address: 0x15c4e0 - 0x15c500
void entry_0015c4e0_0x15c4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c4e0_0x15c4e0");
#endif

    switch (ctx->pc) {
        case 0x15c4f0u: goto label_15c4f0;
        default: break;
    }

    ctx->pc = 0x15c4e0u;

    // 0x15c4e0: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x15c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x15c4e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15c4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15c4e8: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x15C4E8u;
    SET_GPR_U32(ctx, 31, 0x15C4F0u);
    ctx->pc = 0x15C4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C4E8u;
    // 0x15c4ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x15C4E8u, 0x15C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C4F0u;
label_15c4f0:
    // 0x15c4f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C4F0u;
    {
        const bool branch_taken_0x15c4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c4f0) {
            ctx->pc = 0x15C500u;
            return;
        }
    }
    ctx->pc = 0x15C4F8u;
    // 0x15c4f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15C4F8u;
    {
        const bool branch_taken_0x15c4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4F8u;
        // 0x15c4fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4f8) {
            ctx->pc = 0x15C530u;
            return;
        }
    }
    ctx->pc = 0x15C500u;
}
