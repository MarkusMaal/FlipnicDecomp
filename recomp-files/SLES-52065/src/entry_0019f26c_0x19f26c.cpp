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

// Function: entry_0019f26c
// Address: 0x19f26c - 0x19f27c
void entry_0019f26c_0x19f26c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f26c_0x19f26c");
#endif

    switch (ctx->pc) {
        case 0x19f274u: goto label_19f274;
        default: break;
    }

    ctx->pc = 0x19f26cu;

    // 0x19f26c: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19F26Cu;
    SET_GPR_U32(ctx, 31, 0x19F274u);
    ctx->pc = 0x19F270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F26Cu;
    // 0x19f270: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F26Cu, 0x19F274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F274u;
label_19f274:
    // 0x19f274: 0x100001d3  b           . + 4 + (0x1D3 << 2)
    ctx->pc = 0x19F274u;
    {
        const bool branch_taken_0x19f274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f274) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F27Cu;
}
