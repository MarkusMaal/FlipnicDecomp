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

// Function: entry_001f0748
// Address: 0x1f0748 - 0x1f0758
void entry_001f0748_0x1f0748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0748_0x1f0748");
#endif

    ctx->pc = 0x1f0748u;

    // 0x1f0748: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0748u;
    {
        const bool branch_taken_0x1f0748 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0748u;
        // 0x1f074c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0748) {
            ctx->pc = 0x1F0758u;
            return;
        }
    }
    ctx->pc = 0x1F0750u;
    // 0x1f0750: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0750u;
    {
        const bool branch_taken_0x1f0750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0750u;
        // 0x1f0754: 0xae20041c  sw          $zero, 0x41C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0750) {
            ctx->pc = 0x1F0764u;
            return;
        }
    }
    ctx->pc = 0x1F0758u;
}
