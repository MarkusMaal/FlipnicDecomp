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

// Function: FUN_001d16a0
// Address: 0x1d16a0 - 0x1d1784
void FUN_001d16a0_0x1d16a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d16a0_0x1d16a0");
#endif

    switch (ctx->pc) {
        case 0x1d16d8u: goto label_1d16d8;
        case 0x1d16e8u: goto label_1d16e8;
        case 0x1d16f8u: goto label_1d16f8;
        case 0x1d1718u: goto label_1d1718;
        case 0x1d1730u: goto label_1d1730;
        case 0x1d1740u: goto label_1d1740;
        case 0x1d1750u: goto label_1d1750;
        case 0x1d1760u: goto label_1d1760;
        case 0x1d1774u: goto label_1d1774;
        default: break;
    }

    ctx->pc = 0x1d16a0u;

    // 0x1d16a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d16a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d16a4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d16a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d16a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d16a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d16ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d16acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d16b0: 0x8022fcd8  lb          $v0, -0x328($at)
    ctx->pc = 0x1d16b0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FCD8u));
    // 0x1d16b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D16B4u;
    {
        const bool branch_taken_0x1d16b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D16B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16B4u;
        // 0x1d16b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d16b4) {
            ctx->pc = 0x1D16D0u;
            goto label_1d16d0;
        }
    }
    ctx->pc = 0x1D16BCu;
    // 0x1d16bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d16bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d16c0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d16c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d16c4: 0xa022fcd0  sb          $v0, -0x330($at)
    ctx->pc = 0x1d16c4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FCD0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FCD0u, _value); } while (0);
    // 0x1d16c8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d16c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d16cc: 0xa022fcd8  sb          $v0, -0x328($at)
    ctx->pc = 0x1d16ccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FCD8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FCD8u, _value); } while (0);
label_1d16d0:
    // 0x1d16d0: 0xc053c5c  jal         func_14F170
    ctx->pc = 0x1D16D0u;
    SET_GPR_U32(ctx, 31, 0x1D16D8u);
    ctx->pc = 0x1D16D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D16D0u;
    // 0x1d16d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F170u, 0x1D16D0u, 0x1D16D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D16D8u;
label_1d16d8:
    // 0x1d16d8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1D16D8u;
    {
        const bool branch_taken_0x1d16d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d16d8) {
            ctx->pc = 0x1D1774u;
            goto label_1d1774;
        }
    }
    ctx->pc = 0x1D16E0u;
    // 0x1d16e0: 0xc060774  jal         func_181DD0
    ctx->pc = 0x1D16E0u;
    SET_GPR_U32(ctx, 31, 0x1D16E8u);
    ctx->pc = 0x181DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181DD0u, 0x1D16E0u, 0x1D16E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D16E8u;
label_1d16e8:
    // 0x1d16e8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D16E8u;
    {
        const bool branch_taken_0x1d16e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D16ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16E8u;
        // 0x1d16ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d16e8) {
            ctx->pc = 0x1D1738u;
            goto label_1d1738;
        }
    }
    ctx->pc = 0x1D16F0u;
    // 0x1d16f0: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x1D16F0u;
    SET_GPR_U32(ctx, 31, 0x1D16F8u);
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x1D16F0u, 0x1D16F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D16F8u;
label_1d16f8:
    // 0x1d16f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d16f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d16fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d16fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1700: 0x9023fcd0  lbu         $v1, -0x330($at)
    ctx->pc = 0x1d1700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x36FCD0u));
    // 0x1d1704: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1704u;
    {
        const bool branch_taken_0x1d1704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d1704) {
            ctx->pc = 0x1D1724u;
            goto label_1d1724;
        }
    }
    ctx->pc = 0x1D170Cu;
    // 0x1d170c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1d170cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d1710: 0xc06d8ac  jal         func_1B62B0
    ctx->pc = 0x1D1710u;
    SET_GPR_U32(ctx, 31, 0x1D1718u);
    ctx->pc = 0x1D1714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1710u;
    // 0x1d1714: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62B0u, 0x1D1710u, 0x1D1718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1718u;
label_1d1718:
    // 0x1d1718: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d171c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1D171Cu;
    {
        const bool branch_taken_0x1d171c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D171Cu;
        // 0x1d1720: 0xa020fcd0  sb          $zero, -0x330($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294966480), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d171c) {
            ctx->pc = 0x1D1774u;
            goto label_1d1774;
        }
    }
    ctx->pc = 0x1D1724u;
label_1d1724:
    // 0x1d1724: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1d1724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d1728: 0xc06d8ac  jal         func_1B62B0
    ctx->pc = 0x1D1728u;
    SET_GPR_U32(ctx, 31, 0x1D1730u);
    ctx->pc = 0x1D172Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1728u;
    // 0x1d172c: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62B0u, 0x1D1728u, 0x1D1730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1730u;
label_1d1730:
    // 0x1d1730: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1D1730u;
    {
        const bool branch_taken_0x1d1730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1730u;
        // 0x1d1734: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1730) {
            ctx->pc = 0x1D1778u;
            goto label_1d1778;
        }
    }
    ctx->pc = 0x1D1738u;
label_1d1738:
    // 0x1d1738: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1D1738u;
    SET_GPR_U32(ctx, 31, 0x1D1740u);
    ctx->pc = 0x1D173Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1738u;
    // 0x1d173c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1D1738u, 0x1D1740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1740u;
label_1d1740:
    // 0x1d1740: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1740u;
    {
        const bool branch_taken_0x1d1740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1740u;
        // 0x1d1744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1740) {
            ctx->pc = 0x1D1758u;
            goto label_1d1758;
        }
    }
    ctx->pc = 0x1D1748u;
    // 0x1d1748: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1D1748u;
    SET_GPR_U32(ctx, 31, 0x1D1750u);
    ctx->pc = 0x1D174Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1748u;
    // 0x1d174c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1D1748u, 0x1D1750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1750u;
label_1d1750:
    // 0x1d1750: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1750u;
    {
        const bool branch_taken_0x1d1750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1750) {
            ctx->pc = 0x1D1774u;
            goto label_1d1774;
        }
    }
    ctx->pc = 0x1D1758u;
label_1d1758:
    // 0x1d1758: 0xc060014  jal         func_180050
    ctx->pc = 0x1D1758u;
    SET_GPR_U32(ctx, 31, 0x1D1760u);
    ctx->pc = 0x180050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180050u, 0x1D1758u, 0x1D1760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1760u;
label_1d1760:
    // 0x1d1760: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d1760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d1764: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d1764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1768: 0x24a59a60  addiu       $a1, $a1, -0x65A0
    ctx->pc = 0x1d1768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941280));
    // 0x1d176c: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1D176Cu;
    SET_GPR_U32(ctx, 31, 0x1D1774u);
    ctx->pc = 0x1D1770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D176Cu;
    // 0x1d1770: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1D176Cu, 0x1D1774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1774u;
label_1d1774:
    // 0x1d1774: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1778:
    // 0x1d1778: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d177c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D177Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D177Cu;
        // 0x1d1780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D177Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1784u;
}
