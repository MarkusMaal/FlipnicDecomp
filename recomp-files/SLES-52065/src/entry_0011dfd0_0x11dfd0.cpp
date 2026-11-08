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

// Function: entry_0011dfd0
// Address: 0x11dfd0 - 0x11dff4
void entry_0011dfd0_0x11dfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dfd0_0x11dfd0");
#endif

    switch (ctx->pc) {
        case 0x11dfd8u: goto label_11dfd8;
        default: break;
    }

    ctx->pc = 0x11dfd0u;

    // 0x11dfd0: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11DFD0u;
    SET_GPR_U32(ctx, 31, 0x11DFD8u);
    ctx->pc = 0x11DFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DFD0u;
    // 0x11dfd4: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11DFD0u, 0x11DFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DFD8u;
label_11dfd8:
    // 0x11dfd8: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x11dfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x11dfdc: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x11dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x11dfe0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DFE0u;
    {
        const bool branch_taken_0x11dfe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFE0u;
        // 0x11dfe4: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfe0) {
            ctx->pc = 0x11DFF4u;
            return;
        }
    }
    ctx->pc = 0x11DFE8u;
    // 0x11dfe8: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x11dfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x11dfec: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x11DFECu;
    SET_GPR_U32(ctx, 31, 0x11DFF4u);
    ctx->pc = 0x11DFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DFECu;
    // 0x11dff0: 0x2484e8d0  addiu       $a0, $a0, -0x1730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x11DFECu, 0x11DFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DFF4u;
}
