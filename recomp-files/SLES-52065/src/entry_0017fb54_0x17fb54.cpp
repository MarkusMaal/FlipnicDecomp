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

// Function: entry_0017fb54
// Address: 0x17fb54 - 0x17fb70
void entry_0017fb54_0x17fb54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fb54_0x17fb54");
#endif

    switch (ctx->pc) {
        case 0x17fb60u: goto label_17fb60;
        default: break;
    }

    ctx->pc = 0x17fb54u;

    // 0x17fb54: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x17fb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17fb58: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x17FB58u;
    SET_GPR_U32(ctx, 31, 0x17FB60u);
    ctx->pc = 0x17FB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FB58u;
    // 0x17fb5c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x17FB58u, 0x17FB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FB60u;
label_17fb60:
    // 0x17fb60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FB60u;
    {
        const bool branch_taken_0x17fb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fb60) {
            ctx->pc = 0x17FB70u;
            return;
        }
    }
    ctx->pc = 0x17FB68u;
    // 0x17fb68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17FB68u;
    {
        const bool branch_taken_0x17fb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB68u;
        // 0x17fb6c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb68) {
            ctx->pc = 0x17FB84u;
            return;
        }
    }
    ctx->pc = 0x17FB70u;
}
