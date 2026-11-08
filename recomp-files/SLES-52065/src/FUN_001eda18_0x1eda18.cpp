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

// Function: FUN_001eda18
// Address: 0x1eda18 - 0x1eda4c
void FUN_001eda18_0x1eda18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eda18_0x1eda18");
#endif

    switch (ctx->pc) {
        case 0x1eda28u: goto label_1eda28;
        case 0x1eda38u: goto label_1eda38;
        default: break;
    }

    ctx->pc = 0x1eda18u;

    // 0x1eda18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eda18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eda1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eda1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eda20: 0xc07b074  jal         func_1EC1D0
    ctx->pc = 0x1EDA20u;
    SET_GPR_U32(ctx, 31, 0x1EDA28u);
    ctx->pc = 0x1EDA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDA20u;
    // 0x1eda24: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC1D0u, 0x1EDA20u, 0x1EDA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDA28u;
label_1eda28:
    // 0x1eda28: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1eda28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1eda2c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1eda2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1eda30: 0xc07acd4  jal         func_1EB350
    ctx->pc = 0x1EDA30u;
    SET_GPR_U32(ctx, 31, 0x1EDA38u);
    ctx->pc = 0x1EDA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDA30u;
    // 0x1eda34: 0x8c65c7d4  lw          $a1, -0x382C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952916)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB350u, 0x1EDA30u, 0x1EDA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDA38u;
label_1eda38:
    // 0x1eda38: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1eda38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1eda3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eda3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eda40: 0xac60a3c8  sw          $zero, -0x5C38($v1)
    ctx->pc = 0x1eda40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21A3C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21A3C8u, _value); } while (0);
    // 0x1eda44: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA44u;
        // 0x1eda48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDA4Cu;
}
