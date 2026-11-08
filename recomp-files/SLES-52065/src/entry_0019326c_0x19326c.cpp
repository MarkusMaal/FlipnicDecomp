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

// Function: entry_0019326c
// Address: 0x19326c - 0x193284
void entry_0019326c_0x19326c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019326c_0x19326c");
#endif

    switch (ctx->pc) {
        case 0x19327cu: goto label_19327c;
        default: break;
    }

    ctx->pc = 0x19326cu;

label_19326c:
    // 0x19326c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19326cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193270:
    // 0x193270: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x193270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_193274:
    // 0x193274: 0x320f809  jalr        $t9
label_193278:
    if (ctx->pc == 0x193278u) {
        ctx->pc = 0x193278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193274u;
        // 0x193278: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19327Cu;
        goto label_19327c;
    }
    ctx->pc = 0x193274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19327Cu);
        ctx->pc = 0x193278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193274u;
        // 0x193278: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193274u, 0x19327Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19327Cu;
label_19327c:
    // 0x19327c: 0x10000005  b           . + 4 + (0x5 << 2)
label_193280:
    if (ctx->pc == 0x193280u) {
        ctx->pc = 0x193284u;
        goto label_fallthrough_0x19327c;
    }
    ctx->pc = 0x19327Cu;
    {
        const bool branch_taken_0x19327c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19327c) {
            ctx->pc = 0x193294u;
            return;
        }
    }
label_fallthrough_0x19327c:
    ctx->pc = 0x193284u;
}
