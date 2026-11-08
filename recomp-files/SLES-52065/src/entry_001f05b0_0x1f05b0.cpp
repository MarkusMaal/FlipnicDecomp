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

// Function: entry_001f05b0
// Address: 0x1f05b0 - 0x1f0634
void entry_001f05b0_0x1f05b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f05b0_0x1f05b0");
#endif

    switch (ctx->pc) {
        case 0x1f05c8u: goto label_1f05c8;
        case 0x1f05ecu: goto label_1f05ec;
        case 0x1f0614u: goto label_1f0614;
        case 0x1f0624u: goto label_1f0624;
        case 0x1f062cu: goto label_1f062c;
        default: break;
    }

    ctx->pc = 0x1f05b0u;

    // 0x1f05b0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f05b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f05b4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f05b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f05b8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f05b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f05bc: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1f05bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1f05c0: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F05C0u;
    SET_GPR_U32(ctx, 31, 0x1F05C8u);
    ctx->pc = 0x1F05C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F05C0u;
    // 0x1f05c4: 0x2634ee40  addiu       $s4, $s1, -0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F05C0u, 0x1F05C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F05C8u;
label_1f05c8:
    // 0x1f05c8: 0x26d0e200  addiu       $s0, $s6, -0x1E00
    ctx->pc = 0x1f05c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959616));
    // 0x1f05cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f05ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f05d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f05d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f05d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f05d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f05d8: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x1f05d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x1f05dc: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1f05dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x1f05e0: 0x24050420  addiu       $a1, $zero, 0x420
    ctx->pc = 0x1f05e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x1f05e4: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F05E4u;
    SET_GPR_U32(ctx, 31, 0x1F05ECu);
    ctx->pc = 0x1F05E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F05E4u;
    // 0x1f05e8: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F05E4u, 0x1F05ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F05ECu;
label_1f05ec:
    // 0x1f05ec: 0x26a4f900  addiu       $a0, $s5, -0x700
    ctx->pc = 0x1f05ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965504));
    // 0x1f05f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f05f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f05f4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f05f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f05f8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f05f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f05fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f05fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0600: 0x24080420  addiu       $t0, $zero, 0x420
    ctx->pc = 0x1f0600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x1f0604: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1f0604u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0608: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f0608u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f060c: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F060Cu;
    SET_GPR_U32(ctx, 31, 0x1F0614u);
    ctx->pc = 0x1F0610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F060Cu;
    // 0x1f0610: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F060Cu, 0x1F0614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0614u;
label_1f0614:
    // 0x1f0614: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0614u;
    {
        const bool branch_taken_0x1f0614 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F0618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0614u;
        // 0x1f0618: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0614) {
            ctx->pc = 0x1F0634u;
            return;
        }
    }
    ctx->pc = 0x1F061Cu;
    // 0x1f061c: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F061Cu;
    SET_GPR_U32(ctx, 31, 0x1F0624u);
    ctx->pc = 0x1F0620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F061Cu;
    // 0x1f0620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F061Cu, 0x1F0624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0624u;
label_1f0624:
    // 0x1f0624: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0624u;
    SET_GPR_U32(ctx, 31, 0x1F062Cu);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0624u, 0x1F062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F062Cu;
label_1f062c:
    // 0x1f062c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F062Cu;
    {
        const bool branch_taken_0x1f062c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F062Cu;
        // 0x1f0630: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f062c) {
            ctx->pc = 0x1F066Cu;
            return;
        }
    }
    ctx->pc = 0x1F0634u;
}
