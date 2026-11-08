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

// Function: entry_001e9bbc
// Address: 0x1e9bbc - 0x1e9bcc
void entry_001e9bbc_0x1e9bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9bbc_0x1e9bbc");
#endif

    switch (ctx->pc) {
        case 0x1e9bc4u: goto label_1e9bc4;
        default: break;
    }

    ctx->pc = 0x1e9bbcu;

    // 0x1e9bbc: 0xc07aa0c  jal         func_1EA830
    ctx->pc = 0x1E9BBCu;
    SET_GPR_U32(ctx, 31, 0x1E9BC4u);
    ctx->pc = 0x1EA830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA830u, 0x1E9BBCu, 0x1E9BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9BC4u;
label_1e9bc4:
    // 0x1e9bc4: 0x1000ff85  b           . + 4 + (-0x7B << 2)
    ctx->pc = 0x1E9BC4u;
    {
        const bool branch_taken_0x1e9bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9BC4u;
        // 0x1e9bc8: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9bc4) {
            ctx->pc = 0x1E99DCu;
            return;
        }
    }
    ctx->pc = 0x1E9BCCu;
}
