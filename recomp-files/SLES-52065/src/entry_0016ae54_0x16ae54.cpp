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

// Function: entry_0016ae54
// Address: 0x16ae54 - 0x16ae60
void entry_0016ae54_0x16ae54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ae54_0x16ae54");
#endif

    ctx->pc = 0x16ae54u;

    // 0x16ae54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16ae54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae58: 0xc042118  jal         func_108460
    ctx->pc = 0x16AE58u;
    SET_GPR_U32(ctx, 31, 0x16AE60u);
    ctx->pc = 0x16AE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE58u;
    // 0x16ae5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16AE58u, 0x16AE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE60u;
}
