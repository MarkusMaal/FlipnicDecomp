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

// Function: caseD_8
// Address: 0x1aa080 - 0x1aa0b4
void caseD_8_0x1aa080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1aa080");
#endif

    switch (ctx->pc) {
        case 0x1aa088u: goto label_1aa088;
        case 0x1aa0a4u: goto label_1aa0a4;
        default: break;
    }

    ctx->pc = 0x1aa080u;

    // 0x1aa080: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x1AA080u;
    SET_GPR_U32(ctx, 31, 0x1AA088u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x1AA080u, 0x1AA088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA088u;
label_1aa088:
    // 0x1aa088: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aa088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa08c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA08Cu;
    {
        const bool branch_taken_0x1aa08c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa08c) {
            ctx->pc = 0x1AA0B4u;
            return;
        }
    }
    ctx->pc = 0x1AA094u;
    // 0x1aa094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa098: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1aa098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aa09c: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x1AA09Cu;
    SET_GPR_U32(ctx, 31, 0x1AA0A4u);
    ctx->pc = 0x1AA0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA09Cu;
    // 0x1aa0a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1AA09Cu, 0x1AA0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA0A4u;
label_1aa0a4:
    // 0x1aa0a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa0a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aa0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa0ac: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x1AA0ACu;
    SET_GPR_U32(ctx, 31, 0x1AA0B4u);
    ctx->pc = 0x1AA0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA0ACu;
    // 0x1aa0b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1AA0ACu, 0x1AA0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA0B4u;
}
