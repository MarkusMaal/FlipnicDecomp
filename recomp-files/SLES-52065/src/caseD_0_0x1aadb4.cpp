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

// Function: caseD_0
// Address: 0x1aadb4 - 0x1aade4
void caseD_0_0x1aadb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1aadb4");
#endif

    switch (ctx->pc) {
        case 0x1aadbcu: goto label_1aadbc;
        case 0x1aadd4u: goto label_1aadd4;
        default: break;
    }

    ctx->pc = 0x1aadb4u;

    // 0x1aadb4: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x1AADB4u;
    SET_GPR_U32(ctx, 31, 0x1AADBCu);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x1AADB4u, 0x1AADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AADBCu;
label_1aadbc:
    // 0x1aadbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aadbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aadc0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AADC0u;
    {
        const bool branch_taken_0x1aadc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADC0u;
        // 0x1aadc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aadc0) {
            ctx->pc = 0x1AADE4u;
            return;
        }
    }
    ctx->pc = 0x1AADC8u;
    // 0x1aadc8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1aadc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aadcc: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x1AADCCu;
    SET_GPR_U32(ctx, 31, 0x1AADD4u);
    ctx->pc = 0x1AADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AADCCu;
    // 0x1aadd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1AADCCu, 0x1AADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AADD4u;
label_1aadd4:
    // 0x1aadd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aadd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aadd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aadd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaddc: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x1AADDCu;
    SET_GPR_U32(ctx, 31, 0x1AADE4u);
    ctx->pc = 0x1AADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AADDCu;
    // 0x1aade0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1AADDCu, 0x1AADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AADE4u;
}
