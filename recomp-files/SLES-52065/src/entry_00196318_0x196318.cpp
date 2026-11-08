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

// Function: entry_00196318
// Address: 0x196318 - 0x19632c
void entry_00196318_0x196318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196318_0x196318");
#endif

    ctx->pc = 0x196318u;

    // 0x196318: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x196318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19631c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19631Cu;
    {
        const bool branch_taken_0x19631c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19631c) {
            ctx->pc = 0x19632Cu;
            return;
        }
    }
    ctx->pc = 0x196324u;
    // 0x196324: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x196324u;
    {
        const bool branch_taken_0x196324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196324u;
        // 0x196328: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196324) {
            ctx->pc = 0x196348u;
            return;
        }
    }
    ctx->pc = 0x19632Cu;
}
