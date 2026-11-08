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

// Function: entry_0015d308
// Address: 0x15d308 - 0x15d314
void entry_0015d308_0x15d308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d308_0x15d308");
#endif

    ctx->pc = 0x15d308u;

    // 0x15d308: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15d308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d30c: 0xc057620  jal         func_15D880
    ctx->pc = 0x15D30Cu;
    SET_GPR_U32(ctx, 31, 0x15D314u);
    ctx->pc = 0x15D310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D30Cu;
    // 0x15d310: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D880u, 0x15D30Cu, 0x15D314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D314u;
}
