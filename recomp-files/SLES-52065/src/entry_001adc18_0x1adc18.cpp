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

// Function: entry_001adc18
// Address: 0x1adc18 - 0x1adc30
void entry_001adc18_0x1adc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adc18_0x1adc18");
#endif

    switch (ctx->pc) {
        case 0x1adc20u: goto label_1adc20;
        default: break;
    }

    ctx->pc = 0x1adc18u;

    // 0x1adc18: 0xc055c68  jal         func_1571A0
    ctx->pc = 0x1ADC18u;
    SET_GPR_U32(ctx, 31, 0x1ADC20u);
    ctx->pc = 0x1571A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1571A0u, 0x1ADC18u, 0x1ADC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADC20u;
label_1adc20:
    // 0x1adc20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1adc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adc24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1adc24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adc28: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC28u;
        // 0x1adc2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADC30u;
}
