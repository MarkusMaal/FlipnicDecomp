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

// Function: Trigger_PauseMenu
// Address: 0x116010 - 0x1161d0
void Trigger_PauseMenu_0x116010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Trigger_PauseMenu_0x116010");
#endif

    switch (ctx->pc) {
        case 0x11605cu: goto label_11605c;
        case 0x1160a0u: goto label_1160a0;
        case 0x1160b0u: goto label_1160b0;
        case 0x1160c0u: goto label_1160c0;
        case 0x1160c8u: goto label_1160c8;
        case 0x1160d0u: goto label_1160d0;
        case 0x1160e0u: goto label_1160e0;
        case 0x1160f0u: goto label_1160f0;
        case 0x1160f8u: goto label_1160f8;
        case 0x116104u: goto label_116104;
        case 0x11610cu: goto label_11610c;
        case 0x116118u: goto label_116118;
        case 0x116120u: goto label_116120;
        case 0x116128u: goto label_116128;
        case 0x116130u: goto label_116130;
        case 0x116158u: goto label_116158;
        case 0x11617cu: goto label_11617c;
        case 0x11618cu: goto label_11618c;
        case 0x116198u: goto label_116198;
        case 0x1161a4u: goto label_1161a4;
        case 0x1161acu: goto label_1161ac;
        case 0x1161b8u: goto label_1161b8;
        default: break;
    }

    ctx->pc = 0x116010u;

    // 0x116010: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x116010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x116014: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x116014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x116018: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x116018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11601c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11601cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x116020: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x116020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116024: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x116024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x116028: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x116028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11602c: 0x16200062  bnez        $s1, . + 4 + (0x62 << 2)
    ctx->pc = 0x11602Cu;
    {
        const bool branch_taken_0x11602c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x116030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11602Cu;
        // 0x116030: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11602c) {
            ctx->pc = 0x1161B8u;
            goto label_1161b8;
        }
    }
    ctx->pc = 0x116034u;
    // 0x116034: 0xdf838390  ld          $v1, -0x7C70($gp)
    ctx->pc = 0x116034u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935440)));
    // 0x116038: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x116038u;
    {
        const bool branch_taken_0x116038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x116038) {
            ctx->pc = 0x1161B8u;
            goto label_1161b8;
        }
    }
    ctx->pc = 0x116040u;
    // 0x116040: 0x8f84838c  lw          $a0, -0x7C74($gp)
    ctx->pc = 0x116040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x116044: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x116044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x116048: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x116048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x11604c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x11604cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x116050: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x116050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x116054: 0xc04b0e4  jal         func_12C390
    ctx->pc = 0x116054u;
    SET_GPR_U32(ctx, 31, 0x11605Cu);
    ctx->pc = 0x116058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116054u;
    // 0x116058: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C390u, 0x116054u, 0x11605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11605Cu;
label_11605c:
    // 0x11605c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11605cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116060: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x116060u;
    {
        const bool branch_taken_0x116060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x116060) {
            ctx->pc = 0x116078u;
            goto label_116078;
        }
    }
    ctx->pc = 0x116068u;
    // 0x116068: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x116068u;
    {
        const bool branch_taken_0x116068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116068) {
            ctx->pc = 0x116078u;
            goto label_116078;
        }
    }
    ctx->pc = 0x116070u;
    // 0x116070: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x116070u;
    {
        const bool branch_taken_0x116070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116070u;
        // 0x116074: 0xaf808314  sw          $zero, -0x7CEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935316), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116070) {
            ctx->pc = 0x1161B8u;
            goto label_1161b8;
        }
    }
    ctx->pc = 0x116078u;
label_116078:
    // 0x116078: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116078u;
    {
        const bool branch_taken_0x116078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116078u;
        // 0x11607c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116078) {
            ctx->pc = 0x116098u;
            goto label_116098;
        }
    }
    ctx->pc = 0x116080u;
    // 0x116080: 0x8f838314  lw          $v1, -0x7CEC($gp)
    ctx->pc = 0x116080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935316)));
    // 0x116084: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x116084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x116088: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x116088u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x11608c: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x11608Cu;
    {
        const bool branch_taken_0x11608c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x116090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11608Cu;
        // 0x116090: 0xaf848314  sw          $a0, -0x7CEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935316), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11608c) {
            ctx->pc = 0x1161B8u;
            goto label_1161b8;
        }
    }
    ctx->pc = 0x116094u;
    // 0x116094: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x116094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116098:
    // 0x116098: 0xc053c5c  jal         func_14F170
    ctx->pc = 0x116098u;
    SET_GPR_U32(ctx, 31, 0x1160A0u);
    ctx->pc = 0x14F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F170u, 0x116098u, 0x1160A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160A0u;
label_1160a0:
    // 0x1160a0: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1160A0u;
    {
        const bool branch_taken_0x1160a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1160A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160A0u;
        // 0x1160a4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1160a0) {
            ctx->pc = 0x1161B8u;
            goto label_1161b8;
        }
    }
    ctx->pc = 0x1160A8u;
    // 0x1160a8: 0xc053c5c  jal         func_14F170
    ctx->pc = 0x1160A8u;
    SET_GPR_U32(ctx, 31, 0x1160B0u);
    ctx->pc = 0x14F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F170u, 0x1160A8u, 0x1160B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160B0u;
label_1160b0:
    // 0x1160b0: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1160B0u;
    {
        const bool branch_taken_0x1160b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1160b0) {
            ctx->pc = 0x1161B8u;
            goto label_1161b8;
        }
    }
    ctx->pc = 0x1160B8u;
    // 0x1160b8: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1160B8u;
    SET_GPR_U32(ctx, 31, 0x1160C0u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1160B8u, 0x1160C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160C0u;
label_1160c0:
    // 0x1160c0: 0xc062b80  jal         func_18AE00
    ctx->pc = 0x1160C0u;
    SET_GPR_U32(ctx, 31, 0x1160C8u);
    ctx->pc = 0x1160C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1160C0u;
    // 0x1160c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE00u, 0x1160C0u, 0x1160C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160C8u;
label_1160c8:
    // 0x1160c8: 0xc064228  jal         func_1908A0
    ctx->pc = 0x1160C8u;
    SET_GPR_U32(ctx, 31, 0x1160D0u);
    ctx->pc = 0x1908A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908A0u, 0x1160C8u, 0x1160D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160D0u;
label_1160d0:
    // 0x1160d0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1160d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1160d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1160d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1160d8: 0xc0642e0  jal         func_190B80
    ctx->pc = 0x1160D8u;
    SET_GPR_U32(ctx, 31, 0x1160E0u);
    ctx->pc = 0x1160DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1160D8u;
    // 0x1160dc: 0x24a5e560  addiu       $a1, $a1, -0x1AA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190B80u, 0x1160D8u, 0x1160E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160E0u;
label_1160e0:
    // 0x1160e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1160E0u;
    {
        const bool branch_taken_0x1160e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1160E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160E0u;
        // 0x1160e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1160e0) {
            ctx->pc = 0x1160F0u;
            goto label_1160f0;
        }
    }
    ctx->pc = 0x1160E8u;
    // 0x1160e8: 0xc064fec  jal         func_193FB0
    ctx->pc = 0x1160E8u;
    SET_GPR_U32(ctx, 31, 0x1160F0u);
    ctx->pc = 0x193FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FB0u, 0x1160E8u, 0x1160F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160F0u;
label_1160f0:
    // 0x1160f0: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1160F0u;
    SET_GPR_U32(ctx, 31, 0x1160F8u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1160F0u, 0x1160F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160F8u;
label_1160f8:
    // 0x1160f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1160f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1160fc: 0xc062948  jal         func_18A520
    ctx->pc = 0x1160FCu;
    SET_GPR_U32(ctx, 31, 0x116104u);
    ctx->pc = 0x116100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1160FCu;
    // 0x116100: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x1160FCu, 0x116104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116104u;
label_116104:
    // 0x116104: 0xc062d50  jal         func_18B540
    ctx->pc = 0x116104u;
    SET_GPR_U32(ctx, 31, 0x11610Cu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x116104u, 0x11610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11610Cu;
label_11610c:
    // 0x11610c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11610cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116110: 0xc062994  jal         func_18A650
    ctx->pc = 0x116110u;
    SET_GPR_U32(ctx, 31, 0x116118u);
    ctx->pc = 0x116114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116110u;
    // 0x116114: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A650u, 0x116110u, 0x116118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116118u;
label_116118:
    // 0x116118: 0xc0618fc  jal         func_1863F0
    ctx->pc = 0x116118u;
    SET_GPR_U32(ctx, 31, 0x116120u);
    ctx->pc = 0x11611Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116118u;
    // 0x11611c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863F0u, 0x116118u, 0x116120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116120u;
label_116120:
    // 0x116120: 0xc0618fc  jal         func_1863F0
    ctx->pc = 0x116120u;
    SET_GPR_U32(ctx, 31, 0x116128u);
    ctx->pc = 0x116124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116120u;
    // 0x116124: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863F0u, 0x116120u, 0x116128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116128u;
label_116128:
    // 0x116128: 0xc045c98  jal         func_117260
    ctx->pc = 0x116128u;
    SET_GPR_U32(ctx, 31, 0x116130u);
    ctx->pc = 0x11612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116128u;
    // 0x11612c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x116128u, 0x116130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116130u;
label_116130:
    // 0x116130: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x116130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x116134: 0x27b0004c  addiu       $s0, $sp, 0x4C
    ctx->pc = 0x116134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x116138: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x116138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x11613c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x11613cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x116140: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x116140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x116144: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x116144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116148: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x116148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x11614c: 0x244287d0  addiu       $v0, $v0, -0x7830
    ctx->pc = 0x11614cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936528));
    // 0x116150: 0xc054660  jal         func_151980
    ctx->pc = 0x116150u;
    SET_GPR_U32(ctx, 31, 0x116158u);
    ctx->pc = 0x116154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116150u;
    // 0x116154: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x116150u, 0x116158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116158u;
label_116158:
    // 0x116158: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x116158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x11615c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x11615cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x116160: 0x246387d0  addiu       $v1, $v1, -0x7830
    ctx->pc = 0x116160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936528));
    // 0x116164: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x116164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x116168: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x116168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x11616c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x11616cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x116170: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x116170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x116174: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x116174u;
    SET_GPR_U32(ctx, 31, 0x11617Cu);
    ctx->pc = 0x116178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116174u;
    // 0x116178: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x116174u, 0x11617Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11617Cu;
label_11617c:
    // 0x11617c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11617Cu;
    {
        const bool branch_taken_0x11617c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x116180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11617Cu;
        // 0x116180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11617c) {
            ctx->pc = 0x116190u;
            goto label_116190;
        }
    }
    ctx->pc = 0x116184u;
    // 0x116184: 0xc06d2bc  jal         func_1B4AF0
    ctx->pc = 0x116184u;
    SET_GPR_U32(ctx, 31, 0x11618Cu);
    ctx->pc = 0x116188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116184u;
    // 0x116188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4AF0u, 0x116184u, 0x11618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11618Cu;
label_11618c:
    // 0x11618c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11618cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_116190:
    // 0x116190: 0xc062d50  jal         func_18B540
    ctx->pc = 0x116190u;
    SET_GPR_U32(ctx, 31, 0x116198u);
    ctx->pc = 0x116194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116190u;
    // 0x116194: 0xa3828488  sb          $v0, -0x7B78($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935688), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x116190u, 0x116198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116198u;
label_116198:
    // 0x116198: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x116198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11619c: 0xc062948  jal         func_18A520
    ctx->pc = 0x11619Cu;
    SET_GPR_U32(ctx, 31, 0x1161A4u);
    ctx->pc = 0x1161A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11619Cu;
    // 0x1161a0: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x11619Cu, 0x1161A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161A4u;
label_1161a4:
    // 0x1161a4: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1161A4u;
    SET_GPR_U32(ctx, 31, 0x1161ACu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1161A4u, 0x1161ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161ACu;
label_1161ac:
    // 0x1161ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1161acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1161b0: 0xc062994  jal         func_18A650
    ctx->pc = 0x1161B0u;
    SET_GPR_U32(ctx, 31, 0x1161B8u);
    ctx->pc = 0x1161B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1161B0u;
    // 0x1161b4: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A650u, 0x1161B0u, 0x1161B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161B8u;
label_1161b8:
    // 0x1161b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1161b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1161bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1161bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1161c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1161c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1161c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1161c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1161c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1161C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1161CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161C8u;
        // 0x1161cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1161C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1161D0u;
}
