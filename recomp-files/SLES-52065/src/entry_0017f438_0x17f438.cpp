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

// Function: entry_0017f438
// Address: 0x17f438 - 0x17f450
void entry_0017f438_0x17f438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f438_0x17f438");
#endif

    switch (ctx->pc) {
        case 0x17f44cu: goto label_17f44c;
        default: break;
    }

    ctx->pc = 0x17f438u;

    // 0x17f438: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x17f438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x17f43c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F43Cu;
    {
        const bool branch_taken_0x17f43c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F43Cu;
        // 0x17f440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f43c) {
            ctx->pc = 0x17F450u;
            return;
        }
    }
    ctx->pc = 0x17F444u;
    // 0x17f444: 0xc05fce8  jal         func_17F3A0
    ctx->pc = 0x17F444u;
    SET_GPR_U32(ctx, 31, 0x17F44Cu);
    ctx->pc = 0x17F448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F444u;
    // 0x17f448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F3A0u, 0x17F444u, 0x17F44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F44Cu;
label_17f44c:
    // 0x17f44c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17f44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17f450u;
}
