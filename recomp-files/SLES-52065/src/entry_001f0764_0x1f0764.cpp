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

// Function: entry_001f0764
// Address: 0x1f0764 - 0x1f0810
void entry_001f0764_0x1f0764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0764_0x1f0764");
#endif

    switch (ctx->pc) {
        case 0x1f0790u: goto label_1f0790;
        case 0x1f07bcu: goto label_1f07bc;
        case 0x1f07f0u: goto label_1f07f0;
        case 0x1f0800u: goto label_1f0800;
        case 0x1f0808u: goto label_1f0808;
        default: break;
    }

    ctx->pc = 0x1f0764u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x1F0810u;
}
