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

// Function: entry_00142468
// Address: 0x142468 - 0x142484
void entry_00142468_0x142468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142468_0x142468");
#endif

    switch (ctx->pc) {
        case 0x142474u: goto label_142474;
        default: break;
    }

    ctx->pc = 0x142468u;

label_142468:
    // 0x142468: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x142468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14246c: 0xc050928  jal         func_1424A0
    ctx->pc = 0x14246Cu;
    SET_GPR_U32(ctx, 31, 0x142474u);
    ctx->pc = 0x142470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14246Cu;
    // 0x142470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1424A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1424A0u, 0x14246Cu, 0x142474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142474u;
label_142474:
    // 0x142474: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x142474u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x142478: 0x0  nop
    ctx->pc = 0x142478u;
    // NOP
    // 0x14247c: 0x1630fffa  bne         $s1, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14247Cu;
    {
        const bool branch_taken_0x14247c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x14247c) {
            ctx->pc = 0x142468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142468;
        }
    }
    ctx->pc = 0x142484u;
}
