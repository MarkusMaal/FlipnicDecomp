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

// Function: entry_001c3484
// Address: 0x1c3484 - 0x1c34a0
void entry_001c3484_0x1c3484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3484_0x1c3484");
#endif

    switch (ctx->pc) {
        case 0x1c348cu: goto label_1c348c;
        case 0x1c3498u: goto label_1c3498;
        default: break;
    }

    ctx->pc = 0x1c3484u;

    // 0x1c3484: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3484u;
    SET_GPR_U32(ctx, 31, 0x1C348Cu);
    ctx->pc = 0x1C3488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3484u;
    // 0x1c3488: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3484u, 0x1C348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C348Cu;
label_1c348c:
    // 0x1c348c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c348cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3490: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3490u;
    SET_GPR_U32(ctx, 31, 0x1C3498u);
    ctx->pc = 0x1C3494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3490u;
    // 0x1c3494: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3490u, 0x1C3498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3498u;
label_1c3498:
    // 0x1c3498: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1C3498u;
    {
        const bool branch_taken_0x1c3498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3498) {
            ctx->pc = 0x1C34F0u;
            return;
        }
    }
    ctx->pc = 0x1C34A0u;
}
