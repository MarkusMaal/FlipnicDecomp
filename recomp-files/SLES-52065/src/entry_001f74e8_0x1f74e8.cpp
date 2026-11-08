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

// Function: entry_001f74e8
// Address: 0x1f74e8 - 0x1f74fc
void entry_001f74e8_0x1f74e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f74e8_0x1f74e8");
#endif

    switch (ctx->pc) {
        case 0x1f74f4u: goto label_1f74f4;
        default: break;
    }

    ctx->pc = 0x1f74e8u;

    // 0x1f74e8: 0x8ec4bb28  lw          $a0, -0x44D8($s6)
    ctx->pc = 0x1f74e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949672)));
    // 0x1f74ec: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F74ECu;
    SET_GPR_U32(ctx, 31, 0x1F74F4u);
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F74ECu, 0x1F74F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F74F4u;
label_1f74f4:
    // 0x1f74f4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1F74F4u;
    {
        const bool branch_taken_0x1f74f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F74F4u;
        // 0x1f74f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f74f4) {
            ctx->pc = 0x1F75B4u;
            return;
        }
    }
    ctx->pc = 0x1F74FCu;
}
