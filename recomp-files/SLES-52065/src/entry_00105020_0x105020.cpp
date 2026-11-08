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

// Function: entry_00105020
// Address: 0x105020 - 0x10502c
void entry_00105020_0x105020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105020_0x105020");
#endif

    ctx->pc = 0x105020u;

    // 0x105020: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x105020u;
    {
        const bool branch_taken_0x105020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105020u;
        // 0x105024: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105020) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x105028u;
    // 0x105028: 0x24040480  addiu       $a0, $zero, 0x480
    ctx->pc = 0x105028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->pc = 0x10502cu;
}
