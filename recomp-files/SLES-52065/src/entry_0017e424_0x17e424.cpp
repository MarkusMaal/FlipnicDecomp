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

// Function: entry_0017e424
// Address: 0x17e424 - 0x17e438
void entry_0017e424_0x17e424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e424_0x17e424");
#endif

    ctx->pc = 0x17e424u;

    // 0x17e424: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x17e424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17e428: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E428u;
    {
        const bool branch_taken_0x17e428 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E428u;
        // 0x17e42c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e428) {
            ctx->pc = 0x17E438u;
            return;
        }
    }
    ctx->pc = 0x17E430u;
    // 0x17e430: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x17E430u;
    {
        const bool branch_taken_0x17e430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E430u;
        // 0x17e434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e430) {
            ctx->pc = 0x17E494u;
            return;
        }
    }
    ctx->pc = 0x17E438u;
}
