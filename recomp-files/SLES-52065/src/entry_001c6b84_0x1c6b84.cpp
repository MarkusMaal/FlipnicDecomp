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

// Function: entry_001c6b84
// Address: 0x1c6b84 - 0x1c6b94
void entry_001c6b84_0x1c6b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6b84_0x1c6b84");
#endif

    switch (ctx->pc) {
        case 0x1c6b8cu: goto label_1c6b8c;
        default: break;
    }

    ctx->pc = 0x1c6b84u;

    // 0x1c6b84: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6B84u;
    SET_GPR_U32(ctx, 31, 0x1C6B8Cu);
    ctx->pc = 0x1C6B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B84u;
    // 0x1c6b88: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6B84u, 0x1C6B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B8Cu;
label_1c6b8c:
    // 0x1c6b8c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1C6B8Cu;
    {
        const bool branch_taken_0x1c6b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6b8c) {
            ctx->pc = 0x1C6C2Cu;
            return;
        }
    }
    ctx->pc = 0x1C6B94u;
}
