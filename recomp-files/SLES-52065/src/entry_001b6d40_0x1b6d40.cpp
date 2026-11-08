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

// Function: entry_001b6d40
// Address: 0x1b6d40 - 0x1b6d58
void entry_001b6d40_0x1b6d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6d40_0x1b6d40");
#endif

    switch (ctx->pc) {
        case 0x1b6d54u: goto label_1b6d54;
        default: break;
    }

    ctx->pc = 0x1b6d40u;

    // 0x1b6d40: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1b6d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b6d44: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6D44u;
    {
        const bool branch_taken_0x1b6d44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D44u;
        // 0x1b6d48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6d44) {
            ctx->pc = 0x1B6D58u;
            return;
        }
    }
    ctx->pc = 0x1B6D4Cu;
    // 0x1b6d4c: 0xc06dab4  jal         func_1B6AD0
    ctx->pc = 0x1B6D4Cu;
    SET_GPR_U32(ctx, 31, 0x1B6D54u);
    ctx->pc = 0x1B6D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D4Cu;
    // 0x1b6d50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6AD0u, 0x1B6D4Cu, 0x1B6D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D54u;
label_1b6d54:
    // 0x1b6d54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b6d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b6d58u;
}
