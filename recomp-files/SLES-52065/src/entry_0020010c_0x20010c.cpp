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

// Function: entry_0020010c
// Address: 0x20010c - 0x20011c
void entry_0020010c_0x20010c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020010c_0x20010c");
#endif

    ctx->pc = 0x20010cu;

    // 0x20010c: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x20010cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200110: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x200110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x200114: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x200114u;
    {
        const bool branch_taken_0x200114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200114u;
        // 0x200118: 0x1e0682d  daddu       $t5, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200114) {
            ctx->pc = 0x200018u;
            return;
        }
    }
    ctx->pc = 0x20011Cu;
}
