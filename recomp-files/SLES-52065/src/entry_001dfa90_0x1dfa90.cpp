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

// Function: entry_001dfa90
// Address: 0x1dfa90 - 0x1dfaa8
void entry_001dfa90_0x1dfa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfa90_0x1dfa90");
#endif

    ctx->pc = 0x1dfa90u;

    // 0x1dfa90: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DFA90u;
    {
        const bool branch_taken_0x1dfa90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DFA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA90u;
        // 0x1dfa94: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa90) {
            ctx->pc = 0x1DFAD8u;
            return;
        }
    }
    ctx->pc = 0x1DFA98u;
    // 0x1dfa98: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DFA98u;
    {
        const bool branch_taken_0x1dfa98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DFA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA98u;
        // 0x1dfa9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa98) {
            ctx->pc = 0x1DFAF0u;
            return;
        }
    }
    ctx->pc = 0x1DFAA0u;
    // 0x1dfaa0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1DFAA0u;
    {
        const bool branch_taken_0x1dfaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAA0u;
        // 0x1dfaa4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfaa0) {
            ctx->pc = 0x1DFB1Cu;
            return;
        }
    }
    ctx->pc = 0x1DFAA8u;
}
