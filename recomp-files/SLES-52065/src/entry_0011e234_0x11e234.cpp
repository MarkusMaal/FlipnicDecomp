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

// Function: entry_0011e234
// Address: 0x11e234 - 0x11e250
void entry_0011e234_0x11e234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e234_0x11e234");
#endif

    switch (ctx->pc) {
        case 0x11e23cu: goto label_11e23c;
        default: break;
    }

    ctx->pc = 0x11e234u;

    // 0x11e234: 0xc040150  jal         func_100540
    ctx->pc = 0x11E234u;
    SET_GPR_U32(ctx, 31, 0x11E23Cu);
    ctx->pc = 0x11E238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E234u;
    // 0x11e238: 0x8e0400c8  lw          $a0, 0xC8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E234u, 0x11E23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E23Cu;
label_11e23c:
    // 0x11e23c: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x11e23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x11e240: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E240u;
    {
        const bool branch_taken_0x11e240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e240) {
            ctx->pc = 0x11E250u;
            return;
        }
    }
    ctx->pc = 0x11E248u;
    // 0x11e248: 0xc040150  jal         func_100540
    ctx->pc = 0x11E248u;
    SET_GPR_U32(ctx, 31, 0x11E250u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E248u, 0x11E250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E250u;
}
