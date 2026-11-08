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

// Function: entry_00121644
// Address: 0x121644 - 0x121650
void entry_00121644_0x121644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121644_0x121644");
#endif

    ctx->pc = 0x121644u;

    // 0x121644: 0x0  nop
    ctx->pc = 0x121644u;
    // NOP
    // 0x121648: 0xc0401a4  jal         func_100690
    ctx->pc = 0x121648u;
    SET_GPR_U32(ctx, 31, 0x121650u);
    ctx->pc = 0x12164Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121648u;
    // 0x12164c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x121648u, 0x121650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121650u;
}
