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

// Function: entry_001f8890
// Address: 0x1f8890 - 0x1f88ac
void entry_001f8890_0x1f8890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8890_0x1f8890");
#endif

    switch (ctx->pc) {
        case 0x1f889cu: goto label_1f889c;
        default: break;
    }

    ctx->pc = 0x1f8890u;

    // 0x1f8890: 0x3c160022  lui         $s6, 0x22
    ctx->pc = 0x1f8890u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
    // 0x1f8894: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F8894u;
    SET_GPR_U32(ctx, 31, 0x1F889Cu);
    ctx->pc = 0x1F8898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8894u;
    // 0x1f8898: 0x8ec4d6bc  lw          $a0, -0x2944($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F8894u, 0x1F889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F889Cu;
label_1f889c:
    // 0x1f889c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F889Cu;
    {
        const bool branch_taken_0x1f889c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F88A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F889Cu;
        // 0x1f88a0: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f889c) {
            ctx->pc = 0x1F88ACu;
            return;
        }
    }
    ctx->pc = 0x1F88A4u;
    // 0x1f88a4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1F88A4u;
    {
        const bool branch_taken_0x1f88a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F88A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88A4u;
        // 0x1f88a8: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f88a4) {
            ctx->pc = 0x1F8934u;
            return;
        }
    }
    ctx->pc = 0x1F88ACu;
}
