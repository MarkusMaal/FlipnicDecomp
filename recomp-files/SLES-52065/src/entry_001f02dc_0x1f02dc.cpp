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

// Function: entry_001f02dc
// Address: 0x1f02dc - 0x1f02f0
void entry_001f02dc_0x1f02dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f02dc_0x1f02dc");
#endif

    switch (ctx->pc) {
        case 0x1f02e4u: goto label_1f02e4;
        case 0x1f02ecu: goto label_1f02ec;
        default: break;
    }

    ctx->pc = 0x1f02dcu;

    // 0x1f02dc: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F02DCu;
    SET_GPR_U32(ctx, 31, 0x1F02E4u);
    ctx->pc = 0x1F02E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F02DCu;
    // 0x1f02e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F02DCu, 0x1F02E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F02E4u;
label_1f02e4:
    // 0x1f02e4: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F02E4u;
    SET_GPR_U32(ctx, 31, 0x1F02ECu);
    ctx->pc = 0x1F02E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F02E4u;
    // 0x1f02e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F02E4u, 0x1F02ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F02ECu;
label_1f02ec:
    // 0x1f02ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f02ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1f02f0u;
}
