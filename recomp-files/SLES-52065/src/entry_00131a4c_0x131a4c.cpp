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

// Function: entry_00131a4c
// Address: 0x131a4c - 0x131a60
void entry_00131a4c_0x131a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131a4c_0x131a4c");
#endif

    switch (ctx->pc) {
        case 0x131a58u: goto label_131a58;
        default: break;
    }

    ctx->pc = 0x131a4cu;

    // 0x131a4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x131a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131a50: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x131A50u;
    SET_GPR_U32(ctx, 31, 0x131A58u);
    ctx->pc = 0x131A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131A50u;
    // 0x131a54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x131A50u, 0x131A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A58u;
label_131a58:
    // 0x131a58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x131A58u;
    {
        const bool branch_taken_0x131a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131A58u;
        // 0x131a5c: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131a58) {
            ctx->pc = 0x131A6Cu;
            return;
        }
    }
    ctx->pc = 0x131A60u;
}
