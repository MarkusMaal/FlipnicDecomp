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

// Function: entry_001c34cc
// Address: 0x1c34cc - 0x1c34dc
void entry_001c34cc_0x1c34cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c34cc_0x1c34cc");
#endif

    switch (ctx->pc) {
        case 0x1c34d4u: goto label_1c34d4;
        default: break;
    }

    ctx->pc = 0x1c34ccu;

    // 0x1c34cc: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C34CCu;
    SET_GPR_U32(ctx, 31, 0x1C34D4u);
    ctx->pc = 0x1C34D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34CCu;
    // 0x1c34d0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C34CCu, 0x1C34D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C34D4u;
label_1c34d4:
    // 0x1c34d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C34D4u;
    {
        const bool branch_taken_0x1c34d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c34d4) {
            ctx->pc = 0x1C34F0u;
            return;
        }
    }
    ctx->pc = 0x1C34DCu;
}
