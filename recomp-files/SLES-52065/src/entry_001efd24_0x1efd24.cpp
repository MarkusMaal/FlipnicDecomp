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

// Function: entry_001efd24
// Address: 0x1efd24 - 0x1efd34
void entry_001efd24_0x1efd24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efd24_0x1efd24");
#endif

    switch (ctx->pc) {
        case 0x1efd2cu: goto label_1efd2c;
        default: break;
    }

    ctx->pc = 0x1efd24u;

    // 0x1efd24: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1EFD24u;
    SET_GPR_U32(ctx, 31, 0x1EFD2Cu);
    ctx->pc = 0x1EFD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFD24u;
    // 0x1efd28: 0x8e84a46c  lw          $a0, -0x5B94($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1EFD24u, 0x1EFD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFD2Cu;
label_1efd2c:
    // 0x1efd2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EFD2Cu;
    {
        const bool branch_taken_0x1efd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD2Cu;
        // 0x1efd30: 0x2610ee40  addiu       $s0, $s0, -0x11C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efd2c) {
            ctx->pc = 0x1EFD40u;
            return;
        }
    }
    ctx->pc = 0x1EFD34u;
}
