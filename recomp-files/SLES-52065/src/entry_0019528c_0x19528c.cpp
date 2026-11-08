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

// Function: entry_0019528c
// Address: 0x19528c - 0x1952b4
void entry_0019528c_0x19528c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019528c_0x19528c");
#endif

    switch (ctx->pc) {
        case 0x1952a4u: goto label_1952a4;
        case 0x1952b0u: goto label_1952b0;
        default: break;
    }

    ctx->pc = 0x19528cu;

    // 0x19528c: 0x0  nop
    ctx->pc = 0x19528cu;
    // NOP
    // 0x195290: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x195290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x195294: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x195294u;
    {
        const bool branch_taken_0x195294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195294) {
            ctx->pc = 0x1952B4u;
            return;
        }
    }
    ctx->pc = 0x19529Cu;
    // 0x19529c: 0xc047a50  jal         func_11E940
    ctx->pc = 0x19529Cu;
    SET_GPR_U32(ctx, 31, 0x1952A4u);
    ctx->pc = 0x11E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E940u, 0x19529Cu, 0x1952A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1952A4u;
label_1952a4:
    // 0x1952a4: 0x8f858700  lw          $a1, -0x7900($gp)
    ctx->pc = 0x1952a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
    // 0x1952a8: 0xc0478dc  jal         func_11E370
    ctx->pc = 0x1952A8u;
    SET_GPR_U32(ctx, 31, 0x1952B0u);
    ctx->pc = 0x1952ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1952A8u;
    // 0x1952ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E370u, 0x1952A8u, 0x1952B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1952B0u;
label_1952b0:
    // 0x1952b0: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x1952b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
    ctx->pc = 0x1952b4u;
}
