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

// Function: FUN_001e1610
// Address: 0x1e1610 - 0x1e16e0
void FUN_001e1610_0x1e1610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e1610_0x1e1610");
#endif

    switch (ctx->pc) {
        case 0x1e166cu: goto label_1e166c;
        case 0x1e167cu: goto label_1e167c;
        case 0x1e1688u: goto label_1e1688;
        case 0x1e1698u: goto label_1e1698;
        default: break;
    }

    ctx->pc = 0x1e1610u;

    // 0x1e1610: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e1610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e1614: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e1614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1618: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e1618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e161c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e161cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1620: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1e1620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x1e1624: 0x65100a  movz        $v0, $v1, $a1
    ctx->pc = 0x1e1624u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1e1628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e1628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e162c: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x1e162cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
    // 0x1e1630: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e1634: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x1e1634u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x1e1638: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e1638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e163c: 0xa080003b  sb          $zero, 0x3B($a0)
    ctx->pc = 0x1e163cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 59), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e1640: 0xa083003a  sb          $v1, 0x3A($a0)
    ctx->pc = 0x1e1640u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e1644: 0xa082003a  sb          $v0, 0x3A($a0)
    ctx->pc = 0x1e1644u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e1648: 0x24021002  addiu       $v0, $zero, 0x1002
    ctx->pc = 0x1e1648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
    // 0x1e164c: 0xa4820038  sh          $v0, 0x38($a0)
    ctx->pc = 0x1e164cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e1650: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1e1650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e1654: 0xfc800030  sd          $zero, 0x30($a0)
    ctx->pc = 0x1e1654u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 0));
    // 0x1e1658: 0xfc820028  sd          $v0, 0x28($a0)
    ctx->pc = 0x1e1658u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 2));
    // 0x1e165c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1e165cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1e1660: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1e1660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e1664: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1E1664u;
    SET_GPR_U32(ctx, 31, 0x1E166Cu);
    ctx->pc = 0x1E1668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1664u;
    // 0x1e1668: 0xafdd0054  sw          $sp, 0x54($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 84), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1E1664u, 0x1E166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E166Cu;
label_1e166c:
    // 0x1e166c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E166Cu;
    {
        const bool branch_taken_0x1e166c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E166Cu;
        // 0x1e1670: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e166c) {
            ctx->pc = 0x1E1688u;
            goto label_1e1688;
        }
    }
    ctx->pc = 0x1E1674u;
    // 0x1e1674: 0xc07a284  jal         func_1E8A10
    ctx->pc = 0x1E1674u;
    SET_GPR_U32(ctx, 31, 0x1E167Cu);
    ctx->pc = 0x1E8A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8A10u, 0x1E1674u, 0x1E167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E167Cu;
label_1e167c:
    // 0x1e167c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e167cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1680: 0xc04814c  jal         func_120530
    ctx->pc = 0x1E1680u;
    SET_GPR_U32(ctx, 31, 0x1E1688u);
    ctx->pc = 0x1E1684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1680u;
    // 0x1e1684: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120530u, 0x1E1680u, 0x1E1688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1688u;
label_1e1688:
    // 0x1e1688: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1688u;
    {
        const bool branch_taken_0x1e1688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1688u;
        // 0x1e168c: 0xae110020  sw          $s1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1688) {
            ctx->pc = 0x1E1698u;
            goto label_1e1698;
        }
    }
    ctx->pc = 0x1E1690u;
    // 0x1e1690: 0xc07a5c4  jal         func_1E9710
    ctx->pc = 0x1E1690u;
    SET_GPR_U32(ctx, 31, 0x1E1698u);
    ctx->pc = 0x1E1694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1690u;
    // 0x1e1694: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9710u, 0x1E1690u, 0x1E1698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1698u;
label_1e1698:
    // 0x1e1698: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1e1698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1e169c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E169Cu;
    {
        const bool branch_taken_0x1e169c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E169Cu;
        // 0x1e16a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e169c) {
            ctx->pc = 0x1E16A8u;
            goto label_1e16a8;
        }
    }
    ctx->pc = 0x1E16A4u;
    // 0x1e16a4: 0xa203003a  sb          $v1, 0x3A($s0)
    ctx->pc = 0x1e16a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 3));
label_1e16a8:
    // 0x1e16a8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1e16a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1e16ac: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e16acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1e16b0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e16b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e16b4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1e16b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1e16b8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1e16b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1e16bc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1e16bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1e16c0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1e16c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1e16c4: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e16c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x1e16c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e16c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e16cc: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1e16ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e16d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e16d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e16d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e16d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e16d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E16D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E16DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E16D8u;
        // 0x1e16dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E16D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E16E0u;
}
