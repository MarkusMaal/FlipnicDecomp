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

// Function: entry_00131a2c
// Address: 0x131a2c - 0x131a40
void entry_00131a2c_0x131a2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131a2c_0x131a2c");
#endif

    switch (ctx->pc) {
        case 0x131a38u: goto label_131a38;
        default: break;
    }

    ctx->pc = 0x131a2cu;

    // 0x131a2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x131a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131a30: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x131A30u;
    SET_GPR_U32(ctx, 31, 0x131A38u);
    ctx->pc = 0x131A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131A30u;
    // 0x131a34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x131A30u, 0x131A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A38u;
label_131a38:
    // 0x131a38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x131A38u;
    {
        const bool branch_taken_0x131a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131A38u;
        // 0x131a3c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131a38) {
            ctx->pc = 0x131A4Cu;
            return;
        }
    }
    ctx->pc = 0x131A40u;
}
