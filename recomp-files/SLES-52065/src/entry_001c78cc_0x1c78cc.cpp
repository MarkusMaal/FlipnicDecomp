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

// Function: entry_001c78cc
// Address: 0x1c78cc - 0x1c790c
void entry_001c78cc_0x1c78cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c78cc_0x1c78cc");
#endif

    switch (ctx->pc) {
        case 0x1c78d8u: goto label_1c78d8;
        case 0x1c78e0u: goto label_1c78e0;
        case 0x1c78f0u: goto label_1c78f0;
        case 0x1c78f8u: goto label_1c78f8;
        default: break;
    }

    ctx->pc = 0x1c78ccu;

    // 0x1c78cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c78ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c78d0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C78D0u;
    SET_GPR_U32(ctx, 31, 0x1C78D8u);
    ctx->pc = 0x1C78D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78D0u;
    // 0x1c78d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C78D0u, 0x1C78D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78D8u;
label_1c78d8:
    // 0x1c78d8: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C78D8u;
    SET_GPR_U32(ctx, 31, 0x1C78E0u);
    ctx->pc = 0x1C78DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78D8u;
    // 0x1c78dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C78D8u, 0x1C78E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78E0u;
label_1c78e0:
    // 0x1c78e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c78e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c78e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c78e8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C78E8u;
    SET_GPR_U32(ctx, 31, 0x1C78F0u);
    ctx->pc = 0x1C78ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78E8u;
    // 0x1c78ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C78E8u, 0x1C78F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78F0u;
label_1c78f0:
    // 0x1c78f0: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C78F0u;
    SET_GPR_U32(ctx, 31, 0x1C78F8u);
    ctx->pc = 0x1C78F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78F0u;
    // 0x1c78f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C78F0u, 0x1C78F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78F8u;
label_1c78f8:
    // 0x1c78f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c78f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c78fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c78fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c7900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7904: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7904u;
        // 0x1c7908: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C790Cu;
}
