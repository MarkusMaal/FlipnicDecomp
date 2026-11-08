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

// Function: entry_0019713c
// Address: 0x19713c - 0x197148
void entry_0019713c_0x19713c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019713c_0x19713c");
#endif

    ctx->pc = 0x19713cu;

    // 0x19713c: 0x0  nop
    ctx->pc = 0x19713cu;
    // NOP
    // 0x197140: 0x1000ffa8  b           . + 4 + (-0x58 << 2)
    ctx->pc = 0x197140u;
    {
        const bool branch_taken_0x197140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197140u;
        // 0x197144: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197140) {
            ctx->pc = 0x196FE4u;
            return;
        }
    }
    ctx->pc = 0x197148u;
}
