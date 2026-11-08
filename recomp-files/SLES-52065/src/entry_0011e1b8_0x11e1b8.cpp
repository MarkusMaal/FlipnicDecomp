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

// Function: entry_0011e1b8
// Address: 0x11e1b8 - 0x11e1dc
void entry_0011e1b8_0x11e1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e1b8_0x11e1b8");
#endif

    switch (ctx->pc) {
        case 0x11e1c0u: goto label_11e1c0;
        case 0x11e1c8u: goto label_11e1c8;
        default: break;
    }

    ctx->pc = 0x11e1b8u;

    // 0x11e1b8: 0xc040150  jal         func_100540
    ctx->pc = 0x11E1B8u;
    SET_GPR_U32(ctx, 31, 0x11E1C0u);
    ctx->pc = 0x11E1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E1B8u;
    // 0x11e1bc: 0x8e0400c8  lw          $a0, 0xC8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E1B8u, 0x11E1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E1C0u;
label_11e1c0:
    // 0x11e1c0: 0xc040150  jal         func_100540
    ctx->pc = 0x11E1C0u;
    SET_GPR_U32(ctx, 31, 0x11E1C8u);
    ctx->pc = 0x11E1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E1C0u;
    // 0x11e1c4: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E1C0u, 0x11E1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E1C8u;
label_11e1c8:
    // 0x11e1c8: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x11e1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x11e1cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E1CCu;
    {
        const bool branch_taken_0x11e1cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e1cc) {
            ctx->pc = 0x11E1DCu;
            return;
        }
    }
    ctx->pc = 0x11E1D4u;
    // 0x11e1d4: 0xc040150  jal         func_100540
    ctx->pc = 0x11E1D4u;
    SET_GPR_U32(ctx, 31, 0x11E1DCu);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E1D4u, 0x11E1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E1DCu;
}
