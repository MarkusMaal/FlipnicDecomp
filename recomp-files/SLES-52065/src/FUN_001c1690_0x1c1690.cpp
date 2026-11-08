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

// Function: FUN_001c1690
// Address: 0x1c1690 - 0x1c1a94
void FUN_001c1690_0x1c1690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c1690_0x1c1690");
#endif

    switch (ctx->pc) {
        case 0x1c16bcu: goto label_1c16bc;
        case 0x1c16c8u: goto label_1c16c8;
        case 0x1c16dcu: goto label_1c16dc;
        case 0x1c16e8u: goto label_1c16e8;
        case 0x1c1730u: goto label_1c1730;
        case 0x1c173cu: goto label_1c173c;
        case 0x1c1750u: goto label_1c1750;
        case 0x1c1758u: goto label_1c1758;
        case 0x1c1768u: goto label_1c1768;
        case 0x1c1770u: goto label_1c1770;
        case 0x1c177cu: goto label_1c177c;
        case 0x1c17ccu: goto label_1c17cc;
        case 0x1c17e4u: goto label_1c17e4;
        case 0x1c17ecu: goto label_1c17ec;
        case 0x1c17fcu: goto label_1c17fc;
        case 0x1c1804u: goto label_1c1804;
        case 0x1c181cu: goto label_1c181c;
        case 0x1c1830u: goto label_1c1830;
        case 0x1c1838u: goto label_1c1838;
        case 0x1c1848u: goto label_1c1848;
        case 0x1c1850u: goto label_1c1850;
        case 0x1c1874u: goto label_1c1874;
        case 0x1c18dcu: goto label_1c18dc;
        case 0x1c18e4u: goto label_1c18e4;
        case 0x1c1900u: goto label_1c1900;
        case 0x1c1908u: goto label_1c1908;
        case 0x1c1920u: goto label_1c1920;
        case 0x1c1934u: goto label_1c1934;
        case 0x1c1944u: goto label_1c1944;
        case 0x1c1954u: goto label_1c1954;
        case 0x1c1964u: goto label_1c1964;
        case 0x1c1974u: goto label_1c1974;
        case 0x1c1984u: goto label_1c1984;
        case 0x1c198cu: goto label_1c198c;
        case 0x1c19a0u: goto label_1c19a0;
        case 0x1c19b4u: goto label_1c19b4;
        case 0x1c19ccu: goto label_1c19cc;
        case 0x1c19dcu: goto label_1c19dc;
        case 0x1c19f0u: goto label_1c19f0;
        case 0x1c1a00u: goto label_1c1a00;
        case 0x1c1a34u: goto label_1c1a34;
        case 0x1c1a40u: goto label_1c1a40;
        case 0x1c1a54u: goto label_1c1a54;
        case 0x1c1a60u: goto label_1c1a60;
        case 0x1c1a74u: goto label_1c1a74;
        case 0x1c1a80u: goto label_1c1a80;
        default: break;
    }

    ctx->pc = 0x1c1690u;

    // 0x1c1690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c1690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c1694: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c1694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1698: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c1698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c169c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c169cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c16a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c16a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c16a4: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x1c16a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1c16a8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C16A8u;
    {
        const bool branch_taken_0x1c16a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C16ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16A8u;
        // 0x1c16ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16a8) {
            ctx->pc = 0x1C16D0u;
            goto label_1c16d0;
        }
    }
    ctx->pc = 0x1C16B0u;
    // 0x1c16b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c16b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c16b4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C16B4u;
    SET_GPR_U32(ctx, 31, 0x1C16BCu);
    ctx->pc = 0x1C16B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C16B4u;
    // 0x1c16b8: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C16B4u, 0x1C16BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C16BCu;
label_1c16bc:
    // 0x1c16bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c16bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c16c0: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1C16C0u;
    SET_GPR_U32(ctx, 31, 0x1C16C8u);
    ctx->pc = 0x1C16C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C16C0u;
    // 0x1c16c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1C16C0u, 0x1C16C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C16C8u;
label_1c16c8:
    // 0x1c16c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C16C8u;
    {
        const bool branch_taken_0x1c16c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C16CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16C8u;
        // 0x1c16cc: 0x8e030060  lw          $v1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16c8) {
            ctx->pc = 0x1C16ECu;
            goto label_1c16ec;
        }
    }
    ctx->pc = 0x1C16D0u;
label_1c16d0:
    // 0x1c16d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c16d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c16d4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C16D4u;
    SET_GPR_U32(ctx, 31, 0x1C16DCu);
    ctx->pc = 0x1C16D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C16D4u;
    // 0x1c16d8: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C16D4u, 0x1C16DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C16DCu;
label_1c16dc:
    // 0x1c16dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c16dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c16e0: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1C16E0u;
    SET_GPR_U32(ctx, 31, 0x1C16E8u);
    ctx->pc = 0x1C16E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C16E0u;
    // 0x1c16e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1C16E0u, 0x1C16E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C16E8u;
label_1c16e8:
    // 0x1c16e8: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1c16e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1c16ec:
    // 0x1c16ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c16ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c16f0: 0x10620057  beq         $v1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x1C16F0u;
    {
        const bool branch_taken_0x1c16f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C16F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16F0u;
        // 0x1c16f4: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16f0) {
            ctx->pc = 0x1C1850u;
            goto label_1c1850;
        }
    }
    ctx->pc = 0x1C16F8u;
    // 0x1c16f8: 0x10680055  beq         $v1, $t0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1C16F8u;
    {
        const bool branch_taken_0x1c16f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x1C16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16F8u;
        // 0x1c16fc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16f8) {
            ctx->pc = 0x1C1850u;
            goto label_1c1850;
        }
    }
    ctx->pc = 0x1C1700u;
    // 0x1c1700: 0x10690005  beq         $v1, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1700u;
    {
        const bool branch_taken_0x1c1700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x1C1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1700u;
        // 0x1c1704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1700) {
            ctx->pc = 0x1C1718u;
            goto label_1c1718;
        }
    }
    ctx->pc = 0x1C1708u;
    // 0x1c1708: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x1C1708u;
    {
        const bool branch_taken_0x1c1708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1708) {
            ctx->pc = 0x1C1850u;
            goto label_1c1850;
        }
    }
    ctx->pc = 0x1C1710u;
    // 0x1c1710: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1C1710u;
    {
        const bool branch_taken_0x1c1710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1710u;
        // 0x1c1714: 0x8e030060  lw          $v1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1710) {
            ctx->pc = 0x1C1854u;
            goto label_1c1854;
        }
    }
    ctx->pc = 0x1C1718u;
label_1c1718:
    // 0x1c1718: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c1718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c171c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c171cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c1720: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1724: 0x260a0068  addiu       $t2, $s0, 0x68
    ctx->pc = 0x1c1724u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x1c1728: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C1728u;
    SET_GPR_U32(ctx, 31, 0x1C1730u);
    ctx->pc = 0x1C172Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1728u;
    // 0x1c172c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C1728u, 0x1C1730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1730u;
label_1c1730:
    // 0x1c1730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1734: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C1734u;
    SET_GPR_U32(ctx, 31, 0x1C173Cu);
    ctx->pc = 0x1C1738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1734u;
    // 0x1c1738: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C1734u, 0x1C173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C173Cu;
label_1c173c:
    // 0x1c173c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C173Cu;
    {
        const bool branch_taken_0x1c173c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C173Cu;
        // 0x1c1740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c173c) {
            ctx->pc = 0x1C179Cu;
            goto label_1c179c;
        }
    }
    ctx->pc = 0x1C1744u;
    // 0x1c1744: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c1744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1748: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1748u;
    SET_GPR_U32(ctx, 31, 0x1C1750u);
    ctx->pc = 0x1C174Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1748u;
    // 0x1c174c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1748u, 0x1C1750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1750u;
label_1c1750:
    // 0x1c1750: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C1750u;
    SET_GPR_U32(ctx, 31, 0x1C1758u);
    ctx->pc = 0x1C1754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1750u;
    // 0x1c1754: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C1750u, 0x1C1758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1758u;
label_1c1758:
    // 0x1c1758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c175c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c175cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1760: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1760u;
    SET_GPR_U32(ctx, 31, 0x1C1768u);
    ctx->pc = 0x1C1764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1760u;
    // 0x1c1764: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1760u, 0x1C1768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1768u;
label_1c1768:
    // 0x1c1768: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C1768u;
    SET_GPR_U32(ctx, 31, 0x1C1770u);
    ctx->pc = 0x1C176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1768u;
    // 0x1c176c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C1768u, 0x1C1770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1770u;
label_1c1770:
    // 0x1c1770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1774: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1C1774u;
    SET_GPR_U32(ctx, 31, 0x1C177Cu);
    ctx->pc = 0x1C1778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1774u;
    // 0x1c1778: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1C1774u, 0x1C177Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C177Cu;
label_1c177c:
    // 0x1c177c: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x1c177cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c1780: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c1780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1784: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c1784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c1788: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x1c1788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x1c178c: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x1c178cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c1790: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1790u;
    {
        const bool branch_taken_0x1c1790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1790) {
            ctx->pc = 0x1C179Cu;
            goto label_1c179c;
        }
    }
    ctx->pc = 0x1C1798u;
    // 0x1c1798: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1c1798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_1c179c:
    // 0x1c179c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1c179cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c17a0: 0x9042006b  lbu         $v0, 0x6B($v0)
    ctx->pc = 0x1c17a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 107)));
    // 0x1c17a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C17A4u;
    {
        const bool branch_taken_0x1c17a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C17A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17A4u;
        // 0x1c17a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c17a4) {
            ctx->pc = 0x1C17BCu;
            goto label_1c17bc;
        }
    }
    ctx->pc = 0x1C17ACu;
    // 0x1c17ac: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c17acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c17b0: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x1c17b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c17b4: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c17b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c17b8: 0xac432830  sw          $v1, 0x2830($v0)
    ctx->pc = 0x1c17b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10288), GPR_U32(ctx, 3));
label_1c17bc:
    // 0x1c17bc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c17bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c17c0: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1c17c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c17c4: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1C17C4u;
    SET_GPR_U32(ctx, 31, 0x1C17CCu);
    ctx->pc = 0x1C17C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C17C4u;
    // 0x1c17c8: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1C17C4u, 0x1C17CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C17CCu;
label_1c17cc:
    // 0x1c17cc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C17CCu;
    {
        const bool branch_taken_0x1c17cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C17D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17CCu;
        // 0x1c17d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c17cc) {
            ctx->pc = 0x1C180Cu;
            goto label_1c180c;
        }
    }
    ctx->pc = 0x1C17D4u;
    // 0x1c17d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c17d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c17d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c17d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c17dc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C17DCu;
    SET_GPR_U32(ctx, 31, 0x1C17E4u);
    ctx->pc = 0x1C17E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C17DCu;
    // 0x1c17e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C17DCu, 0x1C17E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C17E4u;
label_1c17e4:
    // 0x1c17e4: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C17E4u;
    SET_GPR_U32(ctx, 31, 0x1C17ECu);
    ctx->pc = 0x1C17E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C17E4u;
    // 0x1c17e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C17E4u, 0x1C17ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C17ECu;
label_1c17ec:
    // 0x1c17ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c17ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c17f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c17f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c17f4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C17F4u;
    SET_GPR_U32(ctx, 31, 0x1C17FCu);
    ctx->pc = 0x1C17F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C17F4u;
    // 0x1c17f8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C17F4u, 0x1C17FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C17FCu;
label_1c17fc:
    // 0x1c17fc: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C17FCu;
    SET_GPR_U32(ctx, 31, 0x1C1804u);
    ctx->pc = 0x1C1800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C17FCu;
    // 0x1c1800: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C17FCu, 0x1C1804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1804u;
label_1c1804:
    // 0x1c1804: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C1804u;
    {
        const bool branch_taken_0x1c1804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1804) {
            ctx->pc = 0x1C1850u;
            goto label_1c1850;
        }
    }
    ctx->pc = 0x1C180Cu;
label_1c180c:
    // 0x1c180c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c180cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c1810: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1c1810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c1814: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1C1814u;
    SET_GPR_U32(ctx, 31, 0x1C181Cu);
    ctx->pc = 0x1C1818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1814u;
    // 0x1c1818: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1C1814u, 0x1C181Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C181Cu;
label_1c181c:
    // 0x1c181c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C181Cu;
    {
        const bool branch_taken_0x1c181c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C181Cu;
        // 0x1c1820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c181c) {
            ctx->pc = 0x1C1850u;
            goto label_1c1850;
        }
    }
    ctx->pc = 0x1C1824u;
    // 0x1c1824: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c1824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1828: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1828u;
    SET_GPR_U32(ctx, 31, 0x1C1830u);
    ctx->pc = 0x1C182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1828u;
    // 0x1c182c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1828u, 0x1C1830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1830u;
label_1c1830:
    // 0x1c1830: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C1830u;
    SET_GPR_U32(ctx, 31, 0x1C1838u);
    ctx->pc = 0x1C1834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1830u;
    // 0x1c1834: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C1830u, 0x1C1838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1838u;
label_1c1838:
    // 0x1c1838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c183c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c183cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1840: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1840u;
    SET_GPR_U32(ctx, 31, 0x1C1848u);
    ctx->pc = 0x1C1844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1840u;
    // 0x1c1844: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1840u, 0x1C1848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1848u;
label_1c1848:
    // 0x1c1848: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C1848u;
    SET_GPR_U32(ctx, 31, 0x1C1850u);
    ctx->pc = 0x1C184Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1848u;
    // 0x1c184c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C1848u, 0x1C1850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1850u;
label_1c1850:
    // 0x1c1850: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1c1850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1c1854:
    // 0x1c1854: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1c1854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1c1858: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1C1858u;
    {
        const bool branch_taken_0x1c1858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1858u;
        // 0x1c185c: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1858) {
            ctx->pc = 0x1C1908u;
            goto label_1c1908;
        }
    }
    ctx->pc = 0x1C1860u;
    // 0x1c1860: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1c1860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c1864: 0x24425060  addiu       $v0, $v0, 0x5060
    ctx->pc = 0x1c1864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20576));
    // 0x1c1868: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1c1868u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c186c: 0xc07308c  jal         func_1CC230
    ctx->pc = 0x1C186Cu;
    SET_GPR_U32(ctx, 31, 0x1C1874u);
    ctx->pc = 0x1C1870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C186Cu;
    // 0x1c1870: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC230u, 0x1C186Cu, 0x1C1874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1874u;
label_1c1874:
    // 0x1c1874: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1c1874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c1878: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C1878u;
    {
        const bool branch_taken_0x1c1878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c1878) {
            ctx->pc = 0x1C18C0u;
            goto label_1c18c0;
        }
    }
    ctx->pc = 0x1C1880u;
    // 0x1c1880: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1c1880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c1884: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c1884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1888: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C1888u;
    {
        const bool branch_taken_0x1c1888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1888) {
            ctx->pc = 0x1C18C0u;
            goto label_1c18c0;
        }
    }
    ctx->pc = 0x1C1890u;
    // 0x1c1890: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x1c1890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1c1894: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c1894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1898: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1898u;
    {
        const bool branch_taken_0x1c1898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1898u;
        // 0x1c189c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1898) {
            ctx->pc = 0x1C18BCu;
            goto label_1c18bc;
        }
    }
    ctx->pc = 0x1C18A0u;
    // 0x1c18a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c18a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c18a4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C18A4u;
    {
        const bool branch_taken_0x1c18a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c18a4) {
            ctx->pc = 0x1C18B4u;
            goto label_1c18b4;
        }
    }
    ctx->pc = 0x1C18ACu;
    // 0x1c18ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C18ACu;
    {
        const bool branch_taken_0x1c18ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C18B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C18ACu;
        // 0x1c18b0: 0x8e020060  lw          $v0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c18ac) {
            ctx->pc = 0x1C18C4u;
            goto label_1c18c4;
        }
    }
    ctx->pc = 0x1C18B4u;
label_1c18b4:
    // 0x1c18b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C18B4u;
    {
        const bool branch_taken_0x1c18b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C18B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C18B4u;
        // 0x1c18b8: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c18b4) {
            ctx->pc = 0x1C18C0u;
            goto label_1c18c0;
        }
    }
    ctx->pc = 0x1C18BCu;
label_1c18bc:
    // 0x1c18bc: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c18bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_1c18c0:
    // 0x1c18c0: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1c18c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1c18c4:
    // 0x1c18c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c18c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c18c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c18cc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1c18ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1c18d0: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x1c18d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c18d4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C18D4u;
    SET_GPR_U32(ctx, 31, 0x1C18DCu);
    ctx->pc = 0x1C18D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C18D4u;
    // 0x1c18d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C18D4u, 0x1C18DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C18DCu;
label_1c18dc:
    // 0x1c18dc: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C18DCu;
    SET_GPR_U32(ctx, 31, 0x1C18E4u);
    ctx->pc = 0x1C18E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C18DCu;
    // 0x1c18e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C18DCu, 0x1C18E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C18E4u;
label_1c18e4:
    // 0x1c18e4: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1c18e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1c18e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c18e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c18ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c18f0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1c18f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1c18f4: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x1c18f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c18f8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C18F8u;
    SET_GPR_U32(ctx, 31, 0x1C1900u);
    ctx->pc = 0x1C18FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C18F8u;
    // 0x1c18fc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C18F8u, 0x1C1900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1900u;
label_1c1900:
    // 0x1c1900: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C1900u;
    SET_GPR_U32(ctx, 31, 0x1C1908u);
    ctx->pc = 0x1C1904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1900u;
    // 0x1c1904: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C1900u, 0x1C1908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1908u;
label_1c1908:
    // 0x1c1908: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1c1908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c190c: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c190cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c1910: 0x1046003b  beq         $v0, $a2, . + 4 + (0x3B << 2)
    ctx->pc = 0x1C1910u;
    {
        const bool branch_taken_0x1c1910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1C1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1910u;
        // 0x1c1914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1910) {
            ctx->pc = 0x1C1A00u;
            goto label_1c1a00;
        }
    }
    ctx->pc = 0x1C1918u;
    // 0x1c1918: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1918u;
    SET_GPR_U32(ctx, 31, 0x1C1920u);
    ctx->pc = 0x1C191Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1918u;
    // 0x1c191c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1918u, 0x1C1920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1920u;
label_1c1920:
    // 0x1c1920: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c1920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1928: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c1928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c192c: 0xc06ea38  jal         func_1BA8E0
    ctx->pc = 0x1C192Cu;
    SET_GPR_U32(ctx, 31, 0x1C1934u);
    ctx->pc = 0x1C1930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C192Cu;
    // 0x1c1930: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA8E0u, 0x1C192Cu, 0x1C1934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1934u;
label_1c1934:
    // 0x1c1934: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x1c1934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c1938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c193c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C193Cu;
    SET_GPR_U32(ctx, 31, 0x1C1944u);
    ctx->pc = 0x1C1940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C193Cu;
    // 0x1c1940: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C193Cu, 0x1C1944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1944u;
label_1c1944:
    // 0x1c1944: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c1944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c1948: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c1948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c194c: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C194Cu;
    SET_GPR_U32(ctx, 31, 0x1C1954u);
    ctx->pc = 0x1C1950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C194Cu;
    // 0x1c1950: 0x24a54a60  addiu       $a1, $a1, 0x4A60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C194Cu, 0x1C1954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1954u;
label_1c1954:
    // 0x1c1954: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c1954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c1958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c195c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C195Cu;
    SET_GPR_U32(ctx, 31, 0x1C1964u);
    ctx->pc = 0x1C1960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C195Cu;
    // 0x1c1960: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C195Cu, 0x1C1964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1964u;
label_1c1964:
    // 0x1c1964: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c1964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c1968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c1968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c196c: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C196Cu;
    SET_GPR_U32(ctx, 31, 0x1C1974u);
    ctx->pc = 0x1C1970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C196Cu;
    // 0x1c1970: 0x24a54a50  addiu       $a1, $a1, 0x4A50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C196Cu, 0x1C1974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1974u;
label_1c1974:
    // 0x1c1974: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c1974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c1978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c197c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C197Cu;
    SET_GPR_U32(ctx, 31, 0x1C1984u);
    ctx->pc = 0x1C1980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C197Cu;
    // 0x1c1980: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C197Cu, 0x1C1984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1984u;
label_1c1984:
    // 0x1c1984: 0xc06e280  jal         func_1B8A00
    ctx->pc = 0x1C1984u;
    SET_GPR_U32(ctx, 31, 0x1C198Cu);
    ctx->pc = 0x1C1988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1984u;
    // 0x1c1988: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8A00u, 0x1C1984u, 0x1C198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C198Cu;
label_1c198c:
    // 0x1c198c: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c198cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c1990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1994: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c1994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c1998: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1998u;
    SET_GPR_U32(ctx, 31, 0x1C19A0u);
    ctx->pc = 0x1C199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1998u;
    // 0x1c199c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1998u, 0x1C19A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C19A0u;
label_1c19a0:
    // 0x1c19a0: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c19a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c19a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c19a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19a8: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x1c19a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c19ac: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C19ACu;
    SET_GPR_U32(ctx, 31, 0x1C19B4u);
    ctx->pc = 0x1C19B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C19ACu;
    // 0x1c19b0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C19ACu, 0x1C19B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C19B4u;
label_1c19b4:
    // 0x1c19b4: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c19b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c19b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c19b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19bc: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1c19bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c19c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c19c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c19c4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C19C4u;
    SET_GPR_U32(ctx, 31, 0x1C19CCu);
    ctx->pc = 0x1C19C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C19C4u;
    // 0x1c19c8: 0x2446001e  addiu       $a2, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C19C4u, 0x1C19CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C19CCu;
label_1c19cc:
    // 0x1c19cc: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c19ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c19d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c19d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19d4: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C19D4u;
    SET_GPR_U32(ctx, 31, 0x1C19DCu);
    ctx->pc = 0x1C19D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C19D4u;
    // 0x1c19d8: 0x24a54a60  addiu       $a1, $a1, 0x4A60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C19D4u, 0x1C19DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C19DCu;
label_1c19dc:
    // 0x1c19dc: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1c19dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c19e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c19e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19e4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c19e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c19e8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C19E8u;
    SET_GPR_U32(ctx, 31, 0x1C19F0u);
    ctx->pc = 0x1C19ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C19E8u;
    // 0x1c19ec: 0x2446001e  addiu       $a2, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C19E8u, 0x1C19F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C19F0u;
label_1c19f0:
    // 0x1c19f0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c19f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c19f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c19f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19f8: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C19F8u;
    SET_GPR_U32(ctx, 31, 0x1C1A00u);
    ctx->pc = 0x1C19FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C19F8u;
    // 0x1c19fc: 0x24a54a50  addiu       $a1, $a1, 0x4A50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C19F8u, 0x1C1A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A00u;
label_1c1a00:
    // 0x1c1a00: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1c1a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c1a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a08: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c1a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c1a0c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1c1a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c1a10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a14: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1c1a14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1a18: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c1a18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1a1c: 0x260a0060  addiu       $t2, $s0, 0x60
    ctx->pc = 0x1c1a1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1c1a20: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c1a20u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a24: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1c1a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1c1a28: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1c1a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c1a2c: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C1A2Cu;
    SET_GPR_U32(ctx, 31, 0x1C1A34u);
    ctx->pc = 0x1C1A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A2Cu;
    // 0x1c1a30: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C1A2Cu, 0x1C1A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A34u;
label_1c1a34:
    // 0x1c1a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a38: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C1A38u;
    SET_GPR_U32(ctx, 31, 0x1C1A40u);
    ctx->pc = 0x1C1A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A38u;
    // 0x1c1a3c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C1A38u, 0x1C1A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A40u;
label_1c1a40:
    // 0x1c1a40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1A40u;
    {
        const bool branch_taken_0x1c1a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A40u;
        // 0x1c1a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a40) {
            ctx->pc = 0x1C1A58u;
            goto label_1c1a58;
        }
    }
    ctx->pc = 0x1C1A48u;
    // 0x1c1a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a4c: 0xc0707b4  jal         func_1C1ED0
    ctx->pc = 0x1C1A4Cu;
    SET_GPR_U32(ctx, 31, 0x1C1A54u);
    ctx->pc = 0x1C1A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A4Cu;
    // 0x1c1a50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1ED0u, 0x1C1A4Cu, 0x1C1A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A54u;
label_1c1a54:
    // 0x1c1a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a58:
    // 0x1c1a58: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C1A58u;
    SET_GPR_U32(ctx, 31, 0x1C1A60u);
    ctx->pc = 0x1C1A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A58u;
    // 0x1c1a5c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C1A58u, 0x1C1A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A60u;
label_1c1a60:
    // 0x1c1a60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1A60u;
    {
        const bool branch_taken_0x1c1a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A60u;
        // 0x1c1a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a60) {
            ctx->pc = 0x1C1A78u;
            goto label_1c1a78;
        }
    }
    ctx->pc = 0x1C1A68u;
    // 0x1c1a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a6c: 0xc0707b4  jal         func_1C1ED0
    ctx->pc = 0x1C1A6Cu;
    SET_GPR_U32(ctx, 31, 0x1C1A74u);
    ctx->pc = 0x1C1A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A6Cu;
    // 0x1c1a70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1ED0u, 0x1C1A6Cu, 0x1C1A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A74u;
label_1c1a74:
    // 0x1c1a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a78:
    // 0x1c1a78: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1C1A78u;
    SET_GPR_U32(ctx, 31, 0x1C1A80u);
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1C1A78u, 0x1C1A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A80u;
label_1c1a80:
    // 0x1c1a80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c1a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1a84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1a84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1a88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A8Cu;
        // 0x1c1a90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1A94u;
}
