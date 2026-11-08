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

// Function: FUN_001f9040
// Address: 0x1f9040 - 0x1f9180
void FUN_001f9040_0x1f9040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f9040_0x1f9040");
#endif

    switch (ctx->pc) {
        case 0x1f909cu: goto label_1f909c;
        case 0x1f90c0u: goto label_1f90c0;
        case 0x1f90f0u: goto label_1f90f0;
        case 0x1f9100u: goto label_1f9100;
        case 0x1f9130u: goto label_1f9130;
        case 0x1f9150u: goto label_1f9150;
        default: break;
    }

    ctx->pc = 0x1f9040u;

    // 0x1f9040: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1f9040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1f9044: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f9044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f9048: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1f9048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1f904c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1f904cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1f9050: 0x24571600  addiu       $s7, $v0, 0x1600
    ctx->pc = 0x1f9050u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1f9054: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f9054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f9058: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1f9058u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f905c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f905cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1f9060: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1f9060u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9064: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f9064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f9068: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f9068u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f906c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f906cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1f9070: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1f9070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1f9074: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f9074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f9078: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f9078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f907c: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x1f907cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x391624u));
    // 0x1f9080: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9080u;
    {
        const bool branch_taken_0x1f9080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9080u;
        // 0x1f9084: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9080) {
            ctx->pc = 0x1F9090u;
            goto label_1f9090;
        }
    }
    ctx->pc = 0x1F9088u;
    // 0x1f9088: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1F9088u;
    {
        const bool branch_taken_0x1f9088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9088u;
        // 0x1f908c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9088) {
            ctx->pc = 0x1F9154u;
            goto label_1f9154;
        }
    }
    ctx->pc = 0x1F9090u;
label_1f9090:
    // 0x1f9090: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1f9090u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
    // 0x1f9094: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F9094u;
    SET_GPR_U32(ctx, 31, 0x1F909Cu);
    ctx->pc = 0x1F9098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9094u;
    // 0x1f9098: 0x8ea4d6bc  lw          $a0, -0x2944($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F9094u, 0x1F909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F909Cu;
label_1f909c:
    // 0x1f909c: 0x440002d  bltz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1F909Cu;
    {
        const bool branch_taken_0x1f909c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F90A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F909Cu;
        // 0x1f90a0: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f909c) {
            ctx->pc = 0x1F9154u;
            goto label_1f9154;
        }
    }
    ctx->pc = 0x1F90A4u;
    // 0x1f90a4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F90A4u;
    {
        const bool branch_taken_0x1f90a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f90a4) {
            ctx->pc = 0x1F90B8u;
            goto label_1f90b8;
        }
    }
    ctx->pc = 0x1F90ACu;
    // 0x1f90ac: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x1f90acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f90b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F90B0u;
    {
        const bool branch_taken_0x1f90b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F90B0u;
        // 0x1f90b4: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f90b0) {
            ctx->pc = 0x1F90C8u;
            goto label_1f90c8;
        }
    }
    ctx->pc = 0x1F90B8u;
label_1f90b8:
    // 0x1f90b8: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F90B8u;
    SET_GPR_U32(ctx, 31, 0x1F90C0u);
    ctx->pc = 0x1F90BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F90B8u;
    // 0x1f90bc: 0x8ea4d6bc  lw          $a0, -0x2944($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F90B8u, 0x1F90C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F90C0u;
label_1f90c0:
    // 0x1f90c0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1F90C0u;
    {
        const bool branch_taken_0x1f90c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F90C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F90C0u;
        // 0x1f90c4: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f90c0) {
            ctx->pc = 0x1F9154u;
            goto label_1f9154;
        }
    }
    ctx->pc = 0x1F90C8u;
label_1f90c8:
    // 0x1f90c8: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f90c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f90cc: 0x245116b0  addiu       $s1, $v0, 0x16B0
    ctx->pc = 0x1f90ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5808));
    // 0x1f90d0: 0x26101bc0  addiu       $s0, $s0, 0x1BC0
    ctx->pc = 0x1f90d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7104));
    // 0x1f90d4: 0xac5316b0  sw          $s3, 0x16B0($v0)
    ctx->pc = 0x1f90d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5808), GPR_U32(ctx, 19));
    // 0x1f90d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f90d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f90dc: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x1f90dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x1f90e0: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x1f90e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1f90e4: 0xae340004  sw          $s4, 0x4($s1)
    ctx->pc = 0x1f90e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
    // 0x1f90e8: 0xc080804  jal         func_202010
    ctx->pc = 0x1F90E8u;
    SET_GPR_U32(ctx, 31, 0x1F90F0u);
    ctx->pc = 0x1F90ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F90E8u;
    // 0x1f90ec: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202010u, 0x1F90E8u, 0x1F90F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F90F0u;
label_1f90f0:
    // 0x1f90f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f90f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f90f4: 0xa2200413  sb          $zero, 0x413($s1)
    ctx->pc = 0x1f90f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f90f8: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F90F8u;
    SET_GPR_U32(ctx, 31, 0x1F9100u);
    ctx->pc = 0x1F90FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F90F8u;
    // 0x1f90fc: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F90F8u, 0x1F9100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9100u;
label_1f9100:
    // 0x1f9100: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f9100u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f9104: 0x3c0b0020  lui         $t3, 0x20
    ctx->pc = 0x1f9104u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32 << 16));
    // 0x1f9108: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1f9108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x1f910c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1f910cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9110: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f9110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9114: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f9114u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f9118: 0x256b8fb8  addiu       $t3, $t3, -0x7048
    ctx->pc = 0x1f9118u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294938552));
    // 0x1f911c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1f911cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f9120: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f9120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9124: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1f9124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1f9128: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F9128u;
    SET_GPR_U32(ctx, 31, 0x1F9130u);
    ctx->pc = 0x1F912Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9128u;
    // 0x1f912c: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F9128u, 0x1F9130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9130u;
label_1f9130:
    // 0x1f9130: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f9130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9134: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9134u;
    {
        const bool branch_taken_0x1f9134 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9134u;
        // 0x1f9138: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9134) {
            ctx->pc = 0x1F9148u;
            goto label_1f9148;
        }
    }
    ctx->pc = 0x1F913Cu;
    // 0x1f913c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1f913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f9140: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9140u;
    {
        const bool branch_taken_0x1f9140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9140u;
        // 0x1f9144: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9140) {
            ctx->pc = 0x1F9150u;
            goto label_1f9150;
        }
    }
    ctx->pc = 0x1F9148u;
label_1f9148:
    // 0x1f9148: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F9148u;
    SET_GPR_U32(ctx, 31, 0x1F9150u);
    ctx->pc = 0x1F914Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9148u;
    // 0x1f914c: 0x8ea4d6bc  lw          $a0, -0x2944($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F9148u, 0x1F9150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9150u;
label_1f9150:
    // 0x1f9150: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f9150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9154:
    // 0x1f9154: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1f9154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f9158: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1f9158u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f915c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1f915cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f9160: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1f9160u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f9164: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f9164u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f9168: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f9168u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f916c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f916cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9170: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f9170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9174: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f9174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9178: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9178u;
        // 0x1f917c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9180u;
}
