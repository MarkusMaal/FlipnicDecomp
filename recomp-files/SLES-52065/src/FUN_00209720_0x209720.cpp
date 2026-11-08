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

// Function: FUN_00209720
// Address: 0x209720 - 0x2098f8
void FUN_00209720_0x209720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00209720_0x209720");
#endif

    ctx->pc = 0x209720u;

    // 0x209720: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x209720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x209724: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x209724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x209728: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x209728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x20972c: 0x3463e020  ori         $v1, $v1, 0xE020
    ctx->pc = 0x20972cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57376);
    // 0x209730: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x209730u;
    SET_GPR_S32(ctx, 10, (int32_t)runtime->Load32(rdram, ctx, 0x1000E000u));
    // 0x209734: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x209734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x209738: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x209738u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x1000E020u));
    // 0x20973c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x20973cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209740: 0x34a5e030  ori         $a1, $a1, 0xE030
    ctx->pc = 0x209740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57392);
    // 0x209744: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x209744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x209748: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x209748u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x1000E030u));
    // 0x20974c: 0x3463e050  ori         $v1, $v1, 0xE050
    ctx->pc = 0x20974cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57424);
    // 0x209750: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x209750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x209754: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x209754u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x209758: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x209758u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x1000E050u));
    // 0x20975c: 0x3442e040  ori         $v0, $v0, 0xE040
    ctx->pc = 0x20975cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57408);
    // 0x209760: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x209760u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x1000E040u));
    // 0x209764: 0x2c84000a  sltiu       $a0, $a0, 0xA
    ctx->pc = 0x209764u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x209768: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x209768u;
    {
        const bool branch_taken_0x209768 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x209768) {
            ctx->pc = 0x20976Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209768u;
            // 0x20976c: 0x91220001  lbu         $v0, 0x1($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209778u;
            goto label_209778;
        }
    }
    ctx->pc = 0x209770u;
    // 0x209770: 0x3e00008  jr          $ra
    ctx->pc = 0x209770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209770u;
        // 0x209774: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209778u;
label_209778:
    // 0x209778: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x209778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x20977c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x20977Cu;
    {
        const bool branch_taken_0x20977c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20977c) {
            ctx->pc = 0x209780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20977Cu;
            // 0x209780: 0x91220002  lbu         $v0, 0x2($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20978Cu;
            goto label_20978c;
        }
    }
    ctx->pc = 0x209784u;
    // 0x209784: 0x3e00008  jr          $ra
    ctx->pc = 0x209784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209784u;
        // 0x209788: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20978Cu;
label_20978c:
    // 0x20978c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x20978cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x209790: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x209790u;
    {
        const bool branch_taken_0x209790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209790) {
            ctx->pc = 0x209794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209790u;
            // 0x209794: 0x912b0003  lbu         $t3, 0x3($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2097A0u;
            goto label_2097a0;
        }
    }
    ctx->pc = 0x209798u;
    // 0x209798: 0x3e00008  jr          $ra
    ctx->pc = 0x209798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209798u;
        // 0x20979c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2097A0u;
label_2097a0:
    // 0x2097a0: 0x2d620007  sltiu       $v0, $t3, 0x7
    ctx->pc = 0x2097a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2097a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2097A4u;
    {
        const bool branch_taken_0x2097a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2097A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097A4u;
        // 0x2097a8: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2097a4) {
            ctx->pc = 0x2097B4u;
            goto label_2097b4;
        }
    }
    ctx->pc = 0x2097ACu;
    // 0x2097ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2097ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2097B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097ACu;
        // 0x2097b0: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2097ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2097B4u;
label_2097b4:
    // 0x2097b4: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x2097b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2097b8: 0x24425c40  addiu       $v0, $v0, 0x5C40
    ctx->pc = 0x2097b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23616));
    // 0x2097bc: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x2097bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x2097c0: 0x91250001  lbu         $a1, 0x1($t1)
    ctx->pc = 0x2097c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x2097c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2097c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2097c8: 0x24845c50  addiu       $a0, $a0, 0x5C50
    ctx->pc = 0x2097c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23632));
    // 0x2097cc: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x2097ccu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2097d0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2097d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2097d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2097d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2097d8: 0x3442ffcf  ori         $v0, $v0, 0xFFCF
    ctx->pc = 0x2097d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65487);
    // 0x2097dc: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x2097dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x2097e0: 0x91270002  lbu         $a3, 0x2($t1)
    ctx->pc = 0x2097e0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x2097e4: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x2097e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x2097e8: 0x24845c60  addiu       $a0, $a0, 0x5C60
    ctx->pc = 0x2097e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23648));
    // 0x2097ec: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2097ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2097f0: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x2097f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2097f4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2097f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2097f8: 0x485025  or          $t2, $v0, $t0
    ctx->pc = 0x2097f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x2097fc: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x2097fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x209800: 0x3463ff3f  ori         $v1, $v1, 0xFF3F
    ctx->pc = 0x209800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65343);
    // 0x209804: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x209804u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x209808: 0x1431824  and         $v1, $t2, $v1
    ctx->pc = 0x209808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x20980c: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x20980cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x209810: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x209810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x209814: 0x665025  or          $t2, $v1, $a2
    ctx->pc = 0x209814u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x209818: 0x3442fff3  ori         $v0, $v0, 0xFFF3
    ctx->pc = 0x209818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65523);
    // 0x20981c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x20981cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x209820: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x209820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x209824: 0x1160000a  beqz        $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x209824u;
    {
        const bool branch_taken_0x209824 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x209828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209824u;
        // 0x209828: 0x445025  or          $t2, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209824) {
            ctx->pc = 0x209850u;
            goto label_209850;
        }
    }
    ctx->pc = 0x20982Cu;
    // 0x20982c: 0x91230003  lbu         $v1, 0x3($t1)
    ctx->pc = 0x20982cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x209830: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x209830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x209834: 0x354a0002  ori         $t2, $t2, 0x2
    ctx->pc = 0x209834u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)2);
    // 0x209838: 0x3442fcff  ori         $v0, $v0, 0xFCFF
    ctx->pc = 0x209838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64767);
    // 0x20983c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20983cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x209840: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x209840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x209844: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x209844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x209848: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x209848u;
    {
        const bool branch_taken_0x209848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209848u;
        // 0x20984c: 0x435025  or          $t2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209848) {
            ctx->pc = 0x20985Cu;
            goto label_20985c;
        }
    }
    ctx->pc = 0x209850u;
label_209850:
    // 0x209850: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x209850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x209854: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x209854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x209858: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x209858u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
label_20985c:
    // 0x20985c: 0x95220004  lhu         $v0, 0x4($t1)
    ctx->pc = 0x20985cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x209860: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x209860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x209864: 0x95260006  lhu         $a2, 0x6($t1)
    ctx->pc = 0x209864u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x209868: 0x3484e000  ori         $a0, $a0, 0xE000
    ctx->pc = 0x209868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57344);
    // 0x20986c: 0x9525000a  lhu         $a1, 0xA($t1)
    ctx->pc = 0x20986cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x209870: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x209870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x209874: 0x8d280010  lw          $t0, 0x10($t1)
    ctx->pc = 0x209874u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x209878: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x209878u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x20987c: 0x95270008  lhu         $a3, 0x8($t1)
    ctx->pc = 0x20987cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x209880: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x209880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x209884: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x209884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x209888: 0x3463e020  ori         $v1, $v1, 0xE020
    ctx->pc = 0x209888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57376);
    // 0x20988c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x20988cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x209890: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x209890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x209894: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x209894u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x209898: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x209898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x20989c: 0x3442e030  ori         $v0, $v0, 0xE030
    ctx->pc = 0x20989cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57392);
    // 0x2098a0: 0x8d26000c  lw          $a2, 0xC($t1)
    ctx->pc = 0x2098a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2098a4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2098a4u;
    runtime->Store32(rdram, ctx, 0x1000E030u, GPR_U32(ctx, 5));
    // 0x2098a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2098a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2098ac: 0x3463e050  ori         $v1, $v1, 0xE050
    ctx->pc = 0x2098acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57424);
    // 0x2098b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2098b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2098b4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2098b4u;
    runtime->Store32(rdram, ctx, 0x1000E050u, GPR_U32(ctx, 6));
    // 0x2098b8: 0x3442e040  ori         $v0, $v0, 0xE040
    ctx->pc = 0x2098b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57408);
    // 0x2098bc: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x2098bcu;
    runtime->Store32(rdram, ctx, 0x1000E040u, GPR_U32(ctx, 8));
    // 0x2098c0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2098c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2098c4: 0x24662c28  addiu       $a2, $v1, 0x2C28
    ctx->pc = 0x2098c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 11304));
    // 0x2098c8: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x2098c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2098cc: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x2098ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2098d0: 0x6924000f  ldl         $a0, 0xF($t1)
    ctx->pc = 0x2098d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2098d4: 0x6d240008  ldr         $a0, 0x8($t1)
    ctx->pc = 0x2098d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2098d8: 0x8d250010  lw          $a1, 0x10($t1)
    ctx->pc = 0x2098d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x2098dc: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x2098dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2098e0: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x2098e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2098e4: 0xb0c4000f  sdl         $a0, 0xF($a2)
    ctx->pc = 0x2098e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2098e8: 0xb4c40008  sdr         $a0, 0x8($a2)
    ctx->pc = 0x2098e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2098ec: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x2098ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x392C38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x392C38u, _value); } while (0);
    // 0x2098f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2098F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2098F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098F0u;
        // 0x2098f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2098F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2098F8u;
}
