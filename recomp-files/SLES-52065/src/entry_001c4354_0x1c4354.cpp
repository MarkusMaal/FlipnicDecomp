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

// Function: entry_001c4354
// Address: 0x1c4354 - 0x1c4378
void entry_001c4354_0x1c4354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4354_0x1c4354");
#endif

    switch (ctx->pc) {
        case 0x1c436cu: goto label_1c436c;
        default: break;
    }

    ctx->pc = 0x1c4354u;

    // 0x1c4354: 0x8e030230  lw          $v1, 0x230($s0)
    ctx->pc = 0x1c4354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x1c4358: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c4358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c435c: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1C435Cu;
    {
        const bool branch_taken_0x1c435c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C435Cu;
        // 0x1c4360: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c435c) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C4364u;
    // 0x1c4364: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1C4364u;
    SET_GPR_U32(ctx, 31, 0x1C436Cu);
    ctx->pc = 0x1C4368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4364u;
    // 0x1c4368: 0x8c24f5e0  lw          $a0, -0xA20($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1C4364u, 0x1C436Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C436Cu;
label_1c436c:
    // 0x1c436c: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x1c436cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1c4370: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1C4370u;
    {
        const bool branch_taken_0x1c4370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4370u;
        // 0x1c4374: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4370) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C4378u;
}
