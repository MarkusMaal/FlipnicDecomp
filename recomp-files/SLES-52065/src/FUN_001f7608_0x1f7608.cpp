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

// Function: FUN_001f7608
// Address: 0x1f7608 - 0x1f7778
void FUN_001f7608_0x1f7608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f7608_0x1f7608");
#endif

    switch (ctx->pc) {
        case 0x1f7628u: goto label_1f7628;
        case 0x1f7634u: goto label_1f7634;
        case 0x1f7660u: goto label_1f7660;
        case 0x1f7684u: goto label_1f7684;
        case 0x1f768cu: goto label_1f768c;
        case 0x1f76a0u: goto label_1f76a0;
        case 0x1f76b0u: goto label_1f76b0;
        case 0x1f76c8u: goto label_1f76c8;
        case 0x1f76d0u: goto label_1f76d0;
        case 0x1f76f0u: goto label_1f76f0;
        case 0x1f7704u: goto label_1f7704;
        case 0x1f7728u: goto label_1f7728;
        case 0x1f7730u: goto label_1f7730;
        default: break;
    }

    ctx->pc = 0x1f7608u;

    // 0x1f7608: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f7608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f760c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f760cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f7610: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f7610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f7614: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f7614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7618: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f7618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f761c: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x1f761cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x1f7620: 0xc07dc12  jal         func_1F7048
    ctx->pc = 0x1F7620u;
    SET_GPR_U32(ctx, 31, 0x1F7628u);
    ctx->pc = 0x1F7624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7620u;
    // 0x1f7624: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7048u, 0x1F7620u, 0x1F7628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7628u;
label_1f7628:
    // 0x1f7628: 0x8e04bb28  lw          $a0, -0x44D8($s0)
    ctx->pc = 0x1f7628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949672)));
    // 0x1f762c: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F762Cu;
    SET_GPR_U32(ctx, 31, 0x1F7634u);
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F762Cu, 0x1F7634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7634u;
label_1f7634:
    // 0x1f7634: 0x8e03bb28  lw          $v1, -0x44D8($s0)
    ctx->pc = 0x1f7634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949672)));
    // 0x1f7638: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F7638u;
    {
        const bool branch_taken_0x1f7638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7638u;
        // 0x1f763c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7638) {
            ctx->pc = 0x1F7668u;
            goto label_1f7668;
        }
    }
    ctx->pc = 0x1F7640u;
    // 0x1f7640: 0x8c43bb10  lw          $v1, -0x44F0($v0)
    ctx->pc = 0x1f7640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949648)));
    // 0x1f7644: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F7644u;
    {
        const bool branch_taken_0x1f7644 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F7648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7644u;
        // 0x1f7648: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7644) {
            ctx->pc = 0x1F76A0u;
            goto label_1f76a0;
        }
    }
    ctx->pc = 0x1F764Cu;
    // 0x1f764c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f764cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f7650: 0x8c46bb1c  lw          $a2, -0x44E4($v0)
    ctx->pc = 0x1f7650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949660)));
    // 0x1f7654: 0x248446f8  addiu       $a0, $a0, 0x46F8
    ctx->pc = 0x1f7654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18168));
    // 0x1f7658: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F7658u;
    SET_GPR_U32(ctx, 31, 0x1F7660u);
    ctx->pc = 0x1F765Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7658u;
    // 0x1f765c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F7658u, 0x1F7660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7660u;
label_1f7660:
    // 0x1f7660: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1F7660u;
    {
        const bool branch_taken_0x1f7660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7660u;
        // 0x1f7664: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7660) {
            ctx->pc = 0x1F7760u;
            goto label_1f7760;
        }
    }
    ctx->pc = 0x1F7668u;
label_1f7668:
    // 0x1f7668: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f7668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f766c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f766cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f7670: 0x8c441350  lw          $a0, 0x1350($v0)
    ctx->pc = 0x1f7670u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x391350u));
    // 0x1f7674: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1f7674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1f7678: 0xac71bb1c  sw          $s1, -0x44E4($v1)
    ctx->pc = 0x1f7678u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x21BB1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB1Cu, _value); } while (0);
    // 0x1f767c: 0xc07ad48  jal         func_1EB520
    ctx->pc = 0x1F767Cu;
    SET_GPR_U32(ctx, 31, 0x1F7684u);
    ctx->pc = 0x1F7680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F767Cu;
    // 0x1f7680: 0x24a51358  addiu       $a1, $a1, 0x1358 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB520u, 0x1F767Cu, 0x1F7684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7684u;
label_1f7684:
    // 0x1f7684: 0xc07de04  jal         func_1F7810
    ctx->pc = 0x1F7684u;
    SET_GPR_U32(ctx, 31, 0x1F768Cu);
    ctx->pc = 0x1F7688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7684u;
    // 0x1f7688: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7810u, 0x1F7684u, 0x1F768Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F768Cu;
label_1f768c:
    // 0x1f768c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F768Cu;
    {
        const bool branch_taken_0x1f768c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F768Cu;
        // 0x1f7690: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f768c) {
            ctx->pc = 0x1F76A8u;
            goto label_1f76a8;
        }
    }
    ctx->pc = 0x1F7694u;
    // 0x1f7694: 0x8e04bb28  lw          $a0, -0x44D8($s0)
    ctx->pc = 0x1f7694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949672)));
    // 0x1f7698: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F7698u;
    SET_GPR_U32(ctx, 31, 0x1F76A0u);
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F7698u, 0x1F76A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F76A0u;
label_1f76a0:
    // 0x1f76a0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1F76A0u;
    {
        const bool branch_taken_0x1f76a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76A0u;
        // 0x1f76a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76a0) {
            ctx->pc = 0x1F7760u;
            goto label_1f7760;
        }
    }
    ctx->pc = 0x1F76A8u;
label_1f76a8:
    // 0x1f76a8: 0xc07b79a  jal         func_1EDE68
    ctx->pc = 0x1F76A8u;
    SET_GPR_U32(ctx, 31, 0x1F76B0u);
    ctx->pc = 0x1F76ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F76A8u;
    // 0x1f76ac: 0x3c120022  lui         $s2, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDE68u, 0x1F76A8u, 0x1F76B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F76B0u;
label_1f76b0:
    // 0x1f76b0: 0x8e42bb3c  lw          $v0, -0x44C4($s2)
    ctx->pc = 0x1f76b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949692)));
    // 0x1f76b4: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1F76B4u;
    {
        const bool branch_taken_0x1f76b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F76B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76B4u;
        // 0x1f76b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76b4) {
            ctx->pc = 0x1F7760u;
            goto label_1f7760;
        }
    }
    ctx->pc = 0x1F76BCu;
    // 0x1f76bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F76BCu;
    {
        const bool branch_taken_0x1f76bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76BCu;
        // 0x1f76c0: 0x3c110022  lui         $s1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76bc) {
            ctx->pc = 0x1F76ECu;
            goto label_1f76ec;
        }
    }
    ctx->pc = 0x1F76C4u;
    // 0x1f76c4: 0x0  nop
    ctx->pc = 0x1f76c4u;
    // NOP
label_1f76c8:
    // 0x1f76c8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1f76c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1f76cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f76ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f76d0:
    // 0x1f76d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f76d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f76d4: 0x0  nop
    ctx->pc = 0x1f76d4u;
    // NOP
    // 0x1f76d8: 0x0  nop
    ctx->pc = 0x1f76d8u;
    // NOP
    // 0x1f76dc: 0x0  nop
    ctx->pc = 0x1f76dcu;
    // NOP
    // 0x1f76e0: 0x0  nop
    ctx->pc = 0x1f76e0u;
    // NOP
    // 0x1f76e4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F76E4u;
    {
        const bool branch_taken_0x1f76e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f76e4) {
            ctx->pc = 0x1F76D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f76d0;
        }
    }
    ctx->pc = 0x1F76ECu;
label_1f76ec:
    // 0x1f76ec: 0x2630ccd0  addiu       $s0, $s1, -0x3330
    ctx->pc = 0x1f76ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954192));
label_1f76f0:
    // 0x1f76f0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1f76f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1f76f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f76f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f76f8: 0x34a50595  ori         $a1, $a1, 0x595
    ctx->pc = 0x1f76f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1429);
    // 0x1f76fc: 0xc07b96a  jal         func_1EE5A8
    ctx->pc = 0x1F76FCu;
    SET_GPR_U32(ctx, 31, 0x1F7704u);
    ctx->pc = 0x1F7700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F76FCu;
    // 0x1f7700: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE5A8u, 0x1F76FCu, 0x1F7704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7704u;
label_1f7704:
    // 0x1f7704: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F7704u;
    {
        const bool branch_taken_0x1f7704 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f7704) {
            ctx->pc = 0x1F7708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7704u;
            // 0x1f7708: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7754u;
            goto label_1f7754;
        }
    }
    ctx->pc = 0x1F770Cu;
    // 0x1f770c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f770cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f7710: 0x8c43bb10  lw          $v1, -0x44F0($v0)
    ctx->pc = 0x1f7710u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21BB10u));
    // 0x1f7714: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7714u;
    {
        const bool branch_taken_0x1f7714 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F7718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7714u;
        // 0x1f7718: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7714) {
            ctx->pc = 0x1F772Cu;
            goto label_1f772c;
        }
    }
    ctx->pc = 0x1F771Cu;
    // 0x1f771c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f771cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f7720: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F7720u;
    SET_GPR_U32(ctx, 31, 0x1F7728u);
    ctx->pc = 0x1F7724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7720u;
    // 0x1f7724: 0x24844720  addiu       $a0, $a0, 0x4720 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F7720u, 0x1F7728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7728u;
label_1f7728:
    // 0x1f7728: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1f7728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1f772c:
    // 0x1f772c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f772cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f7730:
    // 0x1f7730: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f7730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f7734: 0x0  nop
    ctx->pc = 0x1f7734u;
    // NOP
    // 0x1f7738: 0x0  nop
    ctx->pc = 0x1f7738u;
    // NOP
    // 0x1f773c: 0x0  nop
    ctx->pc = 0x1f773cu;
    // NOP
    // 0x1f7740: 0x0  nop
    ctx->pc = 0x1f7740u;
    // NOP
    // 0x1f7744: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F7744u;
    {
        const bool branch_taken_0x1f7744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7744) {
            ctx->pc = 0x1F7730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7730;
        }
    }
    ctx->pc = 0x1F774Cu;
    // 0x1f774c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1F774Cu;
    {
        const bool branch_taken_0x1f774c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F774Cu;
        // 0x1f7750: 0x2630ccd0  addiu       $s0, $s1, -0x3330 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f774c) {
            ctx->pc = 0x1F76F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f76f0;
        }
    }
    ctx->pc = 0x1F7754u;
label_1f7754:
    // 0x1f7754: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1F7754u;
    {
        const bool branch_taken_0x1f7754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7754u;
        // 0x1f7758: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7754) {
            ctx->pc = 0x1F76C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f76c8;
        }
    }
    ctx->pc = 0x1F775Cu;
    // 0x1f775c: 0xae40bb3c  sw          $zero, -0x44C4($s2)
    ctx->pc = 0x1f775cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294949692), GPR_U32(ctx, 0));
label_1f7760:
    // 0x1f7760: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f7760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7764: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f7764u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7768: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f7768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f776c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f776cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7770: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7770u;
        // 0x1f7774: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7778u;
}
