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

// Function: entry_0016b7d4
// Address: 0x16b7d4 - 0x16b7e4
void entry_0016b7d4_0x16b7d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b7d4_0x16b7d4");
#endif

    switch (ctx->pc) {
        case 0x16b7dcu: goto label_16b7dc;
        default: break;
    }

    ctx->pc = 0x16b7d4u;

    // 0x16b7d4: 0xc042118  jal         func_108460
    ctx->pc = 0x16B7D4u;
    SET_GPR_U32(ctx, 31, 0x16B7DCu);
    ctx->pc = 0x16B7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B7D4u;
    // 0x16b7d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16B7D4u, 0x16B7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B7DCu;
label_16b7dc:
    // 0x16b7dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16B7DCu;
    {
        const bool branch_taken_0x16b7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b7dc) {
            ctx->pc = 0x16B7ECu;
            return;
        }
    }
    ctx->pc = 0x16B7E4u;
}
