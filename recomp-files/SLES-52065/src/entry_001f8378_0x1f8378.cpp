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

// Function: entry_001f8378
// Address: 0x1f8378 - 0x1f8394
void entry_001f8378_0x1f8378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8378_0x1f8378");
#endif

    switch (ctx->pc) {
        case 0x1f8384u: goto label_1f8384;
        default: break;
    }

    ctx->pc = 0x1f8378u;

    // 0x1f8378: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x1f8378u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x1f837c: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F837Cu;
    SET_GPR_U32(ctx, 31, 0x1F8384u);
    ctx->pc = 0x1F8380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F837Cu;
    // 0x1f8380: 0x8e44d6bc  lw          $a0, -0x2944($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F837Cu, 0x1F8384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8384u;
label_1f8384:
    // 0x1f8384: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8384u;
    {
        const bool branch_taken_0x1f8384 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F8388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8384u;
        // 0x1f8388: 0x3c070039  lui         $a3, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8384) {
            ctx->pc = 0x1F8394u;
            return;
        }
    }
    ctx->pc = 0x1F838Cu;
    // 0x1f838c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1F838Cu;
    {
        const bool branch_taken_0x1f838c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F838Cu;
        // 0x1f8390: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f838c) {
            ctx->pc = 0x1F83E8u;
            return;
        }
    }
    ctx->pc = 0x1F8394u;
}
