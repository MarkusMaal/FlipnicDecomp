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

// Function: entry_001c9db0
// Address: 0x1c9db0 - 0x1c9dd0
void entry_001c9db0_0x1c9db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9db0_0x1c9db0");
#endif

    switch (ctx->pc) {
        case 0x1c9dc0u: goto label_1c9dc0;
        default: break;
    }

    ctx->pc = 0x1c9db0u;

    // 0x1c9db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9db4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c9db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c9db8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C9DB8u;
    SET_GPR_U32(ctx, 31, 0x1C9DC0u);
    ctx->pc = 0x1C9DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9DB8u;
    // 0x1c9dbc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C9DB8u, 0x1C9DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9DC0u;
label_1c9dc0:
    // 0x1c9dc0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c9dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c9dc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c9dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9dc8: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C9DC8u;
    SET_GPR_U32(ctx, 31, 0x1C9DD0u);
    ctx->pc = 0x1C9DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9DC8u;
    // 0x1c9dcc: 0x24a569f0  addiu       $a1, $a1, 0x69F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C9DC8u, 0x1C9DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9DD0u;
}
