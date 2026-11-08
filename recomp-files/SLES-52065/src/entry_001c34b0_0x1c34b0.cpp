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

// Function: entry_001c34b0
// Address: 0x1c34b0 - 0x1c34cc
void entry_001c34b0_0x1c34b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c34b0_0x1c34b0");
#endif

    switch (ctx->pc) {
        case 0x1c34b8u: goto label_1c34b8;
        case 0x1c34c4u: goto label_1c34c4;
        default: break;
    }

    ctx->pc = 0x1c34b0u;

    // 0x1c34b0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C34B0u;
    SET_GPR_U32(ctx, 31, 0x1C34B8u);
    ctx->pc = 0x1C34B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34B0u;
    // 0x1c34b4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C34B0u, 0x1C34B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C34B8u;
label_1c34b8:
    // 0x1c34b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c34b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c34bc: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C34BCu;
    SET_GPR_U32(ctx, 31, 0x1C34C4u);
    ctx->pc = 0x1C34C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34BCu;
    // 0x1c34c0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C34BCu, 0x1C34C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C34C4u;
label_1c34c4:
    // 0x1c34c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C34C4u;
    {
        const bool branch_taken_0x1c34c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c34c4) {
            ctx->pc = 0x1C34F0u;
            return;
        }
    }
    ctx->pc = 0x1C34CCu;
}
