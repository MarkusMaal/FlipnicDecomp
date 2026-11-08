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

// Function: entry_001930c0
// Address: 0x1930c0 - 0x1930d8
void entry_001930c0_0x1930c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001930c0_0x1930c0");
#endif

    switch (ctx->pc) {
        case 0x1930d0u: goto label_1930d0;
        default: break;
    }

    ctx->pc = 0x1930c0u;

label_1930c0:
    // 0x1930c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1930c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1930c4:
    // 0x1930c4: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x1930c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_1930c8:
    // 0x1930c8: 0x320f809  jalr        $t9
label_1930cc:
    if (ctx->pc == 0x1930CCu) {
        ctx->pc = 0x1930CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930C8u;
        // 0x1930cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1930D0u;
        goto label_1930d0;
    }
    ctx->pc = 0x1930C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1930D0u);
        ctx->pc = 0x1930CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930C8u;
        // 0x1930cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1930C8u, 0x1930D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1930D0u;
label_1930d0:
    // 0x1930d0: 0x10000012  b           . + 4 + (0x12 << 2)
label_1930d4:
    if (ctx->pc == 0x1930D4u) {
        ctx->pc = 0x1930D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930D0u;
        // 0x1930d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1930D8u;
        goto label_fallthrough_0x1930d0;
    }
    ctx->pc = 0x1930D0u;
    {
        const bool branch_taken_0x1930d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1930D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930D0u;
        // 0x1930d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1930d0) {
            ctx->pc = 0x19311Cu;
            return;
        }
    }
label_fallthrough_0x1930d0:
    ctx->pc = 0x1930D8u;
}
