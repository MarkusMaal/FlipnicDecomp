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

// Function: entry_00187800
// Address: 0x187800 - 0x187818
void entry_00187800_0x187800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187800_0x187800");
#endif

    switch (ctx->pc) {
        case 0x187814u: goto label_187814;
        default: break;
    }

    ctx->pc = 0x187800u;

    // 0x187800: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x187800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x187804: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x187804u;
    {
        const bool branch_taken_0x187804 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x187808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187804u;
        // 0x187808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187804) {
            ctx->pc = 0x187818u;
            return;
        }
    }
    ctx->pc = 0x18780Cu;
    // 0x18780c: 0xc061dac  jal         func_1876B0
    ctx->pc = 0x18780Cu;
    SET_GPR_U32(ctx, 31, 0x187814u);
    ctx->pc = 0x187810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18780Cu;
    // 0x187810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1876B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1876B0u, 0x18780Cu, 0x187814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187814u;
label_187814:
    // 0x187814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x187814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x187818u;
}
