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

// Function: entry_0011d898
// Address: 0x11d898 - 0x11d8e8
void entry_0011d898_0x11d898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d898_0x11d898");
#endif

    switch (ctx->pc) {
        case 0x11d8b0u: goto label_11d8b0;
        case 0x11d8bcu: goto label_11d8bc;
        case 0x11d8c8u: goto label_11d8c8;
        case 0x11d8d4u: goto label_11d8d4;
        default: break;
    }

    ctx->pc = 0x11d898u;

    // 0x11d898: 0x8e620538  lw          $v0, 0x538($s3)
    ctx->pc = 0x11d898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1336)));
    // 0x11d89c: 0x1443003a  bne         $v0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x11D89Cu;
    {
        const bool branch_taken_0x11d89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D89Cu;
        // 0x11d8a0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d89c) {
            ctx->pc = 0x11D988u;
            return;
        }
    }
    ctx->pc = 0x11D8A4u;
    // 0x11d8a4: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x11d8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x11d8a8: 0xc080702  jal         func_201C08
    ctx->pc = 0x11D8A8u;
    SET_GPR_U32(ctx, 31, 0x11D8B0u);
    ctx->pc = 0x11D8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D8A8u;
    // 0x11d8ac: 0x26650104  addiu       $a1, $s3, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11D8A8u, 0x11D8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8B0u;
label_11d8b0:
    // 0x11d8b0: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x11d8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x11d8b4: 0xc080664  jal         func_201990
    ctx->pc = 0x11D8B4u;
    SET_GPR_U32(ctx, 31, 0x11D8BCu);
    ctx->pc = 0x11D8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D8B4u;
    // 0x11d8b8: 0x266503c4  addiu       $a1, $s3, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11D8B4u, 0x11D8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8BCu;
label_11d8bc:
    // 0x11d8bc: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x11d8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x11d8c0: 0xc080664  jal         func_201990
    ctx->pc = 0x11D8C0u;
    SET_GPR_U32(ctx, 31, 0x11D8C8u);
    ctx->pc = 0x11D8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D8C0u;
    // 0x11d8c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11D8C0u, 0x11D8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8C8u;
label_11d8c8:
    // 0x11d8c8: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x11d8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x11d8cc: 0xc07bdf0  jal         func_1EF7C0
    ctx->pc = 0x11D8CCu;
    SET_GPR_U32(ctx, 31, 0x11D8D4u);
    ctx->pc = 0x11D8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D8CCu;
    // 0x11d8d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF7C0u, 0x11D8CCu, 0x11D8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8D4u;
label_11d8d4:
    // 0x11d8d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11d8d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d8d8: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D8D8u;
    {
        const bool branch_taken_0x11d8d8 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x11D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8D8u;
        // 0x11d8dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8d8) {
            ctx->pc = 0x11D8E8u;
            return;
        }
    }
    ctx->pc = 0x11D8E0u;
    // 0x11d8e0: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x11D8E0u;
    {
        const bool branch_taken_0x11d8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8E0u;
        // 0x11d8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8e0) {
            ctx->pc = 0x11DC78u;
            return;
        }
    }
    ctx->pc = 0x11D8E8u;
}
