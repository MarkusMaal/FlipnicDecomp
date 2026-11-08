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

// Function: entry_001b8864
// Address: 0x1b8864 - 0x1b8878
void entry_001b8864_0x1b8864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8864_0x1b8864");
#endif

    switch (ctx->pc) {
        case 0x1b8870u: goto label_1b8870;
        default: break;
    }

    ctx->pc = 0x1b8864u;

    // 0x1b8864: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1b8864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1b8868: 0xc06e26c  jal         func_1B89B0
    ctx->pc = 0x1B8868u;
    SET_GPR_U32(ctx, 31, 0x1B8870u);
    ctx->pc = 0x1B886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8868u;
    // 0x1b886c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B89B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B89B0u, 0x1B8868u, 0x1B8870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8870u;
label_1b8870:
    // 0x1b8870: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B8870u;
    SET_GPR_U32(ctx, 31, 0x1B8878u);
    ctx->pc = 0x1B8874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8870u;
    // 0x1b8874: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B8870u, 0x1B8878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8878u;
}
