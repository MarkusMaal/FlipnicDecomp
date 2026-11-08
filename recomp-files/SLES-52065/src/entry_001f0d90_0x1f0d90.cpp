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

// Function: entry_001f0d90
// Address: 0x1f0d90 - 0x1f0e18
void entry_001f0d90_0x1f0d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0d90_0x1f0d90");
#endif

    switch (ctx->pc) {
        case 0x1f0db0u: goto label_1f0db0;
        case 0x1f0dd0u: goto label_1f0dd0;
        case 0x1f0df8u: goto label_1f0df8;
        case 0x1f0e08u: goto label_1f0e08;
        case 0x1f0e10u: goto label_1f0e10;
        default: break;
    }

    ctx->pc = 0x1f0d90u;

    // 0x1f0d90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0d94: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f0d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f0d98: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f0d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f0d9c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f0d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f0da0: 0x26f0e200  addiu       $s0, $s7, -0x1E00
    ctx->pc = 0x1f0da0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959616));
    // 0x1f0da4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1f0da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1f0da8: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F0DA8u;
    SET_GPR_U32(ctx, 31, 0x1F0DB0u);
    ctx->pc = 0x1F0DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0DA8u;
    // 0x1f0dac: 0x2694ee40  addiu       $s4, $s4, -0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F0DA8u, 0x1F0DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0DB0u;
label_1f0db0:
    // 0x1f0db0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f0db0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0db8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f0db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0dbc: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x1f0dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x1f0dc0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1f0dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x1f0dc4: 0x24050c10  addiu       $a1, $zero, 0xC10
    ctx->pc = 0x1f0dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3088));
    // 0x1f0dc8: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F0DC8u;
    SET_GPR_U32(ctx, 31, 0x1F0DD0u);
    ctx->pc = 0x1F0DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0DC8u;
    // 0x1f0dcc: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F0DC8u, 0x1F0DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0DD0u;
label_1f0dd0:
    // 0x1f0dd0: 0x26a4f900  addiu       $a0, $s5, -0x700
    ctx->pc = 0x1f0dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965504));
    // 0x1f0dd4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f0dd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0dd8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f0dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f0ddc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1f0ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1f0de0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f0de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0de4: 0x24080c10  addiu       $t0, $zero, 0xC10
    ctx->pc = 0x1f0de4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3088));
    // 0x1f0de8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1f0de8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0dec: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f0decu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0df0: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F0DF0u;
    SET_GPR_U32(ctx, 31, 0x1F0DF8u);
    ctx->pc = 0x1F0DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0DF0u;
    // 0x1f0df4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F0DF0u, 0x1F0DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0DF8u;
label_1f0df8:
    // 0x1f0df8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0DF8u;
    {
        const bool branch_taken_0x1f0df8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F0DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0DF8u;
        // 0x1f0dfc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0df8) {
            ctx->pc = 0x1F0E18u;
            return;
        }
    }
    ctx->pc = 0x1F0E00u;
    // 0x1f0e00: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0E00u;
    SET_GPR_U32(ctx, 31, 0x1F0E08u);
    ctx->pc = 0x1F0E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0E00u;
    // 0x1f0e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0E00u, 0x1F0E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0E08u;
label_1f0e08:
    // 0x1f0e08: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0E08u;
    SET_GPR_U32(ctx, 31, 0x1F0E10u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0E08u, 0x1F0E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0E10u;
label_1f0e10:
    // 0x1f0e10: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F0E10u;
    {
        const bool branch_taken_0x1f0e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E10u;
        // 0x1f0e14: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0e10) {
            ctx->pc = 0x1F0E50u;
            return;
        }
    }
    ctx->pc = 0x1F0E18u;
}
