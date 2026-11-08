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

// Function: entry_00193170
// Address: 0x193170 - 0x193188
void entry_00193170_0x193170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193170_0x193170");
#endif

    switch (ctx->pc) {
        case 0x193180u: goto label_193180;
        default: break;
    }

    ctx->pc = 0x193170u;

label_193170:
    // 0x193170: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x193170u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193174:
    // 0x193174: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x193174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_193178:
    // 0x193178: 0x320f809  jalr        $t9
label_19317c:
    if (ctx->pc == 0x19317Cu) {
        ctx->pc = 0x19317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193178u;
        // 0x19317c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193180u;
        goto label_193180;
    }
    ctx->pc = 0x193178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193180u);
        ctx->pc = 0x19317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193178u;
        // 0x19317c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193178u, 0x193180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193180u;
label_193180:
    // 0x193180: 0x10000012  b           . + 4 + (0x12 << 2)
label_193184:
    if (ctx->pc == 0x193184u) {
        ctx->pc = 0x193184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193180u;
        // 0x193184: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193188u;
        goto label_fallthrough_0x193180;
    }
    ctx->pc = 0x193180u;
    {
        const bool branch_taken_0x193180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193180u;
        // 0x193184: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193180) {
            ctx->pc = 0x1931CCu;
            return;
        }
    }
label_fallthrough_0x193180:
    ctx->pc = 0x193188u;
}
