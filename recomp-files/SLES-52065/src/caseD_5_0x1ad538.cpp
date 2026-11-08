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

// Function: caseD_5
// Address: 0x1ad538 - 0x1ad55c
void caseD_5_0x1ad538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1ad538");
#endif

    switch (ctx->pc) {
        case 0x1ad540u: goto label_1ad540;
        case 0x1ad554u: goto label_1ad554;
        default: break;
    }

    ctx->pc = 0x1ad538u;

    // 0x1ad538: 0xc058018  jal         func_160060
    ctx->pc = 0x1AD538u;
    SET_GPR_U32(ctx, 31, 0x1AD540u);
    ctx->pc = 0x1AD53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD538u;
    // 0x1ad53c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x1AD538u, 0x1AD540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD540u;
label_1ad540:
    // 0x1ad540: 0x8e2206b4  lw          $v0, 0x6B4($s1)
    ctx->pc = 0x1ad540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1716)));
    // 0x1ad544: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1ad544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1ad548: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ad548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ad54c: 0xc06b6ec  jal         func_1ADBB0
    ctx->pc = 0x1AD54Cu;
    SET_GPR_U32(ctx, 31, 0x1AD554u);
    ctx->pc = 0x1AD550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD54Cu;
    // 0x1ad550: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADBB0u, 0x1AD54Cu, 0x1AD554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD554u;
label_1ad554:
    // 0x1ad554: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AD554u;
    SET_GPR_U32(ctx, 31, 0x1AD55Cu);
    ctx->pc = 0x1AD558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD554u;
    // 0x1ad558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AD554u, 0x1AD55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD55Cu;
}
