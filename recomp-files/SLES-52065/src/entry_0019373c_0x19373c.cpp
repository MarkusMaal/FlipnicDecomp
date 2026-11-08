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

// Function: entry_0019373c
// Address: 0x19373c - 0x193754
void entry_0019373c_0x19373c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019373c_0x19373c");
#endif

    switch (ctx->pc) {
        case 0x19374cu: goto label_19374c;
        default: break;
    }

    ctx->pc = 0x19373cu;

label_19373c:
    // 0x19373c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19373cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193740:
    // 0x193740: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x193740u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_193744:
    // 0x193744: 0x320f809  jalr        $t9
label_193748:
    if (ctx->pc == 0x193748u) {
        ctx->pc = 0x193748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193744u;
        // 0x193748: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19374Cu;
        goto label_19374c;
    }
    ctx->pc = 0x193744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19374Cu);
        ctx->pc = 0x193748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193744u;
        // 0x193748: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193744u, 0x19374Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19374Cu;
label_19374c:
    // 0x19374c: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_193750:
    if (ctx->pc == 0x193750u) {
        ctx->pc = 0x193754u;
        goto label_fallthrough_0x19374c;
    }
    ctx->pc = 0x19374Cu;
    {
        const bool branch_taken_0x19374c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19374c) {
            ctx->pc = 0x193AECu;
            return;
        }
    }
label_fallthrough_0x19374c:
    ctx->pc = 0x193754u;
}
