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

// Function: entry_001f7874
// Address: 0x1f7874 - 0x1f789c
void entry_001f7874_0x1f7874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7874_0x1f7874");
#endif

    switch (ctx->pc) {
        case 0x1f7890u: goto label_1f7890;
        default: break;
    }

    ctx->pc = 0x1f7874u;

    // 0x1f7874: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f7874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f7878: 0x8c43bb34  lw          $v1, -0x44CC($v0)
    ctx->pc = 0x1f7878u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21BB34u));
    // 0x1f787c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F787Cu;
    {
        const bool branch_taken_0x1f787c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F787Cu;
        // 0x1f7880: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f787c) {
            ctx->pc = 0x1F789Cu;
            return;
        }
    }
    ctx->pc = 0x1F7884u;
    // 0x1f7884: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f7884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f7888: 0xc07ba5a  jal         func_1EE968
    ctx->pc = 0x1F7888u;
    SET_GPR_U32(ctx, 31, 0x1F7890u);
    ctx->pc = 0x1F788Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7888u;
    // 0x1f788c: 0x2484ccd0  addiu       $a0, $a0, -0x3330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE968u, 0x1F7888u, 0x1F7890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7890u;
label_1f7890:
    // 0x1f7890: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F7890u;
    {
        const bool branch_taken_0x1f7890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7890u;
        // 0x1f7894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7890) {
            ctx->pc = 0x1F789Cu;
            return;
        }
    }
    ctx->pc = 0x1F7898u;
    // 0x1f7898: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f7898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1f789cu;
}
