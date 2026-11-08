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

// Function: entry_001d16d0
// Address: 0x1d16d0 - 0x1d1724
void entry_001d16d0_0x1d16d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d16d0_0x1d16d0");
#endif

    switch (ctx->pc) {
        case 0x1d16d8u: goto label_1d16d8;
        case 0x1d16e8u: goto label_1d16e8;
        case 0x1d16f8u: goto label_1d16f8;
        case 0x1d1718u: goto label_1d1718;
        default: break;
    }

    ctx->pc = 0x1d16d0u;

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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x1D1724u;
}
