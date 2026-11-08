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

// Function: entry_00204f58
// Address: 0x204f58 - 0x204f74
void entry_00204f58_0x204f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204f58_0x204f58");
#endif

    switch (ctx->pc) {
        case 0x204f6cu: goto label_204f6c;
        default: break;
    }

    ctx->pc = 0x204f58u;

    // 0x204f58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x204f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204f5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x204F5Cu;
    {
        const bool branch_taken_0x204f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F5Cu;
        // 0x204f60: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f5c) {
            ctx->pc = 0x204F74u;
            return;
        }
    }
    ctx->pc = 0x204F64u;
    // 0x204f64: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204F64u;
    SET_GPR_U32(ctx, 31, 0x204F6Cu);
    ctx->pc = 0x204F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F64u;
    // 0x204f68: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204F64u, 0x204F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F6Cu;
label_204f6c:
    // 0x204f6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204F6Cu;
    {
        const bool branch_taken_0x204f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F6Cu;
        // 0x204f70: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f6c) {
            ctx->pc = 0x204F7Cu;
            return;
        }
    }
    ctx->pc = 0x204F74u;
}
