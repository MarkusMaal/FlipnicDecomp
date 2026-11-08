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

// Function: entry_001ab364
// Address: 0x1ab364 - 0x1ab370
void entry_001ab364_0x1ab364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab364_0x1ab364");
#endif

    ctx->pc = 0x1ab364u;

    // 0x1ab364: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ab364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab368: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AB368u;
    SET_GPR_U32(ctx, 31, 0x1AB370u);
    ctx->pc = 0x1AB36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB368u;
    // 0x1ab36c: 0xae8006e0  sw          $zero, 0x6E0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1760), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AB368u, 0x1AB370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB370u;
}
