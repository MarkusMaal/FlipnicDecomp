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

// Function: entry_001df810
// Address: 0x1df810 - 0x1df820
void entry_001df810_0x1df810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df810_0x1df810");
#endif

    ctx->pc = 0x1df810u;

    // 0x1df810: 0x11020039  beq         $t0, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1DF810u;
    {
        const bool branch_taken_0x1df810 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF810u;
        // 0x1df814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df810) {
            ctx->pc = 0x1DF8F8u;
            return;
        }
    }
    ctx->pc = 0x1DF818u;
    // 0x1df818: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x1DF818u;
    {
        const bool branch_taken_0x1df818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF818u;
        // 0x1df81c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df818) {
            ctx->pc = 0x1DFA44u;
            return;
        }
    }
    ctx->pc = 0x1DF820u;
}
