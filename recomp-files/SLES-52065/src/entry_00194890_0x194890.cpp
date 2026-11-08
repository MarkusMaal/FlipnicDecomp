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

// Function: entry_00194890
// Address: 0x194890 - 0x1948a0
void entry_00194890_0x194890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194890_0x194890");
#endif

    ctx->pc = 0x194890u;

    // 0x194890: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194890u;
    {
        const bool branch_taken_0x194890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x194890) {
            ctx->pc = 0x1948A0u;
            return;
        }
    }
    ctx->pc = 0x194898u;
    // 0x194898: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x194898u;
    {
        const bool branch_taken_0x194898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194898u;
        // 0x19489c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194898) {
            ctx->pc = 0x1948A8u;
            return;
        }
    }
    ctx->pc = 0x1948A0u;
}
