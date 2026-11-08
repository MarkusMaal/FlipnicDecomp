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

// Function: entry_001c6b94
// Address: 0x1c6b94 - 0x1c6ba4
void entry_001c6b94_0x1c6b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6b94_0x1c6b94");
#endif

    switch (ctx->pc) {
        case 0x1c6b9cu: goto label_1c6b9c;
        default: break;
    }

    ctx->pc = 0x1c6b94u;

    // 0x1c6b94: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6B94u;
    SET_GPR_U32(ctx, 31, 0x1C6B9Cu);
    ctx->pc = 0x1C6B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B94u;
    // 0x1c6b98: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6B94u, 0x1C6B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B9Cu;
label_1c6b9c:
    // 0x1c6b9c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1C6B9Cu;
    {
        const bool branch_taken_0x1c6b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6b9c) {
            ctx->pc = 0x1C6C2Cu;
            return;
        }
    }
    ctx->pc = 0x1C6BA4u;
}
