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

// Function: entry_001f1c48
// Address: 0x1f1c48 - 0x1f1cd4
void entry_001f1c48_0x1f1c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1c48_0x1f1c48");
#endif

    switch (ctx->pc) {
        case 0x1f1c6cu: goto label_1f1c6c;
        case 0x1f1c8cu: goto label_1f1c8c;
        case 0x1f1cb4u: goto label_1f1cb4;
        case 0x1f1cc4u: goto label_1f1cc4;
        case 0x1f1cccu: goto label_1f1ccc;
        default: break;
    }

    ctx->pc = 0x1f1c48u;

    // 0x1f1c48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1c4c: 0xae570c0c  sw          $s7, 0xC0C($s2)
    ctx->pc = 0x1f1c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3084), GPR_U32(ctx, 23));
    // 0x1f1c50: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f1c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f1c54: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f1c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f1c58: 0x27d0e200  addiu       $s0, $fp, -0x1E00
    ctx->pc = 0x1f1c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294959616));
    // 0x1f1c5c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f1c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f1c60: 0x2694ee40  addiu       $s4, $s4, -0x11C0
    ctx->pc = 0x1f1c60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962752));
    // 0x1f1c64: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F1C64u;
    SET_GPR_U32(ctx, 31, 0x1F1C6Cu);
    ctx->pc = 0x1F1C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1C64u;
    // 0x1f1c68: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F1C64u, 0x1F1C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1C6Cu;
label_1f1c6c:
    // 0x1f1c6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f1c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c74: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f1c78: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1f1c78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1f1c7c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f1c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f1c80: 0x24050c14  addiu       $a1, $zero, 0xC14
    ctx->pc = 0x1f1c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3092));
    // 0x1f1c84: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F1C84u;
    SET_GPR_U32(ctx, 31, 0x1F1C8Cu);
    ctx->pc = 0x1F1C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1C84u;
    // 0x1f1c88: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F1C84u, 0x1F1C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1C8Cu;
label_1f1c8c:
    // 0x1f1c8c: 0x26a4f900  addiu       $a0, $s5, -0x700
    ctx->pc = 0x1f1c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965504));
    // 0x1f1c90: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f1c90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c94: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f1c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f1c98: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1f1c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f1c9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ca0: 0x24080c14  addiu       $t0, $zero, 0xC14
    ctx->pc = 0x1f1ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3092));
    // 0x1f1ca4: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1f1ca4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ca8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f1ca8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f1cac: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F1CACu;
    SET_GPR_U32(ctx, 31, 0x1F1CB4u);
    ctx->pc = 0x1F1CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1CACu;
    // 0x1f1cb0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F1CACu, 0x1F1CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CB4u;
label_1f1cb4:
    // 0x1f1cb4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1CB4u;
    {
        const bool branch_taken_0x1f1cb4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F1CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CB4u;
        // 0x1f1cb8: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1cb4) {
            ctx->pc = 0x1F1CD4u;
            return;
        }
    }
    ctx->pc = 0x1F1CBCu;
    // 0x1f1cbc: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1CBCu;
    SET_GPR_U32(ctx, 31, 0x1F1CC4u);
    ctx->pc = 0x1F1CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1CBCu;
    // 0x1f1cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1CBCu, 0x1F1CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CC4u;
label_1f1cc4:
    // 0x1f1cc4: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1CC4u;
    SET_GPR_U32(ctx, 31, 0x1F1CCCu);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1CC4u, 0x1F1CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CCCu;
label_1f1ccc:
    // 0x1f1ccc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F1CCCu;
    {
        const bool branch_taken_0x1f1ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CCCu;
        // 0x1f1cd0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ccc) {
            ctx->pc = 0x1F1D0Cu;
            return;
        }
    }
    ctx->pc = 0x1F1CD4u;
}
