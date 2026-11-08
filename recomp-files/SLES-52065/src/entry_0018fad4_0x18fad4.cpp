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

// Function: entry_0018fad4
// Address: 0x18fad4 - 0x18faf0
void entry_0018fad4_0x18fad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fad4_0x18fad4");
#endif

    switch (ctx->pc) {
        case 0x18fae8u: goto label_18fae8;
        default: break;
    }

    ctx->pc = 0x18fad4u;

label_18fad4:
    // 0x18fad4: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x18fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_18fad8:
    // 0x18fad8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_18fadc:
    // 0x18fadc: 0x8c420274  lw          $v0, 0x274($v0)
    ctx->pc = 0x18fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_18fae0:
    // 0x18fae0: 0x40f809  jalr        $v0
label_18fae4:
    if (ctx->pc == 0x18FAE4u) {
        ctx->pc = 0x18FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FAE0u;
        // 0x18fae4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FAE8u;
        goto label_18fae8;
    }
    ctx->pc = 0x18FAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18FAE8u);
        ctx->pc = 0x18FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FAE0u;
        // 0x18fae4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FAE0u, 0x18FAE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FAE8u;
label_18fae8:
    // 0x18fae8: 0x10000006  b           . + 4 + (0x6 << 2)
label_18faec:
    if (ctx->pc == 0x18FAECu) {
        ctx->pc = 0x18FAF0u;
        goto label_fallthrough_0x18fae8;
    }
    ctx->pc = 0x18FAE8u;
    {
        const bool branch_taken_0x18fae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fae8) {
            ctx->pc = 0x18FB04u;
            return;
        }
    }
label_fallthrough_0x18fae8:
    ctx->pc = 0x18FAF0u;
}
