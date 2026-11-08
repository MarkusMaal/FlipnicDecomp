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

// Function: entry_001ca838
// Address: 0x1ca838 - 0x1ca868
void entry_001ca838_0x1ca838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca838_0x1ca838");
#endif

    switch (ctx->pc) {
        case 0x1ca848u: goto label_1ca848;
        case 0x1ca850u: goto label_1ca850;
        case 0x1ca860u: goto label_1ca860;
        default: break;
    }

    ctx->pc = 0x1ca838u;

    // 0x1ca838: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1ca838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ca83c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca840: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA840u;
    SET_GPR_U32(ctx, 31, 0x1CA848u);
    ctx->pc = 0x1CA844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA840u;
    // 0x1ca844: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA840u, 0x1CA848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA848u;
label_1ca848:
    // 0x1ca848: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1CA848u;
    SET_GPR_U32(ctx, 31, 0x1CA850u);
    ctx->pc = 0x1CA84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA848u;
    // 0x1ca84c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1CA848u, 0x1CA850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA850u;
label_1ca850:
    // 0x1ca850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca854: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ca854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ca858: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA858u;
    SET_GPR_U32(ctx, 31, 0x1CA860u);
    ctx->pc = 0x1CA85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA858u;
    // 0x1ca85c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA858u, 0x1CA860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA860u;
label_1ca860:
    // 0x1ca860: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CA860u;
    SET_GPR_U32(ctx, 31, 0x1CA868u);
    ctx->pc = 0x1CA864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA860u;
    // 0x1ca864: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CA860u, 0x1CA868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA868u;
}
