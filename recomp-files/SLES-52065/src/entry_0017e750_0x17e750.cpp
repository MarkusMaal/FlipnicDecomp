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

// Function: entry_0017e750
// Address: 0x17e750 - 0x17e768
void entry_0017e750_0x17e750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e750_0x17e750");
#endif

    ctx->pc = 0x17e750u;

    // 0x17e750: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x17e750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17e754: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E754u;
    {
        const bool branch_taken_0x17e754 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E754u;
        // 0x17e758: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e754) {
            ctx->pc = 0x17E768u;
            return;
        }
    }
    ctx->pc = 0x17E75Cu;
    // 0x17e75c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17e760: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E760u;
    {
        const bool branch_taken_0x17e760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E760u;
        // 0x17e764: 0x2442f8c8  addiu       $v0, $v0, -0x738 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e760) {
            ctx->pc = 0x17E770u;
            return;
        }
    }
    ctx->pc = 0x17E768u;
}
