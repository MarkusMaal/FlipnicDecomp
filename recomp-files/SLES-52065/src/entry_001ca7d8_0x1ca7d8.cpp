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

// Function: entry_001ca7d8
// Address: 0x1ca7d8 - 0x1ca838
void entry_001ca7d8_0x1ca7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca7d8_0x1ca7d8");
#endif

    switch (ctx->pc) {
        case 0x1ca7f8u: goto label_1ca7f8;
        case 0x1ca800u: goto label_1ca800;
        case 0x1ca810u: goto label_1ca810;
        case 0x1ca818u: goto label_1ca818;
        case 0x1ca828u: goto label_1ca828;
        case 0x1ca830u: goto label_1ca830;
        default: break;
    }

    ctx->pc = 0x1ca7d8u;

    // 0x1ca7d8: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x1ca7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1ca7dc: 0x10430022  beq         $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1CA7DCu;
    {
        const bool branch_taken_0x1ca7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ca7dc) {
            ctx->pc = 0x1CA868u;
            return;
        }
    }
    ctx->pc = 0x1CA7E4u;
    // 0x1ca7e4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CA7E4u;
    {
        const bool branch_taken_0x1ca7e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA7E4u;
        // 0x1ca7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca7e4) {
            ctx->pc = 0x1CA838u;
            return;
        }
    }
    ctx->pc = 0x1CA7ECu;
    // 0x1ca7ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ca7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ca7f0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA7F0u;
    SET_GPR_U32(ctx, 31, 0x1CA7F8u);
    ctx->pc = 0x1CA7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7F0u;
    // 0x1ca7f4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA7F0u, 0x1CA7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA7F8u;
label_1ca7f8:
    // 0x1ca7f8: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1CA7F8u;
    SET_GPR_U32(ctx, 31, 0x1CA800u);
    ctx->pc = 0x1CA7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7F8u;
    // 0x1ca7fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1CA7F8u, 0x1CA800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA800u;
label_1ca800:
    // 0x1ca800: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1ca800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ca804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca808: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA808u;
    SET_GPR_U32(ctx, 31, 0x1CA810u);
    ctx->pc = 0x1CA80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA808u;
    // 0x1ca80c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA808u, 0x1CA810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA810u;
label_1ca810:
    // 0x1ca810: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CA810u;
    SET_GPR_U32(ctx, 31, 0x1CA818u);
    ctx->pc = 0x1CA814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA810u;
    // 0x1ca814: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CA810u, 0x1CA818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA818u;
label_1ca818:
    // 0x1ca818: 0x8e060064  lw          $a2, 0x64($s0)
    ctx->pc = 0x1ca818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1ca81c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca820: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA820u;
    SET_GPR_U32(ctx, 31, 0x1CA828u);
    ctx->pc = 0x1CA824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA820u;
    // 0x1ca824: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA820u, 0x1CA828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA828u;
label_1ca828:
    // 0x1ca828: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CA828u;
    SET_GPR_U32(ctx, 31, 0x1CA830u);
    ctx->pc = 0x1CA82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA828u;
    // 0x1ca82c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CA828u, 0x1CA830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA830u;
label_1ca830:
    // 0x1ca830: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1CA830u;
    {
        const bool branch_taken_0x1ca830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA830u;
        // 0x1ca834: 0x8e060060  lw          $a2, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca830) {
            ctx->pc = 0x1CA86Cu;
            return;
        }
    }
    ctx->pc = 0x1CA838u;
}
