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

// Function: entry_001c33e4
// Address: 0x1c33e4 - 0x1c33f4
void entry_001c33e4_0x1c33e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c33e4_0x1c33e4");
#endif

    switch (ctx->pc) {
        case 0x1c33ecu: goto label_1c33ec;
        default: break;
    }

    ctx->pc = 0x1c33e4u;

    // 0x1c33e4: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C33E4u;
    SET_GPR_U32(ctx, 31, 0x1C33ECu);
    ctx->pc = 0x1C33E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C33E4u;
    // 0x1c33e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C33E4u, 0x1C33ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C33ECu;
label_1c33ec:
    // 0x1c33ec: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1C33ECu;
    {
        const bool branch_taken_0x1c33ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c33ec) {
            ctx->pc = 0x1C34F0u;
            return;
        }
    }
    ctx->pc = 0x1C33F4u;
}
