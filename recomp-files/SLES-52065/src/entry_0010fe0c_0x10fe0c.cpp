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

// Function: entry_0010fe0c
// Address: 0x10fe0c - 0x10fe18
void entry_0010fe0c_0x10fe0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fe0c_0x10fe0c");
#endif

    switch (ctx->pc) {
        case 0x10fe14u: goto label_10fe14;
        default: break;
    }

    ctx->pc = 0x10fe0cu;

    // 0x10fe0c: 0xc043f10  jal         func_10FC40
    ctx->pc = 0x10FE0Cu;
    SET_GPR_U32(ctx, 31, 0x10FE14u);
    ctx->pc = 0x10FE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE0Cu;
    // 0x10fe10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC40u, 0x10FE0Cu, 0x10FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE14u;
label_10fe14:
    // 0x10fe14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10fe14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x10fe18u;
}
