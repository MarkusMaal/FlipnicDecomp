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

// Function: entry_0018ff50
// Address: 0x18ff50 - 0x18ff6c
void entry_0018ff50_0x18ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ff50_0x18ff50");
#endif

    switch (ctx->pc) {
        case 0x18ff64u: goto label_18ff64;
        default: break;
    }

    ctx->pc = 0x18ff50u;

label_18ff50:
    // 0x18ff50: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x18ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_18ff54:
    // 0x18ff54: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_18ff58:
    // 0x18ff58: 0x8c420274  lw          $v0, 0x274($v0)
    ctx->pc = 0x18ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_18ff5c:
    // 0x18ff5c: 0x40f809  jalr        $v0
label_18ff60:
    if (ctx->pc == 0x18FF60u) {
        ctx->pc = 0x18FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF5Cu;
        // 0x18ff60: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FF64u;
        goto label_18ff64;
    }
    ctx->pc = 0x18FF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18FF64u);
        ctx->pc = 0x18FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF5Cu;
        // 0x18ff60: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FF5Cu, 0x18FF64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FF64u;
label_18ff64:
    // 0x18ff64: 0x10000007  b           . + 4 + (0x7 << 2)
label_18ff68:
    if (ctx->pc == 0x18FF68u) {
        ctx->pc = 0x18FF6Cu;
        goto label_fallthrough_0x18ff64;
    }
    ctx->pc = 0x18FF64u;
    {
        const bool branch_taken_0x18ff64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ff64) {
            ctx->pc = 0x18FF84u;
            return;
        }
    }
label_fallthrough_0x18ff64:
    ctx->pc = 0x18FF6Cu;
}
