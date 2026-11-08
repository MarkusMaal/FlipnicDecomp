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

// Function: entry_0011b18c
// Address: 0x11b18c - 0x11b198
void entry_0011b18c_0x11b18c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b18c_0x11b18c");
#endif

    switch (ctx->pc) {
        case 0x11b194u: goto label_11b194;
        default: break;
    }

    ctx->pc = 0x11b18cu;

    // 0x11b18c: 0xc040150  jal         func_100540
    ctx->pc = 0x11B18Cu;
    SET_GPR_U32(ctx, 31, 0x11B194u);
    ctx->pc = 0x11B190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B18Cu;
    // 0x11b190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11B18Cu, 0x11B194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B194u;
label_11b194:
    // 0x11b194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11b194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x11b198u;
}
