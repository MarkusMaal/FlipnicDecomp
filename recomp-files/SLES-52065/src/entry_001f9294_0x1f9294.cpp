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

// Function: entry_001f9294
// Address: 0x1f9294 - 0x1f92bc
void entry_001f9294_0x1f9294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9294_0x1f9294");
#endif

    switch (ctx->pc) {
        case 0x1f92a0u: goto label_1f92a0;
        default: break;
    }

    ctx->pc = 0x1f9294u;

    // 0x1f9294: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x1f9294u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x1f9298: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F9298u;
    SET_GPR_U32(ctx, 31, 0x1F92A0u);
    ctx->pc = 0x1F929Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9298u;
    // 0x1f929c: 0x8e44d6bc  lw          $a0, -0x2944($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F9298u, 0x1F92A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F92A0u;
label_1f92a0:
    // 0x1f92a0: 0x4400028  bltz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1F92A0u;
    {
        const bool branch_taken_0x1f92a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F92A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92A0u;
        // 0x1f92a4: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f92a0) {
            ctx->pc = 0x1F9344u;
            return;
        }
    }
    ctx->pc = 0x1F92A8u;
    // 0x1f92a8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F92A8u;
    {
        const bool branch_taken_0x1f92a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f92a8) {
            ctx->pc = 0x1F92BCu;
            return;
        }
    }
    ctx->pc = 0x1F92B0u;
    // 0x1f92b0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1f92b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f92b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F92B4u;
    {
        const bool branch_taken_0x1f92b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F92B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92B4u;
        // 0x1f92b8: 0x3c100039  lui         $s0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f92b4) {
            ctx->pc = 0x1F92CCu;
            return;
        }
    }
    ctx->pc = 0x1F92BCu;
}
