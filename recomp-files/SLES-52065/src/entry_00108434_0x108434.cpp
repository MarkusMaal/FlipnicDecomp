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

// Function: entry_00108434
// Address: 0x108434 - 0x108440
void entry_00108434_0x108434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108434_0x108434");
#endif

    ctx->pc = 0x108434u;

    // 0x108434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108438: 0xc042118  jal         func_108460
    ctx->pc = 0x108438u;
    SET_GPR_U32(ctx, 31, 0x108440u);
    ctx->pc = 0x10843Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108438u;
    // 0x10843c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x108438u, 0x108440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108440u;
}
