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

// Function: entry_0011467c
// Address: 0x11467c - 0x114724
void entry_0011467c_0x11467c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011467c_0x11467c");
#endif

    switch (ctx->pc) {
        case 0x1146a8u: goto label_1146a8;
        case 0x1146bcu: goto label_1146bc;
        case 0x1146dcu: goto label_1146dc;
        case 0x1146f0u: goto label_1146f0;
        case 0x114708u: goto label_114708;
        default: break;
    }

    ctx->pc = 0x11467cu;

label_11467c:
    // 0x11467c: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x11467cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_114680:
    // 0x114680: 0x2177c  dsll32      $v0, $v0, 29
    ctx->pc = 0x114680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 29));
label_114684:
    // 0x114684: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x114684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
label_114688:
    // 0x114688: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_11468c:
    if (ctx->pc == 0x11468Cu) {
        ctx->pc = 0x11468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114688u;
        // 0x11468c: 0x3c023db8  lui         $v0, 0x3DB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15800 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114690u;
        goto label_114690;
    }
    ctx->pc = 0x114688u;
    {
        const bool branch_taken_0x114688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114688u;
        // 0x11468c: 0x3c023db8  lui         $v0, 0x3DB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15800 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114688) {
            ctx->pc = 0x114728u;
            return;
        }
    }
    ctx->pc = 0x114690u;
label_114690:
    // 0x114690: 0x8e540004  lw          $s4, 0x4($s2)
    ctx->pc = 0x114690u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_114694:
    // 0x114694: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x114694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114698:
    // 0x114698: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x114698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_11469c:
    // 0x11469c: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x11469cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1146a0:
    // 0x1146a0: 0x320f809  jalr        $t9
label_1146a4:
    if (ctx->pc == 0x1146A4u) {
        ctx->pc = 0x1146A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146A0u;
        // 0x1146a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1146A8u;
        goto label_1146a8;
    }
    ctx->pc = 0x1146A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1146A8u);
        ctx->pc = 0x1146A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146A0u;
        // 0x1146a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1146A0u, 0x1146A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1146A8u;
label_1146a8:
    // 0x1146a8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1146a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1146ac:
    // 0x1146ac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1146acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1146b0:
    // 0x1146b0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1146b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1146b4:
    // 0x1146b4: 0x320f809  jalr        $t9
label_1146b8:
    if (ctx->pc == 0x1146B8u) {
        ctx->pc = 0x1146B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146B4u;
        // 0x1146b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1146BCu;
        goto label_1146bc;
    }
    ctx->pc = 0x1146B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1146BCu);
        ctx->pc = 0x1146B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146B4u;
        // 0x1146b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1146B4u, 0x1146BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1146BCu;
label_1146bc:
    // 0x1146bc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1146c0:
    if (ctx->pc == 0x1146C0u) {
        ctx->pc = 0x1146C4u;
        goto label_1146c4;
    }
    ctx->pc = 0x1146BCu;
    {
        const bool branch_taken_0x1146bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1146bc) {
            ctx->pc = 0x114724u;
            return;
        }
    }
    ctx->pc = 0x1146C4u;
label_1146c4:
    // 0x1146c4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1146c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1146c8:
    // 0x1146c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1146c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1146cc:
    // 0x1146cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1146ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1146d0:
    // 0x1146d0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1146d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1146d4:
    // 0x1146d4: 0x320f809  jalr        $t9
label_1146d8:
    if (ctx->pc == 0x1146D8u) {
        ctx->pc = 0x1146D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146D4u;
        // 0x1146d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1146DCu;
        goto label_1146dc;
    }
    ctx->pc = 0x1146D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1146DCu);
        ctx->pc = 0x1146D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146D4u;
        // 0x1146d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1146D4u, 0x1146DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1146DCu;
label_1146dc:
    // 0x1146dc: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x1146dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1146e0:
    // 0x1146e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1146e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1146e4:
    // 0x1146e4: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x1146e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1146e8:
    // 0x1146e8: 0x320f809  jalr        $t9
label_1146ec:
    if (ctx->pc == 0x1146ECu) {
        ctx->pc = 0x1146ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146E8u;
        // 0x1146ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1146F0u;
        goto label_1146f0;
    }
    ctx->pc = 0x1146E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1146F0u);
        ctx->pc = 0x1146ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146E8u;
        // 0x1146ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1146E8u, 0x1146F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1146F0u;
label_1146f0:
    // 0x1146f0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1146f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1146f4:
    // 0x1146f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1146f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1146f8:
    // 0x1146f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1146f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1146fc:
    // 0x1146fc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1146fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_114700:
    // 0x114700: 0x320f809  jalr        $t9
label_114704:
    if (ctx->pc == 0x114704u) {
        ctx->pc = 0x114704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114700u;
        // 0x114704: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114708u;
        goto label_114708;
    }
    ctx->pc = 0x114700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114708u);
        ctx->pc = 0x114704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114700u;
        // 0x114704: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114700u, 0x114708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114708u;
label_114708:
    // 0x114708: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x114708u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_11470c:
    // 0x11470c: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x11470cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_114710:
    // 0x114710: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x114710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_114714:
    // 0x114714: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x114714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_114718:
    // 0x114718: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x114718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_11471c:
    // 0x11471c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11471cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_114720:
    // 0x114720: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x114720u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x114724u;
}
