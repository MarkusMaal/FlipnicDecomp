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

// Function: entry_001b6b18
// Address: 0x1b6b18 - 0x1b6b30
void entry_001b6b18_0x1b6b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6b18_0x1b6b18");
#endif

    switch (ctx->pc) {
        case 0x1b6b2cu: goto label_1b6b2c;
        default: break;
    }

    ctx->pc = 0x1b6b18u;

    // 0x1b6b18: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1b6b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b6b1c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6B1Cu;
    {
        const bool branch_taken_0x1b6b1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B1Cu;
        // 0x1b6b20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b1c) {
            ctx->pc = 0x1B6B30u;
            return;
        }
    }
    ctx->pc = 0x1B6B24u;
    // 0x1b6b24: 0xc06dab4  jal         func_1B6AD0
    ctx->pc = 0x1B6B24u;
    SET_GPR_U32(ctx, 31, 0x1B6B2Cu);
    ctx->pc = 0x1B6B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B24u;
    // 0x1b6b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6AD0u, 0x1B6B24u, 0x1B6B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B2Cu;
label_1b6b2c:
    // 0x1b6b2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b6b30u;
}
