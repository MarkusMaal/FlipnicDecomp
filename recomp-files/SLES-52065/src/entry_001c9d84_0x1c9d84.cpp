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

// Function: entry_001c9d84
// Address: 0x1c9d84 - 0x1c9db0
void entry_001c9d84_0x1c9d84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9d84_0x1c9d84");
#endif

    switch (ctx->pc) {
        case 0x1c9d98u: goto label_1c9d98;
        case 0x1c9da8u: goto label_1c9da8;
        default: break;
    }

    ctx->pc = 0x1c9d84u;

    // 0x1c9d84: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9D84u;
    {
        const bool branch_taken_0x1c9d84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D84u;
        // 0x1c9d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d84) {
            ctx->pc = 0x1C9DB0u;
            return;
        }
    }
    ctx->pc = 0x1C9D8Cu;
    // 0x1c9d8c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c9d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c9d90: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C9D90u;
    SET_GPR_U32(ctx, 31, 0x1C9D98u);
    ctx->pc = 0x1C9D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9D90u;
    // 0x1c9d94: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C9D90u, 0x1C9D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9D98u;
label_1c9d98:
    // 0x1c9d98: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c9d98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c9d9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c9d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9da0: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C9DA0u;
    SET_GPR_U32(ctx, 31, 0x1C9DA8u);
    ctx->pc = 0x1C9DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9DA0u;
    // 0x1c9da4: 0x24a569d0  addiu       $a1, $a1, 0x69D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C9DA0u, 0x1C9DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9DA8u;
label_1c9da8:
    // 0x1c9da8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9DA8u;
    {
        const bool branch_taken_0x1c9da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9da8) {
            ctx->pc = 0x1C9DD0u;
            return;
        }
    }
    ctx->pc = 0x1C9DB0u;
}
