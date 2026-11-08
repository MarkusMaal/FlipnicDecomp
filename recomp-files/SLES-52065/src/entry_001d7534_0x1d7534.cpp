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

// Function: entry_001d7534
// Address: 0x1d7534 - 0x1d7660
void entry_001d7534_0x1d7534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7534_0x1d7534");
#endif

    switch (ctx->pc) {
        case 0x1d7544u: goto label_1d7544;
        case 0x1d7560u: goto label_1d7560;
        case 0x1d7580u: goto label_1d7580;
        case 0x1d7590u: goto label_1d7590;
        case 0x1d75acu: goto label_1d75ac;
        case 0x1d75c8u: goto label_1d75c8;
        case 0x1d75d8u: goto label_1d75d8;
        case 0x1d75e8u: goto label_1d75e8;
        case 0x1d75f8u: goto label_1d75f8;
        case 0x1d7604u: goto label_1d7604;
        case 0x1d7614u: goto label_1d7614;
        case 0x1d7620u: goto label_1d7620;
        case 0x1d762cu: goto label_1d762c;
        default: break;
    }

    ctx->pc = 0x1d7534u;

    // 0x1d7534: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d7534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1d7538: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d753c: 0xc077506  jal         func_1DD418
    ctx->pc = 0x1D753Cu;
    SET_GPR_U32(ctx, 31, 0x1D7544u);
    ctx->pc = 0x1D7540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D753Cu;
    // 0x1d7540: 0x24710550  addiu       $s1, $v1, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD418u, 0x1D753Cu, 0x1D7544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7544u;
label_1d7544:
    // 0x1d7544: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d7544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d7548: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d754c: 0x2413007f  addiu       $s3, $zero, 0x7F
    ctx->pc = 0x1d754cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1d7550: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d7550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7554: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x1d7554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1d7558: 0xc0774f8  jal         func_1DD3E0
    ctx->pc = 0x1D7558u;
    SET_GPR_U32(ctx, 31, 0x1D7560u);
    ctx->pc = 0x1D755Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7558u;
    // 0x1d755c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3E0u, 0x1D7558u, 0x1D7560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7560u;
label_1d7560:
    // 0x1d7560: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d7560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d7564: 0x92c70002  lbu         $a3, 0x2($s6)
    ctx->pc = 0x1d7564u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x1d7568: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d756c: 0x82c80003  lb          $t0, 0x3($s6)
    ctx->pc = 0x1d756cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 3)));
    // 0x1d7570: 0x8ea9004c  lw          $t1, 0x4C($s5)
    ctx->pc = 0x1d7570u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x1d7574: 0x8c660034  lw          $a2, 0x34($v1)
    ctx->pc = 0x1d7574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1d7578: 0xc0774a0  jal         func_1DD280
    ctx->pc = 0x1D7578u;
    SET_GPR_U32(ctx, 31, 0x1D7580u);
    ctx->pc = 0x1D757Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7578u;
    // 0x1d757c: 0x8ea5001c  lw          $a1, 0x1C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD280u, 0x1D7578u, 0x1D7580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7580u;
label_1d7580:
    // 0x1d7580: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d7580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d7584: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7588: 0xc07744e  jal         func_1DD138
    ctx->pc = 0x1D7588u;
    SET_GPR_U32(ctx, 31, 0x1D7590u);
    ctx->pc = 0x1D758Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7588u;
    // 0x1d758c: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD138u, 0x1D7588u, 0x1D7590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7590u;
label_1d7590:
    // 0x1d7590: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x1d7590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1d7594: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7598: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x1d7598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1d759c: 0x262280a  movz        $a1, $s3, $v0
    ctx->pc = 0x1d759cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
    // 0x1d75a0: 0x205182a  slt         $v1, $s0, $a1
    ctx->pc = 0x1d75a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d75a4: 0xc077464  jal         func_1DD190
    ctx->pc = 0x1D75A4u;
    SET_GPR_U32(ctx, 31, 0x1D75ACu);
    ctx->pc = 0x1D75A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D75A4u;
    // 0x1d75a8: 0x243280a  movz        $a1, $s2, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD190u, 0x1D75A4u, 0x1D75ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D75ACu;
label_1d75ac:
    // 0x1d75ac: 0x92c5000c  lbu         $a1, 0xC($s6)
    ctx->pc = 0x1d75acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x1d75b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d75b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d75b4: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x1d75b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1d75b8: 0x262280a  movz        $a1, $s3, $v0
    ctx->pc = 0x1d75b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
    // 0x1d75bc: 0x205802a  slt         $s0, $s0, $a1
    ctx->pc = 0x1d75bcu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d75c0: 0xc07747a  jal         func_1DD1E8
    ctx->pc = 0x1D75C0u;
    SET_GPR_U32(ctx, 31, 0x1D75C8u);
    ctx->pc = 0x1D75C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D75C0u;
    // 0x1d75c4: 0x250280a  movz        $a1, $s2, $s0 (Delay Slot)
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD1E8u, 0x1D75C0u, 0x1D75C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D75C8u;
label_1d75c8:
    // 0x1d75c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d75c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d75cc: 0x8ea60048  lw          $a2, 0x48($s5)
    ctx->pc = 0x1d75ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x1d75d0: 0xc07751c  jal         func_1DD470
    ctx->pc = 0x1D75D0u;
    SET_GPR_U32(ctx, 31, 0x1D75D8u);
    ctx->pc = 0x1D75D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D75D0u;
    // 0x1d75d4: 0x8ea50044  lw          $a1, 0x44($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD470u, 0x1D75D0u, 0x1D75D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D75D8u;
label_1d75d8:
    // 0x1d75d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d75d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d75dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d75dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d75e0: 0xc0773e0  jal         func_1DCF80
    ctx->pc = 0x1D75E0u;
    SET_GPR_U32(ctx, 31, 0x1D75E8u);
    ctx->pc = 0x1D75E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D75E0u;
    // 0x1d75e4: 0x8c45002c  lw          $a1, 0x2C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCF80u, 0x1D75E0u, 0x1D75E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D75E8u;
label_1d75e8:
    // 0x1d75e8: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x1d75e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x1d75ec: 0x92c5000b  lbu         $a1, 0xB($s6)
    ctx->pc = 0x1d75ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 11)));
    // 0x1d75f0: 0xc081c20  jal         func_207080
    ctx->pc = 0x1D75F0u;
    SET_GPR_U32(ctx, 31, 0x1D75F8u);
    ctx->pc = 0x1D75F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D75F0u;
    // 0x1d75f4: 0x90440001  lbu         $a0, 0x1($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x1D75F0u, 0x1D75F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D75F8u;
label_1d75f8:
    // 0x1d75f8: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x1d75f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1d75fc: 0xc081c38  jal         func_2070E0
    ctx->pc = 0x1D75FCu;
    SET_GPR_U32(ctx, 31, 0x1D7604u);
    ctx->pc = 0x1D7600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D75FCu;
    // 0x1d7600: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2070E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2070E0u, 0x1D75FCu, 0x1D7604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7604u;
label_1d7604:
    // 0x1d7604: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1d7604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d7608: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1d7608u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1d760c: 0xc07740e  jal         func_1DD038
    ctx->pc = 0x1D760Cu;
    SET_GPR_U32(ctx, 31, 0x1D7614u);
    ctx->pc = 0x1D7610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D760Cu;
    // 0x1d7610: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD038u, 0x1D760Cu, 0x1D7614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7614u;
label_1d7614:
    // 0x1d7614: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d7614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d7618: 0xc078454  jal         func_1E1150
    ctx->pc = 0x1D7618u;
    SET_GPR_U32(ctx, 31, 0x1D7620u);
    ctx->pc = 0x1D761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7618u;
    // 0x1d761c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1150u, 0x1D7618u, 0x1D7620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7620u;
label_1d7620:
    // 0x1d7620: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7624: 0xc0773f6  jal         func_1DCFD8
    ctx->pc = 0x1D7624u;
    SET_GPR_U32(ctx, 31, 0x1D762Cu);
    ctx->pc = 0x1D7628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7624u;
    // 0x1d7628: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCFD8u, 0x1D7624u, 0x1D762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D762Cu;
label_1d762c:
    // 0x1d762c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d762cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d7630: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1d7630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d7634: 0x240309e4  addiu       $v1, $zero, 0x9E4
    ctx->pc = 0x1d7634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d7638: 0x24850558  addiu       $a1, $a0, 0x558
    ctx->pc = 0x1d7638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1368));
    // 0x1d763c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1d763cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d7640: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1d7640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1d7644: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1d7644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d7648: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d7648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d764c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D764Cu;
    {
        const bool branch_taken_0x1d764c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d764c) {
            ctx->pc = 0x1D7650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D764Cu;
            // 0x1d7650: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7660u;
            return;
        }
    }
    ctx->pc = 0x1D7654u;
    // 0x1d7654: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D7654u;
    {
        const bool branch_taken_0x1d7654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7654u;
        // 0x1d7658: 0x8ea20018  lw          $v0, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7654) {
            ctx->pc = 0x1D7670u;
            return;
        }
    }
    ctx->pc = 0x1D765Cu;
    // 0x1d765c: 0x0  nop
    ctx->pc = 0x1d765cu;
    // NOP
    ctx->pc = 0x1d7660u;
}
