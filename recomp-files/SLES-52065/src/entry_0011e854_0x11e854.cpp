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

// Function: entry_0011e854
// Address: 0x11e854 - 0x11e880
void entry_0011e854_0x11e854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e854_0x11e854");
#endif

    switch (ctx->pc) {
        case 0x11e86cu: goto label_11e86c;
        default: break;
    }

    ctx->pc = 0x11e854u;

    // 0x11e854: 0x8e42052c  lw          $v0, 0x52C($s2)
    ctx->pc = 0x11e854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1324)));
    // 0x11e858: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11e858u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11e85c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e860: 0x24c6e730  addiu       $a2, $a2, -0x18D0
    ctx->pc = 0x11e860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960944));
    // 0x11e864: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11E864u;
    SET_GPR_U32(ctx, 31, 0x11E86Cu);
    ctx->pc = 0x11E868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E864u;
    // 0x11e868: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11E864u, 0x11E86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E86Cu;
label_11e86c:
    // 0x11e86c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e870: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E870u;
    {
        const bool branch_taken_0x11e870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11e870) {
            ctx->pc = 0x11E880u;
            return;
        }
    }
    ctx->pc = 0x11E878u;
    // 0x11e878: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11E878u;
    {
        const bool branch_taken_0x11e878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E878u;
        // 0x11e87c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e878) {
            ctx->pc = 0x11E8C8u;
            return;
        }
    }
    ctx->pc = 0x11E880u;
}
