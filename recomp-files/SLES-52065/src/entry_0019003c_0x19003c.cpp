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

// Function: entry_0019003c
// Address: 0x19003c - 0x19004c
void entry_0019003c_0x19003c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019003c_0x19003c");
#endif

    ctx->pc = 0x19003cu;

    // 0x19003c: 0x14b10003  bne         $a1, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19003Cu;
    {
        const bool branch_taken_0x19003c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        ctx->pc = 0x190040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19003Cu;
        // 0x190040: 0xae050018  sw          $a1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19003c) {
            ctx->pc = 0x19004Cu;
            return;
        }
    }
    ctx->pc = 0x190044u;
    // 0x190044: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x190044u;
    {
        const bool branch_taken_0x190044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190044u;
        // 0x190048: 0xae110028  sw          $s1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190044) {
            ctx->pc = 0x190088u;
            return;
        }
    }
    ctx->pc = 0x19004Cu;
}
