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

// Function: entry_001b9764
// Address: 0x1b9764 - 0x1b9774
void entry_001b9764_0x1b9764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9764_0x1b9764");
#endif

    switch (ctx->pc) {
        case 0x1b976cu: goto label_1b976c;
        default: break;
    }

    ctx->pc = 0x1b9764u;

    // 0x1b9764: 0xc06e5ec  jal         func_1B97B0
    ctx->pc = 0x1B9764u;
    SET_GPR_U32(ctx, 31, 0x1B976Cu);
    ctx->pc = 0x1B9768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9764u;
    // 0x1b9768: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97B0u, 0x1B9764u, 0x1B976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B976Cu;
label_1b976c:
    // 0x1b976c: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B976Cu;
    SET_GPR_U32(ctx, 31, 0x1B9774u);
    ctx->pc = 0x1B9770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B976Cu;
    // 0x1b9770: 0x27a4002c  addiu       $a0, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B976Cu, 0x1B9774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9774u;
}
