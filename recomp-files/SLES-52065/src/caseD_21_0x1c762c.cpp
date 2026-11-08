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

// Function: caseD_21
// Address: 0x1c762c - 0x1c7640
void caseD_21_0x1c762c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_21_0x1c762c");
#endif

    switch (ctx->pc) {
        case 0x1c7634u: goto label_1c7634;
        default: break;
    }

    ctx->pc = 0x1c762cu;

    // 0x1c762c: 0xc0746b4  jal         func_1D1AD0
    ctx->pc = 0x1C762Cu;
    SET_GPR_U32(ctx, 31, 0x1C7634u);
    ctx->pc = 0x1C7630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C762Cu;
    // 0x1c7630: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1AD0u, 0x1C762Cu, 0x1C7634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7634u;
label_1c7634:
    // 0x1c7634: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x1c7634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1c7638: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1C7638u;
    {
        const bool branch_taken_0x1c7638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7638u;
        // 0x1c763c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7638) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C7640u;
}
