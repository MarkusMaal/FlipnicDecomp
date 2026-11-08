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

// Function: entry_001bf930
// Address: 0x1bf930 - 0x1bf968
void entry_001bf930_0x1bf930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf930_0x1bf930");
#endif

    switch (ctx->pc) {
        case 0x1bf954u: goto label_1bf954;
        case 0x1bf960u: goto label_1bf960;
        default: break;
    }

    ctx->pc = 0x1bf930u;

    // 0x1bf930: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bf930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bf934: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bf934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf938: 0x8c23f4f8  lw          $v1, -0xB08($at)
    ctx->pc = 0x1bf938u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F4F8u));
    // 0x1bf93c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BF93Cu;
    {
        const bool branch_taken_0x1bf93c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BF940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF93Cu;
        // 0x1bf940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf93c) {
            ctx->pc = 0x1BF968u;
            return;
        }
    }
    ctx->pc = 0x1BF944u;
    // 0x1bf944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf948: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bf948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf94c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF94Cu;
    SET_GPR_U32(ctx, 31, 0x1BF954u);
    ctx->pc = 0x1BF950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF94Cu;
    // 0x1bf950: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF94Cu, 0x1BF954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF954u;
label_1bf954:
    // 0x1bf954: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bf954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf958: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1BF958u;
    SET_GPR_U32(ctx, 31, 0x1BF960u);
    ctx->pc = 0x1BF95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF958u;
    // 0x1bf95c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1BF958u, 0x1BF960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF960u;
label_1bf960:
    // 0x1bf960: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BF960u;
    {
        const bool branch_taken_0x1bf960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf960) {
            ctx->pc = 0x1BF980u;
            return;
        }
    }
    ctx->pc = 0x1BF968u;
}
