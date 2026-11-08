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

// Function: entry_001c33d4
// Address: 0x1c33d4 - 0x1c33e4
void entry_001c33d4_0x1c33d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c33d4_0x1c33d4");
#endif

    switch (ctx->pc) {
        case 0x1c33dcu: goto label_1c33dc;
        default: break;
    }

    ctx->pc = 0x1c33d4u;

    // 0x1c33d4: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C33D4u;
    SET_GPR_U32(ctx, 31, 0x1C33DCu);
    ctx->pc = 0x1C33D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C33D4u;
    // 0x1c33d8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C33D4u, 0x1C33DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C33DCu;
label_1c33dc:
    // 0x1c33dc: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1C33DCu;
    {
        const bool branch_taken_0x1c33dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c33dc) {
            ctx->pc = 0x1C34F0u;
            return;
        }
    }
    ctx->pc = 0x1C33E4u;
}
