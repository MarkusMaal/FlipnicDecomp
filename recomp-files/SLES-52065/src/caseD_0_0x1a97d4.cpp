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
// Address: 0x1a97d4 - 0x1a9808
void caseD_0_0x1a97d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1a97d4");
#endif

    switch (ctx->pc) {
        case 0x1a97dcu: goto label_1a97dc;
        case 0x1a97f8u: goto label_1a97f8;
        default: break;
    }

    ctx->pc = 0x1a97d4u;

    // 0x1a97d4: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x1A97D4u;
    SET_GPR_U32(ctx, 31, 0x1A97DCu);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x1A97D4u, 0x1A97DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A97DCu;
label_1a97dc:
    // 0x1a97dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a97dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a97e0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A97E0u;
    {
        const bool branch_taken_0x1a97e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a97e0) {
            ctx->pc = 0x1A9808u;
            return;
        }
    }
    ctx->pc = 0x1A97E8u;
    // 0x1a97e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a97e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a97ec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a97ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a97f0: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x1A97F0u;
    SET_GPR_U32(ctx, 31, 0x1A97F8u);
    ctx->pc = 0x1A97F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A97F0u;
    // 0x1a97f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1A97F0u, 0x1A97F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A97F8u;
label_1a97f8:
    // 0x1a97f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a97f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a97fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a97fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9800: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x1A9800u;
    SET_GPR_U32(ctx, 31, 0x1A9808u);
    ctx->pc = 0x1A9804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9800u;
    // 0x1a9804: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1A9800u, 0x1A9808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9808u;
}
