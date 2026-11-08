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

// Function: entry_001c6a7c
// Address: 0x1c6a7c - 0x1c6aa0
void entry_001c6a7c_0x1c6a7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6a7c_0x1c6a7c");
#endif

    switch (ctx->pc) {
        case 0x1c6a98u: goto label_1c6a98;
        default: break;
    }

    ctx->pc = 0x1c6a7cu;

    // 0x1c6a7c: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x1c6a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1c6a80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c6a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6a84: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6A84u;
    {
        const bool branch_taken_0x1c6a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C6A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A84u;
        // 0x1c6a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a84) {
            ctx->pc = 0x1C6AA0u;
            return;
        }
    }
    ctx->pc = 0x1C6A8Cu;
    // 0x1c6a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a90: 0xc071e44  jal         func_1C7910
    ctx->pc = 0x1C6A90u;
    SET_GPR_U32(ctx, 31, 0x1C6A98u);
    ctx->pc = 0x1C6A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A90u;
    // 0x1c6a94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7910u, 0x1C6A90u, 0x1C6A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A98u;
label_1c6a98:
    // 0x1c6a98: 0x1000033a  b           . + 4 + (0x33A << 2)
    ctx->pc = 0x1C6A98u;
    {
        const bool branch_taken_0x1c6a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6a98) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C6AA0u;
}
