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

// Function: entry_0019adc4
// Address: 0x19adc4 - 0x19addc
void entry_0019adc4_0x19adc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019adc4_0x19adc4");
#endif

    switch (ctx->pc) {
        case 0x19adccu: goto label_19adcc;
        case 0x19add4u: goto label_19add4;
        default: break;
    }

    ctx->pc = 0x19adc4u;

    // 0x19adc4: 0xc0667bc  jal         func_199EF0
    ctx->pc = 0x19ADC4u;
    SET_GPR_U32(ctx, 31, 0x19ADCCu);
    ctx->pc = 0x199EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199EF0u, 0x19ADC4u, 0x19ADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ADCCu;
label_19adcc:
    // 0x19adcc: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19ADCCu;
    SET_GPR_U32(ctx, 31, 0x19ADD4u);
    ctx->pc = 0x19ADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ADCCu;
    // 0x19add0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19ADCCu, 0x19ADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ADD4u;
label_19add4:
    // 0x19add4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x19ADD4u;
    {
        const bool branch_taken_0x19add4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19add4) {
            ctx->pc = 0x19AE28u;
            return;
        }
    }
    ctx->pc = 0x19ADDCu;
}
