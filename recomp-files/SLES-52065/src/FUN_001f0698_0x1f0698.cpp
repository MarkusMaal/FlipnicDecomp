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

// Function: FUN_001f0698
// Address: 0x1f0698 - 0x1f0874
void FUN_001f0698_0x1f0698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f0698_0x1f0698");
#endif

    switch (ctx->pc) {
        case 0x1f06e0u: goto label_1f06e0;
        case 0x1f06ecu: goto label_1f06ec;
        case 0x1f0704u: goto label_1f0704;
        case 0x1f0720u: goto label_1f0720;
        case 0x1f0740u: goto label_1f0740;
        case 0x1f0764u: goto label_1f0764;
        case 0x1f0790u: goto label_1f0790;
        case 0x1f07bcu: goto label_1f07bc;
        case 0x1f07f0u: goto label_1f07f0;
        case 0x1f0800u: goto label_1f0800;
        case 0x1f0808u: goto label_1f0808;
        case 0x1f081cu: goto label_1f081c;
        case 0x1f082cu: goto label_1f082c;
        case 0x1f083cu: goto label_1f083c;
        case 0x1f0844u: goto label_1f0844;
        default: break;
    }

    ctx->pc = 0x1f0698u;

    // 0x1f0698: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1f0698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1f069c: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1f069cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1f06a0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1f06a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1f06a4: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1f06a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f06a8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1f06a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1f06ac: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1f06acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f06b0: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1f06b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1f06b4: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x1f06b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f06b8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1f06b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1f06bc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f06bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f06c0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1f06c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1f06c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1f06c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f06c8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1f06c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1f06cc: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1f06ccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1f06d0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1f06d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1f06d4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1f06d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1f06d8: 0xc07bbe0  jal         func_1EEF80
    ctx->pc = 0x1F06D8u;
    SET_GPR_U32(ctx, 31, 0x1F06E0u);
    ctx->pc = 0x1F06DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F06D8u;
    // 0x1f06dc: 0x26d1e200  addiu       $s1, $s6, -0x1E00 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEF80u, 0x1F06D8u, 0x1F06E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F06E0u;
label_1f06e0:
    // 0x1f06e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f06e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f06e4: 0xc07bcfa  jal         func_1EF3E8
    ctx->pc = 0x1F06E4u;
    SET_GPR_U32(ctx, 31, 0x1F06ECu);
    ctx->pc = 0x1F06E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F06E4u;
    // 0x1f06e8: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF3E8u, 0x1F06E4u, 0x1F06ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F06ECu;
label_1f06ec:
    // 0x1f06ec: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f06f0: 0x8c43a45c  lw          $v1, -0x5BA4($v0)
    ctx->pc = 0x1f06f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A45Cu));
    // 0x1f06f4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F06F4u;
    {
        const bool branch_taken_0x1f06f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f06f4) {
            ctx->pc = 0x1F0704u;
            goto label_1f0704;
        }
    }
    ctx->pc = 0x1F06FCu;
    // 0x1f06fc: 0xc07bd3c  jal         func_1EF4F0
    ctx->pc = 0x1F06FCu;
    SET_GPR_U32(ctx, 31, 0x1F0704u);
    ctx->pc = 0x1EF4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF4F0u, 0x1F06FCu, 0x1F0704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0704u;
label_1f0704:
    // 0x1f0704: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0704u;
    {
        const bool branch_taken_0x1f0704 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0704) {
            ctx->pc = 0x1F0718u;
            goto label_1f0718;
        }
    }
    ctx->pc = 0x1F070Cu;
    // 0x1f070c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1f070cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f0710: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0710u;
    {
        const bool branch_taken_0x1f0710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0710u;
        // 0x1f0714: 0x2e620401  sltiu       $v0, $s3, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0710) {
            ctx->pc = 0x1F0728u;
            goto label_1f0728;
        }
    }
    ctx->pc = 0x1F0718u;
label_1f0718:
    // 0x1f0718: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0718u;
    SET_GPR_U32(ctx, 31, 0x1F0720u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0718u, 0x1F0720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0720u;
label_1f0720:
    // 0x1f0720: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1F0720u;
    {
        const bool branch_taken_0x1f0720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0720u;
        // 0x1f0724: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0720) {
            ctx->pc = 0x1F0848u;
            goto label_1f0848;
        }
    }
    ctx->pc = 0x1F0728u;
label_1f0728:
    // 0x1f0728: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0728u;
    {
        const bool branch_taken_0x1f0728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0728u;
        // 0x1f072c: 0x2e820401  sltiu       $v0, $s4, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0728) {
            ctx->pc = 0x1F0738u;
            goto label_1f0738;
        }
    }
    ctx->pc = 0x1F0730u;
    // 0x1f0730: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0730u;
    {
        const bool branch_taken_0x1f0730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0730) {
            ctx->pc = 0x1F0748u;
            goto label_1f0748;
        }
    }
    ctx->pc = 0x1F0738u;
label_1f0738:
    // 0x1f0738: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0738u;
    SET_GPR_U32(ctx, 31, 0x1F0740u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0738u, 0x1F0740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0740u;
label_1f0740:
    // 0x1f0740: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1F0740u;
    {
        const bool branch_taken_0x1f0740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0740u;
        // 0x1f0744: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0740) {
            ctx->pc = 0x1F0848u;
            goto label_1f0848;
        }
    }
    ctx->pc = 0x1F0748u;
label_1f0748:
    // 0x1f0748: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0748u;
    {
        const bool branch_taken_0x1f0748 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0748u;
        // 0x1f074c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0748) {
            ctx->pc = 0x1F0758u;
            goto label_1f0758;
        }
    }
    ctx->pc = 0x1F0750u;
    // 0x1f0750: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0750u;
    {
        const bool branch_taken_0x1f0750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0750u;
        // 0x1f0754: 0xae20041c  sw          $zero, 0x41C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0750) {
            ctx->pc = 0x1F0764u;
            goto label_1f0764;
        }
    }
    ctx->pc = 0x1F0758u;
label_1f0758:
    // 0x1f0758: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x1f0758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1f075c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1F075Cu;
    SET_GPR_U32(ctx, 31, 0x1F0764u);
    ctx->pc = 0x1F0760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F075Cu;
    // 0x1f0760: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1F075Cu, 0x1F0764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0764u;
label_1f0764:
    // 0x1f0764: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f0764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f0768: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f0768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f076c: 0xae350010  sw          $s5, 0x10($s1)
    ctx->pc = 0x1f076cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 21));
    // 0x1f0770: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f0770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f0774: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1f0774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1f0778: 0x26d0e200  addiu       $s0, $s6, -0x1E00
    ctx->pc = 0x1f0778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959616));
    // 0x1f077c: 0xae33041c  sw          $s3, 0x41C($s1)
    ctx->pc = 0x1f077cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 19));
    // 0x1f0780: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1f0780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1f0784: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f0784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f0788: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F0788u;
    SET_GPR_U32(ctx, 31, 0x1F0790u);
    ctx->pc = 0x1F078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0788u;
    // 0x1f078c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F0788u, 0x1F0790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0790u;
label_1f0790:
    // 0x1f0790: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f0790u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0794: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1f0794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0798: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1f0798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f079c: 0xae340418  sw          $s4, 0x418($s1)
    ctx->pc = 0x1f079cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1048), GPR_U32(ctx, 20));
    // 0x1f07a0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1f07a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1f07a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f07a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f07a8: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1f07a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1f07ac: 0x24050420  addiu       $a1, $zero, 0x420
    ctx->pc = 0x1f07acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x1f07b0: 0xae370414  sw          $s7, 0x414($s1)
    ctx->pc = 0x1f07b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 23));
    // 0x1f07b4: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F07B4u;
    SET_GPR_U32(ctx, 31, 0x1F07BCu);
    ctx->pc = 0x1F07B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F07B4u;
    // 0x1f07b8: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F07B4u, 0x1F07BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F07BCu;
label_1f07bc:
    // 0x1f07bc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f07bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f07c0: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f07c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f07c4: 0x2451ee40  addiu       $s1, $v0, -0x11C0
    ctx->pc = 0x1f07c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962752));
    // 0x1f07c8: 0x2484f900  addiu       $a0, $a0, -0x700
    ctx->pc = 0x1f07c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965504));
    // 0x1f07cc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f07ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f07d0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f07d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f07d4: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x1f07d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1f07d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f07d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f07dc: 0x24080420  addiu       $t0, $zero, 0x420
    ctx->pc = 0x1f07dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x1f07e0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1f07e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f07e4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f07e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f07e8: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F07E8u;
    SET_GPR_U32(ctx, 31, 0x1F07F0u);
    ctx->pc = 0x1F07ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F07E8u;
    // 0x1f07ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F07E8u, 0x1F07F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F07F0u;
label_1f07f0:
    // 0x1f07f0: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F07F0u;
    {
        const bool branch_taken_0x1f07f0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F07F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F07F0u;
        // 0x1f07f4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f07f0) {
            ctx->pc = 0x1F0810u;
            goto label_1f0810;
        }
    }
    ctx->pc = 0x1F07F8u;
    // 0x1f07f8: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F07F8u;
    SET_GPR_U32(ctx, 31, 0x1F0800u);
    ctx->pc = 0x1F07FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F07F8u;
    // 0x1f07fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F07F8u, 0x1F0800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0800u;
label_1f0800:
    // 0x1f0800: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0800u;
    SET_GPR_U32(ctx, 31, 0x1F0808u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0800u, 0x1F0808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0808u;
label_1f0808:
    // 0x1f0808: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F0808u;
    {
        const bool branch_taken_0x1f0808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0808u;
        // 0x1f080c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0808) {
            ctx->pc = 0x1F0848u;
            goto label_1f0848;
        }
    }
    ctx->pc = 0x1F0810u;
label_1f0810:
    // 0x1f0810: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x1f0810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1f0814: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0814u;
    SET_GPR_U32(ctx, 31, 0x1F081Cu);
    ctx->pc = 0x1F0818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0814u;
    // 0x1f0818: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0814u, 0x1F081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F081Cu;
label_1f081c:
    // 0x1f081c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F081Cu;
    {
        const bool branch_taken_0x1f081c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f081c) {
            ctx->pc = 0x1F0834u;
            goto label_1f0834;
        }
    }
    ctx->pc = 0x1F0824u;
    // 0x1f0824: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0824u;
    SET_GPR_U32(ctx, 31, 0x1F082Cu);
    ctx->pc = 0x1F0828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0824u;
    // 0x1f0828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0824u, 0x1F082Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F082Cu;
label_1f082c:
    // 0x1f082c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F082Cu;
    {
        const bool branch_taken_0x1f082c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F082Cu;
        // 0x1f0830: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f082c) {
            ctx->pc = 0x1F0848u;
            goto label_1f0848;
        }
    }
    ctx->pc = 0x1F0834u;
label_1f0834:
    // 0x1f0834: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F0834u;
    SET_GPR_U32(ctx, 31, 0x1F083Cu);
    ctx->pc = 0x1F0838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0834u;
    // 0x1f0838: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F0834u, 0x1F083Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F083Cu;
label_1f083c:
    // 0x1f083c: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F083Cu;
    SET_GPR_U32(ctx, 31, 0x1F0844u);
    ctx->pc = 0x1F0840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F083Cu;
    // 0x1f0840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F083Cu, 0x1F0844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0844u;
label_1f0844:
    // 0x1f0844: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f0844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1f0848:
    // 0x1f0848: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1f0848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f084c: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1f084cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f0850: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1f0850u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0854: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1f0854u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f0858: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1f0858u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f085c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1f085cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f0860: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f0860u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f0864: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1f0864u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f0868: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f0868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f086c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F086Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F086Cu;
        // 0x1f0870: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F086Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0874u;
}
