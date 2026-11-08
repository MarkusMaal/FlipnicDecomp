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

// Function: FUN_0018b040
// Address: 0x18b040 - 0x18b07c
void FUN_0018b040_0x18b040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018b040_0x18b040");
#endif

    switch (ctx->pc) {
        case 0x18b050u: goto label_18b050;
        case 0x18b06cu: goto label_18b06c;
        default: break;
    }

    ctx->pc = 0x18b040u;

    // 0x18b040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18b040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18b044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18b044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18b048: 0xc062d20  jal         func_18B480
    ctx->pc = 0x18B048u;
    SET_GPR_U32(ctx, 31, 0x18B050u);
    ctx->pc = 0x18B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B480u, 0x18B048u, 0x18B050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B050u;
label_18b050:
    // 0x18b050: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18b050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18b054: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B054u;
    {
        const bool branch_taken_0x18b054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18B058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B054u;
        // 0x18b058: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b054) {
            ctx->pc = 0x18B064u;
            goto label_18b064;
        }
    }
    ctx->pc = 0x18B05Cu;
    // 0x18b05c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B05Cu;
    {
        const bool branch_taken_0x18b05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B05Cu;
        // 0x18b060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b05c) {
            ctx->pc = 0x18B070u;
            goto label_18b070;
        }
    }
    ctx->pc = 0x18B064u;
label_18b064:
    // 0x18b064: 0xc077cd8  jal         func_1DF360
    ctx->pc = 0x18B064u;
    SET_GPR_U32(ctx, 31, 0x18B06Cu);
    ctx->pc = 0x1DF360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF360u, 0x18B064u, 0x18B06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B06Cu;
label_18b06c:
    // 0x18b06c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b070:
    // 0x18b070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b074: 0x3e00008  jr          $ra
    ctx->pc = 0x18B074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B074u;
        // 0x18b078: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B07Cu;
}
