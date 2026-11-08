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

// Function: entry_001f9778
// Address: 0x1f9778 - 0x1f9794
void entry_001f9778_0x1f9778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9778_0x1f9778");
#endif

    switch (ctx->pc) {
        case 0x1f9784u: goto label_1f9784;
        default: break;
    }

    ctx->pc = 0x1f9778u;

    // 0x1f9778: 0x3c130022  lui         $s3, 0x22
    ctx->pc = 0x1f9778u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
    // 0x1f977c: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F977Cu;
    SET_GPR_U32(ctx, 31, 0x1F9784u);
    ctx->pc = 0x1F9780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F977Cu;
    // 0x1f9780: 0x8e64d6bc  lw          $a0, -0x2944($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F977Cu, 0x1F9784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9784u;
label_1f9784:
    // 0x1f9784: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9784u;
    {
        const bool branch_taken_0x1f9784 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F9788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9784u;
        // 0x1f9788: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9784) {
            ctx->pc = 0x1F9794u;
            return;
        }
    }
    ctx->pc = 0x1F978Cu;
    // 0x1f978c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F978Cu;
    {
        const bool branch_taken_0x1f978c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F978Cu;
        // 0x1f9790: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f978c) {
            ctx->pc = 0x1F97F0u;
            return;
        }
    }
    ctx->pc = 0x1F9794u;
}
