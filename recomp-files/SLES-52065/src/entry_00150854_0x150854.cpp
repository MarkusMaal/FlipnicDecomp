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

// Function: entry_00150854
// Address: 0x150854 - 0x150880
void entry_00150854_0x150854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150854_0x150854");
#endif

    switch (ctx->pc) {
        case 0x150864u: goto label_150864;
        case 0x150870u: goto label_150870;
        default: break;
    }

    ctx->pc = 0x150854u;

    // 0x150854: 0x0  nop
    ctx->pc = 0x150854u;
    // NOP
    // 0x150858: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x150858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15085c: 0xc04c554  jal         func_131550
    ctx->pc = 0x15085Cu;
    SET_GPR_U32(ctx, 31, 0x150864u);
    ctx->pc = 0x150860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15085Cu;
    // 0x150860: 0x24847430  addiu       $a0, $a0, 0x7430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x15085Cu, 0x150864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150864u;
label_150864:
    // 0x150864: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x150864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150868: 0xc04c550  jal         func_131540
    ctx->pc = 0x150868u;
    SET_GPR_U32(ctx, 31, 0x150870u);
    ctx->pc = 0x15086Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150868u;
    // 0x15086c: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x150868u, 0x150870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150870u;
label_150870:
    // 0x150870: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x150870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150874: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x150874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x150878: 0x1462ffd8  bne         $v1, $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x150878u;
    {
        const bool branch_taken_0x150878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x150878) {
            ctx->pc = 0x1507DCu;
            return;
        }
    }
    ctx->pc = 0x150880u;
}
