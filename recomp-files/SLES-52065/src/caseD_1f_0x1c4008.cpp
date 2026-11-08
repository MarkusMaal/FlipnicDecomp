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

// Function: caseD_1f
// Address: 0x1c4008 - 0x1c4024
void caseD_1f_0x1c4008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1f_0x1c4008");
#endif

    switch (ctx->pc) {
        case 0x1c401cu: goto label_1c401c;
        default: break;
    }

    ctx->pc = 0x1c4008u;

    // 0x1c4008: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c4008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c400c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c400cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4010: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c4010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1c4014: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1C4014u;
    SET_GPR_U32(ctx, 31, 0x1C401Cu);
    ctx->pc = 0x1C4018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4014u;
    // 0x1c4018: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1C4014u, 0x1C401Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C401Cu;
label_1c401c:
    // 0x1c401c: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x1C401Cu;
    {
        const bool branch_taken_0x1c401c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c401c) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C4024u;
}
