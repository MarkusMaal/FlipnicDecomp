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

// Function: FUN_001f8848
// Address: 0x1f8848 - 0x1f895c
void FUN_001f8848_0x1f8848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f8848_0x1f8848");
#endif

    switch (ctx->pc) {
        case 0x1f889cu: goto label_1f889c;
        case 0x1f88d4u: goto label_1f88d4;
        case 0x1f88e0u: goto label_1f88e0;
        case 0x1f8910u: goto label_1f8910;
        case 0x1f8930u: goto label_1f8930;
        default: break;
    }

    ctx->pc = 0x1f8848u;

    // 0x1f8848: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f8848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f884c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f884cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f8850: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1f8850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1f8854: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f8854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f8858: 0x24551600  addiu       $s5, $v0, 0x1600
    ctx->pc = 0x1f8858u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1f885c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f885cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1f8860: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f8860u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8864: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f8864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f8868: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f8868u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f886c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1f886cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1f8870: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1f8870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1f8874: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f8874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f8878: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f8878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f887c: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x1f887cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x391624u));
    // 0x1f8880: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8880u;
    {
        const bool branch_taken_0x1f8880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8880u;
        // 0x1f8884: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8880) {
            ctx->pc = 0x1F8890u;
            goto label_1f8890;
        }
    }
    ctx->pc = 0x1F8888u;
    // 0x1f8888: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1F8888u;
    {
        const bool branch_taken_0x1f8888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8888u;
        // 0x1f888c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8888) {
            ctx->pc = 0x1F8934u;
            goto label_1f8934;
        }
    }
    ctx->pc = 0x1F8890u;
label_1f8890:
    // 0x1f8890: 0x3c160022  lui         $s6, 0x22
    ctx->pc = 0x1f8890u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
    // 0x1f8894: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F8894u;
    SET_GPR_U32(ctx, 31, 0x1F889Cu);
    ctx->pc = 0x1F8898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8894u;
    // 0x1f8898: 0x8ec4d6bc  lw          $a0, -0x2944($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F8894u, 0x1F889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F889Cu;
label_1f889c:
    // 0x1f889c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F889Cu;
    {
        const bool branch_taken_0x1f889c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F88A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F889Cu;
        // 0x1f88a0: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f889c) {
            ctx->pc = 0x1F88ACu;
            goto label_1f88ac;
        }
    }
    ctx->pc = 0x1F88A4u;
    // 0x1f88a4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1F88A4u;
    {
        const bool branch_taken_0x1f88a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F88A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88A4u;
        // 0x1f88a8: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f88a4) {
            ctx->pc = 0x1F8934u;
            goto label_1f8934;
        }
    }
    ctx->pc = 0x1F88ACu;
label_1f88ac:
    // 0x1f88ac: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f88acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f88b0: 0x26101b00  addiu       $s0, $s0, 0x1B00
    ctx->pc = 0x1f88b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6912));
    // 0x1f88b4: 0x24511680  addiu       $s1, $v0, 0x1680
    ctx->pc = 0x1f88b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5760));
    // 0x1f88b8: 0xac541680  sw          $s4, 0x1680($v0)
    ctx->pc = 0x1f88b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5760), GPR_U32(ctx, 20));
    // 0x1f88bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f88bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f88c0: 0xae30001c  sw          $s0, 0x1C($s1)
    ctx->pc = 0x1f88c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
    // 0x1f88c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f88c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f88c8: 0xae330018  sw          $s3, 0x18($s1)
    ctx->pc = 0x1f88c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 19));
    // 0x1f88cc: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F88CCu;
    SET_GPR_U32(ctx, 31, 0x1F88D4u);
    ctx->pc = 0x1F88D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F88CCu;
    // 0x1f88d0: 0xae32000c  sw          $s2, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F88CCu, 0x1F88D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F88D4u;
label_1f88d4:
    // 0x1f88d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f88d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f88d8: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F88D8u;
    SET_GPR_U32(ctx, 31, 0x1F88E0u);
    ctx->pc = 0x1F88DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F88D8u;
    // 0x1f88dc: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F88D8u, 0x1F88E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F88E0u;
label_1f88e0:
    // 0x1f88e0: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f88e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f88e4: 0x3c0b0020  lui         $t3, 0x20
    ctx->pc = 0x1f88e4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32 << 16));
    // 0x1f88e8: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1f88e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x1f88ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f88ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f88f0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f88f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f88f4: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f88f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f88f8: 0x256b87b8  addiu       $t3, $t3, -0x7848
    ctx->pc = 0x1f88f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294936504));
    // 0x1f88fc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f88fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f8900: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f8900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8904: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1f8904u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f8908: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F8908u;
    SET_GPR_U32(ctx, 31, 0x1F8910u);
    ctx->pc = 0x1F890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8908u;
    // 0x1f890c: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F8908u, 0x1F8910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8910u;
label_1f8910:
    // 0x1f8910: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f8910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8914: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8914u;
    {
        const bool branch_taken_0x1f8914 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8914u;
        // 0x1f8918: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8914) {
            ctx->pc = 0x1F8928u;
            goto label_1f8928;
        }
    }
    ctx->pc = 0x1F891Cu;
    // 0x1f891c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f891cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f8920: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8920u;
    {
        const bool branch_taken_0x1f8920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8920u;
        // 0x1f8924: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8920) {
            ctx->pc = 0x1F8930u;
            goto label_1f8930;
        }
    }
    ctx->pc = 0x1F8928u;
label_1f8928:
    // 0x1f8928: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F8928u;
    SET_GPR_U32(ctx, 31, 0x1F8930u);
    ctx->pc = 0x1F892Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8928u;
    // 0x1f892c: 0x8ec4d6bc  lw          $a0, -0x2944($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F8928u, 0x1F8930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8930u;
label_1f8930:
    // 0x1f8930: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f8930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f8934:
    // 0x1f8934: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1f8934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f8938: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1f8938u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f893c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1f893cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f8940: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f8940u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f8944: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f8944u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f8948: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f8948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f894c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f894cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8950: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f8950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8954: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8954u;
        // 0x1f8958: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F895Cu;
}
