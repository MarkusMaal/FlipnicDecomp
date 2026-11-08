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

// Function: entry_001937d4
// Address: 0x1937d4 - 0x1937ec
void entry_001937d4_0x1937d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001937d4_0x1937d4");
#endif

    switch (ctx->pc) {
        case 0x1937e4u: goto label_1937e4;
        default: break;
    }

    ctx->pc = 0x1937d4u;

label_1937d4:
    // 0x1937d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1937d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1937d8:
    // 0x1937d8: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x1937d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_1937dc:
    // 0x1937dc: 0x320f809  jalr        $t9
label_1937e0:
    if (ctx->pc == 0x1937E0u) {
        ctx->pc = 0x1937E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937DCu;
        // 0x1937e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1937E4u;
        goto label_1937e4;
    }
    ctx->pc = 0x1937DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1937E4u);
        ctx->pc = 0x1937E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937DCu;
        // 0x1937e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1937DCu, 0x1937E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1937E4u;
label_1937e4:
    // 0x1937e4: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_1937e8:
    if (ctx->pc == 0x1937E8u) {
        ctx->pc = 0x1937ECu;
        goto label_fallthrough_0x1937e4;
    }
    ctx->pc = 0x1937E4u;
    {
        const bool branch_taken_0x1937e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1937e4) {
            ctx->pc = 0x193AECu;
            return;
        }
    }
label_fallthrough_0x1937e4:
    ctx->pc = 0x1937ECu;
}
