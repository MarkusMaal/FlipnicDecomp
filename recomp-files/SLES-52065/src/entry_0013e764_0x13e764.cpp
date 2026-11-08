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

// Function: entry_0013e764
// Address: 0x13e764 - 0x13e770
void entry_0013e764_0x13e764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e764_0x13e764");
#endif

    ctx->pc = 0x13e764u;

    // 0x13e764: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13E764u;
    {
        const bool branch_taken_0x13e764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E764u;
        // 0x13e768: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e764) {
            ctx->pc = 0x13E770u;
            return;
        }
    }
    ctx->pc = 0x13E76Cu;
    // 0x13e76c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x13e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x13e770u;
}
