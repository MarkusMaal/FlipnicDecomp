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

// Function: entry_001df858
// Address: 0x1df858 - 0x1df868
void entry_001df858_0x1df858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df858_0x1df858");
#endif

    ctx->pc = 0x1df858u;

    // 0x1df858: 0x1102005f  beq         $t0, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1DF858u;
    {
        const bool branch_taken_0x1df858 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF858u;
        // 0x1df85c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df858) {
            ctx->pc = 0x1DF9D8u;
            return;
        }
    }
    ctx->pc = 0x1DF860u;
    // 0x1df860: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1DF860u;
    {
        const bool branch_taken_0x1df860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF860u;
        // 0x1df864: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df860) {
            ctx->pc = 0x1DFA44u;
            return;
        }
    }
    ctx->pc = 0x1DF868u;
}
