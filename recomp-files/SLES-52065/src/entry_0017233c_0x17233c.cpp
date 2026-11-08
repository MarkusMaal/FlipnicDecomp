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

// Function: entry_0017233c
// Address: 0x17233c - 0x17236c
void entry_0017233c_0x17233c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017233c_0x17233c");
#endif

    switch (ctx->pc) {
        case 0x172364u: goto label_172364;
        default: break;
    }

    ctx->pc = 0x17233cu;

    // 0x17233c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17233Cu;
    {
        const bool branch_taken_0x17233c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17233Cu;
        // 0x172340: 0x26220088  addiu       $v0, $s1, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17233c) {
            ctx->pc = 0x172370u;
            return;
        }
    }
    ctx->pc = 0x172344u;
    // 0x172344: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x172344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x172348: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x172348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
    // 0x17234c: 0xae2200a4  sw          $v0, 0xA4($s1)
    ctx->pc = 0x17234cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
    // 0x172350: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x172350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x172354: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172354u;
    {
        const bool branch_taken_0x172354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172354) {
            ctx->pc = 0x17236Cu;
            return;
        }
    }
    ctx->pc = 0x17235Cu;
    // 0x17235c: 0xc04018c  jal         func_100630
    ctx->pc = 0x17235Cu;
    SET_GPR_U32(ctx, 31, 0x172364u);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x17235Cu, 0x172364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172364u;
label_172364:
    // 0x172364: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x172364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
    // 0x172368: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x172368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
    ctx->pc = 0x17236cu;
}
