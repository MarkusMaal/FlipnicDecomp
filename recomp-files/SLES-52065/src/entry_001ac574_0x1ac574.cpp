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

// Function: entry_001ac574
// Address: 0x1ac574 - 0x1ac580
void entry_001ac574_0x1ac574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac574_0x1ac574");
#endif

    ctx->pc = 0x1ac574u;

    // 0x1ac574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac578: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AC578u;
    SET_GPR_U32(ctx, 31, 0x1AC580u);
    ctx->pc = 0x1AC57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC578u;
    // 0x1ac57c: 0xae2006e0  sw          $zero, 0x6E0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1760), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AC578u, 0x1AC580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC580u;
}
