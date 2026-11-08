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

// Function: FUN_001ee778
// Address: 0x1ee778 - 0x1ee964
void FUN_001ee778_0x1ee778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ee778_0x1ee778");
#endif

    switch (ctx->pc) {
        case 0x1ee7d0u: goto label_1ee7d0;
        case 0x1ee834u: goto label_1ee834;
        case 0x1ee84cu: goto label_1ee84c;
        case 0x1ee85cu: goto label_1ee85c;
        case 0x1ee8a4u: goto label_1ee8a4;
        case 0x1ee8c4u: goto label_1ee8c4;
        case 0x1ee8d4u: goto label_1ee8d4;
        case 0x1ee900u: goto label_1ee900;
        case 0x1ee910u: goto label_1ee910;
        case 0x1ee918u: goto label_1ee918;
        case 0x1ee928u: goto label_1ee928;
        case 0x1ee930u: goto label_1ee930;
        default: break;
    }

    ctx->pc = 0x1ee778u;

    // 0x1ee778: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ee778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1ee77c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1ee77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1ee780: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ee780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee784: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1ee784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1ee788: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x1ee788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x1ee78c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1ee78cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1ee790: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1ee790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1ee794: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1ee794u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee798: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1ee798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1ee79c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1ee79cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee7a0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1ee7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1ee7a4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1ee7a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee7a8: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1ee7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1ee7ac: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x1ee7acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee7b0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1ee7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1ee7b4: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x1ee7b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee7b8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ee7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1ee7bc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1ee7bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee7c0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1ee7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1ee7c4: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x1ee7c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee7c8: 0xc07b80c  jal         func_1EE030
    ctx->pc = 0x1EE7C8u;
    SET_GPR_U32(ctx, 31, 0x1EE7D0u);
    ctx->pc = 0x1EE7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE7C8u;
    // 0x1ee7cc: 0x2484e180  addiu       $a0, $a0, -0x1E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE030u, 0x1EE7C8u, 0x1EE7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE7D0u;
label_1ee7d0:
    // 0x1ee7d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ee7d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee7d4: 0x12000057  beqz        $s0, . + 4 + (0x57 << 2)
    ctx->pc = 0x1EE7D4u;
    {
        const bool branch_taken_0x1ee7d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7D4u;
        // 0x1ee7d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7d4) {
            ctx->pc = 0x1EE934u;
            goto label_1ee934;
        }
    }
    ctx->pc = 0x1EE7DCu;
    // 0x1ee7dc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1ee7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ee7e0: 0x33c40002  andi        $a0, $fp, 0x2
    ctx->pc = 0x1ee7e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
    // 0x1ee7e4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1ee7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1ee7e8: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1ee7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x1ee7ec: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1ee7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1ee7f0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1ee7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1ee7f4: 0xae37001c  sw          $s7, 0x1C($s1)
    ctx->pc = 0x1ee7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 23));
    // 0x1ee7f8: 0xae160020  sw          $s6, 0x20($s0)
    ctx->pc = 0x1ee7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 22));
    // 0x1ee7fc: 0xae120024  sw          $s2, 0x24($s0)
    ctx->pc = 0x1ee7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
    // 0x1ee800: 0xae140028  sw          $s4, 0x28($s0)
    ctx->pc = 0x1ee800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 20));
    // 0x1ee804: 0xae13002c  sw          $s3, 0x2C($s0)
    ctx->pc = 0x1ee804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 19));
    // 0x1ee808: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x1ee808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x1ee80c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1ee80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1ee810: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x1ee810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x1ee814: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EE814u;
    {
        const bool branch_taken_0x1ee814 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE814u;
        // 0x1ee818: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee814) {
            ctx->pc = 0x1EE85Cu;
            goto label_1ee85c;
        }
    }
    ctx->pc = 0x1EE81Cu;
    // 0x1ee81c: 0x16b40007  bne         $s5, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EE81Cu;
    {
        const bool branch_taken_0x1ee81c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 20));
        ctx->pc = 0x1EE820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE81Cu;
        // 0x1ee820: 0x253102a  slt         $v0, $s2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee81c) {
            ctx->pc = 0x1EE83Cu;
            goto label_1ee83c;
        }
    }
    ctx->pc = 0x1EE824u;
    // 0x1ee824: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ee824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee828: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ee828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee82c: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1EE82Cu;
    SET_GPR_U32(ctx, 31, 0x1EE834u);
    ctx->pc = 0x1EE830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE82Cu;
    // 0x1ee830: 0x242280a  movz        $a1, $s2, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1EE82Cu, 0x1EE834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE834u;
label_1ee834:
    // 0x1ee834: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EE834u;
    {
        const bool branch_taken_0x1ee834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE834u;
        // 0x1ee838: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee834) {
            ctx->pc = 0x1EE860u;
            goto label_1ee860;
        }
    }
    ctx->pc = 0x1EE83Cu;
label_1ee83c:
    // 0x1ee83c: 0x1a400003  blez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE83Cu;
    {
        const bool branch_taken_0x1ee83c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1EE840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE83Cu;
        // 0x1ee840: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee83c) {
            ctx->pc = 0x1EE84Cu;
            goto label_1ee84c;
        }
    }
    ctx->pc = 0x1EE844u;
    // 0x1ee844: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1EE844u;
    SET_GPR_U32(ctx, 31, 0x1EE84Cu);
    ctx->pc = 0x1EE848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE844u;
    // 0x1ee848: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1EE844u, 0x1EE84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE84Cu;
label_1ee84c:
    // 0x1ee84c: 0x1a600003  blez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE84Cu;
    {
        const bool branch_taken_0x1ee84c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1EE850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE84Cu;
        // 0x1ee850: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee84c) {
            ctx->pc = 0x1EE85Cu;
            goto label_1ee85c;
        }
    }
    ctx->pc = 0x1EE854u;
    // 0x1ee854: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1EE854u;
    SET_GPR_U32(ctx, 31, 0x1EE85Cu);
    ctx->pc = 0x1EE858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE854u;
    // 0x1ee858: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1EE854u, 0x1EE85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE85Cu;
label_1ee85c:
    // 0x1ee85c: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x1ee85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_1ee860:
    // 0x1ee860: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EE860u;
    {
        const bool branch_taken_0x1ee860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee860) {
            ctx->pc = 0x1EE864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE860u;
            // 0x1ee864: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE8B4u;
            goto label_1ee8b4;
        }
    }
    ctx->pc = 0x1EE868u;
    // 0x1ee868: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE868u;
    {
        const bool branch_taken_0x1ee868 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE868u;
        // 0x1ee86c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee868) {
            ctx->pc = 0x1EE878u;
            goto label_1ee878;
        }
    }
    ctx->pc = 0x1EE870u;
    // 0x1ee870: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EE870u;
    {
        const bool branch_taken_0x1ee870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE870u;
        // 0x1ee874: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee870) {
            ctx->pc = 0x1EE87Cu;
            goto label_1ee87c;
        }
    }
    ctx->pc = 0x1EE878u;
label_1ee878:
    // 0x1ee878: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1ee878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1ee87c:
    // 0x1ee87c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ee87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ee880: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ee880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee884: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x1ee884u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1ee888: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1ee888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee88c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1ee88cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1ee890: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1ee890u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee894: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x1ee894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x1ee898: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ee898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee89c: 0xc07b704  jal         func_1EDC10
    ctx->pc = 0x1EE89Cu;
    SET_GPR_U32(ctx, 31, 0x1EE8A4u);
    ctx->pc = 0x1EE8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE89Cu;
    // 0x1ee8a0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDC10u, 0x1EE89Cu, 0x1EE8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE8A4u;
label_1ee8a4:
    // 0x1ee8a4: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1EE8A4u;
    {
        const bool branch_taken_0x1ee8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8A4u;
        // 0x1ee8a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee8a4) {
            ctx->pc = 0x1EE934u;
            goto label_1ee934;
        }
    }
    ctx->pc = 0x1EE8ACu;
    // 0x1ee8ac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1EE8ACu;
    {
        const bool branch_taken_0x1ee8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee8ac) {
            ctx->pc = 0x1EE910u;
            goto label_1ee910;
        }
    }
    ctx->pc = 0x1EE8B4u;
label_1ee8b4:
    // 0x1ee8b4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1ee8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1ee8b8: 0xafb30004  sw          $s3, 0x4($sp)
    ctx->pc = 0x1ee8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
    // 0x1ee8bc: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1EE8BCu;
    SET_GPR_U32(ctx, 31, 0x1EE8C4u);
    ctx->pc = 0x1EE8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE8BCu;
    // 0x1ee8c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1EE8BCu, 0x1EE8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE8C4u;
label_1ee8c4:
    // 0x1ee8c4: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE8C4u;
    {
        const bool branch_taken_0x1ee8c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EE8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8C4u;
        // 0x1ee8c8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee8c4) {
            ctx->pc = 0x1EE8DCu;
            goto label_1ee8dc;
        }
    }
    ctx->pc = 0x1EE8CCu;
    // 0x1ee8cc: 0xc07b836  jal         func_1EE0D8
    ctx->pc = 0x1EE8CCu;
    SET_GPR_U32(ctx, 31, 0x1EE8D4u);
    ctx->pc = 0x1EE8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE8CCu;
    // 0x1ee8d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE0D8u, 0x1EE8CCu, 0x1EE8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE8D4u;
label_1ee8d4:
    // 0x1ee8d4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1EE8D4u;
    {
        const bool branch_taken_0x1ee8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8D4u;
        // 0x1ee8d8: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee8d4) {
            ctx->pc = 0x1EE934u;
            goto label_1ee934;
        }
    }
    ctx->pc = 0x1EE8DCu;
label_1ee8dc:
    // 0x1ee8dc: 0xae130030  sw          $s3, 0x30($s0)
    ctx->pc = 0x1ee8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
    // 0x1ee8e0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ee8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee8e4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1ee8e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee8e8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1ee8e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee8ec: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x1ee8ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1ee8f0: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x1ee8f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x1ee8f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ee8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee8f8: 0xc07b704  jal         func_1EDC10
    ctx->pc = 0x1EE8F8u;
    SET_GPR_U32(ctx, 31, 0x1EE900u);
    ctx->pc = 0x1EE8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE8F8u;
    // 0x1ee8fc: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDC10u, 0x1EE8F8u, 0x1EE900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE900u;
label_1ee900:
    // 0x1ee900: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EE900u;
    {
        const bool branch_taken_0x1ee900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee900) {
            ctx->pc = 0x1EE920u;
            goto label_1ee920;
        }
    }
    ctx->pc = 0x1EE908u;
    // 0x1ee908: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EE908u;
    SET_GPR_U32(ctx, 31, 0x1EE910u);
    ctx->pc = 0x1EE90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE908u;
    // 0x1ee90c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EE908u, 0x1EE910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE910u;
label_1ee910:
    // 0x1ee910: 0xc07b836  jal         func_1EE0D8
    ctx->pc = 0x1EE910u;
    SET_GPR_U32(ctx, 31, 0x1EE918u);
    ctx->pc = 0x1EE914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE910u;
    // 0x1ee914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE0D8u, 0x1EE910u, 0x1EE918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE918u;
label_1ee918:
    // 0x1ee918: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE918u;
    {
        const bool branch_taken_0x1ee918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE918u;
        // 0x1ee91c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee918) {
            ctx->pc = 0x1EE934u;
            goto label_1ee934;
        }
    }
    ctx->pc = 0x1EE920u;
label_1ee920:
    // 0x1ee920: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EE920u;
    SET_GPR_U32(ctx, 31, 0x1EE928u);
    ctx->pc = 0x1EE924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE920u;
    // 0x1ee924: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EE920u, 0x1EE928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE928u;
label_1ee928:
    // 0x1ee928: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EE928u;
    SET_GPR_U32(ctx, 31, 0x1EE930u);
    ctx->pc = 0x1EE92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE928u;
    // 0x1ee92c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EE928u, 0x1EE930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE930u;
label_1ee930:
    // 0x1ee930: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ee930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee934:
    // 0x1ee934: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1ee934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ee938: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1ee938u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ee93c: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x1ee93cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ee940: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1ee940u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ee944: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1ee944u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ee948: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1ee948u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ee94c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1ee94cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ee950: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1ee950u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ee954: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1ee954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ee958: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ee958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee95c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE95Cu;
        // 0x1ee960: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE964u;
}
