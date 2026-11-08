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
// Address: 0x1abff8 - 0x1ac028
void caseD_0_0x1abff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1abff8");
#endif

    switch (ctx->pc) {
        case 0x1ac000u: goto label_1ac000;
        case 0x1ac018u: goto label_1ac018;
        default: break;
    }

    ctx->pc = 0x1abff8u;

    // 0x1abff8: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x1ABFF8u;
    SET_GPR_U32(ctx, 31, 0x1AC000u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x1ABFF8u, 0x1AC000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC000u;
label_1ac000:
    // 0x1ac000: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ac000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac004: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AC004u;
    {
        const bool branch_taken_0x1ac004 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC004u;
        // 0x1ac008: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac004) {
            ctx->pc = 0x1AC028u;
            return;
        }
    }
    ctx->pc = 0x1AC00Cu;
    // 0x1ac00c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ac00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ac010: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x1AC010u;
    SET_GPR_U32(ctx, 31, 0x1AC018u);
    ctx->pc = 0x1AC014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC010u;
    // 0x1ac014: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1AC010u, 0x1AC018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC018u;
label_1ac018:
    // 0x1ac018: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ac018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac01c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ac01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac020: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x1AC020u;
    SET_GPR_U32(ctx, 31, 0x1AC028u);
    ctx->pc = 0x1AC024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC020u;
    // 0x1ac024: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1AC020u, 0x1AC028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC028u;
}
