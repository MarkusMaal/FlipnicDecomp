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

// Function: FUN_001fbe28
// Address: 0x1fbe28 - 0x1fbe48
void FUN_001fbe28_0x1fbe28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fbe28_0x1fbe28");
#endif

    switch (ctx->pc) {
        case 0x1fbe30u: goto label_1fbe30;
        case 0x1fbe38u: goto label_1fbe38;
        case 0x1fbe40u: goto label_1fbe40;
        default: break;
    }

    ctx->pc = 0x1fbe28u;

    // 0x1fbe28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fbe28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fbe2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fbe2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fbe30:
    // 0x1fbe30: 0xc080564  jal         func_201590
    ctx->pc = 0x1FBE30u;
    SET_GPR_U32(ctx, 31, 0x1FBE38u);
    ctx->pc = 0x1FBE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBE30u;
    // 0x1fbe34: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201590u, 0x1FBE30u, 0x1FBE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBE38u;
label_1fbe38:
    // 0x1fbe38: 0xc040072  jal         func_1001C8
    ctx->pc = 0x1FBE38u;
    SET_GPR_U32(ctx, 31, 0x1FBE40u);
    ctx->pc = 0x1FBE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBE38u;
    // 0x1fbe3c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1001C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1001C8u, 0x1FBE38u, 0x1FBE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBE40u;
label_1fbe40:
    // 0x1fbe40: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FBE40u;
    {
        const bool branch_taken_0x1fbe40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbe40) {
            ctx->pc = 0x1FBE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fbe30;
        }
    }
    ctx->pc = 0x1FBE48u;
}
