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

// Function: entry_001ab590
// Address: 0x1ab590 - 0x1ab5d8
void entry_001ab590_0x1ab590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab590_0x1ab590");
#endif

    switch (ctx->pc) {
        case 0x1ab598u: goto label_1ab598;
        case 0x1ab5b0u: goto label_1ab5b0;
        default: break;
    }

    ctx->pc = 0x1ab590u;

    // 0x1ab590: 0xc062114  jal         func_188450
    ctx->pc = 0x1AB590u;
    SET_GPR_U32(ctx, 31, 0x1AB598u);
    ctx->pc = 0x1AB594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB590u;
    // 0x1ab594: 0x2404004d  addiu       $a0, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AB590u, 0x1AB598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB598u;
label_1ab598:
    // 0x1ab598: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ab598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab59c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ab59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab5a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ab5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ab5a4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ab5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ab5a8: 0xc0620fc  jal         func_1883F0
    ctx->pc = 0x1AB5A8u;
    SET_GPR_U32(ctx, 31, 0x1AB5B0u);
    ctx->pc = 0x1AB5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB5A8u;
    // 0x1ab5ac: 0x50300a  movz        $a2, $v0, $s0 (Delay Slot)
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AB5A8u, 0x1AB5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB5B0u;
label_1ab5b0:
    // 0x1ab5b0: 0x8e8506e8  lw          $a1, 0x6E8($s4)
    ctx->pc = 0x1ab5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1768)));
    // 0x1ab5b4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB5B4u;
    {
        const bool branch_taken_0x1ab5b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5B4u;
        // 0x1ab5b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab5b4) {
            ctx->pc = 0x1AB5D8u;
            return;
        }
    }
    ctx->pc = 0x1AB5BCu;
    // 0x1ab5bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab5c0: 0x50180a  movz        $v1, $v0, $s0
    ctx->pc = 0x1ab5c0u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1ab5c4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ab5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ab5c8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1ab5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ab5cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ab5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ab5d0: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1AB5D0u;
    SET_GPR_U32(ctx, 31, 0x1AB5D8u);
    ctx->pc = 0x1AB5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB5D0u;
    // 0x1ab5d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1AB5D0u, 0x1AB5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB5D8u;
}
