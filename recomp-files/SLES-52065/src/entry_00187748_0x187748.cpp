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

// Function: entry_00187748
// Address: 0x187748 - 0x187760
void entry_00187748_0x187748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187748_0x187748");
#endif

    switch (ctx->pc) {
        case 0x18775cu: goto label_18775c;
        default: break;
    }

    ctx->pc = 0x187748u;

    // 0x187748: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x187748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18774c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18774Cu;
    {
        const bool branch_taken_0x18774c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x187750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18774Cu;
        // 0x187750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18774c) {
            ctx->pc = 0x187760u;
            return;
        }
    }
    ctx->pc = 0x187754u;
    // 0x187754: 0xc061dac  jal         func_1876B0
    ctx->pc = 0x187754u;
    SET_GPR_U32(ctx, 31, 0x18775Cu);
    ctx->pc = 0x187758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187754u;
    // 0x187758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1876B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1876B0u, 0x187754u, 0x18775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18775Cu;
label_18775c:
    // 0x18775c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18775cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x187760u;
}
