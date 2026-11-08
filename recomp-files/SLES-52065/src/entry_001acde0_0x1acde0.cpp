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

// Function: entry_001acde0
// Address: 0x1acde0 - 0x1ace34
void entry_001acde0_0x1acde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acde0_0x1acde0");
#endif

    switch (ctx->pc) {
        case 0x1acdecu: goto label_1acdec;
        case 0x1acdf8u: goto label_1acdf8;
        case 0x1ace10u: goto label_1ace10;
        case 0x1ace1cu: goto label_1ace1c;
        default: break;
    }

    ctx->pc = 0x1acde0u;

    // 0x1acde0: 0x26040710  addiu       $a0, $s0, 0x710
    ctx->pc = 0x1acde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1808));
    // 0x1acde4: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x1ACDE4u;
    SET_GPR_U32(ctx, 31, 0x1ACDECu);
    ctx->pc = 0x1ACDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACDE4u;
    // 0x1acde8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x1ACDE4u, 0x1ACDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACDECu;
label_1acdec:
    // 0x1acdec: 0x260406f0  addiu       $a0, $s0, 0x6F0
    ctx->pc = 0x1acdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1776));
    // 0x1acdf0: 0xc069aa8  jal         func_1A6AA0
    ctx->pc = 0x1ACDF0u;
    SET_GPR_U32(ctx, 31, 0x1ACDF8u);
    ctx->pc = 0x1ACDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACDF0u;
    // 0x1acdf4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6AA0u, 0x1ACDF0u, 0x1ACDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACDF8u;
label_1acdf8:
    // 0x1acdf8: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1acdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1acdfc: 0x26040670  addiu       $a0, $s0, 0x670
    ctx->pc = 0x1acdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1648));
    // 0x1ace00: 0x24a5bf10  addiu       $a1, $a1, -0x40F0
    ctx->pc = 0x1ace00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950672));
    // 0x1ace04: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x1ace04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1ace08: 0xc07a3bc  jal         func_1E8EF0
    ctx->pc = 0x1ACE08u;
    SET_GPR_U32(ctx, 31, 0x1ACE10u);
    ctx->pc = 0x1ACE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACE08u;
    // 0x1ace0c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EF0u, 0x1ACE08u, 0x1ACE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACE10u;
label_1ace10:
    // 0x1ace10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ace10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ace14: 0xc064324  jal         func_190C90
    ctx->pc = 0x1ACE14u;
    SET_GPR_U32(ctx, 31, 0x1ACE1Cu);
    ctx->pc = 0x1ACE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACE14u;
    // 0x1ace18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1ACE14u, 0x1ACE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACE1Cu;
label_1ace1c:
    // 0x1ace1c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x1ace1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1ace20: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ace20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ace24: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACE24u;
    {
        const bool branch_taken_0x1ace24 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1ACE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE24u;
        // 0x1ace28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace24) {
            ctx->pc = 0x1ACE38u;
            return;
        }
    }
    ctx->pc = 0x1ACE2Cu;
    // 0x1ace2c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1ACE2Cu;
    SET_GPR_U32(ctx, 31, 0x1ACE34u);
    ctx->pc = 0x1ACE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACE2Cu;
    // 0x1ace30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1ACE2Cu, 0x1ACE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACE34u;
}
