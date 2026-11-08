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

// Function: entry_0019b11c
// Address: 0x19b11c - 0x19b124
void entry_0019b11c_0x19b11c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b11c_0x19b11c");
#endif

    ctx->pc = 0x19b11cu;

    // 0x19b11c: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x19B11Cu;
    SET_GPR_U32(ctx, 31, 0x19B124u);
    ctx->pc = 0x19B120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B11Cu;
    // 0x19b120: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x19B11Cu, 0x19B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B124u;
}
