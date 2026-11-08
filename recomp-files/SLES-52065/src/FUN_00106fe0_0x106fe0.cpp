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

// Function: FUN_00106fe0
// Address: 0x106fe0 - 0x1070f0
void FUN_00106fe0_0x106fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106fe0_0x106fe0");
#endif

    switch (ctx->pc) {
        case 0x106fe0u: goto label_106fe0;
        case 0x106fe4u: goto label_106fe4;
        case 0x106fe8u: goto label_106fe8;
        case 0x106fecu: goto label_106fec;
        case 0x106ff0u: goto label_106ff0;
        case 0x106ff4u: goto label_106ff4;
        case 0x106ff8u: goto label_106ff8;
        case 0x106ffcu: goto label_106ffc;
        case 0x107000u: goto label_107000;
        case 0x107004u: goto label_107004;
        case 0x107008u: goto label_107008;
        case 0x10700cu: goto label_10700c;
        case 0x107010u: goto label_107010;
        case 0x107014u: goto label_107014;
        case 0x107018u: goto label_107018;
        case 0x10701cu: goto label_10701c;
        case 0x107020u: goto label_107020;
        case 0x107024u: goto label_107024;
        case 0x107028u: goto label_107028;
        case 0x10702cu: goto label_10702c;
        case 0x107030u: goto label_107030;
        case 0x107034u: goto label_107034;
        case 0x107038u: goto label_107038;
        case 0x10703cu: goto label_10703c;
        case 0x107040u: goto label_107040;
        case 0x107044u: goto label_107044;
        case 0x107048u: goto label_107048;
        case 0x10704cu: goto label_10704c;
        case 0x107050u: goto label_107050;
        case 0x107054u: goto label_107054;
        case 0x107058u: goto label_107058;
        case 0x10705cu: goto label_10705c;
        case 0x107060u: goto label_107060;
        case 0x107064u: goto label_107064;
        case 0x107068u: goto label_107068;
        case 0x10706cu: goto label_10706c;
        case 0x107070u: goto label_107070;
        case 0x107074u: goto label_107074;
        case 0x107078u: goto label_107078;
        case 0x10707cu: goto label_10707c;
        case 0x107080u: goto label_107080;
        case 0x107084u: goto label_107084;
        case 0x107088u: goto label_107088;
        case 0x10708cu: goto label_10708c;
        case 0x107090u: goto label_107090;
        case 0x107094u: goto label_107094;
        case 0x107098u: goto label_107098;
        case 0x10709cu: goto label_10709c;
        case 0x1070a0u: goto label_1070a0;
        case 0x1070a4u: goto label_1070a4;
        case 0x1070a8u: goto label_1070a8;
        case 0x1070acu: goto label_1070ac;
        case 0x1070b0u: goto label_1070b0;
        case 0x1070b4u: goto label_1070b4;
        case 0x1070b8u: goto label_1070b8;
        case 0x1070bcu: goto label_1070bc;
        case 0x1070c0u: goto label_1070c0;
        case 0x1070c4u: goto label_1070c4;
        case 0x1070c8u: goto label_1070c8;
        case 0x1070ccu: goto label_1070cc;
        case 0x1070d0u: goto label_1070d0;
        case 0x1070d4u: goto label_1070d4;
        case 0x1070d8u: goto label_1070d8;
        case 0x1070dcu: goto label_1070dc;
        case 0x1070e0u: goto label_1070e0;
        case 0x1070e4u: goto label_1070e4;
        case 0x1070e8u: goto label_1070e8;
        case 0x1070ecu: goto label_1070ec;
        default: break;
    }

    ctx->pc = 0x106fe0u;

label_106fe0:
    // 0x106fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_106fe4:
    // 0x106fe4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x106fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_106fe8:
    // 0x106fe8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x106fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_106fec:
    // 0x106fec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x106fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_106ff0:
    // 0x106ff0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_106ff4:
    // 0x106ff4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x106ff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_106ff8:
    // 0x106ff8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x106ff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_106ffc:
    // 0x106ffc: 0x320f809  jalr        $t9
label_107000:
    if (ctx->pc == 0x107000u) {
        ctx->pc = 0x107000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FFCu;
        // 0x107000: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107004u;
        goto label_107004;
    }
    ctx->pc = 0x106FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x107004u);
        ctx->pc = 0x107000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FFCu;
        // 0x107000: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106FFCu, 0x107004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107004u;
label_107004:
    // 0x107004: 0xc040168  jal         func_1005A0
label_107008:
    if (ctx->pc == 0x107008u) {
        ctx->pc = 0x107008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107004u;
        // 0x107008: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10700Cu;
        goto label_10700c;
    }
    ctx->pc = 0x107004u;
    SET_GPR_U32(ctx, 31, 0x10700Cu);
    ctx->pc = 0x107008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107004u;
    // 0x107008: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x107004u, 0x10700Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10700Cu;
label_10700c:
    // 0x10700c: 0xae220210  sw          $v0, 0x210($s1)
    ctx->pc = 0x10700cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 2));
label_107010:
    // 0x107010: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x107010u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_107014:
    // 0x107014: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x107014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_107018:
    // 0x107018: 0x24a5e1b0  addiu       $a1, $a1, -0x1E50
    ctx->pc = 0x107018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959536));
label_10701c:
    // 0x10701c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x10701cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_107020:
    // 0x107020: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x107020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_107024:
    // 0x107024: 0xc057118  jal         func_15C460
label_107028:
    if (ctx->pc == 0x107028u) {
        ctx->pc = 0x107028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107024u;
        // 0x107028: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10702Cu;
        goto label_10702c;
    }
    ctx->pc = 0x107024u;
    SET_GPR_U32(ctx, 31, 0x10702Cu);
    ctx->pc = 0x107028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107024u;
    // 0x107028: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C460u, 0x107024u, 0x10702Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10702Cu;
label_10702c:
    // 0x10702c: 0x8e230210  lw          $v1, 0x210($s1)
    ctx->pc = 0x10702cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_107030:
    // 0x107030: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x107030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_107034:
    // 0x107034: 0x24a5e1c0  addiu       $a1, $a1, -0x1E40
    ctx->pc = 0x107034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959552));
label_107038:
    // 0x107038: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x107038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_10703c:
    // 0x10703c: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x10703cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_107040:
    // 0x107040: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x107040u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_107044:
    // 0x107044: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x107044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_107048:
    // 0x107048: 0xc057118  jal         func_15C460
label_10704c:
    if (ctx->pc == 0x10704Cu) {
        ctx->pc = 0x10704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107048u;
        // 0x10704c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107050u;
        goto label_107050;
    }
    ctx->pc = 0x107048u;
    SET_GPR_U32(ctx, 31, 0x107050u);
    ctx->pc = 0x10704Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107048u;
    // 0x10704c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C460u, 0x107048u, 0x107050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107050u;
label_107050:
    // 0x107050: 0x8e230210  lw          $v1, 0x210($s1)
    ctx->pc = 0x107050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_107054:
    // 0x107054: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x107054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_107058:
    // 0x107058: 0x24a5e1d0  addiu       $a1, $a1, -0x1E30
    ctx->pc = 0x107058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959568));
label_10705c:
    // 0x10705c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x10705cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_107060:
    // 0x107060: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x107060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_107064:
    // 0x107064: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x107064u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
label_107068:
    // 0x107068: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x107068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_10706c:
    // 0x10706c: 0xc057118  jal         func_15C460
label_107070:
    if (ctx->pc == 0x107070u) {
        ctx->pc = 0x107070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10706Cu;
        // 0x107070: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107074u;
        goto label_107074;
    }
    ctx->pc = 0x10706Cu;
    SET_GPR_U32(ctx, 31, 0x107074u);
    ctx->pc = 0x107070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10706Cu;
    // 0x107070: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C460u, 0x10706Cu, 0x107074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107074u;
label_107074:
    // 0x107074: 0x8e230210  lw          $v1, 0x210($s1)
    ctx->pc = 0x107074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_107078:
    // 0x107078: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x107078u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
label_10707c:
    // 0x10707c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x10707cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_107080:
    // 0x107080: 0xc0401bc  jal         func_1006F0
label_107084:
    if (ctx->pc == 0x107084u) {
        ctx->pc = 0x107084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107080u;
        // 0x107084: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107088u;
        goto label_107088;
    }
    ctx->pc = 0x107080u;
    SET_GPR_U32(ctx, 31, 0x107088u);
    ctx->pc = 0x107084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107080u;
    // 0x107084: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x107080u, 0x107088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107088u;
label_107088:
    // 0x107088: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10708c:
    if (ctx->pc == 0x10708Cu) {
        ctx->pc = 0x10708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107088u;
        // 0x10708c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107090u;
        goto label_107090;
    }
    ctx->pc = 0x107088u;
    {
        const bool branch_taken_0x107088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107088u;
        // 0x10708c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107088) {
            ctx->pc = 0x107098u;
            goto label_107098;
        }
    }
    ctx->pc = 0x107090u;
label_107090:
    // 0x107090: 0xc04ac84  jal         func_12B210
label_107094:
    if (ctx->pc == 0x107094u) {
        ctx->pc = 0x107098u;
        goto label_107098;
    }
    ctx->pc = 0x107090u;
    SET_GPR_U32(ctx, 31, 0x107098u);
    ctx->pc = 0x12B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B210u, 0x107090u, 0x107098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107098u;
label_107098:
    // 0x107098: 0xae220220  sw          $v0, 0x220($s1)
    ctx->pc = 0x107098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 2));
label_10709c:
    // 0x10709c: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x10709cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_1070a0:
    // 0x1070a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1070a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1070a4:
    // 0x1070a4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1070a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1070a8:
    // 0x1070a8: 0x320f809  jalr        $t9
label_1070ac:
    if (ctx->pc == 0x1070ACu) {
        ctx->pc = 0x1070ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070A8u;
        // 0x1070ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1070B0u;
        goto label_1070b0;
    }
    ctx->pc = 0x1070A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1070B0u);
        ctx->pc = 0x1070ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070A8u;
        // 0x1070ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1070A8u, 0x1070B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1070B0u;
label_1070b0:
    // 0x1070b0: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x1070b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_1070b4:
    // 0x1070b4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1070b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_1070b8:
    // 0x1070b8: 0xc04ae68  jal         func_12B9A0
label_1070bc:
    if (ctx->pc == 0x1070BCu) {
        ctx->pc = 0x1070BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070B8u;
        // 0x1070bc: 0x24a5fd70  addiu       $a1, $a1, -0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1070C0u;
        goto label_1070c0;
    }
    ctx->pc = 0x1070B8u;
    SET_GPR_U32(ctx, 31, 0x1070C0u);
    ctx->pc = 0x1070BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1070B8u;
    // 0x1070bc: 0x24a5fd70  addiu       $a1, $a1, -0x290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B9A0u, 0x1070B8u, 0x1070C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1070C0u;
label_1070c0:
    // 0x1070c0: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x1070c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_1070c4:
    // 0x1070c4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1070c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1070c8:
    // 0x1070c8: 0x24a5e0d0  addiu       $a1, $a1, -0x1F30
    ctx->pc = 0x1070c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959312));
label_1070cc:
    // 0x1070cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1070ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1070d0:
    // 0x1070d0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1070d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1070d4:
    // 0x1070d4: 0x320f809  jalr        $t9
label_1070d8:
    if (ctx->pc == 0x1070D8u) {
        ctx->pc = 0x1070D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070D4u;
        // 0x1070d8: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1070DCu;
        goto label_1070dc;
    }
    ctx->pc = 0x1070D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1070DCu);
        ctx->pc = 0x1070D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070D4u;
        // 0x1070d8: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1070D4u, 0x1070DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1070DCu;
label_1070dc:
    // 0x1070dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1070dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1070e0:
    // 0x1070e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1070e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1070e4:
    // 0x1070e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1070e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1070e8:
    // 0x1070e8: 0x3e00008  jr          $ra
label_1070ec:
    if (ctx->pc == 0x1070ECu) {
        ctx->pc = 0x1070ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070E8u;
        // 0x1070ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1070F0u;
        goto label_fallthrough_0x1070e8;
    }
    ctx->pc = 0x1070E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1070ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070E8u;
        // 0x1070ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1070E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1070e8:
    ctx->pc = 0x1070F0u;
}
