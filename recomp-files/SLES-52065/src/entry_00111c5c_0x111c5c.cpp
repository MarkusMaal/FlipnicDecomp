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

// Function: entry_00111c5c
// Address: 0x111c5c - 0x111c68
void entry_00111c5c_0x111c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111c5c_0x111c5c");
#endif

    switch (ctx->pc) {
        case 0x111c64u: goto label_111c64;
        default: break;
    }

    ctx->pc = 0x111c5cu;

    // 0x111c5c: 0xc043f10  jal         func_10FC40
    ctx->pc = 0x111C5Cu;
    SET_GPR_U32(ctx, 31, 0x111C64u);
    ctx->pc = 0x111C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111C5Cu;
    // 0x111c60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC40u, 0x111C5Cu, 0x111C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111C64u;
label_111c64:
    // 0x111c64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x111c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x111c68u;
}
