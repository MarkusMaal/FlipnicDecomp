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

// Function: entry_001f4768
// Address: 0x1f4768 - 0x1f478c
void entry_001f4768_0x1f4768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4768_0x1f4768");
#endif

    switch (ctx->pc) {
        case 0x1f4770u: goto label_1f4770;
        case 0x1f4780u: goto label_1f4780;
        default: break;
    }

    ctx->pc = 0x1f4768u;

label_1f4768:
    // 0x1f4768: 0xc07d1a0  jal         func_1F4680
    ctx->pc = 0x1F4768u;
    SET_GPR_U32(ctx, 31, 0x1F4770u);
    ctx->pc = 0x1F476Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4768u;
    // 0x1f476c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4680u, 0x1F4768u, 0x1F4770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4770u;
label_1f4770:
    // 0x1f4770: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f4770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f4774: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4778: 0xc07d18a  jal         func_1F4628
    ctx->pc = 0x1F4778u;
    SET_GPR_U32(ctx, 31, 0x1F4780u);
    ctx->pc = 0x1F477Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4778u;
    // 0x1f477c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4628u, 0x1F4778u, 0x1F4780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4780u;
label_1f4780:
    // 0x1f4780: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x1f4780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f4784: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F4784u;
    {
        const bool branch_taken_0x1f4784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4784) {
            ctx->pc = 0x1F4788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4784u;
            // 0x1f4788: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4768;
        }
    }
    ctx->pc = 0x1F478Cu;
}
