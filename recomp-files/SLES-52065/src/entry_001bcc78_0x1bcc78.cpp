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

// Function: entry_001bcc78
// Address: 0x1bcc78 - 0x1bcc90
void entry_001bcc78_0x1bcc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcc78_0x1bcc78");
#endif

    switch (ctx->pc) {
        case 0x1bcc80u: goto label_1bcc80;
        default: break;
    }

    ctx->pc = 0x1bcc78u;

    // 0x1bcc78: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BCC78u;
    SET_GPR_U32(ctx, 31, 0x1BCC80u);
    ctx->pc = 0x1BCC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC78u;
    // 0x1bcc7c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BCC78u, 0x1BCC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC80u;
label_1bcc80:
    // 0x1bcc80: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BCC80u;
    {
        const bool branch_taken_0x1bcc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcc80) {
            ctx->pc = 0x1BCCB0u;
            return;
        }
    }
    ctx->pc = 0x1BCC88u;
    // 0x1bcc88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCC88u;
    {
        const bool branch_taken_0x1bcc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcc88) {
            ctx->pc = 0x1BCC98u;
            return;
        }
    }
    ctx->pc = 0x1BCC90u;
}
