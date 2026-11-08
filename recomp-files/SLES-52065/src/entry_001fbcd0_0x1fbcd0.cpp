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

// Function: entry_001fbcd0
// Address: 0x1fbcd0 - 0x1fbce0
void entry_001fbcd0_0x1fbcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbcd0_0x1fbcd0");
#endif

    switch (ctx->pc) {
        case 0x1fbcd8u: goto label_1fbcd8;
        default: break;
    }

    ctx->pc = 0x1fbcd0u;

    // 0x1fbcd0: 0xc082222  jal         func_208888
    ctx->pc = 0x1FBCD0u;
    SET_GPR_U32(ctx, 31, 0x1FBCD8u);
    ctx->pc = 0x1FBCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBCD0u;
    // 0x1fbcd4: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208888u, 0x1FBCD0u, 0x1FBCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBCD8u;
label_1fbcd8:
    // 0x1fbcd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBCD8u;
    {
        const bool branch_taken_0x1fbcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBCD8u;
        // 0x1fbcdc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbcd8) {
            ctx->pc = 0x1FBCE8u;
            return;
        }
    }
    ctx->pc = 0x1FBCE0u;
}
