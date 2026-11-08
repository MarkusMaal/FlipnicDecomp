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

// Function: entry_00130558
// Address: 0x130558 - 0x130594
void entry_00130558_0x130558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130558_0x130558");
#endif

    switch (ctx->pc) {
        case 0x130570u: goto label_130570;
        case 0x13058cu: goto label_13058c;
        default: break;
    }

    ctx->pc = 0x130558u;

    // 0x130558: 0x83828510  lb          $v0, -0x7AF0($gp)
    ctx->pc = 0x130558u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935824)));
    // 0x13055c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13055Cu;
    {
        const bool branch_taken_0x13055c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13055c) {
            ctx->pc = 0x130594u;
            return;
        }
    }
    ctx->pc = 0x130564u;
    // 0x130564: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x130564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x130568: 0xc04c4b8  jal         func_1312E0
    ctx->pc = 0x130568u;
    SET_GPR_U32(ctx, 31, 0x130570u);
    ctx->pc = 0x13056Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130568u;
    // 0x13056c: 0x24846280  addiu       $a0, $a0, 0x6280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1312E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1312E0u, 0x130568u, 0x130570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130570u;
label_130570:
    // 0x130570: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x130570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x130574: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x130574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x130578: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x130578u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x13057c: 0x24846280  addiu       $a0, $a0, 0x6280
    ctx->pc = 0x13057cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    // 0x130580: 0x24a502a0  addiu       $a1, $a1, 0x2A0
    ctx->pc = 0x130580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 672));
    // 0x130584: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x130584u;
    SET_GPR_U32(ctx, 31, 0x13058Cu);
    ctx->pc = 0x130588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130584u;
    // 0x130588: 0x24c66270  addiu       $a2, $a2, 0x6270 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x130584u, 0x13058Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13058Cu;
label_13058c:
    // 0x13058c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13058cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130590: 0xa3828510  sb          $v0, -0x7AF0($gp)
    ctx->pc = 0x130590u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935824), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x130594u;
}
