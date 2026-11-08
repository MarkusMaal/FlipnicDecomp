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

// Function: entry_001b15e8
// Address: 0x1b15e8 - 0x1b15fc
void entry_001b15e8_0x1b15e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b15e8_0x1b15e8");
#endif

    switch (ctx->pc) {
        case 0x1b15f8u: goto label_1b15f8;
        default: break;
    }

    ctx->pc = 0x1b15e8u;

    // 0x1b15e8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b15e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b15ec: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x1b15ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1b15f0: 0xc061fa8  jal         func_187EA0
    ctx->pc = 0x1B15F0u;
    SET_GPR_U32(ctx, 31, 0x1B15F8u);
    ctx->pc = 0x1B15F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B15F0u;
    // 0x1b15f4: 0x24a50c88  addiu       $a1, $a1, 0xC88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EA0u, 0x1B15F0u, 0x1B15F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B15F8u;
label_1b15f8:
    // 0x1b15f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b15f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b15fcu;
}
