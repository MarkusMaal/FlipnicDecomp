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

// Function: entry_0016b7e4
// Address: 0x16b7e4 - 0x16b7ec
void entry_0016b7e4_0x16b7e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b7e4_0x16b7e4");
#endif

    ctx->pc = 0x16b7e4u;

    // 0x16b7e4: 0xc042118  jal         func_108460
    ctx->pc = 0x16B7E4u;
    SET_GPR_U32(ctx, 31, 0x16B7ECu);
    ctx->pc = 0x16B7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B7E4u;
    // 0x16b7e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16B7E4u, 0x16B7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B7ECu;
}
