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

// Function: entry_0010508c
// Address: 0x10508c - 0x105098
void entry_0010508c_0x10508c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010508c_0x10508c");
#endif

    ctx->pc = 0x10508cu;

    // 0x10508c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x10508Cu;
    {
        const bool branch_taken_0x10508c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10508Cu;
        // 0x105090: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10508c) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x105094u;
    // 0x105094: 0x24040240  addiu       $a0, $zero, 0x240
    ctx->pc = 0x105094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    ctx->pc = 0x105098u;
}
