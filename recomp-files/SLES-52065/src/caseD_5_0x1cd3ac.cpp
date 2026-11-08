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

// Function: caseD_5
// Address: 0x1cd3ac - 0x1cd3c8
void caseD_5_0x1cd3ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1cd3ac");
#endif

    switch (ctx->pc) {
        case 0x1cd3b8u: goto label_1cd3b8;
        default: break;
    }

    ctx->pc = 0x1cd3acu;

    // 0x1cd3ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd3b0: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CD3B0u;
    SET_GPR_U32(ctx, 31, 0x1CD3B8u);
    ctx->pc = 0x1CD3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD3B0u;
    // 0x1cd3b4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CD3B0u, 0x1CD3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD3B8u;
label_1cd3b8:
    // 0x1cd3b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD3B8u;
    {
        const bool branch_taken_0x1cd3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD3B8u;
        // 0x1cd3bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd3b8) {
            ctx->pc = 0x1CD3C8u;
            return;
        }
    }
    ctx->pc = 0x1CD3C0u;
    // 0x1cd3c0: 0xc073680  jal         func_1CDA00
    ctx->pc = 0x1CD3C0u;
    SET_GPR_U32(ctx, 31, 0x1CD3C8u);
    ctx->pc = 0x1CD3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD3C0u;
    // 0x1cd3c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA00u, 0x1CD3C0u, 0x1CD3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD3C8u;
}
