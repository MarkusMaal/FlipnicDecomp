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

// Function: entry_00111ad0
// Address: 0x111ad0 - 0x111adc
void entry_00111ad0_0x111ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111ad0_0x111ad0");
#endif

    ctx->pc = 0x111ad0u;

    // 0x111ad0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x111ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ad4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x111AD4u;
    {
        const bool branch_taken_0x111ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AD4u;
        // 0x111ad8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ad4) {
            ctx->pc = 0x111B0Cu;
            return;
        }
    }
    ctx->pc = 0x111ADCu;
}
