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

// Function: entry_001c33f4
// Address: 0x1c33f4 - 0x1c3410
void entry_001c33f4_0x1c33f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c33f4_0x1c33f4");
#endif

    switch (ctx->pc) {
        case 0x1c33fcu: goto label_1c33fc;
        case 0x1c3408u: goto label_1c3408;
        default: break;
    }

    ctx->pc = 0x1c33f4u;

    // 0x1c33f4: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C33F4u;
    SET_GPR_U32(ctx, 31, 0x1C33FCu);
    ctx->pc = 0x1C33F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C33F4u;
    // 0x1c33f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C33F4u, 0x1C33FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C33FCu;
label_1c33fc:
    // 0x1c33fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c33fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3400: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3400u;
    SET_GPR_U32(ctx, 31, 0x1C3408u);
    ctx->pc = 0x1C3404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3400u;
    // 0x1c3404: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3400u, 0x1C3408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3408u;
label_1c3408:
    // 0x1c3408: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1C3408u;
    {
        const bool branch_taken_0x1c3408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3408) {
            ctx->pc = 0x1C34F0u;
            return;
        }
    }
    ctx->pc = 0x1C3410u;
}
