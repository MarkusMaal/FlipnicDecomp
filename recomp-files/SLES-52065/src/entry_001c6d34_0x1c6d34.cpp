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

// Function: entry_001c6d34
// Address: 0x1c6d34 - 0x1c6d44
void entry_001c6d34_0x1c6d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6d34_0x1c6d34");
#endif

    switch (ctx->pc) {
        case 0x1c6d3cu: goto label_1c6d3c;
        default: break;
    }

    ctx->pc = 0x1c6d34u;

    // 0x1c6d34: 0xc071e44  jal         func_1C7910
    ctx->pc = 0x1C6D34u;
    SET_GPR_U32(ctx, 31, 0x1C6D3Cu);
    ctx->pc = 0x1C6D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6D34u;
    // 0x1c6d38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7910u, 0x1C6D34u, 0x1C6D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D3Cu;
label_1c6d3c:
    // 0x1c6d3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6D3Cu;
    {
        const bool branch_taken_0x1c6d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6d3c) {
            ctx->pc = 0x1C6D48u;
            return;
        }
    }
    ctx->pc = 0x1C6D44u;
}
