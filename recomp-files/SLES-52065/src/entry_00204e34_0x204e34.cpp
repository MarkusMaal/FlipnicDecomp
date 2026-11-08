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

// Function: entry_00204e34
// Address: 0x204e34 - 0x204e44
void entry_00204e34_0x204e34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204e34_0x204e34");
#endif

    switch (ctx->pc) {
        case 0x204e3cu: goto label_204e3c;
        default: break;
    }

    ctx->pc = 0x204e34u;

    // 0x204e34: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204E34u;
    SET_GPR_U32(ctx, 31, 0x204E3Cu);
    ctx->pc = 0x204E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204E34u;
    // 0x204e38: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204E34u, 0x204E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E3Cu;
label_204e3c:
    // 0x204e3c: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x204E3Cu;
    {
        const bool branch_taken_0x204e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E3Cu;
        // 0x204e40: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e3c) {
            ctx->pc = 0x204F78u;
            return;
        }
    }
    ctx->pc = 0x204E44u;
}
