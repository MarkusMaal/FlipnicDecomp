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

// Function: entry_001b6d20
// Address: 0x1b6d20 - 0x1b6d40
void entry_001b6d20_0x1b6d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6d20_0x1b6d20");
#endif

    ctx->pc = 0x1b6d20u;

    // 0x1b6d20: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x1b6d20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b6d24: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B6D24u;
    {
        const bool branch_taken_0x1b6d24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D24u;
        // 0x1b6d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6d24) {
            ctx->pc = 0x1B6D74u;
            return;
        }
    }
    ctx->pc = 0x1B6D2Cu;
    // 0x1b6d2c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1b6d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b6d30: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6D30u;
    {
        const bool branch_taken_0x1b6d30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D30u;
        // 0x1b6d34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6d30) {
            ctx->pc = 0x1B6D40u;
            return;
        }
    }
    ctx->pc = 0x1B6D38u;
    // 0x1b6d38: 0xc06dab4  jal         func_1B6AD0
    ctx->pc = 0x1B6D38u;
    SET_GPR_U32(ctx, 31, 0x1B6D40u);
    ctx->pc = 0x1B6AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6AD0u, 0x1B6D38u, 0x1B6D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D40u;
}
