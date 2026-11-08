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

// Function: entry_001ebc38
// Address: 0x1ebc38 - 0x1ebc48
void entry_001ebc38_0x1ebc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebc38_0x1ebc38");
#endif

    switch (ctx->pc) {
        case 0x1ebc40u: goto label_1ebc40;
        default: break;
    }

    ctx->pc = 0x1ebc38u;

    // 0x1ebc38: 0xc07b2a8  jal         func_1ECAA0
    ctx->pc = 0x1EBC38u;
    SET_GPR_U32(ctx, 31, 0x1EBC40u);
    ctx->pc = 0x1EBC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBC38u;
    // 0x1ebc3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECAA0u, 0x1EBC38u, 0x1EBC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBC40u;
label_1ebc40:
    // 0x1ebc40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBC40u;
    {
        const bool branch_taken_0x1ebc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC40u;
        // 0x1ebc44: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc40) {
            ctx->pc = 0x1EBC50u;
            return;
        }
    }
    ctx->pc = 0x1EBC48u;
}
