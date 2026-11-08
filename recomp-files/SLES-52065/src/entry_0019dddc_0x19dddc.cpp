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

// Function: entry_0019dddc
// Address: 0x19dddc - 0x19dde4
void entry_0019dddc_0x19dddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dddc_0x19dddc");
#endif

    ctx->pc = 0x19dddcu;

    // 0x19dddc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x19DDDCu;
    {
        const bool branch_taken_0x19dddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DDDCu;
        // 0x19dde0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dddc) {
            ctx->pc = 0x19DE40u;
            return;
        }
    }
    ctx->pc = 0x19DDE4u;
}
