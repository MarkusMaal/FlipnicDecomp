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

// Function: FUN_00120660
// Address: 0x120660 - 0x120798
void FUN_00120660_0x120660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00120660_0x120660");
#endif

    switch (ctx->pc) {
        case 0x120684u: goto label_120684;
        case 0x120698u: goto label_120698;
        case 0x1206c4u: goto label_1206c4;
        case 0x120734u: goto label_120734;
        case 0x12073cu: goto label_12073c;
        case 0x120780u: goto label_120780;
        default: break;
    }

    ctx->pc = 0x120660u;

    // 0x120660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x120660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x120664: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x120664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x120668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x120668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12066c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12066cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x120670: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x120670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120674: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x120674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120678: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x120678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12067c: 0xc04842c  jal         func_1210B0
    ctx->pc = 0x12067Cu;
    SET_GPR_U32(ctx, 31, 0x120684u);
    ctx->pc = 0x120680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12067Cu;
    // 0x120680: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1210B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1210B0u, 0x12067Cu, 0x120684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120684u;
label_120684:
    // 0x120684: 0x93a20030  lbu         $v0, 0x30($sp)
    ctx->pc = 0x120684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x120688: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x120688u;
    {
        const bool branch_taken_0x120688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120688u;
        // 0x12068c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120688) {
            ctx->pc = 0x12073Cu;
            goto label_12073c;
        }
    }
    ctx->pc = 0x120690u;
    // 0x120690: 0xc080748  jal         func_201D20
    ctx->pc = 0x120690u;
    SET_GPR_U32(ctx, 31, 0x120698u);
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x120690u, 0x120698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120698u;
label_120698:
    // 0x120698: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x120698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12069c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x12069cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1206a0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1206a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1206a4: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1206a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1206a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1206a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1206ac: 0x90c70044  lbu         $a3, 0x44($a2)
    ctx->pc = 0x1206acu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x1206b0: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x1206b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x1206b4: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x1206b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x1206b8: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x1206b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1206bc: 0xc0482c8  jal         func_120B20
    ctx->pc = 0x1206BCu;
    SET_GPR_U32(ctx, 31, 0x1206C4u);
    ctx->pc = 0x1206C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1206BCu;
    // 0x1206c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120B20u, 0x1206BCu, 0x1206C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1206C4u;
label_1206c4:
    // 0x1206c4: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x1206c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1206c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1206c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1206cc: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1206ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x1206d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1206d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1206d4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1206D4u;
    {
        const bool branch_taken_0x1206d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1206d4) {
            ctx->pc = 0x12073Cu;
            goto label_12073c;
        }
    }
    ctx->pc = 0x1206DCu;
    // 0x1206dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1206dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1206e0: 0x64020005  daddiu      $v0, $zero, 0x5
    ctx->pc = 0x1206e0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)5);
    // 0x1206e4: 0x9064003a  lbu         $a0, 0x3A($v1)
    ctx->pc = 0x1206e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x1206e8: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1206e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1206ec: 0xa062003a  sb          $v0, 0x3A($v1)
    ctx->pc = 0x1206ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x1206f0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1206f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1206f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1206F4u;
    {
        const bool branch_taken_0x1206f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1206f4) {
            ctx->pc = 0x120708u;
            goto label_120708;
        }
    }
    ctx->pc = 0x1206FCu;
    // 0x1206fc: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x1206fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x120700: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x120700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x120704: 0xa062003a  sb          $v0, 0x3A($v1)
    ctx->pc = 0x120704u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 58), (uint8_t)GPR_U32(ctx, 2));
label_120708:
    // 0x120708: 0x9064003b  lbu         $a0, 0x3B($v1)
    ctx->pc = 0x120708u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 59)));
    // 0x12070c: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x12070cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x120710: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x120710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x120714: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x120714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x120718: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x120718u;
    {
        const bool branch_taken_0x120718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120718u;
        // 0x12071c: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120718) {
            ctx->pc = 0x12073Cu;
            goto label_12073c;
        }
    }
    ctx->pc = 0x120720u;
    // 0x120720: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x120720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x120724: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x120724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x120728: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x120728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12072c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x12072Cu;
    SET_GPR_U32(ctx, 31, 0x120734u);
    ctx->pc = 0x120730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12072Cu;
    // 0x120730: 0x24a5e930  addiu       $a1, $a1, -0x16D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x12072Cu, 0x120734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120734u;
label_120734:
    // 0x120734: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x120734u;
    SET_GPR_U32(ctx, 31, 0x12073Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x120734u, 0x12073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12073Cu;
label_12073c:
    // 0x12073c: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x12073cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x120740: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x120740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x120744: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x120744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x120748: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x120748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
    // 0x12074c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12074cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x120750: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x120750u;
    {
        const bool branch_taken_0x120750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120750u;
        // 0x120754: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120750) {
            ctx->pc = 0x120784u;
            goto label_120784;
        }
    }
    ctx->pc = 0x120758u;
    // 0x120758: 0x94620038  lhu         $v0, 0x38($v1)
    ctx->pc = 0x120758u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x12075c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x12075cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x120760: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x120760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x120764: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x120764u;
    {
        const bool branch_taken_0x120764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120764) {
            ctx->pc = 0x120780u;
            goto label_120780;
        }
    }
    ctx->pc = 0x12076Cu;
    // 0x12076c: 0x93a20031  lbu         $v0, 0x31($sp)
    ctx->pc = 0x12076cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 49)));
    // 0x120770: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x120770u;
    {
        const bool branch_taken_0x120770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120770) {
            ctx->pc = 0x120780u;
            goto label_120780;
        }
    }
    ctx->pc = 0x120778u;
    // 0x120778: 0xc048208  jal         func_120820
    ctx->pc = 0x120778u;
    SET_GPR_U32(ctx, 31, 0x120780u);
    ctx->pc = 0x120820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120820u, 0x120778u, 0x120780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120780u;
label_120780:
    // 0x120780: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x120780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_120784:
    // 0x120784: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x120784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120788: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x120788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12078c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12078cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120790: 0x3e00008  jr          $ra
    ctx->pc = 0x120790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120790u;
        // 0x120794: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120798u;
}
