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
// Address: 0x1ad198 - 0x1ad1c8
void caseD_0_0x1ad198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1ad198");
#endif

    switch (ctx->pc) {
        case 0x1ad1a0u: goto label_1ad1a0;
        case 0x1ad1b8u: goto label_1ad1b8;
        default: break;
    }

    ctx->pc = 0x1ad198u;

    // 0x1ad198: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x1AD198u;
    SET_GPR_U32(ctx, 31, 0x1AD1A0u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x1AD198u, 0x1AD1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD1A0u;
label_1ad1a0:
    // 0x1ad1a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ad1a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1a4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD1A4u;
    {
        const bool branch_taken_0x1ad1a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD1A4u;
        // 0x1ad1a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad1a4) {
            ctx->pc = 0x1AD1C8u;
            return;
        }
    }
    ctx->pc = 0x1AD1ACu;
    // 0x1ad1ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ad1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ad1b0: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x1AD1B0u;
    SET_GPR_U32(ctx, 31, 0x1AD1B8u);
    ctx->pc = 0x1AD1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD1B0u;
    // 0x1ad1b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1AD1B0u, 0x1AD1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD1B8u;
label_1ad1b8:
    // 0x1ad1b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ad1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad1bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ad1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1c0: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x1AD1C0u;
    SET_GPR_U32(ctx, 31, 0x1AD1C8u);
    ctx->pc = 0x1AD1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD1C0u;
    // 0x1ad1c4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1AD1C0u, 0x1AD1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD1C8u;
}
