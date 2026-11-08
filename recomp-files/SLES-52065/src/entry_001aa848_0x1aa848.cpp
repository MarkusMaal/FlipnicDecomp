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

// Function: entry_001aa848
// Address: 0x1aa848 - 0x1aa874
void entry_001aa848_0x1aa848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa848_0x1aa848");
#endif

    switch (ctx->pc) {
        case 0x1aa870u: goto label_1aa870;
        default: break;
    }

    ctx->pc = 0x1aa848u;

    // 0x1aa848: 0x8ea2070c  lw          $v0, 0x70C($s5)
    ctx->pc = 0x1aa848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1804)));
    // 0x1aa84c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1aa84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1aa850: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1aa850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1aa854: 0x8c42067c  lw          $v0, 0x67C($v0)
    ctx->pc = 0x1aa854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1660)));
    // 0x1aa858: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1aa858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1aa85c: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1AA85Cu;
    {
        const bool branch_taken_0x1aa85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA85Cu;
        // 0x1aa860: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa85c) {
            ctx->pc = 0x1AA758u;
            return;
        }
    }
    ctx->pc = 0x1AA864u;
    // 0x1aa864: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1aa864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa868: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AA868u;
    SET_GPR_U32(ctx, 31, 0x1AA870u);
    ctx->pc = 0x1AA86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA868u;
    // 0x1aa86c: 0xaea00714  sw          $zero, 0x714($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 1812), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AA868u, 0x1AA870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA870u;
label_1aa870:
    // 0x1aa870: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aa870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1aa874u;
}
