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

// Function: entry_001f8434
// Address: 0x1f8434 - 0x1f8450
void entry_001f8434_0x1f8434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8434_0x1f8434");
#endif

    switch (ctx->pc) {
        case 0x1f8440u: goto label_1f8440;
        default: break;
    }

    ctx->pc = 0x1f8434u;

    // 0x1f8434: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x1f8434u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x1f8438: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F8438u;
    SET_GPR_U32(ctx, 31, 0x1F8440u);
    ctx->pc = 0x1F843Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8438u;
    // 0x1f843c: 0x8e24d6bc  lw          $a0, -0x2944($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F8438u, 0x1F8440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8440u;
label_1f8440:
    // 0x1f8440: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8440u;
    {
        const bool branch_taken_0x1f8440 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F8444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8440u;
        // 0x1f8444: 0x3c070039  lui         $a3, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8440) {
            ctx->pc = 0x1F8450u;
            return;
        }
    }
    ctx->pc = 0x1F8448u;
    // 0x1f8448: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F8448u;
    {
        const bool branch_taken_0x1f8448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8448u;
        // 0x1f844c: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8448) {
            ctx->pc = 0x1F84A8u;
            return;
        }
    }
    ctx->pc = 0x1F8450u;
}
