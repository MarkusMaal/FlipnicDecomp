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

// Function: caseD_0
// Address: 0x194aa0 - 0x194adc
void caseD_0_0x194aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x194aa0");
#endif

    switch (ctx->pc) {
        case 0x194ab0u: goto label_194ab0;
        case 0x194abcu: goto label_194abc;
        case 0x194ad4u: goto label_194ad4;
        default: break;
    }

    ctx->pc = 0x194aa0u;

    // 0x194aa0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x194aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x194aa4: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x194aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x194aa8: 0xc063f7c  jal         func_18FDF0
    ctx->pc = 0x194AA8u;
    SET_GPR_U32(ctx, 31, 0x194AB0u);
    ctx->pc = 0x194AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194AA8u;
    // 0x194aac: 0x7fa000b0  sq          $zero, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x194AA8u, 0x194AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194AB0u;
label_194ab0:
    // 0x194ab0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194ab4: 0xc0648ec  jal         func_1923B0
    ctx->pc = 0x194AB4u;
    SET_GPR_U32(ctx, 31, 0x194ABCu);
    ctx->pc = 0x194AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194AB4u;
    // 0x194ab8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1923B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923B0u, 0x194AB4u, 0x194ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194ABCu;
label_194abc:
    // 0x194abc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194ac0: 0x108000e7  beqz        $a0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x194AC0u;
    {
        const bool branch_taken_0x194ac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x194ac0) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194AC8u;
    // 0x194ac8: 0x8c820668  lw          $v0, 0x668($a0)
    ctx->pc = 0x194ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1640)));
    // 0x194acc: 0xc06433c  jal         func_190CF0
    ctx->pc = 0x194ACCu;
    SET_GPR_U32(ctx, 31, 0x194AD4u);
    ctx->pc = 0x194AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194ACCu;
    // 0x194ad0: 0xac820664  sw          $v0, 0x664($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 1636), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190CF0u, 0x194ACCu, 0x194AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194AD4u;
label_194ad4:
    // 0x194ad4: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x194AD4u;
    {
        const bool branch_taken_0x194ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194ad4) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194ADCu;
}
