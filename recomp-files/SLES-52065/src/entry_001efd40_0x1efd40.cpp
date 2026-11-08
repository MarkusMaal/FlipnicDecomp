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

// Function: entry_001efd40
// Address: 0x1efd40 - 0x1efd88
void entry_001efd40_0x1efd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efd40_0x1efd40");
#endif

    switch (ctx->pc) {
        case 0x1efd68u: goto label_1efd68;
        case 0x1efd78u: goto label_1efd78;
        case 0x1efd80u: goto label_1efd80;
        default: break;
    }

    ctx->pc = 0x1efd40u;

    // 0x1efd40: 0x26c4f900  addiu       $a0, $s6, -0x700
    ctx->pc = 0x1efd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965504));
    // 0x1efd44: 0x26a7e200  addiu       $a3, $s5, -0x1E00
    ctx->pc = 0x1efd44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294959616));
    // 0x1efd48: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1efd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1efd4c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1efd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1efd50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1efd50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efd54: 0x2408001c  addiu       $t0, $zero, 0x1C
    ctx->pc = 0x1efd54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1efd58: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1efd58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efd5c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1efd5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1efd60: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1EFD60u;
    SET_GPR_U32(ctx, 31, 0x1EFD68u);
    ctx->pc = 0x1EFD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFD60u;
    // 0x1efd64: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1EFD60u, 0x1EFD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFD68u;
label_1efd68:
    // 0x1efd68: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EFD68u;
    {
        const bool branch_taken_0x1efd68 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EFD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD68u;
        // 0x1efd6c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efd68) {
            ctx->pc = 0x1EFD88u;
            return;
        }
    }
    ctx->pc = 0x1EFD70u;
    // 0x1efd70: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EFD70u;
    SET_GPR_U32(ctx, 31, 0x1EFD78u);
    ctx->pc = 0x1EFD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFD70u;
    // 0x1efd74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EFD70u, 0x1EFD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFD78u;
label_1efd78:
    // 0x1efd78: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EFD78u;
    SET_GPR_U32(ctx, 31, 0x1EFD80u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EFD78u, 0x1EFD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFD80u;
label_1efd80:
    // 0x1efd80: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1EFD80u;
    {
        const bool branch_taken_0x1efd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD80u;
        // 0x1efd84: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efd80) {
            ctx->pc = 0x1EFDD8u;
            return;
        }
    }
    ctx->pc = 0x1EFD88u;
}
