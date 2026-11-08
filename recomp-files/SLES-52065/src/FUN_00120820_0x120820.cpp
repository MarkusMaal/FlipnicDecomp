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

// Function: FUN_00120820
// Address: 0x120820 - 0x120944
void FUN_00120820_0x120820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00120820_0x120820");
#endif

    switch (ctx->pc) {
        case 0x120820u: goto label_120820;
        case 0x120824u: goto label_120824;
        case 0x120828u: goto label_120828;
        case 0x12082cu: goto label_12082c;
        case 0x120830u: goto label_120830;
        case 0x120834u: goto label_120834;
        case 0x120838u: goto label_120838;
        case 0x12083cu: goto label_12083c;
        case 0x120840u: goto label_120840;
        case 0x120844u: goto label_120844;
        case 0x120848u: goto label_120848;
        case 0x12084cu: goto label_12084c;
        case 0x120850u: goto label_120850;
        case 0x120854u: goto label_120854;
        case 0x120858u: goto label_120858;
        case 0x12085cu: goto label_12085c;
        case 0x120860u: goto label_120860;
        case 0x120864u: goto label_120864;
        case 0x120868u: goto label_120868;
        case 0x12086cu: goto label_12086c;
        case 0x120870u: goto label_120870;
        case 0x120874u: goto label_120874;
        case 0x120878u: goto label_120878;
        case 0x12087cu: goto label_12087c;
        case 0x120880u: goto label_120880;
        case 0x120884u: goto label_120884;
        case 0x120888u: goto label_120888;
        case 0x12088cu: goto label_12088c;
        case 0x120890u: goto label_120890;
        case 0x120894u: goto label_120894;
        case 0x120898u: goto label_120898;
        case 0x12089cu: goto label_12089c;
        case 0x1208a0u: goto label_1208a0;
        case 0x1208a4u: goto label_1208a4;
        case 0x1208a8u: goto label_1208a8;
        case 0x1208acu: goto label_1208ac;
        case 0x1208b0u: goto label_1208b0;
        case 0x1208b4u: goto label_1208b4;
        case 0x1208b8u: goto label_1208b8;
        case 0x1208bcu: goto label_1208bc;
        case 0x1208c0u: goto label_1208c0;
        case 0x1208c4u: goto label_1208c4;
        case 0x1208c8u: goto label_1208c8;
        case 0x1208ccu: goto label_1208cc;
        case 0x1208d0u: goto label_1208d0;
        case 0x1208d4u: goto label_1208d4;
        case 0x1208d8u: goto label_1208d8;
        case 0x1208dcu: goto label_1208dc;
        case 0x1208e0u: goto label_1208e0;
        case 0x1208e4u: goto label_1208e4;
        case 0x1208e8u: goto label_1208e8;
        case 0x1208ecu: goto label_1208ec;
        case 0x1208f0u: goto label_1208f0;
        case 0x1208f4u: goto label_1208f4;
        case 0x1208f8u: goto label_1208f8;
        case 0x1208fcu: goto label_1208fc;
        case 0x120900u: goto label_120900;
        case 0x120904u: goto label_120904;
        case 0x120908u: goto label_120908;
        case 0x12090cu: goto label_12090c;
        case 0x120910u: goto label_120910;
        case 0x120914u: goto label_120914;
        case 0x120918u: goto label_120918;
        case 0x12091cu: goto label_12091c;
        case 0x120920u: goto label_120920;
        case 0x120924u: goto label_120924;
        case 0x120928u: goto label_120928;
        case 0x12092cu: goto label_12092c;
        case 0x120930u: goto label_120930;
        case 0x120934u: goto label_120934;
        case 0x120938u: goto label_120938;
        case 0x12093cu: goto label_12093c;
        case 0x120940u: goto label_120940;
        default: break;
    }

    ctx->pc = 0x120820u;

label_120820:
    // 0x120820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x120820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_120824:
    // 0x120824: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x120824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_120828:
    // 0x120828: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x120828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_12082c:
    // 0x12082c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12082cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_120830:
    // 0x120830: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x120830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_120834:
    // 0x120834: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x120834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_120838:
    // 0x120838: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x120838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_12083c:
    // 0x12083c: 0xc04842c  jal         func_1210B0
label_120840:
    if (ctx->pc == 0x120840u) {
        ctx->pc = 0x120840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12083Cu;
        // 0x120840: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120844u;
        goto label_120844;
    }
    ctx->pc = 0x12083Cu;
    SET_GPR_U32(ctx, 31, 0x120844u);
    ctx->pc = 0x120840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12083Cu;
    // 0x120840: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1210B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1210B0u, 0x12083Cu, 0x120844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120844u;
label_120844:
    // 0x120844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x120844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120848:
    // 0x120848: 0x27b00049  addiu       $s0, $sp, 0x49
    ctx->pc = 0x120848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 73));
label_12084c:
    // 0x12084c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x12084cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_120850:
    // 0x120850: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x120850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_120854:
    // 0x120854: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x120854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_120858:
    // 0x120858: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
label_12085c:
    if (ctx->pc == 0x12085Cu) {
        ctx->pc = 0x120860u;
        goto label_120860;
    }
    ctx->pc = 0x120858u;
    {
        const bool branch_taken_0x120858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x120858) {
            ctx->pc = 0x1208E4u;
            goto label_1208e4;
        }
    }
    ctx->pc = 0x120860u;
label_120860:
    // 0x120860: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x120860u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_120864:
    // 0x120864: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x120864u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_120868:
    // 0x120868: 0x320f809  jalr        $t9
label_12086c:
    if (ctx->pc == 0x12086Cu) {
        ctx->pc = 0x12086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120868u;
        // 0x12086c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120870u;
        goto label_120870;
    }
    ctx->pc = 0x120868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x120870u);
        ctx->pc = 0x12086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120868u;
        // 0x12086c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120868u, 0x120870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x120870u;
label_120870:
    // 0x120870: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x120870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_120874:
    // 0x120874: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_120878:
    if (ctx->pc == 0x120878u) {
        ctx->pc = 0x12087Cu;
        goto label_12087c;
    }
    ctx->pc = 0x120874u;
    {
        const bool branch_taken_0x120874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x120874) {
            ctx->pc = 0x120880u;
            goto label_120880;
        }
    }
    ctx->pc = 0x12087Cu;
label_12087c:
    // 0x12087c: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x12087cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_120880:
    // 0x120880: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
label_120884:
    if (ctx->pc == 0x120884u) {
        ctx->pc = 0x120888u;
        goto label_120888;
    }
    ctx->pc = 0x120880u;
    {
        const bool branch_taken_0x120880 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x120880) {
            ctx->pc = 0x1208E4u;
            goto label_1208e4;
        }
    }
    ctx->pc = 0x120888u;
label_120888:
    // 0x120888: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x120888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12088c:
    // 0x12088c: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x12088cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
label_120890:
    // 0x120890: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x120890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_120894:
    // 0x120894: 0xa062003a  sb          $v0, 0x3A($v1)
    ctx->pc = 0x120894u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 58), (uint8_t)GPR_U32(ctx, 2));
label_120898:
    // 0x120898: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x120898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_12089c:
    // 0x12089c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1208a0:
    if (ctx->pc == 0x1208A0u) {
        ctx->pc = 0x1208A4u;
        goto label_1208a4;
    }
    ctx->pc = 0x12089Cu;
    {
        const bool branch_taken_0x12089c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12089c) {
            ctx->pc = 0x1208B0u;
            goto label_1208b0;
        }
    }
    ctx->pc = 0x1208A4u;
label_1208a4:
    // 0x1208a4: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x1208a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
label_1208a8:
    // 0x1208a8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1208a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1208ac:
    // 0x1208ac: 0xa062003a  sb          $v0, 0x3A($v1)
    ctx->pc = 0x1208acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 58), (uint8_t)GPR_U32(ctx, 2));
label_1208b0:
    // 0x1208b0: 0x9064003b  lbu         $a0, 0x3B($v1)
    ctx->pc = 0x1208b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 59)));
label_1208b4:
    // 0x1208b4: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x1208b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
label_1208b8:
    // 0x1208b8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1208b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1208bc:
    // 0x1208bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1208bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1208c0:
    // 0x1208c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1208c4:
    if (ctx->pc == 0x1208C4u) {
        ctx->pc = 0x1208C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208C0u;
        // 0x1208c4: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1208C8u;
        goto label_1208c8;
    }
    ctx->pc = 0x1208C0u;
    {
        const bool branch_taken_0x1208c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1208C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208C0u;
        // 0x1208c4: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1208c0) {
            ctx->pc = 0x1208E4u;
            goto label_1208e4;
        }
    }
    ctx->pc = 0x1208C8u;
label_1208c8:
    // 0x1208c8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1208c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1208cc:
    // 0x1208cc: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1208ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
label_1208d0:
    // 0x1208d0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1208d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1208d4:
    // 0x1208d4: 0xc07f5d4  jal         func_1FD750
label_1208d8:
    if (ctx->pc == 0x1208D8u) {
        ctx->pc = 0x1208D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208D4u;
        // 0x1208d8: 0x24a5e930  addiu       $a1, $a1, -0x16D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1208DCu;
        goto label_1208dc;
    }
    ctx->pc = 0x1208D4u;
    SET_GPR_U32(ctx, 31, 0x1208DCu);
    ctx->pc = 0x1208D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1208D4u;
    // 0x1208d8: 0x24a5e930  addiu       $a1, $a1, -0x16D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1208D4u, 0x1208DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1208DCu;
label_1208dc:
    // 0x1208dc: 0xc07ef8a  jal         func_1FBE28
label_1208e0:
    if (ctx->pc == 0x1208E0u) {
        ctx->pc = 0x1208E4u;
        goto label_1208e4;
    }
    ctx->pc = 0x1208DCu;
    SET_GPR_U32(ctx, 31, 0x1208E4u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1208DCu, 0x1208E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1208E4u;
label_1208e4:
    // 0x1208e4: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1208e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1208e8:
    // 0x1208e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1208e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1208ec:
    // 0x1208ec: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x1208ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
label_1208f0:
    // 0x1208f0: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x1208f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
label_1208f4:
    // 0x1208f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1208f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1208f8:
    // 0x1208f8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1208fc:
    if (ctx->pc == 0x1208FCu) {
        ctx->pc = 0x1208FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208F8u;
        // 0x1208fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120900u;
        goto label_120900;
    }
    ctx->pc = 0x1208F8u;
    {
        const bool branch_taken_0x1208f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1208FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208F8u;
        // 0x1208fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1208f8) {
            ctx->pc = 0x12092Cu;
            goto label_12092c;
        }
    }
    ctx->pc = 0x120900u;
label_120900:
    // 0x120900: 0x94620038  lhu         $v0, 0x38($v1)
    ctx->pc = 0x120900u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_120904:
    // 0x120904: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x120904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_120908:
    // 0x120908: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x120908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_12090c:
    // 0x12090c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_120910:
    if (ctx->pc == 0x120910u) {
        ctx->pc = 0x120914u;
        goto label_120914;
    }
    ctx->pc = 0x12090Cu;
    {
        const bool branch_taken_0x12090c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12090c) {
            ctx->pc = 0x120928u;
            goto label_120928;
        }
    }
    ctx->pc = 0x120914u;
label_120914:
    // 0x120914: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x120914u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_120918:
    // 0x120918: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_12091c:
    if (ctx->pc == 0x12091Cu) {
        ctx->pc = 0x120920u;
        goto label_120920;
    }
    ctx->pc = 0x120918u;
    {
        const bool branch_taken_0x120918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120918) {
            ctx->pc = 0x120928u;
            goto label_120928;
        }
    }
    ctx->pc = 0x120920u;
label_120920:
    // 0x120920: 0xc048208  jal         func_120820
label_120924:
    if (ctx->pc == 0x120924u) {
        ctx->pc = 0x120928u;
        goto label_120928;
    }
    ctx->pc = 0x120920u;
    SET_GPR_U32(ctx, 31, 0x120928u);
    ctx->pc = 0x120820u;
    goto label_120820;
    ctx->pc = 0x120928u;
label_120928:
    // 0x120928: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x120928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12092c:
    // 0x12092c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12092cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_120930:
    // 0x120930: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x120930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_120934:
    // 0x120934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x120934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_120938:
    // 0x120938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x120938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12093c:
    // 0x12093c: 0x3e00008  jr          $ra
label_120940:
    if (ctx->pc == 0x120940u) {
        ctx->pc = 0x120940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12093Cu;
        // 0x120940: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120944u;
        goto label_fallthrough_0x12093c;
    }
    ctx->pc = 0x12093Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12093Cu;
        // 0x120940: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12093Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12093c:
    ctx->pc = 0x120944u;
}
