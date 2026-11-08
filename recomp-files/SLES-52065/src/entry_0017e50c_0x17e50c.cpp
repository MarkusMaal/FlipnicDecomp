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

// Function: entry_0017e50c
// Address: 0x17e50c - 0x17e520
void entry_0017e50c_0x17e50c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e50c_0x17e50c");
#endif

    ctx->pc = 0x17e50cu;

    // 0x17e50c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x17e50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17e510: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E510u;
    {
        const bool branch_taken_0x17e510 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E510u;
        // 0x17e514: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e510) {
            ctx->pc = 0x17E520u;
            return;
        }
    }
    ctx->pc = 0x17E518u;
    // 0x17e518: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E518u;
    {
        const bool branch_taken_0x17e518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E518u;
        // 0x17e51c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e518) {
            ctx->pc = 0x17E528u;
            return;
        }
    }
    ctx->pc = 0x17E520u;
}
