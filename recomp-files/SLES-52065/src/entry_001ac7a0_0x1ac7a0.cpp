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

// Function: entry_001ac7a0
// Address: 0x1ac7a0 - 0x1ac7e8
void entry_001ac7a0_0x1ac7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac7a0_0x1ac7a0");
#endif

    switch (ctx->pc) {
        case 0x1ac7a8u: goto label_1ac7a8;
        case 0x1ac7c0u: goto label_1ac7c0;
        default: break;
    }

    ctx->pc = 0x1ac7a0u;

    // 0x1ac7a0: 0xc062114  jal         func_188450
    ctx->pc = 0x1AC7A0u;
    SET_GPR_U32(ctx, 31, 0x1AC7A8u);
    ctx->pc = 0x1AC7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC7A0u;
    // 0x1ac7a4: 0x2404004d  addiu       $a0, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AC7A0u, 0x1AC7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC7A8u;
label_1ac7a8:
    // 0x1ac7a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ac7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac7ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ac7acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac7b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ac7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ac7b4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ac7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ac7b8: 0xc0620fc  jal         func_1883F0
    ctx->pc = 0x1AC7B8u;
    SET_GPR_U32(ctx, 31, 0x1AC7C0u);
    ctx->pc = 0x1AC7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC7B8u;
    // 0x1ac7bc: 0x52300a  movz        $a2, $v0, $s2 (Delay Slot)
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AC7B8u, 0x1AC7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC7C0u;
label_1ac7c0:
    // 0x1ac7c0: 0x8e2506e8  lw          $a1, 0x6E8($s1)
    ctx->pc = 0x1ac7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1768)));
    // 0x1ac7c4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AC7C4u;
    {
        const bool branch_taken_0x1ac7c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7C4u;
        // 0x1ac7c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac7c4) {
            ctx->pc = 0x1AC7E8u;
            return;
        }
    }
    ctx->pc = 0x1AC7CCu;
    // 0x1ac7cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac7d0: 0x52180a  movz        $v1, $v0, $s2
    ctx->pc = 0x1ac7d0u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1ac7d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ac7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ac7d8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1ac7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ac7dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ac7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ac7e0: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1AC7E0u;
    SET_GPR_U32(ctx, 31, 0x1AC7E8u);
    ctx->pc = 0x1AC7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC7E0u;
    // 0x1ac7e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1AC7E0u, 0x1AC7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC7E8u;
}
