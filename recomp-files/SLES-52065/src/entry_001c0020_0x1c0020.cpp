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

// Function: entry_001c0020
// Address: 0x1c0020 - 0x1c0030
void entry_001c0020_0x1c0020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0020_0x1c0020");
#endif

    switch (ctx->pc) {
        case 0x1c0028u: goto label_1c0028;
        default: break;
    }

    ctx->pc = 0x1c0020u;

    // 0x1c0020: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1C0020u;
    SET_GPR_U32(ctx, 31, 0x1C0028u);
    ctx->pc = 0x1C0024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0020u;
    // 0x1c0024: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1C0020u, 0x1C0028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0028u;
label_1c0028:
    // 0x1c0028: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1C0028u;
    {
        const bool branch_taken_0x1c0028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0028) {
            ctx->pc = 0x1C00E8u;
            return;
        }
    }
    ctx->pc = 0x1C0030u;
}
