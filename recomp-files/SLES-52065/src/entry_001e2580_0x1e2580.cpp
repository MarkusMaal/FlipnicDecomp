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

// Function: entry_001e2580
// Address: 0x1e2580 - 0x1e2594
void entry_001e2580_0x1e2580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2580_0x1e2580");
#endif

    ctx->pc = 0x1e2580u;

label_1e2580:
    // 0x1e2580: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1e2580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e2584:
    // 0x1e2584: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1e2584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1e2588:
    // 0x1e2588: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1e2588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1e258c:
    // 0x1e258c: 0x320f809  jalr        $t9
label_1e2590:
    if (ctx->pc == 0x1E2590u) {
        ctx->pc = 0x1E2590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E258Cu;
        // 0x1e2590: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2594u;
        goto label_fallthrough_0x1e258c;
    }
    ctx->pc = 0x1E258Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E2594u);
        ctx->pc = 0x1E2590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E258Cu;
        // 0x1e2590: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E258Cu, 0x1E2594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1e258c:
    ctx->pc = 0x1E2594u;
}
