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

// Function: entry_001993bc
// Address: 0x1993bc - 0x1993e0
void entry_001993bc_0x1993bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001993bc_0x1993bc");
#endif

    switch (ctx->pc) {
        case 0x1993ccu: goto label_1993cc;
        case 0x1993d8u: goto label_1993d8;
        default: break;
    }

    ctx->pc = 0x1993bcu;

    // 0x1993bc: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x1993bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
    // 0x1993c0: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x1993c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1993c4: 0xc064ee0  jal         func_193B80
    ctx->pc = 0x1993C4u;
    SET_GPR_U32(ctx, 31, 0x1993CCu);
    ctx->pc = 0x1993C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1993C4u;
    // 0x1993c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B80u, 0x1993C4u, 0x1993CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1993CCu;
label_1993cc:
    // 0x1993cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1993ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1993d0: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1993D0u;
    SET_GPR_U32(ctx, 31, 0x1993D8u);
    ctx->pc = 0x1993D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1993D0u;
    // 0x1993d4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1993D0u, 0x1993D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1993D8u;
label_1993d8:
    // 0x1993d8: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x1993D8u;
    {
        const bool branch_taken_0x1993d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1993d8) {
            ctx->pc = 0x19993Cu;
            return;
        }
    }
    ctx->pc = 0x1993E0u;
}
