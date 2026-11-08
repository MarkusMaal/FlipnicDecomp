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

// Function: entry_001f8658
// Address: 0x1f8658 - 0x1f8674
void entry_001f8658_0x1f8658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8658_0x1f8658");
#endif

    switch (ctx->pc) {
        case 0x1f8664u: goto label_1f8664;
        default: break;
    }

    ctx->pc = 0x1f8658u;

    // 0x1f8658: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x1f8658u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x1f865c: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F865Cu;
    SET_GPR_U32(ctx, 31, 0x1F8664u);
    ctx->pc = 0x1F8660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F865Cu;
    // 0x1f8660: 0x8e44d6bc  lw          $a0, -0x2944($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F865Cu, 0x1F8664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8664u;
label_1f8664:
    // 0x1f8664: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8664u;
    {
        const bool branch_taken_0x1f8664 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F8668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8664u;
        // 0x1f8668: 0x3c070039  lui         $a3, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8664) {
            ctx->pc = 0x1F8674u;
            return;
        }
    }
    ctx->pc = 0x1F866Cu;
    // 0x1f866c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1F866Cu;
    {
        const bool branch_taken_0x1f866c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F866Cu;
        // 0x1f8670: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f866c) {
            ctx->pc = 0x1F86C8u;
            return;
        }
    }
    ctx->pc = 0x1F8674u;
}
