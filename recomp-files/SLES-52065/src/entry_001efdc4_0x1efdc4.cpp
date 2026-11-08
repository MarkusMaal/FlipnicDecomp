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

// Function: entry_001efdc4
// Address: 0x1efdc4 - 0x1efdd8
void entry_001efdc4_0x1efdc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efdc4_0x1efdc4");
#endif

    switch (ctx->pc) {
        case 0x1efdccu: goto label_1efdcc;
        case 0x1efdd4u: goto label_1efdd4;
        default: break;
    }

    ctx->pc = 0x1efdc4u;

    // 0x1efdc4: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EFDC4u;
    SET_GPR_U32(ctx, 31, 0x1EFDCCu);
    ctx->pc = 0x1EFDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFDC4u;
    // 0x1efdc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EFDC4u, 0x1EFDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFDCCu;
label_1efdcc:
    // 0x1efdcc: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EFDCCu;
    SET_GPR_U32(ctx, 31, 0x1EFDD4u);
    ctx->pc = 0x1EFDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFDCCu;
    // 0x1efdd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EFDCCu, 0x1EFDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFDD4u;
label_1efdd4:
    // 0x1efdd4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1efdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1efdd8u;
}
