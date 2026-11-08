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

// Function: entry_001f0bac
// Address: 0x1f0bac - 0x1f0bc0
void entry_001f0bac_0x1f0bac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0bac_0x1f0bac");
#endif

    switch (ctx->pc) {
        case 0x1f0bb4u: goto label_1f0bb4;
        case 0x1f0bbcu: goto label_1f0bbc;
        default: break;
    }

    ctx->pc = 0x1f0bacu;

    // 0x1f0bac: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F0BACu;
    SET_GPR_U32(ctx, 31, 0x1F0BB4u);
    ctx->pc = 0x1F0BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0BACu;
    // 0x1f0bb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F0BACu, 0x1F0BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0BB4u;
label_1f0bb4:
    // 0x1f0bb4: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0BB4u;
    SET_GPR_U32(ctx, 31, 0x1F0BBCu);
    ctx->pc = 0x1F0BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0BB4u;
    // 0x1f0bb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0BB4u, 0x1F0BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0BBCu;
label_1f0bbc:
    // 0x1f0bbc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f0bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1f0bc0u;
}
