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

// Function: entry_001b47b8
// Address: 0x1b47b8 - 0x1b47d8
void entry_001b47b8_0x1b47b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b47b8_0x1b47b8");
#endif

    switch (ctx->pc) {
        case 0x1b47d0u: goto label_1b47d0;
        default: break;
    }

    ctx->pc = 0x1b47b8u;

label_1b47b8:
    // 0x1b47b8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b47b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b47bc:
    // 0x1b47bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b47bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b47c0:
    // 0x1b47c0: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x1b47c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1b47c4:
    // 0x1b47c4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1b47c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1b47c8:
    // 0x1b47c8: 0x320f809  jalr        $t9
label_1b47cc:
    if (ctx->pc == 0x1B47CCu) {
        ctx->pc = 0x1B47CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47C8u;
        // 0x1b47cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B47D0u;
        goto label_1b47d0;
    }
    ctx->pc = 0x1B47C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B47D0u);
        ctx->pc = 0x1B47CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47C8u;
        // 0x1b47cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B47C8u, 0x1B47D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B47D0u;
label_1b47d0:
    // 0x1b47d0: 0x10000021  b           . + 4 + (0x21 << 2)
label_1b47d4:
    if (ctx->pc == 0x1B47D4u) {
        ctx->pc = 0x1B47D8u;
        goto label_fallthrough_0x1b47d0;
    }
    ctx->pc = 0x1B47D0u;
    {
        const bool branch_taken_0x1b47d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b47d0) {
            ctx->pc = 0x1B4858u;
            return;
        }
    }
label_fallthrough_0x1b47d0:
    ctx->pc = 0x1B47D8u;
}
