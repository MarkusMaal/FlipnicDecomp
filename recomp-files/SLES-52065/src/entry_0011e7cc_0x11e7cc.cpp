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

// Function: entry_0011e7cc
// Address: 0x11e7cc - 0x11e818
void entry_0011e7cc_0x11e7cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e7cc_0x11e7cc");
#endif

    switch (ctx->pc) {
        case 0x11e7e0u: goto label_11e7e0;
        case 0x11e7ecu: goto label_11e7ec;
        case 0x11e7f8u: goto label_11e7f8;
        case 0x11e804u: goto label_11e804;
        default: break;
    }

    ctx->pc = 0x11e7ccu;

    // 0x11e7cc: 0x8e420538  lw          $v0, 0x538($s2)
    ctx->pc = 0x11e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1336)));
    // 0x11e7d0: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x11E7D0u;
    {
        const bool branch_taken_0x11e7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7D0u;
        // 0x11e7d4: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7d0) {
            ctx->pc = 0x11E84Cu;
            return;
        }
    }
    ctx->pc = 0x11E7D8u;
    // 0x11e7d8: 0xc080702  jal         func_201C08
    ctx->pc = 0x11E7D8u;
    SET_GPR_U32(ctx, 31, 0x11E7E0u);
    ctx->pc = 0x11E7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E7D8u;
    // 0x11e7dc: 0x26450104  addiu       $a1, $s2, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11E7D8u, 0x11E7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E7E0u;
label_11e7e0:
    // 0x11e7e0: 0x264503c4  addiu       $a1, $s2, 0x3C4
    ctx->pc = 0x11e7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 964));
    // 0x11e7e4: 0xc080664  jal         func_201990
    ctx->pc = 0x11E7E4u;
    SET_GPR_U32(ctx, 31, 0x11E7ECu);
    ctx->pc = 0x11E7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E7E4u;
    // 0x11e7e8: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11E7E4u, 0x11E7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E7ECu;
label_11e7ec:
    // 0x11e7ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11e7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e7f0: 0xc080664  jal         func_201990
    ctx->pc = 0x11E7F0u;
    SET_GPR_U32(ctx, 31, 0x11E7F8u);
    ctx->pc = 0x11E7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E7F0u;
    // 0x11e7f4: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11E7F0u, 0x11E7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E7F8u;
label_11e7f8:
    // 0x11e7f8: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x11e7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x11e7fc: 0xc07bdf0  jal         func_1EF7C0
    ctx->pc = 0x11E7FCu;
    SET_GPR_U32(ctx, 31, 0x11E804u);
    ctx->pc = 0x11E800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E7FCu;
    // 0x11e800: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF7C0u, 0x11E7FCu, 0x11E804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E804u;
label_11e804:
    // 0x11e804: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e808: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E808u;
    {
        const bool branch_taken_0x11e808 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E808u;
        // 0x11e80c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e808) {
            ctx->pc = 0x11E818u;
            return;
        }
    }
    ctx->pc = 0x11E810u;
    // 0x11e810: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x11E810u;
    {
        const bool branch_taken_0x11e810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E810u;
        // 0x11e814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e810) {
            ctx->pc = 0x11E8C8u;
            return;
        }
    }
    ctx->pc = 0x11E818u;
}
