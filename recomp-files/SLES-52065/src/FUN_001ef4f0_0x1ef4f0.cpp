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

// Function: FUN_001ef4f0
// Address: 0x1ef4f0 - 0x1ef6f4
void FUN_001ef4f0_0x1ef4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ef4f0_0x1ef4f0");
#endif

    switch (ctx->pc) {
        case 0x1ef51cu: goto label_1ef51c;
        case 0x1ef528u: goto label_1ef528;
        case 0x1ef548u: goto label_1ef548;
        case 0x1ef560u: goto label_1ef560;
        case 0x1ef570u: goto label_1ef570;
        case 0x1ef578u: goto label_1ef578;
        case 0x1ef580u: goto label_1ef580;
        case 0x1ef5b4u: goto label_1ef5b4;
        case 0x1ef5d0u: goto label_1ef5d0;
        case 0x1ef5d8u: goto label_1ef5d8;
        case 0x1ef5f8u: goto label_1ef5f8;
        case 0x1ef630u: goto label_1ef630;
        case 0x1ef668u: goto label_1ef668;
        default: break;
    }

    ctx->pc = 0x1ef4f0u;

    // 0x1ef4f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ef4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ef4f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ef4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef4f8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ef4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1ef4fc: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1ef4fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1ef500: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1ef500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1ef504: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ef504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1ef508: 0x2611f980  addiu       $s1, $s0, -0x680
    ctx->pc = 0x1ef508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965632));
    // 0x1ef50c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1ef50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1ef510: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1ef510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1ef514: 0xc07b79a  jal         func_1EDE68
    ctx->pc = 0x1EF514u;
    SET_GPR_U32(ctx, 31, 0x1EF51Cu);
    ctx->pc = 0x1EF518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF514u;
    // 0x1ef518: 0xffb20040  sd          $s2, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDE68u, 0x1EF514u, 0x1EF51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF51Cu;
label_1ef51c:
    // 0x1ef51c: 0xae00f980  sw          $zero, -0x680($s0)
    ctx->pc = 0x1ef51cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965632), GPR_U32(ctx, 0));
    // 0x1ef520: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1EF520u;
    SET_GPR_U32(ctx, 31, 0x1EF528u);
    ctx->pc = 0x1EF524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF520u;
    // 0x1ef524: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1EF520u, 0x1EF528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF528u;
label_1ef528:
    // 0x1ef528: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x1ef528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x1ef52c: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1ef52cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1ef530: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ef530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ef534: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ef534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef538: 0x24a5eff0  addiu       $a1, $a1, -0x1010
    ctx->pc = 0x1ef538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963184));
    // 0x1ef53c: 0x24c6f940  addiu       $a2, $a2, -0x6C0
    ctx->pc = 0x1ef53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965568));
    // 0x1ef540: 0xc07b6a0  jal         func_1EDA80
    ctx->pc = 0x1EF540u;
    SET_GPR_U32(ctx, 31, 0x1EF548u);
    ctx->pc = 0x1EF544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF540u;
    // 0x1ef544: 0x34840011  ori         $a0, $a0, 0x11 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDA80u, 0x1EF540u, 0x1EF548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF548u;
label_1ef548:
    // 0x1ef548: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x1ef548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x1ef54c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ef54cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ef550: 0x24a5f4c0  addiu       $a1, $a1, -0xB40
    ctx->pc = 0x1ef550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964416));
    // 0x1ef554: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ef554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef558: 0xc07b6a0  jal         func_1EDA80
    ctx->pc = 0x1EF558u;
    SET_GPR_U32(ctx, 31, 0x1EF560u);
    ctx->pc = 0x1EF55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF558u;
    // 0x1ef55c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDA80u, 0x1EF558u, 0x1EF560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF560u;
label_1ef560:
    // 0x1ef560: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1EF560u;
    {
        const bool branch_taken_0x1ef560 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF560u;
        // 0x1ef564: 0x3c130039  lui         $s3, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef560) {
            ctx->pc = 0x1EF59Cu;
            goto label_1ef59c;
        }
    }
    ctx->pc = 0x1EF568u;
    // 0x1ef568: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1EF568u;
    SET_GPR_U32(ctx, 31, 0x1EF570u);
    ctx->pc = 0x1EF56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF568u;
    // 0x1ef56c: 0x2670f900  addiu       $s0, $s3, -0x700 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1EF568u, 0x1EF570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF570u;
label_1ef570:
    // 0x1ef570: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1EF570u;
    {
        const bool branch_taken_0x1ef570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef570) {
            ctx->pc = 0x1EF5A0u;
            goto label_1ef5a0;
        }
    }
    ctx->pc = 0x1EF578u;
label_1ef578:
    // 0x1ef578: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ef578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ef57c: 0x0  nop
    ctx->pc = 0x1ef57cu;
    // NOP
label_1ef580:
    // 0x1ef580: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ef580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ef584: 0x0  nop
    ctx->pc = 0x1ef584u;
    // NOP
    // 0x1ef588: 0x0  nop
    ctx->pc = 0x1ef588u;
    // NOP
    // 0x1ef58c: 0x0  nop
    ctx->pc = 0x1ef58cu;
    // NOP
    // 0x1ef590: 0x0  nop
    ctx->pc = 0x1ef590u;
    // NOP
    // 0x1ef594: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EF594u;
    {
        const bool branch_taken_0x1ef594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ef594) {
            ctx->pc = 0x1EF580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef580;
        }
    }
    ctx->pc = 0x1EF59Cu;
label_1ef59c:
    // 0x1ef59c: 0x2670f900  addiu       $s0, $s3, -0x700
    ctx->pc = 0x1ef59cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965504));
label_1ef5a0:
    // 0x1ef5a0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1ef5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1ef5a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef5a8: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x1ef5a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x1ef5ac: 0xc07b96a  jal         func_1EE5A8
    ctx->pc = 0x1EF5ACu;
    SET_GPR_U32(ctx, 31, 0x1EF5B4u);
    ctx->pc = 0x1EF5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF5ACu;
    // 0x1ef5b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE5A8u, 0x1EF5ACu, 0x1EF5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF5B4u;
label_1ef5b4:
    // 0x1ef5b4: 0x4400047  bltz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1EF5B4u;
    {
        const bool branch_taken_0x1ef5b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1EF5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF5B4u;
        // 0x1ef5b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef5b4) {
            ctx->pc = 0x1EF6D4u;
            goto label_1ef6d4;
        }
    }
    ctx->pc = 0x1EF5BCu;
    // 0x1ef5bc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ef5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef5c0: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1EF5C0u;
    {
        const bool branch_taken_0x1ef5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF5C0u;
        // 0x1ef5c4: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef5c0) {
            ctx->pc = 0x1EF578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef578;
        }
    }
    ctx->pc = 0x1EF5C8u;
    // 0x1ef5c8: 0xc07bba6  jal         func_1EEE98
    ctx->pc = 0x1EF5C8u;
    SET_GPR_U32(ctx, 31, 0x1EF5D0u);
    ctx->pc = 0x1EF5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF5C8u;
    // 0x1ef5cc: 0x3c140022  lui         $s4, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEE98u, 0x1EF5C8u, 0x1EF5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF5D0u;
label_1ef5d0:
    // 0x1ef5d0: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EF5D0u;
    SET_GPR_U32(ctx, 31, 0x1EF5D8u);
    ctx->pc = 0x1EF5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF5D0u;
    // 0x1ef5d4: 0x8e84a468  lw          $a0, -0x5B98($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EF5D0u, 0x1EF5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF5D8u;
label_1ef5d8:
    // 0x1ef5d8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ef5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ef5dc: 0x2463f700  addiu       $v1, $v1, -0x900
    ctx->pc = 0x1ef5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964992));
    // 0x1ef5e0: 0x24640200  addiu       $a0, $v1, 0x200
    ctx->pc = 0x1ef5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x1ef5e4: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1ef5e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ef5e8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EF5E8u;
    {
        const bool branch_taken_0x1ef5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF5E8u;
        // 0x1ef5ec: 0x3c120039  lui         $s2, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef5e8) {
            ctx->pc = 0x1EF61Cu;
            goto label_1ef61c;
        }
    }
    ctx->pc = 0x1EF5F0u;
    // 0x1ef5f0: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1ef5f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x1ef5f4: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1ef5f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
label_1ef5f8:
    // 0x1ef5f8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ef5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ef5fc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ef5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ef600: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1ef600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ef604: 0x0  nop
    ctx->pc = 0x1ef604u;
    // NOP
    // 0x1ef608: 0x0  nop
    ctx->pc = 0x1ef608u;
    // NOP
    // 0x1ef60c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EF60Cu;
    {
        const bool branch_taken_0x1ef60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef60c) {
            ctx->pc = 0x1EF5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef5f8;
        }
    }
    ctx->pc = 0x1EF614u;
    // 0x1ef614: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF614u;
    {
        const bool branch_taken_0x1ef614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF614u;
        // 0x1ef618: 0x8e84a468  lw          $a0, -0x5B98($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef614) {
            ctx->pc = 0x1EF628u;
            goto label_1ef628;
        }
    }
    ctx->pc = 0x1EF61Cu;
label_1ef61c:
    // 0x1ef61c: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1ef61cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x1ef620: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1ef620u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1ef624: 0x8e84a468  lw          $a0, -0x5B98($s4)
    ctx->pc = 0x1ef624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943848)));
label_1ef628:
    // 0x1ef628: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1EF628u;
    SET_GPR_U32(ctx, 31, 0x1EF630u);
    ctx->pc = 0x1EF62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF628u;
    // 0x1ef62c: 0x2610ee40  addiu       $s0, $s0, -0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1EF628u, 0x1EF630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF630u;
label_1ef630:
    // 0x1ef630: 0x2623ee80  addiu       $v1, $s1, -0x1180
    ctx->pc = 0x1ef630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962816));
    // 0x1ef634: 0x2647e1c0  addiu       $a3, $s2, -0x1E40
    ctx->pc = 0x1ef634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294959552));
    // 0x1ef638: 0xae43e1c0  sw          $v1, -0x1E40($s2)
    ctx->pc = 0x1ef638u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294959552), GPR_U32(ctx, 3));
    // 0x1ef63c: 0x2664f900  addiu       $a0, $s3, -0x700
    ctx->pc = 0x1ef63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965504));
    // 0x1ef640: 0x24630440  addiu       $v1, $v1, 0x440
    ctx->pc = 0x1ef640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1088));
    // 0x1ef644: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1ef644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ef648: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x1ef648u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x1ef64c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ef64cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef650: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ef650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ef654: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1ef654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ef658: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ef658u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef65c: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1ef65cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ef660: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1EF660u;
    SET_GPR_U32(ctx, 31, 0x1EF668u);
    ctx->pc = 0x1EF664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF660u;
    // 0x1ef664: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1EF660u, 0x1EF668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF668u;
label_1ef668:
    // 0x1ef668: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF668u;
    {
        const bool branch_taken_0x1ef668 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EF66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF668u;
        // 0x1ef66c: 0x3c042000  lui         $a0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef668) {
            ctx->pc = 0x1EF67Cu;
            goto label_1ef67c;
        }
    }
    ctx->pc = 0x1EF670u;
    // 0x1ef670: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ef670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1ef674: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1EF674u;
    {
        const bool branch_taken_0x1ef674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF674u;
        // 0x1ef678: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef674) {
            ctx->pc = 0x1EF6D4u;
            goto label_1ef6d4;
        }
    }
    ctx->pc = 0x1EF67Cu;
label_1ef67c:
    // 0x1ef67c: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x1ef67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1ef680: 0x2041825  or          $v1, $s0, $a0
    ctx->pc = 0x1ef680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x1ef684: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1ef684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1ef688: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1ef688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1ef68c: 0x24a8f928  addiu       $t0, $a1, -0x6D8
    ctx->pc = 0x1ef68cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965544));
    // 0x1ef690: 0x88640003  lwl         $a0, 0x3($v1)
    ctx->pc = 0x1ef690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x1ef694: 0x98640000  lwr         $a0, 0x0($v1)
    ctx->pc = 0x1ef694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x1ef698: 0xa9040003  swl         $a0, 0x3($t0)
    ctx->pc = 0x1ef698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ef69c: 0xb9040000  swr         $a0, 0x0($t0)
    ctx->pc = 0x1ef69cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ef6a0: 0x88430003  lwl         $v1, 0x3($v0)
    ctx->pc = 0x1ef6a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x1ef6a4: 0x98430000  lwr         $v1, 0x0($v0)
    ctx->pc = 0x1ef6a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x1ef6a8: 0xaba30013  swl         $v1, 0x13($sp)
    ctx->pc = 0x1ef6a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ef6ac: 0xbba30010  swr         $v1, 0x10($sp)
    ctx->pc = 0x1ef6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ef6b0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1ef6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1ef6b4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ef6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ef6b8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ef6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef6bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ef6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef6c0: 0xaca4a45c  sw          $a0, -0x5BA4($a1)
    ctx->pc = 0x1ef6c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x21A45Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21A45Cu, _value); } while (0);
    // 0x1ef6c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ef6c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef6c8: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x1ef6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x1ef6cc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1ef6ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1ef6d0: 0xacc3a460  sw          $v1, -0x5BA0($a2)
    ctx->pc = 0x1ef6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294943840), GPR_U32(ctx, 3));
label_1ef6d4:
    // 0x1ef6d4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1ef6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ef6d8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1ef6d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ef6dc: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1ef6dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ef6e0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1ef6e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef6e4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1ef6e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef6e8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ef6e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF6ECu;
        // 0x1ef6f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF6F4u;
}
