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

// Function: entry_001a0538
// Address: 0x1a0538 - 0x1a0540
void entry_001a0538_0x1a0538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0538_0x1a0538");
#endif

    ctx->pc = 0x1a0538u;

    // 0x1a0538: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A0538u;
    SET_GPR_U32(ctx, 31, 0x1A0540u);
    ctx->pc = 0x1A053Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0538u;
    // 0x1a053c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A0538u, 0x1A0540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0540u;
}
