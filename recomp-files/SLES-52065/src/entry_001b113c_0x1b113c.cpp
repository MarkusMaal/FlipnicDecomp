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

// Function: entry_001b113c
// Address: 0x1b113c - 0x1b1158
void entry_001b113c_0x1b113c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b113c_0x1b113c");
#endif

    switch (ctx->pc) {
        case 0x1b1150u: goto label_1b1150;
        default: break;
    }

    ctx->pc = 0x1b113cu;

label_1b113c:
    // 0x1b113c: 0x8e840114  lw          $a0, 0x114($s4)
    ctx->pc = 0x1b113cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 276)));
label_1b1140:
    // 0x1b1140: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b1140u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b1144:
    // 0x1b1144: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b1144u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b1148:
    // 0x1b1148: 0x320f809  jalr        $t9
label_1b114c:
    if (ctx->pc == 0x1B114Cu) {
        ctx->pc = 0x1B114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1148u;
        // 0x1b114c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1150u;
        goto label_1b1150;
    }
    ctx->pc = 0x1B1148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1150u);
        ctx->pc = 0x1B114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1148u;
        // 0x1b114c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1148u, 0x1B1150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1150u;
label_1b1150:
    // 0x1b1150: 0x1000000c  b           . + 4 + (0xC << 2)
label_1b1154:
    if (ctx->pc == 0x1B1154u) {
        ctx->pc = 0x1B1158u;
        goto label_fallthrough_0x1b1150;
    }
    ctx->pc = 0x1B1150u;
    {
        const bool branch_taken_0x1b1150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1150) {
            ctx->pc = 0x1B1184u;
            return;
        }
    }
label_fallthrough_0x1b1150:
    ctx->pc = 0x1B1158u;
}
