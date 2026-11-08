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

// Function: entry_0011bd0c
// Address: 0x11bd0c - 0x11bd18
void entry_0011bd0c_0x11bd0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bd0c_0x11bd0c");
#endif

    ctx->pc = 0x11bd0cu;

    // 0x11bd0c: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x11bd0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x11bd10: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x11BD10u;
    {
        const bool branch_taken_0x11bd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD10u;
        // 0x11bd14: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd10) {
            ctx->pc = 0x11BC58u;
            return;
        }
    }
    ctx->pc = 0x11BD18u;
}
