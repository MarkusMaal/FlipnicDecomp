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

// Function: entry_001c6bf8
// Address: 0x1c6bf8 - 0x1c6c08
void entry_001c6bf8_0x1c6bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6bf8_0x1c6bf8");
#endif

    switch (ctx->pc) {
        case 0x1c6c00u: goto label_1c6c00;
        default: break;
    }

    ctx->pc = 0x1c6bf8u;

    // 0x1c6bf8: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6BF8u;
    SET_GPR_U32(ctx, 31, 0x1C6C00u);
    ctx->pc = 0x1C6BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BF8u;
    // 0x1c6bfc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6BF8u, 0x1C6C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C00u;
label_1c6c00:
    // 0x1c6c00: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C6C00u;
    {
        const bool branch_taken_0x1c6c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6c00) {
            ctx->pc = 0x1C6C2Cu;
            return;
        }
    }
    ctx->pc = 0x1C6C08u;
}
