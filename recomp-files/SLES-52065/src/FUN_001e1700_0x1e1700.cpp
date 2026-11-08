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

// Function: FUN_001e1700
// Address: 0x1e1700 - 0x1e1778
void FUN_001e1700_0x1e1700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e1700_0x1e1700");
#endif

    switch (ctx->pc) {
        case 0x1e1740u: goto label_1e1740;
        case 0x1e1748u: goto label_1e1748;
        case 0x1e1760u: goto label_1e1760;
        default: break;
    }

    ctx->pc = 0x1e1700u;

    // 0x1e1700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e1700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e1704: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e1704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e1708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e1708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e170c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e170cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e1710: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e1710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1714: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E1714u;
    {
        const bool branch_taken_0x1e1714 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1714u;
        // 0x1e1718: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1714) {
            ctx->pc = 0x1E1760u;
            goto label_1e1760;
        }
    }
    ctx->pc = 0x1E171Cu;
    // 0x1e171c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1e171cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e1720: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E1720u;
    {
        const bool branch_taken_0x1e1720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1720u;
        // 0x1e1724: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1720) {
            ctx->pc = 0x1E174Cu;
            goto label_1e174c;
        }
    }
    ctx->pc = 0x1E1728u;
    // 0x1e1728: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e1728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e172c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e172cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e1730: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1730u;
    {
        const bool branch_taken_0x1e1730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1730u;
        // 0x1e1734: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1730) {
            ctx->pc = 0x1E1748u;
            goto label_1e1748;
        }
    }
    ctx->pc = 0x1E1738u;
    // 0x1e1738: 0xc04018c  jal         func_100630
    ctx->pc = 0x1E1738u;
    SET_GPR_U32(ctx, 31, 0x1E1740u);
    ctx->pc = 0x1E173Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1738u;
    // 0x1e173c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1E1738u, 0x1E1740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1740u;
label_1e1740:
    // 0x1e1740: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E1740u;
    SET_GPR_U32(ctx, 31, 0x1E1748u);
    ctx->pc = 0x1E1744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1740u;
    // 0x1e1744: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E1740u, 0x1E1748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1748u;
label_1e1748:
    // 0x1e1748: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e1748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e174c:
    // 0x1e174c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e174cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e1750: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1750u;
    {
        const bool branch_taken_0x1e1750 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E1754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1750u;
        // 0x1e1754: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1750) {
            ctx->pc = 0x1E1764u;
            goto label_1e1764;
        }
    }
    ctx->pc = 0x1E1758u;
    // 0x1e1758: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E1758u;
    SET_GPR_U32(ctx, 31, 0x1E1760u);
    ctx->pc = 0x1E175Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1758u;
    // 0x1e175c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E1758u, 0x1E1760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1760u;
label_1e1760:
    // 0x1e1760: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e1760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e1764:
    // 0x1e1764: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e1764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1768: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e1768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e176c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e176cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1770: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1770u;
        // 0x1e1774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1778u;
}
