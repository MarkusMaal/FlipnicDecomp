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

// Function: entry_001c33c4
// Address: 0x1c33c4 - 0x1c33d4
void entry_001c33c4_0x1c33c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c33c4_0x1c33c4");
#endif

    switch (ctx->pc) {
        case 0x1c33ccu: goto label_1c33cc;
        default: break;
    }

    ctx->pc = 0x1c33c4u;

    // 0x1c33c4: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C33C4u;
    SET_GPR_U32(ctx, 31, 0x1C33CCu);
    ctx->pc = 0x1C33C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C33C4u;
    // 0x1c33c8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C33C4u, 0x1C33CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C33CCu;
label_1c33cc:
    // 0x1c33cc: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1C33CCu;
    {
        const bool branch_taken_0x1c33cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c33cc) {
            ctx->pc = 0x1C34F0u;
            return;
        }
    }
    ctx->pc = 0x1C33D4u;
}
