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

// Function: entry_001f89a4
// Address: 0x1f89a4 - 0x1f89c0
void entry_001f89a4_0x1f89a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f89a4_0x1f89a4");
#endif

    switch (ctx->pc) {
        case 0x1f89b0u: goto label_1f89b0;
        default: break;
    }

    ctx->pc = 0x1f89a4u;

    // 0x1f89a4: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1f89a4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
    // 0x1f89a8: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F89A8u;
    SET_GPR_U32(ctx, 31, 0x1F89B0u);
    ctx->pc = 0x1F89ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F89A8u;
    // 0x1f89ac: 0x8ea4d6bc  lw          $a0, -0x2944($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F89A8u, 0x1F89B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F89B0u;
label_1f89b0:
    // 0x1f89b0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F89B0u;
    {
        const bool branch_taken_0x1f89b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F89B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89B0u;
        // 0x1f89b4: 0x3c130039  lui         $s3, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f89b0) {
            ctx->pc = 0x1F89C0u;
            return;
        }
    }
    ctx->pc = 0x1F89B8u;
    // 0x1f89b8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1F89B8u;
    {
        const bool branch_taken_0x1f89b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F89BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89B8u;
        // 0x1f89bc: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f89b8) {
            ctx->pc = 0x1F8AB0u;
            return;
        }
    }
    ctx->pc = 0x1F89C0u;
}
