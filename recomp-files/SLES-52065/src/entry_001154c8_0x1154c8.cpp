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

// Function: entry_001154c8
// Address: 0x1154c8 - 0x1155a4
void entry_001154c8_0x1154c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001154c8_0x1154c8");
#endif

    switch (ctx->pc) {
        case 0x1154e4u: goto label_1154e4;
        case 0x115518u: goto label_115518;
        case 0x115544u: goto label_115544;
        case 0x11555cu: goto label_11555c;
        case 0x115570u: goto label_115570;
        case 0x115588u: goto label_115588;
        default: break;
    }

    ctx->pc = 0x1154c8u;

label_1154c8:
    // 0x1154c8: 0x938282dc  lbu         $v0, -0x7D24($gp)
    ctx->pc = 0x1154c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935260)));
label_1154cc:
    // 0x1154cc: 0x27a30168  addiu       $v1, $sp, 0x168
    ctx->pc = 0x1154ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_1154d0:
    // 0x1154d0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1154d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1154d4:
    // 0x1154d4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1154d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1154d8:
    // 0x1154d8: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x1154d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_1154dc:
    // 0x1154dc: 0x320f809  jalr        $t9
label_1154e0:
    if (ctx->pc == 0x1154E0u) {
        ctx->pc = 0x1154E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154DCu;
        // 0x1154e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1154E4u;
        goto label_1154e4;
    }
    ctx->pc = 0x1154DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1154E4u);
        ctx->pc = 0x1154E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154DCu;
        // 0x1154e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1154DCu, 0x1154E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1154E4u;
label_1154e4:
    // 0x1154e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1154e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1154e8:
    // 0x1154e8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1154e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_1154ec:
    // 0x1154ec: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1154ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1154f0:
    // 0x1154f0: 0x104001a3  beqz        $v0, . + 4 + (0x1A3 << 2)
label_1154f4:
    if (ctx->pc == 0x1154F4u) {
        ctx->pc = 0x1154F8u;
        goto label_1154f8;
    }
    ctx->pc = 0x1154F0u;
    {
        const bool branch_taken_0x1154f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1154f0) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x1154F8u;
label_1154f8:
    // 0x1154f8: 0x938282e0  lbu         $v0, -0x7D20($gp)
    ctx->pc = 0x1154f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935264)));
label_1154fc:
    // 0x1154fc: 0x27a3016c  addiu       $v1, $sp, 0x16C
    ctx->pc = 0x1154fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
label_115500:
    // 0x115500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115504:
    // 0x115504: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115504u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_115508:
    // 0x115508: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11550c:
    // 0x11550c: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x11550cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_115510:
    // 0x115510: 0x320f809  jalr        $t9
label_115514:
    if (ctx->pc == 0x115514u) {
        ctx->pc = 0x115514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115510u;
        // 0x115514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115518u;
        goto label_115518;
    }
    ctx->pc = 0x115510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115518u);
        ctx->pc = 0x115514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115510u;
        // 0x115514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115510u, 0x115518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115518u;
label_115518:
    // 0x115518: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x115518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_11551c:
    // 0x11551c: 0x2177c  dsll32      $v0, $v0, 29
    ctx->pc = 0x11551cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 29));
label_115520:
    // 0x115520: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x115520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
label_115524:
    // 0x115524: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_115528:
    if (ctx->pc == 0x115528u) {
        ctx->pc = 0x11552Cu;
        goto label_11552c;
    }
    ctx->pc = 0x115524u;
    {
        const bool branch_taken_0x115524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115524) {
            ctx->pc = 0x1155A4u;
            return;
        }
    }
    ctx->pc = 0x11552Cu;
label_11552c:
    // 0x11552c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x11552cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_115530:
    // 0x115530: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_115534:
    // 0x115534: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x115534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_115538:
    // 0x115538: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x115538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_11553c:
    // 0x11553c: 0x320f809  jalr        $t9
label_115540:
    if (ctx->pc == 0x115540u) {
        ctx->pc = 0x115540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11553Cu;
        // 0x115540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115544u;
        goto label_115544;
    }
    ctx->pc = 0x11553Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115544u);
        ctx->pc = 0x115540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11553Cu;
        // 0x115540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11553Cu, 0x115544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115544u;
label_115544:
    // 0x115544: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x115544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_115548:
    // 0x115548: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x115548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11554c:
    // 0x11554c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11554cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115550:
    // 0x115550: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x115550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_115554:
    // 0x115554: 0x320f809  jalr        $t9
label_115558:
    if (ctx->pc == 0x115558u) {
        ctx->pc = 0x115558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115554u;
        // 0x115558: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11555Cu;
        goto label_11555c;
    }
    ctx->pc = 0x115554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11555Cu);
        ctx->pc = 0x115558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115554u;
        // 0x115558: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115554u, 0x11555Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11555Cu;
label_11555c:
    // 0x11555c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x11555cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_115560:
    // 0x115560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_115564:
    // 0x115564: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x115564u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_115568:
    // 0x115568: 0x320f809  jalr        $t9
label_11556c:
    if (ctx->pc == 0x11556Cu) {
        ctx->pc = 0x11556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115568u;
        // 0x11556c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115570u;
        goto label_115570;
    }
    ctx->pc = 0x115568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115570u);
        ctx->pc = 0x11556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115568u;
        // 0x11556c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115568u, 0x115570u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115570u;
label_115570:
    // 0x115570: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x115570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_115574:
    // 0x115574: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x115574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_115578:
    // 0x115578: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x115578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11557c:
    // 0x11557c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x11557cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_115580:
    // 0x115580: 0x320f809  jalr        $t9
label_115584:
    if (ctx->pc == 0x115584u) {
        ctx->pc = 0x115584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115580u;
        // 0x115584: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115588u;
        goto label_115588;
    }
    ctx->pc = 0x115580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115588u);
        ctx->pc = 0x115584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115580u;
        // 0x115584: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115580u, 0x115588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115588u;
label_115588:
    // 0x115588: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x115588u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_11558c:
    // 0x11558c: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x11558cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_115590:
    // 0x115590: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x115590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_115594:
    // 0x115594: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x115594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_115598:
    // 0x115598: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x115598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_11559c:
    // 0x11559c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11559cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1155a0:
    // 0x1155a0: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x1155a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1155a4u;
}
