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

// Function: FUN_002037a8
// Address: 0x2037a8 - 0x203930
void FUN_002037a8_0x2037a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002037a8_0x2037a8");
#endif

    switch (ctx->pc) {
        case 0x2037f8u: goto label_2037f8;
        case 0x203830u: goto label_203830;
        case 0x203880u: goto label_203880;
        default: break;
    }

    ctx->pc = 0x2037a8u;

    // 0x2037a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2037a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2037ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2037acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2037b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2037b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2037b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2037b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2037b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2037b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2037bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2037bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2037c0: 0x12220056  beq         $s1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2037C0u;
    {
        const bool branch_taken_0x2037c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2037C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037C0u;
        // 0x2037c4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037c0) {
            ctx->pc = 0x20391Cu;
            goto label_20391c;
        }
    }
    ctx->pc = 0x2037C8u;
    // 0x2037c8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2037c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2037cc: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2037CCu;
    {
        const bool branch_taken_0x2037cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2037cc) {
            ctx->pc = 0x2037D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2037CCu;
            // 0x2037d0: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2037E8u;
            goto label_2037e8;
        }
    }
    ctx->pc = 0x2037D4u;
    // 0x2037d4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2037d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x2037d8: 0x8c43d9ac  lw          $v1, -0x2654($v0)
    ctx->pc = 0x2037d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x2037dc: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2037dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x2037e0: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2037e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2037e4: 0x0  nop
    ctx->pc = 0x2037e4u;
    // NOP
label_2037e8:
    // 0x2037e8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2037E8u;
    {
        const bool branch_taken_0x2037e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2037e8) {
            ctx->pc = 0x2037ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2037E8u;
            // 0x2037ec: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2037FCu;
            goto label_2037fc;
        }
    }
    ctx->pc = 0x2037F0u;
    // 0x2037f0: 0xc07f5b0  jal         func_1FD6C0
    ctx->pc = 0x2037F0u;
    SET_GPR_U32(ctx, 31, 0x2037F8u);
    ctx->pc = 0x2037F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037F0u;
    // 0x2037f4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD6C0u, 0x2037F0u, 0x2037F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2037F8u;
label_2037f8:
    // 0x2037f8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2037f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2037fc:
    // 0x2037fc: 0x3043ffdf  andi        $v1, $v0, 0xFFDF
    ctx->pc = 0x2037fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65503);
    // 0x203800: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x203800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x203804: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x203804u;
    {
        const bool branch_taken_0x203804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203804u;
        // 0x203808: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203804) {
            ctx->pc = 0x203858u;
            goto label_203858;
        }
    }
    ctx->pc = 0x20380Cu;
    // 0x20380c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x20380cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x203810: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203810u;
    {
        const bool branch_taken_0x203810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203810u;
        // 0x203814: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203810) {
            ctx->pc = 0x203820u;
            goto label_203820;
        }
    }
    ctx->pc = 0x203818u;
    // 0x203818: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x203818u;
    {
        const bool branch_taken_0x203818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203818u;
        // 0x20381c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203818) {
            ctx->pc = 0x20391Cu;
            goto label_20391c;
        }
    }
    ctx->pc = 0x203820u;
label_203820:
    // 0x203820: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x203820u;
    {
        const bool branch_taken_0x203820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203820) {
            ctx->pc = 0x203824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203820u;
            // 0x203824: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203850u;
            goto label_203850;
        }
    }
    ctx->pc = 0x203828u;
    // 0x203828: 0xc07f4fc  jal         func_1FD3F0
    ctx->pc = 0x203828u;
    SET_GPR_U32(ctx, 31, 0x203830u);
    ctx->pc = 0x20382Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203828u;
    // 0x20382c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x203828u, 0x203830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203830u;
label_203830:
    // 0x203830: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x203830u;
    {
        const bool branch_taken_0x203830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203830u;
        // 0x203834: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203830) {
            ctx->pc = 0x20391Cu;
            goto label_20391c;
        }
    }
    ctx->pc = 0x203838u;
    // 0x203838: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x203838u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20383c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x20383cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x203840: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x203840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x203844: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x203844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x203848: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x203848u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x20384c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x20384cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_203850:
    // 0x203850: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x203850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x203854: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x203854u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_203858:
    // 0x203858: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x203858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20385c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x20385Cu;
    {
        const bool branch_taken_0x20385c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20385Cu;
        // 0x203860: 0x323100ff  andi        $s1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20385c) {
            ctx->pc = 0x2038ACu;
            goto label_2038ac;
        }
    }
    ctx->pc = 0x203864u;
    // 0x203864: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x203864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x203868: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x203868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x20386c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x20386cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x203870: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x203870u;
    {
        const bool branch_taken_0x203870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203870) {
            ctx->pc = 0x203874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203870u;
            // 0x203874: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20388Cu;
            goto label_20388c;
        }
    }
    ctx->pc = 0x203878u;
    // 0x203878: 0xc080dae  jal         func_2036B8
    ctx->pc = 0x203878u;
    SET_GPR_U32(ctx, 31, 0x203880u);
    ctx->pc = 0x20387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203878u;
    // 0x20387c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2036B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2036B8u, 0x203878u, 0x203880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203880u;
label_203880:
    // 0x203880: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x203880u;
    {
        const bool branch_taken_0x203880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203880u;
        // 0x203884: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203880) {
            ctx->pc = 0x20391Cu;
            goto label_20391c;
        }
    }
    ctx->pc = 0x203888u;
    // 0x203888: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x203888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20388c:
    // 0x20388c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20388cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203890: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x203890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x203894: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x203894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x203898: 0xa091ffff  sb          $s1, -0x1($a0)
    ctx->pc = 0x203898u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 17));
    // 0x20389c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20389cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2038a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2038a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2038a4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2038A4u;
    {
        const bool branch_taken_0x2038a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038A4u;
        // 0x2038a8: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038a4) {
            ctx->pc = 0x20391Cu;
            goto label_20391c;
        }
    }
    ctx->pc = 0x2038ACu;
label_2038ac:
    // 0x2038ac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2038acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2038b0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2038B0u;
    {
        const bool branch_taken_0x2038b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038B0u;
        // 0x2038b4: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038b0) {
            ctx->pc = 0x2038E8u;
            goto label_2038e8;
        }
    }
    ctx->pc = 0x2038B8u;
    // 0x2038b8: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x2038b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2038bc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2038BCu;
    {
        const bool branch_taken_0x2038bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038BCu;
        // 0x2038c0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038bc) {
            ctx->pc = 0x2038ECu;
            goto label_2038ec;
        }
    }
    ctx->pc = 0x2038C4u;
    // 0x2038c4: 0x90e2ffff  lbu         $v0, -0x1($a3)
    ctx->pc = 0x2038c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
    // 0x2038c8: 0x14510008  bne         $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2038C8u;
    {
        const bool branch_taken_0x2038c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2038c8) {
            ctx->pc = 0x2038ECu;
            goto label_2038ec;
        }
    }
    ctx->pc = 0x2038D0u;
    // 0x2038d0: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x2038d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2038d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2038d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2038d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2038d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2038dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2038dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2038e0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2038E0u;
    {
        const bool branch_taken_0x2038e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038E0u;
        // 0x2038e4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038e0) {
            ctx->pc = 0x20391Cu;
            goto label_20391c;
        }
    }
    ctx->pc = 0x2038E8u;
label_2038e8:
    // 0x2038e8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2038e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2038ec:
    // 0x2038ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2038ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2038f0: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2038f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2038f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2038f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2038f8: 0x26060042  addiu       $a2, $s0, 0x42
    ctx->pc = 0x2038f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 66));
    // 0x2038fc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2038fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x203900: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x203900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x203904: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x203904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203908: 0xae070038  sw          $a3, 0x38($s0)
    ctx->pc = 0x203908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 7));
    // 0x20390c: 0xae040030  sw          $a0, 0x30($s0)
    ctx->pc = 0x20390cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
    // 0x203910: 0xae050034  sw          $a1, 0x34($s0)
    ctx->pc = 0x203910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
    // 0x203914: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x203914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x203918: 0xa2110042  sb          $s1, 0x42($s0)
    ctx->pc = 0x203918u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 17));
label_20391c:
    // 0x20391c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20391cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203920: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x203920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203924: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203928: 0x3e00008  jr          $ra
    ctx->pc = 0x203928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203928u;
        // 0x20392c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203930u;
}
