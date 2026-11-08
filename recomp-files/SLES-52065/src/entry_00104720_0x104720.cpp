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

// Function: entry_00104720
// Address: 0x104720 - 0x10472c
void entry_00104720_0x104720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104720_0x104720");
#endif

    ctx->pc = 0x104720u;

    // 0x104720: 0x100002bd  b           . + 4 + (0x2BD << 2)
    ctx->pc = 0x104720u;
    {
        const bool branch_taken_0x104720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104720u;
        // 0x104724: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104720) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x104728u;
    // 0x104728: 0x24040250  addiu       $a0, $zero, 0x250
    ctx->pc = 0x104728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    ctx->pc = 0x10472cu;
}
