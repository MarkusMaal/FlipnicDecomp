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

// Function: FUN_001f95e8
// Address: 0x1f95e8 - 0x1f9740
void FUN_001f95e8_0x1f95e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f95e8_0x1f95e8");
#endif

    switch (ctx->pc) {
        case 0x1f9640u: goto label_1f9640;
        case 0x1f966cu: goto label_1f966c;
        case 0x1f9698u: goto label_1f9698;
        case 0x1f96b4u: goto label_1f96b4;
        case 0x1f96c8u: goto label_1f96c8;
        case 0x1f96f4u: goto label_1f96f4;
        case 0x1f9714u: goto label_1f9714;
        default: break;
    }

    ctx->pc = 0x1f95e8u;

    // 0x1f95e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f95e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f95ec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f95ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f95f0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1f95f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1f95f4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f95f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f95f8: 0x24561600  addiu       $s6, $v0, 0x1600
    ctx->pc = 0x1f95f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1f95fc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f95fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1f9600: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f9600u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9604: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f9604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f9608: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f9608u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f960c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f960cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f9610: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1f9610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9614: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1f9614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1f9618: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1f9618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1f961c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f961cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f9620: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x1f9620u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x391624u));
    // 0x1f9624: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9624u;
    {
        const bool branch_taken_0x1f9624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9624u;
        // 0x1f9628: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9624) {
            ctx->pc = 0x1F9634u;
            goto label_1f9634;
        }
    }
    ctx->pc = 0x1F962Cu;
    // 0x1f962c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1F962Cu;
    {
        const bool branch_taken_0x1f962c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F962Cu;
        // 0x1f9630: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f962c) {
            ctx->pc = 0x1F9718u;
            goto label_1f9718;
        }
    }
    ctx->pc = 0x1F9634u;
label_1f9634:
    // 0x1f9634: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1f9634u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
    // 0x1f9638: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F9638u;
    SET_GPR_U32(ctx, 31, 0x1F9640u);
    ctx->pc = 0x1F963Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9638u;
    // 0x1f963c: 0x8ea4d6bc  lw          $a0, -0x2944($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F9638u, 0x1F9640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9640u;
label_1f9640:
    // 0x1f9640: 0x4400035  bltz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1F9640u;
    {
        const bool branch_taken_0x1f9640 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F9644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9640u;
        // 0x1f9644: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9640) {
            ctx->pc = 0x1F9718u;
            goto label_1f9718;
        }
    }
    ctx->pc = 0x1F9648u;
    // 0x1f9648: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F9648u;
    {
        const bool branch_taken_0x1f9648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9648) {
            ctx->pc = 0x1F9664u;
            goto label_1f9664;
        }
    }
    ctx->pc = 0x1F9650u;
    // 0x1f9650: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1f9650u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f9654: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9654u;
    {
        const bool branch_taken_0x1f9654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9654) {
            ctx->pc = 0x1F9664u;
            goto label_1f9664;
        }
    }
    ctx->pc = 0x1F965Cu;
    // 0x1f965c: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F965Cu;
    {
        const bool branch_taken_0x1f965c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F965Cu;
        // 0x1f9660: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f965c) {
            ctx->pc = 0x1F9674u;
            goto label_1f9674;
        }
    }
    ctx->pc = 0x1F9664u;
label_1f9664:
    // 0x1f9664: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F9664u;
    SET_GPR_U32(ctx, 31, 0x1F966Cu);
    ctx->pc = 0x1F9668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9664u;
    // 0x1f9668: 0x8ea4d6bc  lw          $a0, -0x2944($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F9664u, 0x1F966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F966Cu;
label_1f966c:
    // 0x1f966c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1F966Cu;
    {
        const bool branch_taken_0x1f966c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F966Cu;
        // 0x1f9670: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f966c) {
            ctx->pc = 0x1F9718u;
            goto label_1f9718;
        }
    }
    ctx->pc = 0x1F9674u;
label_1f9674:
    // 0x1f9674: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1f9674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f9678: 0x245116b0  addiu       $s1, $v0, 0x16B0
    ctx->pc = 0x1f9678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5808));
    // 0x1f967c: 0xac5416b0  sw          $s4, 0x16B0($v0)
    ctx->pc = 0x1f967cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5808), GPR_U32(ctx, 20));
    // 0x1f9680: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f9680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9684: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x1f9684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x1f9688: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1f9688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1f968c: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x1f968cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1f9690: 0xc080804  jal         func_202010
    ctx->pc = 0x1F9690u;
    SET_GPR_U32(ctx, 31, 0x1F9698u);
    ctx->pc = 0x1F9694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9690u;
    // 0x1f9694: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202010u, 0x1F9690u, 0x1F9698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9698u;
label_1f9698:
    // 0x1f9698: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f9698u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f969c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f969cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f96a0: 0x26101660  addiu       $s0, $s0, 0x1660
    ctx->pc = 0x1f96a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5728));
    // 0x1f96a4: 0xa2200413  sb          $zero, 0x413($s1)
    ctx->pc = 0x1f96a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f96a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f96a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f96ac: 0xc080804  jal         func_202010
    ctx->pc = 0x1F96ACu;
    SET_GPR_U32(ctx, 31, 0x1F96B4u);
    ctx->pc = 0x1F96B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F96ACu;
    // 0x1f96b0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202010u, 0x1F96ACu, 0x1F96B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F96B4u;
label_1f96b4:
    // 0x1f96b4: 0x2610ffe0  addiu       $s0, $s0, -0x20
    ctx->pc = 0x1f96b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x1f96b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f96b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f96bc: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x1f96bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x1f96c0: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x1F96C0u;
    SET_GPR_U32(ctx, 31, 0x1F96C8u);
    ctx->pc = 0x1F96C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F96C0u;
    // 0x1f96c4: 0xa200003f  sb          $zero, 0x3F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x1F96C0u, 0x1F96C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F96C8u;
label_1f96c8:
    // 0x1f96c8: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f96c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f96cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1f96ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f96d0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f96d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f96d4: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f96d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f96d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f96d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f96dc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1f96dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1f96e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f96e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f96e4: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1f96e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1f96e8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f96e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f96ec: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F96ECu;
    SET_GPR_U32(ctx, 31, 0x1F96F4u);
    ctx->pc = 0x1F96F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F96ECu;
    // 0x1f96f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F96ECu, 0x1F96F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F96F4u;
label_1f96f4:
    // 0x1f96f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f96f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f96f8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F96F8u;
    {
        const bool branch_taken_0x1f96f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F96FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96F8u;
        // 0x1f96fc: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f96f8) {
            ctx->pc = 0x1F970Cu;
            goto label_1f970c;
        }
    }
    ctx->pc = 0x1F9700u;
    // 0x1f9700: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1f9700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1f9704: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9704u;
    {
        const bool branch_taken_0x1f9704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9704u;
        // 0x1f9708: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9704) {
            ctx->pc = 0x1F9714u;
            goto label_1f9714;
        }
    }
    ctx->pc = 0x1F970Cu;
label_1f970c:
    // 0x1f970c: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F970Cu;
    SET_GPR_U32(ctx, 31, 0x1F9714u);
    ctx->pc = 0x1F9710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F970Cu;
    // 0x1f9710: 0x8ea4d6bc  lw          $a0, -0x2944($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F970Cu, 0x1F9714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9714u;
label_1f9714:
    // 0x1f9714: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f9714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9718:
    // 0x1f9718: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1f9718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f971c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1f971cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f9720: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1f9720u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f9724: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f9724u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f9728: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f9728u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f972c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f972cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9730: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f9730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9734: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f9734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9738: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9738u;
        // 0x1f973c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9740u;
}
