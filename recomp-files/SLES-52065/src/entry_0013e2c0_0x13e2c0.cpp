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

// Function: entry_0013e2c0
// Address: 0x13e2c0 - 0x13e2d0
void entry_0013e2c0_0x13e2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e2c0_0x13e2c0");
#endif

    switch (ctx->pc) {
        case 0x13e2c8u: goto label_13e2c8;
        default: break;
    }

    ctx->pc = 0x13e2c0u;

    // 0x13e2c0: 0xc080748  jal         func_201D20
    ctx->pc = 0x13E2C0u;
    SET_GPR_U32(ctx, 31, 0x13E2C8u);
    ctx->pc = 0x13E2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E2C0u;
    // 0x13e2c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x13E2C0u, 0x13E2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E2C8u;
label_13e2c8:
    // 0x13e2c8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x13e2c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e2cc: 0x2e820020  sltiu       $v0, $s4, 0x20
    ctx->pc = 0x13e2ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    ctx->pc = 0x13e2d0u;
}
