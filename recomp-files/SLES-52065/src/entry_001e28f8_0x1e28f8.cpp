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

// Function: entry_001e28f8
// Address: 0x1e28f8 - 0x1e290c
void entry_001e28f8_0x1e28f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e28f8_0x1e28f8");
#endif

    ctx->pc = 0x1e28f8u;

label_1e28f8:
    // 0x1e28f8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1e28f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e28fc:
    // 0x1e28fc: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x1e28fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1e2900:
    // 0x1e2900: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1e2900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1e2904:
    // 0x1e2904: 0x320f809  jalr        $t9
label_1e2908:
    if (ctx->pc == 0x1E2908u) {
        ctx->pc = 0x1E2908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2904u;
        // 0x1e2908: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E290Cu;
        goto label_fallthrough_0x1e2904;
    }
    ctx->pc = 0x1E2904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E290Cu);
        ctx->pc = 0x1E2908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2904u;
        // 0x1e2908: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2904u, 0x1E290Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1e2904:
    ctx->pc = 0x1E290Cu;
}
