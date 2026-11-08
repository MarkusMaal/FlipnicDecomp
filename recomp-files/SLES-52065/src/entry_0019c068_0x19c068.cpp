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

// Function: entry_0019c068
// Address: 0x19c068 - 0x19c078
void entry_0019c068_0x19c068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c068_0x19c068");
#endif

    switch (ctx->pc) {
        case 0x19c070u: goto label_19c070;
        default: break;
    }

    ctx->pc = 0x19c068u;

    // 0x19c068: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19C068u;
    SET_GPR_U32(ctx, 31, 0x19C070u);
    ctx->pc = 0x19C06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C068u;
    // 0x19c06c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19C068u, 0x19C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C070u;
label_19c070:
    // 0x19c070: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x19C070u;
    {
        const bool branch_taken_0x19c070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c070) {
            ctx->pc = 0x19C328u;
            return;
        }
    }
    ctx->pc = 0x19C078u;
}
