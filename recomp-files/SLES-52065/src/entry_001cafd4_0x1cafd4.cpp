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

// Function: entry_001cafd4
// Address: 0x1cafd4 - 0x1cafec
void entry_001cafd4_0x1cafd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cafd4_0x1cafd4");
#endif

    switch (ctx->pc) {
        case 0x1cafdcu: goto label_1cafdc;
        default: break;
    }

    ctx->pc = 0x1cafd4u;

    // 0x1cafd4: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CAFD4u;
    SET_GPR_U32(ctx, 31, 0x1CAFDCu);
    ctx->pc = 0x1CAFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAFD4u;
    // 0x1cafd8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CAFD4u, 0x1CAFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFDCu;
label_1cafdc:
    // 0x1cafdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAFDCu;
    {
        const bool branch_taken_0x1cafdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFDCu;
        // 0x1cafe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cafdc) {
            ctx->pc = 0x1CAFECu;
            return;
        }
    }
    ctx->pc = 0x1CAFE4u;
    // 0x1cafe4: 0xc072d90  jal         func_1CB640
    ctx->pc = 0x1CAFE4u;
    SET_GPR_U32(ctx, 31, 0x1CAFECu);
    ctx->pc = 0x1CAFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAFE4u;
    // 0x1cafe8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB640u, 0x1CAFE4u, 0x1CAFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFECu;
}
