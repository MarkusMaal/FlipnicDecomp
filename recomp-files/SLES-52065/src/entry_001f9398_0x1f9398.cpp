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

// Function: entry_001f9398
// Address: 0x1f9398 - 0x1f93b4
void entry_001f9398_0x1f9398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9398_0x1f9398");
#endif

    switch (ctx->pc) {
        case 0x1f93a4u: goto label_1f93a4;
        default: break;
    }

    ctx->pc = 0x1f9398u;

    // 0x1f9398: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x1f9398u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x1f939c: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F939Cu;
    SET_GPR_U32(ctx, 31, 0x1F93A4u);
    ctx->pc = 0x1F93A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F939Cu;
    // 0x1f93a0: 0x8e44d6bc  lw          $a0, -0x2944($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F939Cu, 0x1F93A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F93A4u;
label_1f93a4:
    // 0x1f93a4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F93A4u;
    {
        const bool branch_taken_0x1f93a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F93A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93A4u;
        // 0x1f93a8: 0x3c070039  lui         $a3, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f93a4) {
            ctx->pc = 0x1F93B4u;
            return;
        }
    }
    ctx->pc = 0x1F93ACu;
    // 0x1f93ac: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1F93ACu;
    {
        const bool branch_taken_0x1f93ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F93B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93ACu;
        // 0x1f93b0: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f93ac) {
            ctx->pc = 0x1F9408u;
            return;
        }
    }
    ctx->pc = 0x1F93B4u;
}
