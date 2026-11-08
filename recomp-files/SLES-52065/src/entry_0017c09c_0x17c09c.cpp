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

// Function: entry_0017c09c
// Address: 0x17c09c - 0x17c0a8
void entry_0017c09c_0x17c09c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c09c_0x17c09c");
#endif

    ctx->pc = 0x17c09cu;

    // 0x17c09c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17c09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c0a0: 0xc04187c  jal         func_1061F0
    ctx->pc = 0x17C0A0u;
    SET_GPR_U32(ctx, 31, 0x17C0A8u);
    ctx->pc = 0x17C0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C0A0u;
    // 0x17c0a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1061F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061F0u, 0x17C0A0u, 0x17C0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C0A8u;
}
