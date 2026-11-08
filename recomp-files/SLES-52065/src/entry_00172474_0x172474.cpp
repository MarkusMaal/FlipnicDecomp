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

// Function: entry_00172474
// Address: 0x172474 - 0x1724a8
void entry_00172474_0x172474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172474_0x172474");
#endif

    ctx->pc = 0x172474u;

    // 0x172474: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x172474u;
    {
        const bool branch_taken_0x172474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172474u;
        // 0x172478: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172474) {
            ctx->pc = 0x1724D4u;
            return;
        }
    }
    ctx->pc = 0x17247Cu;
    // 0x17247c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17247cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x172480: 0x2442acb0  addiu       $v0, $v0, -0x5350
    ctx->pc = 0x172480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945968));
    // 0x172484: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x172484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x172488: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x172488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x17248c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17248Cu;
    {
        const bool branch_taken_0x17248c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17248c) {
            ctx->pc = 0x1724D0u;
            return;
        }
    }
    ctx->pc = 0x172494u;
    // 0x172494: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x172494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x172498: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x172498u;
    {
        const bool branch_taken_0x172498 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172498) {
            ctx->pc = 0x1724A8u;
            return;
        }
    }
    ctx->pc = 0x1724A0u;
    // 0x1724a0: 0xc040150  jal         func_100540
    ctx->pc = 0x1724A0u;
    SET_GPR_U32(ctx, 31, 0x1724A8u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x1724A0u, 0x1724A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1724A8u;
}
