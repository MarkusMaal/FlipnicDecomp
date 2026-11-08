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

// Function: entry_0011b9bc
// Address: 0x11b9bc - 0x11b9d0
void entry_0011b9bc_0x11b9bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b9bc_0x11b9bc");
#endif

    switch (ctx->pc) {
        case 0x11b9c8u: goto label_11b9c8;
        default: break;
    }

    ctx->pc = 0x11b9bcu;

    // 0x11b9bc: 0x0  nop
    ctx->pc = 0x11b9bcu;
    // NOP
    // 0x11b9c0: 0xc07be92  jal         func_1EFA48
    ctx->pc = 0x11B9C0u;
    SET_GPR_U32(ctx, 31, 0x11B9C8u);
    ctx->pc = 0x11B9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B9C0u;
    // 0x11b9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFA48u, 0x11B9C0u, 0x11B9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B9C8u;
label_11b9c8:
    // 0x11b9c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11B9C8u;
    {
        const bool branch_taken_0x11b9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b9c8) {
            ctx->pc = 0x11B9ECu;
            return;
        }
    }
    ctx->pc = 0x11B9D0u;
}
