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

// Function: entry_001df890
// Address: 0x1df890 - 0x1df8a0
void entry_001df890_0x1df890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df890_0x1df890");
#endif

    ctx->pc = 0x1df890u;

    // 0x1df890: 0x11020067  beq         $t0, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x1DF890u;
    {
        const bool branch_taken_0x1df890 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF890u;
        // 0x1df894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df890) {
            ctx->pc = 0x1DFA30u;
            return;
        }
    }
    ctx->pc = 0x1DF898u;
    // 0x1df898: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x1DF898u;
    {
        const bool branch_taken_0x1df898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF898u;
        // 0x1df89c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df898) {
            ctx->pc = 0x1DFA44u;
            return;
        }
    }
    ctx->pc = 0x1DF8A0u;
}
