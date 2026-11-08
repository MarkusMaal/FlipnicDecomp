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

// Function: entry_0019376c
// Address: 0x19376c - 0x193784
void entry_0019376c_0x19376c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019376c_0x19376c");
#endif

    switch (ctx->pc) {
        case 0x19377cu: goto label_19377c;
        default: break;
    }

    ctx->pc = 0x19376cu;

label_19376c:
    // 0x19376c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19376cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193770:
    // 0x193770: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x193770u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_193774:
    // 0x193774: 0x320f809  jalr        $t9
label_193778:
    if (ctx->pc == 0x193778u) {
        ctx->pc = 0x193778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193774u;
        // 0x193778: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19377Cu;
        goto label_19377c;
    }
    ctx->pc = 0x193774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19377Cu);
        ctx->pc = 0x193778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193774u;
        // 0x193778: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193774u, 0x19377Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19377Cu;
label_19377c:
    // 0x19377c: 0x100000db  b           . + 4 + (0xDB << 2)
label_193780:
    if (ctx->pc == 0x193780u) {
        ctx->pc = 0x193784u;
        goto label_fallthrough_0x19377c;
    }
    ctx->pc = 0x19377Cu;
    {
        const bool branch_taken_0x19377c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19377c) {
            ctx->pc = 0x193AECu;
            return;
        }
    }
label_fallthrough_0x19377c:
    ctx->pc = 0x193784u;
}
