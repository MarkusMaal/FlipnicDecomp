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

// Function: entry_001d1024
// Address: 0x1d1024 - 0x1d114c
void entry_001d1024_0x1d1024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1024_0x1d1024");
#endif

    switch (ctx->pc) {
        case 0x1d10b0u: goto label_1d10b0;
        case 0x1d10c4u: goto label_1d10c4;
        case 0x1d10d0u: goto label_1d10d0;
        case 0x1d10dcu: goto label_1d10dc;
        case 0x1d10e8u: goto label_1d10e8;
        case 0x1d10fcu: goto label_1d10fc;
        case 0x1d1108u: goto label_1d1108;
        case 0x1d1114u: goto label_1d1114;
        case 0x1d1128u: goto label_1d1128;
        case 0x1d1134u: goto label_1d1134;
        default: break;
    }

    ctx->pc = 0x1d1024u;

label_1d1024:
    // 0x1d1024: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x1d1024u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d1028: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d1028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d102c: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x1d102cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x1d1030: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1d1030u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d1034: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1d1034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1d1038: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x1d1038u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d103c: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D103Cu;
    {
        const bool branch_taken_0x1d103c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1D1040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D103Cu;
        // 0x1d1040: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d103c) {
            ctx->pc = 0x1D1024u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1024;
        }
    }
    ctx->pc = 0x1D1044u;
    // 0x1d1044: 0x90e30030  lbu         $v1, 0x30($a3)
    ctx->pc = 0x1d1044u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1d1048: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1d1048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d104c: 0x90e20031  lbu         $v0, 0x31($a3)
    ctx->pc = 0x1d104cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 49)));
    // 0x1d1050: 0x27a50052  addiu       $a1, $sp, 0x52
    ctx->pc = 0x1d1050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 82));
    // 0x1d1054: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1058: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x1d1058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1d105c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x1d105cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d1060: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x1d1060u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d1064: 0x90e30032  lbu         $v1, 0x32($a3)
    ctx->pc = 0x1d1064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 50)));
    // 0x1d1068: 0x90e20033  lbu         $v0, 0x33($a3)
    ctx->pc = 0x1d1068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 51)));
    // 0x1d106c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1d106cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d1070: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x1d1070u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d1074: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x1d1074u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d1078: 0x93a20051  lbu         $v0, 0x51($sp)
    ctx->pc = 0x1d1078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 81)));
    // 0x1d107c: 0xfc23fc80  sd          $v1, -0x380($at)
    ctx->pc = 0x1d107cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FC80u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x36FC80u, _value); } while (0);
    // 0x1d1080: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1084: 0xac28fc88  sw          $t0, -0x378($at)
    ctx->pc = 0x1d1084u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x36FC88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FC88u, _value); } while (0);
    // 0x1d1088: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d108c: 0xac29fc90  sw          $t1, -0x370($at)
    ctx->pc = 0x1d108cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x36FC90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FC90u, _value); } while (0);
    // 0x1d1090: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1094: 0xac30fc98  sw          $s0, -0x368($at)
    ctx->pc = 0x1d1094u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x36FC98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FC98u, _value); } while (0);
    // 0x1d1098: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1d1098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d109c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d109cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d10a0: 0xac23fca0  sw          $v1, -0x360($at)
    ctx->pc = 0x1d10a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FCA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FCA0u, _value); } while (0);
    // 0x1d10a4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d10a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d10a8: 0xc074388  jal         func_1D0E20
    ctx->pc = 0x1D10A8u;
    SET_GPR_U32(ctx, 31, 0x1D10B0u);
    ctx->pc = 0x1D10ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D10A8u;
    // 0x1d10ac: 0xac22fca8  sw          $v0, -0x358($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966440), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0E20u, 0x1D10A8u, 0x1D10B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D10B0u;
label_1d10b0:
    // 0x1d10b0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d10b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d10b4: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1d10b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1d10b8: 0x27a50064  addiu       $a1, $sp, 0x64
    ctx->pc = 0x1d10b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1d10bc: 0xc06ec00  jal         func_1BB000
    ctx->pc = 0x1D10BCu;
    SET_GPR_U32(ctx, 31, 0x1D10C4u);
    ctx->pc = 0x1D10C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D10BCu;
    // 0x1d10c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB000u, 0x1D10BCu, 0x1D10C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D10C4u;
label_1d10c4:
    // 0x1d10c4: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x1d10c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1d10c8: 0xc04619c  jal         func_118670
    ctx->pc = 0x1D10C8u;
    SET_GPR_U32(ctx, 31, 0x1D10D0u);
    ctx->pc = 0x1D10CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D10C8u;
    // 0x1d10cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1D10C8u, 0x1D10D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D10D0u;
label_1d10d0:
    // 0x1d10d0: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1d10d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1d10d4: 0xc0488c8  jal         func_122320
    ctx->pc = 0x1D10D4u;
    SET_GPR_U32(ctx, 31, 0x1D10DCu);
    ctx->pc = 0x1D10D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D10D4u;
    // 0x1d10d8: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122320u, 0x1D10D4u, 0x1D10DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D10DCu;
label_1d10dc:
    // 0x1d10dc: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1d10dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1d10e0: 0xc074344  jal         func_1D0D10
    ctx->pc = 0x1D10E0u;
    SET_GPR_U32(ctx, 31, 0x1D10E8u);
    ctx->pc = 0x1D10E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D10E0u;
    // 0x1d10e4: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D10u, 0x1D10E0u, 0x1D10E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D10E8u;
label_1d10e8:
    // 0x1d10e8: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1d10e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1d10ec: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x1d10ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1d10f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d10f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d10f4: 0xc06ec00  jal         func_1BB000
    ctx->pc = 0x1D10F4u;
    SET_GPR_U32(ctx, 31, 0x1D10FCu);
    ctx->pc = 0x1D10F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D10F4u;
    // 0x1d10f8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB000u, 0x1D10F4u, 0x1D10FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D10FCu;
label_1d10fc:
    // 0x1d10fc: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1d10fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1d1100: 0xc04619c  jal         func_118670
    ctx->pc = 0x1D1100u;
    SET_GPR_U32(ctx, 31, 0x1D1108u);
    ctx->pc = 0x1D1104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1100u;
    // 0x1d1104: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1D1100u, 0x1D1108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1108u;
label_1d1108:
    // 0x1d1108: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1d1108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1d110c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1D110Cu;
    SET_GPR_U32(ctx, 31, 0x1D1114u);
    ctx->pc = 0x1D1110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D110Cu;
    // 0x1d1110: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1D110Cu, 0x1D1114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1114u;
label_1d1114:
    // 0x1d1114: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d1114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d1118: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d1118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d111c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1d111cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d1120: 0xc080702  jal         func_201C08
    ctx->pc = 0x1D1120u;
    SET_GPR_U32(ctx, 31, 0x1D1128u);
    ctx->pc = 0x1D1124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1120u;
    // 0x1d1124: 0x2484fcb0  addiu       $a0, $a0, -0x350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1D1120u, 0x1D1128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1128u;
label_1d1128:
    // 0x1d1128: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1d1128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1d112c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1D112Cu;
    SET_GPR_U32(ctx, 31, 0x1D1134u);
    ctx->pc = 0x1D1130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D112Cu;
    // 0x1d1130: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1D112Cu, 0x1D1134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1134u;
label_1d1134:
    // 0x1d1134: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1138: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d1138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d113c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d113cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1140: 0x2442fcb0  addiu       $v0, $v0, -0x350
    ctx->pc = 0x1d1140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
    // 0x1d1144: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1144u;
        // 0x1d1148: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D114Cu;
}
