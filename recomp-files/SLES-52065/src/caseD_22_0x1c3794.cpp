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

// Function: caseD_22
// Address: 0x1c3794 - 0x1c37a8
void caseD_22_0x1c3794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_22_0x1c3794");
#endif

    switch (ctx->pc) {
        case 0x1c379cu: goto label_1c379c;
        default: break;
    }

    ctx->pc = 0x1c3794u;

    // 0x1c3794: 0xc0746b4  jal         func_1D1AD0
    ctx->pc = 0x1C3794u;
    SET_GPR_U32(ctx, 31, 0x1C379Cu);
    ctx->pc = 0x1C3798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3794u;
    // 0x1c3798: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1AD0u, 0x1C3794u, 0x1C379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C379Cu;
label_1c379c:
    // 0x1c379c: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1c379cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1c37a0: 0x10000319  b           . + 4 + (0x319 << 2)
    ctx->pc = 0x1C37A0u;
    {
        const bool branch_taken_0x1c37a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C37A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37A0u;
        // 0x1c37a4: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37a0) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C37A8u;
}
