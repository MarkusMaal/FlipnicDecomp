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

// Function: entry_001cca44
// Address: 0x1cca44 - 0x1cca84
void entry_001cca44_0x1cca44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cca44_0x1cca44");
#endif

    switch (ctx->pc) {
        case 0x1cca50u: goto label_1cca50;
        case 0x1cca64u: goto label_1cca64;
        case 0x1cca74u: goto label_1cca74;
        case 0x1cca7cu: goto label_1cca7c;
        default: break;
    }

    ctx->pc = 0x1cca44u;

    // 0x1cca44: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cca44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cca48: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CCA48u;
    SET_GPR_U32(ctx, 31, 0x1CCA50u);
    ctx->pc = 0x1CCA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCA48u;
    // 0x1cca4c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CCA48u, 0x1CCA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCA50u;
label_1cca50:
    // 0x1cca50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cca50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cca54: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1cca54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1cca58: 0x24428460  addiu       $v0, $v0, -0x7BA0
    ctx->pc = 0x1cca58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935648));
    // 0x1cca5c: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CCA5Cu;
    SET_GPR_U32(ctx, 31, 0x1CCA64u);
    ctx->pc = 0x1CCA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCA5Cu;
    // 0x1cca60: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CCA5Cu, 0x1CCA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCA64u;
label_1cca64:
    // 0x1cca64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cca64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cca68: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cca68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cca6c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CCA6Cu;
    SET_GPR_U32(ctx, 31, 0x1CCA74u);
    ctx->pc = 0x1CCA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCA6Cu;
    // 0x1cca70: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CCA6Cu, 0x1CCA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCA74u;
label_1cca74:
    // 0x1cca74: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CCA74u;
    SET_GPR_U32(ctx, 31, 0x1CCA7Cu);
    ctx->pc = 0x1CCA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCA74u;
    // 0x1cca78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CCA74u, 0x1CCA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCA7Cu;
label_1cca7c:
    // 0x1cca7c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1cca7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1cca80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cca80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1cca84u;
}
