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

// Function: entry_0015d78c
// Address: 0x15d78c - 0x15d798
void entry_0015d78c_0x15d78c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d78c_0x15d78c");
#endif

    ctx->pc = 0x15d78cu;

    // 0x15d78c: 0x0  nop
    ctx->pc = 0x15d78cu;
    // NOP
    // 0x15d790: 0xc0401a4  jal         func_100690
    ctx->pc = 0x15D790u;
    SET_GPR_U32(ctx, 31, 0x15D798u);
    ctx->pc = 0x15D794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D790u;
    // 0x15d794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x15D790u, 0x15D798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D798u;
}
